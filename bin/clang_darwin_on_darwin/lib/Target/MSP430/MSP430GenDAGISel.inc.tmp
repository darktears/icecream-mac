/*===- TableGen'erated file -------------------------------------*- C++ -*-===*\
|*                                                                            *|
|* DAG Instruction Selector for the MSP430 target                             *|
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
/*0*/       OPC_SwitchOpcode /*34 cases */, 1|128,25/*3201*/, TARGET_VAL(ISD::STORE),// ->3206
/*5*/         OPC_RecordMemRef,
/*6*/         OPC_RecordNode, // #0 = 'st' chained node
/*7*/         OPC_Scope, 28|128,24/*3100*/, /*->3110*/ // 2 children in Scope
/*10*/          OPC_MoveChild1,
/*11*/          OPC_SwitchOpcode /*11 cases */, 55|128,5/*695*/, TARGET_VAL(ISD::AND),// ->711
/*16*/            OPC_Scope, 112|128,4/*624*/, /*->643*/ // 2 children in Scope
/*19*/              OPC_MoveChild0,
/*20*/              OPC_SwitchOpcode /*2 cases */, 47|128,3/*431*/, TARGET_VAL(ISD::LOAD),// ->456
/*25*/                OPC_RecordMemRef,
/*26*/                OPC_RecordNode, // #1 = 'ld' chained node
/*27*/                OPC_CheckFoldableChainNode,
/*28*/                OPC_RecordChild1, // #2 = $dst
/*29*/                OPC_CheckPredicate, 0, // Predicate_unindexedload
/*31*/                OPC_CheckPredicate, 1, // Predicate_load
/*33*/                OPC_MoveParent,
/*34*/                OPC_Scope, 44|128,2/*300*/, /*->337*/ // 2 children in Scope
/*37*/                  OPC_MoveChild1,
/*38*/                  OPC_SwitchOpcode /*2 cases */, 28|128,1/*156*/, TARGET_VAL(ISD::XOR),// ->199
/*43*/                    OPC_Scope, 87, /*->132*/ // 2 children in Scope
/*45*/                      OPC_MoveChild0,
/*46*/                      OPC_CheckOpcode, TARGET_VAL(ISD::LOAD),
/*49*/                      OPC_RecordMemRef,
/*50*/                      OPC_RecordNode, // #3 = 'ld' chained node
/*51*/                      OPC_CheckFoldableChainNode,
/*52*/                      OPC_RecordChild1, // #4 = $src
/*53*/                      OPC_CheckPredicate, 0, // Predicate_unindexedload
/*55*/                      OPC_CheckPredicate, 1, // Predicate_load
/*57*/                      OPC_MoveParent,
/*58*/                      OPC_CheckChild1Integer, 127|128,127|128,127|128,127|128,127|128,127|128,127|128,127|128,127|128,1/*18446744073709551615*/, 
/*69*/                      OPC_MoveParent,
/*70*/                      OPC_SwitchType /*2 cases */, 28, MVT::i8,// ->101
/*73*/                        OPC_MoveParent,
/*74*/                        OPC_CheckChild2Same, 2,
/*76*/                        OPC_CheckPredicate, 2, // Predicate_unindexedstore
/*78*/                        OPC_CheckPredicate, 3, // Predicate_store
/*80*/                        OPC_CheckComplexPat, /*CP*/0, /*#*/2, // SelectAddr:$dst #5 #6
/*83*/                        OPC_CheckComplexPat, /*CP*/0, /*#*/4, // SelectAddr:$src #7 #8
/*86*/                        OPC_EmitMergeInputChains, 3, 0, 1, 3, 
/*91*/                        OPC_MorphNodeTo1, TARGET_VAL(MSP430::BIC8mm), 0|OPFL_Chain|OPFL_MemRefs,
                                  MVT::i16, 4/*#Ops*/, 5, 6, 7, 8, 
                              // Src: (st (and:i8 (ld:i8 addr:iPTR:$dst)<<P:Predicate_unindexedload>><<P:Predicate_load>>, (xor:i8 (ld:i8 addr:iPTR:$src)<<P:Predicate_unindexedload>><<P:Predicate_load>>, -1:i8)), addr:iPTR:$dst)<<P:Predicate_unindexedstore>><<P:Predicate_store>> - Complexity = 50
                              // Dst: (BIC8mm:i16 addr:i16:$dst, addr:i16:$src)
/*101*/                     /*SwitchType*/ 28, MVT::i16,// ->131
/*103*/                       OPC_MoveParent,
/*104*/                       OPC_CheckChild2Same, 2,
/*106*/                       OPC_CheckPredicate, 2, // Predicate_unindexedstore
/*108*/                       OPC_CheckPredicate, 3, // Predicate_store
/*110*/                       OPC_CheckComplexPat, /*CP*/0, /*#*/2, // SelectAddr:$dst #5 #6
/*113*/                       OPC_CheckComplexPat, /*CP*/0, /*#*/4, // SelectAddr:$src #7 #8
/*116*/                       OPC_EmitMergeInputChains, 3, 0, 1, 3, 
/*121*/                       OPC_MorphNodeTo1, TARGET_VAL(MSP430::BIC16mm), 0|OPFL_Chain|OPFL_MemRefs,
                                  MVT::i16, 4/*#Ops*/, 5, 6, 7, 8, 
                              // Src: (st (and:i16 (ld:i16 addr:iPTR:$dst)<<P:Predicate_unindexedload>><<P:Predicate_load>>, (xor:i16 (ld:i16 addr:iPTR:$src)<<P:Predicate_unindexedload>><<P:Predicate_load>>, -1:i16)), addr:iPTR:$dst)<<P:Predicate_unindexedstore>><<P:Predicate_store>> - Complexity = 50
                              // Dst: (BIC16mm:i16 addr:i16:$dst, addr:i16:$src)
/*131*/                     0, // EndSwitchType
/*132*/                   /*Scope*/ 65, /*->198*/
/*133*/                     OPC_RecordChild0, // #3 = $src
/*134*/                     OPC_CheckChild1Integer, 127|128,127|128,127|128,127|128,127|128,127|128,127|128,127|128,127|128,1/*18446744073709551615*/, 
/*145*/                     OPC_MoveParent,
/*146*/                     OPC_SwitchType /*2 cases */, 23, MVT::i8,// ->172
/*149*/                       OPC_MoveParent,
/*150*/                       OPC_CheckChild2Same, 2,
/*152*/                       OPC_CheckPredicate, 2, // Predicate_unindexedstore
/*154*/                       OPC_CheckPredicate, 3, // Predicate_store
/*156*/                       OPC_CheckComplexPat, /*CP*/0, /*#*/2, // SelectAddr:$dst #4 #5
/*159*/                       OPC_EmitMergeInputChains, 2, 0, 1, 
/*163*/                       OPC_MorphNodeTo1, TARGET_VAL(MSP430::BIC8mr), 0|OPFL_Chain|OPFL_MemRefs,
                                  MVT::i16, 3/*#Ops*/, 4, 5, 3, 
                              // Src: (st (and:i8 (ld:i8 addr:iPTR:$dst)<<P:Predicate_unindexedload>><<P:Predicate_load>>, (xor:i8 GR8:i8:$src, -1:i8)), addr:iPTR:$dst)<<P:Predicate_unindexedstore>><<P:Predicate_store>> - Complexity = 37
                              // Dst: (BIC8mr:i16 addr:i16:$dst, GR8:i8:$src)
/*172*/                     /*SwitchType*/ 23, MVT::i16,// ->197
/*174*/                       OPC_MoveParent,
/*175*/                       OPC_CheckChild2Same, 2,
/*177*/                       OPC_CheckPredicate, 2, // Predicate_unindexedstore
/*179*/                       OPC_CheckPredicate, 3, // Predicate_store
/*181*/                       OPC_CheckComplexPat, /*CP*/0, /*#*/2, // SelectAddr:$dst #4 #5
/*184*/                       OPC_EmitMergeInputChains, 2, 0, 1, 
/*188*/                       OPC_MorphNodeTo1, TARGET_VAL(MSP430::BIC16mr), 0|OPFL_Chain|OPFL_MemRefs,
                                  MVT::i16, 3/*#Ops*/, 4, 5, 3, 
                              // Src: (st (and:i16 (ld:i16 addr:iPTR:$dst)<<P:Predicate_unindexedload>><<P:Predicate_load>>, (xor:i16 GR16:i16:$src, -1:i16)), addr:iPTR:$dst)<<P:Predicate_unindexedstore>><<P:Predicate_store>> - Complexity = 37
                              // Dst: (BIC16mr:i16 addr:i16:$dst, GR16:i16:$src)
/*197*/                     0, // EndSwitchType
/*198*/                   0, /*End of Scope*/
/*199*/                 /*SwitchOpcode*/ 5|128,1/*133*/, TARGET_VAL(ISD::LOAD),// ->336
/*203*/                   OPC_RecordMemRef,
/*204*/                   OPC_RecordNode, // #3 = 'ld' chained node
/*205*/                   OPC_CheckFoldableChainNode,
/*206*/                   OPC_RecordChild1, // #4 = $src
/*207*/                   OPC_CheckPredicate, 0, // Predicate_unindexedload
/*209*/                   OPC_CheckPredicate, 1, // Predicate_load
/*211*/                   OPC_MoveParent,
/*212*/                   OPC_SwitchType /*2 cases */, 59, MVT::i8,// ->274
/*215*/                     OPC_MoveParent,
/*216*/                     OPC_Scope, 27, /*->245*/ // 2 children in Scope
/*218*/                       OPC_CheckChild2Same, 2,
/*220*/                       OPC_CheckPredicate, 2, // Predicate_unindexedstore
/*222*/                       OPC_CheckPredicate, 3, // Predicate_store
/*224*/                       OPC_CheckComplexPat, /*CP*/0, /*#*/2, // SelectAddr:$dst #5 #6
/*227*/                       OPC_CheckComplexPat, /*CP*/0, /*#*/4, // SelectAddr:$src #7 #8
/*230*/                       OPC_EmitMergeInputChains, 3, 0, 1, 3, 
/*235*/                       OPC_MorphNodeTo1, TARGET_VAL(MSP430::AND8mm), 0|OPFL_Chain|OPFL_MemRefs,
                                  MVT::i16, 4/*#Ops*/, 5, 6, 7, 8, 
                              // Src: (st (and:i8 (ld:i8 addr:iPTR:$dst)<<P:Predicate_unindexedload>><<P:Predicate_load>>, (ld:i8 addr:iPTR:$src)<<P:Predicate_unindexedload>><<P:Predicate_load>>), addr:iPTR:$dst)<<P:Predicate_unindexedstore>><<P:Predicate_store>> - Complexity = 42
                              // Dst: (AND8mm:i16 addr:i16:$dst, addr:i16:$src)
/*245*/                     /*Scope*/ 27, /*->273*/
/*246*/                       OPC_CheckChild2Same, 4,
/*248*/                       OPC_CheckPredicate, 2, // Predicate_unindexedstore
/*250*/                       OPC_CheckPredicate, 3, // Predicate_store
/*252*/                       OPC_CheckComplexPat, /*CP*/0, /*#*/2, // SelectAddr:$src #5 #6
/*255*/                       OPC_CheckComplexPat, /*CP*/0, /*#*/4, // SelectAddr:$dst #7 #8
/*258*/                       OPC_EmitMergeInputChains, 3, 0, 1, 3, 
/*263*/                       OPC_MorphNodeTo1, TARGET_VAL(MSP430::AND8mm), 0|OPFL_Chain|OPFL_MemRefs,
                                  MVT::i16, 4/*#Ops*/, 7, 8, 5, 6, 
                              // Src: (st (and:i8 (ld:i8 addr:iPTR:$src)<<P:Predicate_unindexedload>><<P:Predicate_load>>, (ld:i8 addr:iPTR:$dst)<<P:Predicate_unindexedload>><<P:Predicate_load>>), addr:iPTR:$dst)<<P:Predicate_unindexedstore>><<P:Predicate_store>> - Complexity = 42
                              // Dst: (AND8mm:i16 addr:i16:$dst, addr:i16:$src)
/*273*/                     0, /*End of Scope*/
/*274*/                   /*SwitchType*/ 59, MVT::i16,// ->335
/*276*/                     OPC_MoveParent,
/*277*/                     OPC_Scope, 27, /*->306*/ // 2 children in Scope
/*279*/                       OPC_CheckChild2Same, 2,
/*281*/                       OPC_CheckPredicate, 2, // Predicate_unindexedstore
/*283*/                       OPC_CheckPredicate, 3, // Predicate_store
/*285*/                       OPC_CheckComplexPat, /*CP*/0, /*#*/2, // SelectAddr:$dst #5 #6
/*288*/                       OPC_CheckComplexPat, /*CP*/0, /*#*/4, // SelectAddr:$src #7 #8
/*291*/                       OPC_EmitMergeInputChains, 3, 0, 1, 3, 
/*296*/                       OPC_MorphNodeTo1, TARGET_VAL(MSP430::AND16mm), 0|OPFL_Chain|OPFL_MemRefs,
                                  MVT::i16, 4/*#Ops*/, 5, 6, 7, 8, 
                              // Src: (st (and:i16 (ld:i16 addr:iPTR:$dst)<<P:Predicate_unindexedload>><<P:Predicate_load>>, (ld:i16 addr:iPTR:$src)<<P:Predicate_unindexedload>><<P:Predicate_load>>), addr:iPTR:$dst)<<P:Predicate_unindexedstore>><<P:Predicate_store>> - Complexity = 42
                              // Dst: (AND16mm:i16 addr:i16:$dst, addr:i16:$src)
/*306*/                     /*Scope*/ 27, /*->334*/
/*307*/                       OPC_CheckChild2Same, 4,
/*309*/                       OPC_CheckPredicate, 2, // Predicate_unindexedstore
/*311*/                       OPC_CheckPredicate, 3, // Predicate_store
/*313*/                       OPC_CheckComplexPat, /*CP*/0, /*#*/2, // SelectAddr:$src #5 #6
/*316*/                       OPC_CheckComplexPat, /*CP*/0, /*#*/4, // SelectAddr:$dst #7 #8
/*319*/                       OPC_EmitMergeInputChains, 3, 0, 1, 3, 
/*324*/                       OPC_MorphNodeTo1, TARGET_VAL(MSP430::AND16mm), 0|OPFL_Chain|OPFL_MemRefs,
                                  MVT::i16, 4/*#Ops*/, 7, 8, 5, 6, 
                              // Src: (st (and:i16 (ld:i16 addr:iPTR:$src)<<P:Predicate_unindexedload>><<P:Predicate_load>>, (ld:i16 addr:iPTR:$dst)<<P:Predicate_unindexedload>><<P:Predicate_load>>), addr:iPTR:$dst)<<P:Predicate_unindexedstore>><<P:Predicate_store>> - Complexity = 42
                              // Dst: (AND16mm:i16 addr:i16:$dst, addr:i16:$src)
/*334*/                     0, /*End of Scope*/
/*335*/                   0, // EndSwitchType
/*336*/                 0, // EndSwitchOpcode
/*337*/               /*Scope*/ 117, /*->455*/
/*338*/                 OPC_RecordChild1, // #3 = $src
/*339*/                 OPC_Scope, 61, /*->402*/ // 3 children in Scope
/*341*/                   OPC_MoveChild1,
/*342*/                   OPC_CheckOpcode, TARGET_VAL(ISD::Constant),
/*345*/                   OPC_MoveParent,
/*346*/                   OPC_SwitchType /*2 cases */, 25, MVT::i8,// ->374
/*349*/                     OPC_MoveParent,
/*350*/                     OPC_CheckChild2Same, 2,
/*352*/                     OPC_CheckPredicate, 2, // Predicate_unindexedstore
/*354*/                     OPC_CheckPredicate, 3, // Predicate_store
/*356*/                     OPC_CheckComplexPat, /*CP*/0, /*#*/2, // SelectAddr:$dst #4 #5
/*359*/                     OPC_EmitMergeInputChains, 2, 0, 1, 
/*363*/                     OPC_EmitConvertToTarget, 3,
/*365*/                     OPC_MorphNodeTo1, TARGET_VAL(MSP430::AND8mi), 0|OPFL_Chain|OPFL_MemRefs,
                                MVT::i16, 3/*#Ops*/, 4, 5, 6, 
                            // Src: (st (and:i8 (ld:i8 addr:iPTR:$dst)<<P:Predicate_unindexedload>><<P:Predicate_load>>, (imm:i8):$src), addr:iPTR:$dst)<<P:Predicate_unindexedstore>><<P:Predicate_store>> - Complexity = 32
                            // Dst: (AND8mi:i16 addr:i16:$dst, (imm:i8):$src)
/*374*/                   /*SwitchType*/ 25, MVT::i16,// ->401
/*376*/                     OPC_MoveParent,
/*377*/                     OPC_CheckChild2Same, 2,
/*379*/                     OPC_CheckPredicate, 2, // Predicate_unindexedstore
/*381*/                     OPC_CheckPredicate, 3, // Predicate_store
/*383*/                     OPC_CheckComplexPat, /*CP*/0, /*#*/2, // SelectAddr:$dst #4 #5
/*386*/                     OPC_EmitMergeInputChains, 2, 0, 1, 
/*390*/                     OPC_EmitConvertToTarget, 3,
/*392*/                     OPC_MorphNodeTo1, TARGET_VAL(MSP430::AND16mi), 0|OPFL_Chain|OPFL_MemRefs,
                                MVT::i16, 3/*#Ops*/, 4, 5, 6, 
                            // Src: (st (and:i16 (ld:i16 addr:iPTR:$dst)<<P:Predicate_unindexedload>><<P:Predicate_load>>, (imm:i16):$src), addr:iPTR:$dst)<<P:Predicate_unindexedstore>><<P:Predicate_store>> - Complexity = 32
                            // Dst: (AND16mi:i16 addr:i16:$dst, (imm:i16):$src)
/*401*/                   0, // EndSwitchType
/*402*/                 /*Scope*/ 25, /*->428*/
/*403*/                   OPC_CheckType, MVT::i8,
/*405*/                   OPC_MoveParent,
/*406*/                   OPC_CheckChild2Same, 2,
/*408*/                   OPC_CheckPredicate, 2, // Predicate_unindexedstore
/*410*/                   OPC_CheckPredicate, 3, // Predicate_store
/*412*/                   OPC_CheckComplexPat, /*CP*/0, /*#*/2, // SelectAddr:$dst #4 #5
/*415*/                   OPC_EmitMergeInputChains, 2, 0, 1, 
/*419*/                   OPC_MorphNodeTo1, TARGET_VAL(MSP430::AND8mr), 0|OPFL_Chain|OPFL_MemRefs,
                              MVT::i16, 3/*#Ops*/, 4, 5, 3, 
                          // Src: (st (and:i8 (ld:i8 addr:iPTR:$dst)<<P:Predicate_unindexedload>><<P:Predicate_load>>, GR8:i8:$src), addr:iPTR:$dst)<<P:Predicate_unindexedstore>><<P:Predicate_store>> - Complexity = 29
                          // Dst: (AND8mr:i16 addr:i16:$dst, GR8:i8:$src)
/*428*/                 /*Scope*/ 25, /*->454*/
/*429*/                   OPC_CheckType, MVT::i16,
/*431*/                   OPC_MoveParent,
/*432*/                   OPC_CheckChild2Same, 2,
/*434*/                   OPC_CheckPredicate, 2, // Predicate_unindexedstore
/*436*/                   OPC_CheckPredicate, 3, // Predicate_store
/*438*/                   OPC_CheckComplexPat, /*CP*/0, /*#*/2, // SelectAddr:$dst #4 #5
/*441*/                   OPC_EmitMergeInputChains, 2, 0, 1, 
/*445*/                   OPC_MorphNodeTo1, TARGET_VAL(MSP430::AND16mr), 0|OPFL_Chain|OPFL_MemRefs,
                              MVT::i16, 3/*#Ops*/, 4, 5, 3, 
                          // Src: (st (and:i16 (ld:i16 addr:iPTR:$dst)<<P:Predicate_unindexedload>><<P:Predicate_load>>, GR16:i16:$src), addr:iPTR:$dst)<<P:Predicate_unindexedstore>><<P:Predicate_store>> - Complexity = 29
                          // Dst: (AND16mr:i16 addr:i16:$dst, GR16:i16:$src)
/*454*/                 0, /*End of Scope*/
/*455*/               0, /*End of Scope*/
/*456*/             /*SwitchOpcode*/ 54|128,1/*182*/, TARGET_VAL(ISD::XOR),// ->642
/*460*/               OPC_Scope, 100, /*->562*/ // 2 children in Scope
/*462*/                 OPC_MoveChild0,
/*463*/                 OPC_CheckOpcode, TARGET_VAL(ISD::LOAD),
/*466*/                 OPC_RecordMemRef,
/*467*/                 OPC_RecordNode, // #1 = 'ld' chained node
/*468*/                 OPC_CheckFoldableChainNode,
/*469*/                 OPC_RecordChild1, // #2 = $src
/*470*/                 OPC_CheckPredicate, 0, // Predicate_unindexedload
/*472*/                 OPC_CheckPredicate, 1, // Predicate_load
/*474*/                 OPC_MoveParent,
/*475*/                 OPC_CheckChild1Integer, 127|128,127|128,127|128,127|128,127|128,127|128,127|128,127|128,127|128,1/*18446744073709551615*/, 
/*486*/                 OPC_MoveParent,
/*487*/                 OPC_MoveChild1,
/*488*/                 OPC_CheckOpcode, TARGET_VAL(ISD::LOAD),
/*491*/                 OPC_RecordMemRef,
/*492*/                 OPC_RecordNode, // #3 = 'ld' chained node
/*493*/                 OPC_CheckFoldableChainNode,
/*494*/                 OPC_RecordChild1, // #4 = $dst
/*495*/                 OPC_CheckPredicate, 0, // Predicate_unindexedload
/*497*/                 OPC_CheckPredicate, 1, // Predicate_load
/*499*/                 OPC_MoveParent,
/*500*/                 OPC_SwitchType /*2 cases */, 28, MVT::i8,// ->531
/*503*/                   OPC_MoveParent,
/*504*/                   OPC_CheckChild2Same, 4,
/*506*/                   OPC_CheckPredicate, 2, // Predicate_unindexedstore
/*508*/                   OPC_CheckPredicate, 3, // Predicate_store
/*510*/                   OPC_CheckComplexPat, /*CP*/0, /*#*/2, // SelectAddr:$src #5 #6
/*513*/                   OPC_CheckComplexPat, /*CP*/0, /*#*/4, // SelectAddr:$dst #7 #8
/*516*/                   OPC_EmitMergeInputChains, 3, 0, 1, 3, 
/*521*/                   OPC_MorphNodeTo1, TARGET_VAL(MSP430::BIC8mm), 0|OPFL_Chain|OPFL_MemRefs,
                              MVT::i16, 4/*#Ops*/, 7, 8, 5, 6, 
                          // Src: (st (and:i8 (xor:i8 (ld:i8 addr:iPTR:$src)<<P:Predicate_unindexedload>><<P:Predicate_load>>, -1:i8), (ld:i8 addr:iPTR:$dst)<<P:Predicate_unindexedload>><<P:Predicate_load>>), addr:iPTR:$dst)<<P:Predicate_unindexedstore>><<P:Predicate_store>> - Complexity = 50
                          // Dst: (BIC8mm:i16 addr:i16:$dst, addr:i16:$src)
/*531*/                 /*SwitchType*/ 28, MVT::i16,// ->561
/*533*/                   OPC_MoveParent,
/*534*/                   OPC_CheckChild2Same, 4,
/*536*/                   OPC_CheckPredicate, 2, // Predicate_unindexedstore
/*538*/                   OPC_CheckPredicate, 3, // Predicate_store
/*540*/                   OPC_CheckComplexPat, /*CP*/0, /*#*/2, // SelectAddr:$src #5 #6
/*543*/                   OPC_CheckComplexPat, /*CP*/0, /*#*/4, // SelectAddr:$dst #7 #8
/*546*/                   OPC_EmitMergeInputChains, 3, 0, 1, 3, 
/*551*/                   OPC_MorphNodeTo1, TARGET_VAL(MSP430::BIC16mm), 0|OPFL_Chain|OPFL_MemRefs,
                              MVT::i16, 4/*#Ops*/, 7, 8, 5, 6, 
                          // Src: (st (and:i16 (xor:i16 (ld:i16 addr:iPTR:$src)<<P:Predicate_unindexedload>><<P:Predicate_load>>, -1:i16), (ld:i16 addr:iPTR:$dst)<<P:Predicate_unindexedload>><<P:Predicate_load>>), addr:iPTR:$dst)<<P:Predicate_unindexedstore>><<P:Predicate_store>> - Complexity = 50
                          // Dst: (BIC16mm:i16 addr:i16:$dst, addr:i16:$src)
/*561*/                 0, // EndSwitchType
/*562*/               /*Scope*/ 78, /*->641*/
/*563*/                 OPC_RecordChild0, // #1 = $src
/*564*/                 OPC_CheckChild1Integer, 127|128,127|128,127|128,127|128,127|128,127|128,127|128,127|128,127|128,1/*18446744073709551615*/, 
/*575*/                 OPC_MoveParent,
/*576*/                 OPC_MoveChild1,
/*577*/                 OPC_CheckOpcode, TARGET_VAL(ISD::LOAD),
/*580*/                 OPC_RecordMemRef,
/*581*/                 OPC_RecordNode, // #2 = 'ld' chained node
/*582*/                 OPC_CheckFoldableChainNode,
/*583*/                 OPC_RecordChild1, // #3 = $dst
/*584*/                 OPC_CheckPredicate, 0, // Predicate_unindexedload
/*586*/                 OPC_CheckPredicate, 1, // Predicate_load
/*588*/                 OPC_MoveParent,
/*589*/                 OPC_SwitchType /*2 cases */, 23, MVT::i8,// ->615
/*592*/                   OPC_MoveParent,
/*593*/                   OPC_CheckChild2Same, 3,
/*595*/                   OPC_CheckPredicate, 2, // Predicate_unindexedstore
/*597*/                   OPC_CheckPredicate, 3, // Predicate_store
/*599*/                   OPC_CheckComplexPat, /*CP*/0, /*#*/3, // SelectAddr:$dst #4 #5
/*602*/                   OPC_EmitMergeInputChains, 2, 0, 2, 
/*606*/                   OPC_MorphNodeTo1, TARGET_VAL(MSP430::BIC8mr), 0|OPFL_Chain|OPFL_MemRefs,
                              MVT::i16, 3/*#Ops*/, 4, 5, 1, 
                          // Src: (st (and:i8 (xor:i8 GR8:i8:$src, -1:i8), (ld:i8 addr:iPTR:$dst)<<P:Predicate_unindexedload>><<P:Predicate_load>>), addr:iPTR:$dst)<<P:Predicate_unindexedstore>><<P:Predicate_store>> - Complexity = 37
                          // Dst: (BIC8mr:i16 addr:i16:$dst, GR8:i8:$src)
/*615*/                 /*SwitchType*/ 23, MVT::i16,// ->640
/*617*/                   OPC_MoveParent,
/*618*/                   OPC_CheckChild2Same, 3,
/*620*/                   OPC_CheckPredicate, 2, // Predicate_unindexedstore
/*622*/                   OPC_CheckPredicate, 3, // Predicate_store
/*624*/                   OPC_CheckComplexPat, /*CP*/0, /*#*/3, // SelectAddr:$dst #4 #5
/*627*/                   OPC_EmitMergeInputChains, 2, 0, 2, 
/*631*/                   OPC_MorphNodeTo1, TARGET_VAL(MSP430::BIC16mr), 0|OPFL_Chain|OPFL_MemRefs,
                              MVT::i16, 3/*#Ops*/, 4, 5, 1, 
                          // Src: (st (and:i16 (xor:i16 GR16:i16:$src, -1:i16), (ld:i16 addr:iPTR:$dst)<<P:Predicate_unindexedload>><<P:Predicate_load>>), addr:iPTR:$dst)<<P:Predicate_unindexedstore>><<P:Predicate_store>> - Complexity = 37
                          // Dst: (BIC16mr:i16 addr:i16:$dst, GR16:i16:$src)
/*640*/                 0, // EndSwitchType
/*641*/               0, /*End of Scope*/
/*642*/             0, // EndSwitchOpcode
/*643*/           /*Scope*/ 66, /*->710*/
/*644*/             OPC_RecordChild0, // #1 = $src
/*645*/             OPC_MoveChild1,
/*646*/             OPC_CheckOpcode, TARGET_VAL(ISD::LOAD),
/*649*/             OPC_RecordMemRef,
/*650*/             OPC_RecordNode, // #2 = 'ld' chained node
/*651*/             OPC_CheckFoldableChainNode,
/*652*/             OPC_RecordChild1, // #3 = $dst
/*653*/             OPC_CheckPredicate, 0, // Predicate_unindexedload
/*655*/             OPC_CheckPredicate, 1, // Predicate_load
/*657*/             OPC_MoveParent,
/*658*/             OPC_SwitchType /*2 cases */, 23, MVT::i8,// ->684
/*661*/               OPC_MoveParent,
/*662*/               OPC_CheckChild2Same, 3,
/*664*/               OPC_CheckPredicate, 2, // Predicate_unindexedstore
/*666*/               OPC_CheckPredicate, 3, // Predicate_store
/*668*/               OPC_CheckComplexPat, /*CP*/0, /*#*/3, // SelectAddr:$dst #4 #5
/*671*/               OPC_EmitMergeInputChains, 2, 0, 2, 
/*675*/               OPC_MorphNodeTo1, TARGET_VAL(MSP430::AND8mr), 0|OPFL_Chain|OPFL_MemRefs,
                          MVT::i16, 3/*#Ops*/, 4, 5, 1, 
                      // Src: (st (and:i8 GR8:i8:$src, (ld:i8 addr:iPTR:$dst)<<P:Predicate_unindexedload>><<P:Predicate_load>>), addr:iPTR:$dst)<<P:Predicate_unindexedstore>><<P:Predicate_store>> - Complexity = 29
                      // Dst: (AND8mr:i16 addr:i16:$dst, GR8:i8:$src)
/*684*/             /*SwitchType*/ 23, MVT::i16,// ->709
/*686*/               OPC_MoveParent,
/*687*/               OPC_CheckChild2Same, 3,
/*689*/               OPC_CheckPredicate, 2, // Predicate_unindexedstore
/*691*/               OPC_CheckPredicate, 3, // Predicate_store
/*693*/               OPC_CheckComplexPat, /*CP*/0, /*#*/3, // SelectAddr:$dst #4 #5
/*696*/               OPC_EmitMergeInputChains, 2, 0, 2, 
/*700*/               OPC_MorphNodeTo1, TARGET_VAL(MSP430::AND16mr), 0|OPFL_Chain|OPFL_MemRefs,
                          MVT::i16, 3/*#Ops*/, 4, 5, 1, 
                      // Src: (st (and:i16 GR16:i16:$src, (ld:i16 addr:iPTR:$dst)<<P:Predicate_unindexedload>><<P:Predicate_load>>), addr:iPTR:$dst)<<P:Predicate_unindexedstore>><<P:Predicate_store>> - Complexity = 29
                      // Dst: (AND16mr:i16 addr:i16:$dst, GR16:i16:$src)
/*709*/             0, // EndSwitchType
/*710*/           0, /*End of Scope*/
/*711*/         /*SwitchOpcode*/ 87|128,2/*343*/, TARGET_VAL(ISD::ADD),// ->1058
/*715*/           OPC_Scope, 16|128,2/*272*/, /*->990*/ // 2 children in Scope
/*718*/             OPC_MoveChild0,
/*719*/             OPC_CheckOpcode, TARGET_VAL(ISD::LOAD),
/*722*/             OPC_RecordMemRef,
/*723*/             OPC_RecordNode, // #1 = 'ld' chained node
/*724*/             OPC_CheckFoldableChainNode,
/*725*/             OPC_RecordChild1, // #2 = $dst
/*726*/             OPC_CheckPredicate, 0, // Predicate_unindexedload
/*728*/             OPC_CheckPredicate, 1, // Predicate_load
/*730*/             OPC_MoveParent,
/*731*/             OPC_Scope, 9|128,1/*137*/, /*->871*/ // 2 children in Scope
/*734*/               OPC_MoveChild1,
/*735*/               OPC_CheckOpcode, TARGET_VAL(ISD::LOAD),
/*738*/               OPC_RecordMemRef,
/*739*/               OPC_RecordNode, // #3 = 'ld' chained node
/*740*/               OPC_CheckFoldableChainNode,
/*741*/               OPC_RecordChild1, // #4 = $src
/*742*/               OPC_CheckPredicate, 0, // Predicate_unindexedload
/*744*/               OPC_CheckPredicate, 1, // Predicate_load
/*746*/               OPC_MoveParent,
/*747*/               OPC_SwitchType /*2 cases */, 59, MVT::i8,// ->809
/*750*/                 OPC_MoveParent,
/*751*/                 OPC_Scope, 27, /*->780*/ // 2 children in Scope
/*753*/                   OPC_CheckChild2Same, 2,
/*755*/                   OPC_CheckPredicate, 2, // Predicate_unindexedstore
/*757*/                   OPC_CheckPredicate, 3, // Predicate_store
/*759*/                   OPC_CheckComplexPat, /*CP*/0, /*#*/2, // SelectAddr:$dst #5 #6
/*762*/                   OPC_CheckComplexPat, /*CP*/0, /*#*/4, // SelectAddr:$src #7 #8
/*765*/                   OPC_EmitMergeInputChains, 3, 0, 1, 3, 
/*770*/                   OPC_MorphNodeTo1, TARGET_VAL(MSP430::ADD8mm), 0|OPFL_Chain|OPFL_MemRefs,
                              MVT::i16, 4/*#Ops*/, 5, 6, 7, 8, 
                          // Src: (st (add:i8 (ld:i8 addr:iPTR:$dst)<<P:Predicate_unindexedload>><<P:Predicate_load>>, (ld:i8 addr:iPTR:$src)<<P:Predicate_unindexedload>><<P:Predicate_load>>), addr:iPTR:$dst)<<P:Predicate_unindexedstore>><<P:Predicate_store>> - Complexity = 42
                          // Dst: (ADD8mm:i16 addr:i16:$dst, addr:i16:$src)
/*780*/                 /*Scope*/ 27, /*->808*/
/*781*/                   OPC_CheckChild2Same, 4,
/*783*/                   OPC_CheckPredicate, 2, // Predicate_unindexedstore
/*785*/                   OPC_CheckPredicate, 3, // Predicate_store
/*787*/                   OPC_CheckComplexPat, /*CP*/0, /*#*/2, // SelectAddr:$src #5 #6
/*790*/                   OPC_CheckComplexPat, /*CP*/0, /*#*/4, // SelectAddr:$dst #7 #8
/*793*/                   OPC_EmitMergeInputChains, 3, 0, 1, 3, 
/*798*/                   OPC_MorphNodeTo1, TARGET_VAL(MSP430::ADD8mm), 0|OPFL_Chain|OPFL_MemRefs,
                              MVT::i16, 4/*#Ops*/, 7, 8, 5, 6, 
                          // Src: (st (add:i8 (ld:i8 addr:iPTR:$src)<<P:Predicate_unindexedload>><<P:Predicate_load>>, (ld:i8 addr:iPTR:$dst)<<P:Predicate_unindexedload>><<P:Predicate_load>>), addr:iPTR:$dst)<<P:Predicate_unindexedstore>><<P:Predicate_store>> - Complexity = 42
                          // Dst: (ADD8mm:i16 addr:i16:$dst, addr:i16:$src)
/*808*/                 0, /*End of Scope*/
/*809*/               /*SwitchType*/ 59, MVT::i16,// ->870
/*811*/                 OPC_MoveParent,
/*812*/                 OPC_Scope, 27, /*->841*/ // 2 children in Scope
/*814*/                   OPC_CheckChild2Same, 2,
/*816*/                   OPC_CheckPredicate, 2, // Predicate_unindexedstore
/*818*/                   OPC_CheckPredicate, 3, // Predicate_store
/*820*/                   OPC_CheckComplexPat, /*CP*/0, /*#*/2, // SelectAddr:$dst #5 #6
/*823*/                   OPC_CheckComplexPat, /*CP*/0, /*#*/4, // SelectAddr:$src #7 #8
/*826*/                   OPC_EmitMergeInputChains, 3, 0, 1, 3, 
/*831*/                   OPC_MorphNodeTo1, TARGET_VAL(MSP430::ADD16mm), 0|OPFL_Chain|OPFL_MemRefs,
                              MVT::i16, 4/*#Ops*/, 5, 6, 7, 8, 
                          // Src: (st (add:i16 (ld:i16 addr:iPTR:$dst)<<P:Predicate_unindexedload>><<P:Predicate_load>>, (ld:i16 addr:iPTR:$src)<<P:Predicate_unindexedload>><<P:Predicate_load>>), addr:iPTR:$dst)<<P:Predicate_unindexedstore>><<P:Predicate_store>> - Complexity = 42
                          // Dst: (ADD16mm:i16 addr:i16:$dst, addr:i16:$src)
/*841*/                 /*Scope*/ 27, /*->869*/
/*842*/                   OPC_CheckChild2Same, 4,
/*844*/                   OPC_CheckPredicate, 2, // Predicate_unindexedstore
/*846*/                   OPC_CheckPredicate, 3, // Predicate_store
/*848*/                   OPC_CheckComplexPat, /*CP*/0, /*#*/2, // SelectAddr:$src #5 #6
/*851*/                   OPC_CheckComplexPat, /*CP*/0, /*#*/4, // SelectAddr:$dst #7 #8
/*854*/                   OPC_EmitMergeInputChains, 3, 0, 1, 3, 
/*859*/                   OPC_MorphNodeTo1, TARGET_VAL(MSP430::ADD16mm), 0|OPFL_Chain|OPFL_MemRefs,
                              MVT::i16, 4/*#Ops*/, 7, 8, 5, 6, 
                          // Src: (st (add:i16 (ld:i16 addr:iPTR:$src)<<P:Predicate_unindexedload>><<P:Predicate_load>>, (ld:i16 addr:iPTR:$dst)<<P:Predicate_unindexedload>><<P:Predicate_load>>), addr:iPTR:$dst)<<P:Predicate_unindexedstore>><<P:Predicate_store>> - Complexity = 42
                          // Dst: (ADD16mm:i16 addr:i16:$dst, addr:i16:$src)
/*869*/                 0, /*End of Scope*/
/*870*/               0, // EndSwitchType
/*871*/             /*Scope*/ 117, /*->989*/
/*872*/               OPC_RecordChild1, // #3 = $src
/*873*/               OPC_Scope, 61, /*->936*/ // 3 children in Scope
/*875*/                 OPC_MoveChild1,
/*876*/                 OPC_CheckOpcode, TARGET_VAL(ISD::Constant),
/*879*/                 OPC_MoveParent,
/*880*/                 OPC_SwitchType /*2 cases */, 25, MVT::i8,// ->908
/*883*/                   OPC_MoveParent,
/*884*/                   OPC_CheckChild2Same, 2,
/*886*/                   OPC_CheckPredicate, 2, // Predicate_unindexedstore
/*888*/                   OPC_CheckPredicate, 3, // Predicate_store
/*890*/                   OPC_CheckComplexPat, /*CP*/0, /*#*/2, // SelectAddr:$dst #4 #5
/*893*/                   OPC_EmitMergeInputChains, 2, 0, 1, 
/*897*/                   OPC_EmitConvertToTarget, 3,
/*899*/                   OPC_MorphNodeTo1, TARGET_VAL(MSP430::ADD8mi), 0|OPFL_Chain|OPFL_MemRefs,
                              MVT::i16, 3/*#Ops*/, 4, 5, 6, 
                          // Src: (st (add:i8 (ld:i8 addr:iPTR:$dst)<<P:Predicate_unindexedload>><<P:Predicate_load>>, (imm:i8):$src), addr:iPTR:$dst)<<P:Predicate_unindexedstore>><<P:Predicate_store>> - Complexity = 32
                          // Dst: (ADD8mi:i16 addr:i16:$dst, (imm:i8):$src)
/*908*/                 /*SwitchType*/ 25, MVT::i16,// ->935
/*910*/                   OPC_MoveParent,
/*911*/                   OPC_CheckChild2Same, 2,
/*913*/                   OPC_CheckPredicate, 2, // Predicate_unindexedstore
/*915*/                   OPC_CheckPredicate, 3, // Predicate_store
/*917*/                   OPC_CheckComplexPat, /*CP*/0, /*#*/2, // SelectAddr:$dst #4 #5
/*920*/                   OPC_EmitMergeInputChains, 2, 0, 1, 
/*924*/                   OPC_EmitConvertToTarget, 3,
/*926*/                   OPC_MorphNodeTo1, TARGET_VAL(MSP430::ADD16mi), 0|OPFL_Chain|OPFL_MemRefs,
                              MVT::i16, 3/*#Ops*/, 4, 5, 6, 
                          // Src: (st (add:i16 (ld:i16 addr:iPTR:$dst)<<P:Predicate_unindexedload>><<P:Predicate_load>>, (imm:i16):$src), addr:iPTR:$dst)<<P:Predicate_unindexedstore>><<P:Predicate_store>> - Complexity = 32
                          // Dst: (ADD16mi:i16 addr:i16:$dst, (imm:i16):$src)
/*935*/                 0, // EndSwitchType
/*936*/               /*Scope*/ 25, /*->962*/
/*937*/                 OPC_CheckType, MVT::i8,
/*939*/                 OPC_MoveParent,
/*940*/                 OPC_CheckChild2Same, 2,
/*942*/                 OPC_CheckPredicate, 2, // Predicate_unindexedstore
/*944*/                 OPC_CheckPredicate, 3, // Predicate_store
/*946*/                 OPC_CheckComplexPat, /*CP*/0, /*#*/2, // SelectAddr:$dst #4 #5
/*949*/                 OPC_EmitMergeInputChains, 2, 0, 1, 
/*953*/                 OPC_MorphNodeTo1, TARGET_VAL(MSP430::ADD8mr), 0|OPFL_Chain|OPFL_MemRefs,
                            MVT::i16, 3/*#Ops*/, 4, 5, 3, 
                        // Src: (st (add:i8 (ld:i8 addr:iPTR:$dst)<<P:Predicate_unindexedload>><<P:Predicate_load>>, GR8:i8:$src), addr:iPTR:$dst)<<P:Predicate_unindexedstore>><<P:Predicate_store>> - Complexity = 29
                        // Dst: (ADD8mr:i16 addr:i16:$dst, GR8:i8:$src)
/*962*/               /*Scope*/ 25, /*->988*/
/*963*/                 OPC_CheckType, MVT::i16,
/*965*/                 OPC_MoveParent,
/*966*/                 OPC_CheckChild2Same, 2,
/*968*/                 OPC_CheckPredicate, 2, // Predicate_unindexedstore
/*970*/                 OPC_CheckPredicate, 3, // Predicate_store
/*972*/                 OPC_CheckComplexPat, /*CP*/0, /*#*/2, // SelectAddr:$dst #4 #5
/*975*/                 OPC_EmitMergeInputChains, 2, 0, 1, 
/*979*/                 OPC_MorphNodeTo1, TARGET_VAL(MSP430::ADD16mr), 0|OPFL_Chain|OPFL_MemRefs,
                            MVT::i16, 3/*#Ops*/, 4, 5, 3, 
                        // Src: (st (add:i16 (ld:i16 addr:iPTR:$dst)<<P:Predicate_unindexedload>><<P:Predicate_load>>, GR16:i16:$src), addr:iPTR:$dst)<<P:Predicate_unindexedstore>><<P:Predicate_store>> - Complexity = 29
                        // Dst: (ADD16mr:i16 addr:i16:$dst, GR16:i16:$src)
/*988*/               0, /*End of Scope*/
/*989*/             0, /*End of Scope*/
/*990*/           /*Scope*/ 66, /*->1057*/
/*991*/             OPC_RecordChild0, // #1 = $src
/*992*/             OPC_MoveChild1,
/*993*/             OPC_CheckOpcode, TARGET_VAL(ISD::LOAD),
/*996*/             OPC_RecordMemRef,
/*997*/             OPC_RecordNode, // #2 = 'ld' chained node
/*998*/             OPC_CheckFoldableChainNode,
/*999*/             OPC_RecordChild1, // #3 = $dst
/*1000*/            OPC_CheckPredicate, 0, // Predicate_unindexedload
/*1002*/            OPC_CheckPredicate, 1, // Predicate_load
/*1004*/            OPC_MoveParent,
/*1005*/            OPC_SwitchType /*2 cases */, 23, MVT::i8,// ->1031
/*1008*/              OPC_MoveParent,
/*1009*/              OPC_CheckChild2Same, 3,
/*1011*/              OPC_CheckPredicate, 2, // Predicate_unindexedstore
/*1013*/              OPC_CheckPredicate, 3, // Predicate_store
/*1015*/              OPC_CheckComplexPat, /*CP*/0, /*#*/3, // SelectAddr:$dst #4 #5
/*1018*/              OPC_EmitMergeInputChains, 2, 0, 2, 
/*1022*/              OPC_MorphNodeTo1, TARGET_VAL(MSP430::ADD8mr), 0|OPFL_Chain|OPFL_MemRefs,
                          MVT::i16, 3/*#Ops*/, 4, 5, 1, 
                      // Src: (st (add:i8 GR8:i8:$src, (ld:i8 addr:iPTR:$dst)<<P:Predicate_unindexedload>><<P:Predicate_load>>), addr:iPTR:$dst)<<P:Predicate_unindexedstore>><<P:Predicate_store>> - Complexity = 29
                      // Dst: (ADD8mr:i16 addr:i16:$dst, GR8:i8:$src)
/*1031*/            /*SwitchType*/ 23, MVT::i16,// ->1056
/*1033*/              OPC_MoveParent,
/*1034*/              OPC_CheckChild2Same, 3,
/*1036*/              OPC_CheckPredicate, 2, // Predicate_unindexedstore
/*1038*/              OPC_CheckPredicate, 3, // Predicate_store
/*1040*/              OPC_CheckComplexPat, /*CP*/0, /*#*/3, // SelectAddr:$dst #4 #5
/*1043*/              OPC_EmitMergeInputChains, 2, 0, 2, 
/*1047*/              OPC_MorphNodeTo1, TARGET_VAL(MSP430::ADD16mr), 0|OPFL_Chain|OPFL_MemRefs,
                          MVT::i16, 3/*#Ops*/, 4, 5, 1, 
                      // Src: (st (add:i16 GR16:i16:$src, (ld:i16 addr:iPTR:$dst)<<P:Predicate_unindexedload>><<P:Predicate_load>>), addr:iPTR:$dst)<<P:Predicate_unindexedstore>><<P:Predicate_store>> - Complexity = 29
                      // Dst: (ADD16mr:i16 addr:i16:$dst, GR16:i16:$src)
/*1056*/            0, // EndSwitchType
/*1057*/          0, /*End of Scope*/
/*1058*/        /*SwitchOpcode*/ 89|128,2/*345*/, TARGET_VAL(ISD::ADDE),// ->1407
/*1062*/          OPC_RecordNode, // #1 = 'adde' glue output node
/*1063*/          OPC_CaptureGlueInput,
/*1064*/          OPC_Scope, 16|128,2/*272*/, /*->1339*/ // 2 children in Scope
/*1067*/            OPC_MoveChild0,
/*1068*/            OPC_CheckOpcode, TARGET_VAL(ISD::LOAD),
/*1071*/            OPC_RecordMemRef,
/*1072*/            OPC_RecordNode, // #1 = 'ld' chained node
/*1073*/            OPC_CheckFoldableChainNode,
/*1074*/            OPC_RecordChild1, // #2 = $dst
/*1075*/            OPC_CheckPredicate, 0, // Predicate_unindexedload
/*1077*/            OPC_CheckPredicate, 1, // Predicate_load
/*1079*/            OPC_MoveParent,
/*1080*/            OPC_Scope, 9|128,1/*137*/, /*->1220*/ // 2 children in Scope
/*1083*/              OPC_MoveChild1,
/*1084*/              OPC_CheckOpcode, TARGET_VAL(ISD::LOAD),
/*1087*/              OPC_RecordMemRef,
/*1088*/              OPC_RecordNode, // #3 = 'ld' chained node
/*1089*/              OPC_CheckFoldableChainNode,
/*1090*/              OPC_RecordChild1, // #4 = $src
/*1091*/              OPC_CheckPredicate, 0, // Predicate_unindexedload
/*1093*/              OPC_CheckPredicate, 1, // Predicate_load
/*1095*/              OPC_MoveParent,
/*1096*/              OPC_SwitchType /*2 cases */, 59, MVT::i8,// ->1158
/*1099*/                OPC_MoveParent,
/*1100*/                OPC_Scope, 27, /*->1129*/ // 2 children in Scope
/*1102*/                  OPC_CheckChild2Same, 2,
/*1104*/                  OPC_CheckPredicate, 2, // Predicate_unindexedstore
/*1106*/                  OPC_CheckPredicate, 3, // Predicate_store
/*1108*/                  OPC_CheckComplexPat, /*CP*/0, /*#*/2, // SelectAddr:$dst #5 #6
/*1111*/                  OPC_CheckComplexPat, /*CP*/0, /*#*/4, // SelectAddr:$src #7 #8
/*1114*/                  OPC_EmitMergeInputChains, 3, 0, 1, 3, 
/*1119*/                  OPC_MorphNodeTo1, TARGET_VAL(MSP430::ADC8mm), 0|OPFL_Chain|OPFL_GlueInput|OPFL_GlueOutput|OPFL_MemRefs,
                              MVT::i16, 4/*#Ops*/, 5, 6, 7, 8, 
                          // Src: (st (adde:i8 (ld:i8 addr:iPTR:$dst)<<P:Predicate_unindexedload>><<P:Predicate_load>>, (ld:i8 addr:iPTR:$src)<<P:Predicate_unindexedload>><<P:Predicate_load>>), addr:iPTR:$dst)<<P:Predicate_unindexedstore>><<P:Predicate_store>> - Complexity = 42
                          // Dst: (ADC8mm:i16 addr:i16:$dst, addr:i16:$src)
/*1129*/                /*Scope*/ 27, /*->1157*/
/*1130*/                  OPC_CheckChild2Same, 4,
/*1132*/                  OPC_CheckPredicate, 2, // Predicate_unindexedstore
/*1134*/                  OPC_CheckPredicate, 3, // Predicate_store
/*1136*/                  OPC_CheckComplexPat, /*CP*/0, /*#*/2, // SelectAddr:$src #5 #6
/*1139*/                  OPC_CheckComplexPat, /*CP*/0, /*#*/4, // SelectAddr:$dst #7 #8
/*1142*/                  OPC_EmitMergeInputChains, 3, 0, 1, 3, 
/*1147*/                  OPC_MorphNodeTo1, TARGET_VAL(MSP430::ADC8mm), 0|OPFL_Chain|OPFL_GlueInput|OPFL_GlueOutput|OPFL_MemRefs,
                              MVT::i16, 4/*#Ops*/, 7, 8, 5, 6, 
                          // Src: (st (adde:i8 (ld:i8 addr:iPTR:$src)<<P:Predicate_unindexedload>><<P:Predicate_load>>, (ld:i8 addr:iPTR:$dst)<<P:Predicate_unindexedload>><<P:Predicate_load>>), addr:iPTR:$dst)<<P:Predicate_unindexedstore>><<P:Predicate_store>> - Complexity = 42
                          // Dst: (ADC8mm:i16 addr:i16:$dst, addr:i16:$src)
/*1157*/                0, /*End of Scope*/
/*1158*/              /*SwitchType*/ 59, MVT::i16,// ->1219
/*1160*/                OPC_MoveParent,
/*1161*/                OPC_Scope, 27, /*->1190*/ // 2 children in Scope
/*1163*/                  OPC_CheckChild2Same, 2,
/*1165*/                  OPC_CheckPredicate, 2, // Predicate_unindexedstore
/*1167*/                  OPC_CheckPredicate, 3, // Predicate_store
/*1169*/                  OPC_CheckComplexPat, /*CP*/0, /*#*/2, // SelectAddr:$dst #5 #6
/*1172*/                  OPC_CheckComplexPat, /*CP*/0, /*#*/4, // SelectAddr:$src #7 #8
/*1175*/                  OPC_EmitMergeInputChains, 3, 0, 1, 3, 
/*1180*/                  OPC_MorphNodeTo1, TARGET_VAL(MSP430::ADC16mm), 0|OPFL_Chain|OPFL_GlueInput|OPFL_GlueOutput|OPFL_MemRefs,
                              MVT::i16, 4/*#Ops*/, 5, 6, 7, 8, 
                          // Src: (st (adde:i16 (ld:i16 addr:iPTR:$dst)<<P:Predicate_unindexedload>><<P:Predicate_load>>, (ld:i16 addr:iPTR:$src)<<P:Predicate_unindexedload>><<P:Predicate_load>>), addr:iPTR:$dst)<<P:Predicate_unindexedstore>><<P:Predicate_store>> - Complexity = 42
                          // Dst: (ADC16mm:i16 addr:i16:$dst, addr:i16:$src)
/*1190*/                /*Scope*/ 27, /*->1218*/
/*1191*/                  OPC_CheckChild2Same, 4,
/*1193*/                  OPC_CheckPredicate, 2, // Predicate_unindexedstore
/*1195*/                  OPC_CheckPredicate, 3, // Predicate_store
/*1197*/                  OPC_CheckComplexPat, /*CP*/0, /*#*/2, // SelectAddr:$src #5 #6
/*1200*/                  OPC_CheckComplexPat, /*CP*/0, /*#*/4, // SelectAddr:$dst #7 #8
/*1203*/                  OPC_EmitMergeInputChains, 3, 0, 1, 3, 
/*1208*/                  OPC_MorphNodeTo1, TARGET_VAL(MSP430::ADC16mm), 0|OPFL_Chain|OPFL_GlueInput|OPFL_GlueOutput|OPFL_MemRefs,
                              MVT::i16, 4/*#Ops*/, 7, 8, 5, 6, 
                          // Src: (st (adde:i16 (ld:i16 addr:iPTR:$src)<<P:Predicate_unindexedload>><<P:Predicate_load>>, (ld:i16 addr:iPTR:$dst)<<P:Predicate_unindexedload>><<P:Predicate_load>>), addr:iPTR:$dst)<<P:Predicate_unindexedstore>><<P:Predicate_store>> - Complexity = 42
                          // Dst: (ADC16mm:i16 addr:i16:$dst, addr:i16:$src)
/*1218*/                0, /*End of Scope*/
/*1219*/              0, // EndSwitchType
/*1220*/            /*Scope*/ 117, /*->1338*/
/*1221*/              OPC_RecordChild1, // #3 = $src
/*1222*/              OPC_Scope, 61, /*->1285*/ // 3 children in Scope
/*1224*/                OPC_MoveChild1,
/*1225*/                OPC_CheckOpcode, TARGET_VAL(ISD::Constant),
/*1228*/                OPC_MoveParent,
/*1229*/                OPC_SwitchType /*2 cases */, 25, MVT::i8,// ->1257
/*1232*/                  OPC_MoveParent,
/*1233*/                  OPC_CheckChild2Same, 2,
/*1235*/                  OPC_CheckPredicate, 2, // Predicate_unindexedstore
/*1237*/                  OPC_CheckPredicate, 3, // Predicate_store
/*1239*/                  OPC_CheckComplexPat, /*CP*/0, /*#*/2, // SelectAddr:$dst #4 #5
/*1242*/                  OPC_EmitMergeInputChains, 2, 0, 1, 
/*1246*/                  OPC_EmitConvertToTarget, 3,
/*1248*/                  OPC_MorphNodeTo1, TARGET_VAL(MSP430::ADC8mi), 0|OPFL_Chain|OPFL_GlueInput|OPFL_GlueOutput|OPFL_MemRefs,
                              MVT::i16, 3/*#Ops*/, 4, 5, 6, 
                          // Src: (st (adde:i8 (ld:i8 addr:iPTR:$dst)<<P:Predicate_unindexedload>><<P:Predicate_load>>, (imm:i8):$src), addr:iPTR:$dst)<<P:Predicate_unindexedstore>><<P:Predicate_store>> - Complexity = 32
                          // Dst: (ADC8mi:i16 addr:i16:$dst, (imm:i8):$src)
/*1257*/                /*SwitchType*/ 25, MVT::i16,// ->1284
/*1259*/                  OPC_MoveParent,
/*1260*/                  OPC_CheckChild2Same, 2,
/*1262*/                  OPC_CheckPredicate, 2, // Predicate_unindexedstore
/*1264*/                  OPC_CheckPredicate, 3, // Predicate_store
/*1266*/                  OPC_CheckComplexPat, /*CP*/0, /*#*/2, // SelectAddr:$dst #4 #5
/*1269*/                  OPC_EmitMergeInputChains, 2, 0, 1, 
/*1273*/                  OPC_EmitConvertToTarget, 3,
/*1275*/                  OPC_MorphNodeTo1, TARGET_VAL(MSP430::ADC16mi), 0|OPFL_Chain|OPFL_GlueInput|OPFL_GlueOutput|OPFL_MemRefs,
                              MVT::i16, 3/*#Ops*/, 4, 5, 6, 
                          // Src: (st (adde:i16 (ld:i16 addr:iPTR:$dst)<<P:Predicate_unindexedload>><<P:Predicate_load>>, (imm:i16):$src), addr:iPTR:$dst)<<P:Predicate_unindexedstore>><<P:Predicate_store>> - Complexity = 32
                          // Dst: (ADC16mi:i16 addr:i16:$dst, (imm:i16):$src)
/*1284*/                0, // EndSwitchType
/*1285*/              /*Scope*/ 25, /*->1311*/
/*1286*/                OPC_CheckType, MVT::i8,
/*1288*/                OPC_MoveParent,
/*1289*/                OPC_CheckChild2Same, 2,
/*1291*/                OPC_CheckPredicate, 2, // Predicate_unindexedstore
/*1293*/                OPC_CheckPredicate, 3, // Predicate_store
/*1295*/                OPC_CheckComplexPat, /*CP*/0, /*#*/2, // SelectAddr:$dst #4 #5
/*1298*/                OPC_EmitMergeInputChains, 2, 0, 1, 
/*1302*/                OPC_MorphNodeTo1, TARGET_VAL(MSP430::ADC8mr), 0|OPFL_Chain|OPFL_GlueInput|OPFL_GlueOutput|OPFL_MemRefs,
                            MVT::i16, 3/*#Ops*/, 4, 5, 3, 
                        // Src: (st (adde:i8 (ld:i8 addr:iPTR:$dst)<<P:Predicate_unindexedload>><<P:Predicate_load>>, GR8:i8:$src), addr:iPTR:$dst)<<P:Predicate_unindexedstore>><<P:Predicate_store>> - Complexity = 29
                        // Dst: (ADC8mr:i16 addr:i16:$dst, GR8:i8:$src)
/*1311*/              /*Scope*/ 25, /*->1337*/
/*1312*/                OPC_CheckType, MVT::i16,
/*1314*/                OPC_MoveParent,
/*1315*/                OPC_CheckChild2Same, 2,
/*1317*/                OPC_CheckPredicate, 2, // Predicate_unindexedstore
/*1319*/                OPC_CheckPredicate, 3, // Predicate_store
/*1321*/                OPC_CheckComplexPat, /*CP*/0, /*#*/2, // SelectAddr:$dst #4 #5
/*1324*/                OPC_EmitMergeInputChains, 2, 0, 1, 
/*1328*/                OPC_MorphNodeTo1, TARGET_VAL(MSP430::ADC16mr), 0|OPFL_Chain|OPFL_GlueInput|OPFL_GlueOutput|OPFL_MemRefs,
                            MVT::i16, 3/*#Ops*/, 4, 5, 3, 
                        // Src: (st (adde:i16 (ld:i16 addr:iPTR:$dst)<<P:Predicate_unindexedload>><<P:Predicate_load>>, GR16:i16:$src), addr:iPTR:$dst)<<P:Predicate_unindexedstore>><<P:Predicate_store>> - Complexity = 29
                        // Dst: (ADC16mr:i16 addr:i16:$dst, GR16:i16:$src)
/*1337*/              0, /*End of Scope*/
/*1338*/            0, /*End of Scope*/
/*1339*/          /*Scope*/ 66, /*->1406*/
/*1340*/            OPC_RecordChild0, // #1 = $src
/*1341*/            OPC_MoveChild1,
/*1342*/            OPC_CheckOpcode, TARGET_VAL(ISD::LOAD),
/*1345*/            OPC_RecordMemRef,
/*1346*/            OPC_RecordNode, // #2 = 'ld' chained node
/*1347*/            OPC_CheckFoldableChainNode,
/*1348*/            OPC_RecordChild1, // #3 = $dst
/*1349*/            OPC_CheckPredicate, 0, // Predicate_unindexedload
/*1351*/            OPC_CheckPredicate, 1, // Predicate_load
/*1353*/            OPC_MoveParent,
/*1354*/            OPC_SwitchType /*2 cases */, 23, MVT::i8,// ->1380
/*1357*/              OPC_MoveParent,
/*1358*/              OPC_CheckChild2Same, 3,
/*1360*/              OPC_CheckPredicate, 2, // Predicate_unindexedstore
/*1362*/              OPC_CheckPredicate, 3, // Predicate_store
/*1364*/              OPC_CheckComplexPat, /*CP*/0, /*#*/3, // SelectAddr:$dst #4 #5
/*1367*/              OPC_EmitMergeInputChains, 2, 0, 2, 
/*1371*/              OPC_MorphNodeTo1, TARGET_VAL(MSP430::ADC8mr), 0|OPFL_Chain|OPFL_GlueInput|OPFL_GlueOutput|OPFL_MemRefs,
                          MVT::i16, 3/*#Ops*/, 4, 5, 1, 
                      // Src: (st (adde:i8 GR8:i8:$src, (ld:i8 addr:iPTR:$dst)<<P:Predicate_unindexedload>><<P:Predicate_load>>), addr:iPTR:$dst)<<P:Predicate_unindexedstore>><<P:Predicate_store>> - Complexity = 29
                      // Dst: (ADC8mr:i16 addr:i16:$dst, GR8:i8:$src)
/*1380*/            /*SwitchType*/ 23, MVT::i16,// ->1405
/*1382*/              OPC_MoveParent,
/*1383*/              OPC_CheckChild2Same, 3,
/*1385*/              OPC_CheckPredicate, 2, // Predicate_unindexedstore
/*1387*/              OPC_CheckPredicate, 3, // Predicate_store
/*1389*/              OPC_CheckComplexPat, /*CP*/0, /*#*/3, // SelectAddr:$dst #4 #5
/*1392*/              OPC_EmitMergeInputChains, 2, 0, 2, 
/*1396*/              OPC_MorphNodeTo1, TARGET_VAL(MSP430::ADC16mr), 0|OPFL_Chain|OPFL_GlueInput|OPFL_GlueOutput|OPFL_MemRefs,
                          MVT::i16, 3/*#Ops*/, 4, 5, 1, 
                      // Src: (st (adde:i16 GR16:i16:$src, (ld:i16 addr:iPTR:$dst)<<P:Predicate_unindexedload>><<P:Predicate_load>>), addr:iPTR:$dst)<<P:Predicate_unindexedstore>><<P:Predicate_store>> - Complexity = 29
                      // Dst: (ADC16mr:i16 addr:i16:$dst, GR16:i16:$src)
/*1405*/            0, // EndSwitchType
/*1406*/          0, /*End of Scope*/
/*1407*/        /*SwitchOpcode*/ 87|128,2/*343*/, TARGET_VAL(ISD::OR),// ->1754
/*1411*/          OPC_Scope, 16|128,2/*272*/, /*->1686*/ // 2 children in Scope
/*1414*/            OPC_MoveChild0,
/*1415*/            OPC_CheckOpcode, TARGET_VAL(ISD::LOAD),
/*1418*/            OPC_RecordMemRef,
/*1419*/            OPC_RecordNode, // #1 = 'ld' chained node
/*1420*/            OPC_CheckFoldableChainNode,
/*1421*/            OPC_RecordChild1, // #2 = $dst
/*1422*/            OPC_CheckPredicate, 0, // Predicate_unindexedload
/*1424*/            OPC_CheckPredicate, 1, // Predicate_load
/*1426*/            OPC_MoveParent,
/*1427*/            OPC_Scope, 9|128,1/*137*/, /*->1567*/ // 2 children in Scope
/*1430*/              OPC_MoveChild1,
/*1431*/              OPC_CheckOpcode, TARGET_VAL(ISD::LOAD),
/*1434*/              OPC_RecordMemRef,
/*1435*/              OPC_RecordNode, // #3 = 'ld' chained node
/*1436*/              OPC_CheckFoldableChainNode,
/*1437*/              OPC_RecordChild1, // #4 = $src
/*1438*/              OPC_CheckPredicate, 0, // Predicate_unindexedload
/*1440*/              OPC_CheckPredicate, 1, // Predicate_load
/*1442*/              OPC_MoveParent,
/*1443*/              OPC_SwitchType /*2 cases */, 59, MVT::i8,// ->1505
/*1446*/                OPC_MoveParent,
/*1447*/                OPC_Scope, 27, /*->1476*/ // 2 children in Scope
/*1449*/                  OPC_CheckChild2Same, 2,
/*1451*/                  OPC_CheckPredicate, 2, // Predicate_unindexedstore
/*1453*/                  OPC_CheckPredicate, 3, // Predicate_store
/*1455*/                  OPC_CheckComplexPat, /*CP*/0, /*#*/2, // SelectAddr:$dst #5 #6
/*1458*/                  OPC_CheckComplexPat, /*CP*/0, /*#*/4, // SelectAddr:$src #7 #8
/*1461*/                  OPC_EmitMergeInputChains, 3, 0, 1, 3, 
/*1466*/                  OPC_MorphNodeTo1, TARGET_VAL(MSP430::OR8mm), 0|OPFL_Chain|OPFL_MemRefs,
                              MVT::i16, 4/*#Ops*/, 5, 6, 7, 8, 
                          // Src: (st (or:i8 (ld:i8 addr:iPTR:$dst)<<P:Predicate_unindexedload>><<P:Predicate_load>>, (ld:i8 addr:iPTR:$src)<<P:Predicate_unindexedload>><<P:Predicate_load>>), addr:iPTR:$dst)<<P:Predicate_unindexedstore>><<P:Predicate_store>> - Complexity = 42
                          // Dst: (OR8mm:i16 addr:i16:$dst, addr:i16:$src)
/*1476*/                /*Scope*/ 27, /*->1504*/
/*1477*/                  OPC_CheckChild2Same, 4,
/*1479*/                  OPC_CheckPredicate, 2, // Predicate_unindexedstore
/*1481*/                  OPC_CheckPredicate, 3, // Predicate_store
/*1483*/                  OPC_CheckComplexPat, /*CP*/0, /*#*/2, // SelectAddr:$src #5 #6
/*1486*/                  OPC_CheckComplexPat, /*CP*/0, /*#*/4, // SelectAddr:$dst #7 #8
/*1489*/                  OPC_EmitMergeInputChains, 3, 0, 1, 3, 
/*1494*/                  OPC_MorphNodeTo1, TARGET_VAL(MSP430::OR8mm), 0|OPFL_Chain|OPFL_MemRefs,
                              MVT::i16, 4/*#Ops*/, 7, 8, 5, 6, 
                          // Src: (st (or:i8 (ld:i8 addr:iPTR:$src)<<P:Predicate_unindexedload>><<P:Predicate_load>>, (ld:i8 addr:iPTR:$dst)<<P:Predicate_unindexedload>><<P:Predicate_load>>), addr:iPTR:$dst)<<P:Predicate_unindexedstore>><<P:Predicate_store>> - Complexity = 42
                          // Dst: (OR8mm:i16 addr:i16:$dst, addr:i16:$src)
/*1504*/                0, /*End of Scope*/
/*1505*/              /*SwitchType*/ 59, MVT::i16,// ->1566
/*1507*/                OPC_MoveParent,
/*1508*/                OPC_Scope, 27, /*->1537*/ // 2 children in Scope
/*1510*/                  OPC_CheckChild2Same, 2,
/*1512*/                  OPC_CheckPredicate, 2, // Predicate_unindexedstore
/*1514*/                  OPC_CheckPredicate, 3, // Predicate_store
/*1516*/                  OPC_CheckComplexPat, /*CP*/0, /*#*/2, // SelectAddr:$dst #5 #6
/*1519*/                  OPC_CheckComplexPat, /*CP*/0, /*#*/4, // SelectAddr:$src #7 #8
/*1522*/                  OPC_EmitMergeInputChains, 3, 0, 1, 3, 
/*1527*/                  OPC_MorphNodeTo1, TARGET_VAL(MSP430::OR16mm), 0|OPFL_Chain|OPFL_MemRefs,
                              MVT::i16, 4/*#Ops*/, 5, 6, 7, 8, 
                          // Src: (st (or:i16 (ld:i16 addr:iPTR:$dst)<<P:Predicate_unindexedload>><<P:Predicate_load>>, (ld:i16 addr:iPTR:$src)<<P:Predicate_unindexedload>><<P:Predicate_load>>), addr:iPTR:$dst)<<P:Predicate_unindexedstore>><<P:Predicate_store>> - Complexity = 42
                          // Dst: (OR16mm:i16 addr:i16:$dst, addr:i16:$src)
/*1537*/                /*Scope*/ 27, /*->1565*/
/*1538*/                  OPC_CheckChild2Same, 4,
/*1540*/                  OPC_CheckPredicate, 2, // Predicate_unindexedstore
/*1542*/                  OPC_CheckPredicate, 3, // Predicate_store
/*1544*/                  OPC_CheckComplexPat, /*CP*/0, /*#*/2, // SelectAddr:$src #5 #6
/*1547*/                  OPC_CheckComplexPat, /*CP*/0, /*#*/4, // SelectAddr:$dst #7 #8
/*1550*/                  OPC_EmitMergeInputChains, 3, 0, 1, 3, 
/*1555*/                  OPC_MorphNodeTo1, TARGET_VAL(MSP430::OR16mm), 0|OPFL_Chain|OPFL_MemRefs,
                              MVT::i16, 4/*#Ops*/, 7, 8, 5, 6, 
                          // Src: (st (or:i16 (ld:i16 addr:iPTR:$src)<<P:Predicate_unindexedload>><<P:Predicate_load>>, (ld:i16 addr:iPTR:$dst)<<P:Predicate_unindexedload>><<P:Predicate_load>>), addr:iPTR:$dst)<<P:Predicate_unindexedstore>><<P:Predicate_store>> - Complexity = 42
                          // Dst: (OR16mm:i16 addr:i16:$dst, addr:i16:$src)
/*1565*/                0, /*End of Scope*/
/*1566*/              0, // EndSwitchType
/*1567*/            /*Scope*/ 117, /*->1685*/
/*1568*/              OPC_RecordChild1, // #3 = $src
/*1569*/              OPC_Scope, 61, /*->1632*/ // 3 children in Scope
/*1571*/                OPC_MoveChild1,
/*1572*/                OPC_CheckOpcode, TARGET_VAL(ISD::Constant),
/*1575*/                OPC_MoveParent,
/*1576*/                OPC_SwitchType /*2 cases */, 25, MVT::i8,// ->1604
/*1579*/                  OPC_MoveParent,
/*1580*/                  OPC_CheckChild2Same, 2,
/*1582*/                  OPC_CheckPredicate, 2, // Predicate_unindexedstore
/*1584*/                  OPC_CheckPredicate, 3, // Predicate_store
/*1586*/                  OPC_CheckComplexPat, /*CP*/0, /*#*/2, // SelectAddr:$dst #4 #5
/*1589*/                  OPC_EmitMergeInputChains, 2, 0, 1, 
/*1593*/                  OPC_EmitConvertToTarget, 3,
/*1595*/                  OPC_MorphNodeTo1, TARGET_VAL(MSP430::OR8mi), 0|OPFL_Chain|OPFL_MemRefs,
                              MVT::i16, 3/*#Ops*/, 4, 5, 6, 
                          // Src: (st (or:i8 (ld:i8 addr:iPTR:$dst)<<P:Predicate_unindexedload>><<P:Predicate_load>>, (imm:i8):$src), addr:iPTR:$dst)<<P:Predicate_unindexedstore>><<P:Predicate_store>> - Complexity = 32
                          // Dst: (OR8mi:i16 addr:i16:$dst, (imm:i8):$src)
/*1604*/                /*SwitchType*/ 25, MVT::i16,// ->1631
/*1606*/                  OPC_MoveParent,
/*1607*/                  OPC_CheckChild2Same, 2,
/*1609*/                  OPC_CheckPredicate, 2, // Predicate_unindexedstore
/*1611*/                  OPC_CheckPredicate, 3, // Predicate_store
/*1613*/                  OPC_CheckComplexPat, /*CP*/0, /*#*/2, // SelectAddr:$dst #4 #5
/*1616*/                  OPC_EmitMergeInputChains, 2, 0, 1, 
/*1620*/                  OPC_EmitConvertToTarget, 3,
/*1622*/                  OPC_MorphNodeTo1, TARGET_VAL(MSP430::OR16mi), 0|OPFL_Chain|OPFL_MemRefs,
                              MVT::i16, 3/*#Ops*/, 4, 5, 6, 
                          // Src: (st (or:i16 (ld:i16 addr:iPTR:$dst)<<P:Predicate_unindexedload>><<P:Predicate_load>>, (imm:i16):$src), addr:iPTR:$dst)<<P:Predicate_unindexedstore>><<P:Predicate_store>> - Complexity = 32
                          // Dst: (OR16mi:i16 addr:i16:$dst, (imm:i16):$src)
/*1631*/                0, // EndSwitchType
/*1632*/              /*Scope*/ 25, /*->1658*/
/*1633*/                OPC_CheckType, MVT::i8,
/*1635*/                OPC_MoveParent,
/*1636*/                OPC_CheckChild2Same, 2,
/*1638*/                OPC_CheckPredicate, 2, // Predicate_unindexedstore
/*1640*/                OPC_CheckPredicate, 3, // Predicate_store
/*1642*/                OPC_CheckComplexPat, /*CP*/0, /*#*/2, // SelectAddr:$dst #4 #5
/*1645*/                OPC_EmitMergeInputChains, 2, 0, 1, 
/*1649*/                OPC_MorphNodeTo1, TARGET_VAL(MSP430::OR8mr), 0|OPFL_Chain|OPFL_MemRefs,
                            MVT::i16, 3/*#Ops*/, 4, 5, 3, 
                        // Src: (st (or:i8 (ld:i8 addr:iPTR:$dst)<<P:Predicate_unindexedload>><<P:Predicate_load>>, GR8:i8:$src), addr:iPTR:$dst)<<P:Predicate_unindexedstore>><<P:Predicate_store>> - Complexity = 29
                        // Dst: (OR8mr:i16 addr:i16:$dst, GR8:i8:$src)
/*1658*/              /*Scope*/ 25, /*->1684*/
/*1659*/                OPC_CheckType, MVT::i16,
/*1661*/                OPC_MoveParent,
/*1662*/                OPC_CheckChild2Same, 2,
/*1664*/                OPC_CheckPredicate, 2, // Predicate_unindexedstore
/*1666*/                OPC_CheckPredicate, 3, // Predicate_store
/*1668*/                OPC_CheckComplexPat, /*CP*/0, /*#*/2, // SelectAddr:$dst #4 #5
/*1671*/                OPC_EmitMergeInputChains, 2, 0, 1, 
/*1675*/                OPC_MorphNodeTo1, TARGET_VAL(MSP430::OR16mr), 0|OPFL_Chain|OPFL_MemRefs,
                            MVT::i16, 3/*#Ops*/, 4, 5, 3, 
                        // Src: (st (or:i16 (ld:i16 addr:iPTR:$dst)<<P:Predicate_unindexedload>><<P:Predicate_load>>, GR16:i16:$src), addr:iPTR:$dst)<<P:Predicate_unindexedstore>><<P:Predicate_store>> - Complexity = 29
                        // Dst: (OR16mr:i16 addr:i16:$dst, GR16:i16:$src)
/*1684*/              0, /*End of Scope*/
/*1685*/            0, /*End of Scope*/
/*1686*/          /*Scope*/ 66, /*->1753*/
/*1687*/            OPC_RecordChild0, // #1 = $src
/*1688*/            OPC_MoveChild1,
/*1689*/            OPC_CheckOpcode, TARGET_VAL(ISD::LOAD),
/*1692*/            OPC_RecordMemRef,
/*1693*/            OPC_RecordNode, // #2 = 'ld' chained node
/*1694*/            OPC_CheckFoldableChainNode,
/*1695*/            OPC_RecordChild1, // #3 = $dst
/*1696*/            OPC_CheckPredicate, 0, // Predicate_unindexedload
/*1698*/            OPC_CheckPredicate, 1, // Predicate_load
/*1700*/            OPC_MoveParent,
/*1701*/            OPC_SwitchType /*2 cases */, 23, MVT::i8,// ->1727
/*1704*/              OPC_MoveParent,
/*1705*/              OPC_CheckChild2Same, 3,
/*1707*/              OPC_CheckPredicate, 2, // Predicate_unindexedstore
/*1709*/              OPC_CheckPredicate, 3, // Predicate_store
/*1711*/              OPC_CheckComplexPat, /*CP*/0, /*#*/3, // SelectAddr:$dst #4 #5
/*1714*/              OPC_EmitMergeInputChains, 2, 0, 2, 
/*1718*/              OPC_MorphNodeTo1, TARGET_VAL(MSP430::OR8mr), 0|OPFL_Chain|OPFL_MemRefs,
                          MVT::i16, 3/*#Ops*/, 4, 5, 1, 
                      // Src: (st (or:i8 GR8:i8:$src, (ld:i8 addr:iPTR:$dst)<<P:Predicate_unindexedload>><<P:Predicate_load>>), addr:iPTR:$dst)<<P:Predicate_unindexedstore>><<P:Predicate_store>> - Complexity = 29
                      // Dst: (OR8mr:i16 addr:i16:$dst, GR8:i8:$src)
/*1727*/            /*SwitchType*/ 23, MVT::i16,// ->1752
/*1729*/              OPC_MoveParent,
/*1730*/              OPC_CheckChild2Same, 3,
/*1732*/              OPC_CheckPredicate, 2, // Predicate_unindexedstore
/*1734*/              OPC_CheckPredicate, 3, // Predicate_store
/*1736*/              OPC_CheckComplexPat, /*CP*/0, /*#*/3, // SelectAddr:$dst #4 #5
/*1739*/              OPC_EmitMergeInputChains, 2, 0, 2, 
/*1743*/              OPC_MorphNodeTo1, TARGET_VAL(MSP430::OR16mr), 0|OPFL_Chain|OPFL_MemRefs,
                          MVT::i16, 3/*#Ops*/, 4, 5, 1, 
                      // Src: (st (or:i16 GR16:i16:$src, (ld:i16 addr:iPTR:$dst)<<P:Predicate_unindexedload>><<P:Predicate_load>>), addr:iPTR:$dst)<<P:Predicate_unindexedstore>><<P:Predicate_store>> - Complexity = 29
                      // Dst: (OR16mr:i16 addr:i16:$dst, GR16:i16:$src)
/*1752*/            0, // EndSwitchType
/*1753*/          0, /*End of Scope*/
/*1754*/        /*SwitchOpcode*/ 87|128,2/*343*/, TARGET_VAL(ISD::XOR),// ->2101
/*1758*/          OPC_Scope, 16|128,2/*272*/, /*->2033*/ // 2 children in Scope
/*1761*/            OPC_MoveChild0,
/*1762*/            OPC_CheckOpcode, TARGET_VAL(ISD::LOAD),
/*1765*/            OPC_RecordMemRef,
/*1766*/            OPC_RecordNode, // #1 = 'ld' chained node
/*1767*/            OPC_CheckFoldableChainNode,
/*1768*/            OPC_RecordChild1, // #2 = $dst
/*1769*/            OPC_CheckPredicate, 0, // Predicate_unindexedload
/*1771*/            OPC_CheckPredicate, 1, // Predicate_load
/*1773*/            OPC_MoveParent,
/*1774*/            OPC_Scope, 9|128,1/*137*/, /*->1914*/ // 2 children in Scope
/*1777*/              OPC_MoveChild1,
/*1778*/              OPC_CheckOpcode, TARGET_VAL(ISD::LOAD),
/*1781*/              OPC_RecordMemRef,
/*1782*/              OPC_RecordNode, // #3 = 'ld' chained node
/*1783*/              OPC_CheckFoldableChainNode,
/*1784*/              OPC_RecordChild1, // #4 = $src
/*1785*/              OPC_CheckPredicate, 0, // Predicate_unindexedload
/*1787*/              OPC_CheckPredicate, 1, // Predicate_load
/*1789*/              OPC_MoveParent,
/*1790*/              OPC_SwitchType /*2 cases */, 59, MVT::i8,// ->1852
/*1793*/                OPC_MoveParent,
/*1794*/                OPC_Scope, 27, /*->1823*/ // 2 children in Scope
/*1796*/                  OPC_CheckChild2Same, 2,
/*1798*/                  OPC_CheckPredicate, 2, // Predicate_unindexedstore
/*1800*/                  OPC_CheckPredicate, 3, // Predicate_store
/*1802*/                  OPC_CheckComplexPat, /*CP*/0, /*#*/2, // SelectAddr:$dst #5 #6
/*1805*/                  OPC_CheckComplexPat, /*CP*/0, /*#*/4, // SelectAddr:$src #7 #8
/*1808*/                  OPC_EmitMergeInputChains, 3, 0, 1, 3, 
/*1813*/                  OPC_MorphNodeTo1, TARGET_VAL(MSP430::XOR8mm), 0|OPFL_Chain|OPFL_MemRefs,
                              MVT::i16, 4/*#Ops*/, 5, 6, 7, 8, 
                          // Src: (st (xor:i8 (ld:i8 addr:iPTR:$dst)<<P:Predicate_unindexedload>><<P:Predicate_load>>, (ld:i8 addr:iPTR:$src)<<P:Predicate_unindexedload>><<P:Predicate_load>>), addr:iPTR:$dst)<<P:Predicate_unindexedstore>><<P:Predicate_store>> - Complexity = 42
                          // Dst: (XOR8mm:i16 addr:i16:$dst, addr:i16:$src)
/*1823*/                /*Scope*/ 27, /*->1851*/
/*1824*/                  OPC_CheckChild2Same, 4,
/*1826*/                  OPC_CheckPredicate, 2, // Predicate_unindexedstore
/*1828*/                  OPC_CheckPredicate, 3, // Predicate_store
/*1830*/                  OPC_CheckComplexPat, /*CP*/0, /*#*/2, // SelectAddr:$src #5 #6
/*1833*/                  OPC_CheckComplexPat, /*CP*/0, /*#*/4, // SelectAddr:$dst #7 #8
/*1836*/                  OPC_EmitMergeInputChains, 3, 0, 1, 3, 
/*1841*/                  OPC_MorphNodeTo1, TARGET_VAL(MSP430::XOR8mm), 0|OPFL_Chain|OPFL_MemRefs,
                              MVT::i16, 4/*#Ops*/, 7, 8, 5, 6, 
                          // Src: (st (xor:i8 (ld:i8 addr:iPTR:$src)<<P:Predicate_unindexedload>><<P:Predicate_load>>, (ld:i8 addr:iPTR:$dst)<<P:Predicate_unindexedload>><<P:Predicate_load>>), addr:iPTR:$dst)<<P:Predicate_unindexedstore>><<P:Predicate_store>> - Complexity = 42
                          // Dst: (XOR8mm:i16 addr:i16:$dst, addr:i16:$src)
/*1851*/                0, /*End of Scope*/
/*1852*/              /*SwitchType*/ 59, MVT::i16,// ->1913
/*1854*/                OPC_MoveParent,
/*1855*/                OPC_Scope, 27, /*->1884*/ // 2 children in Scope
/*1857*/                  OPC_CheckChild2Same, 2,
/*1859*/                  OPC_CheckPredicate, 2, // Predicate_unindexedstore
/*1861*/                  OPC_CheckPredicate, 3, // Predicate_store
/*1863*/                  OPC_CheckComplexPat, /*CP*/0, /*#*/2, // SelectAddr:$dst #5 #6
/*1866*/                  OPC_CheckComplexPat, /*CP*/0, /*#*/4, // SelectAddr:$src #7 #8
/*1869*/                  OPC_EmitMergeInputChains, 3, 0, 1, 3, 
/*1874*/                  OPC_MorphNodeTo1, TARGET_VAL(MSP430::XOR16mm), 0|OPFL_Chain|OPFL_MemRefs,
                              MVT::i16, 4/*#Ops*/, 5, 6, 7, 8, 
                          // Src: (st (xor:i16 (ld:i16 addr:iPTR:$dst)<<P:Predicate_unindexedload>><<P:Predicate_load>>, (ld:i16 addr:iPTR:$src)<<P:Predicate_unindexedload>><<P:Predicate_load>>), addr:iPTR:$dst)<<P:Predicate_unindexedstore>><<P:Predicate_store>> - Complexity = 42
                          // Dst: (XOR16mm:i16 addr:i16:$dst, addr:i16:$src)
/*1884*/                /*Scope*/ 27, /*->1912*/
/*1885*/                  OPC_CheckChild2Same, 4,
/*1887*/                  OPC_CheckPredicate, 2, // Predicate_unindexedstore
/*1889*/                  OPC_CheckPredicate, 3, // Predicate_store
/*1891*/                  OPC_CheckComplexPat, /*CP*/0, /*#*/2, // SelectAddr:$src #5 #6
/*1894*/                  OPC_CheckComplexPat, /*CP*/0, /*#*/4, // SelectAddr:$dst #7 #8
/*1897*/                  OPC_EmitMergeInputChains, 3, 0, 1, 3, 
/*1902*/                  OPC_MorphNodeTo1, TARGET_VAL(MSP430::XOR16mm), 0|OPFL_Chain|OPFL_MemRefs,
                              MVT::i16, 4/*#Ops*/, 7, 8, 5, 6, 
                          // Src: (st (xor:i16 (ld:i16 addr:iPTR:$src)<<P:Predicate_unindexedload>><<P:Predicate_load>>, (ld:i16 addr:iPTR:$dst)<<P:Predicate_unindexedload>><<P:Predicate_load>>), addr:iPTR:$dst)<<P:Predicate_unindexedstore>><<P:Predicate_store>> - Complexity = 42
                          // Dst: (XOR16mm:i16 addr:i16:$dst, addr:i16:$src)
/*1912*/                0, /*End of Scope*/
/*1913*/              0, // EndSwitchType
/*1914*/            /*Scope*/ 117, /*->2032*/
/*1915*/              OPC_RecordChild1, // #3 = $src
/*1916*/              OPC_Scope, 61, /*->1979*/ // 3 children in Scope
/*1918*/                OPC_MoveChild1,
/*1919*/                OPC_CheckOpcode, TARGET_VAL(ISD::Constant),
/*1922*/                OPC_MoveParent,
/*1923*/                OPC_SwitchType /*2 cases */, 25, MVT::i8,// ->1951
/*1926*/                  OPC_MoveParent,
/*1927*/                  OPC_CheckChild2Same, 2,
/*1929*/                  OPC_CheckPredicate, 2, // Predicate_unindexedstore
/*1931*/                  OPC_CheckPredicate, 3, // Predicate_store
/*1933*/                  OPC_CheckComplexPat, /*CP*/0, /*#*/2, // SelectAddr:$dst #4 #5
/*1936*/                  OPC_EmitMergeInputChains, 2, 0, 1, 
/*1940*/                  OPC_EmitConvertToTarget, 3,
/*1942*/                  OPC_MorphNodeTo1, TARGET_VAL(MSP430::XOR8mi), 0|OPFL_Chain|OPFL_MemRefs,
                              MVT::i16, 3/*#Ops*/, 4, 5, 6, 
                          // Src: (st (xor:i8 (ld:i8 addr:iPTR:$dst)<<P:Predicate_unindexedload>><<P:Predicate_load>>, (imm:i8):$src), addr:iPTR:$dst)<<P:Predicate_unindexedstore>><<P:Predicate_store>> - Complexity = 32
                          // Dst: (XOR8mi:i16 addr:i16:$dst, (imm:i8):$src)
/*1951*/                /*SwitchType*/ 25, MVT::i16,// ->1978
/*1953*/                  OPC_MoveParent,
/*1954*/                  OPC_CheckChild2Same, 2,
/*1956*/                  OPC_CheckPredicate, 2, // Predicate_unindexedstore
/*1958*/                  OPC_CheckPredicate, 3, // Predicate_store
/*1960*/                  OPC_CheckComplexPat, /*CP*/0, /*#*/2, // SelectAddr:$dst #4 #5
/*1963*/                  OPC_EmitMergeInputChains, 2, 0, 1, 
/*1967*/                  OPC_EmitConvertToTarget, 3,
/*1969*/                  OPC_MorphNodeTo1, TARGET_VAL(MSP430::XOR16mi), 0|OPFL_Chain|OPFL_MemRefs,
                              MVT::i16, 3/*#Ops*/, 4, 5, 6, 
                          // Src: (st (xor:i16 (ld:i16 addr:iPTR:$dst)<<P:Predicate_unindexedload>><<P:Predicate_load>>, (imm:i16):$src), addr:iPTR:$dst)<<P:Predicate_unindexedstore>><<P:Predicate_store>> - Complexity = 32
                          // Dst: (XOR16mi:i16 addr:i16:$dst, (imm:i16):$src)
/*1978*/                0, // EndSwitchType
/*1979*/              /*Scope*/ 25, /*->2005*/
/*1980*/                OPC_CheckType, MVT::i8,
/*1982*/                OPC_MoveParent,
/*1983*/                OPC_CheckChild2Same, 2,
/*1985*/                OPC_CheckPredicate, 2, // Predicate_unindexedstore
/*1987*/                OPC_CheckPredicate, 3, // Predicate_store
/*1989*/                OPC_CheckComplexPat, /*CP*/0, /*#*/2, // SelectAddr:$dst #4 #5
/*1992*/                OPC_EmitMergeInputChains, 2, 0, 1, 
/*1996*/                OPC_MorphNodeTo1, TARGET_VAL(MSP430::XOR8mr), 0|OPFL_Chain|OPFL_MemRefs,
                            MVT::i16, 3/*#Ops*/, 4, 5, 3, 
                        // Src: (st (xor:i8 (ld:i8 addr:iPTR:$dst)<<P:Predicate_unindexedload>><<P:Predicate_load>>, GR8:i8:$src), addr:iPTR:$dst)<<P:Predicate_unindexedstore>><<P:Predicate_store>> - Complexity = 29
                        // Dst: (XOR8mr:i16 addr:i16:$dst, GR8:i8:$src)
/*2005*/              /*Scope*/ 25, /*->2031*/
/*2006*/                OPC_CheckType, MVT::i16,
/*2008*/                OPC_MoveParent,
/*2009*/                OPC_CheckChild2Same, 2,
/*2011*/                OPC_CheckPredicate, 2, // Predicate_unindexedstore
/*2013*/                OPC_CheckPredicate, 3, // Predicate_store
/*2015*/                OPC_CheckComplexPat, /*CP*/0, /*#*/2, // SelectAddr:$dst #4 #5
/*2018*/                OPC_EmitMergeInputChains, 2, 0, 1, 
/*2022*/                OPC_MorphNodeTo1, TARGET_VAL(MSP430::XOR16mr), 0|OPFL_Chain|OPFL_MemRefs,
                            MVT::i16, 3/*#Ops*/, 4, 5, 3, 
                        // Src: (st (xor:i16 (ld:i16 addr:iPTR:$dst)<<P:Predicate_unindexedload>><<P:Predicate_load>>, GR16:i16:$src), addr:iPTR:$dst)<<P:Predicate_unindexedstore>><<P:Predicate_store>> - Complexity = 29
                        // Dst: (XOR16mr:i16 addr:i16:$dst, GR16:i16:$src)
/*2031*/              0, /*End of Scope*/
/*2032*/            0, /*End of Scope*/
/*2033*/          /*Scope*/ 66, /*->2100*/
/*2034*/            OPC_RecordChild0, // #1 = $src
/*2035*/            OPC_MoveChild1,
/*2036*/            OPC_CheckOpcode, TARGET_VAL(ISD::LOAD),
/*2039*/            OPC_RecordMemRef,
/*2040*/            OPC_RecordNode, // #2 = 'ld' chained node
/*2041*/            OPC_CheckFoldableChainNode,
/*2042*/            OPC_RecordChild1, // #3 = $dst
/*2043*/            OPC_CheckPredicate, 0, // Predicate_unindexedload
/*2045*/            OPC_CheckPredicate, 1, // Predicate_load
/*2047*/            OPC_MoveParent,
/*2048*/            OPC_SwitchType /*2 cases */, 23, MVT::i8,// ->2074
/*2051*/              OPC_MoveParent,
/*2052*/              OPC_CheckChild2Same, 3,
/*2054*/              OPC_CheckPredicate, 2, // Predicate_unindexedstore
/*2056*/              OPC_CheckPredicate, 3, // Predicate_store
/*2058*/              OPC_CheckComplexPat, /*CP*/0, /*#*/3, // SelectAddr:$dst #4 #5
/*2061*/              OPC_EmitMergeInputChains, 2, 0, 2, 
/*2065*/              OPC_MorphNodeTo1, TARGET_VAL(MSP430::XOR8mr), 0|OPFL_Chain|OPFL_MemRefs,
                          MVT::i16, 3/*#Ops*/, 4, 5, 1, 
                      // Src: (st (xor:i8 GR8:i8:$src, (ld:i8 addr:iPTR:$dst)<<P:Predicate_unindexedload>><<P:Predicate_load>>), addr:iPTR:$dst)<<P:Predicate_unindexedstore>><<P:Predicate_store>> - Complexity = 29
                      // Dst: (XOR8mr:i16 addr:i16:$dst, GR8:i8:$src)
/*2074*/            /*SwitchType*/ 23, MVT::i16,// ->2099
/*2076*/              OPC_MoveParent,
/*2077*/              OPC_CheckChild2Same, 3,
/*2079*/              OPC_CheckPredicate, 2, // Predicate_unindexedstore
/*2081*/              OPC_CheckPredicate, 3, // Predicate_store
/*2083*/              OPC_CheckComplexPat, /*CP*/0, /*#*/3, // SelectAddr:$dst #4 #5
/*2086*/              OPC_EmitMergeInputChains, 2, 0, 2, 
/*2090*/              OPC_MorphNodeTo1, TARGET_VAL(MSP430::XOR16mr), 0|OPFL_Chain|OPFL_MemRefs,
                          MVT::i16, 3/*#Ops*/, 4, 5, 1, 
                      // Src: (st (xor:i16 GR16:i16:$src, (ld:i16 addr:iPTR:$dst)<<P:Predicate_unindexedload>><<P:Predicate_load>>), addr:iPTR:$dst)<<P:Predicate_unindexedstore>><<P:Predicate_store>> - Complexity = 29
                      // Dst: (XOR16mr:i16 addr:i16:$dst, GR16:i16:$src)
/*2099*/            0, // EndSwitchType
/*2100*/          0, /*End of Scope*/
/*2101*/        /*SwitchOpcode*/ 81|128,1/*209*/, TARGET_VAL(ISD::SUB),// ->2314
/*2105*/          OPC_MoveChild0,
/*2106*/          OPC_CheckOpcode, TARGET_VAL(ISD::LOAD),
/*2109*/          OPC_RecordMemRef,
/*2110*/          OPC_RecordNode, // #1 = 'ld' chained node
/*2111*/          OPC_CheckFoldableChainNode,
/*2112*/          OPC_RecordChild1, // #2 = $dst
/*2113*/          OPC_CheckPredicate, 0, // Predicate_unindexedload
/*2115*/          OPC_CheckPredicate, 1, // Predicate_load
/*2117*/          OPC_MoveParent,
/*2118*/          OPC_Scope, 75, /*->2195*/ // 2 children in Scope
/*2120*/            OPC_MoveChild1,
/*2121*/            OPC_CheckOpcode, TARGET_VAL(ISD::LOAD),
/*2124*/            OPC_RecordMemRef,
/*2125*/            OPC_RecordNode, // #3 = 'ld' chained node
/*2126*/            OPC_CheckFoldableChainNode,
/*2127*/            OPC_RecordChild1, // #4 = $src
/*2128*/            OPC_CheckPredicate, 0, // Predicate_unindexedload
/*2130*/            OPC_CheckPredicate, 1, // Predicate_load
/*2132*/            OPC_MoveParent,
/*2133*/            OPC_SwitchType /*2 cases */, 28, MVT::i8,// ->2164
/*2136*/              OPC_MoveParent,
/*2137*/              OPC_CheckChild2Same, 2,
/*2139*/              OPC_CheckPredicate, 2, // Predicate_unindexedstore
/*2141*/              OPC_CheckPredicate, 3, // Predicate_store
/*2143*/              OPC_CheckComplexPat, /*CP*/0, /*#*/2, // SelectAddr:$dst #5 #6
/*2146*/              OPC_CheckComplexPat, /*CP*/0, /*#*/4, // SelectAddr:$src #7 #8
/*2149*/              OPC_EmitMergeInputChains, 3, 0, 1, 3, 
/*2154*/              OPC_MorphNodeTo1, TARGET_VAL(MSP430::SUB8mm), 0|OPFL_Chain|OPFL_MemRefs,
                          MVT::i16, 4/*#Ops*/, 5, 6, 7, 8, 
                      // Src: (st (sub:i8 (ld:i8 addr:iPTR:$dst)<<P:Predicate_unindexedload>><<P:Predicate_load>>, (ld:i8 addr:iPTR:$src)<<P:Predicate_unindexedload>><<P:Predicate_load>>), addr:iPTR:$dst)<<P:Predicate_unindexedstore>><<P:Predicate_store>> - Complexity = 42
                      // Dst: (SUB8mm:i16 addr:i16:$dst, addr:i16:$src)
/*2164*/            /*SwitchType*/ 28, MVT::i16,// ->2194
/*2166*/              OPC_MoveParent,
/*2167*/              OPC_CheckChild2Same, 2,
/*2169*/              OPC_CheckPredicate, 2, // Predicate_unindexedstore
/*2171*/              OPC_CheckPredicate, 3, // Predicate_store
/*2173*/              OPC_CheckComplexPat, /*CP*/0, /*#*/2, // SelectAddr:$dst #5 #6
/*2176*/              OPC_CheckComplexPat, /*CP*/0, /*#*/4, // SelectAddr:$src #7 #8
/*2179*/              OPC_EmitMergeInputChains, 3, 0, 1, 3, 
/*2184*/              OPC_MorphNodeTo1, TARGET_VAL(MSP430::SUB16mm), 0|OPFL_Chain|OPFL_MemRefs,
                          MVT::i16, 4/*#Ops*/, 5, 6, 7, 8, 
                      // Src: (st (sub:i16 (ld:i16 addr:iPTR:$dst)<<P:Predicate_unindexedload>><<P:Predicate_load>>, (ld:i16 addr:iPTR:$src)<<P:Predicate_unindexedload>><<P:Predicate_load>>), addr:iPTR:$dst)<<P:Predicate_unindexedstore>><<P:Predicate_store>> - Complexity = 42
                      // Dst: (SUB16mm:i16 addr:i16:$dst, addr:i16:$src)
/*2194*/            0, // EndSwitchType
/*2195*/          /*Scope*/ 117, /*->2313*/
/*2196*/            OPC_RecordChild1, // #3 = $src
/*2197*/            OPC_Scope, 61, /*->2260*/ // 3 children in Scope
/*2199*/              OPC_MoveChild1,
/*2200*/              OPC_CheckOpcode, TARGET_VAL(ISD::Constant),
/*2203*/              OPC_MoveParent,
/*2204*/              OPC_SwitchType /*2 cases */, 25, MVT::i8,// ->2232
/*2207*/                OPC_MoveParent,
/*2208*/                OPC_CheckChild2Same, 2,
/*2210*/                OPC_CheckPredicate, 2, // Predicate_unindexedstore
/*2212*/                OPC_CheckPredicate, 3, // Predicate_store
/*2214*/                OPC_CheckComplexPat, /*CP*/0, /*#*/2, // SelectAddr:$dst #4 #5
/*2217*/                OPC_EmitMergeInputChains, 2, 0, 1, 
/*2221*/                OPC_EmitConvertToTarget, 3,
/*2223*/                OPC_MorphNodeTo1, TARGET_VAL(MSP430::SUB8mi), 0|OPFL_Chain|OPFL_MemRefs,
                            MVT::i16, 3/*#Ops*/, 4, 5, 6, 
                        // Src: (st (sub:i8 (ld:i8 addr:iPTR:$dst)<<P:Predicate_unindexedload>><<P:Predicate_load>>, (imm:i8):$src), addr:iPTR:$dst)<<P:Predicate_unindexedstore>><<P:Predicate_store>> - Complexity = 32
                        // Dst: (SUB8mi:i16 addr:i16:$dst, (imm:i8):$src)
/*2232*/              /*SwitchType*/ 25, MVT::i16,// ->2259
/*2234*/                OPC_MoveParent,
/*2235*/                OPC_CheckChild2Same, 2,
/*2237*/                OPC_CheckPredicate, 2, // Predicate_unindexedstore
/*2239*/                OPC_CheckPredicate, 3, // Predicate_store
/*2241*/                OPC_CheckComplexPat, /*CP*/0, /*#*/2, // SelectAddr:$dst #4 #5
/*2244*/                OPC_EmitMergeInputChains, 2, 0, 1, 
/*2248*/                OPC_EmitConvertToTarget, 3,
/*2250*/                OPC_MorphNodeTo1, TARGET_VAL(MSP430::SUB16mi), 0|OPFL_Chain|OPFL_MemRefs,
                            MVT::i16, 3/*#Ops*/, 4, 5, 6, 
                        // Src: (st (sub:i16 (ld:i16 addr:iPTR:$dst)<<P:Predicate_unindexedload>><<P:Predicate_load>>, (imm:i16):$src), addr:iPTR:$dst)<<P:Predicate_unindexedstore>><<P:Predicate_store>> - Complexity = 32
                        // Dst: (SUB16mi:i16 addr:i16:$dst, (imm:i16):$src)
/*2259*/              0, // EndSwitchType
/*2260*/            /*Scope*/ 25, /*->2286*/
/*2261*/              OPC_CheckType, MVT::i8,
/*2263*/              OPC_MoveParent,
/*2264*/              OPC_CheckChild2Same, 2,
/*2266*/              OPC_CheckPredicate, 2, // Predicate_unindexedstore
/*2268*/              OPC_CheckPredicate, 3, // Predicate_store
/*2270*/              OPC_CheckComplexPat, /*CP*/0, /*#*/2, // SelectAddr:$dst #4 #5
/*2273*/              OPC_EmitMergeInputChains, 2, 0, 1, 
/*2277*/              OPC_MorphNodeTo1, TARGET_VAL(MSP430::SUB8mr), 0|OPFL_Chain|OPFL_MemRefs,
                          MVT::i16, 3/*#Ops*/, 4, 5, 3, 
                      // Src: (st (sub:i8 (ld:i8 addr:iPTR:$dst)<<P:Predicate_unindexedload>><<P:Predicate_load>>, GR8:i8:$src), addr:iPTR:$dst)<<P:Predicate_unindexedstore>><<P:Predicate_store>> - Complexity = 29
                      // Dst: (SUB8mr:i16 addr:i16:$dst, GR8:i8:$src)
/*2286*/            /*Scope*/ 25, /*->2312*/
/*2287*/              OPC_CheckType, MVT::i16,
/*2289*/              OPC_MoveParent,
/*2290*/              OPC_CheckChild2Same, 2,
/*2292*/              OPC_CheckPredicate, 2, // Predicate_unindexedstore
/*2294*/              OPC_CheckPredicate, 3, // Predicate_store
/*2296*/              OPC_CheckComplexPat, /*CP*/0, /*#*/2, // SelectAddr:$dst #4 #5
/*2299*/              OPC_EmitMergeInputChains, 2, 0, 1, 
/*2303*/              OPC_MorphNodeTo1, TARGET_VAL(MSP430::SUB16mr), 0|OPFL_Chain|OPFL_MemRefs,
                          MVT::i16, 3/*#Ops*/, 4, 5, 3, 
                      // Src: (st (sub:i16 (ld:i16 addr:iPTR:$dst)<<P:Predicate_unindexedload>><<P:Predicate_load>>, GR16:i16:$src), addr:iPTR:$dst)<<P:Predicate_unindexedstore>><<P:Predicate_store>> - Complexity = 29
                      // Dst: (SUB16mr:i16 addr:i16:$dst, GR16:i16:$src)
/*2312*/            0, /*End of Scope*/
/*2313*/          0, /*End of Scope*/
/*2314*/        /*SwitchOpcode*/ 83|128,1/*211*/, TARGET_VAL(ISD::SUBE),// ->2529
/*2318*/          OPC_RecordNode, // #1 = 'sube' glue output node
/*2319*/          OPC_CaptureGlueInput,
/*2320*/          OPC_MoveChild0,
/*2321*/          OPC_CheckOpcode, TARGET_VAL(ISD::LOAD),
/*2324*/          OPC_RecordMemRef,
/*2325*/          OPC_RecordNode, // #1 = 'ld' chained node
/*2326*/          OPC_CheckFoldableChainNode,
/*2327*/          OPC_RecordChild1, // #2 = $dst
/*2328*/          OPC_CheckPredicate, 0, // Predicate_unindexedload
/*2330*/          OPC_CheckPredicate, 1, // Predicate_load
/*2332*/          OPC_MoveParent,
/*2333*/          OPC_Scope, 75, /*->2410*/ // 2 children in Scope
/*2335*/            OPC_MoveChild1,
/*2336*/            OPC_CheckOpcode, TARGET_VAL(ISD::LOAD),
/*2339*/            OPC_RecordMemRef,
/*2340*/            OPC_RecordNode, // #3 = 'ld' chained node
/*2341*/            OPC_CheckFoldableChainNode,
/*2342*/            OPC_RecordChild1, // #4 = $src
/*2343*/            OPC_CheckPredicate, 0, // Predicate_unindexedload
/*2345*/            OPC_CheckPredicate, 1, // Predicate_load
/*2347*/            OPC_MoveParent,
/*2348*/            OPC_SwitchType /*2 cases */, 28, MVT::i8,// ->2379
/*2351*/              OPC_MoveParent,
/*2352*/              OPC_CheckChild2Same, 2,
/*2354*/              OPC_CheckPredicate, 2, // Predicate_unindexedstore
/*2356*/              OPC_CheckPredicate, 3, // Predicate_store
/*2358*/              OPC_CheckComplexPat, /*CP*/0, /*#*/2, // SelectAddr:$dst #5 #6
/*2361*/              OPC_CheckComplexPat, /*CP*/0, /*#*/4, // SelectAddr:$src #7 #8
/*2364*/              OPC_EmitMergeInputChains, 3, 0, 1, 3, 
/*2369*/              OPC_MorphNodeTo1, TARGET_VAL(MSP430::SBC8mm), 0|OPFL_Chain|OPFL_GlueInput|OPFL_GlueOutput|OPFL_MemRefs,
                          MVT::i16, 4/*#Ops*/, 5, 6, 7, 8, 
                      // Src: (st (sube:i8 (ld:i8 addr:iPTR:$dst)<<P:Predicate_unindexedload>><<P:Predicate_load>>, (ld:i8 addr:iPTR:$src)<<P:Predicate_unindexedload>><<P:Predicate_load>>), addr:iPTR:$dst)<<P:Predicate_unindexedstore>><<P:Predicate_store>> - Complexity = 42
                      // Dst: (SBC8mm:i16 addr:i16:$dst, addr:i16:$src)
/*2379*/            /*SwitchType*/ 28, MVT::i16,// ->2409
/*2381*/              OPC_MoveParent,
/*2382*/              OPC_CheckChild2Same, 2,
/*2384*/              OPC_CheckPredicate, 2, // Predicate_unindexedstore
/*2386*/              OPC_CheckPredicate, 3, // Predicate_store
/*2388*/              OPC_CheckComplexPat, /*CP*/0, /*#*/2, // SelectAddr:$dst #5 #6
/*2391*/              OPC_CheckComplexPat, /*CP*/0, /*#*/4, // SelectAddr:$src #7 #8
/*2394*/              OPC_EmitMergeInputChains, 3, 0, 1, 3, 
/*2399*/              OPC_MorphNodeTo1, TARGET_VAL(MSP430::SBC16mm), 0|OPFL_Chain|OPFL_GlueInput|OPFL_GlueOutput|OPFL_MemRefs,
                          MVT::i16, 4/*#Ops*/, 5, 6, 7, 8, 
                      // Src: (st (sube:i16 (ld:i16 addr:iPTR:$dst)<<P:Predicate_unindexedload>><<P:Predicate_load>>, (ld:i16 addr:iPTR:$src)<<P:Predicate_unindexedload>><<P:Predicate_load>>), addr:iPTR:$dst)<<P:Predicate_unindexedstore>><<P:Predicate_store>> - Complexity = 42
                      // Dst: (SBC16mm:i16 addr:i16:$dst, addr:i16:$src)
/*2409*/            0, // EndSwitchType
/*2410*/          /*Scope*/ 117, /*->2528*/
/*2411*/            OPC_RecordChild1, // #3 = $src
/*2412*/            OPC_Scope, 61, /*->2475*/ // 3 children in Scope
/*2414*/              OPC_MoveChild1,
/*2415*/              OPC_CheckOpcode, TARGET_VAL(ISD::Constant),
/*2418*/              OPC_MoveParent,
/*2419*/              OPC_SwitchType /*2 cases */, 25, MVT::i8,// ->2447
/*2422*/                OPC_MoveParent,
/*2423*/                OPC_CheckChild2Same, 2,
/*2425*/                OPC_CheckPredicate, 2, // Predicate_unindexedstore
/*2427*/                OPC_CheckPredicate, 3, // Predicate_store
/*2429*/                OPC_CheckComplexPat, /*CP*/0, /*#*/2, // SelectAddr:$dst #4 #5
/*2432*/                OPC_EmitMergeInputChains, 2, 0, 1, 
/*2436*/                OPC_EmitConvertToTarget, 3,
/*2438*/                OPC_MorphNodeTo1, TARGET_VAL(MSP430::SBC8mi), 0|OPFL_Chain|OPFL_GlueInput|OPFL_GlueOutput|OPFL_MemRefs,
                            MVT::i16, 3/*#Ops*/, 4, 5, 6, 
                        // Src: (st (sube:i8 (ld:i8 addr:iPTR:$dst)<<P:Predicate_unindexedload>><<P:Predicate_load>>, (imm:i8):$src), addr:iPTR:$dst)<<P:Predicate_unindexedstore>><<P:Predicate_store>> - Complexity = 32
                        // Dst: (SBC8mi:i16 addr:i16:$dst, (imm:i8):$src)
/*2447*/              /*SwitchType*/ 25, MVT::i16,// ->2474
/*2449*/                OPC_MoveParent,
/*2450*/                OPC_CheckChild2Same, 2,
/*2452*/                OPC_CheckPredicate, 2, // Predicate_unindexedstore
/*2454*/                OPC_CheckPredicate, 3, // Predicate_store
/*2456*/                OPC_CheckComplexPat, /*CP*/0, /*#*/2, // SelectAddr:$dst #4 #5
/*2459*/                OPC_EmitMergeInputChains, 2, 0, 1, 
/*2463*/                OPC_EmitConvertToTarget, 3,
/*2465*/                OPC_MorphNodeTo1, TARGET_VAL(MSP430::SBC16mi), 0|OPFL_Chain|OPFL_GlueInput|OPFL_GlueOutput|OPFL_MemRefs,
                            MVT::i16, 3/*#Ops*/, 4, 5, 6, 
                        // Src: (st (sube:i16 (ld:i16 addr:iPTR:$dst)<<P:Predicate_unindexedload>><<P:Predicate_load>>, (imm:i16):$src), addr:iPTR:$dst)<<P:Predicate_unindexedstore>><<P:Predicate_store>> - Complexity = 32
                        // Dst: (SBC16mi:i16 addr:i16:$dst, (imm:i16):$src)
/*2474*/              0, // EndSwitchType
/*2475*/            /*Scope*/ 25, /*->2501*/
/*2476*/              OPC_CheckType, MVT::i8,
/*2478*/              OPC_MoveParent,
/*2479*/              OPC_CheckChild2Same, 2,
/*2481*/              OPC_CheckPredicate, 2, // Predicate_unindexedstore
/*2483*/              OPC_CheckPredicate, 3, // Predicate_store
/*2485*/              OPC_CheckComplexPat, /*CP*/0, /*#*/2, // SelectAddr:$dst #4 #5
/*2488*/              OPC_EmitMergeInputChains, 2, 0, 1, 
/*2492*/              OPC_MorphNodeTo1, TARGET_VAL(MSP430::SBC8mr), 0|OPFL_Chain|OPFL_GlueInput|OPFL_GlueOutput|OPFL_MemRefs,
                          MVT::i16, 3/*#Ops*/, 4, 5, 3, 
                      // Src: (st (sube:i8 (ld:i8 addr:iPTR:$dst)<<P:Predicate_unindexedload>><<P:Predicate_load>>, GR8:i8:$src), addr:iPTR:$dst)<<P:Predicate_unindexedstore>><<P:Predicate_store>> - Complexity = 29
                      // Dst: (SBC8mr:i16 addr:i16:$dst, GR8:i8:$src)
/*2501*/            /*Scope*/ 25, /*->2527*/
/*2502*/              OPC_CheckType, MVT::i16,
/*2504*/              OPC_MoveParent,
/*2505*/              OPC_CheckChild2Same, 2,
/*2507*/              OPC_CheckPredicate, 2, // Predicate_unindexedstore
/*2509*/              OPC_CheckPredicate, 3, // Predicate_store
/*2511*/              OPC_CheckComplexPat, /*CP*/0, /*#*/2, // SelectAddr:$dst #4 #5
/*2514*/              OPC_EmitMergeInputChains, 2, 0, 1, 
/*2518*/              OPC_MorphNodeTo1, TARGET_VAL(MSP430::SBC16mr), 0|OPFL_Chain|OPFL_GlueInput|OPFL_GlueOutput|OPFL_MemRefs,
                          MVT::i16, 3/*#Ops*/, 4, 5, 3, 
                      // Src: (st (sube:i16 (ld:i16 addr:iPTR:$dst)<<P:Predicate_unindexedload>><<P:Predicate_load>>, GR16:i16:$src), addr:iPTR:$dst)<<P:Predicate_unindexedstore>><<P:Predicate_store>> - Complexity = 29
                      // Dst: (SBC16mr:i16 addr:i16:$dst, GR16:i16:$src)
/*2527*/            0, /*End of Scope*/
/*2528*/          0, /*End of Scope*/
/*2529*/        /*SwitchOpcode*/ 24|128,2/*280*/, TARGET_VAL(ISD::ADDC),// ->2813
/*2533*/          OPC_RecordNode, // #1 = 'addc' glue output node
/*2534*/          OPC_Scope, 80|128,1/*208*/, /*->2745*/ // 2 children in Scope
/*2537*/            OPC_MoveChild0,
/*2538*/            OPC_CheckOpcode, TARGET_VAL(ISD::LOAD),
/*2541*/            OPC_RecordMemRef,
/*2542*/            OPC_RecordNode, // #1 = 'ld' chained node
/*2543*/            OPC_CheckFoldableChainNode,
/*2544*/            OPC_RecordChild1, // #2 = $dst
/*2545*/            OPC_CheckPredicate, 0, // Predicate_unindexedload
/*2547*/            OPC_CheckPredicate, 1, // Predicate_load
/*2549*/            OPC_MoveParent,
/*2550*/            OPC_Scope, 9|128,1/*137*/, /*->2690*/ // 2 children in Scope
/*2553*/              OPC_MoveChild1,
/*2554*/              OPC_CheckOpcode, TARGET_VAL(ISD::LOAD),
/*2557*/              OPC_RecordMemRef,
/*2558*/              OPC_RecordNode, // #3 = 'ld' chained node
/*2559*/              OPC_CheckFoldableChainNode,
/*2560*/              OPC_RecordChild1, // #4 = $src
/*2561*/              OPC_CheckPredicate, 0, // Predicate_unindexedload
/*2563*/              OPC_CheckPredicate, 1, // Predicate_load
/*2565*/              OPC_MoveParent,
/*2566*/              OPC_SwitchType /*2 cases */, 59, MVT::i16,// ->2628
/*2569*/                OPC_MoveParent,
/*2570*/                OPC_Scope, 27, /*->2599*/ // 2 children in Scope
/*2572*/                  OPC_CheckChild2Same, 2,
/*2574*/                  OPC_CheckPredicate, 2, // Predicate_unindexedstore
/*2576*/                  OPC_CheckPredicate, 3, // Predicate_store
/*2578*/                  OPC_CheckComplexPat, /*CP*/0, /*#*/2, // SelectAddr:$dst #5 #6
/*2581*/                  OPC_CheckComplexPat, /*CP*/0, /*#*/4, // SelectAddr:$src #7 #8
/*2584*/                  OPC_EmitMergeInputChains, 3, 0, 1, 3, 
/*2589*/                  OPC_MorphNodeTo1, TARGET_VAL(MSP430::ADD16mm), 0|OPFL_Chain|OPFL_GlueOutput|OPFL_MemRefs,
                              MVT::i16, 4/*#Ops*/, 5, 6, 7, 8, 
                          // Src: (st (addc:i16 (ld:i16 addr:iPTR:$dst)<<P:Predicate_unindexedload>><<P:Predicate_load>>, (ld:i16 addr:iPTR:$src)<<P:Predicate_unindexedload>><<P:Predicate_load>>), addr:iPTR:$dst)<<P:Predicate_unindexedstore>><<P:Predicate_store>> - Complexity = 42
                          // Dst: (ADD16mm:i16 addr:i16:$dst, addr:i16:$src)
/*2599*/                /*Scope*/ 27, /*->2627*/
/*2600*/                  OPC_CheckChild2Same, 4,
/*2602*/                  OPC_CheckPredicate, 2, // Predicate_unindexedstore
/*2604*/                  OPC_CheckPredicate, 3, // Predicate_store
/*2606*/                  OPC_CheckComplexPat, /*CP*/0, /*#*/2, // SelectAddr:$src #5 #6
/*2609*/                  OPC_CheckComplexPat, /*CP*/0, /*#*/4, // SelectAddr:$dst #7 #8
/*2612*/                  OPC_EmitMergeInputChains, 3, 0, 1, 3, 
/*2617*/                  OPC_MorphNodeTo1, TARGET_VAL(MSP430::ADD16mm), 0|OPFL_Chain|OPFL_GlueOutput|OPFL_MemRefs,
                              MVT::i16, 4/*#Ops*/, 7, 8, 5, 6, 
                          // Src: (st (addc:i16 (ld:i16 addr:iPTR:$src)<<P:Predicate_unindexedload>><<P:Predicate_load>>, (ld:i16 addr:iPTR:$dst)<<P:Predicate_unindexedload>><<P:Predicate_load>>), addr:iPTR:$dst)<<P:Predicate_unindexedstore>><<P:Predicate_store>> - Complexity = 42
                          // Dst: (ADD16mm:i16 addr:i16:$dst, addr:i16:$src)
/*2627*/                0, /*End of Scope*/
/*2628*/              /*SwitchType*/ 59, MVT::i8,// ->2689
/*2630*/                OPC_MoveParent,
/*2631*/                OPC_Scope, 27, /*->2660*/ // 2 children in Scope
/*2633*/                  OPC_CheckChild2Same, 2,
/*2635*/                  OPC_CheckPredicate, 2, // Predicate_unindexedstore
/*2637*/                  OPC_CheckPredicate, 3, // Predicate_store
/*2639*/                  OPC_CheckComplexPat, /*CP*/0, /*#*/2, // SelectAddr:$dst #5 #6
/*2642*/                  OPC_CheckComplexPat, /*CP*/0, /*#*/4, // SelectAddr:$src #7 #8
/*2645*/                  OPC_EmitMergeInputChains, 3, 0, 1, 3, 
/*2650*/                  OPC_MorphNodeTo1, TARGET_VAL(MSP430::ADD8mm), 0|OPFL_Chain|OPFL_GlueOutput|OPFL_MemRefs,
                              MVT::i16, 4/*#Ops*/, 5, 6, 7, 8, 
                          // Src: (st (addc:i8 (ld:i8 addr:iPTR:$dst)<<P:Predicate_unindexedload>><<P:Predicate_load>>, (ld:i8 addr:iPTR:$src)<<P:Predicate_unindexedload>><<P:Predicate_load>>), addr:iPTR:$dst)<<P:Predicate_unindexedstore>><<P:Predicate_store>> - Complexity = 42
                          // Dst: (ADD8mm:i16 addr:i16:$dst, addr:i16:$src)
/*2660*/                /*Scope*/ 27, /*->2688*/
/*2661*/                  OPC_CheckChild2Same, 4,
/*2663*/                  OPC_CheckPredicate, 2, // Predicate_unindexedstore
/*2665*/                  OPC_CheckPredicate, 3, // Predicate_store
/*2667*/                  OPC_CheckComplexPat, /*CP*/0, /*#*/2, // SelectAddr:$src #5 #6
/*2670*/                  OPC_CheckComplexPat, /*CP*/0, /*#*/4, // SelectAddr:$dst #7 #8
/*2673*/                  OPC_EmitMergeInputChains, 3, 0, 1, 3, 
/*2678*/                  OPC_MorphNodeTo1, TARGET_VAL(MSP430::ADD8mm), 0|OPFL_Chain|OPFL_GlueOutput|OPFL_MemRefs,
                              MVT::i16, 4/*#Ops*/, 7, 8, 5, 6, 
                          // Src: (st (addc:i8 (ld:i8 addr:iPTR:$src)<<P:Predicate_unindexedload>><<P:Predicate_load>>, (ld:i8 addr:iPTR:$dst)<<P:Predicate_unindexedload>><<P:Predicate_load>>), addr:iPTR:$dst)<<P:Predicate_unindexedstore>><<P:Predicate_store>> - Complexity = 42
                          // Dst: (ADD8mm:i16 addr:i16:$dst, addr:i16:$src)
/*2688*/                0, /*End of Scope*/
/*2689*/              0, // EndSwitchType
/*2690*/            /*Scope*/ 53, /*->2744*/
/*2691*/              OPC_RecordChild1, // #3 = $src
/*2692*/              OPC_SwitchType /*2 cases */, 23, MVT::i16,// ->2718
/*2695*/                OPC_MoveParent,
/*2696*/                OPC_CheckChild2Same, 2,
/*2698*/                OPC_CheckPredicate, 2, // Predicate_unindexedstore
/*2700*/                OPC_CheckPredicate, 3, // Predicate_store
/*2702*/                OPC_CheckComplexPat, /*CP*/0, /*#*/2, // SelectAddr:$dst #4 #5
/*2705*/                OPC_EmitMergeInputChains, 2, 0, 1, 
/*2709*/                OPC_MorphNodeTo1, TARGET_VAL(MSP430::ADD16mr), 0|OPFL_Chain|OPFL_GlueOutput|OPFL_MemRefs,
                            MVT::i16, 3/*#Ops*/, 4, 5, 3, 
                        // Src: (st (addc:i16 (ld:i16 addr:iPTR:$dst)<<P:Predicate_unindexedload>><<P:Predicate_load>>, GR16:i16:$src), addr:iPTR:$dst)<<P:Predicate_unindexedstore>><<P:Predicate_store>> - Complexity = 29
                        // Dst: (ADD16mr:i16 addr:i16:$dst, GR16:i16:$src)
/*2718*/              /*SwitchType*/ 23, MVT::i8,// ->2743
/*2720*/                OPC_MoveParent,
/*2721*/                OPC_CheckChild2Same, 2,
/*2723*/                OPC_CheckPredicate, 2, // Predicate_unindexedstore
/*2725*/                OPC_CheckPredicate, 3, // Predicate_store
/*2727*/                OPC_CheckComplexPat, /*CP*/0, /*#*/2, // SelectAddr:$dst #4 #5
/*2730*/                OPC_EmitMergeInputChains, 2, 0, 1, 
/*2734*/                OPC_MorphNodeTo1, TARGET_VAL(MSP430::ADD8mr), 0|OPFL_Chain|OPFL_GlueOutput|OPFL_MemRefs,
                            MVT::i16, 3/*#Ops*/, 4, 5, 3, 
                        // Src: (st (addc:i8 (ld:i8 addr:iPTR:$dst)<<P:Predicate_unindexedload>><<P:Predicate_load>>, GR8:i8:$src), addr:iPTR:$dst)<<P:Predicate_unindexedstore>><<P:Predicate_store>> - Complexity = 29
                        // Dst: (ADD8mr:i16 addr:i16:$dst, GR8:i8:$src)
/*2743*/              0, // EndSwitchType
/*2744*/            0, /*End of Scope*/
/*2745*/          /*Scope*/ 66, /*->2812*/
/*2746*/            OPC_RecordChild0, // #1 = $src
/*2747*/            OPC_MoveChild1,
/*2748*/            OPC_CheckOpcode, TARGET_VAL(ISD::LOAD),
/*2751*/            OPC_RecordMemRef,
/*2752*/            OPC_RecordNode, // #2 = 'ld' chained node
/*2753*/            OPC_CheckFoldableChainNode,
/*2754*/            OPC_RecordChild1, // #3 = $dst
/*2755*/            OPC_CheckPredicate, 0, // Predicate_unindexedload
/*2757*/            OPC_CheckPredicate, 1, // Predicate_load
/*2759*/            OPC_MoveParent,
/*2760*/            OPC_SwitchType /*2 cases */, 23, MVT::i16,// ->2786
/*2763*/              OPC_MoveParent,
/*2764*/              OPC_CheckChild2Same, 3,
/*2766*/              OPC_CheckPredicate, 2, // Predicate_unindexedstore
/*2768*/              OPC_CheckPredicate, 3, // Predicate_store
/*2770*/              OPC_CheckComplexPat, /*CP*/0, /*#*/3, // SelectAddr:$dst #4 #5
/*2773*/              OPC_EmitMergeInputChains, 2, 0, 2, 
/*2777*/              OPC_MorphNodeTo1, TARGET_VAL(MSP430::ADD16mr), 0|OPFL_Chain|OPFL_GlueOutput|OPFL_MemRefs,
                          MVT::i16, 3/*#Ops*/, 4, 5, 1, 
                      // Src: (st (addc:i16 GR16:i16:$src, (ld:i16 addr:iPTR:$dst)<<P:Predicate_unindexedload>><<P:Predicate_load>>), addr:iPTR:$dst)<<P:Predicate_unindexedstore>><<P:Predicate_store>> - Complexity = 29
                      // Dst: (ADD16mr:i16 addr:i16:$dst, GR16:i16:$src)
/*2786*/            /*SwitchType*/ 23, MVT::i8,// ->2811
/*2788*/              OPC_MoveParent,
/*2789*/              OPC_CheckChild2Same, 3,
/*2791*/              OPC_CheckPredicate, 2, // Predicate_unindexedstore
/*2793*/              OPC_CheckPredicate, 3, // Predicate_store
/*2795*/              OPC_CheckComplexPat, /*CP*/0, /*#*/3, // SelectAddr:$dst #4 #5
/*2798*/              OPC_EmitMergeInputChains, 2, 0, 2, 
/*2802*/              OPC_MorphNodeTo1, TARGET_VAL(MSP430::ADD8mr), 0|OPFL_Chain|OPFL_GlueOutput|OPFL_MemRefs,
                          MVT::i16, 3/*#Ops*/, 4, 5, 1, 
                      // Src: (st (addc:i8 GR8:i8:$src, (ld:i8 addr:iPTR:$dst)<<P:Predicate_unindexedload>><<P:Predicate_load>>), addr:iPTR:$dst)<<P:Predicate_unindexedstore>><<P:Predicate_store>> - Complexity = 29
                      // Dst: (ADD8mr:i16 addr:i16:$dst, GR8:i8:$src)
/*2811*/            0, // EndSwitchType
/*2812*/          0, /*End of Scope*/
/*2813*/        /*SwitchOpcode*/ 18|128,1/*146*/, TARGET_VAL(ISD::SUBC),// ->2963
/*2817*/          OPC_RecordNode, // #1 = 'subc' glue output node
/*2818*/          OPC_MoveChild0,
/*2819*/          OPC_CheckOpcode, TARGET_VAL(ISD::LOAD),
/*2822*/          OPC_RecordMemRef,
/*2823*/          OPC_RecordNode, // #1 = 'ld' chained node
/*2824*/          OPC_CheckFoldableChainNode,
/*2825*/          OPC_RecordChild1, // #2 = $dst
/*2826*/          OPC_CheckPredicate, 0, // Predicate_unindexedload
/*2828*/          OPC_CheckPredicate, 1, // Predicate_load
/*2830*/          OPC_MoveParent,
/*2831*/          OPC_Scope, 75, /*->2908*/ // 2 children in Scope
/*2833*/            OPC_MoveChild1,
/*2834*/            OPC_CheckOpcode, TARGET_VAL(ISD::LOAD),
/*2837*/            OPC_RecordMemRef,
/*2838*/            OPC_RecordNode, // #3 = 'ld' chained node
/*2839*/            OPC_CheckFoldableChainNode,
/*2840*/            OPC_RecordChild1, // #4 = $src
/*2841*/            OPC_CheckPredicate, 0, // Predicate_unindexedload
/*2843*/            OPC_CheckPredicate, 1, // Predicate_load
/*2845*/            OPC_MoveParent,
/*2846*/            OPC_SwitchType /*2 cases */, 28, MVT::i16,// ->2877
/*2849*/              OPC_MoveParent,
/*2850*/              OPC_CheckChild2Same, 2,
/*2852*/              OPC_CheckPredicate, 2, // Predicate_unindexedstore
/*2854*/              OPC_CheckPredicate, 3, // Predicate_store
/*2856*/              OPC_CheckComplexPat, /*CP*/0, /*#*/2, // SelectAddr:$dst #5 #6
/*2859*/              OPC_CheckComplexPat, /*CP*/0, /*#*/4, // SelectAddr:$src #7 #8
/*2862*/              OPC_EmitMergeInputChains, 3, 0, 1, 3, 
/*2867*/              OPC_MorphNodeTo1, TARGET_VAL(MSP430::SUB16mm), 0|OPFL_Chain|OPFL_GlueOutput|OPFL_MemRefs,
                          MVT::i16, 4/*#Ops*/, 5, 6, 7, 8, 
                      // Src: (st (subc:i16 (ld:i16 addr:iPTR:$dst)<<P:Predicate_unindexedload>><<P:Predicate_load>>, (ld:i16 addr:iPTR:$src)<<P:Predicate_unindexedload>><<P:Predicate_load>>), addr:iPTR:$dst)<<P:Predicate_unindexedstore>><<P:Predicate_store>> - Complexity = 42
                      // Dst: (SUB16mm:i16 addr:i16:$dst, addr:i16:$src)
/*2877*/            /*SwitchType*/ 28, MVT::i8,// ->2907
/*2879*/              OPC_MoveParent,
/*2880*/              OPC_CheckChild2Same, 2,
/*2882*/              OPC_CheckPredicate, 2, // Predicate_unindexedstore
/*2884*/              OPC_CheckPredicate, 3, // Predicate_store
/*2886*/              OPC_CheckComplexPat, /*CP*/0, /*#*/2, // SelectAddr:$dst #5 #6
/*2889*/              OPC_CheckComplexPat, /*CP*/0, /*#*/4, // SelectAddr:$src #7 #8
/*2892*/              OPC_EmitMergeInputChains, 3, 0, 1, 3, 
/*2897*/              OPC_MorphNodeTo1, TARGET_VAL(MSP430::SUB8mm), 0|OPFL_Chain|OPFL_GlueOutput|OPFL_MemRefs,
                          MVT::i16, 4/*#Ops*/, 5, 6, 7, 8, 
                      // Src: (st (subc:i8 (ld:i8 addr:iPTR:$dst)<<P:Predicate_unindexedload>><<P:Predicate_load>>, (ld:i8 addr:iPTR:$src)<<P:Predicate_unindexedload>><<P:Predicate_load>>), addr:iPTR:$dst)<<P:Predicate_unindexedstore>><<P:Predicate_store>> - Complexity = 42
                      // Dst: (SUB8mm:i16 addr:i16:$dst, addr:i16:$src)
/*2907*/            0, // EndSwitchType
/*2908*/          /*Scope*/ 53, /*->2962*/
/*2909*/            OPC_RecordChild1, // #3 = $src
/*2910*/            OPC_SwitchType /*2 cases */, 23, MVT::i16,// ->2936
/*2913*/              OPC_MoveParent,
/*2914*/              OPC_CheckChild2Same, 2,
/*2916*/              OPC_CheckPredicate, 2, // Predicate_unindexedstore
/*2918*/              OPC_CheckPredicate, 3, // Predicate_store
/*2920*/              OPC_CheckComplexPat, /*CP*/0, /*#*/2, // SelectAddr:$dst #4 #5
/*2923*/              OPC_EmitMergeInputChains, 2, 0, 1, 
/*2927*/              OPC_MorphNodeTo1, TARGET_VAL(MSP430::SUB16mr), 0|OPFL_Chain|OPFL_GlueOutput|OPFL_MemRefs,
                          MVT::i16, 3/*#Ops*/, 4, 5, 3, 
                      // Src: (st (subc:i16 (ld:i16 addr:iPTR:$dst)<<P:Predicate_unindexedload>><<P:Predicate_load>>, GR16:i16:$src), addr:iPTR:$dst)<<P:Predicate_unindexedstore>><<P:Predicate_store>> - Complexity = 29
                      // Dst: (SUB16mr:i16 addr:i16:$dst, GR16:i16:$src)
/*2936*/            /*SwitchType*/ 23, MVT::i8,// ->2961
/*2938*/              OPC_MoveParent,
/*2939*/              OPC_CheckChild2Same, 2,
/*2941*/              OPC_CheckPredicate, 2, // Predicate_unindexedstore
/*2943*/              OPC_CheckPredicate, 3, // Predicate_store
/*2945*/              OPC_CheckComplexPat, /*CP*/0, /*#*/2, // SelectAddr:$dst #4 #5
/*2948*/              OPC_EmitMergeInputChains, 2, 0, 1, 
/*2952*/              OPC_MorphNodeTo1, TARGET_VAL(MSP430::SUB8mr), 0|OPFL_Chain|OPFL_GlueOutput|OPFL_MemRefs,
                          MVT::i16, 3/*#Ops*/, 4, 5, 3, 
                      // Src: (st (subc:i8 (ld:i8 addr:iPTR:$dst)<<P:Predicate_unindexedload>><<P:Predicate_load>>, GR8:i8:$src), addr:iPTR:$dst)<<P:Predicate_unindexedstore>><<P:Predicate_store>> - Complexity = 29
                      // Dst: (SUB8mr:i16 addr:i16:$dst, GR8:i8:$src)
/*2961*/            0, // EndSwitchType
/*2962*/          0, /*End of Scope*/
/*2963*/        /*SwitchOpcode*/ 64, TARGET_VAL(ISD::LOAD),// ->3030
/*2966*/          OPC_RecordMemRef,
/*2967*/          OPC_RecordNode, // #1 = 'ld' chained node
/*2968*/          OPC_CheckFoldableChainNode,
/*2969*/          OPC_RecordChild1, // #2 = $src
/*2970*/          OPC_CheckPredicate, 0, // Predicate_unindexedload
/*2972*/          OPC_CheckPredicate, 1, // Predicate_load
/*2974*/          OPC_SwitchType /*2 cases */, 25, MVT::i8,// ->3002
/*2977*/            OPC_MoveParent,
/*2978*/            OPC_RecordChild2, // #3 = $dst
/*2979*/            OPC_CheckPredicate, 2, // Predicate_unindexedstore
/*2981*/            OPC_CheckPredicate, 3, // Predicate_store
/*2983*/            OPC_CheckComplexPat, /*CP*/0, /*#*/2, // SelectAddr:$src #4 #5
/*2986*/            OPC_CheckComplexPat, /*CP*/0, /*#*/3, // SelectAddr:$dst #6 #7
/*2989*/            OPC_EmitMergeInputChains, 2, 0, 1, 
/*2993*/            OPC_MorphNodeTo0, TARGET_VAL(MSP430::MOV8mm), 0|OPFL_Chain|OPFL_MemRefs,
                        4/*#Ops*/, 6, 7, 4, 5, 
                    // Src: (st (ld:i8 addr:iPTR:$src)<<P:Predicate_unindexedload>><<P:Predicate_load>>, addr:iPTR:$dst)<<P:Predicate_unindexedstore>><<P:Predicate_store>> - Complexity = 26
                    // Dst: (MOV8mm addr:i16:$dst, addr:i16:$src)
/*3002*/          /*SwitchType*/ 25, MVT::i16,// ->3029
/*3004*/            OPC_MoveParent,
/*3005*/            OPC_RecordChild2, // #3 = $dst
/*3006*/            OPC_CheckPredicate, 2, // Predicate_unindexedstore
/*3008*/            OPC_CheckPredicate, 3, // Predicate_store
/*3010*/            OPC_CheckComplexPat, /*CP*/0, /*#*/2, // SelectAddr:$src #4 #5
/*3013*/            OPC_CheckComplexPat, /*CP*/0, /*#*/3, // SelectAddr:$dst #6 #7
/*3016*/            OPC_EmitMergeInputChains, 2, 0, 1, 
/*3020*/            OPC_MorphNodeTo0, TARGET_VAL(MSP430::MOV16mm), 0|OPFL_Chain|OPFL_MemRefs,
                        4/*#Ops*/, 6, 7, 4, 5, 
                    // Src: (st (ld:i16 addr:iPTR:$src)<<P:Predicate_unindexedload>><<P:Predicate_load>>, addr:iPTR:$dst)<<P:Predicate_unindexedstore>><<P:Predicate_store>> - Complexity = 26
                    // Dst: (MOV16mm addr:i16:$dst, addr:i16:$src)
/*3029*/          0, // EndSwitchType
/*3030*/        /*SwitchOpcode*/ 76, TARGET_VAL(MSP430ISD::Wrapper),// ->3109
/*3033*/          OPC_RecordChild0, // #1 = $src
/*3034*/          OPC_MoveChild0,
/*3035*/          OPC_SwitchOpcode /*3 cases */, 21, TARGET_VAL(ISD::TargetGlobalAddress),// ->3060
/*3039*/            OPC_MoveParent,
/*3040*/            OPC_CheckType, MVT::i16,
/*3042*/            OPC_MoveParent,
/*3043*/            OPC_RecordChild2, // #2 = $dst
/*3044*/            OPC_CheckPredicate, 2, // Predicate_unindexedstore
/*3046*/            OPC_CheckPredicate, 3, // Predicate_store
/*3048*/            OPC_CheckComplexPat, /*CP*/0, /*#*/2, // SelectAddr:$dst #3 #4
/*3051*/            OPC_EmitMergeInputChains1_0,
/*3052*/            OPC_MorphNodeTo0, TARGET_VAL(MSP430::MOV16mi), 0|OPFL_Chain|OPFL_MemRefs,
                        3/*#Ops*/, 3, 4, 1, 
                    // Src: (st (MSP430Wrapper:i16 (tglobaladdr:i16):$src), addr:iPTR:$dst)<<P:Predicate_unindexedstore>><<P:Predicate_store>> - Complexity = 19
                    // Dst: (MOV16mi addr:i16:$dst, (tglobaladdr:i16):$src)
/*3060*/          /*SwitchOpcode*/ 21, TARGET_VAL(ISD::TargetExternalSymbol),// ->3084
/*3063*/            OPC_MoveParent,
/*3064*/            OPC_CheckType, MVT::i16,
/*3066*/            OPC_MoveParent,
/*3067*/            OPC_RecordChild2, // #2 = $dst
/*3068*/            OPC_CheckPredicate, 2, // Predicate_unindexedstore
/*3070*/            OPC_CheckPredicate, 3, // Predicate_store
/*3072*/            OPC_CheckComplexPat, /*CP*/0, /*#*/2, // SelectAddr:$dst #3 #4
/*3075*/            OPC_EmitMergeInputChains1_0,
/*3076*/            OPC_MorphNodeTo0, TARGET_VAL(MSP430::MOV16mi), 0|OPFL_Chain|OPFL_MemRefs,
                        3/*#Ops*/, 3, 4, 1, 
                    // Src: (st (MSP430Wrapper:i16 (texternalsym:i16):$src), addr:iPTR:$dst)<<P:Predicate_unindexedstore>><<P:Predicate_store>> - Complexity = 19
                    // Dst: (MOV16mi addr:i16:$dst, (texternalsym:i16):$src)
/*3084*/          /*SwitchOpcode*/ 21, TARGET_VAL(ISD::TargetBlockAddress),// ->3108
/*3087*/            OPC_MoveParent,
/*3088*/            OPC_CheckType, MVT::i16,
/*3090*/            OPC_MoveParent,
/*3091*/            OPC_RecordChild2, // #2 = $dst
/*3092*/            OPC_CheckPredicate, 2, // Predicate_unindexedstore
/*3094*/            OPC_CheckPredicate, 3, // Predicate_store
/*3096*/            OPC_CheckComplexPat, /*CP*/0, /*#*/2, // SelectAddr:$dst #3 #4
/*3099*/            OPC_EmitMergeInputChains1_0,
/*3100*/            OPC_MorphNodeTo0, TARGET_VAL(MSP430::MOV16mi), 0|OPFL_Chain|OPFL_MemRefs,
                        3/*#Ops*/, 3, 4, 1, 
                    // Src: (st (MSP430Wrapper:i16 (tblockaddress:i16):$src), addr:iPTR:$dst)<<P:Predicate_unindexedstore>><<P:Predicate_store>> - Complexity = 19
                    // Dst: (MOV16mi addr:i16:$dst, (tblockaddress:i16):$src)
/*3108*/          0, // EndSwitchOpcode
/*3109*/        0, // EndSwitchOpcode
/*3110*/      /*Scope*/ 94, /*->3205*/
/*3111*/        OPC_RecordChild1, // #1 = $src
/*3112*/        OPC_Scope, 50, /*->3164*/ // 3 children in Scope
/*3114*/          OPC_MoveChild1,
/*3115*/          OPC_CheckOpcode, TARGET_VAL(ISD::Constant),
/*3118*/          OPC_SwitchType /*2 cases */, 20, MVT::i8,// ->3141
/*3121*/            OPC_MoveParent,
/*3122*/            OPC_RecordChild2, // #2 = $dst
/*3123*/            OPC_CheckPredicate, 2, // Predicate_unindexedstore
/*3125*/            OPC_CheckPredicate, 3, // Predicate_store
/*3127*/            OPC_CheckComplexPat, /*CP*/0, /*#*/2, // SelectAddr:$dst #3 #4
/*3130*/            OPC_EmitMergeInputChains1_0,
/*3131*/            OPC_EmitConvertToTarget, 1,
/*3133*/            OPC_MorphNodeTo0, TARGET_VAL(MSP430::MOV8mi), 0|OPFL_Chain|OPFL_MemRefs,
                        3/*#Ops*/, 3, 4, 5, 
                    // Src: (st (imm:i8):$src, addr:iPTR:$dst)<<P:Predicate_unindexedstore>><<P:Predicate_store>> - Complexity = 16
                    // Dst: (MOV8mi addr:i16:$dst, (imm:i8):$src)
/*3141*/          /*SwitchType*/ 20, MVT::i16,// ->3163
/*3143*/            OPC_MoveParent,
/*3144*/            OPC_RecordChild2, // #2 = $dst
/*3145*/            OPC_CheckPredicate, 2, // Predicate_unindexedstore
/*3147*/            OPC_CheckPredicate, 3, // Predicate_store
/*3149*/            OPC_CheckComplexPat, /*CP*/0, /*#*/2, // SelectAddr:$dst #3 #4
/*3152*/            OPC_EmitMergeInputChains1_0,
/*3153*/            OPC_EmitConvertToTarget, 1,
/*3155*/            OPC_MorphNodeTo0, TARGET_VAL(MSP430::MOV16mi), 0|OPFL_Chain|OPFL_MemRefs,
                        3/*#Ops*/, 3, 4, 5, 
                    // Src: (st (imm:i16):$src, addr:iPTR:$dst)<<P:Predicate_unindexedstore>><<P:Predicate_store>> - Complexity = 16
                    // Dst: (MOV16mi addr:i16:$dst, (imm:i16):$src)
/*3163*/          0, // EndSwitchType
/*3164*/        /*Scope*/ 19, /*->3184*/
/*3165*/          OPC_CheckChild1Type, MVT::i8,
/*3167*/          OPC_RecordChild2, // #2 = $dst
/*3168*/          OPC_CheckPredicate, 2, // Predicate_unindexedstore
/*3170*/          OPC_CheckPredicate, 3, // Predicate_store
/*3172*/          OPC_CheckComplexPat, /*CP*/0, /*#*/2, // SelectAddr:$dst #3 #4
/*3175*/          OPC_EmitMergeInputChains1_0,
/*3176*/          OPC_MorphNodeTo0, TARGET_VAL(MSP430::MOV8mr), 0|OPFL_Chain|OPFL_MemRefs,
                      3/*#Ops*/, 3, 4, 1, 
                  // Src: (st GR8:i8:$src, addr:iPTR:$dst)<<P:Predicate_unindexedstore>><<P:Predicate_store>> - Complexity = 13
                  // Dst: (MOV8mr addr:i16:$dst, GR8:i8:$src)
/*3184*/        /*Scope*/ 19, /*->3204*/
/*3185*/          OPC_CheckChild1Type, MVT::i16,
/*3187*/          OPC_RecordChild2, // #2 = $dst
/*3188*/          OPC_CheckPredicate, 2, // Predicate_unindexedstore
/*3190*/          OPC_CheckPredicate, 3, // Predicate_store
/*3192*/          OPC_CheckComplexPat, /*CP*/0, /*#*/2, // SelectAddr:$dst #3 #4
/*3195*/          OPC_EmitMergeInputChains1_0,
/*3196*/          OPC_MorphNodeTo0, TARGET_VAL(MSP430::MOV16mr), 0|OPFL_Chain|OPFL_MemRefs,
                      3/*#Ops*/, 3, 4, 1, 
                  // Src: (st GR16:i16:$src, addr:iPTR:$dst)<<P:Predicate_unindexedstore>><<P:Predicate_store>> - Complexity = 13
                  // Dst: (MOV16mr addr:i16:$dst, GR16:i16:$src)
/*3204*/        0, /*End of Scope*/
/*3205*/      0, /*End of Scope*/
/*3206*/    /*SwitchOpcode*/ 111|128,4/*623*/, TARGET_VAL(MSP430ISD::CMP),// ->3833
/*3210*/      OPC_Scope, 60|128,2/*316*/, /*->3529*/ // 4 children in Scope
/*3213*/        OPC_MoveChild0,
/*3214*/        OPC_SwitchOpcode /*2 cases */, 120|128,1/*248*/, TARGET_VAL(ISD::AND),// ->3467
/*3219*/          OPC_Scope, 6|128,1/*134*/, /*->3356*/ // 3 children in Scope
/*3222*/            OPC_MoveChild0,
/*3223*/            OPC_CheckOpcode, TARGET_VAL(ISD::LOAD),
/*3226*/            OPC_RecordMemRef,
/*3227*/            OPC_RecordNode, // #0 = 'ld' chained node
/*3228*/            OPC_CheckFoldableChainNode,
/*3229*/            OPC_RecordChild1, // #1 = $src
/*3230*/            OPC_CheckPredicate, 0, // Predicate_unindexedload
/*3232*/            OPC_CheckPredicate, 1, // Predicate_load
/*3234*/            OPC_MoveParent,
/*3235*/            OPC_Scope, 67, /*->3304*/ // 2 children in Scope
/*3237*/              OPC_MoveChild1,
/*3238*/              OPC_CheckOpcode, TARGET_VAL(ISD::LOAD),
/*3241*/              OPC_RecordMemRef,
/*3242*/              OPC_RecordNode, // #2 = 'ld' chained node
/*3243*/              OPC_CheckFoldableChainNode,
/*3244*/              OPC_RecordChild1, // #3 = $src2
/*3245*/              OPC_CheckPredicate, 0, // Predicate_unindexedload
/*3247*/              OPC_CheckPredicate, 1, // Predicate_load
/*3249*/              OPC_MoveParent,
/*3250*/              OPC_CheckPredicate, 4, // Predicate_and_su
/*3252*/              OPC_SwitchType /*2 cases */, 23, MVT::i8,// ->3278
/*3255*/                OPC_MoveParent,
/*3256*/                OPC_CheckChild1Integer, 0, 
/*3258*/                OPC_CheckComplexPat, /*CP*/0, /*#*/1, // SelectAddr:$src #4 #5
/*3261*/                OPC_CheckComplexPat, /*CP*/0, /*#*/3, // SelectAddr:$src2 #6 #7
/*3264*/                OPC_EmitMergeInputChains, 2, 0, 2, 
/*3268*/                OPC_MorphNodeTo1, TARGET_VAL(MSP430::BIT8mm), 0|OPFL_Chain|OPFL_GlueOutput|OPFL_MemRefs,
                            MVT::i16, 4/*#Ops*/, 4, 5, 6, 7, 
                        // Src: (MSP430cmp (and:i8 (ld:i8 addr:iPTR:$src)<<P:Predicate_unindexedload>><<P:Predicate_load>>, (ld:i8 addr:iPTR:$src2)<<P:Predicate_unindexedload>><<P:Predicate_load>>)<<P:Predicate_and_su>>, 0:i8) - Complexity = 38
                        // Dst: (BIT8mm:i16 addr:i16:$src, addr:i16:$src2)
/*3278*/              /*SwitchType*/ 23, MVT::i16,// ->3303
/*3280*/                OPC_MoveParent,
/*3281*/                OPC_CheckChild1Integer, 0, 
/*3283*/                OPC_CheckComplexPat, /*CP*/0, /*#*/1, // SelectAddr:$src #4 #5
/*3286*/                OPC_CheckComplexPat, /*CP*/0, /*#*/3, // SelectAddr:$src2 #6 #7
/*3289*/                OPC_EmitMergeInputChains, 2, 0, 2, 
/*3293*/                OPC_MorphNodeTo1, TARGET_VAL(MSP430::BIT16mm), 0|OPFL_Chain|OPFL_GlueOutput|OPFL_MemRefs,
                            MVT::i16, 4/*#Ops*/, 4, 5, 6, 7, 
                        // Src: (MSP430cmp (and:i16 (ld:i16 addr:iPTR:$src)<<P:Predicate_unindexedload>><<P:Predicate_load>>, (ld:i16 addr:iPTR:$src2)<<P:Predicate_unindexedload>><<P:Predicate_load>>)<<P:Predicate_and_su>>, 0:i16) - Complexity = 38
                        // Dst: (BIT16mm:i16 addr:i16:$src, addr:i16:$src2)
/*3303*/              0, // EndSwitchType
/*3304*/            /*Scope*/ 50, /*->3355*/
/*3305*/              OPC_RecordChild1, // #2 = $src2
/*3306*/              OPC_MoveChild1,
/*3307*/              OPC_CheckOpcode, TARGET_VAL(ISD::Constant),
/*3310*/              OPC_MoveParent,
/*3311*/              OPC_CheckPredicate, 4, // Predicate_and_su
/*3313*/              OPC_SwitchType /*2 cases */, 18, MVT::i8,// ->3334
/*3316*/                OPC_MoveParent,
/*3317*/                OPC_CheckChild1Integer, 0, 
/*3319*/                OPC_CheckComplexPat, /*CP*/0, /*#*/1, // SelectAddr:$src #3 #4
/*3322*/                OPC_EmitMergeInputChains1_0,
/*3323*/                OPC_EmitConvertToTarget, 2,
/*3325*/                OPC_MorphNodeTo1, TARGET_VAL(MSP430::BIT8mi), 0|OPFL_Chain|OPFL_GlueOutput|OPFL_MemRefs,
                            MVT::i16, 3/*#Ops*/, 3, 4, 5, 
                        // Src: (MSP430cmp (and:i8 (ld:i8 addr:iPTR:$src)<<P:Predicate_unindexedload>><<P:Predicate_load>>, (imm:i8):$src2)<<P:Predicate_and_su>>, 0:i8) - Complexity = 28
                        // Dst: (BIT8mi:i16 addr:i16:$src, (imm:i8):$src2)
/*3334*/              /*SwitchType*/ 18, MVT::i16,// ->3354
/*3336*/                OPC_MoveParent,
/*3337*/                OPC_CheckChild1Integer, 0, 
/*3339*/                OPC_CheckComplexPat, /*CP*/0, /*#*/1, // SelectAddr:$src #3 #4
/*3342*/                OPC_EmitMergeInputChains1_0,
/*3343*/                OPC_EmitConvertToTarget, 2,
/*3345*/                OPC_MorphNodeTo1, TARGET_VAL(MSP430::BIT16mi), 0|OPFL_Chain|OPFL_GlueOutput|OPFL_MemRefs,
                            MVT::i16, 3/*#Ops*/, 3, 4, 5, 
                        // Src: (MSP430cmp (and:i16 (ld:i16 addr:iPTR:$src)<<P:Predicate_unindexedload>><<P:Predicate_load>>, (imm:i16):$src2)<<P:Predicate_and_su>>, 0:i16) - Complexity = 28
                        // Dst: (BIT16mi:i16 addr:i16:$src, (imm:i16):$src2)
/*3354*/              0, // EndSwitchType
/*3355*/            0, /*End of Scope*/
/*3356*/          /*Scope*/ 54, /*->3411*/
/*3357*/            OPC_RecordChild0, // #0 = $src
/*3358*/            OPC_MoveChild1,
/*3359*/            OPC_CheckOpcode, TARGET_VAL(ISD::LOAD),
/*3362*/            OPC_RecordMemRef,
/*3363*/            OPC_RecordNode, // #1 = 'ld' chained node
/*3364*/            OPC_CheckFoldableChainNode,
/*3365*/            OPC_RecordChild1, // #2 = $src2
/*3366*/            OPC_CheckPredicate, 0, // Predicate_unindexedload
/*3368*/            OPC_CheckPredicate, 1, // Predicate_load
/*3370*/            OPC_MoveParent,
/*3371*/            OPC_CheckPredicate, 4, // Predicate_and_su
/*3373*/            OPC_SwitchType /*2 cases */, 16, MVT::i8,// ->3392
/*3376*/              OPC_MoveParent,
/*3377*/              OPC_CheckChild1Integer, 0, 
/*3379*/              OPC_CheckComplexPat, /*CP*/0, /*#*/2, // SelectAddr:$src2 #3 #4
/*3382*/              OPC_EmitMergeInputChains1_1,
/*3383*/              OPC_MorphNodeTo1, TARGET_VAL(MSP430::BIT8rm), 0|OPFL_Chain|OPFL_GlueOutput|OPFL_MemRefs,
                          MVT::i16, 3/*#Ops*/, 0, 3, 4, 
                      // Src: (MSP430cmp (and:i8 GR8:i8:$src, (ld:i8 addr:iPTR:$src2)<<P:Predicate_unindexedload>><<P:Predicate_load>>)<<P:Predicate_and_su>>, 0:i8) - Complexity = 25
                      // Dst: (BIT8rm:i16 GR8:i8:$src, addr:i16:$src2)
/*3392*/            /*SwitchType*/ 16, MVT::i16,// ->3410
/*3394*/              OPC_MoveParent,
/*3395*/              OPC_CheckChild1Integer, 0, 
/*3397*/              OPC_CheckComplexPat, /*CP*/0, /*#*/2, // SelectAddr:$src2 #3 #4
/*3400*/              OPC_EmitMergeInputChains1_1,
/*3401*/              OPC_MorphNodeTo1, TARGET_VAL(MSP430::BIT16rm), 0|OPFL_Chain|OPFL_GlueOutput|OPFL_MemRefs,
                          MVT::i16, 3/*#Ops*/, 0, 3, 4, 
                      // Src: (MSP430cmp (and:i16 GR16:i16:$src, (ld:i16 addr:iPTR:$src2)<<P:Predicate_unindexedload>><<P:Predicate_load>>)<<P:Predicate_and_su>>, 0:i16) - Complexity = 25
                      // Dst: (BIT16rm:i16 GR16:i16:$src, addr:i16:$src2)
/*3410*/            0, // EndSwitchType
/*3411*/          /*Scope*/ 54, /*->3466*/
/*3412*/            OPC_MoveChild0,
/*3413*/            OPC_CheckOpcode, TARGET_VAL(ISD::LOAD),
/*3416*/            OPC_RecordMemRef,
/*3417*/            OPC_RecordNode, // #0 = 'ld' chained node
/*3418*/            OPC_CheckFoldableChainNode,
/*3419*/            OPC_RecordChild1, // #1 = $src
/*3420*/            OPC_CheckPredicate, 0, // Predicate_unindexedload
/*3422*/            OPC_CheckPredicate, 1, // Predicate_load
/*3424*/            OPC_MoveParent,
/*3425*/            OPC_RecordChild1, // #2 = $src2
/*3426*/            OPC_CheckPredicate, 4, // Predicate_and_su
/*3428*/            OPC_SwitchType /*2 cases */, 16, MVT::i8,// ->3447
/*3431*/              OPC_MoveParent,
/*3432*/              OPC_CheckChild1Integer, 0, 
/*3434*/              OPC_CheckComplexPat, /*CP*/0, /*#*/1, // SelectAddr:$src #3 #4
/*3437*/              OPC_EmitMergeInputChains1_0,
/*3438*/              OPC_MorphNodeTo1, TARGET_VAL(MSP430::BIT8mr), 0|OPFL_Chain|OPFL_GlueOutput|OPFL_MemRefs,
                          MVT::i16, 3/*#Ops*/, 3, 4, 2, 
                      // Src: (MSP430cmp (and:i8 (ld:i8 addr:iPTR:$src)<<P:Predicate_unindexedload>><<P:Predicate_load>>, GR8:i8:$src2)<<P:Predicate_and_su>>, 0:i8) - Complexity = 25
                      // Dst: (BIT8mr:i16 addr:i16:$src, GR8:i8:$src2)
/*3447*/            /*SwitchType*/ 16, MVT::i16,// ->3465
/*3449*/              OPC_MoveParent,
/*3450*/              OPC_CheckChild1Integer, 0, 
/*3452*/              OPC_CheckComplexPat, /*CP*/0, /*#*/1, // SelectAddr:$src #3 #4
/*3455*/              OPC_EmitMergeInputChains1_0,
/*3456*/              OPC_MorphNodeTo1, TARGET_VAL(MSP430::BIT16mr), 0|OPFL_Chain|OPFL_GlueOutput|OPFL_MemRefs,
                          MVT::i16, 3/*#Ops*/, 3, 4, 2, 
                      // Src: (MSP430cmp (and:i16 (ld:i16 addr:iPTR:$src)<<P:Predicate_unindexedload>><<P:Predicate_load>>, GR16:i16:$src2)<<P:Predicate_and_su>>, 0:i16) - Complexity = 25
                      // Dst: (BIT16mr:i16 addr:i16:$src, GR16:i16:$src2)
/*3465*/            0, // EndSwitchType
/*3466*/          0, /*End of Scope*/
/*3467*/        /*SwitchOpcode*/ 58, TARGET_VAL(ISD::LOAD),// ->3528
/*3470*/          OPC_RecordMemRef,
/*3471*/          OPC_RecordNode, // #0 = 'ld' chained node
/*3472*/          OPC_CheckFoldableChainNode,
/*3473*/          OPC_RecordChild1, // #1 = $src
/*3474*/          OPC_CheckPredicate, 0, // Predicate_unindexedload
/*3476*/          OPC_CheckPredicate, 1, // Predicate_load
/*3478*/          OPC_SwitchType /*2 cases */, 22, MVT::i8,// ->3503
/*3481*/            OPC_MoveParent,
/*3482*/            OPC_RecordChild1, // #2 = $src2
/*3483*/            OPC_MoveChild1,
/*3484*/            OPC_CheckOpcode, TARGET_VAL(ISD::Constant),
/*3487*/            OPC_MoveParent,
/*3488*/            OPC_CheckComplexPat, /*CP*/0, /*#*/1, // SelectAddr:$src #3 #4
/*3491*/            OPC_EmitMergeInputChains1_0,
/*3492*/            OPC_EmitConvertToTarget, 2,
/*3494*/            OPC_MorphNodeTo1, TARGET_VAL(MSP430::CMP8mi), 0|OPFL_Chain|OPFL_GlueOutput|OPFL_MemRefs,
                        MVT::i16, 3/*#Ops*/, 3, 4, 5, 
                    // Src: (MSP430cmp (ld:i8 addr:iPTR:$src)<<P:Predicate_unindexedload>><<P:Predicate_load>>, (imm:i8):$src2) - Complexity = 19
                    // Dst: (CMP8mi:i16 addr:i16:$src, (imm:i8):$src2)
/*3503*/          /*SwitchType*/ 22, MVT::i16,// ->3527
/*3505*/            OPC_MoveParent,
/*3506*/            OPC_RecordChild1, // #2 = $src2
/*3507*/            OPC_MoveChild1,
/*3508*/            OPC_CheckOpcode, TARGET_VAL(ISD::Constant),
/*3511*/            OPC_MoveParent,
/*3512*/            OPC_CheckComplexPat, /*CP*/0, /*#*/1, // SelectAddr:$src #3 #4
/*3515*/            OPC_EmitMergeInputChains1_0,
/*3516*/            OPC_EmitConvertToTarget, 2,
/*3518*/            OPC_MorphNodeTo1, TARGET_VAL(MSP430::CMP16mi), 0|OPFL_Chain|OPFL_GlueOutput|OPFL_MemRefs,
                        MVT::i16, 3/*#Ops*/, 3, 4, 5, 
                    // Src: (MSP430cmp (ld:i16 addr:iPTR:$src)<<P:Predicate_unindexedload>><<P:Predicate_load>>, (imm:i16):$src2) - Complexity = 19
                    // Dst: (CMP16mi:i16 addr:i16:$src, (imm:i16):$src2)
/*3527*/          0, // EndSwitchType
/*3528*/        0, // EndSwitchOpcode
/*3529*/      /*Scope*/ 61, /*->3591*/
/*3530*/        OPC_RecordChild0, // #0 = $src
/*3531*/        OPC_Scope, 28, /*->3561*/ // 2 children in Scope
/*3533*/          OPC_CheckChild0Type, MVT::i8,
/*3535*/          OPC_MoveChild1,
/*3536*/          OPC_CheckOpcode, TARGET_VAL(ISD::LOAD),
/*3539*/          OPC_RecordMemRef,
/*3540*/          OPC_RecordNode, // #1 = 'ld' chained node
/*3541*/          OPC_CheckFoldableChainNode,
/*3542*/          OPC_RecordChild1, // #2 = $src2
/*3543*/          OPC_CheckPredicate, 0, // Predicate_unindexedload
/*3545*/          OPC_CheckPredicate, 1, // Predicate_load
/*3547*/          OPC_MoveParent,
/*3548*/          OPC_CheckComplexPat, /*CP*/0, /*#*/2, // SelectAddr:$src2 #3 #4
/*3551*/          OPC_EmitMergeInputChains1_1,
/*3552*/          OPC_MorphNodeTo1, TARGET_VAL(MSP430::CMP8rm), 0|OPFL_Chain|OPFL_GlueOutput|OPFL_MemRefs,
                      MVT::i16, 3/*#Ops*/, 0, 3, 4, 
                  // Src: (MSP430cmp GR8:i8:$src, (ld:i8 addr:iPTR:$src2)<<P:Predicate_unindexedload>><<P:Predicate_load>>) - Complexity = 16
                  // Dst: (CMP8rm:i16 GR8:i8:$src, addr:i16:$src2)
/*3561*/        /*Scope*/ 28, /*->3590*/
/*3562*/          OPC_CheckChild0Type, MVT::i16,
/*3564*/          OPC_MoveChild1,
/*3565*/          OPC_CheckOpcode, TARGET_VAL(ISD::LOAD),
/*3568*/          OPC_RecordMemRef,
/*3569*/          OPC_RecordNode, // #1 = 'ld' chained node
/*3570*/          OPC_CheckFoldableChainNode,
/*3571*/          OPC_RecordChild1, // #2 = $src2
/*3572*/          OPC_CheckPredicate, 0, // Predicate_unindexedload
/*3574*/          OPC_CheckPredicate, 1, // Predicate_load
/*3576*/          OPC_MoveParent,
/*3577*/          OPC_CheckComplexPat, /*CP*/0, /*#*/2, // SelectAddr:$src2 #3 #4
/*3580*/          OPC_EmitMergeInputChains1_1,
/*3581*/          OPC_MorphNodeTo1, TARGET_VAL(MSP430::CMP16rm), 0|OPFL_Chain|OPFL_GlueOutput|OPFL_MemRefs,
                      MVT::i16, 3/*#Ops*/, 0, 3, 4, 
                  // Src: (MSP430cmp GR16:i16:$src, (ld:i16 addr:iPTR:$src2)<<P:Predicate_unindexedload>><<P:Predicate_load>>) - Complexity = 16
                  // Dst: (CMP16rm:i16 GR16:i16:$src, addr:i16:$src2)
/*3590*/        0, /*End of Scope*/
/*3591*/      /*Scope*/ 45|128,1/*173*/, /*->3766*/
/*3593*/        OPC_MoveChild0,
/*3594*/        OPC_SwitchOpcode /*3 cases */, 44, TARGET_VAL(ISD::LOAD),// ->3642
/*3598*/          OPC_RecordMemRef,
/*3599*/          OPC_RecordNode, // #0 = 'ld' chained node
/*3600*/          OPC_CheckFoldableChainNode,
/*3601*/          OPC_RecordChild1, // #1 = $src
/*3602*/          OPC_CheckPredicate, 0, // Predicate_unindexedload
/*3604*/          OPC_CheckPredicate, 1, // Predicate_load
/*3606*/          OPC_SwitchType /*2 cases */, 15, MVT::i8,// ->3624
/*3609*/            OPC_MoveParent,
/*3610*/            OPC_RecordChild1, // #2 = $src2
/*3611*/            OPC_CheckComplexPat, /*CP*/0, /*#*/1, // SelectAddr:$src #3 #4
/*3614*/            OPC_EmitMergeInputChains1_0,
/*3615*/            OPC_MorphNodeTo1, TARGET_VAL(MSP430::CMP8mr), 0|OPFL_Chain|OPFL_GlueOutput|OPFL_MemRefs,
                        MVT::i16, 3/*#Ops*/, 3, 4, 2, 
                    // Src: (MSP430cmp (ld:i8 addr:iPTR:$src)<<P:Predicate_unindexedload>><<P:Predicate_load>>, GR8:i8:$src2) - Complexity = 16
                    // Dst: (CMP8mr:i16 addr:i16:$src, GR8:i8:$src2)
/*3624*/          /*SwitchType*/ 15, MVT::i16,// ->3641
/*3626*/            OPC_MoveParent,
/*3627*/            OPC_RecordChild1, // #2 = $src2
/*3628*/            OPC_CheckComplexPat, /*CP*/0, /*#*/1, // SelectAddr:$src #3 #4
/*3631*/            OPC_EmitMergeInputChains1_0,
/*3632*/            OPC_MorphNodeTo1, TARGET_VAL(MSP430::CMP16mr), 0|OPFL_Chain|OPFL_GlueOutput|OPFL_MemRefs,
                        MVT::i16, 3/*#Ops*/, 3, 4, 2, 
                    // Src: (MSP430cmp (ld:i16 addr:iPTR:$src)<<P:Predicate_unindexedload>><<P:Predicate_load>>, GR16:i16:$src2) - Complexity = 16
                    // Dst: (CMP16mr:i16 addr:i16:$src, GR16:i16:$src2)
/*3641*/          0, // EndSwitchType
/*3642*/        /*SwitchOpcode*/ 75, TARGET_VAL(ISD::AND),// ->3720
/*3645*/          OPC_RecordChild0, // #0 = $src
/*3646*/          OPC_RecordChild1, // #1 = $src2
/*3647*/          OPC_Scope, 39, /*->3688*/ // 2 children in Scope
/*3649*/            OPC_MoveChild1,
/*3650*/            OPC_CheckOpcode, TARGET_VAL(ISD::Constant),
/*3653*/            OPC_MoveParent,
/*3654*/            OPC_CheckPredicate, 4, // Predicate_and_su
/*3656*/            OPC_SwitchType /*2 cases */, 13, MVT::i8,// ->3672
/*3659*/              OPC_MoveParent,
/*3660*/              OPC_CheckChild1Integer, 0, 
/*3662*/              OPC_EmitConvertToTarget, 1,
/*3664*/              OPC_MorphNodeTo1, TARGET_VAL(MSP430::BIT8ri), 0|OPFL_GlueOutput,
                          MVT::i16, 2/*#Ops*/, 0, 2, 
                      // Src: (MSP430cmp (and:i8 GR8:i8:$src, (imm:i8):$src2)<<P:Predicate_and_su>>, 0:i8) - Complexity = 15
                      // Dst: (BIT8ri:i16 GR8:i8:$src, (imm:i8):$src2)
/*3672*/            /*SwitchType*/ 13, MVT::i16,// ->3687
/*3674*/              OPC_MoveParent,
/*3675*/              OPC_CheckChild1Integer, 0, 
/*3677*/              OPC_EmitConvertToTarget, 1,
/*3679*/              OPC_MorphNodeTo1, TARGET_VAL(MSP430::BIT16ri), 0|OPFL_GlueOutput,
                          MVT::i16, 2/*#Ops*/, 0, 2, 
                      // Src: (MSP430cmp (and:i16 GR16:i16:$src, (imm:i16):$src2)<<P:Predicate_and_su>>, 0:i16) - Complexity = 15
                      // Dst: (BIT16ri:i16 GR16:i16:$src, (imm:i16):$src2)
/*3687*/            0, // EndSwitchType
/*3688*/          /*Scope*/ 30, /*->3719*/
/*3689*/            OPC_CheckPredicate, 4, // Predicate_and_su
/*3691*/            OPC_SwitchType /*2 cases */, 11, MVT::i8,// ->3705
/*3694*/              OPC_MoveParent,
/*3695*/              OPC_CheckChild1Integer, 0, 
/*3697*/              OPC_MorphNodeTo1, TARGET_VAL(MSP430::BIT8rr), 0|OPFL_GlueOutput,
                          MVT::i16, 2/*#Ops*/, 0, 1, 
                      // Src: (MSP430cmp (and:i8 GR8:i8:$src, GR8:i8:$src2)<<P:Predicate_and_su>>, 0:i8) - Complexity = 12
                      // Dst: (BIT8rr:i16 GR8:i8:$src, GR8:i8:$src2)
/*3705*/            /*SwitchType*/ 11, MVT::i16,// ->3718
/*3707*/              OPC_MoveParent,
/*3708*/              OPC_CheckChild1Integer, 0, 
/*3710*/              OPC_MorphNodeTo1, TARGET_VAL(MSP430::BIT16rr), 0|OPFL_GlueOutput,
                          MVT::i16, 2/*#Ops*/, 0, 1, 
                      // Src: (MSP430cmp (and:i16 GR16:i16:$src, GR16:i16:$src2)<<P:Predicate_and_su>>, 0:i16) - Complexity = 12
                      // Dst: (BIT16rr:i16 GR16:i16:$src, GR16:i16:$src2)
/*3718*/            0, // EndSwitchType
/*3719*/          0, /*End of Scope*/
/*3720*/        /*SwitchOpcode*/ 42, TARGET_VAL(ISD::TRUNCATE),// ->3765
/*3723*/          OPC_MoveChild0,
/*3724*/          OPC_CheckOpcode, TARGET_VAL(ISD::AND),
/*3727*/          OPC_RecordChild0, // #0 = $src
/*3728*/          OPC_RecordChild1, // #1 = $src2
/*3729*/          OPC_CheckPredicate, 4, // Predicate_and_su
/*3731*/          OPC_MoveParent,
/*3732*/          OPC_MoveParent,
/*3733*/          OPC_CheckChild1Integer, 0, 
/*3735*/          OPC_EmitInteger, MVT::i32, MSP430::subreg_8bit,
/*3738*/          OPC_EmitNode1, TARGET_VAL(TargetOpcode::EXTRACT_SUBREG), 0,
                      MVT::i8, 2/*#Ops*/, 0, 2,  // Results = #3
/*3746*/          OPC_EmitInteger, MVT::i32, MSP430::subreg_8bit,
/*3749*/          OPC_EmitNode1, TARGET_VAL(TargetOpcode::EXTRACT_SUBREG), 0,
                      MVT::i8, 2/*#Ops*/, 1, 4,  // Results = #5
/*3757*/          OPC_MorphNodeTo1, TARGET_VAL(MSP430::BIT8rr), 0|OPFL_GlueOutput,
                      MVT::i16, 2/*#Ops*/, 3, 5, 
                  // Src: (MSP430cmp (trunc:i8 (and:i16 GR16:i16:$src, GR16:i16:$src2)<<P:Predicate_and_su>>), 0:i8) - Complexity = 15
                  // Dst: (BIT8rr:i16 (EXTRACT_SUBREG:i8 GR16:i16:$src, subreg_8bit:i32), (EXTRACT_SUBREG:i8 GR16:i16:$src2, subreg_8bit:i32))
/*3765*/        0, // EndSwitchOpcode
/*3766*/      /*Scope*/ 65, /*->3832*/
/*3767*/        OPC_RecordChild0, // #0 = $src
/*3768*/        OPC_Scope, 30, /*->3800*/ // 2 children in Scope
/*3770*/          OPC_CheckChild0Type, MVT::i8,
/*3772*/          OPC_RecordChild1, // #1 = $src2
/*3773*/          OPC_Scope, 15, /*->3790*/ // 2 children in Scope
/*3775*/            OPC_MoveChild1,
/*3776*/            OPC_CheckOpcode, TARGET_VAL(ISD::Constant),
/*3779*/            OPC_MoveParent,
/*3780*/            OPC_EmitConvertToTarget, 1,
/*3782*/            OPC_MorphNodeTo1, TARGET_VAL(MSP430::CMP8ri), 0|OPFL_GlueOutput,
                        MVT::i16, 2/*#Ops*/, 0, 2, 
                    // Src: (MSP430cmp GR8:i8:$src, (imm:i8):$src2) - Complexity = 6
                    // Dst: (CMP8ri:i16 GR8:i8:$src, (imm:i8):$src2)
/*3790*/          /*Scope*/ 8, /*->3799*/
/*3791*/            OPC_MorphNodeTo1, TARGET_VAL(MSP430::CMP8rr), 0|OPFL_GlueOutput,
                        MVT::i16, 2/*#Ops*/, 0, 1, 
                    // Src: (MSP430cmp GR8:i8:$src, GR8:i8:$src2) - Complexity = 3
                    // Dst: (CMP8rr:i16 GR8:i8:$src, GR8:i8:$src2)
/*3799*/          0, /*End of Scope*/
/*3800*/        /*Scope*/ 30, /*->3831*/
/*3801*/          OPC_CheckChild0Type, MVT::i16,
/*3803*/          OPC_RecordChild1, // #1 = $src2
/*3804*/          OPC_Scope, 15, /*->3821*/ // 2 children in Scope
/*3806*/            OPC_MoveChild1,
/*3807*/            OPC_CheckOpcode, TARGET_VAL(ISD::Constant),
/*3810*/            OPC_MoveParent,
/*3811*/            OPC_EmitConvertToTarget, 1,
/*3813*/            OPC_MorphNodeTo1, TARGET_VAL(MSP430::CMP16ri), 0|OPFL_GlueOutput,
                        MVT::i16, 2/*#Ops*/, 0, 2, 
                    // Src: (MSP430cmp GR16:i16:$src, (imm:i16):$src2) - Complexity = 6
                    // Dst: (CMP16ri:i16 GR16:i16:$src, (imm:i16):$src2)
/*3821*/          /*Scope*/ 8, /*->3830*/
/*3822*/            OPC_MorphNodeTo1, TARGET_VAL(MSP430::CMP16rr), 0|OPFL_GlueOutput,
                        MVT::i16, 2/*#Ops*/, 0, 1, 
                    // Src: (MSP430cmp GR16:i16:$src, GR16:i16:$src2) - Complexity = 3
                    // Dst: (CMP16rr:i16 GR16:i16:$src, GR16:i16:$src2)
/*3830*/          0, /*End of Scope*/
/*3831*/        0, /*End of Scope*/
/*3832*/      0, /*End of Scope*/
/*3833*/    /*SwitchOpcode*/ 9|128,3/*393*/, TARGET_VAL(ISD::AND),// ->4230
/*3837*/      OPC_Scope, 64, /*->3903*/ // 8 children in Scope
/*3839*/        OPC_RecordChild0, // #0 = $src
/*3840*/        OPC_MoveChild1,
/*3841*/        OPC_CheckOpcode, TARGET_VAL(ISD::XOR),
/*3844*/        OPC_MoveChild0,
/*3845*/        OPC_CheckOpcode, TARGET_VAL(ISD::LOAD),
/*3848*/        OPC_RecordMemRef,
/*3849*/        OPC_RecordNode, // #1 = 'ld' chained node
/*3850*/        OPC_CheckFoldableChainNode,
/*3851*/        OPC_RecordChild1, // #2 = $src2
/*3852*/        OPC_CheckPredicate, 0, // Predicate_unindexedload
/*3854*/        OPC_CheckPredicate, 1, // Predicate_load
/*3856*/        OPC_MoveParent,
/*3857*/        OPC_CheckChild1Integer, 127|128,127|128,127|128,127|128,127|128,127|128,127|128,127|128,127|128,1/*18446744073709551615*/, 
/*3868*/        OPC_MoveParent,
/*3869*/        OPC_SwitchType /*2 cases */, 14, MVT::i8,// ->3886
/*3872*/          OPC_CheckComplexPat, /*CP*/0, /*#*/2, // SelectAddr:$src2 #3 #4
/*3875*/          OPC_EmitMergeInputChains1_1,
/*3876*/          OPC_MorphNodeTo2, TARGET_VAL(MSP430::BIC8rm), 0|OPFL_Chain|OPFL_MemRefs,
                      MVT::i8, MVT::i16, 3/*#Ops*/, 0, 3, 4, 
                  // Src: (and:i8 GR8:i8:$src, (xor:i8 (ld:i8 addr:iPTR:$src2)<<P:Predicate_unindexedload>><<P:Predicate_load>>, -1:i8)) - Complexity = 24
                  // Dst: (BIC8rm:i8:i16 GR8:i8:$src, addr:i16:$src2)
/*3886*/        /*SwitchType*/ 14, MVT::i16,// ->3902
/*3888*/          OPC_CheckComplexPat, /*CP*/0, /*#*/2, // SelectAddr:$src2 #3 #4
/*3891*/          OPC_EmitMergeInputChains1_1,
/*3892*/          OPC_MorphNodeTo2, TARGET_VAL(MSP430::BIC16rm), 0|OPFL_Chain|OPFL_MemRefs,
                      MVT::i16, MVT::i16, 3/*#Ops*/, 0, 3, 4, 
                  // Src: (and:i16 GR16:i16:$src, (xor:i16 (ld:i16 addr:iPTR:$src2)<<P:Predicate_unindexedload>><<P:Predicate_load>>, -1:i16)) - Complexity = 24
                  // Dst: (BIC16rm:i16:i16 GR16:i16:$src, addr:i16:$src2)
/*3902*/        0, // EndSwitchType
/*3903*/      /*Scope*/ 64, /*->3968*/
/*3904*/        OPC_MoveChild0,
/*3905*/        OPC_CheckOpcode, TARGET_VAL(ISD::XOR),
/*3908*/        OPC_MoveChild0,
/*3909*/        OPC_CheckOpcode, TARGET_VAL(ISD::LOAD),
/*3912*/        OPC_RecordMemRef,
/*3913*/        OPC_RecordNode, // #0 = 'ld' chained node
/*3914*/        OPC_CheckFoldableChainNode,
/*3915*/        OPC_RecordChild1, // #1 = $src2
/*3916*/        OPC_CheckPredicate, 0, // Predicate_unindexedload
/*3918*/        OPC_CheckPredicate, 1, // Predicate_load
/*3920*/        OPC_MoveParent,
/*3921*/        OPC_CheckChild1Integer, 127|128,127|128,127|128,127|128,127|128,127|128,127|128,127|128,127|128,1/*18446744073709551615*/, 
/*3932*/        OPC_MoveParent,
/*3933*/        OPC_RecordChild1, // #2 = $src
/*3934*/        OPC_SwitchType /*2 cases */, 14, MVT::i8,// ->3951
/*3937*/          OPC_CheckComplexPat, /*CP*/0, /*#*/1, // SelectAddr:$src2 #3 #4
/*3940*/          OPC_EmitMergeInputChains1_0,
/*3941*/          OPC_MorphNodeTo2, TARGET_VAL(MSP430::BIC8rm), 0|OPFL_Chain|OPFL_MemRefs,
                      MVT::i8, MVT::i16, 3/*#Ops*/, 2, 3, 4, 
                  // Src: (and:i8 (xor:i8 (ld:i8 addr:iPTR:$src2)<<P:Predicate_unindexedload>><<P:Predicate_load>>, -1:i8), GR8:i8:$src) - Complexity = 24
                  // Dst: (BIC8rm:i8:i16 GR8:i8:$src, addr:i16:$src2)
/*3951*/        /*SwitchType*/ 14, MVT::i16,// ->3967
/*3953*/          OPC_CheckComplexPat, /*CP*/0, /*#*/1, // SelectAddr:$src2 #3 #4
/*3956*/          OPC_EmitMergeInputChains1_0,
/*3957*/          OPC_MorphNodeTo2, TARGET_VAL(MSP430::BIC16rm), 0|OPFL_Chain|OPFL_MemRefs,
                      MVT::i16, MVT::i16, 3/*#Ops*/, 2, 3, 4, 
                  // Src: (and:i16 (xor:i16 (ld:i16 addr:iPTR:$src2)<<P:Predicate_unindexedload>><<P:Predicate_load>>, -1:i16), GR16:i16:$src) - Complexity = 24
                  // Dst: (BIC16rm:i16:i16 GR16:i16:$src, addr:i16:$src2)
/*3967*/        0, // EndSwitchType
/*3968*/      /*Scope*/ 48, /*->4017*/
/*3969*/        OPC_RecordChild0, // #0 = $src
/*3970*/        OPC_MoveChild1,
/*3971*/        OPC_CheckOpcode, TARGET_VAL(ISD::LOAD),
/*3974*/        OPC_RecordMemRef,
/*3975*/        OPC_RecordNode, // #1 = 'ld' chained node
/*3976*/        OPC_CheckFoldableChainNode,
/*3977*/        OPC_RecordChild1, // #2 = $src2
/*3978*/        OPC_CheckPredicate, 0, // Predicate_unindexedload
/*3980*/        OPC_CheckPredicate, 1, // Predicate_load
/*3982*/        OPC_MoveParent,
/*3983*/        OPC_SwitchType /*2 cases */, 14, MVT::i8,// ->4000
/*3986*/          OPC_CheckComplexPat, /*CP*/0, /*#*/2, // SelectAddr:$src2 #3 #4
/*3989*/          OPC_EmitMergeInputChains1_1,
/*3990*/          OPC_MorphNodeTo2, TARGET_VAL(MSP430::AND8rm), 0|OPFL_Chain|OPFL_MemRefs,
                      MVT::i8, MVT::i16, 3/*#Ops*/, 0, 3, 4, 
                  // Src: (and:i8 GR8:i8:$src, (ld:i8 addr:iPTR:$src2)<<P:Predicate_unindexedload>><<P:Predicate_load>>) - Complexity = 16
                  // Dst: (AND8rm:i8:i16 GR8:i8:$src, addr:i16:$src2)
/*4000*/        /*SwitchType*/ 14, MVT::i16,// ->4016
/*4002*/          OPC_CheckComplexPat, /*CP*/0, /*#*/2, // SelectAddr:$src2 #3 #4
/*4005*/          OPC_EmitMergeInputChains1_1,
/*4006*/          OPC_MorphNodeTo2, TARGET_VAL(MSP430::AND16rm), 0|OPFL_Chain|OPFL_MemRefs,
                      MVT::i16, MVT::i16, 3/*#Ops*/, 0, 3, 4, 
                  // Src: (and:i16 GR16:i16:$src, (ld:i16 addr:iPTR:$src2)<<P:Predicate_unindexedload>><<P:Predicate_load>>) - Complexity = 16
                  // Dst: (AND16rm:i16:i16 GR16:i16:$src, addr:i16:$src2)
/*4016*/        0, // EndSwitchType
/*4017*/      /*Scope*/ 48, /*->4066*/
/*4018*/        OPC_MoveChild0,
/*4019*/        OPC_CheckOpcode, TARGET_VAL(ISD::LOAD),
/*4022*/        OPC_RecordMemRef,
/*4023*/        OPC_RecordNode, // #0 = 'ld' chained node
/*4024*/        OPC_CheckFoldableChainNode,
/*4025*/        OPC_RecordChild1, // #1 = $src2
/*4026*/        OPC_CheckPredicate, 0, // Predicate_unindexedload
/*4028*/        OPC_CheckPredicate, 1, // Predicate_load
/*4030*/        OPC_MoveParent,
/*4031*/        OPC_RecordChild1, // #2 = $src
/*4032*/        OPC_SwitchType /*2 cases */, 14, MVT::i8,// ->4049
/*4035*/          OPC_CheckComplexPat, /*CP*/0, /*#*/1, // SelectAddr:$src2 #3 #4
/*4038*/          OPC_EmitMergeInputChains1_0,
/*4039*/          OPC_MorphNodeTo2, TARGET_VAL(MSP430::AND8rm), 0|OPFL_Chain|OPFL_MemRefs,
                      MVT::i8, MVT::i16, 3/*#Ops*/, 2, 3, 4, 
                  // Src: (and:i8 (ld:i8 addr:iPTR:$src2)<<P:Predicate_unindexedload>><<P:Predicate_load>>, GR8:i8:$src) - Complexity = 16
                  // Dst: (AND8rm:i8:i16 GR8:i8:$src, addr:i16:$src2)
/*4049*/        /*SwitchType*/ 14, MVT::i16,// ->4065
/*4051*/          OPC_CheckComplexPat, /*CP*/0, /*#*/1, // SelectAddr:$src2 #3 #4
/*4054*/          OPC_EmitMergeInputChains1_0,
/*4055*/          OPC_MorphNodeTo2, TARGET_VAL(MSP430::AND16rm), 0|OPFL_Chain|OPFL_MemRefs,
                      MVT::i16, MVT::i16, 3/*#Ops*/, 2, 3, 4, 
                  // Src: (and:i16 (ld:i16 addr:iPTR:$src2)<<P:Predicate_unindexedload>><<P:Predicate_load>>, GR16:i16:$src) - Complexity = 16
                  // Dst: (AND16rm:i16:i16 GR16:i16:$src, addr:i16:$src2)
/*4065*/        0, // EndSwitchType
/*4066*/      /*Scope*/ 42, /*->4109*/
/*4067*/        OPC_RecordChild0, // #0 = $src
/*4068*/        OPC_MoveChild1,
/*4069*/        OPC_CheckOpcode, TARGET_VAL(ISD::XOR),
/*4072*/        OPC_RecordChild0, // #1 = $src2
/*4073*/        OPC_CheckChild1Integer, 127|128,127|128,127|128,127|128,127|128,127|128,127|128,127|128,127|128,1/*18446744073709551615*/, 
/*4084*/        OPC_MoveParent,
/*4085*/        OPC_SwitchType /*2 cases */, 9, MVT::i8,// ->4097
/*4088*/          OPC_MorphNodeTo2, TARGET_VAL(MSP430::BIC8rr), 0,
                      MVT::i8, MVT::i16, 2/*#Ops*/, 0, 1, 
                  // Src: (and:i8 GR8:i8:$src, (xor:i8 GR8:i8:$src2, -1:i8)) - Complexity = 11
                  // Dst: (BIC8rr:i8:i16 GR8:i8:$src, GR8:i8:$src2)
/*4097*/        /*SwitchType*/ 9, MVT::i16,// ->4108
/*4099*/          OPC_MorphNodeTo2, TARGET_VAL(MSP430::BIC16rr), 0,
                      MVT::i16, MVT::i16, 2/*#Ops*/, 0, 1, 
                  // Src: (and:i16 GR16:i16:$src, (xor:i16 GR16:i16:$src2, -1:i16)) - Complexity = 11
                  // Dst: (BIC16rr:i16:i16 GR16:i16:$src, GR16:i16:$src2)
/*4108*/        0, // EndSwitchType
/*4109*/      /*Scope*/ 42, /*->4152*/
/*4110*/        OPC_MoveChild0,
/*4111*/        OPC_CheckOpcode, TARGET_VAL(ISD::XOR),
/*4114*/        OPC_RecordChild0, // #0 = $src2
/*4115*/        OPC_CheckChild1Integer, 127|128,127|128,127|128,127|128,127|128,127|128,127|128,127|128,127|128,1/*18446744073709551615*/, 
/*4126*/        OPC_MoveParent,
/*4127*/        OPC_RecordChild1, // #1 = $src
/*4128*/        OPC_SwitchType /*2 cases */, 9, MVT::i8,// ->4140
/*4131*/          OPC_MorphNodeTo2, TARGET_VAL(MSP430::BIC8rr), 0,
                      MVT::i8, MVT::i16, 2/*#Ops*/, 1, 0, 
                  // Src: (and:i8 (xor:i8 GR8:i8:$src2, -1:i8), GR8:i8:$src) - Complexity = 11
                  // Dst: (BIC8rr:i8:i16 GR8:i8:$src, GR8:i8:$src2)
/*4140*/        /*SwitchType*/ 9, MVT::i16,// ->4151
/*4142*/          OPC_MorphNodeTo2, TARGET_VAL(MSP430::BIC16rr), 0,
                      MVT::i16, MVT::i16, 2/*#Ops*/, 1, 0, 
                  // Src: (and:i16 (xor:i16 GR16:i16:$src2, -1:i16), GR16:i16:$src) - Complexity = 11
                  // Dst: (BIC16rr:i16:i16 GR16:i16:$src, GR16:i16:$src2)
/*4151*/        0, // EndSwitchType
/*4152*/      /*Scope*/ 13, /*->4166*/
/*4153*/        OPC_CheckAndImm, 127|128,1/*255*/, 
/*4156*/        OPC_RecordChild0, // #0 = $src
/*4157*/        OPC_CheckType, MVT::i16,
/*4159*/        OPC_MorphNodeTo1, TARGET_VAL(MSP430::ZEXT16r), 0,
                    MVT::i16, 1/*#Ops*/, 0, 
                // Src: (and:i16 GR16:i16:$src, 255:i16) - Complexity = 8
                // Dst: (ZEXT16r:i16 GR16:i16:$src)
/*4166*/      /*Scope*/ 62, /*->4229*/
/*4167*/        OPC_RecordChild0, // #0 = $src
/*4168*/        OPC_RecordChild1, // #1 = $src2
/*4169*/        OPC_Scope, 33, /*->4204*/ // 3 children in Scope
/*4171*/          OPC_MoveChild1,
/*4172*/          OPC_CheckOpcode, TARGET_VAL(ISD::Constant),
/*4175*/          OPC_MoveParent,
/*4176*/          OPC_SwitchType /*2 cases */, 11, MVT::i8,// ->4190
/*4179*/            OPC_EmitConvertToTarget, 1,
/*4181*/            OPC_MorphNodeTo2, TARGET_VAL(MSP430::AND8ri), 0,
                        MVT::i8, MVT::i16, 2/*#Ops*/, 0, 2, 
                    // Src: (and:i8 GR8:i8:$src, (imm:i8):$src2) - Complexity = 6
                    // Dst: (AND8ri:i8:i16 GR8:i8:$src, (imm:i8):$src2)
/*4190*/          /*SwitchType*/ 11, MVT::i16,// ->4203
/*4192*/            OPC_EmitConvertToTarget, 1,
/*4194*/            OPC_MorphNodeTo2, TARGET_VAL(MSP430::AND16ri), 0,
                        MVT::i16, MVT::i16, 2/*#Ops*/, 0, 2, 
                    // Src: (and:i16 GR16:i16:$src, (imm:i16):$src2) - Complexity = 6
                    // Dst: (AND16ri:i16:i16 GR16:i16:$src, (imm:i16):$src2)
/*4203*/          0, // EndSwitchType
/*4204*/        /*Scope*/ 11, /*->4216*/
/*4205*/          OPC_CheckType, MVT::i8,
/*4207*/          OPC_MorphNodeTo2, TARGET_VAL(MSP430::AND8rr), 0,
                      MVT::i8, MVT::i16, 2/*#Ops*/, 0, 1, 
                  // Src: (and:i8 GR8:i8:$src, GR8:i8:$src2) - Complexity = 3
                  // Dst: (AND8rr:i8:i16 GR8:i8:$src, GR8:i8:$src2)
/*4216*/        /*Scope*/ 11, /*->4228*/
/*4217*/          OPC_CheckType, MVT::i16,
/*4219*/          OPC_MorphNodeTo2, TARGET_VAL(MSP430::AND16rr), 0,
                      MVT::i16, MVT::i16, 2/*#Ops*/, 0, 1, 
                  // Src: (and:i16 GR16:i16:$src, GR16:i16:$src2) - Complexity = 3
                  // Dst: (AND16rr:i16:i16 GR16:i16:$src, GR16:i16:$src2)
/*4228*/        0, /*End of Scope*/
/*4229*/      0, /*End of Scope*/
/*4230*/    /*SwitchOpcode*/ 58, TARGET_VAL(ISD::BRIND),// ->4291
/*4233*/      OPC_RecordNode, // #0 = 'brind' chained node
/*4234*/      OPC_Scope, 27, /*->4263*/ // 2 children in Scope
/*4236*/        OPC_MoveChild1,
/*4237*/        OPC_CheckOpcode, TARGET_VAL(ISD::LOAD),
/*4240*/        OPC_RecordMemRef,
/*4241*/        OPC_RecordNode, // #1 = 'ld' chained node
/*4242*/        OPC_CheckFoldableChainNode,
/*4243*/        OPC_RecordChild1, // #2 = $brdst
/*4244*/        OPC_CheckPredicate, 0, // Predicate_unindexedload
/*4246*/        OPC_CheckPredicate, 1, // Predicate_load
/*4248*/        OPC_MoveParent,
/*4249*/        OPC_CheckComplexPat, /*CP*/0, /*#*/2, // SelectAddr:$brdst #3 #4
/*4252*/        OPC_EmitMergeInputChains, 2, 0, 1, 
/*4256*/        OPC_MorphNodeTo0, TARGET_VAL(MSP430::Bm), 0|OPFL_Chain|OPFL_MemRefs,
                    2/*#Ops*/, 3, 4, 
                // Src: (brind (ld:iPTR addr:iPTR:$brdst)<<P:Predicate_unindexedload>><<P:Predicate_load>>) - Complexity = 16
                // Dst: (Bm addr:i16:$brdst)
/*4263*/      /*Scope*/ 26, /*->4290*/
/*4264*/        OPC_RecordChild1, // #1 = $brdst
/*4265*/        OPC_Scope, 12, /*->4279*/ // 2 children in Scope
/*4267*/          OPC_MoveChild1,
/*4268*/          OPC_CheckOpcode, TARGET_VAL(ISD::TargetBlockAddress),
/*4271*/          OPC_MoveParent,
/*4272*/          OPC_EmitMergeInputChains1_0,
/*4273*/          OPC_MorphNodeTo0, TARGET_VAL(MSP430::Bi), 0|OPFL_Chain,
                      1/*#Ops*/, 1, 
                  // Src: (brind (tblockaddress:iPTR):$brdst) - Complexity = 6
                  // Dst: (Bi (tblockaddress:i16):$brdst)
/*4279*/        /*Scope*/ 9, /*->4289*/
/*4280*/          OPC_CheckChild1Type, MVT::i16,
/*4282*/          OPC_EmitMergeInputChains1_0,
/*4283*/          OPC_MorphNodeTo0, TARGET_VAL(MSP430::Br), 0|OPFL_Chain,
                      1/*#Ops*/, 1, 
                  // Src: (brind GR16:i16:$brdst) - Complexity = 3
                  // Dst: (Br GR16:i16:$brdst)
/*4289*/        0, /*End of Scope*/
/*4290*/      0, /*End of Scope*/
/*4291*/    /*SwitchOpcode*/ 94, TARGET_VAL(MSP430ISD::CALL),// ->4388
/*4294*/      OPC_RecordNode, // #0 = 'MSP430call' chained node
/*4295*/      OPC_CaptureGlueInput,
/*4296*/      OPC_Scope, 28, /*->4326*/ // 2 children in Scope
/*4298*/        OPC_MoveChild1,
/*4299*/        OPC_CheckOpcode, TARGET_VAL(ISD::LOAD),
/*4302*/        OPC_RecordMemRef,
/*4303*/        OPC_RecordNode, // #1 = 'ld' chained node
/*4304*/        OPC_CheckFoldableChainNode,
/*4305*/        OPC_RecordChild1, // #2 = $dst
/*4306*/        OPC_CheckPredicate, 0, // Predicate_unindexedload
/*4308*/        OPC_CheckPredicate, 1, // Predicate_load
/*4310*/        OPC_MoveParent,
/*4311*/        OPC_CheckComplexPat, /*CP*/0, /*#*/2, // SelectAddr:$dst #3 #4
/*4314*/        OPC_EmitMergeInputChains, 2, 0, 1, 
/*4318*/        OPC_MorphNodeTo1, TARGET_VAL(MSP430::CALLm), 0|OPFL_Chain|OPFL_GlueInput|OPFL_GlueOutput|OPFL_MemRefs|OPFL_Variadic1,
                    MVT::i16, 2/*#Ops*/, 3, 4, 
                // Src: (MSP430call (ld:iPTR addr:iPTR:$dst)<<P:Predicate_unindexedload>><<P:Predicate_load>>) - Complexity = 16
                // Dst: (CALLm:i16 addr:i16:$dst)
/*4326*/      /*Scope*/ 60, /*->4387*/
/*4327*/        OPC_RecordChild1, // #1 = $dst
/*4328*/        OPC_Scope, 45, /*->4375*/ // 2 children in Scope
/*4330*/          OPC_MoveChild1,
/*4331*/          OPC_SwitchOpcode /*3 cases */, 11, TARGET_VAL(ISD::Constant),// ->4346
/*4335*/            OPC_MoveParent,
/*4336*/            OPC_EmitMergeInputChains1_0,
/*4337*/            OPC_EmitConvertToTarget, 1,
/*4339*/            OPC_MorphNodeTo1, TARGET_VAL(MSP430::CALLi), 0|OPFL_Chain|OPFL_GlueInput|OPFL_GlueOutput|OPFL_Variadic1,
                        MVT::i16, 1/*#Ops*/, 2, 
                    // Src: (MSP430call (imm:iPTR):$dst) - Complexity = 6
                    // Dst: (CALLi:i16 (imm:i16):$dst)
/*4346*/          /*SwitchOpcode*/ 11, TARGET_VAL(ISD::TargetGlobalAddress),// ->4360
/*4349*/            OPC_CheckType, MVT::i16,
/*4351*/            OPC_MoveParent,
/*4352*/            OPC_EmitMergeInputChains1_0,
/*4353*/            OPC_MorphNodeTo1, TARGET_VAL(MSP430::CALLi), 0|OPFL_Chain|OPFL_GlueInput|OPFL_GlueOutput|OPFL_Variadic1,
                        MVT::i16, 1/*#Ops*/, 1, 
                    // Src: (MSP430call (tglobaladdr:i16):$dst) - Complexity = 6
                    // Dst: (CALLi:i16 (tglobaladdr:i16):$dst)
/*4360*/          /*SwitchOpcode*/ 11, TARGET_VAL(ISD::TargetExternalSymbol),// ->4374
/*4363*/            OPC_CheckType, MVT::i16,
/*4365*/            OPC_MoveParent,
/*4366*/            OPC_EmitMergeInputChains1_0,
/*4367*/            OPC_MorphNodeTo1, TARGET_VAL(MSP430::CALLi), 0|OPFL_Chain|OPFL_GlueInput|OPFL_GlueOutput|OPFL_Variadic1,
                        MVT::i16, 1/*#Ops*/, 1, 
                    // Src: (MSP430call (texternalsym:i16):$dst) - Complexity = 6
                    // Dst: (CALLi:i16 (texternalsym:i16):$dst)
/*4374*/          0, // EndSwitchOpcode
/*4375*/        /*Scope*/ 10, /*->4386*/
/*4376*/          OPC_CheckChild1Type, MVT::i16,
/*4378*/          OPC_EmitMergeInputChains1_0,
/*4379*/          OPC_MorphNodeTo1, TARGET_VAL(MSP430::CALLr), 0|OPFL_Chain|OPFL_GlueInput|OPFL_GlueOutput|OPFL_Variadic1,
                      MVT::i16, 1/*#Ops*/, 1, 
                  // Src: (MSP430call GR16:i16:$dst) - Complexity = 3
                  // Dst: (CALLr:i16 GR16:i16:$dst)
/*4386*/        0, /*End of Scope*/
/*4387*/      0, /*End of Scope*/
/*4388*/    /*SwitchOpcode*/ 25|128,2/*281*/, TARGET_VAL(ISD::ADD),// ->4673
/*4392*/      OPC_Scope, 48, /*->4442*/ // 5 children in Scope
/*4394*/        OPC_RecordChild0, // #0 = $src
/*4395*/        OPC_MoveChild1,
/*4396*/        OPC_CheckOpcode, TARGET_VAL(ISD::LOAD),
/*4399*/        OPC_RecordMemRef,
/*4400*/        OPC_RecordNode, // #1 = 'ld' chained node
/*4401*/        OPC_CheckFoldableChainNode,
/*4402*/        OPC_RecordChild1, // #2 = $src2
/*4403*/        OPC_CheckPredicate, 0, // Predicate_unindexedload
/*4405*/        OPC_CheckPredicate, 1, // Predicate_load
/*4407*/        OPC_MoveParent,
/*4408*/        OPC_SwitchType /*2 cases */, 14, MVT::i8,// ->4425
/*4411*/          OPC_CheckComplexPat, /*CP*/0, /*#*/2, // SelectAddr:$src2 #3 #4
/*4414*/          OPC_EmitMergeInputChains1_1,
/*4415*/          OPC_MorphNodeTo2, TARGET_VAL(MSP430::ADD8rm), 0|OPFL_Chain|OPFL_MemRefs,
                      MVT::i8, MVT::i16, 3/*#Ops*/, 0, 3, 4, 
                  // Src: (add:i8 GR8:i8:$src, (ld:i8 addr:iPTR:$src2)<<P:Predicate_unindexedload>><<P:Predicate_load>>) - Complexity = 16
                  // Dst: (ADD8rm:i8:i16 GR8:i8:$src, addr:i16:$src2)
/*4425*/        /*SwitchType*/ 14, MVT::i16,// ->4441
/*4427*/          OPC_CheckComplexPat, /*CP*/0, /*#*/2, // SelectAddr:$src2 #3 #4
/*4430*/          OPC_EmitMergeInputChains1_1,
/*4431*/          OPC_MorphNodeTo2, TARGET_VAL(MSP430::ADD16rm), 0|OPFL_Chain|OPFL_MemRefs,
                      MVT::i16, MVT::i16, 3/*#Ops*/, 0, 3, 4, 
                  // Src: (add:i16 GR16:i16:$src, (ld:i16 addr:iPTR:$src2)<<P:Predicate_unindexedload>><<P:Predicate_load>>) - Complexity = 16
                  // Dst: (ADD16rm:i16:i16 GR16:i16:$src, addr:i16:$src2)
/*4441*/        0, // EndSwitchType
/*4442*/      /*Scope*/ 48, /*->4491*/
/*4443*/        OPC_MoveChild0,
/*4444*/        OPC_CheckOpcode, TARGET_VAL(ISD::LOAD),
/*4447*/        OPC_RecordMemRef,
/*4448*/        OPC_RecordNode, // #0 = 'ld' chained node
/*4449*/        OPC_CheckFoldableChainNode,
/*4450*/        OPC_RecordChild1, // #1 = $src2
/*4451*/        OPC_CheckPredicate, 0, // Predicate_unindexedload
/*4453*/        OPC_CheckPredicate, 1, // Predicate_load
/*4455*/        OPC_MoveParent,
/*4456*/        OPC_RecordChild1, // #2 = $src
/*4457*/        OPC_SwitchType /*2 cases */, 14, MVT::i8,// ->4474
/*4460*/          OPC_CheckComplexPat, /*CP*/0, /*#*/1, // SelectAddr:$src2 #3 #4
/*4463*/          OPC_EmitMergeInputChains1_0,
/*4464*/          OPC_MorphNodeTo2, TARGET_VAL(MSP430::ADD8rm), 0|OPFL_Chain|OPFL_MemRefs,
                      MVT::i8, MVT::i16, 3/*#Ops*/, 2, 3, 4, 
                  // Src: (add:i8 (ld:i8 addr:iPTR:$src2)<<P:Predicate_unindexedload>><<P:Predicate_load>>, GR8:i8:$src) - Complexity = 16
                  // Dst: (ADD8rm:i8:i16 GR8:i8:$src, addr:i16:$src2)
/*4474*/        /*SwitchType*/ 14, MVT::i16,// ->4490
/*4476*/          OPC_CheckComplexPat, /*CP*/0, /*#*/1, // SelectAddr:$src2 #3 #4
/*4479*/          OPC_EmitMergeInputChains1_0,
/*4480*/          OPC_MorphNodeTo2, TARGET_VAL(MSP430::ADD16rm), 0|OPFL_Chain|OPFL_MemRefs,
                      MVT::i16, MVT::i16, 3/*#Ops*/, 2, 3, 4, 
                  // Src: (add:i16 (ld:i16 addr:iPTR:$src2)<<P:Predicate_unindexedload>><<P:Predicate_load>>, GR16:i16:$src) - Complexity = 16
                  // Dst: (ADD16rm:i16:i16 GR16:i16:$src, addr:i16:$src2)
/*4490*/        0, // EndSwitchType
/*4491*/      /*Scope*/ 57, /*->4549*/
/*4492*/        OPC_RecordChild0, // #0 = $src
/*4493*/        OPC_MoveChild1,
/*4494*/        OPC_CheckOpcode, TARGET_VAL(MSP430ISD::Wrapper),
/*4497*/        OPC_RecordChild0, // #1 = $src2
/*4498*/        OPC_MoveChild0,
/*4499*/        OPC_SwitchOpcode /*3 cases */, 13, TARGET_VAL(ISD::TargetGlobalAddress),// ->4516
/*4503*/          OPC_MoveParent,
/*4504*/          OPC_MoveParent,
/*4505*/          OPC_CheckType, MVT::i16,
/*4507*/          OPC_MorphNodeTo2, TARGET_VAL(MSP430::ADD16ri), 0,
                      MVT::i16, MVT::i16, 2/*#Ops*/, 0, 1, 
                  // Src: (add:i16 GR16:i16:$src, (MSP430Wrapper:i16 (tglobaladdr:i16):$src2)) - Complexity = 9
                  // Dst: (ADD16ri:i16:i16 GR16:i16:$src, (tglobaladdr:i16):$src2)
/*4516*/        /*SwitchOpcode*/ 13, TARGET_VAL(ISD::TargetExternalSymbol),// ->4532
/*4519*/          OPC_MoveParent,
/*4520*/          OPC_MoveParent,
/*4521*/          OPC_CheckType, MVT::i16,
/*4523*/          OPC_MorphNodeTo2, TARGET_VAL(MSP430::ADD16ri), 0,
                      MVT::i16, MVT::i16, 2/*#Ops*/, 0, 1, 
                  // Src: (add:i16 GR16:i16:$src, (MSP430Wrapper:i16 (texternalsym:i16):$src2)) - Complexity = 9
                  // Dst: (ADD16ri:i16:i16 GR16:i16:$src, (texternalsym:i16):$src2)
/*4532*/        /*SwitchOpcode*/ 13, TARGET_VAL(ISD::TargetBlockAddress),// ->4548
/*4535*/          OPC_MoveParent,
/*4536*/          OPC_MoveParent,
/*4537*/          OPC_CheckType, MVT::i16,
/*4539*/          OPC_MorphNodeTo2, TARGET_VAL(MSP430::ADD16ri), 0,
                      MVT::i16, MVT::i16, 2/*#Ops*/, 0, 1, 
                  // Src: (add:i16 GR16:i16:$src, (MSP430Wrapper:i16 (tblockaddress:i16):$src2)) - Complexity = 9
                  // Dst: (ADD16ri:i16:i16 GR16:i16:$src, (tblockaddress:i16):$src2)
/*4548*/        0, // EndSwitchOpcode
/*4549*/      /*Scope*/ 59, /*->4609*/
/*4550*/        OPC_MoveChild0,
/*4551*/        OPC_CheckOpcode, TARGET_VAL(MSP430ISD::Wrapper),
/*4554*/        OPC_RecordChild0, // #0 = $src2
/*4555*/        OPC_MoveChild0,
/*4556*/        OPC_SwitchOpcode /*3 cases */, 14, TARGET_VAL(ISD::TargetGlobalAddress),// ->4574
/*4560*/          OPC_MoveParent,
/*4561*/          OPC_MoveParent,
/*4562*/          OPC_RecordChild1, // #1 = $src
/*4563*/          OPC_CheckType, MVT::i16,
/*4565*/          OPC_MorphNodeTo2, TARGET_VAL(MSP430::ADD16ri), 0,
                      MVT::i16, MVT::i16, 2/*#Ops*/, 1, 0, 
                  // Src: (add:i16 (MSP430Wrapper:i16 (tglobaladdr:i16):$src2), GR16:i16:$src) - Complexity = 9
                  // Dst: (ADD16ri:i16:i16 GR16:i16:$src, (tglobaladdr:i16):$src2)
/*4574*/        /*SwitchOpcode*/ 14, TARGET_VAL(ISD::TargetExternalSymbol),// ->4591
/*4577*/          OPC_MoveParent,
/*4578*/          OPC_MoveParent,
/*4579*/          OPC_RecordChild1, // #1 = $src
/*4580*/          OPC_CheckType, MVT::i16,
/*4582*/          OPC_MorphNodeTo2, TARGET_VAL(MSP430::ADD16ri), 0,
                      MVT::i16, MVT::i16, 2/*#Ops*/, 1, 0, 
                  // Src: (add:i16 (MSP430Wrapper:i16 (texternalsym:i16):$src2), GR16:i16:$src) - Complexity = 9
                  // Dst: (ADD16ri:i16:i16 GR16:i16:$src, (texternalsym:i16):$src2)
/*4591*/        /*SwitchOpcode*/ 14, TARGET_VAL(ISD::TargetBlockAddress),// ->4608
/*4594*/          OPC_MoveParent,
/*4595*/          OPC_MoveParent,
/*4596*/          OPC_RecordChild1, // #1 = $src
/*4597*/          OPC_CheckType, MVT::i16,
/*4599*/          OPC_MorphNodeTo2, TARGET_VAL(MSP430::ADD16ri), 0,
                      MVT::i16, MVT::i16, 2/*#Ops*/, 1, 0, 
                  // Src: (add:i16 (MSP430Wrapper:i16 (tblockaddress:i16):$src2), GR16:i16:$src) - Complexity = 9
                  // Dst: (ADD16ri:i16:i16 GR16:i16:$src, (tblockaddress:i16):$src2)
/*4608*/        0, // EndSwitchOpcode
/*4609*/      /*Scope*/ 62, /*->4672*/
/*4610*/        OPC_RecordChild0, // #0 = $src
/*4611*/        OPC_RecordChild1, // #1 = $src2
/*4612*/        OPC_Scope, 33, /*->4647*/ // 3 children in Scope
/*4614*/          OPC_MoveChild1,
/*4615*/          OPC_CheckOpcode, TARGET_VAL(ISD::Constant),
/*4618*/          OPC_MoveParent,
/*4619*/          OPC_SwitchType /*2 cases */, 11, MVT::i8,// ->4633
/*4622*/            OPC_EmitConvertToTarget, 1,
/*4624*/            OPC_MorphNodeTo2, TARGET_VAL(MSP430::ADD8ri), 0,
                        MVT::i8, MVT::i16, 2/*#Ops*/, 0, 2, 
                    // Src: (add:i8 GR8:i8:$src, (imm:i8):$src2) - Complexity = 6
                    // Dst: (ADD8ri:i8:i16 GR8:i8:$src, (imm:i8):$src2)
/*4633*/          /*SwitchType*/ 11, MVT::i16,// ->4646
/*4635*/            OPC_EmitConvertToTarget, 1,
/*4637*/            OPC_MorphNodeTo2, TARGET_VAL(MSP430::ADD16ri), 0,
                        MVT::i16, MVT::i16, 2/*#Ops*/, 0, 2, 
                    // Src: (add:i16 GR16:i16:$src, (imm:i16):$src2) - Complexity = 6
                    // Dst: (ADD16ri:i16:i16 GR16:i16:$src, (imm:i16):$src2)
/*4646*/          0, // EndSwitchType
/*4647*/        /*Scope*/ 11, /*->4659*/
/*4648*/          OPC_CheckType, MVT::i8,
/*4650*/          OPC_MorphNodeTo2, TARGET_VAL(MSP430::ADD8rr), 0,
                      MVT::i8, MVT::i16, 2/*#Ops*/, 0, 1, 
                  // Src: (add:i8 GR8:i8:$src, GR8:i8:$src2) - Complexity = 3
                  // Dst: (ADD8rr:i8:i16 GR8:i8:$src, GR8:i8:$src2)
/*4659*/        /*Scope*/ 11, /*->4671*/
/*4660*/          OPC_CheckType, MVT::i16,
/*4662*/          OPC_MorphNodeTo2, TARGET_VAL(MSP430::ADD16rr), 0,
                      MVT::i16, MVT::i16, 2/*#Ops*/, 0, 1, 
                  // Src: (add:i16 GR16:i16:$src, GR16:i16:$src2) - Complexity = 3
                  // Dst: (ADD16rr:i16:i16 GR16:i16:$src, GR16:i16:$src2)
/*4671*/        0, /*End of Scope*/
/*4672*/      0, /*End of Scope*/
/*4673*/    /*SwitchOpcode*/ 36|128,1/*164*/, TARGET_VAL(ISD::ADDE),// ->4841
/*4677*/      OPC_CaptureGlueInput,
/*4678*/      OPC_Scope, 48, /*->4728*/ // 3 children in Scope
/*4680*/        OPC_RecordChild0, // #0 = $src
/*4681*/        OPC_MoveChild1,
/*4682*/        OPC_CheckOpcode, TARGET_VAL(ISD::LOAD),
/*4685*/        OPC_RecordMemRef,
/*4686*/        OPC_RecordNode, // #1 = 'ld' chained node
/*4687*/        OPC_CheckFoldableChainNode,
/*4688*/        OPC_RecordChild1, // #2 = $src2
/*4689*/        OPC_CheckPredicate, 0, // Predicate_unindexedload
/*4691*/        OPC_CheckPredicate, 1, // Predicate_load
/*4693*/        OPC_MoveParent,
/*4694*/        OPC_SwitchType /*2 cases */, 14, MVT::i8,// ->4711
/*4697*/          OPC_CheckComplexPat, /*CP*/0, /*#*/2, // SelectAddr:$src2 #3 #4
/*4700*/          OPC_EmitMergeInputChains1_1,
/*4701*/          OPC_MorphNodeTo2, TARGET_VAL(MSP430::ADC8rm), 0|OPFL_Chain|OPFL_GlueInput|OPFL_GlueOutput|OPFL_MemRefs,
                      MVT::i8, MVT::i16, 3/*#Ops*/, 0, 3, 4, 
                  // Src: (adde:i8 GR8:i8:$src, (ld:i8 addr:iPTR:$src2)<<P:Predicate_unindexedload>><<P:Predicate_load>>) - Complexity = 16
                  // Dst: (ADC8rm:i8:i16 GR8:i8:$src, addr:i16:$src2)
/*4711*/        /*SwitchType*/ 14, MVT::i16,// ->4727
/*4713*/          OPC_CheckComplexPat, /*CP*/0, /*#*/2, // SelectAddr:$src2 #3 #4
/*4716*/          OPC_EmitMergeInputChains1_1,
/*4717*/          OPC_MorphNodeTo2, TARGET_VAL(MSP430::ADC16rm), 0|OPFL_Chain|OPFL_GlueInput|OPFL_GlueOutput|OPFL_MemRefs,
                      MVT::i16, MVT::i16, 3/*#Ops*/, 0, 3, 4, 
                  // Src: (adde:i16 GR16:i16:$src, (ld:i16 addr:iPTR:$src2)<<P:Predicate_unindexedload>><<P:Predicate_load>>) - Complexity = 16
                  // Dst: (ADC16rm:i16:i16 GR16:i16:$src, addr:i16:$src2)
/*4727*/        0, // EndSwitchType
/*4728*/      /*Scope*/ 48, /*->4777*/
/*4729*/        OPC_MoveChild0,
/*4730*/        OPC_CheckOpcode, TARGET_VAL(ISD::LOAD),
/*4733*/        OPC_RecordMemRef,
/*4734*/        OPC_RecordNode, // #0 = 'ld' chained node
/*4735*/        OPC_CheckFoldableChainNode,
/*4736*/        OPC_RecordChild1, // #1 = $src2
/*4737*/        OPC_CheckPredicate, 0, // Predicate_unindexedload
/*4739*/        OPC_CheckPredicate, 1, // Predicate_load
/*4741*/        OPC_MoveParent,
/*4742*/        OPC_RecordChild1, // #2 = $src
/*4743*/        OPC_SwitchType /*2 cases */, 14, MVT::i8,// ->4760
/*4746*/          OPC_CheckComplexPat, /*CP*/0, /*#*/1, // SelectAddr:$src2 #3 #4
/*4749*/          OPC_EmitMergeInputChains1_0,
/*4750*/          OPC_MorphNodeTo2, TARGET_VAL(MSP430::ADC8rm), 0|OPFL_Chain|OPFL_GlueInput|OPFL_GlueOutput|OPFL_MemRefs,
                      MVT::i8, MVT::i16, 3/*#Ops*/, 2, 3, 4, 
                  // Src: (adde:i8 (ld:i8 addr:iPTR:$src2)<<P:Predicate_unindexedload>><<P:Predicate_load>>, GR8:i8:$src) - Complexity = 16
                  // Dst: (ADC8rm:i8:i16 GR8:i8:$src, addr:i16:$src2)
/*4760*/        /*SwitchType*/ 14, MVT::i16,// ->4776
/*4762*/          OPC_CheckComplexPat, /*CP*/0, /*#*/1, // SelectAddr:$src2 #3 #4
/*4765*/          OPC_EmitMergeInputChains1_0,
/*4766*/          OPC_MorphNodeTo2, TARGET_VAL(MSP430::ADC16rm), 0|OPFL_Chain|OPFL_GlueInput|OPFL_GlueOutput|OPFL_MemRefs,
                      MVT::i16, MVT::i16, 3/*#Ops*/, 2, 3, 4, 
                  // Src: (adde:i16 (ld:i16 addr:iPTR:$src2)<<P:Predicate_unindexedload>><<P:Predicate_load>>, GR16:i16:$src) - Complexity = 16
                  // Dst: (ADC16rm:i16:i16 GR16:i16:$src, addr:i16:$src2)
/*4776*/        0, // EndSwitchType
/*4777*/      /*Scope*/ 62, /*->4840*/
/*4778*/        OPC_RecordChild0, // #0 = $src
/*4779*/        OPC_RecordChild1, // #1 = $src2
/*4780*/        OPC_Scope, 33, /*->4815*/ // 3 children in Scope
/*4782*/          OPC_MoveChild1,
/*4783*/          OPC_CheckOpcode, TARGET_VAL(ISD::Constant),
/*4786*/          OPC_MoveParent,
/*4787*/          OPC_SwitchType /*2 cases */, 11, MVT::i8,// ->4801
/*4790*/            OPC_EmitConvertToTarget, 1,
/*4792*/            OPC_MorphNodeTo2, TARGET_VAL(MSP430::ADC8ri), 0|OPFL_GlueInput|OPFL_GlueOutput,
                        MVT::i8, MVT::i16, 2/*#Ops*/, 0, 2, 
                    // Src: (adde:i8 GR8:i8:$src, (imm:i8):$src2) - Complexity = 6
                    // Dst: (ADC8ri:i8:i16 GR8:i8:$src, (imm:i8):$src2)
/*4801*/          /*SwitchType*/ 11, MVT::i16,// ->4814
/*4803*/            OPC_EmitConvertToTarget, 1,
/*4805*/            OPC_MorphNodeTo2, TARGET_VAL(MSP430::ADC16ri), 0|OPFL_GlueInput|OPFL_GlueOutput,
                        MVT::i16, MVT::i16, 2/*#Ops*/, 0, 2, 
                    // Src: (adde:i16 GR16:i16:$src, (imm:i16):$src2) - Complexity = 6
                    // Dst: (ADC16ri:i16:i16 GR16:i16:$src, (imm:i16):$src2)
/*4814*/          0, // EndSwitchType
/*4815*/        /*Scope*/ 11, /*->4827*/
/*4816*/          OPC_CheckType, MVT::i8,
/*4818*/          OPC_MorphNodeTo2, TARGET_VAL(MSP430::ADC8rr), 0|OPFL_GlueInput|OPFL_GlueOutput,
                      MVT::i8, MVT::i16, 2/*#Ops*/, 0, 1, 
                  // Src: (adde:i8 GR8:i8:$src, GR8:i8:$src2) - Complexity = 3
                  // Dst: (ADC8rr:i8:i16 GR8:i8:$src, GR8:i8:$src2)
/*4827*/        /*Scope*/ 11, /*->4839*/
/*4828*/          OPC_CheckType, MVT::i16,
/*4830*/          OPC_MorphNodeTo2, TARGET_VAL(MSP430::ADC16rr), 0|OPFL_GlueInput|OPFL_GlueOutput,
                      MVT::i16, MVT::i16, 2/*#Ops*/, 0, 1, 
                  // Src: (adde:i16 GR16:i16:$src, GR16:i16:$src2) - Complexity = 3
                  // Dst: (ADC16rr:i16:i16 GR16:i16:$src, GR16:i16:$src2)
/*4839*/        0, /*End of Scope*/
/*4840*/      0, /*End of Scope*/
/*4841*/    /*SwitchOpcode*/ 35|128,1/*163*/, TARGET_VAL(ISD::OR),// ->5008
/*4845*/      OPC_Scope, 48, /*->4895*/ // 3 children in Scope
/*4847*/        OPC_RecordChild0, // #0 = $src
/*4848*/        OPC_MoveChild1,
/*4849*/        OPC_CheckOpcode, TARGET_VAL(ISD::LOAD),
/*4852*/        OPC_RecordMemRef,
/*4853*/        OPC_RecordNode, // #1 = 'ld' chained node
/*4854*/        OPC_CheckFoldableChainNode,
/*4855*/        OPC_RecordChild1, // #2 = $src2
/*4856*/        OPC_CheckPredicate, 0, // Predicate_unindexedload
/*4858*/        OPC_CheckPredicate, 1, // Predicate_load
/*4860*/        OPC_MoveParent,
/*4861*/        OPC_SwitchType /*2 cases */, 14, MVT::i8,// ->4878
/*4864*/          OPC_CheckComplexPat, /*CP*/0, /*#*/2, // SelectAddr:$src2 #3 #4
/*4867*/          OPC_EmitMergeInputChains1_1,
/*4868*/          OPC_MorphNodeTo2, TARGET_VAL(MSP430::OR8rm), 0|OPFL_Chain|OPFL_MemRefs,
                      MVT::i8, MVT::i16, 3/*#Ops*/, 0, 3, 4, 
                  // Src: (or:i8 GR8:i8:$src, (ld:i8 addr:iPTR:$src2)<<P:Predicate_unindexedload>><<P:Predicate_load>>) - Complexity = 16
                  // Dst: (OR8rm:i8:i16 GR8:i8:$src, addr:i16:$src2)
/*4878*/        /*SwitchType*/ 14, MVT::i16,// ->4894
/*4880*/          OPC_CheckComplexPat, /*CP*/0, /*#*/2, // SelectAddr:$src2 #3 #4
/*4883*/          OPC_EmitMergeInputChains1_1,
/*4884*/          OPC_MorphNodeTo2, TARGET_VAL(MSP430::OR16rm), 0|OPFL_Chain|OPFL_MemRefs,
                      MVT::i16, MVT::i16, 3/*#Ops*/, 0, 3, 4, 
                  // Src: (or:i16 GR16:i16:$src, (ld:i16 addr:iPTR:$src2)<<P:Predicate_unindexedload>><<P:Predicate_load>>) - Complexity = 16
                  // Dst: (OR16rm:i16:i16 GR16:i16:$src, addr:i16:$src2)
/*4894*/        0, // EndSwitchType
/*4895*/      /*Scope*/ 48, /*->4944*/
/*4896*/        OPC_MoveChild0,
/*4897*/        OPC_CheckOpcode, TARGET_VAL(ISD::LOAD),
/*4900*/        OPC_RecordMemRef,
/*4901*/        OPC_RecordNode, // #0 = 'ld' chained node
/*4902*/        OPC_CheckFoldableChainNode,
/*4903*/        OPC_RecordChild1, // #1 = $src2
/*4904*/        OPC_CheckPredicate, 0, // Predicate_unindexedload
/*4906*/        OPC_CheckPredicate, 1, // Predicate_load
/*4908*/        OPC_MoveParent,
/*4909*/        OPC_RecordChild1, // #2 = $src
/*4910*/        OPC_SwitchType /*2 cases */, 14, MVT::i8,// ->4927
/*4913*/          OPC_CheckComplexPat, /*CP*/0, /*#*/1, // SelectAddr:$src2 #3 #4
/*4916*/          OPC_EmitMergeInputChains1_0,
/*4917*/          OPC_MorphNodeTo2, TARGET_VAL(MSP430::OR8rm), 0|OPFL_Chain|OPFL_MemRefs,
                      MVT::i8, MVT::i16, 3/*#Ops*/, 2, 3, 4, 
                  // Src: (or:i8 (ld:i8 addr:iPTR:$src2)<<P:Predicate_unindexedload>><<P:Predicate_load>>, GR8:i8:$src) - Complexity = 16
                  // Dst: (OR8rm:i8:i16 GR8:i8:$src, addr:i16:$src2)
/*4927*/        /*SwitchType*/ 14, MVT::i16,// ->4943
/*4929*/          OPC_CheckComplexPat, /*CP*/0, /*#*/1, // SelectAddr:$src2 #3 #4
/*4932*/          OPC_EmitMergeInputChains1_0,
/*4933*/          OPC_MorphNodeTo2, TARGET_VAL(MSP430::OR16rm), 0|OPFL_Chain|OPFL_MemRefs,
                      MVT::i16, MVT::i16, 3/*#Ops*/, 2, 3, 4, 
                  // Src: (or:i16 (ld:i16 addr:iPTR:$src2)<<P:Predicate_unindexedload>><<P:Predicate_load>>, GR16:i16:$src) - Complexity = 16
                  // Dst: (OR16rm:i16:i16 GR16:i16:$src, addr:i16:$src2)
/*4943*/        0, // EndSwitchType
/*4944*/      /*Scope*/ 62, /*->5007*/
/*4945*/        OPC_RecordChild0, // #0 = $src
/*4946*/        OPC_RecordChild1, // #1 = $src2
/*4947*/        OPC_Scope, 33, /*->4982*/ // 3 children in Scope
/*4949*/          OPC_MoveChild1,
/*4950*/          OPC_CheckOpcode, TARGET_VAL(ISD::Constant),
/*4953*/          OPC_MoveParent,
/*4954*/          OPC_SwitchType /*2 cases */, 11, MVT::i8,// ->4968
/*4957*/            OPC_EmitConvertToTarget, 1,
/*4959*/            OPC_MorphNodeTo2, TARGET_VAL(MSP430::OR8ri), 0,
                        MVT::i8, MVT::i16, 2/*#Ops*/, 0, 2, 
                    // Src: (or:i8 GR8:i8:$src, (imm:i8):$src2) - Complexity = 6
                    // Dst: (OR8ri:i8:i16 GR8:i8:$src, (imm:i8):$src2)
/*4968*/          /*SwitchType*/ 11, MVT::i16,// ->4981
/*4970*/            OPC_EmitConvertToTarget, 1,
/*4972*/            OPC_MorphNodeTo2, TARGET_VAL(MSP430::OR16ri), 0,
                        MVT::i16, MVT::i16, 2/*#Ops*/, 0, 2, 
                    // Src: (or:i16 GR16:i16:$src, (imm:i16):$src2) - Complexity = 6
                    // Dst: (OR16ri:i16:i16 GR16:i16:$src, (imm:i16):$src2)
/*4981*/          0, // EndSwitchType
/*4982*/        /*Scope*/ 11, /*->4994*/
/*4983*/          OPC_CheckType, MVT::i8,
/*4985*/          OPC_MorphNodeTo2, TARGET_VAL(MSP430::OR8rr), 0,
                      MVT::i8, MVT::i16, 2/*#Ops*/, 0, 1, 
                  // Src: (or:i8 GR8:i8:$src, GR8:i8:$src2) - Complexity = 3
                  // Dst: (OR8rr:i8:i16 GR8:i8:$src, GR8:i8:$src2)
/*4994*/        /*Scope*/ 11, /*->5006*/
/*4995*/          OPC_CheckType, MVT::i16,
/*4997*/          OPC_MorphNodeTo2, TARGET_VAL(MSP430::OR16rr), 0,
                      MVT::i16, MVT::i16, 2/*#Ops*/, 0, 1, 
                  // Src: (or:i16 GR16:i16:$src, GR16:i16:$src2) - Complexity = 3
                  // Dst: (OR16rr:i16:i16 GR16:i16:$src, GR16:i16:$src2)
/*5006*/        0, /*End of Scope*/
/*5007*/      0, /*End of Scope*/
/*5008*/    /*SwitchOpcode*/ 35|128,1/*163*/, TARGET_VAL(ISD::XOR),// ->5175
/*5012*/      OPC_Scope, 48, /*->5062*/ // 3 children in Scope
/*5014*/        OPC_RecordChild0, // #0 = $src
/*5015*/        OPC_MoveChild1,
/*5016*/        OPC_CheckOpcode, TARGET_VAL(ISD::LOAD),
/*5019*/        OPC_RecordMemRef,
/*5020*/        OPC_RecordNode, // #1 = 'ld' chained node
/*5021*/        OPC_CheckFoldableChainNode,
/*5022*/        OPC_RecordChild1, // #2 = $src2
/*5023*/        OPC_CheckPredicate, 0, // Predicate_unindexedload
/*5025*/        OPC_CheckPredicate, 1, // Predicate_load
/*5027*/        OPC_MoveParent,
/*5028*/        OPC_SwitchType /*2 cases */, 14, MVT::i8,// ->5045
/*5031*/          OPC_CheckComplexPat, /*CP*/0, /*#*/2, // SelectAddr:$src2 #3 #4
/*5034*/          OPC_EmitMergeInputChains1_1,
/*5035*/          OPC_MorphNodeTo2, TARGET_VAL(MSP430::XOR8rm), 0|OPFL_Chain|OPFL_MemRefs,
                      MVT::i8, MVT::i16, 3/*#Ops*/, 0, 3, 4, 
                  // Src: (xor:i8 GR8:i8:$src, (ld:i8 addr:iPTR:$src2)<<P:Predicate_unindexedload>><<P:Predicate_load>>) - Complexity = 16
                  // Dst: (XOR8rm:i8:i16 GR8:i8:$src, addr:i16:$src2)
/*5045*/        /*SwitchType*/ 14, MVT::i16,// ->5061
/*5047*/          OPC_CheckComplexPat, /*CP*/0, /*#*/2, // SelectAddr:$src2 #3 #4
/*5050*/          OPC_EmitMergeInputChains1_1,
/*5051*/          OPC_MorphNodeTo2, TARGET_VAL(MSP430::XOR16rm), 0|OPFL_Chain|OPFL_MemRefs,
                      MVT::i16, MVT::i16, 3/*#Ops*/, 0, 3, 4, 
                  // Src: (xor:i16 GR16:i16:$src, (ld:i16 addr:iPTR:$src2)<<P:Predicate_unindexedload>><<P:Predicate_load>>) - Complexity = 16
                  // Dst: (XOR16rm:i16:i16 GR16:i16:$src, addr:i16:$src2)
/*5061*/        0, // EndSwitchType
/*5062*/      /*Scope*/ 48, /*->5111*/
/*5063*/        OPC_MoveChild0,
/*5064*/        OPC_CheckOpcode, TARGET_VAL(ISD::LOAD),
/*5067*/        OPC_RecordMemRef,
/*5068*/        OPC_RecordNode, // #0 = 'ld' chained node
/*5069*/        OPC_CheckFoldableChainNode,
/*5070*/        OPC_RecordChild1, // #1 = $src2
/*5071*/        OPC_CheckPredicate, 0, // Predicate_unindexedload
/*5073*/        OPC_CheckPredicate, 1, // Predicate_load
/*5075*/        OPC_MoveParent,
/*5076*/        OPC_RecordChild1, // #2 = $src
/*5077*/        OPC_SwitchType /*2 cases */, 14, MVT::i8,// ->5094
/*5080*/          OPC_CheckComplexPat, /*CP*/0, /*#*/1, // SelectAddr:$src2 #3 #4
/*5083*/          OPC_EmitMergeInputChains1_0,
/*5084*/          OPC_MorphNodeTo2, TARGET_VAL(MSP430::XOR8rm), 0|OPFL_Chain|OPFL_MemRefs,
                      MVT::i8, MVT::i16, 3/*#Ops*/, 2, 3, 4, 
                  // Src: (xor:i8 (ld:i8 addr:iPTR:$src2)<<P:Predicate_unindexedload>><<P:Predicate_load>>, GR8:i8:$src) - Complexity = 16
                  // Dst: (XOR8rm:i8:i16 GR8:i8:$src, addr:i16:$src2)
/*5094*/        /*SwitchType*/ 14, MVT::i16,// ->5110
/*5096*/          OPC_CheckComplexPat, /*CP*/0, /*#*/1, // SelectAddr:$src2 #3 #4
/*5099*/          OPC_EmitMergeInputChains1_0,
/*5100*/          OPC_MorphNodeTo2, TARGET_VAL(MSP430::XOR16rm), 0|OPFL_Chain|OPFL_MemRefs,
                      MVT::i16, MVT::i16, 3/*#Ops*/, 2, 3, 4, 
                  // Src: (xor:i16 (ld:i16 addr:iPTR:$src2)<<P:Predicate_unindexedload>><<P:Predicate_load>>, GR16:i16:$src) - Complexity = 16
                  // Dst: (XOR16rm:i16:i16 GR16:i16:$src, addr:i16:$src2)
/*5110*/        0, // EndSwitchType
/*5111*/      /*Scope*/ 62, /*->5174*/
/*5112*/        OPC_RecordChild0, // #0 = $src
/*5113*/        OPC_RecordChild1, // #1 = $src2
/*5114*/        OPC_Scope, 33, /*->5149*/ // 3 children in Scope
/*5116*/          OPC_MoveChild1,
/*5117*/          OPC_CheckOpcode, TARGET_VAL(ISD::Constant),
/*5120*/          OPC_MoveParent,
/*5121*/          OPC_SwitchType /*2 cases */, 11, MVT::i8,// ->5135
/*5124*/            OPC_EmitConvertToTarget, 1,
/*5126*/            OPC_MorphNodeTo2, TARGET_VAL(MSP430::XOR8ri), 0,
                        MVT::i8, MVT::i16, 2/*#Ops*/, 0, 2, 
                    // Src: (xor:i8 GR8:i8:$src, (imm:i8):$src2) - Complexity = 6
                    // Dst: (XOR8ri:i8:i16 GR8:i8:$src, (imm:i8):$src2)
/*5135*/          /*SwitchType*/ 11, MVT::i16,// ->5148
/*5137*/            OPC_EmitConvertToTarget, 1,
/*5139*/            OPC_MorphNodeTo2, TARGET_VAL(MSP430::XOR16ri), 0,
                        MVT::i16, MVT::i16, 2/*#Ops*/, 0, 2, 
                    // Src: (xor:i16 GR16:i16:$src, (imm:i16):$src2) - Complexity = 6
                    // Dst: (XOR16ri:i16:i16 GR16:i16:$src, (imm:i16):$src2)
/*5148*/          0, // EndSwitchType
/*5149*/        /*Scope*/ 11, /*->5161*/
/*5150*/          OPC_CheckType, MVT::i8,
/*5152*/          OPC_MorphNodeTo2, TARGET_VAL(MSP430::XOR8rr), 0,
                      MVT::i8, MVT::i16, 2/*#Ops*/, 0, 1, 
                  // Src: (xor:i8 GR8:i8:$src, GR8:i8:$src2) - Complexity = 3
                  // Dst: (XOR8rr:i8:i16 GR8:i8:$src, GR8:i8:$src2)
/*5161*/        /*Scope*/ 11, /*->5173*/
/*5162*/          OPC_CheckType, MVT::i16,
/*5164*/          OPC_MorphNodeTo2, TARGET_VAL(MSP430::XOR16rr), 0,
                      MVT::i16, MVT::i16, 2/*#Ops*/, 0, 1, 
                  // Src: (xor:i16 GR16:i16:$src, GR16:i16:$src2) - Complexity = 3
                  // Dst: (XOR16rr:i16:i16 GR16:i16:$src, GR16:i16:$src2)
/*5173*/        0, /*End of Scope*/
/*5174*/      0, /*End of Scope*/
/*5175*/    /*SwitchOpcode*/ 113, TARGET_VAL(ISD::SUB),// ->5291
/*5178*/      OPC_RecordChild0, // #0 = $src
/*5179*/      OPC_Scope, 47, /*->5228*/ // 2 children in Scope
/*5181*/        OPC_MoveChild1,
/*5182*/        OPC_CheckOpcode, TARGET_VAL(ISD::LOAD),
/*5185*/        OPC_RecordMemRef,
/*5186*/        OPC_RecordNode, // #1 = 'ld' chained node
/*5187*/        OPC_CheckFoldableChainNode,
/*5188*/        OPC_RecordChild1, // #2 = $src2
/*5189*/        OPC_CheckPredicate, 0, // Predicate_unindexedload
/*5191*/        OPC_CheckPredicate, 1, // Predicate_load
/*5193*/        OPC_MoveParent,
/*5194*/        OPC_SwitchType /*2 cases */, 14, MVT::i8,// ->5211
/*5197*/          OPC_CheckComplexPat, /*CP*/0, /*#*/2, // SelectAddr:$src2 #3 #4
/*5200*/          OPC_EmitMergeInputChains1_1,
/*5201*/          OPC_MorphNodeTo2, TARGET_VAL(MSP430::SUB8rm), 0|OPFL_Chain|OPFL_MemRefs,
                      MVT::i8, MVT::i16, 3/*#Ops*/, 0, 3, 4, 
                  // Src: (sub:i8 GR8:i8:$src, (ld:i8 addr:iPTR:$src2)<<P:Predicate_unindexedload>><<P:Predicate_load>>) - Complexity = 16
                  // Dst: (SUB8rm:i8:i16 GR8:i8:$src, addr:i16:$src2)
/*5211*/        /*SwitchType*/ 14, MVT::i16,// ->5227
/*5213*/          OPC_CheckComplexPat, /*CP*/0, /*#*/2, // SelectAddr:$src2 #3 #4
/*5216*/          OPC_EmitMergeInputChains1_1,
/*5217*/          OPC_MorphNodeTo2, TARGET_VAL(MSP430::SUB16rm), 0|OPFL_Chain|OPFL_MemRefs,
                      MVT::i16, MVT::i16, 3/*#Ops*/, 0, 3, 4, 
                  // Src: (sub:i16 GR16:i16:$src, (ld:i16 addr:iPTR:$src2)<<P:Predicate_unindexedload>><<P:Predicate_load>>) - Complexity = 16
                  // Dst: (SUB16rm:i16:i16 GR16:i16:$src, addr:i16:$src2)
/*5227*/        0, // EndSwitchType
/*5228*/      /*Scope*/ 61, /*->5290*/
/*5229*/        OPC_RecordChild1, // #1 = $src2
/*5230*/        OPC_Scope, 33, /*->5265*/ // 3 children in Scope
/*5232*/          OPC_MoveChild1,
/*5233*/          OPC_CheckOpcode, TARGET_VAL(ISD::Constant),
/*5236*/          OPC_MoveParent,
/*5237*/          OPC_SwitchType /*2 cases */, 11, MVT::i8,// ->5251
/*5240*/            OPC_EmitConvertToTarget, 1,
/*5242*/            OPC_MorphNodeTo2, TARGET_VAL(MSP430::SUB8ri), 0,
                        MVT::i8, MVT::i16, 2/*#Ops*/, 0, 2, 
                    // Src: (sub:i8 GR8:i8:$src, (imm:i8):$src2) - Complexity = 6
                    // Dst: (SUB8ri:i8:i16 GR8:i8:$src, (imm:i8):$src2)
/*5251*/          /*SwitchType*/ 11, MVT::i16,// ->5264
/*5253*/            OPC_EmitConvertToTarget, 1,
/*5255*/            OPC_MorphNodeTo2, TARGET_VAL(MSP430::SUB16ri), 0,
                        MVT::i16, MVT::i16, 2/*#Ops*/, 0, 2, 
                    // Src: (sub:i16 GR16:i16:$src, (imm:i16):$src2) - Complexity = 6
                    // Dst: (SUB16ri:i16:i16 GR16:i16:$src, (imm:i16):$src2)
/*5264*/          0, // EndSwitchType
/*5265*/        /*Scope*/ 11, /*->5277*/
/*5266*/          OPC_CheckType, MVT::i8,
/*5268*/          OPC_MorphNodeTo2, TARGET_VAL(MSP430::SUB8rr), 0,
                      MVT::i8, MVT::i16, 2/*#Ops*/, 0, 1, 
                  // Src: (sub:i8 GR8:i8:$src, GR8:i8:$src2) - Complexity = 3
                  // Dst: (SUB8rr:i8:i16 GR8:i8:$src, GR8:i8:$src2)
/*5277*/        /*Scope*/ 11, /*->5289*/
/*5278*/          OPC_CheckType, MVT::i16,
/*5280*/          OPC_MorphNodeTo2, TARGET_VAL(MSP430::SUB16rr), 0,
                      MVT::i16, MVT::i16, 2/*#Ops*/, 0, 1, 
                  // Src: (sub:i16 GR16:i16:$src, GR16:i16:$src2) - Complexity = 3
                  // Dst: (SUB16rr:i16:i16 GR16:i16:$src, GR16:i16:$src2)
/*5289*/        0, /*End of Scope*/
/*5290*/      0, /*End of Scope*/
/*5291*/    /*SwitchOpcode*/ 114, TARGET_VAL(ISD::SUBE),// ->5408
/*5294*/      OPC_CaptureGlueInput,
/*5295*/      OPC_RecordChild0, // #0 = $src
/*5296*/      OPC_Scope, 47, /*->5345*/ // 2 children in Scope
/*5298*/        OPC_MoveChild1,
/*5299*/        OPC_CheckOpcode, TARGET_VAL(ISD::LOAD),
/*5302*/        OPC_RecordMemRef,
/*5303*/        OPC_RecordNode, // #1 = 'ld' chained node
/*5304*/        OPC_CheckFoldableChainNode,
/*5305*/        OPC_RecordChild1, // #2 = $src2
/*5306*/        OPC_CheckPredicate, 0, // Predicate_unindexedload
/*5308*/        OPC_CheckPredicate, 1, // Predicate_load
/*5310*/        OPC_MoveParent,
/*5311*/        OPC_SwitchType /*2 cases */, 14, MVT::i8,// ->5328
/*5314*/          OPC_CheckComplexPat, /*CP*/0, /*#*/2, // SelectAddr:$src2 #3 #4
/*5317*/          OPC_EmitMergeInputChains1_1,
/*5318*/          OPC_MorphNodeTo2, TARGET_VAL(MSP430::SBC8rm), 0|OPFL_Chain|OPFL_GlueInput|OPFL_GlueOutput|OPFL_MemRefs,
                      MVT::i8, MVT::i16, 3/*#Ops*/, 0, 3, 4, 
                  // Src: (sube:i8 GR8:i8:$src, (ld:i8 addr:iPTR:$src2)<<P:Predicate_unindexedload>><<P:Predicate_load>>) - Complexity = 16
                  // Dst: (SBC8rm:i8:i16 GR8:i8:$src, addr:i16:$src2)
/*5328*/        /*SwitchType*/ 14, MVT::i16,// ->5344
/*5330*/          OPC_CheckComplexPat, /*CP*/0, /*#*/2, // SelectAddr:$src2 #3 #4
/*5333*/          OPC_EmitMergeInputChains1_1,
/*5334*/          OPC_MorphNodeTo2, TARGET_VAL(MSP430::SBC16rm), 0|OPFL_Chain|OPFL_GlueInput|OPFL_GlueOutput|OPFL_MemRefs,
                      MVT::i16, MVT::i16, 3/*#Ops*/, 0, 3, 4, 
                  // Src: (sube:i16 GR16:i16:$src, (ld:i16 addr:iPTR:$src2)<<P:Predicate_unindexedload>><<P:Predicate_load>>) - Complexity = 16
                  // Dst: (SBC16rm:i16:i16 GR16:i16:$src, addr:i16:$src2)
/*5344*/        0, // EndSwitchType
/*5345*/      /*Scope*/ 61, /*->5407*/
/*5346*/        OPC_RecordChild1, // #1 = $src2
/*5347*/        OPC_Scope, 33, /*->5382*/ // 3 children in Scope
/*5349*/          OPC_MoveChild1,
/*5350*/          OPC_CheckOpcode, TARGET_VAL(ISD::Constant),
/*5353*/          OPC_MoveParent,
/*5354*/          OPC_SwitchType /*2 cases */, 11, MVT::i8,// ->5368
/*5357*/            OPC_EmitConvertToTarget, 1,
/*5359*/            OPC_MorphNodeTo2, TARGET_VAL(MSP430::SBC8ri), 0|OPFL_GlueInput|OPFL_GlueOutput,
                        MVT::i8, MVT::i16, 2/*#Ops*/, 0, 2, 
                    // Src: (sube:i8 GR8:i8:$src, (imm:i8):$src2) - Complexity = 6
                    // Dst: (SBC8ri:i8:i16 GR8:i8:$src, (imm:i8):$src2)
/*5368*/          /*SwitchType*/ 11, MVT::i16,// ->5381
/*5370*/            OPC_EmitConvertToTarget, 1,
/*5372*/            OPC_MorphNodeTo2, TARGET_VAL(MSP430::SBC16ri), 0|OPFL_GlueInput|OPFL_GlueOutput,
                        MVT::i16, MVT::i16, 2/*#Ops*/, 0, 2, 
                    // Src: (sube:i16 GR16:i16:$src, (imm:i16):$src2) - Complexity = 6
                    // Dst: (SBC16ri:i16:i16 GR16:i16:$src, (imm:i16):$src2)
/*5381*/          0, // EndSwitchType
/*5382*/        /*Scope*/ 11, /*->5394*/
/*5383*/          OPC_CheckType, MVT::i8,
/*5385*/          OPC_MorphNodeTo2, TARGET_VAL(MSP430::SBC8rr), 0|OPFL_GlueInput|OPFL_GlueOutput,
                      MVT::i8, MVT::i16, 2/*#Ops*/, 0, 1, 
                  // Src: (sube:i8 GR8:i8:$src, GR8:i8:$src2) - Complexity = 3
                  // Dst: (SBC8rr:i8:i16 GR8:i8:$src, GR8:i8:$src2)
/*5394*/        /*Scope*/ 11, /*->5406*/
/*5395*/          OPC_CheckType, MVT::i16,
/*5397*/          OPC_MorphNodeTo2, TARGET_VAL(MSP430::SBC16rr), 0|OPFL_GlueInput|OPFL_GlueOutput,
                      MVT::i16, MVT::i16, 2/*#Ops*/, 0, 1, 
                  // Src: (sube:i16 GR16:i16:$src, GR16:i16:$src2) - Complexity = 3
                  // Dst: (SBC16rr:i16:i16 GR16:i16:$src, GR16:i16:$src2)
/*5406*/        0, /*End of Scope*/
/*5407*/      0, /*End of Scope*/
/*5408*/    /*SwitchOpcode*/ 35|128,1/*163*/, TARGET_VAL(ISD::ADDC),// ->5575
/*5412*/      OPC_Scope, 48, /*->5462*/ // 3 children in Scope
/*5414*/        OPC_RecordChild0, // #0 = $src
/*5415*/        OPC_MoveChild1,
/*5416*/        OPC_CheckOpcode, TARGET_VAL(ISD::LOAD),
/*5419*/        OPC_RecordMemRef,
/*5420*/        OPC_RecordNode, // #1 = 'ld' chained node
/*5421*/        OPC_CheckFoldableChainNode,
/*5422*/        OPC_RecordChild1, // #2 = $src2
/*5423*/        OPC_CheckPredicate, 0, // Predicate_unindexedload
/*5425*/        OPC_CheckPredicate, 1, // Predicate_load
/*5427*/        OPC_MoveParent,
/*5428*/        OPC_SwitchType /*2 cases */, 14, MVT::i16,// ->5445
/*5431*/          OPC_CheckComplexPat, /*CP*/0, /*#*/2, // SelectAddr:$src2 #3 #4
/*5434*/          OPC_EmitMergeInputChains1_1,
/*5435*/          OPC_MorphNodeTo2, TARGET_VAL(MSP430::ADD16rm), 0|OPFL_Chain|OPFL_GlueOutput|OPFL_MemRefs,
                      MVT::i16, MVT::i16, 3/*#Ops*/, 0, 3, 4, 
                  // Src: (addc:i16 GR16:i16:$src, (ld:i16 addr:iPTR:$src2)<<P:Predicate_unindexedload>><<P:Predicate_load>>) - Complexity = 16
                  // Dst: (ADD16rm:i16:i16 GR16:i16:$src, addr:i16:$src2)
/*5445*/        /*SwitchType*/ 14, MVT::i8,// ->5461
/*5447*/          OPC_CheckComplexPat, /*CP*/0, /*#*/2, // SelectAddr:$src2 #3 #4
/*5450*/          OPC_EmitMergeInputChains1_1,
/*5451*/          OPC_MorphNodeTo2, TARGET_VAL(MSP430::ADD8rm), 0|OPFL_Chain|OPFL_GlueOutput|OPFL_MemRefs,
                      MVT::i8, MVT::i16, 3/*#Ops*/, 0, 3, 4, 
                  // Src: (addc:i8 GR8:i8:$src, (ld:i8 addr:iPTR:$src2)<<P:Predicate_unindexedload>><<P:Predicate_load>>) - Complexity = 16
                  // Dst: (ADD8rm:i8:i16 GR8:i8:$src, addr:i16:$src2)
/*5461*/        0, // EndSwitchType
/*5462*/      /*Scope*/ 48, /*->5511*/
/*5463*/        OPC_MoveChild0,
/*5464*/        OPC_CheckOpcode, TARGET_VAL(ISD::LOAD),
/*5467*/        OPC_RecordMemRef,
/*5468*/        OPC_RecordNode, // #0 = 'ld' chained node
/*5469*/        OPC_CheckFoldableChainNode,
/*5470*/        OPC_RecordChild1, // #1 = $src2
/*5471*/        OPC_CheckPredicate, 0, // Predicate_unindexedload
/*5473*/        OPC_CheckPredicate, 1, // Predicate_load
/*5475*/        OPC_MoveParent,
/*5476*/        OPC_RecordChild1, // #2 = $src
/*5477*/        OPC_SwitchType /*2 cases */, 14, MVT::i16,// ->5494
/*5480*/          OPC_CheckComplexPat, /*CP*/0, /*#*/1, // SelectAddr:$src2 #3 #4
/*5483*/          OPC_EmitMergeInputChains1_0,
/*5484*/          OPC_MorphNodeTo2, TARGET_VAL(MSP430::ADD16rm), 0|OPFL_Chain|OPFL_GlueOutput|OPFL_MemRefs,
                      MVT::i16, MVT::i16, 3/*#Ops*/, 2, 3, 4, 
                  // Src: (addc:i16 (ld:i16 addr:iPTR:$src2)<<P:Predicate_unindexedload>><<P:Predicate_load>>, GR16:i16:$src) - Complexity = 16
                  // Dst: (ADD16rm:i16:i16 GR16:i16:$src, addr:i16:$src2)
/*5494*/        /*SwitchType*/ 14, MVT::i8,// ->5510
/*5496*/          OPC_CheckComplexPat, /*CP*/0, /*#*/1, // SelectAddr:$src2 #3 #4
/*5499*/          OPC_EmitMergeInputChains1_0,
/*5500*/          OPC_MorphNodeTo2, TARGET_VAL(MSP430::ADD8rm), 0|OPFL_Chain|OPFL_GlueOutput|OPFL_MemRefs,
                      MVT::i8, MVT::i16, 3/*#Ops*/, 2, 3, 4, 
                  // Src: (addc:i8 (ld:i8 addr:iPTR:$src2)<<P:Predicate_unindexedload>><<P:Predicate_load>>, GR8:i8:$src) - Complexity = 16
                  // Dst: (ADD8rm:i8:i16 GR8:i8:$src, addr:i16:$src2)
/*5510*/        0, // EndSwitchType
/*5511*/      /*Scope*/ 62, /*->5574*/
/*5512*/        OPC_RecordChild0, // #0 = $src
/*5513*/        OPC_RecordChild1, // #1 = $src2
/*5514*/        OPC_Scope, 33, /*->5549*/ // 3 children in Scope
/*5516*/          OPC_MoveChild1,
/*5517*/          OPC_CheckOpcode, TARGET_VAL(ISD::Constant),
/*5520*/          OPC_MoveParent,
/*5521*/          OPC_SwitchType /*2 cases */, 11, MVT::i16,// ->5535
/*5524*/            OPC_EmitConvertToTarget, 1,
/*5526*/            OPC_MorphNodeTo2, TARGET_VAL(MSP430::ADD16ri), 0|OPFL_GlueOutput,
                        MVT::i16, MVT::i16, 2/*#Ops*/, 0, 2, 
                    // Src: (addc:i16 GR16:i16:$src, (imm:i16):$src2) - Complexity = 6
                    // Dst: (ADD16ri:i16:i16 GR16:i16:$src, (imm:i16):$src2)
/*5535*/          /*SwitchType*/ 11, MVT::i8,// ->5548
/*5537*/            OPC_EmitConvertToTarget, 1,
/*5539*/            OPC_MorphNodeTo2, TARGET_VAL(MSP430::ADD8ri), 0|OPFL_GlueOutput,
                        MVT::i8, MVT::i16, 2/*#Ops*/, 0, 2, 
                    // Src: (addc:i8 GR8:i8:$src, (imm:i8):$src2) - Complexity = 6
                    // Dst: (ADD8ri:i8:i16 GR8:i8:$src, (imm:i8):$src2)
/*5548*/          0, // EndSwitchType
/*5549*/        /*Scope*/ 11, /*->5561*/
/*5550*/          OPC_CheckType, MVT::i16,
/*5552*/          OPC_MorphNodeTo2, TARGET_VAL(MSP430::ADD16rr), 0|OPFL_GlueOutput,
                      MVT::i16, MVT::i16, 2/*#Ops*/, 0, 1, 
                  // Src: (addc:i16 GR16:i16:$src, GR16:i16:$src2) - Complexity = 3
                  // Dst: (ADD16rr:i16:i16 GR16:i16:$src, GR16:i16:$src2)
/*5561*/        /*Scope*/ 11, /*->5573*/
/*5562*/          OPC_CheckType, MVT::i8,
/*5564*/          OPC_MorphNodeTo2, TARGET_VAL(MSP430::ADD8rr), 0|OPFL_GlueOutput,
                      MVT::i8, MVT::i16, 2/*#Ops*/, 0, 1, 
                  // Src: (addc:i8 GR8:i8:$src, GR8:i8:$src2) - Complexity = 3
                  // Dst: (ADD8rr:i8:i16 GR8:i8:$src, GR8:i8:$src2)
/*5573*/        0, /*End of Scope*/
/*5574*/      0, /*End of Scope*/
/*5575*/    /*SwitchOpcode*/ 113, TARGET_VAL(ISD::SUBC),// ->5691
/*5578*/      OPC_RecordChild0, // #0 = $src
/*5579*/      OPC_Scope, 47, /*->5628*/ // 2 children in Scope
/*5581*/        OPC_MoveChild1,
/*5582*/        OPC_CheckOpcode, TARGET_VAL(ISD::LOAD),
/*5585*/        OPC_RecordMemRef,
/*5586*/        OPC_RecordNode, // #1 = 'ld' chained node
/*5587*/        OPC_CheckFoldableChainNode,
/*5588*/        OPC_RecordChild1, // #2 = $src2
/*5589*/        OPC_CheckPredicate, 0, // Predicate_unindexedload
/*5591*/        OPC_CheckPredicate, 1, // Predicate_load
/*5593*/        OPC_MoveParent,
/*5594*/        OPC_SwitchType /*2 cases */, 14, MVT::i16,// ->5611
/*5597*/          OPC_CheckComplexPat, /*CP*/0, /*#*/2, // SelectAddr:$src2 #3 #4
/*5600*/          OPC_EmitMergeInputChains1_1,
/*5601*/          OPC_MorphNodeTo2, TARGET_VAL(MSP430::SUB16rm), 0|OPFL_Chain|OPFL_GlueOutput|OPFL_MemRefs,
                      MVT::i16, MVT::i16, 3/*#Ops*/, 0, 3, 4, 
                  // Src: (subc:i16 GR16:i16:$src, (ld:i16 addr:iPTR:$src2)<<P:Predicate_unindexedload>><<P:Predicate_load>>) - Complexity = 16
                  // Dst: (SUB16rm:i16:i16 GR16:i16:$src, addr:i16:$src2)
/*5611*/        /*SwitchType*/ 14, MVT::i8,// ->5627
/*5613*/          OPC_CheckComplexPat, /*CP*/0, /*#*/2, // SelectAddr:$src2 #3 #4
/*5616*/          OPC_EmitMergeInputChains1_1,
/*5617*/          OPC_MorphNodeTo2, TARGET_VAL(MSP430::SUB8rm), 0|OPFL_Chain|OPFL_GlueOutput|OPFL_MemRefs,
                      MVT::i8, MVT::i16, 3/*#Ops*/, 0, 3, 4, 
                  // Src: (subc:i8 GR8:i8:$src, (ld:i8 addr:iPTR:$src2)<<P:Predicate_unindexedload>><<P:Predicate_load>>) - Complexity = 16
                  // Dst: (SUB8rm:i8:i16 GR8:i8:$src, addr:i16:$src2)
/*5627*/        0, // EndSwitchType
/*5628*/      /*Scope*/ 61, /*->5690*/
/*5629*/        OPC_RecordChild1, // #1 = $src2
/*5630*/        OPC_Scope, 33, /*->5665*/ // 3 children in Scope
/*5632*/          OPC_MoveChild1,
/*5633*/          OPC_CheckOpcode, TARGET_VAL(ISD::Constant),
/*5636*/          OPC_MoveParent,
/*5637*/          OPC_SwitchType /*2 cases */, 11, MVT::i16,// ->5651
/*5640*/            OPC_EmitConvertToTarget, 1,
/*5642*/            OPC_MorphNodeTo2, TARGET_VAL(MSP430::SUB16ri), 0|OPFL_GlueOutput,
                        MVT::i16, MVT::i16, 2/*#Ops*/, 0, 2, 
                    // Src: (subc:i16 GR16:i16:$src, (imm:i16):$src2) - Complexity = 6
                    // Dst: (SUB16ri:i16:i16 GR16:i16:$src, (imm:i16):$src2)
/*5651*/          /*SwitchType*/ 11, MVT::i8,// ->5664
/*5653*/            OPC_EmitConvertToTarget, 1,
/*5655*/            OPC_MorphNodeTo2, TARGET_VAL(MSP430::SUB8ri), 0|OPFL_GlueOutput,
                        MVT::i8, MVT::i16, 2/*#Ops*/, 0, 2, 
                    // Src: (subc:i8 GR8:i8:$src, (imm:i8):$src2) - Complexity = 6
                    // Dst: (SUB8ri:i8:i16 GR8:i8:$src, (imm:i8):$src2)
/*5664*/          0, // EndSwitchType
/*5665*/        /*Scope*/ 11, /*->5677*/
/*5666*/          OPC_CheckType, MVT::i16,
/*5668*/          OPC_MorphNodeTo2, TARGET_VAL(MSP430::SUB16rr), 0|OPFL_GlueOutput,
                      MVT::i16, MVT::i16, 2/*#Ops*/, 0, 1, 
                  // Src: (subc:i16 GR16:i16:$src, GR16:i16:$src2) - Complexity = 3
                  // Dst: (SUB16rr:i16:i16 GR16:i16:$src, GR16:i16:$src2)
/*5677*/        /*Scope*/ 11, /*->5689*/
/*5678*/          OPC_CheckType, MVT::i8,
/*5680*/          OPC_MorphNodeTo2, TARGET_VAL(MSP430::SUB8rr), 0|OPFL_GlueOutput,
                      MVT::i8, MVT::i16, 2/*#Ops*/, 0, 1, 
                  // Src: (subc:i8 GR8:i8:$src, GR8:i8:$src2) - Complexity = 3
                  // Dst: (SUB8rr:i8:i16 GR8:i8:$src, GR8:i8:$src2)
/*5689*/        0, /*End of Scope*/
/*5690*/      0, /*End of Scope*/
/*5691*/    /*SwitchOpcode*/ 78, TARGET_VAL(ISD::LOAD),// ->5772
/*5694*/      OPC_RecordMemRef,
/*5695*/      OPC_RecordNode, // #0 = 'ld' chained node
/*5696*/      OPC_RecordChild1, // #1 = $src
/*5697*/      OPC_CheckPredicate, 0, // Predicate_unindexedload
/*5699*/      OPC_Scope, 32, /*->5733*/ // 3 children in Scope
/*5701*/        OPC_CheckPredicate, 1, // Predicate_load
/*5703*/        OPC_SwitchType /*2 cases */, 12, MVT::i8,// ->5718
/*5706*/          OPC_CheckComplexPat, /*CP*/0, /*#*/1, // SelectAddr:$src #2 #3
/*5709*/          OPC_EmitMergeInputChains1_0,
/*5710*/          OPC_MorphNodeTo1, TARGET_VAL(MSP430::MOV8rm), 0|OPFL_Chain|OPFL_MemRefs,
                      MVT::i8, 2/*#Ops*/, 2, 3, 
                  // Src: (ld:i8 addr:iPTR:$src)<<P:Predicate_unindexedload>><<P:Predicate_load>> - Complexity = 13
                  // Dst: (MOV8rm:i8 addr:i16:$src)
/*5718*/        /*SwitchType*/ 12, MVT::i16,// ->5732
/*5720*/          OPC_CheckComplexPat, /*CP*/0, /*#*/1, // SelectAddr:$src #2 #3
/*5723*/          OPC_EmitMergeInputChains1_0,
/*5724*/          OPC_MorphNodeTo1, TARGET_VAL(MSP430::MOV16rm), 0|OPFL_Chain|OPFL_MemRefs,
                      MVT::i16, 2/*#Ops*/, 2, 3, 
                  // Src: (ld:i16 addr:iPTR:$src)<<P:Predicate_unindexedload>><<P:Predicate_load>> - Complexity = 13
                  // Dst: (MOV16rm:i16 addr:i16:$src)
/*5732*/        0, // EndSwitchType
/*5733*/      /*Scope*/ 18, /*->5752*/
/*5734*/        OPC_CheckPredicate, 5, // Predicate_zextload
/*5736*/        OPC_CheckPredicate, 6, // Predicate_zextloadi8
/*5738*/        OPC_CheckType, MVT::i16,
/*5740*/        OPC_CheckComplexPat, /*CP*/0, /*#*/1, // SelectAddr:$src #2 #3
/*5743*/        OPC_EmitMergeInputChains1_0,
/*5744*/        OPC_MorphNodeTo1, TARGET_VAL(MSP430::MOVZX16rm8), 0|OPFL_Chain|OPFL_MemRefs,
                    MVT::i16, 2/*#Ops*/, 2, 3, 
                // Src: (ld:i16 addr:iPTR:$src)<<P:Predicate_unindexedload>><<P:Predicate_zextload>><<P:Predicate_zextloadi8>> - Complexity = 13
                // Dst: (MOVZX16rm8:i16 addr:i16:$src)
/*5752*/      /*Scope*/ 18, /*->5771*/
/*5753*/        OPC_CheckPredicate, 7, // Predicate_extload
/*5755*/        OPC_CheckPredicate, 6, // Predicate_extloadi8
/*5757*/        OPC_CheckType, MVT::i16,
/*5759*/        OPC_CheckComplexPat, /*CP*/0, /*#*/1, // SelectAddr:$src #2 #3
/*5762*/        OPC_EmitMergeInputChains1_0,
/*5763*/        OPC_MorphNodeTo1, TARGET_VAL(MSP430::MOVZX16rm8), 0|OPFL_Chain|OPFL_MemRefs,
                    MVT::i16, 2/*#Ops*/, 2, 3, 
                // Src: (ld:i16 addr:iPTR:$src)<<P:Predicate_unindexedload>><<P:Predicate_extload>><<P:Predicate_extloadi8>> - Complexity = 13
                // Dst: (MOVZX16rm8:i16 addr:i16:$src)
/*5771*/      0, /*End of Scope*/
/*5772*/    /*SwitchOpcode*/ 23, TARGET_VAL(ISD::CALLSEQ_END),// ->5798
/*5775*/      OPC_RecordNode, // #0 = 'MSP430callseq_end' chained node
/*5776*/      OPC_CaptureGlueInput,
/*5777*/      OPC_RecordChild1, // #1 = $amt1
/*5778*/      OPC_MoveChild1,
/*5779*/      OPC_CheckOpcode, TARGET_VAL(ISD::TargetConstant),
/*5782*/      OPC_MoveParent,
/*5783*/      OPC_RecordChild2, // #2 = $amt2
/*5784*/      OPC_MoveChild2,
/*5785*/      OPC_CheckOpcode, TARGET_VAL(ISD::TargetConstant),
/*5788*/      OPC_MoveParent,
/*5789*/      OPC_EmitMergeInputChains1_0,
/*5790*/      OPC_MorphNodeTo1, TARGET_VAL(MSP430::ADJCALLSTACKUP), 0|OPFL_Chain|OPFL_GlueInput|OPFL_GlueOutput,
                  MVT::i16, 2/*#Ops*/, 1, 2, 
              // Src: (MSP430callseq_end (timm:i16):$amt1, (timm:i16):$amt2) - Complexity = 9
              // Dst: (ADJCALLSTACKUP:i16 (timm:i16):$amt1, (timm:i16):$amt2)
/*5798*/    /*SwitchOpcode*/ 15, TARGET_VAL(ISD::CALLSEQ_START),// ->5816
/*5801*/      OPC_RecordNode, // #0 = 'MSP430callseq_start' chained node
/*5802*/      OPC_RecordChild1, // #1 = $amt
/*5803*/      OPC_MoveChild1,
/*5804*/      OPC_CheckOpcode, TARGET_VAL(ISD::TargetConstant),
/*5807*/      OPC_MoveParent,
/*5808*/      OPC_EmitMergeInputChains1_0,
/*5809*/      OPC_MorphNodeTo1, TARGET_VAL(MSP430::ADJCALLSTACKDOWN), 0|OPFL_Chain|OPFL_GlueOutput,
                  MVT::i16, 1/*#Ops*/, 1, 
              // Src: (MSP430callseq_start (timm:i16):$amt) - Complexity = 6
              // Dst: (ADJCALLSTACKDOWN:i16 (timm:i16):$amt)
/*5816*/    /*SwitchOpcode*/ 24, TARGET_VAL(MSP430ISD::BR_CC),// ->5843
/*5819*/      OPC_RecordNode, // #0 = 'MSP430brcc' chained node
/*5820*/      OPC_CaptureGlueInput,
/*5821*/      OPC_RecordChild1, // #1 = $dst
/*5822*/      OPC_MoveChild1,
/*5823*/      OPC_CheckOpcode, TARGET_VAL(ISD::BasicBlock),
/*5826*/      OPC_MoveParent,
/*5827*/      OPC_RecordChild2, // #2 = $cc
/*5828*/      OPC_MoveChild2,
/*5829*/      OPC_CheckOpcode, TARGET_VAL(ISD::Constant),
/*5832*/      OPC_MoveParent,
/*5833*/      OPC_EmitMergeInputChains1_0,
/*5834*/      OPC_EmitConvertToTarget, 2,
/*5836*/      OPC_MorphNodeTo0, TARGET_VAL(MSP430::JCC), 0|OPFL_Chain|OPFL_GlueInput,
                  2/*#Ops*/, 1, 3, 
              // Src: (MSP430brcc (bb:Other):$dst, (imm:i8):$cc) - Complexity = 6
              // Dst: (JCC (bb:Other):$dst, (imm:i8):$cc)
/*5843*/    /*SwitchOpcode*/ 48, TARGET_VAL(ISD::ZERO_EXTEND),// ->5894
/*5846*/      OPC_Scope, 13, /*->5861*/ // 2 children in Scope
/*5848*/        OPC_MoveChild0,
/*5849*/        OPC_CheckOpcode, TARGET_VAL(ISD::TRUNCATE),
/*5852*/        OPC_RecordChild0, // #0 = $src
/*5853*/        OPC_MoveParent,
/*5854*/        OPC_MorphNodeTo1, TARGET_VAL(MSP430::ZEXT16r), 0,
                    MVT::i16, 1/*#Ops*/, 0, 
                // Src: (zext:i16 (trunc:i8 GR16:i16:$src)) - Complexity = 6
                // Dst: (ZEXT16r:i16 GR16:i16:$src)
/*5861*/      /*Scope*/ 31, /*->5893*/
/*5862*/        OPC_RecordChild0, // #0 = $src
/*5863*/        OPC_Scope, 19, /*->5884*/ // 2 children in Scope
/*5865*/          OPC_MoveChild0,
/*5866*/          OPC_CheckPredicate, 8, // Predicate_def8
/*5868*/          OPC_MoveParent,
/*5869*/          OPC_EmitInteger, MVT::i16, 0, 
/*5872*/          OPC_EmitInteger, MVT::i32, MSP430::subreg_8bit,
/*5875*/          OPC_MorphNodeTo1, TARGET_VAL(TargetOpcode::SUBREG_TO_REG), 0,
                      MVT::i16, 3/*#Ops*/, 1, 0, 2, 
                  // Src: (zext:i16 GR8:i8<<P:Predicate_def8>>:$src) - Complexity = 4
                  // Dst: (SUBREG_TO_REG:i16 0:i16, GR8:i8:$src, subreg_8bit:i32)
/*5884*/        /*Scope*/ 7, /*->5892*/
/*5885*/          OPC_MorphNodeTo1, TARGET_VAL(MSP430::MOVZX16rr8), 0,
                      MVT::i16, 1/*#Ops*/, 0, 
                  // Src: (zext:i16 GR8:i8:$src) - Complexity = 3
                  // Dst: (MOVZX16rr8:i16 GR8:i8:$src)
/*5892*/        0, /*End of Scope*/
/*5893*/      0, /*End of Scope*/
/*5894*/    /*SwitchOpcode*/ 43, TARGET_VAL(MSP430ISD::Wrapper),// ->5940
/*5897*/      OPC_RecordChild0, // #0 = $dst
/*5898*/      OPC_MoveChild0,
/*5899*/      OPC_SwitchOpcode /*3 cases */, 10, TARGET_VAL(ISD::TargetGlobalAddress),// ->5913
/*5903*/        OPC_MoveParent,
/*5904*/        OPC_CheckType, MVT::i16,
/*5906*/        OPC_MorphNodeTo1, TARGET_VAL(MSP430::MOV16ri), 0,
                    MVT::i16, 1/*#Ops*/, 0, 
                // Src: (MSP430Wrapper:i16 (tglobaladdr:i16):$dst) - Complexity = 6
                // Dst: (MOV16ri:i16 (tglobaladdr:i16):$dst)
/*5913*/      /*SwitchOpcode*/ 10, TARGET_VAL(ISD::TargetExternalSymbol),// ->5926
/*5916*/        OPC_MoveParent,
/*5917*/        OPC_CheckType, MVT::i16,
/*5919*/        OPC_MorphNodeTo1, TARGET_VAL(MSP430::MOV16ri), 0,
                    MVT::i16, 1/*#Ops*/, 0, 
                // Src: (MSP430Wrapper:i16 (texternalsym:i16):$dst) - Complexity = 6
                // Dst: (MOV16ri:i16 (texternalsym:i16):$dst)
/*5926*/      /*SwitchOpcode*/ 10, TARGET_VAL(ISD::TargetBlockAddress),// ->5939
/*5929*/        OPC_MoveParent,
/*5930*/        OPC_CheckType, MVT::i16,
/*5932*/        OPC_MorphNodeTo1, TARGET_VAL(MSP430::MOV16ri), 0,
                    MVT::i16, 1/*#Ops*/, 0, 
                // Src: (MSP430Wrapper:i16 (tblockaddress:i16):$dst) - Complexity = 6
                // Dst: (MOV16ri:i16 (tblockaddress:i16):$dst)
/*5939*/      0, // EndSwitchOpcode
/*5940*/    /*SwitchOpcode*/ 37, TARGET_VAL(MSP430ISD::SELECT_CC),// ->5980
/*5943*/      OPC_CaptureGlueInput,
/*5944*/      OPC_RecordChild0, // #0 = $src
/*5945*/      OPC_RecordChild1, // #1 = $src2
/*5946*/      OPC_RecordChild2, // #2 = $cc
/*5947*/      OPC_MoveChild2,
/*5948*/      OPC_CheckOpcode, TARGET_VAL(ISD::Constant),
/*5951*/      OPC_MoveParent,
/*5952*/      OPC_SwitchType /*2 cases */, 11, MVT::i8,// ->5966
/*5955*/        OPC_EmitConvertToTarget, 2,
/*5957*/        OPC_MorphNodeTo1, TARGET_VAL(MSP430::Select8), 0|OPFL_GlueInput,
                    MVT::i8, 3/*#Ops*/, 0, 1, 3, 
                // Src: (MSP430selectcc:i8 GR8:i8:$src, GR8:i8:$src2, (imm:i8):$cc) - Complexity = 6
                // Dst: (Select8:i8 GR8:i8:$src, GR8:i8:$src2, (imm:i8):$cc)
/*5966*/      /*SwitchType*/ 11, MVT::i16,// ->5979
/*5968*/        OPC_EmitConvertToTarget, 2,
/*5970*/        OPC_MorphNodeTo1, TARGET_VAL(MSP430::Select16), 0|OPFL_GlueInput,
                    MVT::i16, 3/*#Ops*/, 0, 1, 3, 
                // Src: (MSP430selectcc:i16 GR16:i16:$src, GR16:i16:$src2, (imm:i8):$cc) - Complexity = 6
                // Dst: (Select16:i16 GR16:i16:$src, GR16:i16:$src2, (imm:i8):$cc)
/*5979*/      0, // EndSwitchType
/*5980*/    /*SwitchOpcode*/ 8, TARGET_VAL(MSP430ISD::RET_FLAG),// ->5991
/*5983*/      OPC_RecordNode, // #0 = 'MSP430retflag' chained node
/*5984*/      OPC_CaptureGlueInput,
/*5985*/      OPC_EmitMergeInputChains1_0,
/*5986*/      OPC_MorphNodeTo0, TARGET_VAL(MSP430::RET), 0|OPFL_Chain|OPFL_GlueInput|OPFL_Variadic0,
                  0/*#Ops*/, 
              // Src: (MSP430retflag) - Complexity = 3
              // Dst: (RET)
/*5991*/    /*SwitchOpcode*/ 8, TARGET_VAL(MSP430ISD::RETI_FLAG),// ->6002
/*5994*/      OPC_RecordNode, // #0 = 'MSP430retiflag' chained node
/*5995*/      OPC_CaptureGlueInput,
/*5996*/      OPC_EmitMergeInputChains1_0,
/*5997*/      OPC_MorphNodeTo0, TARGET_VAL(MSP430::RETI), 0|OPFL_Chain|OPFL_GlueInput|OPFL_Variadic0,
                  0/*#Ops*/, 
              // Src: (MSP430retiflag) - Complexity = 3
              // Dst: (RETI)
/*6002*/    /*SwitchOpcode*/ 14, TARGET_VAL(ISD::BR),// ->6019
/*6005*/      OPC_RecordNode, // #0 = 'br' chained node
/*6006*/      OPC_RecordChild1, // #1 = $dst
/*6007*/      OPC_MoveChild1,
/*6008*/      OPC_CheckOpcode, TARGET_VAL(ISD::BasicBlock),
/*6011*/      OPC_MoveParent,
/*6012*/      OPC_EmitMergeInputChains1_0,
/*6013*/      OPC_MorphNodeTo0, TARGET_VAL(MSP430::JMP), 0|OPFL_Chain,
                  1/*#Ops*/, 1, 
              // Src: (br (bb:Other):$dst) - Complexity = 3
              // Dst: (JMP (bb:Other):$dst)
/*6019*/    /*SwitchOpcode*/ 25, TARGET_VAL(ISD::Constant),// ->6047
/*6022*/      OPC_RecordNode, // #0 = $src
/*6023*/      OPC_SwitchType /*2 cases */, 9, MVT::i8,// ->6035
/*6026*/        OPC_EmitConvertToTarget, 0,
/*6028*/        OPC_MorphNodeTo1, TARGET_VAL(MSP430::MOV8ri), 0,
                    MVT::i8, 1/*#Ops*/, 1, 
                // Src: (imm:i8):$src - Complexity = 3
                // Dst: (MOV8ri:i8 (imm:i8):$src)
/*6035*/      /*SwitchType*/ 9, MVT::i16,// ->6046
/*6037*/        OPC_EmitConvertToTarget, 0,
/*6039*/        OPC_MorphNodeTo1, TARGET_VAL(MSP430::MOV16ri), 0,
                    MVT::i16, 1/*#Ops*/, 1, 
                // Src: (imm:i16):$src - Complexity = 3
                // Dst: (MOV16ri:i16 (imm:i16):$src)
/*6046*/      0, // EndSwitchType
/*6047*/    /*SwitchOpcode*/ 23, TARGET_VAL(MSP430ISD::RRA),// ->6073
/*6050*/      OPC_RecordChild0, // #0 = $src
/*6051*/      OPC_SwitchType /*2 cases */, 8, MVT::i8,// ->6062
/*6054*/        OPC_MorphNodeTo2, TARGET_VAL(MSP430::SAR8r1), 0,
                    MVT::i8, MVT::i16, 1/*#Ops*/, 0, 
                // Src: (MSP430rra:i8 GR8:i8:$src) - Complexity = 3
                // Dst: (SAR8r1:i8:i16 GR8:i8:$src)
/*6062*/      /*SwitchType*/ 8, MVT::i16,// ->6072
/*6064*/        OPC_MorphNodeTo2, TARGET_VAL(MSP430::SAR16r1), 0,
                    MVT::i16, MVT::i16, 1/*#Ops*/, 0, 
                // Src: (MSP430rra:i16 GR16:i16:$src) - Complexity = 3
                // Dst: (SAR16r1:i16:i16 GR16:i16:$src)
/*6072*/      0, // EndSwitchType
/*6073*/    /*SwitchOpcode*/ 23, TARGET_VAL(MSP430ISD::RLA),// ->6099
/*6076*/      OPC_RecordChild0, // #0 = $src
/*6077*/      OPC_SwitchType /*2 cases */, 8, MVT::i8,// ->6088
/*6080*/        OPC_MorphNodeTo2, TARGET_VAL(MSP430::SHL8r1), 0,
                    MVT::i8, MVT::i16, 1/*#Ops*/, 0, 
                // Src: (MSP430rla:i8 GR8:i8:$src) - Complexity = 3
                // Dst: (SHL8r1:i8:i16 GR8:i8:$src)
/*6088*/      /*SwitchType*/ 8, MVT::i16,// ->6098
/*6090*/        OPC_MorphNodeTo2, TARGET_VAL(MSP430::SHL16r1), 0,
                    MVT::i16, MVT::i16, 1/*#Ops*/, 0, 
                // Src: (MSP430rla:i16 GR16:i16:$src) - Complexity = 3
                // Dst: (SHL16r1:i16:i16 GR16:i16:$src)
/*6098*/      0, // EndSwitchType
/*6099*/    /*SwitchOpcode*/ 23, TARGET_VAL(MSP430ISD::RRC),// ->6125
/*6102*/      OPC_RecordChild0, // #0 = $src
/*6103*/      OPC_SwitchType /*2 cases */, 8, MVT::i8,// ->6114
/*6106*/        OPC_MorphNodeTo2, TARGET_VAL(MSP430::SAR8r1c), 0,
                    MVT::i8, MVT::i16, 1/*#Ops*/, 0, 
                // Src: (MSP430rrc:i8 GR8:i8:$src) - Complexity = 3
                // Dst: (SAR8r1c:i8:i16 GR8:i8:$src)
/*6114*/      /*SwitchType*/ 8, MVT::i16,// ->6124
/*6116*/        OPC_MorphNodeTo2, TARGET_VAL(MSP430::SAR16r1c), 0,
                    MVT::i16, MVT::i16, 1/*#Ops*/, 0, 
                // Src: (MSP430rrc:i16 GR16:i16:$src) - Complexity = 3
                // Dst: (SAR16r1c:i16:i16 GR16:i16:$src)
/*6124*/      0, // EndSwitchType
/*6125*/    /*SwitchOpcode*/ 13, TARGET_VAL(ISD::SIGN_EXTEND_INREG),// ->6141
/*6128*/      OPC_RecordChild0, // #0 = $src
/*6129*/      OPC_MoveChild1,
/*6130*/      OPC_CheckValueType, MVT::i8,
/*6132*/      OPC_MoveParent,
/*6133*/      OPC_MorphNodeTo2, TARGET_VAL(MSP430::SEXT16r), 0,
                  MVT::i16, MVT::i16, 1/*#Ops*/, 0, 
              // Src: (sext_inreg:i16 GR16:i16:$src, i8:Other) - Complexity = 3
              // Dst: (SEXT16r:i16:i16 GR16:i16:$src)
/*6141*/    /*SwitchOpcode*/ 10, TARGET_VAL(ISD::BSWAP),// ->6154
/*6144*/      OPC_RecordChild0, // #0 = $src
/*6145*/      OPC_CheckType, MVT::i16,
/*6147*/      OPC_MorphNodeTo1, TARGET_VAL(MSP430::SWPB16r), 0,
                  MVT::i16, 1/*#Ops*/, 0, 
              // Src: (bswap:i16 GR16:i16:$src) - Complexity = 3
              // Dst: (SWPB16r:i16 GR16:i16:$src)
/*6154*/    /*SwitchOpcode*/ 16, TARGET_VAL(ISD::ANY_EXTEND),// ->6173
/*6157*/      OPC_RecordChild0, // #0 = $src
/*6158*/      OPC_EmitInteger, MVT::i16, 0, 
/*6161*/      OPC_EmitInteger, MVT::i32, MSP430::subreg_8bit,
/*6164*/      OPC_MorphNodeTo1, TARGET_VAL(TargetOpcode::SUBREG_TO_REG), 0,
                  MVT::i16, 3/*#Ops*/, 1, 0, 2, 
              // Src: (anyext:i16 GR8:i8:$src) - Complexity = 3
              // Dst: (SUBREG_TO_REG:i16 0:i16, GR8:i8:$src, subreg_8bit:i32)
/*6173*/    /*SwitchOpcode*/ 12, TARGET_VAL(ISD::TRUNCATE),// ->6188
/*6176*/      OPC_RecordChild0, // #0 = $src
/*6177*/      OPC_EmitInteger, MVT::i32, MSP430::subreg_8bit,
/*6180*/      OPC_MorphNodeTo1, TARGET_VAL(TargetOpcode::EXTRACT_SUBREG), 0,
                  MVT::i8, 2/*#Ops*/, 0, 1, 
              // Src: (trunc:i8 GR16:i16:$src) - Complexity = 3
              // Dst: (EXTRACT_SUBREG:i8 GR16:i16:$src, subreg_8bit:i32)
/*6188*/    /*SwitchOpcode*/ 26, TARGET_VAL(MSP430ISD::SHL),// ->6217
/*6191*/      OPC_RecordChild0, // #0 = $src
/*6192*/      OPC_RecordChild1, // #1 = $cnt
/*6193*/      OPC_SwitchType /*2 cases */, 9, MVT::i8,// ->6205
/*6196*/        OPC_MorphNodeTo2, TARGET_VAL(MSP430::Shl8), 0,
                    MVT::i8, MVT::i16, 2/*#Ops*/, 0, 1, 
                // Src: (MSP430shl:i8 GR8:i8:$src, GR8:i8:$cnt) - Complexity = 3
                // Dst: (Shl8:i8:i16 GR8:i8:$src, GR8:i8:$cnt)
/*6205*/      /*SwitchType*/ 9, MVT::i16,// ->6216
/*6207*/        OPC_MorphNodeTo2, TARGET_VAL(MSP430::Shl16), 0,
                    MVT::i16, MVT::i16, 2/*#Ops*/, 0, 1, 
                // Src: (MSP430shl:i16 GR16:i16:$src, GR8:i8:$cnt) - Complexity = 3
                // Dst: (Shl16:i16:i16 GR16:i16:$src, GR8:i8:$cnt)
/*6216*/      0, // EndSwitchType
/*6217*/    /*SwitchOpcode*/ 26, TARGET_VAL(MSP430ISD::SRA),// ->6246
/*6220*/      OPC_RecordChild0, // #0 = $src
/*6221*/      OPC_RecordChild1, // #1 = $cnt
/*6222*/      OPC_SwitchType /*2 cases */, 9, MVT::i8,// ->6234
/*6225*/        OPC_MorphNodeTo2, TARGET_VAL(MSP430::Sra8), 0,
                    MVT::i8, MVT::i16, 2/*#Ops*/, 0, 1, 
                // Src: (MSP430sra:i8 GR8:i8:$src, GR8:i8:$cnt) - Complexity = 3
                // Dst: (Sra8:i8:i16 GR8:i8:$src, GR8:i8:$cnt)
/*6234*/      /*SwitchType*/ 9, MVT::i16,// ->6245
/*6236*/        OPC_MorphNodeTo2, TARGET_VAL(MSP430::Sra16), 0,
                    MVT::i16, MVT::i16, 2/*#Ops*/, 0, 1, 
                // Src: (MSP430sra:i16 GR16:i16:$src, GR8:i8:$cnt) - Complexity = 3
                // Dst: (Sra16:i16:i16 GR16:i16:$src, GR8:i8:$cnt)
/*6245*/      0, // EndSwitchType
/*6246*/    /*SwitchOpcode*/ 26, TARGET_VAL(MSP430ISD::SRL),// ->6275
/*6249*/      OPC_RecordChild0, // #0 = $src
/*6250*/      OPC_RecordChild1, // #1 = $cnt
/*6251*/      OPC_SwitchType /*2 cases */, 9, MVT::i8,// ->6263
/*6254*/        OPC_MorphNodeTo2, TARGET_VAL(MSP430::Srl8), 0,
                    MVT::i8, MVT::i16, 2/*#Ops*/, 0, 1, 
                // Src: (MSP430srl:i8 GR8:i8:$src, GR8:i8:$cnt) - Complexity = 3
                // Dst: (Srl8:i8:i16 GR8:i8:$src, GR8:i8:$cnt)
/*6263*/      /*SwitchType*/ 9, MVT::i16,// ->6274
/*6265*/        OPC_MorphNodeTo2, TARGET_VAL(MSP430::Srl16), 0,
                    MVT::i16, MVT::i16, 2/*#Ops*/, 0, 1, 
                // Src: (MSP430srl:i16 GR16:i16:$src, GR8:i8:$cnt) - Complexity = 3
                // Dst: (Srl16:i16:i16 GR16:i16:$src, GR8:i8:$cnt)
/*6274*/      0, // EndSwitchType
/*6275*/    0, // EndSwitchOpcode
    0
  }; // Total Array size is 6277 bytes

  // Opcode Histogram:
  // #OPC_Scope                          = 71
  // #OPC_RecordNode                     = 71
  // #OPC_RecordChild                    = 170
  // #OPC_RecordMemRef                   = 58
  // #OPC_CaptureGlueInput               = 10
  // #OPC_MoveChild                      = 102
  // #OPC_MoveParent                     = 210
  // #OPC_CheckSame                      = 0
  // #OPC_CheckChildSame                 = 82
  // #OPC_CheckPatternPredicate          = 0
  // #OPC_CheckPredicate                 = 308
  // #OPC_CheckOpcode                    = 90
  // #OPC_SwitchOpcode                   = 11
  // #OPC_CheckType                      = 50
  // #OPC_SwitchType                     = 75
  // #OPC_CheckChildType                 = 8
  // #OPC_CheckInteger                   = 0
  // #OPC_CheckChildInteger              = 21
  // #OPC_CheckCondCode                  = 0
  // #OPC_CheckValueType                 = 1
  // #OPC_CheckComplexPat                = 183
  // #OPC_CheckAndImm                    = 1
  // #OPC_CheckOrImm                     = 0
  // #OPC_CheckFoldableChainNode         = 56
  // #OPC_EmitInteger                    = 2
  // #OPC_EmitStringInteger              = 5
  // #OPC_EmitRegister                   = 0
  // #OPC_EmitConvertToTarget            = 48
  // #OPC_EmitMergeInputChains           = 157
  // #OPC_EmitCopyToReg                  = 0
  // #OPC_EmitNode                       = 2
  // #OPC_EmitNodeXForm                  = 0
  // #OPC_CompleteMatch                  = 0
  // #OPC_MorphNodeTo                    = 239

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
    // Predicate_unindexedstore
    SDNode *N = Node;

  return cast<StoreSDNode>(N)->getAddressingMode() == ISD::UNINDEXED;

  }
  case 3: { 
    // Predicate_store
    SDNode *N = Node;

  return !cast<StoreSDNode>(N)->isTruncatingStore();

  }
  case 4: { 
    // Predicate_and_su
    SDNode *N = Node;

  return N->hasOneUse();

  }
  case 5: { 
    // Predicate_zextload
    SDNode *N = Node;

  return cast<LoadSDNode>(N)->getExtensionType() == ISD::ZEXTLOAD;

  }
  case 6: { 
    // Predicate_zextloadi8
    // Predicate_extloadi8
    SDNode *N = Node;

  return cast<LoadSDNode>(N)->getMemoryVT() == MVT::i8;

  }
  case 7: { 
    // Predicate_extload
    SDNode *N = Node;

  return cast<LoadSDNode>(N)->getExtensionType() == ISD::EXTLOAD;

  }
  case 8: { 
    // Predicate_def8
    SDNode *N = Node;

  return N->getOpcode() != ISD::TRUNCATE &&
         N->getOpcode() != TargetOpcode::EXTRACT_SUBREG &&
         N->getOpcode() != ISD::CopyFromReg;

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
    return SelectAddr(N, Result[NextRes+0].first, Result[NextRes+1].first);
  }
}

