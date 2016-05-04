// Do NOT change. Changes will be lost next time file is generated

#define R__DICTIONARY_FILENAME tmpdIslc6_amd64_gcc530dIsrcdICondFormatsdIL1TObjectsdIsrcdICondFormatsL1TObjectsdIadICondFormatsL1TObjects_xr

/*******************************************************************/
#include <stddef.h>
#include <stdio.h>
#include <stdlib.h>
#include <math.h>
#include <string.h>
#include <assert.h>
#define G__DICTIONARY
#include "RConfig.h"
#include "TClass.h"
#include "TDictAttributeMap.h"
#include "TInterpreter.h"
#include "TROOT.h"
#include "TBuffer.h"
#include "TMemberInspector.h"
#include "TInterpreter.h"
#include "TVirtualMutex.h"
#include "TError.h"

#ifndef G__ROOT
#define G__ROOT
#endif

#include "RtypesImp.h"
#include "TIsAProxy.h"
#include "TFileMergeInfo.h"
#include <algorithm>
#include "TCollectionProxyInfo.h"
/*******************************************************************/

#include "TDataMember.h"

// Since CINT ignores the std namespace, we need to do so in this file.
namespace std {} using namespace std;

// Header files passed as explicit arguments
#include "src/CondFormats/L1TObjects/src/classes.h"

// Header files passed via #pragma extra_include

namespace ROOT {
   static TClass *L1TMuonOverlapParams_Dictionary();
   static void L1TMuonOverlapParams_TClassManip(TClass*);
   static void *new_L1TMuonOverlapParams(void *p = 0);
   static void *newArray_L1TMuonOverlapParams(Long_t size, void *p);
   static void delete_L1TMuonOverlapParams(void *p);
   static void deleteArray_L1TMuonOverlapParams(void *p);
   static void destruct_L1TMuonOverlapParams(void *p);

   // Function generating the singleton type initializer
   static TGenericClassInfo *GenerateInitInstanceLocal(const ::L1TMuonOverlapParams*)
   {
      ::L1TMuonOverlapParams *ptr = 0;
      static ::TVirtualIsAProxy* isa_proxy = new ::TIsAProxy(typeid(::L1TMuonOverlapParams));
      static ::ROOT::TGenericClassInfo 
         instance("L1TMuonOverlapParams", "CondFormats/L1TObjects/interface/L1TMuonOverlapParams.h", 14,
                  typeid(::L1TMuonOverlapParams), ::ROOT::Internal::DefineBehavior(ptr, ptr),
                  &L1TMuonOverlapParams_Dictionary, isa_proxy, 0,
                  sizeof(::L1TMuonOverlapParams) );
      instance.SetNew(&new_L1TMuonOverlapParams);
      instance.SetNewArray(&newArray_L1TMuonOverlapParams);
      instance.SetDelete(&delete_L1TMuonOverlapParams);
      instance.SetDeleteArray(&deleteArray_L1TMuonOverlapParams);
      instance.SetDestructor(&destruct_L1TMuonOverlapParams);
      return &instance;
   }
   TGenericClassInfo *GenerateInitInstance(const ::L1TMuonOverlapParams*)
   {
      return GenerateInitInstanceLocal((::L1TMuonOverlapParams*)0);
   }
   // Static variable to force the class initialization
   static ::ROOT::TGenericClassInfo *_R__UNIQUE_(Init) = GenerateInitInstanceLocal((const ::L1TMuonOverlapParams*)0x0); R__UseDummy(_R__UNIQUE_(Init));

   // Dictionary for non-ClassDef classes
   static TClass *L1TMuonOverlapParams_Dictionary() {
      TClass* theClass =::ROOT::GenerateInitInstanceLocal((const ::L1TMuonOverlapParams*)0x0)->GetClass();
      L1TMuonOverlapParams_TClassManip(theClass);
   return theClass;
   }

   static void L1TMuonOverlapParams_TClassManip(TClass* ){
   }

} // end of namespace ROOT

namespace ROOT {
   static TClass *L1TMuonOverlapParamscLcLNode_Dictionary();
   static void L1TMuonOverlapParamscLcLNode_TClassManip(TClass*);
   static void *new_L1TMuonOverlapParamscLcLNode(void *p = 0);
   static void *newArray_L1TMuonOverlapParamscLcLNode(Long_t size, void *p);
   static void delete_L1TMuonOverlapParamscLcLNode(void *p);
   static void deleteArray_L1TMuonOverlapParamscLcLNode(void *p);
   static void destruct_L1TMuonOverlapParamscLcLNode(void *p);

   // Function generating the singleton type initializer
   static TGenericClassInfo *GenerateInitInstanceLocal(const ::L1TMuonOverlapParams::Node*)
   {
      ::L1TMuonOverlapParams::Node *ptr = 0;
      static ::TVirtualIsAProxy* isa_proxy = new ::TIsAProxy(typeid(::L1TMuonOverlapParams::Node));
      static ::ROOT::TGenericClassInfo 
         instance("L1TMuonOverlapParams::Node", "CondFormats/L1TObjects/interface/L1TMuonOverlapParams.h", 18,
                  typeid(::L1TMuonOverlapParams::Node), ::ROOT::Internal::DefineBehavior(ptr, ptr),
                  &L1TMuonOverlapParamscLcLNode_Dictionary, isa_proxy, 0,
                  sizeof(::L1TMuonOverlapParams::Node) );
      instance.SetNew(&new_L1TMuonOverlapParamscLcLNode);
      instance.SetNewArray(&newArray_L1TMuonOverlapParamscLcLNode);
      instance.SetDelete(&delete_L1TMuonOverlapParamscLcLNode);
      instance.SetDeleteArray(&deleteArray_L1TMuonOverlapParamscLcLNode);
      instance.SetDestructor(&destruct_L1TMuonOverlapParamscLcLNode);
      return &instance;
   }
   TGenericClassInfo *GenerateInitInstance(const ::L1TMuonOverlapParams::Node*)
   {
      return GenerateInitInstanceLocal((::L1TMuonOverlapParams::Node*)0);
   }
   // Static variable to force the class initialization
   static ::ROOT::TGenericClassInfo *_R__UNIQUE_(Init) = GenerateInitInstanceLocal((const ::L1TMuonOverlapParams::Node*)0x0); R__UseDummy(_R__UNIQUE_(Init));

   // Dictionary for non-ClassDef classes
   static TClass *L1TMuonOverlapParamscLcLNode_Dictionary() {
      TClass* theClass =::ROOT::GenerateInitInstanceLocal((const ::L1TMuonOverlapParams::Node*)0x0)->GetClass();
      L1TMuonOverlapParamscLcLNode_TClassManip(theClass);
   return theClass;
   }

   static void L1TMuonOverlapParamscLcLNode_TClassManip(TClass* theClass){
      TDataMember* theMember_dparams_ = theClass->GetDataMember("dparams_");
      theMember_dparams_->CreateAttributeMap();
      TDictAttributeMap* memberAttrMap_dparams_( theMember_dparams_->GetAttributeMap() );
      memberAttrMap_dparams_->AddProperty("mapping","blob");
      TDataMember* theMember_uparams_ = theClass->GetDataMember("uparams_");
      theMember_uparams_->CreateAttributeMap();
      TDictAttributeMap* memberAttrMap_uparams_( theMember_uparams_->GetAttributeMap() );
      memberAttrMap_uparams_->AddProperty("mapping","blob");
      TDataMember* theMember_iparams_ = theClass->GetDataMember("iparams_");
      theMember_iparams_->CreateAttributeMap();
      TDictAttributeMap* memberAttrMap_iparams_( theMember_iparams_->GetAttributeMap() );
      memberAttrMap_iparams_->AddProperty("mapping","blob");
      TDataMember* theMember_sparams_ = theClass->GetDataMember("sparams_");
      theMember_sparams_->CreateAttributeMap();
      TDictAttributeMap* memberAttrMap_sparams_( theMember_sparams_->GetAttributeMap() );
      memberAttrMap_sparams_->AddProperty("mapping","blob");
   }

} // end of namespace ROOT

namespace ROOT {
   static TClass *l1tcLcLLUT_Dictionary();
   static void l1tcLcLLUT_TClassManip(TClass*);
   static void *new_l1tcLcLLUT(void *p = 0);
   static void *newArray_l1tcLcLLUT(Long_t size, void *p);
   static void delete_l1tcLcLLUT(void *p);
   static void deleteArray_l1tcLcLLUT(void *p);
   static void destruct_l1tcLcLLUT(void *p);

   // Function generating the singleton type initializer
   static TGenericClassInfo *GenerateInitInstanceLocal(const ::l1t::LUT*)
   {
      ::l1t::LUT *ptr = 0;
      static ::TVirtualIsAProxy* isa_proxy = new ::TIsAProxy(typeid(::l1t::LUT));
      static ::ROOT::TGenericClassInfo 
         instance("l1t::LUT", "CondFormats/L1TObjects/interface/LUT.h", 29,
                  typeid(::l1t::LUT), ::ROOT::Internal::DefineBehavior(ptr, ptr),
                  &l1tcLcLLUT_Dictionary, isa_proxy, 0,
                  sizeof(::l1t::LUT) );
      instance.SetNew(&new_l1tcLcLLUT);
      instance.SetNewArray(&newArray_l1tcLcLLUT);
      instance.SetDelete(&delete_l1tcLcLLUT);
      instance.SetDeleteArray(&deleteArray_l1tcLcLLUT);
      instance.SetDestructor(&destruct_l1tcLcLLUT);
      return &instance;
   }
   TGenericClassInfo *GenerateInitInstance(const ::l1t::LUT*)
   {
      return GenerateInitInstanceLocal((::l1t::LUT*)0);
   }
   // Static variable to force the class initialization
   static ::ROOT::TGenericClassInfo *_R__UNIQUE_(Init) = GenerateInitInstanceLocal((const ::l1t::LUT*)0x0); R__UseDummy(_R__UNIQUE_(Init));

   // Dictionary for non-ClassDef classes
   static TClass *l1tcLcLLUT_Dictionary() {
      TClass* theClass =::ROOT::GenerateInitInstanceLocal((const ::l1t::LUT*)0x0)->GetClass();
      l1tcLcLLUT_TClassManip(theClass);
   return theClass;
   }

   static void l1tcLcLLUT_TClassManip(TClass* theClass){
      TDataMember* theMember_data_ = theClass->GetDataMember("data_");
      theMember_data_->CreateAttributeMap();
      TDictAttributeMap* memberAttrMap_data_( theMember_data_->GetAttributeMap() );
      memberAttrMap_data_->AddProperty("mapping","blob");
   }

} // end of namespace ROOT

namespace ROOT {
   static TClass *l1tcLcLCaloParams_Dictionary();
   static void l1tcLcLCaloParams_TClassManip(TClass*);
   static void *new_l1tcLcLCaloParams(void *p = 0);
   static void *newArray_l1tcLcLCaloParams(Long_t size, void *p);
   static void delete_l1tcLcLCaloParams(void *p);
   static void deleteArray_l1tcLcLCaloParams(void *p);
   static void destruct_l1tcLcLCaloParams(void *p);

   // Function generating the singleton type initializer
   static TGenericClassInfo *GenerateInitInstanceLocal(const ::l1t::CaloParams*)
   {
      ::l1t::CaloParams *ptr = 0;
      static ::TVirtualIsAProxy* isa_proxy = new ::TIsAProxy(typeid(::l1t::CaloParams));
      static ::ROOT::TGenericClassInfo 
         instance("l1t::CaloParams", "CondFormats/L1TObjects/interface/CaloParams.h", 26,
                  typeid(::l1t::CaloParams), ::ROOT::Internal::DefineBehavior(ptr, ptr),
                  &l1tcLcLCaloParams_Dictionary, isa_proxy, 0,
                  sizeof(::l1t::CaloParams) );
      instance.SetNew(&new_l1tcLcLCaloParams);
      instance.SetNewArray(&newArray_l1tcLcLCaloParams);
      instance.SetDelete(&delete_l1tcLcLCaloParams);
      instance.SetDeleteArray(&deleteArray_l1tcLcLCaloParams);
      instance.SetDestructor(&destruct_l1tcLcLCaloParams);
      return &instance;
   }
   TGenericClassInfo *GenerateInitInstance(const ::l1t::CaloParams*)
   {
      return GenerateInitInstanceLocal((::l1t::CaloParams*)0);
   }
   // Static variable to force the class initialization
   static ::ROOT::TGenericClassInfo *_R__UNIQUE_(Init) = GenerateInitInstanceLocal((const ::l1t::CaloParams*)0x0); R__UseDummy(_R__UNIQUE_(Init));

   // Dictionary for non-ClassDef classes
   static TClass *l1tcLcLCaloParams_Dictionary() {
      TClass* theClass =::ROOT::GenerateInitInstanceLocal((const ::l1t::CaloParams*)0x0)->GetClass();
      l1tcLcLCaloParams_TClassManip(theClass);
   return theClass;
   }

   static void l1tcLcLCaloParams_TClassManip(TClass* theClass){
      TDataMember* theMember_pnode_ = theClass->GetDataMember("pnode_");
      theMember_pnode_->CreateAttributeMap();
      TDictAttributeMap* memberAttrMap_pnode_( theMember_pnode_->GetAttributeMap() );
      memberAttrMap_pnode_->AddProperty("mapping","blob");
      TDataMember* theMember_etSumEtaMin_ = theClass->GetDataMember("etSumEtaMin_");
      theMember_etSumEtaMin_->CreateAttributeMap();
      TDictAttributeMap* memberAttrMap_etSumEtaMin_( theMember_etSumEtaMin_->GetAttributeMap() );
      memberAttrMap_etSumEtaMin_->AddProperty("mapping","blob");
      TDataMember* theMember_etSumEtaMax_ = theClass->GetDataMember("etSumEtaMax_");
      theMember_etSumEtaMax_->CreateAttributeMap();
      TDictAttributeMap* memberAttrMap_etSumEtaMax_( theMember_etSumEtaMax_->GetAttributeMap() );
      memberAttrMap_etSumEtaMax_->AddProperty("mapping","blob");
      TDataMember* theMember_etSumEtThreshold_ = theClass->GetDataMember("etSumEtThreshold_");
      theMember_etSumEtThreshold_->CreateAttributeMap();
      TDictAttributeMap* memberAttrMap_etSumEtThreshold_( theMember_etSumEtThreshold_->GetAttributeMap() );
      memberAttrMap_etSumEtThreshold_->AddProperty("mapping","blob");
   }

} // end of namespace ROOT

namespace ROOT {
   static TClass *l1tcLcLCaloParamscLcLNode_Dictionary();
   static void l1tcLcLCaloParamscLcLNode_TClassManip(TClass*);
   static void *new_l1tcLcLCaloParamscLcLNode(void *p = 0);
   static void *newArray_l1tcLcLCaloParamscLcLNode(Long_t size, void *p);
   static void delete_l1tcLcLCaloParamscLcLNode(void *p);
   static void deleteArray_l1tcLcLCaloParamscLcLNode(void *p);
   static void destruct_l1tcLcLCaloParamscLcLNode(void *p);

   // Function generating the singleton type initializer
   static TGenericClassInfo *GenerateInitInstanceLocal(const ::l1t::CaloParams::Node*)
   {
      ::l1t::CaloParams::Node *ptr = 0;
      static ::TVirtualIsAProxy* isa_proxy = new ::TIsAProxy(typeid(::l1t::CaloParams::Node));
      static ::ROOT::TGenericClassInfo 
         instance("l1t::CaloParams::Node", "CondFormats/L1TObjects/interface/CaloParams.h", 32,
                  typeid(::l1t::CaloParams::Node), ::ROOT::Internal::DefineBehavior(ptr, ptr),
                  &l1tcLcLCaloParamscLcLNode_Dictionary, isa_proxy, 0,
                  sizeof(::l1t::CaloParams::Node) );
      instance.SetNew(&new_l1tcLcLCaloParamscLcLNode);
      instance.SetNewArray(&newArray_l1tcLcLCaloParamscLcLNode);
      instance.SetDelete(&delete_l1tcLcLCaloParamscLcLNode);
      instance.SetDeleteArray(&deleteArray_l1tcLcLCaloParamscLcLNode);
      instance.SetDestructor(&destruct_l1tcLcLCaloParamscLcLNode);
      return &instance;
   }
   TGenericClassInfo *GenerateInitInstance(const ::l1t::CaloParams::Node*)
   {
      return GenerateInitInstanceLocal((::l1t::CaloParams::Node*)0);
   }
   // Static variable to force the class initialization
   static ::ROOT::TGenericClassInfo *_R__UNIQUE_(Init) = GenerateInitInstanceLocal((const ::l1t::CaloParams::Node*)0x0); R__UseDummy(_R__UNIQUE_(Init));

   // Dictionary for non-ClassDef classes
   static TClass *l1tcLcLCaloParamscLcLNode_Dictionary() {
      TClass* theClass =::ROOT::GenerateInitInstanceLocal((const ::l1t::CaloParams::Node*)0x0)->GetClass();
      l1tcLcLCaloParamscLcLNode_TClassManip(theClass);
   return theClass;
   }

   static void l1tcLcLCaloParamscLcLNode_TClassManip(TClass* theClass){
      TDataMember* theMember_dparams_ = theClass->GetDataMember("dparams_");
      theMember_dparams_->CreateAttributeMap();
      TDictAttributeMap* memberAttrMap_dparams_( theMember_dparams_->GetAttributeMap() );
      memberAttrMap_dparams_->AddProperty("mapping","blob");
      TDataMember* theMember_uparams_ = theClass->GetDataMember("uparams_");
      theMember_uparams_->CreateAttributeMap();
      TDictAttributeMap* memberAttrMap_uparams_( theMember_uparams_->GetAttributeMap() );
      memberAttrMap_uparams_->AddProperty("mapping","blob");
      TDataMember* theMember_iparams_ = theClass->GetDataMember("iparams_");
      theMember_iparams_->CreateAttributeMap();
      TDictAttributeMap* memberAttrMap_iparams_( theMember_iparams_->GetAttributeMap() );
      memberAttrMap_iparams_->AddProperty("mapping","blob");
      TDataMember* theMember_sparams_ = theClass->GetDataMember("sparams_");
      theMember_sparams_->CreateAttributeMap();
      TDictAttributeMap* memberAttrMap_sparams_( theMember_sparams_->GetAttributeMap() );
      memberAttrMap_sparams_->AddProperty("mapping","blob");
   }

} // end of namespace ROOT

namespace ROOT {
   static TClass *l1tcLcLCaloParamscLcLTowerParams_Dictionary();
   static void l1tcLcLCaloParamscLcLTowerParams_TClassManip(TClass*);
   static void *new_l1tcLcLCaloParamscLcLTowerParams(void *p = 0);
   static void *newArray_l1tcLcLCaloParamscLcLTowerParams(Long_t size, void *p);
   static void delete_l1tcLcLCaloParamscLcLTowerParams(void *p);
   static void deleteArray_l1tcLcLCaloParamscLcLTowerParams(void *p);
   static void destruct_l1tcLcLCaloParamscLcLTowerParams(void *p);

   // Function generating the singleton type initializer
   static TGenericClassInfo *GenerateInitInstanceLocal(const ::l1t::CaloParams::TowerParams*)
   {
      ::l1t::CaloParams::TowerParams *ptr = 0;
      static ::TVirtualIsAProxy* isa_proxy = new ::TIsAProxy(typeid(::l1t::CaloParams::TowerParams));
      static ::ROOT::TGenericClassInfo 
         instance("l1t::CaloParams::TowerParams", "CondFormats/L1TObjects/interface/CaloParams.h", 45,
                  typeid(::l1t::CaloParams::TowerParams), ::ROOT::Internal::DefineBehavior(ptr, ptr),
                  &l1tcLcLCaloParamscLcLTowerParams_Dictionary, isa_proxy, 0,
                  sizeof(::l1t::CaloParams::TowerParams) );
      instance.SetNew(&new_l1tcLcLCaloParamscLcLTowerParams);
      instance.SetNewArray(&newArray_l1tcLcLCaloParamscLcLTowerParams);
      instance.SetDelete(&delete_l1tcLcLCaloParamscLcLTowerParams);
      instance.SetDeleteArray(&deleteArray_l1tcLcLCaloParamscLcLTowerParams);
      instance.SetDestructor(&destruct_l1tcLcLCaloParamscLcLTowerParams);
      return &instance;
   }
   TGenericClassInfo *GenerateInitInstance(const ::l1t::CaloParams::TowerParams*)
   {
      return GenerateInitInstanceLocal((::l1t::CaloParams::TowerParams*)0);
   }
   // Static variable to force the class initialization
   static ::ROOT::TGenericClassInfo *_R__UNIQUE_(Init) = GenerateInitInstanceLocal((const ::l1t::CaloParams::TowerParams*)0x0); R__UseDummy(_R__UNIQUE_(Init));

   // Dictionary for non-ClassDef classes
   static TClass *l1tcLcLCaloParamscLcLTowerParams_Dictionary() {
      TClass* theClass =::ROOT::GenerateInitInstanceLocal((const ::l1t::CaloParams::TowerParams*)0x0)->GetClass();
      l1tcLcLCaloParamscLcLTowerParams_TClassManip(theClass);
   return theClass;
   }

   static void l1tcLcLCaloParamscLcLTowerParams_TClassManip(TClass* ){
   }

} // end of namespace ROOT

namespace ROOT {
   static TClass *l1tcLcLCaloParamscLcLEgParams_Dictionary();
   static void l1tcLcLCaloParamscLcLEgParams_TClassManip(TClass*);
   static void *new_l1tcLcLCaloParamscLcLEgParams(void *p = 0);
   static void *newArray_l1tcLcLCaloParamscLcLEgParams(Long_t size, void *p);
   static void delete_l1tcLcLCaloParamscLcLEgParams(void *p);
   static void deleteArray_l1tcLcLCaloParamscLcLEgParams(void *p);
   static void destruct_l1tcLcLCaloParamscLcLEgParams(void *p);

   // Function generating the singleton type initializer
   static TGenericClassInfo *GenerateInitInstanceLocal(const ::l1t::CaloParams::EgParams*)
   {
      ::l1t::CaloParams::EgParams *ptr = 0;
      static ::TVirtualIsAProxy* isa_proxy = new ::TIsAProxy(typeid(::l1t::CaloParams::EgParams));
      static ::ROOT::TGenericClassInfo 
         instance("l1t::CaloParams::EgParams", "CondFormats/L1TObjects/interface/CaloParams.h", 94,
                  typeid(::l1t::CaloParams::EgParams), ::ROOT::Internal::DefineBehavior(ptr, ptr),
                  &l1tcLcLCaloParamscLcLEgParams_Dictionary, isa_proxy, 0,
                  sizeof(::l1t::CaloParams::EgParams) );
      instance.SetNew(&new_l1tcLcLCaloParamscLcLEgParams);
      instance.SetNewArray(&newArray_l1tcLcLCaloParamscLcLEgParams);
      instance.SetDelete(&delete_l1tcLcLCaloParamscLcLEgParams);
      instance.SetDeleteArray(&deleteArray_l1tcLcLCaloParamscLcLEgParams);
      instance.SetDestructor(&destruct_l1tcLcLCaloParamscLcLEgParams);
      return &instance;
   }
   TGenericClassInfo *GenerateInitInstance(const ::l1t::CaloParams::EgParams*)
   {
      return GenerateInitInstanceLocal((::l1t::CaloParams::EgParams*)0);
   }
   // Static variable to force the class initialization
   static ::ROOT::TGenericClassInfo *_R__UNIQUE_(Init) = GenerateInitInstanceLocal((const ::l1t::CaloParams::EgParams*)0x0); R__UseDummy(_R__UNIQUE_(Init));

   // Dictionary for non-ClassDef classes
   static TClass *l1tcLcLCaloParamscLcLEgParams_Dictionary() {
      TClass* theClass =::ROOT::GenerateInitInstanceLocal((const ::l1t::CaloParams::EgParams*)0x0)->GetClass();
      l1tcLcLCaloParamscLcLEgParams_TClassManip(theClass);
   return theClass;
   }

   static void l1tcLcLCaloParamscLcLEgParams_TClassManip(TClass* ){
   }

} // end of namespace ROOT

namespace ROOT {
   static TClass *l1tcLcLCaloParamscLcLJetParams_Dictionary();
   static void l1tcLcLCaloParamscLcLJetParams_TClassManip(TClass*);
   static void *new_l1tcLcLCaloParamscLcLJetParams(void *p = 0);
   static void *newArray_l1tcLcLCaloParamscLcLJetParams(Long_t size, void *p);
   static void delete_l1tcLcLCaloParamscLcLJetParams(void *p);
   static void deleteArray_l1tcLcLCaloParamscLcLJetParams(void *p);
   static void destruct_l1tcLcLCaloParamscLcLJetParams(void *p);

   // Function generating the singleton type initializer
   static TGenericClassInfo *GenerateInitInstanceLocal(const ::l1t::CaloParams::JetParams*)
   {
      ::l1t::CaloParams::JetParams *ptr = 0;
      static ::TVirtualIsAProxy* isa_proxy = new ::TIsAProxy(typeid(::l1t::CaloParams::JetParams));
      static ::ROOT::TGenericClassInfo 
         instance("l1t::CaloParams::JetParams", "CondFormats/L1TObjects/interface/CaloParams.h", 185,
                  typeid(::l1t::CaloParams::JetParams), ::ROOT::Internal::DefineBehavior(ptr, ptr),
                  &l1tcLcLCaloParamscLcLJetParams_Dictionary, isa_proxy, 0,
                  sizeof(::l1t::CaloParams::JetParams) );
      instance.SetNew(&new_l1tcLcLCaloParamscLcLJetParams);
      instance.SetNewArray(&newArray_l1tcLcLCaloParamscLcLJetParams);
      instance.SetDelete(&delete_l1tcLcLCaloParamscLcLJetParams);
      instance.SetDeleteArray(&deleteArray_l1tcLcLCaloParamscLcLJetParams);
      instance.SetDestructor(&destruct_l1tcLcLCaloParamscLcLJetParams);
      return &instance;
   }
   TGenericClassInfo *GenerateInitInstance(const ::l1t::CaloParams::JetParams*)
   {
      return GenerateInitInstanceLocal((::l1t::CaloParams::JetParams*)0);
   }
   // Static variable to force the class initialization
   static ::ROOT::TGenericClassInfo *_R__UNIQUE_(Init) = GenerateInitInstanceLocal((const ::l1t::CaloParams::JetParams*)0x0); R__UseDummy(_R__UNIQUE_(Init));

   // Dictionary for non-ClassDef classes
   static TClass *l1tcLcLCaloParamscLcLJetParams_Dictionary() {
      TClass* theClass =::ROOT::GenerateInitInstanceLocal((const ::l1t::CaloParams::JetParams*)0x0)->GetClass();
      l1tcLcLCaloParamscLcLJetParams_TClassManip(theClass);
   return theClass;
   }

   static void l1tcLcLCaloParamscLcLJetParams_TClassManip(TClass* ){
   }

} // end of namespace ROOT

namespace ROOT {
   static TClass *l1tcLcLCaloParamscLcLTauParams_Dictionary();
   static void l1tcLcLCaloParamscLcLTauParams_TClassManip(TClass*);
   static void *new_l1tcLcLCaloParamscLcLTauParams(void *p = 0);
   static void *newArray_l1tcLcLCaloParamscLcLTauParams(Long_t size, void *p);
   static void delete_l1tcLcLCaloParamscLcLTauParams(void *p);
   static void deleteArray_l1tcLcLCaloParamscLcLTauParams(void *p);
   static void destruct_l1tcLcLCaloParamscLcLTauParams(void *p);

   // Function generating the singleton type initializer
   static TGenericClassInfo *GenerateInitInstanceLocal(const ::l1t::CaloParams::TauParams*)
   {
      ::l1t::CaloParams::TauParams *ptr = 0;
      static ::TVirtualIsAProxy* isa_proxy = new ::TIsAProxy(typeid(::l1t::CaloParams::TauParams));
      static ::ROOT::TGenericClassInfo 
         instance("l1t::CaloParams::TauParams", "CondFormats/L1TObjects/interface/CaloParams.h", 140,
                  typeid(::l1t::CaloParams::TauParams), ::ROOT::Internal::DefineBehavior(ptr, ptr),
                  &l1tcLcLCaloParamscLcLTauParams_Dictionary, isa_proxy, 0,
                  sizeof(::l1t::CaloParams::TauParams) );
      instance.SetNew(&new_l1tcLcLCaloParamscLcLTauParams);
      instance.SetNewArray(&newArray_l1tcLcLCaloParamscLcLTauParams);
      instance.SetDelete(&delete_l1tcLcLCaloParamscLcLTauParams);
      instance.SetDeleteArray(&deleteArray_l1tcLcLCaloParamscLcLTauParams);
      instance.SetDestructor(&destruct_l1tcLcLCaloParamscLcLTauParams);
      return &instance;
   }
   TGenericClassInfo *GenerateInitInstance(const ::l1t::CaloParams::TauParams*)
   {
      return GenerateInitInstanceLocal((::l1t::CaloParams::TauParams*)0);
   }
   // Static variable to force the class initialization
   static ::ROOT::TGenericClassInfo *_R__UNIQUE_(Init) = GenerateInitInstanceLocal((const ::l1t::CaloParams::TauParams*)0x0); R__UseDummy(_R__UNIQUE_(Init));

   // Dictionary for non-ClassDef classes
   static TClass *l1tcLcLCaloParamscLcLTauParams_Dictionary() {
      TClass* theClass =::ROOT::GenerateInitInstanceLocal((const ::l1t::CaloParams::TauParams*)0x0)->GetClass();
      l1tcLcLCaloParamscLcLTauParams_TClassManip(theClass);
   return theClass;
   }

   static void l1tcLcLCaloParamscLcLTauParams_TClassManip(TClass* ){
   }

} // end of namespace ROOT

namespace ROOT {
   static TClass *l1tcLcLCaloConfig_Dictionary();
   static void l1tcLcLCaloConfig_TClassManip(TClass*);
   static void *new_l1tcLcLCaloConfig(void *p = 0);
   static void *newArray_l1tcLcLCaloConfig(Long_t size, void *p);
   static void delete_l1tcLcLCaloConfig(void *p);
   static void deleteArray_l1tcLcLCaloConfig(void *p);
   static void destruct_l1tcLcLCaloConfig(void *p);

   // Function generating the singleton type initializer
   static TGenericClassInfo *GenerateInitInstanceLocal(const ::l1t::CaloConfig*)
   {
      ::l1t::CaloConfig *ptr = 0;
      static ::TVirtualIsAProxy* isa_proxy = new ::TIsAProxy(typeid(::l1t::CaloConfig));
      static ::ROOT::TGenericClassInfo 
         instance("l1t::CaloConfig", "CondFormats/L1TObjects/interface/CaloConfig.h", 25,
                  typeid(::l1t::CaloConfig), ::ROOT::Internal::DefineBehavior(ptr, ptr),
                  &l1tcLcLCaloConfig_Dictionary, isa_proxy, 0,
                  sizeof(::l1t::CaloConfig) );
      instance.SetNew(&new_l1tcLcLCaloConfig);
      instance.SetNewArray(&newArray_l1tcLcLCaloConfig);
      instance.SetDelete(&delete_l1tcLcLCaloConfig);
      instance.SetDeleteArray(&deleteArray_l1tcLcLCaloConfig);
      instance.SetDestructor(&destruct_l1tcLcLCaloConfig);
      return &instance;
   }
   TGenericClassInfo *GenerateInitInstance(const ::l1t::CaloConfig*)
   {
      return GenerateInitInstanceLocal((::l1t::CaloConfig*)0);
   }
   // Static variable to force the class initialization
   static ::ROOT::TGenericClassInfo *_R__UNIQUE_(Init) = GenerateInitInstanceLocal((const ::l1t::CaloConfig*)0x0); R__UseDummy(_R__UNIQUE_(Init));

   // Dictionary for non-ClassDef classes
   static TClass *l1tcLcLCaloConfig_Dictionary() {
      TClass* theClass =::ROOT::GenerateInitInstanceLocal((const ::l1t::CaloConfig*)0x0)->GetClass();
      l1tcLcLCaloConfig_TClassManip(theClass);
   return theClass;
   }

   static void l1tcLcLCaloConfig_TClassManip(TClass* ){
   }

} // end of namespace ROOT

namespace ROOT {
   static TClass *L1TMuonGlobalParams_Dictionary();
   static void L1TMuonGlobalParams_TClassManip(TClass*);
   static void *new_L1TMuonGlobalParams(void *p = 0);
   static void *newArray_L1TMuonGlobalParams(Long_t size, void *p);
   static void delete_L1TMuonGlobalParams(void *p);
   static void deleteArray_L1TMuonGlobalParams(void *p);
   static void destruct_L1TMuonGlobalParams(void *p);

   // Function generating the singleton type initializer
   static TGenericClassInfo *GenerateInitInstanceLocal(const ::L1TMuonGlobalParams*)
   {
      ::L1TMuonGlobalParams *ptr = 0;
      static ::TVirtualIsAProxy* isa_proxy = new ::TIsAProxy(typeid(::L1TMuonGlobalParams));
      static ::ROOT::TGenericClassInfo 
         instance("L1TMuonGlobalParams", "CondFormats/L1TObjects/interface/L1TMuonGlobalParams.h", 21,
                  typeid(::L1TMuonGlobalParams), ::ROOT::Internal::DefineBehavior(ptr, ptr),
                  &L1TMuonGlobalParams_Dictionary, isa_proxy, 0,
                  sizeof(::L1TMuonGlobalParams) );
      instance.SetNew(&new_L1TMuonGlobalParams);
      instance.SetNewArray(&newArray_L1TMuonGlobalParams);
      instance.SetDelete(&delete_L1TMuonGlobalParams);
      instance.SetDeleteArray(&deleteArray_L1TMuonGlobalParams);
      instance.SetDestructor(&destruct_L1TMuonGlobalParams);
      return &instance;
   }
   TGenericClassInfo *GenerateInitInstance(const ::L1TMuonGlobalParams*)
   {
      return GenerateInitInstanceLocal((::L1TMuonGlobalParams*)0);
   }
   // Static variable to force the class initialization
   static ::ROOT::TGenericClassInfo *_R__UNIQUE_(Init) = GenerateInitInstanceLocal((const ::L1TMuonGlobalParams*)0x0); R__UseDummy(_R__UNIQUE_(Init));

   // Dictionary for non-ClassDef classes
   static TClass *L1TMuonGlobalParams_Dictionary() {
      TClass* theClass =::ROOT::GenerateInitInstanceLocal((const ::L1TMuonGlobalParams*)0x0)->GetClass();
      L1TMuonGlobalParams_TClassManip(theClass);
   return theClass;
   }

   static void L1TMuonGlobalParams_TClassManip(TClass* theClass){
      TDataMember* theMember_pnodes_ = theClass->GetDataMember("pnodes_");
      theMember_pnodes_->CreateAttributeMap();
      TDictAttributeMap* memberAttrMap_pnodes_( theMember_pnodes_->GetAttributeMap() );
      memberAttrMap_pnodes_->AddProperty("mapping","blob");
   }

} // end of namespace ROOT

namespace ROOT {
   static TClass *L1TMuonGlobalParamscLcLNode_Dictionary();
   static void L1TMuonGlobalParamscLcLNode_TClassManip(TClass*);
   static void *new_L1TMuonGlobalParamscLcLNode(void *p = 0);
   static void *newArray_L1TMuonGlobalParamscLcLNode(Long_t size, void *p);
   static void delete_L1TMuonGlobalParamscLcLNode(void *p);
   static void deleteArray_L1TMuonGlobalParamscLcLNode(void *p);
   static void destruct_L1TMuonGlobalParamscLcLNode(void *p);

   // Function generating the singleton type initializer
   static TGenericClassInfo *GenerateInitInstanceLocal(const ::L1TMuonGlobalParams::Node*)
   {
      ::L1TMuonGlobalParams::Node *ptr = 0;
      static ::TVirtualIsAProxy* isa_proxy = new ::TIsAProxy(typeid(::L1TMuonGlobalParams::Node));
      static ::ROOT::TGenericClassInfo 
         instance("L1TMuonGlobalParams::Node", "CondFormats/L1TObjects/interface/L1TMuonGlobalParams.h", 26,
                  typeid(::L1TMuonGlobalParams::Node), ::ROOT::Internal::DefineBehavior(ptr, ptr),
                  &L1TMuonGlobalParamscLcLNode_Dictionary, isa_proxy, 0,
                  sizeof(::L1TMuonGlobalParams::Node) );
      instance.SetNew(&new_L1TMuonGlobalParamscLcLNode);
      instance.SetNewArray(&newArray_L1TMuonGlobalParamscLcLNode);
      instance.SetDelete(&delete_L1TMuonGlobalParamscLcLNode);
      instance.SetDeleteArray(&deleteArray_L1TMuonGlobalParamscLcLNode);
      instance.SetDestructor(&destruct_L1TMuonGlobalParamscLcLNode);
      return &instance;
   }
   TGenericClassInfo *GenerateInitInstance(const ::L1TMuonGlobalParams::Node*)
   {
      return GenerateInitInstanceLocal((::L1TMuonGlobalParams::Node*)0);
   }
   // Static variable to force the class initialization
   static ::ROOT::TGenericClassInfo *_R__UNIQUE_(Init) = GenerateInitInstanceLocal((const ::L1TMuonGlobalParams::Node*)0x0); R__UseDummy(_R__UNIQUE_(Init));

   // Dictionary for non-ClassDef classes
   static TClass *L1TMuonGlobalParamscLcLNode_Dictionary() {
      TClass* theClass =::ROOT::GenerateInitInstanceLocal((const ::L1TMuonGlobalParams::Node*)0x0)->GetClass();
      L1TMuonGlobalParamscLcLNode_TClassManip(theClass);
   return theClass;
   }

   static void L1TMuonGlobalParamscLcLNode_TClassManip(TClass* theClass){
      TDataMember* theMember_dparams_ = theClass->GetDataMember("dparams_");
      theMember_dparams_->CreateAttributeMap();
      TDictAttributeMap* memberAttrMap_dparams_( theMember_dparams_->GetAttributeMap() );
      memberAttrMap_dparams_->AddProperty("mapping","blob");
      TDataMember* theMember_uparams_ = theClass->GetDataMember("uparams_");
      theMember_uparams_->CreateAttributeMap();
      TDictAttributeMap* memberAttrMap_uparams_( theMember_uparams_->GetAttributeMap() );
      memberAttrMap_uparams_->AddProperty("mapping","blob");
      TDataMember* theMember_iparams_ = theClass->GetDataMember("iparams_");
      theMember_iparams_->CreateAttributeMap();
      TDictAttributeMap* memberAttrMap_iparams_( theMember_iparams_->GetAttributeMap() );
      memberAttrMap_iparams_->AddProperty("mapping","blob");
      TDataMember* theMember_sparams_ = theClass->GetDataMember("sparams_");
      theMember_sparams_->CreateAttributeMap();
      TDictAttributeMap* memberAttrMap_sparams_( theMember_sparams_->GetAttributeMap() );
      memberAttrMap_sparams_->AddProperty("mapping","blob");
   }

} // end of namespace ROOT

namespace ROOT {
   static TClass *L1TMuonBarrelParams_Dictionary();
   static void L1TMuonBarrelParams_TClassManip(TClass*);
   static void *new_L1TMuonBarrelParams(void *p = 0);
   static void *newArray_L1TMuonBarrelParams(Long_t size, void *p);
   static void delete_L1TMuonBarrelParams(void *p);
   static void deleteArray_L1TMuonBarrelParams(void *p);
   static void destruct_L1TMuonBarrelParams(void *p);

   // Function generating the singleton type initializer
   static TGenericClassInfo *GenerateInitInstanceLocal(const ::L1TMuonBarrelParams*)
   {
      ::L1TMuonBarrelParams *ptr = 0;
      static ::TVirtualIsAProxy* isa_proxy = new ::TIsAProxy(typeid(::L1TMuonBarrelParams));
      static ::ROOT::TGenericClassInfo 
         instance("L1TMuonBarrelParams", "CondFormats/L1TObjects/interface/L1TMuonBarrelParams.h", 24,
                  typeid(::L1TMuonBarrelParams), ::ROOT::Internal::DefineBehavior(ptr, ptr),
                  &L1TMuonBarrelParams_Dictionary, isa_proxy, 0,
                  sizeof(::L1TMuonBarrelParams) );
      instance.SetNew(&new_L1TMuonBarrelParams);
      instance.SetNewArray(&newArray_L1TMuonBarrelParams);
      instance.SetDelete(&delete_L1TMuonBarrelParams);
      instance.SetDeleteArray(&deleteArray_L1TMuonBarrelParams);
      instance.SetDestructor(&destruct_L1TMuonBarrelParams);
      return &instance;
   }
   TGenericClassInfo *GenerateInitInstance(const ::L1TMuonBarrelParams*)
   {
      return GenerateInitInstanceLocal((::L1TMuonBarrelParams*)0);
   }
   // Static variable to force the class initialization
   static ::ROOT::TGenericClassInfo *_R__UNIQUE_(Init) = GenerateInitInstanceLocal((const ::L1TMuonBarrelParams*)0x0); R__UseDummy(_R__UNIQUE_(Init));

   // Dictionary for non-ClassDef classes
   static TClass *L1TMuonBarrelParams_Dictionary() {
      TClass* theClass =::ROOT::GenerateInitInstanceLocal((const ::L1TMuonBarrelParams*)0x0)->GetClass();
      L1TMuonBarrelParams_TClassManip(theClass);
   return theClass;
   }

   static void L1TMuonBarrelParams_TClassManip(TClass* theClass){
      TDataMember* theMember_pnodes_ = theClass->GetDataMember("pnodes_");
      theMember_pnodes_->CreateAttributeMap();
      TDictAttributeMap* memberAttrMap_pnodes_( theMember_pnodes_->GetAttributeMap() );
      memberAttrMap_pnodes_->AddProperty("mapping","blob");
   }

} // end of namespace ROOT

namespace ROOT {
   static TClass *L1TMuonBarrelParamscLcLNode_Dictionary();
   static void L1TMuonBarrelParamscLcLNode_TClassManip(TClass*);
   static void *new_L1TMuonBarrelParamscLcLNode(void *p = 0);
   static void *newArray_L1TMuonBarrelParamscLcLNode(Long_t size, void *p);
   static void delete_L1TMuonBarrelParamscLcLNode(void *p);
   static void deleteArray_L1TMuonBarrelParamscLcLNode(void *p);
   static void destruct_L1TMuonBarrelParamscLcLNode(void *p);

   // Function generating the singleton type initializer
   static TGenericClassInfo *GenerateInitInstanceLocal(const ::L1TMuonBarrelParams::Node*)
   {
      ::L1TMuonBarrelParams::Node *ptr = 0;
      static ::TVirtualIsAProxy* isa_proxy = new ::TIsAProxy(typeid(::L1TMuonBarrelParams::Node));
      static ::ROOT::TGenericClassInfo 
         instance("L1TMuonBarrelParams::Node", "CondFormats/L1TObjects/interface/L1TMuonBarrelParams.h", 29,
                  typeid(::L1TMuonBarrelParams::Node), ::ROOT::Internal::DefineBehavior(ptr, ptr),
                  &L1TMuonBarrelParamscLcLNode_Dictionary, isa_proxy, 0,
                  sizeof(::L1TMuonBarrelParams::Node) );
      instance.SetNew(&new_L1TMuonBarrelParamscLcLNode);
      instance.SetNewArray(&newArray_L1TMuonBarrelParamscLcLNode);
      instance.SetDelete(&delete_L1TMuonBarrelParamscLcLNode);
      instance.SetDeleteArray(&deleteArray_L1TMuonBarrelParamscLcLNode);
      instance.SetDestructor(&destruct_L1TMuonBarrelParamscLcLNode);
      return &instance;
   }
   TGenericClassInfo *GenerateInitInstance(const ::L1TMuonBarrelParams::Node*)
   {
      return GenerateInitInstanceLocal((::L1TMuonBarrelParams::Node*)0);
   }
   // Static variable to force the class initialization
   static ::ROOT::TGenericClassInfo *_R__UNIQUE_(Init) = GenerateInitInstanceLocal((const ::L1TMuonBarrelParams::Node*)0x0); R__UseDummy(_R__UNIQUE_(Init));

   // Dictionary for non-ClassDef classes
   static TClass *L1TMuonBarrelParamscLcLNode_Dictionary() {
      TClass* theClass =::ROOT::GenerateInitInstanceLocal((const ::L1TMuonBarrelParams::Node*)0x0)->GetClass();
      L1TMuonBarrelParamscLcLNode_TClassManip(theClass);
   return theClass;
   }

   static void L1TMuonBarrelParamscLcLNode_TClassManip(TClass* theClass){
      TDataMember* theMember_dparams_ = theClass->GetDataMember("dparams_");
      theMember_dparams_->CreateAttributeMap();
      TDictAttributeMap* memberAttrMap_dparams_( theMember_dparams_->GetAttributeMap() );
      memberAttrMap_dparams_->AddProperty("mapping","blob");
      TDataMember* theMember_uparams_ = theClass->GetDataMember("uparams_");
      theMember_uparams_->CreateAttributeMap();
      TDictAttributeMap* memberAttrMap_uparams_( theMember_uparams_->GetAttributeMap() );
      memberAttrMap_uparams_->AddProperty("mapping","blob");
      TDataMember* theMember_iparams_ = theClass->GetDataMember("iparams_");
      theMember_iparams_->CreateAttributeMap();
      TDictAttributeMap* memberAttrMap_iparams_( theMember_iparams_->GetAttributeMap() );
      memberAttrMap_iparams_->AddProperty("mapping","blob");
      TDataMember* theMember_sparams_ = theClass->GetDataMember("sparams_");
      theMember_sparams_->CreateAttributeMap();
      TDictAttributeMap* memberAttrMap_sparams_( theMember_sparams_->GetAttributeMap() );
      memberAttrMap_sparams_->AddProperty("mapping","blob");
   }

} // end of namespace ROOT

namespace ROOT {
   static TClass *L1TMuonBarrelParamscLcLLUTParamscLcLextLUT_Dictionary();
   static void L1TMuonBarrelParamscLcLLUTParamscLcLextLUT_TClassManip(TClass*);
   static void *new_L1TMuonBarrelParamscLcLLUTParamscLcLextLUT(void *p = 0);
   static void *newArray_L1TMuonBarrelParamscLcLLUTParamscLcLextLUT(Long_t size, void *p);
   static void delete_L1TMuonBarrelParamscLcLLUTParamscLcLextLUT(void *p);
   static void deleteArray_L1TMuonBarrelParamscLcLLUTParamscLcLextLUT(void *p);
   static void destruct_L1TMuonBarrelParamscLcLLUTParamscLcLextLUT(void *p);

   // Function generating the singleton type initializer
   static TGenericClassInfo *GenerateInitInstanceLocal(const ::L1TMuonBarrelParams::LUTParams::extLUT*)
   {
      ::L1TMuonBarrelParams::LUTParams::extLUT *ptr = 0;
      static ::TVirtualIsAProxy* isa_proxy = new ::TIsAProxy(typeid(::L1TMuonBarrelParams::LUTParams::extLUT));
      static ::ROOT::TGenericClassInfo 
         instance("L1TMuonBarrelParams::LUTParams::extLUT", "CondFormats/L1TObjects/interface/L1TMuonBarrelParams.h", 87,
                  typeid(::L1TMuonBarrelParams::LUTParams::extLUT), ::ROOT::Internal::DefineBehavior(ptr, ptr),
                  &L1TMuonBarrelParamscLcLLUTParamscLcLextLUT_Dictionary, isa_proxy, 0,
                  sizeof(::L1TMuonBarrelParams::LUTParams::extLUT) );
      instance.SetNew(&new_L1TMuonBarrelParamscLcLLUTParamscLcLextLUT);
      instance.SetNewArray(&newArray_L1TMuonBarrelParamscLcLLUTParamscLcLextLUT);
      instance.SetDelete(&delete_L1TMuonBarrelParamscLcLLUTParamscLcLextLUT);
      instance.SetDeleteArray(&deleteArray_L1TMuonBarrelParamscLcLLUTParamscLcLextLUT);
      instance.SetDestructor(&destruct_L1TMuonBarrelParamscLcLLUTParamscLcLextLUT);
      return &instance;
   }
   TGenericClassInfo *GenerateInitInstance(const ::L1TMuonBarrelParams::LUTParams::extLUT*)
   {
      return GenerateInitInstanceLocal((::L1TMuonBarrelParams::LUTParams::extLUT*)0);
   }
   // Static variable to force the class initialization
   static ::ROOT::TGenericClassInfo *_R__UNIQUE_(Init) = GenerateInitInstanceLocal((const ::L1TMuonBarrelParams::LUTParams::extLUT*)0x0); R__UseDummy(_R__UNIQUE_(Init));

   // Dictionary for non-ClassDef classes
   static TClass *L1TMuonBarrelParamscLcLLUTParamscLcLextLUT_Dictionary() {
      TClass* theClass =::ROOT::GenerateInitInstanceLocal((const ::L1TMuonBarrelParams::LUTParams::extLUT*)0x0)->GetClass();
      L1TMuonBarrelParamscLcLLUTParamscLcLextLUT_TClassManip(theClass);
   return theClass;
   }

   static void L1TMuonBarrelParamscLcLLUTParamscLcLextLUT_TClassManip(TClass* ){
   }

} // end of namespace ROOT

namespace ROOT {
   static TClass *L1TMuonBarrelParamscLcLLUTParams_Dictionary();
   static void L1TMuonBarrelParamscLcLLUTParams_TClassManip(TClass*);
   static void *new_L1TMuonBarrelParamscLcLLUTParams(void *p = 0);
   static void *newArray_L1TMuonBarrelParamscLcLLUTParams(Long_t size, void *p);
   static void delete_L1TMuonBarrelParamscLcLLUTParams(void *p);
   static void deleteArray_L1TMuonBarrelParamscLcLLUTParams(void *p);
   static void destruct_L1TMuonBarrelParamscLcLLUTParams(void *p);

   // Function generating the singleton type initializer
   static TGenericClassInfo *GenerateInitInstanceLocal(const ::L1TMuonBarrelParams::LUTParams*)
   {
      ::L1TMuonBarrelParams::LUTParams *ptr = 0;
      static ::TVirtualIsAProxy* isa_proxy = new ::TIsAProxy(typeid(::L1TMuonBarrelParams::LUTParams));
      static ::ROOT::TGenericClassInfo 
         instance("L1TMuonBarrelParams::LUTParams", "CondFormats/L1TObjects/interface/L1TMuonBarrelParams.h", 78,
                  typeid(::L1TMuonBarrelParams::LUTParams), ::ROOT::Internal::DefineBehavior(ptr, ptr),
                  &L1TMuonBarrelParamscLcLLUTParams_Dictionary, isa_proxy, 0,
                  sizeof(::L1TMuonBarrelParams::LUTParams) );
      instance.SetNew(&new_L1TMuonBarrelParamscLcLLUTParams);
      instance.SetNewArray(&newArray_L1TMuonBarrelParamscLcLLUTParams);
      instance.SetDelete(&delete_L1TMuonBarrelParamscLcLLUTParams);
      instance.SetDeleteArray(&deleteArray_L1TMuonBarrelParamscLcLLUTParams);
      instance.SetDestructor(&destruct_L1TMuonBarrelParamscLcLLUTParams);
      return &instance;
   }
   TGenericClassInfo *GenerateInitInstance(const ::L1TMuonBarrelParams::LUTParams*)
   {
      return GenerateInitInstanceLocal((::L1TMuonBarrelParams::LUTParams*)0);
   }
   // Static variable to force the class initialization
   static ::ROOT::TGenericClassInfo *_R__UNIQUE_(Init) = GenerateInitInstanceLocal((const ::L1TMuonBarrelParams::LUTParams*)0x0); R__UseDummy(_R__UNIQUE_(Init));

   // Dictionary for non-ClassDef classes
   static TClass *L1TMuonBarrelParamscLcLLUTParams_Dictionary() {
      TClass* theClass =::ROOT::GenerateInitInstanceLocal((const ::L1TMuonBarrelParams::LUTParams*)0x0)->GetClass();
      L1TMuonBarrelParamscLcLLUTParams_TClassManip(theClass);
   return theClass;
   }

   static void L1TMuonBarrelParamscLcLLUTParams_TClassManip(TClass* theClass){
      TDataMember* theMember_pta_lut_ = theClass->GetDataMember("pta_lut_");
      theMember_pta_lut_->CreateAttributeMap();
      TDictAttributeMap* memberAttrMap_pta_lut_( theMember_pta_lut_->GetAttributeMap() );
      memberAttrMap_pta_lut_->AddProperty("mapping","blob");
      TDataMember* theMember_phi_lut_ = theClass->GetDataMember("phi_lut_");
      theMember_phi_lut_->CreateAttributeMap();
      TDictAttributeMap* memberAttrMap_phi_lut_( theMember_phi_lut_->GetAttributeMap() );
      memberAttrMap_phi_lut_->AddProperty("mapping","blob");
      TDataMember* theMember_pta_threshold_ = theClass->GetDataMember("pta_threshold_");
      theMember_pta_threshold_->CreateAttributeMap();
      TDictAttributeMap* memberAttrMap_pta_threshold_( theMember_pta_threshold_->GetAttributeMap() );
      memberAttrMap_pta_threshold_->AddProperty("mapping","blob");
      TDataMember* theMember_qp_lut_ = theClass->GetDataMember("qp_lut_");
      theMember_qp_lut_->CreateAttributeMap();
      TDictAttributeMap* memberAttrMap_qp_lut_( theMember_qp_lut_->GetAttributeMap() );
      memberAttrMap_qp_lut_->AddProperty("mapping","blob");
      TDataMember* theMember_eta_lut_ = theClass->GetDataMember("eta_lut_");
      theMember_eta_lut_->CreateAttributeMap();
      TDictAttributeMap* memberAttrMap_eta_lut_( theMember_eta_lut_->GetAttributeMap() );
      memberAttrMap_eta_lut_->AddProperty("mapping","blob");
      TDataMember* theMember_ext_lut_ = theClass->GetDataMember("ext_lut_");
      theMember_ext_lut_->CreateAttributeMap();
      TDictAttributeMap* memberAttrMap_ext_lut_( theMember_ext_lut_->GetAttributeMap() );
      memberAttrMap_ext_lut_->AddProperty("mapping","blob");
   }

} // end of namespace ROOT

namespace ROOT {
   static TClass *L1MuScale_Dictionary();
   static void L1MuScale_TClassManip(TClass*);
   static void delete_L1MuScale(void *p);
   static void deleteArray_L1MuScale(void *p);
   static void destruct_L1MuScale(void *p);

   // Function generating the singleton type initializer
   static TGenericClassInfo *GenerateInitInstanceLocal(const ::L1MuScale*)
   {
      ::L1MuScale *ptr = 0;
      static ::TVirtualIsAProxy* isa_proxy = new ::TIsAProxy(typeid(::L1MuScale));
      static ::ROOT::TGenericClassInfo 
         instance("L1MuScale", "CondFormats/L1TObjects/interface/L1MuScale.h", 38,
                  typeid(::L1MuScale), ::ROOT::Internal::DefineBehavior(ptr, ptr),
                  &L1MuScale_Dictionary, isa_proxy, 0,
                  sizeof(::L1MuScale) );
      instance.SetDelete(&delete_L1MuScale);
      instance.SetDeleteArray(&deleteArray_L1MuScale);
      instance.SetDestructor(&destruct_L1MuScale);
      return &instance;
   }
   TGenericClassInfo *GenerateInitInstance(const ::L1MuScale*)
   {
      return GenerateInitInstanceLocal((::L1MuScale*)0);
   }
   // Static variable to force the class initialization
   static ::ROOT::TGenericClassInfo *_R__UNIQUE_(Init) = GenerateInitInstanceLocal((const ::L1MuScale*)0x0); R__UseDummy(_R__UNIQUE_(Init));

   // Dictionary for non-ClassDef classes
   static TClass *L1MuScale_Dictionary() {
      TClass* theClass =::ROOT::GenerateInitInstanceLocal((const ::L1MuScale*)0x0)->GetClass();
      L1MuScale_TClassManip(theClass);
   return theClass;
   }

   static void L1MuScale_TClassManip(TClass* ){
   }

} // end of namespace ROOT

namespace ROOT {
   static TClass *L1MuBinnedScale_Dictionary();
   static void L1MuBinnedScale_TClassManip(TClass*);
   static void *new_L1MuBinnedScale(void *p = 0);
   static void *newArray_L1MuBinnedScale(Long_t size, void *p);
   static void delete_L1MuBinnedScale(void *p);
   static void deleteArray_L1MuBinnedScale(void *p);
   static void destruct_L1MuBinnedScale(void *p);

   // Function generating the singleton type initializer
   static TGenericClassInfo *GenerateInitInstanceLocal(const ::L1MuBinnedScale*)
   {
      ::L1MuBinnedScale *ptr = 0;
      static ::TVirtualIsAProxy* isa_proxy = new ::TIsAProxy(typeid(::L1MuBinnedScale));
      static ::ROOT::TGenericClassInfo 
         instance("L1MuBinnedScale", "CondFormats/L1TObjects/interface/L1MuScale.h", 95,
                  typeid(::L1MuBinnedScale), ::ROOT::Internal::DefineBehavior(ptr, ptr),
                  &L1MuBinnedScale_Dictionary, isa_proxy, 0,
                  sizeof(::L1MuBinnedScale) );
      instance.SetNew(&new_L1MuBinnedScale);
      instance.SetNewArray(&newArray_L1MuBinnedScale);
      instance.SetDelete(&delete_L1MuBinnedScale);
      instance.SetDeleteArray(&deleteArray_L1MuBinnedScale);
      instance.SetDestructor(&destruct_L1MuBinnedScale);
      return &instance;
   }
   TGenericClassInfo *GenerateInitInstance(const ::L1MuBinnedScale*)
   {
      return GenerateInitInstanceLocal((::L1MuBinnedScale*)0);
   }
   // Static variable to force the class initialization
   static ::ROOT::TGenericClassInfo *_R__UNIQUE_(Init) = GenerateInitInstanceLocal((const ::L1MuBinnedScale*)0x0); R__UseDummy(_R__UNIQUE_(Init));

   // Dictionary for non-ClassDef classes
   static TClass *L1MuBinnedScale_Dictionary() {
      TClass* theClass =::ROOT::GenerateInitInstanceLocal((const ::L1MuBinnedScale*)0x0)->GetClass();
      L1MuBinnedScale_TClassManip(theClass);
   return theClass;
   }

   static void L1MuBinnedScale_TClassManip(TClass* theClass){
      TDataMember* theMember_m_Scale = theClass->GetDataMember("m_Scale");
      theMember_m_Scale->CreateAttributeMap();
      TDictAttributeMap* memberAttrMap_m_Scale( theMember_m_Scale->GetAttributeMap() );
      memberAttrMap_m_Scale->AddProperty("mapping","blob");
   }

} // end of namespace ROOT

namespace ROOT {
   static TClass *L1MuSymmetricBinnedScale_Dictionary();
   static void L1MuSymmetricBinnedScale_TClassManip(TClass*);
   static void *new_L1MuSymmetricBinnedScale(void *p = 0);
   static void *newArray_L1MuSymmetricBinnedScale(Long_t size, void *p);
   static void delete_L1MuSymmetricBinnedScale(void *p);
   static void deleteArray_L1MuSymmetricBinnedScale(void *p);
   static void destruct_L1MuSymmetricBinnedScale(void *p);

   // Function generating the singleton type initializer
   static TGenericClassInfo *GenerateInitInstanceLocal(const ::L1MuSymmetricBinnedScale*)
   {
      ::L1MuSymmetricBinnedScale *ptr = 0;
      static ::TVirtualIsAProxy* isa_proxy = new ::TIsAProxy(typeid(::L1MuSymmetricBinnedScale));
      static ::ROOT::TGenericClassInfo 
         instance("L1MuSymmetricBinnedScale", "CondFormats/L1TObjects/interface/L1MuScale.h", 251,
                  typeid(::L1MuSymmetricBinnedScale), ::ROOT::Internal::DefineBehavior(ptr, ptr),
                  &L1MuSymmetricBinnedScale_Dictionary, isa_proxy, 0,
                  sizeof(::L1MuSymmetricBinnedScale) );
      instance.SetNew(&new_L1MuSymmetricBinnedScale);
      instance.SetNewArray(&newArray_L1MuSymmetricBinnedScale);
      instance.SetDelete(&delete_L1MuSymmetricBinnedScale);
      instance.SetDeleteArray(&deleteArray_L1MuSymmetricBinnedScale);
      instance.SetDestructor(&destruct_L1MuSymmetricBinnedScale);
      return &instance;
   }
   TGenericClassInfo *GenerateInitInstance(const ::L1MuSymmetricBinnedScale*)
   {
      return GenerateInitInstanceLocal((::L1MuSymmetricBinnedScale*)0);
   }
   // Static variable to force the class initialization
   static ::ROOT::TGenericClassInfo *_R__UNIQUE_(Init) = GenerateInitInstanceLocal((const ::L1MuSymmetricBinnedScale*)0x0); R__UseDummy(_R__UNIQUE_(Init));

   // Dictionary for non-ClassDef classes
   static TClass *L1MuSymmetricBinnedScale_Dictionary() {
      TClass* theClass =::ROOT::GenerateInitInstanceLocal((const ::L1MuSymmetricBinnedScale*)0x0)->GetClass();
      L1MuSymmetricBinnedScale_TClassManip(theClass);
   return theClass;
   }

   static void L1MuSymmetricBinnedScale_TClassManip(TClass* theClass){
      TDataMember* theMember_m_Scale = theClass->GetDataMember("m_Scale");
      theMember_m_Scale->CreateAttributeMap();
      TDictAttributeMap* memberAttrMap_m_Scale( theMember_m_Scale->GetAttributeMap() );
      memberAttrMap_m_Scale->AddProperty("mapping","blob");
   }

} // end of namespace ROOT

namespace ROOT {
   static TClass *L1MuPacking_Dictionary();
   static void L1MuPacking_TClassManip(TClass*);
   static void delete_L1MuPacking(void *p);
   static void deleteArray_L1MuPacking(void *p);
   static void destruct_L1MuPacking(void *p);

   // Function generating the singleton type initializer
   static TGenericClassInfo *GenerateInitInstanceLocal(const ::L1MuPacking*)
   {
      ::L1MuPacking *ptr = 0;
      static ::TVirtualIsAProxy* isa_proxy = new ::TIsAProxy(typeid(::L1MuPacking));
      static ::ROOT::TGenericClassInfo 
         instance("L1MuPacking", "CondFormats/L1TObjects/interface/L1MuPacking.h", 36,
                  typeid(::L1MuPacking), ::ROOT::Internal::DefineBehavior(ptr, ptr),
                  &L1MuPacking_Dictionary, isa_proxy, 0,
                  sizeof(::L1MuPacking) );
      instance.SetDelete(&delete_L1MuPacking);
      instance.SetDeleteArray(&deleteArray_L1MuPacking);
      instance.SetDestructor(&destruct_L1MuPacking);
      return &instance;
   }
   TGenericClassInfo *GenerateInitInstance(const ::L1MuPacking*)
   {
      return GenerateInitInstanceLocal((::L1MuPacking*)0);
   }
   // Static variable to force the class initialization
   static ::ROOT::TGenericClassInfo *_R__UNIQUE_(Init) = GenerateInitInstanceLocal((const ::L1MuPacking*)0x0); R__UseDummy(_R__UNIQUE_(Init));

   // Dictionary for non-ClassDef classes
   static TClass *L1MuPacking_Dictionary() {
      TClass* theClass =::ROOT::GenerateInitInstanceLocal((const ::L1MuPacking*)0x0)->GetClass();
      L1MuPacking_TClassManip(theClass);
   return theClass;
   }

   static void L1MuPacking_TClassManip(TClass* ){
   }

} // end of namespace ROOT

namespace ROOT {
   static TClass *L1MuPseudoSignedPacking_Dictionary();
   static void L1MuPseudoSignedPacking_TClassManip(TClass*);
   static void *new_L1MuPseudoSignedPacking(void *p = 0);
   static void *newArray_L1MuPseudoSignedPacking(Long_t size, void *p);
   static void delete_L1MuPseudoSignedPacking(void *p);
   static void deleteArray_L1MuPseudoSignedPacking(void *p);
   static void destruct_L1MuPseudoSignedPacking(void *p);

   // Function generating the singleton type initializer
   static TGenericClassInfo *GenerateInitInstanceLocal(const ::L1MuPseudoSignedPacking*)
   {
      ::L1MuPseudoSignedPacking *ptr = 0;
      static ::TVirtualIsAProxy* isa_proxy = new ::TIsAProxy(typeid(::L1MuPseudoSignedPacking));
      static ::ROOT::TGenericClassInfo 
         instance("L1MuPseudoSignedPacking", "CondFormats/L1TObjects/interface/L1MuPacking.h", 136,
                  typeid(::L1MuPseudoSignedPacking), ::ROOT::Internal::DefineBehavior(ptr, ptr),
                  &L1MuPseudoSignedPacking_Dictionary, isa_proxy, 0,
                  sizeof(::L1MuPseudoSignedPacking) );
      instance.SetNew(&new_L1MuPseudoSignedPacking);
      instance.SetNewArray(&newArray_L1MuPseudoSignedPacking);
      instance.SetDelete(&delete_L1MuPseudoSignedPacking);
      instance.SetDeleteArray(&deleteArray_L1MuPseudoSignedPacking);
      instance.SetDestructor(&destruct_L1MuPseudoSignedPacking);
      return &instance;
   }
   TGenericClassInfo *GenerateInitInstance(const ::L1MuPseudoSignedPacking*)
   {
      return GenerateInitInstanceLocal((::L1MuPseudoSignedPacking*)0);
   }
   // Static variable to force the class initialization
   static ::ROOT::TGenericClassInfo *_R__UNIQUE_(Init) = GenerateInitInstanceLocal((const ::L1MuPseudoSignedPacking*)0x0); R__UseDummy(_R__UNIQUE_(Init));

   // Dictionary for non-ClassDef classes
   static TClass *L1MuPseudoSignedPacking_Dictionary() {
      TClass* theClass =::ROOT::GenerateInitInstanceLocal((const ::L1MuPseudoSignedPacking*)0x0)->GetClass();
      L1MuPseudoSignedPacking_TClassManip(theClass);
   return theClass;
   }

   static void L1MuPseudoSignedPacking_TClassManip(TClass* ){
   }

} // end of namespace ROOT

namespace ROOT {
   static TClass *L1MuTriggerScales_Dictionary();
   static void L1MuTriggerScales_TClassManip(TClass*);
   static void *new_L1MuTriggerScales(void *p = 0);
   static void *newArray_L1MuTriggerScales(Long_t size, void *p);
   static void delete_L1MuTriggerScales(void *p);
   static void deleteArray_L1MuTriggerScales(void *p);
   static void destruct_L1MuTriggerScales(void *p);

   // Function generating the singleton type initializer
   static TGenericClassInfo *GenerateInitInstanceLocal(const ::L1MuTriggerScales*)
   {
      ::L1MuTriggerScales *ptr = 0;
      static ::TVirtualIsAProxy* isa_proxy = new ::TIsAProxy(typeid(::L1MuTriggerScales));
      static ::ROOT::TGenericClassInfo 
         instance("L1MuTriggerScales", "CondFormats/L1TObjects/interface/L1MuTriggerScales.h", 33,
                  typeid(::L1MuTriggerScales), ::ROOT::Internal::DefineBehavior(ptr, ptr),
                  &L1MuTriggerScales_Dictionary, isa_proxy, 0,
                  sizeof(::L1MuTriggerScales) );
      instance.SetNew(&new_L1MuTriggerScales);
      instance.SetNewArray(&newArray_L1MuTriggerScales);
      instance.SetDelete(&delete_L1MuTriggerScales);
      instance.SetDeleteArray(&deleteArray_L1MuTriggerScales);
      instance.SetDestructor(&destruct_L1MuTriggerScales);
      return &instance;
   }
   TGenericClassInfo *GenerateInitInstance(const ::L1MuTriggerScales*)
   {
      return GenerateInitInstanceLocal((::L1MuTriggerScales*)0);
   }
   // Static variable to force the class initialization
   static ::ROOT::TGenericClassInfo *_R__UNIQUE_(Init) = GenerateInitInstanceLocal((const ::L1MuTriggerScales*)0x0); R__UseDummy(_R__UNIQUE_(Init));

   // Dictionary for non-ClassDef classes
   static TClass *L1MuTriggerScales_Dictionary() {
      TClass* theClass =::ROOT::GenerateInitInstanceLocal((const ::L1MuTriggerScales*)0x0)->GetClass();
      L1MuTriggerScales_TClassManip(theClass);
   return theClass;
   }

   static void L1MuTriggerScales_TClassManip(TClass* ){
   }

} // end of namespace ROOT

namespace ROOT {
   static TClass *L1MuTriggerPtScale_Dictionary();
   static void L1MuTriggerPtScale_TClassManip(TClass*);
   static void *new_L1MuTriggerPtScale(void *p = 0);
   static void *newArray_L1MuTriggerPtScale(Long_t size, void *p);
   static void delete_L1MuTriggerPtScale(void *p);
   static void deleteArray_L1MuTriggerPtScale(void *p);
   static void destruct_L1MuTriggerPtScale(void *p);

   // Function generating the singleton type initializer
   static TGenericClassInfo *GenerateInitInstanceLocal(const ::L1MuTriggerPtScale*)
   {
      ::L1MuTriggerPtScale *ptr = 0;
      static ::TVirtualIsAProxy* isa_proxy = new ::TIsAProxy(typeid(::L1MuTriggerPtScale));
      static ::ROOT::TGenericClassInfo 
         instance("L1MuTriggerPtScale", "CondFormats/L1TObjects/interface/L1MuTriggerPtScale.h", 33,
                  typeid(::L1MuTriggerPtScale), ::ROOT::Internal::DefineBehavior(ptr, ptr),
                  &L1MuTriggerPtScale_Dictionary, isa_proxy, 0,
                  sizeof(::L1MuTriggerPtScale) );
      instance.SetNew(&new_L1MuTriggerPtScale);
      instance.SetNewArray(&newArray_L1MuTriggerPtScale);
      instance.SetDelete(&delete_L1MuTriggerPtScale);
      instance.SetDeleteArray(&deleteArray_L1MuTriggerPtScale);
      instance.SetDestructor(&destruct_L1MuTriggerPtScale);
      return &instance;
   }
   TGenericClassInfo *GenerateInitInstance(const ::L1MuTriggerPtScale*)
   {
      return GenerateInitInstanceLocal((::L1MuTriggerPtScale*)0);
   }
   // Static variable to force the class initialization
   static ::ROOT::TGenericClassInfo *_R__UNIQUE_(Init) = GenerateInitInstanceLocal((const ::L1MuTriggerPtScale*)0x0); R__UseDummy(_R__UNIQUE_(Init));

   // Dictionary for non-ClassDef classes
   static TClass *L1MuTriggerPtScale_Dictionary() {
      TClass* theClass =::ROOT::GenerateInitInstanceLocal((const ::L1MuTriggerPtScale*)0x0)->GetClass();
      L1MuTriggerPtScale_TClassManip(theClass);
   return theClass;
   }

   static void L1MuTriggerPtScale_TClassManip(TClass* ){
   }

} // end of namespace ROOT

namespace ROOT {
   static TClass *L1MuGMTParameters_Dictionary();
   static void L1MuGMTParameters_TClassManip(TClass*);
   static void *new_L1MuGMTParameters(void *p = 0);
   static void *newArray_L1MuGMTParameters(Long_t size, void *p);
   static void delete_L1MuGMTParameters(void *p);
   static void deleteArray_L1MuGMTParameters(void *p);
   static void destruct_L1MuGMTParameters(void *p);

   // Function generating the singleton type initializer
   static TGenericClassInfo *GenerateInitInstanceLocal(const ::L1MuGMTParameters*)
   {
      ::L1MuGMTParameters *ptr = 0;
      static ::TVirtualIsAProxy* isa_proxy = new ::TIsAProxy(typeid(::L1MuGMTParameters));
      static ::ROOT::TGenericClassInfo 
         instance("L1MuGMTParameters", "CondFormats/L1TObjects/interface/L1MuGMTParameters.h", 25,
                  typeid(::L1MuGMTParameters), ::ROOT::Internal::DefineBehavior(ptr, ptr),
                  &L1MuGMTParameters_Dictionary, isa_proxy, 0,
                  sizeof(::L1MuGMTParameters) );
      instance.SetNew(&new_L1MuGMTParameters);
      instance.SetNewArray(&newArray_L1MuGMTParameters);
      instance.SetDelete(&delete_L1MuGMTParameters);
      instance.SetDeleteArray(&deleteArray_L1MuGMTParameters);
      instance.SetDestructor(&destruct_L1MuGMTParameters);
      return &instance;
   }
   TGenericClassInfo *GenerateInitInstance(const ::L1MuGMTParameters*)
   {
      return GenerateInitInstanceLocal((::L1MuGMTParameters*)0);
   }
   // Static variable to force the class initialization
   static ::ROOT::TGenericClassInfo *_R__UNIQUE_(Init) = GenerateInitInstanceLocal((const ::L1MuGMTParameters*)0x0); R__UseDummy(_R__UNIQUE_(Init));

   // Dictionary for non-ClassDef classes
   static TClass *L1MuGMTParameters_Dictionary() {
      TClass* theClass =::ROOT::GenerateInitInstanceLocal((const ::L1MuGMTParameters*)0x0)->GetClass();
      L1MuGMTParameters_TClassManip(theClass);
   return theClass;
   }

   static void L1MuGMTParameters_TClassManip(TClass* theClass){
      theClass->CreateAttributeMap();
      TDictAttributeMap* attrMap( theClass->GetAttributeMap() );
      attrMap->AddProperty("class_version","L1MuGMTParameters_V01");
   }

} // end of namespace ROOT

namespace ROOT {
   static TClass *L1MuGMTChannelMask_Dictionary();
   static void L1MuGMTChannelMask_TClassManip(TClass*);
   static void *new_L1MuGMTChannelMask(void *p = 0);
   static void *newArray_L1MuGMTChannelMask(Long_t size, void *p);
   static void delete_L1MuGMTChannelMask(void *p);
   static void deleteArray_L1MuGMTChannelMask(void *p);
   static void destruct_L1MuGMTChannelMask(void *p);

   // Function generating the singleton type initializer
   static TGenericClassInfo *GenerateInitInstanceLocal(const ::L1MuGMTChannelMask*)
   {
      ::L1MuGMTChannelMask *ptr = 0;
      static ::TVirtualIsAProxy* isa_proxy = new ::TIsAProxy(typeid(::L1MuGMTChannelMask));
      static ::ROOT::TGenericClassInfo 
         instance("L1MuGMTChannelMask", "CondFormats/L1TObjects/interface/L1MuGMTChannelMask.h", 25,
                  typeid(::L1MuGMTChannelMask), ::ROOT::Internal::DefineBehavior(ptr, ptr),
                  &L1MuGMTChannelMask_Dictionary, isa_proxy, 0,
                  sizeof(::L1MuGMTChannelMask) );
      instance.SetNew(&new_L1MuGMTChannelMask);
      instance.SetNewArray(&newArray_L1MuGMTChannelMask);
      instance.SetDelete(&delete_L1MuGMTChannelMask);
      instance.SetDeleteArray(&deleteArray_L1MuGMTChannelMask);
      instance.SetDestructor(&destruct_L1MuGMTChannelMask);
      return &instance;
   }
   TGenericClassInfo *GenerateInitInstance(const ::L1MuGMTChannelMask*)
   {
      return GenerateInitInstanceLocal((::L1MuGMTChannelMask*)0);
   }
   // Static variable to force the class initialization
   static ::ROOT::TGenericClassInfo *_R__UNIQUE_(Init) = GenerateInitInstanceLocal((const ::L1MuGMTChannelMask*)0x0); R__UseDummy(_R__UNIQUE_(Init));

   // Dictionary for non-ClassDef classes
   static TClass *L1MuGMTChannelMask_Dictionary() {
      TClass* theClass =::ROOT::GenerateInitInstanceLocal((const ::L1MuGMTChannelMask*)0x0)->GetClass();
      L1MuGMTChannelMask_TClassManip(theClass);
   return theClass;
   }

   static void L1MuGMTChannelMask_TClassManip(TClass* ){
   }

} // end of namespace ROOT

namespace ROOT {
   static TClass *L1MuGMTScales_Dictionary();
   static void L1MuGMTScales_TClassManip(TClass*);
   static void *new_L1MuGMTScales(void *p = 0);
   static void *newArray_L1MuGMTScales(Long_t size, void *p);
   static void delete_L1MuGMTScales(void *p);
   static void deleteArray_L1MuGMTScales(void *p);
   static void destruct_L1MuGMTScales(void *p);

   // Function generating the singleton type initializer
   static TGenericClassInfo *GenerateInitInstanceLocal(const ::L1MuGMTScales*)
   {
      ::L1MuGMTScales *ptr = 0;
      static ::TVirtualIsAProxy* isa_proxy = new ::TIsAProxy(typeid(::L1MuGMTScales));
      static ::ROOT::TGenericClassInfo 
         instance("L1MuGMTScales", "CondFormats/L1TObjects/interface/L1MuGMTScales.h", 34,
                  typeid(::L1MuGMTScales), ::ROOT::Internal::DefineBehavior(ptr, ptr),
                  &L1MuGMTScales_Dictionary, isa_proxy, 0,
                  sizeof(::L1MuGMTScales) );
      instance.SetNew(&new_L1MuGMTScales);
      instance.SetNewArray(&newArray_L1MuGMTScales);
      instance.SetDelete(&delete_L1MuGMTScales);
      instance.SetDeleteArray(&deleteArray_L1MuGMTScales);
      instance.SetDestructor(&destruct_L1MuGMTScales);
      return &instance;
   }
   TGenericClassInfo *GenerateInitInstance(const ::L1MuGMTScales*)
   {
      return GenerateInitInstanceLocal((::L1MuGMTScales*)0);
   }
   // Static variable to force the class initialization
   static ::ROOT::TGenericClassInfo *_R__UNIQUE_(Init) = GenerateInitInstanceLocal((const ::L1MuGMTScales*)0x0); R__UseDummy(_R__UNIQUE_(Init));

   // Dictionary for non-ClassDef classes
   static TClass *L1MuGMTScales_Dictionary() {
      TClass* theClass =::ROOT::GenerateInitInstanceLocal((const ::L1MuGMTScales*)0x0)->GetClass();
      L1MuGMTScales_TClassManip(theClass);
   return theClass;
   }

   static void L1MuGMTScales_TClassManip(TClass* ){
   }

} // end of namespace ROOT

namespace ROOT {
   static TClass *L1CaloEtScale_Dictionary();
   static void L1CaloEtScale_TClassManip(TClass*);
   static void *new_L1CaloEtScale(void *p = 0);
   static void *newArray_L1CaloEtScale(Long_t size, void *p);
   static void delete_L1CaloEtScale(void *p);
   static void deleteArray_L1CaloEtScale(void *p);
   static void destruct_L1CaloEtScale(void *p);

   // Function generating the singleton type initializer
   static TGenericClassInfo *GenerateInitInstanceLocal(const ::L1CaloEtScale*)
   {
      ::L1CaloEtScale *ptr = 0;
      static ::TVirtualIsAProxy* isa_proxy = new ::TIsAProxy(typeid(::L1CaloEtScale));
      static ::ROOT::TGenericClassInfo 
         instance("L1CaloEtScale", "CondFormats/L1TObjects/interface/L1CaloEtScale.h", 29,
                  typeid(::L1CaloEtScale), ::ROOT::Internal::DefineBehavior(ptr, ptr),
                  &L1CaloEtScale_Dictionary, isa_proxy, 0,
                  sizeof(::L1CaloEtScale) );
      instance.SetNew(&new_L1CaloEtScale);
      instance.SetNewArray(&newArray_L1CaloEtScale);
      instance.SetDelete(&delete_L1CaloEtScale);
      instance.SetDeleteArray(&deleteArray_L1CaloEtScale);
      instance.SetDestructor(&destruct_L1CaloEtScale);
      return &instance;
   }
   TGenericClassInfo *GenerateInitInstance(const ::L1CaloEtScale*)
   {
      return GenerateInitInstanceLocal((::L1CaloEtScale*)0);
   }
   // Static variable to force the class initialization
   static ::ROOT::TGenericClassInfo *_R__UNIQUE_(Init) = GenerateInitInstanceLocal((const ::L1CaloEtScale*)0x0); R__UseDummy(_R__UNIQUE_(Init));

   // Dictionary for non-ClassDef classes
   static TClass *L1CaloEtScale_Dictionary() {
      TClass* theClass =::ROOT::GenerateInitInstanceLocal((const ::L1CaloEtScale*)0x0)->GetClass();
      L1CaloEtScale_TClassManip(theClass);
   return theClass;
   }

   static void L1CaloEtScale_TClassManip(TClass* theClass){
      TDataMember* theMember_m_thresholds = theClass->GetDataMember("m_thresholds");
      theMember_m_thresholds->CreateAttributeMap();
      TDictAttributeMap* memberAttrMap_m_thresholds( theMember_m_thresholds->GetAttributeMap() );
      memberAttrMap_m_thresholds->AddProperty("mapping","blob");
   }

} // end of namespace ROOT

namespace ROOT {
   static TClass *L1GctChannelMask_Dictionary();
   static void L1GctChannelMask_TClassManip(TClass*);
   static void *new_L1GctChannelMask(void *p = 0);
   static void *newArray_L1GctChannelMask(Long_t size, void *p);
   static void delete_L1GctChannelMask(void *p);
   static void deleteArray_L1GctChannelMask(void *p);
   static void destruct_L1GctChannelMask(void *p);

   // Function generating the singleton type initializer
   static TGenericClassInfo *GenerateInitInstanceLocal(const ::L1GctChannelMask*)
   {
      ::L1GctChannelMask *ptr = 0;
      static ::TVirtualIsAProxy* isa_proxy = new ::TIsAProxy(typeid(::L1GctChannelMask));
      static ::ROOT::TGenericClassInfo 
         instance("L1GctChannelMask", "CondFormats/L1TObjects/interface/L1GctChannelMask.h", 8,
                  typeid(::L1GctChannelMask), ::ROOT::Internal::DefineBehavior(ptr, ptr),
                  &L1GctChannelMask_Dictionary, isa_proxy, 0,
                  sizeof(::L1GctChannelMask) );
      instance.SetNew(&new_L1GctChannelMask);
      instance.SetNewArray(&newArray_L1GctChannelMask);
      instance.SetDelete(&delete_L1GctChannelMask);
      instance.SetDeleteArray(&deleteArray_L1GctChannelMask);
      instance.SetDestructor(&destruct_L1GctChannelMask);
      return &instance;
   }
   TGenericClassInfo *GenerateInitInstance(const ::L1GctChannelMask*)
   {
      return GenerateInitInstanceLocal((::L1GctChannelMask*)0);
   }
   // Static variable to force the class initialization
   static ::ROOT::TGenericClassInfo *_R__UNIQUE_(Init) = GenerateInitInstanceLocal((const ::L1GctChannelMask*)0x0); R__UseDummy(_R__UNIQUE_(Init));

   // Dictionary for non-ClassDef classes
   static TClass *L1GctChannelMask_Dictionary() {
      TClass* theClass =::ROOT::GenerateInitInstanceLocal((const ::L1GctChannelMask*)0x0)->GetClass();
      L1GctChannelMask_TClassManip(theClass);
   return theClass;
   }

   static void L1GctChannelMask_TClassManip(TClass* theClass){
      TDataMember* theMember_regionMask_ = theClass->GetDataMember("regionMask_");
      theMember_regionMask_->CreateAttributeMap();
      TDictAttributeMap* memberAttrMap_regionMask_( theMember_regionMask_->GetAttributeMap() );
      memberAttrMap_regionMask_->AddProperty("mapping","blob");
      TDataMember* theMember_mhtMask_ = theClass->GetDataMember("mhtMask_");
      theMember_mhtMask_->CreateAttributeMap();
      TDictAttributeMap* memberAttrMap_mhtMask_( theMember_mhtMask_->GetAttributeMap() );
      memberAttrMap_mhtMask_->AddProperty("mapping","blob");
   }

} // end of namespace ROOT

namespace ROOT {
   static TClass *L1GctJetFinderParams_Dictionary();
   static void L1GctJetFinderParams_TClassManip(TClass*);
   static void *new_L1GctJetFinderParams(void *p = 0);
   static void *newArray_L1GctJetFinderParams(Long_t size, void *p);
   static void delete_L1GctJetFinderParams(void *p);
   static void deleteArray_L1GctJetFinderParams(void *p);
   static void destruct_L1GctJetFinderParams(void *p);

   // Function generating the singleton type initializer
   static TGenericClassInfo *GenerateInitInstanceLocal(const ::L1GctJetFinderParams*)
   {
      ::L1GctJetFinderParams *ptr = 0;
      static ::TVirtualIsAProxy* isa_proxy = new ::TIsAProxy(typeid(::L1GctJetFinderParams));
      static ::ROOT::TGenericClassInfo 
         instance("L1GctJetFinderParams", "CondFormats/L1TObjects/interface/L1GctJetFinderParams.h", 10,
                  typeid(::L1GctJetFinderParams), ::ROOT::Internal::DefineBehavior(ptr, ptr),
                  &L1GctJetFinderParams_Dictionary, isa_proxy, 0,
                  sizeof(::L1GctJetFinderParams) );
      instance.SetNew(&new_L1GctJetFinderParams);
      instance.SetNewArray(&newArray_L1GctJetFinderParams);
      instance.SetDelete(&delete_L1GctJetFinderParams);
      instance.SetDeleteArray(&deleteArray_L1GctJetFinderParams);
      instance.SetDestructor(&destruct_L1GctJetFinderParams);
      return &instance;
   }
   TGenericClassInfo *GenerateInitInstance(const ::L1GctJetFinderParams*)
   {
      return GenerateInitInstanceLocal((::L1GctJetFinderParams*)0);
   }
   // Static variable to force the class initialization
   static ::ROOT::TGenericClassInfo *_R__UNIQUE_(Init) = GenerateInitInstanceLocal((const ::L1GctJetFinderParams*)0x0); R__UseDummy(_R__UNIQUE_(Init));

   // Dictionary for non-ClassDef classes
   static TClass *L1GctJetFinderParams_Dictionary() {
      TClass* theClass =::ROOT::GenerateInitInstanceLocal((const ::L1GctJetFinderParams*)0x0)->GetClass();
      L1GctJetFinderParams_TClassManip(theClass);
   return theClass;
   }

   static void L1GctJetFinderParams_TClassManip(TClass* theClass){
      TDataMember* theMember_jetCorrCoeffs_ = theClass->GetDataMember("jetCorrCoeffs_");
      theMember_jetCorrCoeffs_->CreateAttributeMap();
      TDictAttributeMap* memberAttrMap_jetCorrCoeffs_( theMember_jetCorrCoeffs_->GetAttributeMap() );
      memberAttrMap_jetCorrCoeffs_->AddProperty("mapping","blob");
      TDataMember* theMember_tauCorrCoeffs_ = theClass->GetDataMember("tauCorrCoeffs_");
      theMember_tauCorrCoeffs_->CreateAttributeMap();
      TDictAttributeMap* memberAttrMap_tauCorrCoeffs_( theMember_tauCorrCoeffs_->GetAttributeMap() );
      memberAttrMap_tauCorrCoeffs_->AddProperty("mapping","blob");
      TDataMember* theMember_energyConversionCoeffs_ = theClass->GetDataMember("energyConversionCoeffs_");
      theMember_energyConversionCoeffs_->CreateAttributeMap();
      TDictAttributeMap* memberAttrMap_energyConversionCoeffs_( theMember_energyConversionCoeffs_->GetAttributeMap() );
      memberAttrMap_energyConversionCoeffs_->AddProperty("mapping","blob");
   }

} // end of namespace ROOT

namespace ROOT {
   static TClass *L1MuDTExtLutcLcLLUT_Dictionary();
   static void L1MuDTExtLutcLcLLUT_TClassManip(TClass*);
   static void *new_L1MuDTExtLutcLcLLUT(void *p = 0);
   static void *newArray_L1MuDTExtLutcLcLLUT(Long_t size, void *p);
   static void delete_L1MuDTExtLutcLcLLUT(void *p);
   static void deleteArray_L1MuDTExtLutcLcLLUT(void *p);
   static void destruct_L1MuDTExtLutcLcLLUT(void *p);

   // Function generating the singleton type initializer
   static TGenericClassInfo *GenerateInitInstanceLocal(const ::L1MuDTExtLut::LUT*)
   {
      ::L1MuDTExtLut::LUT *ptr = 0;
      static ::TVirtualIsAProxy* isa_proxy = new ::TIsAProxy(typeid(::L1MuDTExtLut::LUT));
      static ::ROOT::TGenericClassInfo 
         instance("L1MuDTExtLut::LUT", "CondFormats/L1TObjects/interface/L1MuDTExtLut.h", 47,
                  typeid(::L1MuDTExtLut::LUT), ::ROOT::Internal::DefineBehavior(ptr, ptr),
                  &L1MuDTExtLutcLcLLUT_Dictionary, isa_proxy, 0,
                  sizeof(::L1MuDTExtLut::LUT) );
      instance.SetNew(&new_L1MuDTExtLutcLcLLUT);
      instance.SetNewArray(&newArray_L1MuDTExtLutcLcLLUT);
      instance.SetDelete(&delete_L1MuDTExtLutcLcLLUT);
      instance.SetDeleteArray(&deleteArray_L1MuDTExtLutcLcLLUT);
      instance.SetDestructor(&destruct_L1MuDTExtLutcLcLLUT);
      return &instance;
   }
   TGenericClassInfo *GenerateInitInstance(const ::L1MuDTExtLut::LUT*)
   {
      return GenerateInitInstanceLocal((::L1MuDTExtLut::LUT*)0);
   }
   // Static variable to force the class initialization
   static ::ROOT::TGenericClassInfo *_R__UNIQUE_(Init) = GenerateInitInstanceLocal((const ::L1MuDTExtLut::LUT*)0x0); R__UseDummy(_R__UNIQUE_(Init));

   // Dictionary for non-ClassDef classes
   static TClass *L1MuDTExtLutcLcLLUT_Dictionary() {
      TClass* theClass =::ROOT::GenerateInitInstanceLocal((const ::L1MuDTExtLut::LUT*)0x0)->GetClass();
      L1MuDTExtLutcLcLLUT_TClassManip(theClass);
   return theClass;
   }

   static void L1MuDTExtLutcLcLLUT_TClassManip(TClass* ){
   }

} // end of namespace ROOT

namespace ROOT {
   static TClass *L1MuDTExtLut_Dictionary();
   static void L1MuDTExtLut_TClassManip(TClass*);
   static void *new_L1MuDTExtLut(void *p = 0);
   static void *newArray_L1MuDTExtLut(Long_t size, void *p);
   static void delete_L1MuDTExtLut(void *p);
   static void deleteArray_L1MuDTExtLut(void *p);
   static void destruct_L1MuDTExtLut(void *p);

   // Function generating the singleton type initializer
   static TGenericClassInfo *GenerateInitInstanceLocal(const ::L1MuDTExtLut*)
   {
      ::L1MuDTExtLut *ptr = 0;
      static ::TVirtualIsAProxy* isa_proxy = new ::TIsAProxy(typeid(::L1MuDTExtLut));
      static ::ROOT::TGenericClassInfo 
         instance("L1MuDTExtLut", "CondFormats/L1TObjects/interface/L1MuDTExtLut.h", 42,
                  typeid(::L1MuDTExtLut), ::ROOT::Internal::DefineBehavior(ptr, ptr),
                  &L1MuDTExtLut_Dictionary, isa_proxy, 0,
                  sizeof(::L1MuDTExtLut) );
      instance.SetNew(&new_L1MuDTExtLut);
      instance.SetNewArray(&newArray_L1MuDTExtLut);
      instance.SetDelete(&delete_L1MuDTExtLut);
      instance.SetDeleteArray(&deleteArray_L1MuDTExtLut);
      instance.SetDestructor(&destruct_L1MuDTExtLut);
      return &instance;
   }
   TGenericClassInfo *GenerateInitInstance(const ::L1MuDTExtLut*)
   {
      return GenerateInitInstanceLocal((::L1MuDTExtLut*)0);
   }
   // Static variable to force the class initialization
   static ::ROOT::TGenericClassInfo *_R__UNIQUE_(Init) = GenerateInitInstanceLocal((const ::L1MuDTExtLut*)0x0); R__UseDummy(_R__UNIQUE_(Init));

   // Dictionary for non-ClassDef classes
   static TClass *L1MuDTExtLut_Dictionary() {
      TClass* theClass =::ROOT::GenerateInitInstanceLocal((const ::L1MuDTExtLut*)0x0)->GetClass();
      L1MuDTExtLut_TClassManip(theClass);
   return theClass;
   }

   static void L1MuDTExtLut_TClassManip(TClass* theClass){
      TDataMember* theMember_ext_lut = theClass->GetDataMember("ext_lut");
      theMember_ext_lut->CreateAttributeMap();
      TDictAttributeMap* memberAttrMap_ext_lut( theMember_ext_lut->GetAttributeMap() );
      memberAttrMap_ext_lut->AddProperty("mapping","blob");
   }

} // end of namespace ROOT

namespace ROOT {
   static TClass *L1MuDTPhiLut_Dictionary();
   static void L1MuDTPhiLut_TClassManip(TClass*);
   static void *new_L1MuDTPhiLut(void *p = 0);
   static void *newArray_L1MuDTPhiLut(Long_t size, void *p);
   static void delete_L1MuDTPhiLut(void *p);
   static void deleteArray_L1MuDTPhiLut(void *p);
   static void destruct_L1MuDTPhiLut(void *p);

   // Function generating the singleton type initializer
   static TGenericClassInfo *GenerateInitInstanceLocal(const ::L1MuDTPhiLut*)
   {
      ::L1MuDTPhiLut *ptr = 0;
      static ::TVirtualIsAProxy* isa_proxy = new ::TIsAProxy(typeid(::L1MuDTPhiLut));
      static ::ROOT::TGenericClassInfo 
         instance("L1MuDTPhiLut", "CondFormats/L1TObjects/interface/L1MuDTPhiLut.h", 42,
                  typeid(::L1MuDTPhiLut), ::ROOT::Internal::DefineBehavior(ptr, ptr),
                  &L1MuDTPhiLut_Dictionary, isa_proxy, 0,
                  sizeof(::L1MuDTPhiLut) );
      instance.SetNew(&new_L1MuDTPhiLut);
      instance.SetNewArray(&newArray_L1MuDTPhiLut);
      instance.SetDelete(&delete_L1MuDTPhiLut);
      instance.SetDeleteArray(&deleteArray_L1MuDTPhiLut);
      instance.SetDestructor(&destruct_L1MuDTPhiLut);
      return &instance;
   }
   TGenericClassInfo *GenerateInitInstance(const ::L1MuDTPhiLut*)
   {
      return GenerateInitInstanceLocal((::L1MuDTPhiLut*)0);
   }
   // Static variable to force the class initialization
   static ::ROOT::TGenericClassInfo *_R__UNIQUE_(Init) = GenerateInitInstanceLocal((const ::L1MuDTPhiLut*)0x0); R__UseDummy(_R__UNIQUE_(Init));

   // Dictionary for non-ClassDef classes
   static TClass *L1MuDTPhiLut_Dictionary() {
      TClass* theClass =::ROOT::GenerateInitInstanceLocal((const ::L1MuDTPhiLut*)0x0)->GetClass();
      L1MuDTPhiLut_TClassManip(theClass);
   return theClass;
   }

   static void L1MuDTPhiLut_TClassManip(TClass* theClass){
      TDataMember* theMember_phi_lut = theClass->GetDataMember("phi_lut");
      theMember_phi_lut->CreateAttributeMap();
      TDictAttributeMap* memberAttrMap_phi_lut( theMember_phi_lut->GetAttributeMap() );
      memberAttrMap_phi_lut->AddProperty("mapping","blob");
   }

} // end of namespace ROOT

namespace ROOT {
   static TClass *L1MuDTPtaLut_Dictionary();
   static void L1MuDTPtaLut_TClassManip(TClass*);
   static void *new_L1MuDTPtaLut(void *p = 0);
   static void *newArray_L1MuDTPtaLut(Long_t size, void *p);
   static void delete_L1MuDTPtaLut(void *p);
   static void deleteArray_L1MuDTPtaLut(void *p);
   static void destruct_L1MuDTPtaLut(void *p);

   // Function generating the singleton type initializer
   static TGenericClassInfo *GenerateInitInstanceLocal(const ::L1MuDTPtaLut*)
   {
      ::L1MuDTPtaLut *ptr = 0;
      static ::TVirtualIsAProxy* isa_proxy = new ::TIsAProxy(typeid(::L1MuDTPtaLut));
      static ::ROOT::TGenericClassInfo 
         instance("L1MuDTPtaLut", "CondFormats/L1TObjects/interface/L1MuDTPtaLut.h", 42,
                  typeid(::L1MuDTPtaLut), ::ROOT::Internal::DefineBehavior(ptr, ptr),
                  &L1MuDTPtaLut_Dictionary, isa_proxy, 0,
                  sizeof(::L1MuDTPtaLut) );
      instance.SetNew(&new_L1MuDTPtaLut);
      instance.SetNewArray(&newArray_L1MuDTPtaLut);
      instance.SetDelete(&delete_L1MuDTPtaLut);
      instance.SetDeleteArray(&deleteArray_L1MuDTPtaLut);
      instance.SetDestructor(&destruct_L1MuDTPtaLut);
      return &instance;
   }
   TGenericClassInfo *GenerateInitInstance(const ::L1MuDTPtaLut*)
   {
      return GenerateInitInstanceLocal((::L1MuDTPtaLut*)0);
   }
   // Static variable to force the class initialization
   static ::ROOT::TGenericClassInfo *_R__UNIQUE_(Init) = GenerateInitInstanceLocal((const ::L1MuDTPtaLut*)0x0); R__UseDummy(_R__UNIQUE_(Init));

   // Dictionary for non-ClassDef classes
   static TClass *L1MuDTPtaLut_Dictionary() {
      TClass* theClass =::ROOT::GenerateInitInstanceLocal((const ::L1MuDTPtaLut*)0x0)->GetClass();
      L1MuDTPtaLut_TClassManip(theClass);
   return theClass;
   }

   static void L1MuDTPtaLut_TClassManip(TClass* theClass){
      TDataMember* theMember_pta_lut = theClass->GetDataMember("pta_lut");
      theMember_pta_lut->CreateAttributeMap();
      TDictAttributeMap* memberAttrMap_pta_lut( theMember_pta_lut->GetAttributeMap() );
      memberAttrMap_pta_lut->AddProperty("mapping","blob");
      TDataMember* theMember_pta_threshold = theClass->GetDataMember("pta_threshold");
      theMember_pta_threshold->CreateAttributeMap();
      TDictAttributeMap* memberAttrMap_pta_threshold( theMember_pta_threshold->GetAttributeMap() );
      memberAttrMap_pta_threshold->AddProperty("mapping","blob");
   }

} // end of namespace ROOT

namespace ROOT {
   static TClass *L1MuDTEtaPattern_Dictionary();
   static void L1MuDTEtaPattern_TClassManip(TClass*);
   static void *new_L1MuDTEtaPattern(void *p = 0);
   static void *newArray_L1MuDTEtaPattern(Long_t size, void *p);
   static void delete_L1MuDTEtaPattern(void *p);
   static void deleteArray_L1MuDTEtaPattern(void *p);
   static void destruct_L1MuDTEtaPattern(void *p);

   // Function generating the singleton type initializer
   static TGenericClassInfo *GenerateInitInstanceLocal(const ::L1MuDTEtaPattern*)
   {
      ::L1MuDTEtaPattern *ptr = 0;
      static ::TVirtualIsAProxy* isa_proxy = new ::TIsAProxy(typeid(::L1MuDTEtaPattern));
      static ::ROOT::TGenericClassInfo 
         instance("L1MuDTEtaPattern", "CondFormats/L1TObjects/interface/L1MuDTEtaPattern.h", 47,
                  typeid(::L1MuDTEtaPattern), ::ROOT::Internal::DefineBehavior(ptr, ptr),
                  &L1MuDTEtaPattern_Dictionary, isa_proxy, 0,
                  sizeof(::L1MuDTEtaPattern) );
      instance.SetNew(&new_L1MuDTEtaPattern);
      instance.SetNewArray(&newArray_L1MuDTEtaPattern);
      instance.SetDelete(&delete_L1MuDTEtaPattern);
      instance.SetDeleteArray(&deleteArray_L1MuDTEtaPattern);
      instance.SetDestructor(&destruct_L1MuDTEtaPattern);
      return &instance;
   }
   TGenericClassInfo *GenerateInitInstance(const ::L1MuDTEtaPattern*)
   {
      return GenerateInitInstanceLocal((::L1MuDTEtaPattern*)0);
   }
   // Static variable to force the class initialization
   static ::ROOT::TGenericClassInfo *_R__UNIQUE_(Init) = GenerateInitInstanceLocal((const ::L1MuDTEtaPattern*)0x0); R__UseDummy(_R__UNIQUE_(Init));

   // Dictionary for non-ClassDef classes
   static TClass *L1MuDTEtaPattern_Dictionary() {
      TClass* theClass =::ROOT::GenerateInitInstanceLocal((const ::L1MuDTEtaPattern*)0x0)->GetClass();
      L1MuDTEtaPattern_TClassManip(theClass);
   return theClass;
   }

   static void L1MuDTEtaPattern_TClassManip(TClass* ){
   }

} // end of namespace ROOT

namespace ROOT {
   static TClass *pairlEshortcOL1MuDTEtaPatterngR_Dictionary();
   static void pairlEshortcOL1MuDTEtaPatterngR_TClassManip(TClass*);
   static void *new_pairlEshortcOL1MuDTEtaPatterngR(void *p = 0);
   static void *newArray_pairlEshortcOL1MuDTEtaPatterngR(Long_t size, void *p);
   static void delete_pairlEshortcOL1MuDTEtaPatterngR(void *p);
   static void deleteArray_pairlEshortcOL1MuDTEtaPatterngR(void *p);
   static void destruct_pairlEshortcOL1MuDTEtaPatterngR(void *p);

   // Function generating the singleton type initializer
   static TGenericClassInfo *GenerateInitInstanceLocal(const pair<short,L1MuDTEtaPattern>*)
   {
      pair<short,L1MuDTEtaPattern> *ptr = 0;
      static ::TVirtualIsAProxy* isa_proxy = new ::TIsAProxy(typeid(pair<short,L1MuDTEtaPattern>));
      static ::ROOT::TGenericClassInfo 
         instance("pair<short,L1MuDTEtaPattern>", "string", 96,
                  typeid(pair<short,L1MuDTEtaPattern>), ::ROOT::Internal::DefineBehavior(ptr, ptr),
                  &pairlEshortcOL1MuDTEtaPatterngR_Dictionary, isa_proxy, 0,
                  sizeof(pair<short,L1MuDTEtaPattern>) );
      instance.SetNew(&new_pairlEshortcOL1MuDTEtaPatterngR);
      instance.SetNewArray(&newArray_pairlEshortcOL1MuDTEtaPatterngR);
      instance.SetDelete(&delete_pairlEshortcOL1MuDTEtaPatterngR);
      instance.SetDeleteArray(&deleteArray_pairlEshortcOL1MuDTEtaPatterngR);
      instance.SetDestructor(&destruct_pairlEshortcOL1MuDTEtaPatterngR);
      return &instance;
   }
   // Static variable to force the class initialization
   static ::ROOT::TGenericClassInfo *_R__UNIQUE_(Init) = GenerateInitInstanceLocal((const pair<short,L1MuDTEtaPattern>*)0x0); R__UseDummy(_R__UNIQUE_(Init));

   // Dictionary for non-ClassDef classes
   static TClass *pairlEshortcOL1MuDTEtaPatterngR_Dictionary() {
      TClass* theClass =::ROOT::GenerateInitInstanceLocal((const pair<short,L1MuDTEtaPattern>*)0x0)->GetClass();
      pairlEshortcOL1MuDTEtaPatterngR_TClassManip(theClass);
   return theClass;
   }

   static void pairlEshortcOL1MuDTEtaPatterngR_TClassManip(TClass* ){
   }

} // end of namespace ROOT

namespace ROOT {
   static TClass *pairlEconstsPshortcOL1MuDTEtaPatterngR_Dictionary();
   static void pairlEconstsPshortcOL1MuDTEtaPatterngR_TClassManip(TClass*);
   static void *new_pairlEconstsPshortcOL1MuDTEtaPatterngR(void *p = 0);
   static void *newArray_pairlEconstsPshortcOL1MuDTEtaPatterngR(Long_t size, void *p);
   static void delete_pairlEconstsPshortcOL1MuDTEtaPatterngR(void *p);
   static void deleteArray_pairlEconstsPshortcOL1MuDTEtaPatterngR(void *p);
   static void destruct_pairlEconstsPshortcOL1MuDTEtaPatterngR(void *p);

   // Function generating the singleton type initializer
   static TGenericClassInfo *GenerateInitInstanceLocal(const pair<const short,L1MuDTEtaPattern>*)
   {
      pair<const short,L1MuDTEtaPattern> *ptr = 0;
      static ::TVirtualIsAProxy* isa_proxy = new ::TIsAProxy(typeid(pair<const short,L1MuDTEtaPattern>));
      static ::ROOT::TGenericClassInfo 
         instance("pair<const short,L1MuDTEtaPattern>", "string", 96,
                  typeid(pair<const short,L1MuDTEtaPattern>), ::ROOT::Internal::DefineBehavior(ptr, ptr),
                  &pairlEconstsPshortcOL1MuDTEtaPatterngR_Dictionary, isa_proxy, 0,
                  sizeof(pair<const short,L1MuDTEtaPattern>) );
      instance.SetNew(&new_pairlEconstsPshortcOL1MuDTEtaPatterngR);
      instance.SetNewArray(&newArray_pairlEconstsPshortcOL1MuDTEtaPatterngR);
      instance.SetDelete(&delete_pairlEconstsPshortcOL1MuDTEtaPatterngR);
      instance.SetDeleteArray(&deleteArray_pairlEconstsPshortcOL1MuDTEtaPatterngR);
      instance.SetDestructor(&destruct_pairlEconstsPshortcOL1MuDTEtaPatterngR);

      ::ROOT::AddClassAlternate("pair<const short,L1MuDTEtaPattern>","map<short,L1MuDTEtaPattern>::value_type");
      return &instance;
   }
   // Static variable to force the class initialization
   static ::ROOT::TGenericClassInfo *_R__UNIQUE_(Init) = GenerateInitInstanceLocal((const pair<const short,L1MuDTEtaPattern>*)0x0); R__UseDummy(_R__UNIQUE_(Init));

   // Dictionary for non-ClassDef classes
   static TClass *pairlEconstsPshortcOL1MuDTEtaPatterngR_Dictionary() {
      TClass* theClass =::ROOT::GenerateInitInstanceLocal((const pair<const short,L1MuDTEtaPattern>*)0x0)->GetClass();
      pairlEconstsPshortcOL1MuDTEtaPatterngR_TClassManip(theClass);
   return theClass;
   }

   static void pairlEconstsPshortcOL1MuDTEtaPatterngR_TClassManip(TClass* ){
   }

} // end of namespace ROOT

namespace ROOT {
   static TClass *L1MuDTEtaPatternLut_Dictionary();
   static void L1MuDTEtaPatternLut_TClassManip(TClass*);
   static void *new_L1MuDTEtaPatternLut(void *p = 0);
   static void *newArray_L1MuDTEtaPatternLut(Long_t size, void *p);
   static void delete_L1MuDTEtaPatternLut(void *p);
   static void deleteArray_L1MuDTEtaPatternLut(void *p);
   static void destruct_L1MuDTEtaPatternLut(void *p);

   // Function generating the singleton type initializer
   static TGenericClassInfo *GenerateInitInstanceLocal(const ::L1MuDTEtaPatternLut*)
   {
      ::L1MuDTEtaPatternLut *ptr = 0;
      static ::TVirtualIsAProxy* isa_proxy = new ::TIsAProxy(typeid(::L1MuDTEtaPatternLut));
      static ::ROOT::TGenericClassInfo 
         instance("L1MuDTEtaPatternLut", "CondFormats/L1TObjects/interface/L1MuDTEtaPatternLut.h", 41,
                  typeid(::L1MuDTEtaPatternLut), ::ROOT::Internal::DefineBehavior(ptr, ptr),
                  &L1MuDTEtaPatternLut_Dictionary, isa_proxy, 0,
                  sizeof(::L1MuDTEtaPatternLut) );
      instance.SetNew(&new_L1MuDTEtaPatternLut);
      instance.SetNewArray(&newArray_L1MuDTEtaPatternLut);
      instance.SetDelete(&delete_L1MuDTEtaPatternLut);
      instance.SetDeleteArray(&deleteArray_L1MuDTEtaPatternLut);
      instance.SetDestructor(&destruct_L1MuDTEtaPatternLut);
      return &instance;
   }
   TGenericClassInfo *GenerateInitInstance(const ::L1MuDTEtaPatternLut*)
   {
      return GenerateInitInstanceLocal((::L1MuDTEtaPatternLut*)0);
   }
   // Static variable to force the class initialization
   static ::ROOT::TGenericClassInfo *_R__UNIQUE_(Init) = GenerateInitInstanceLocal((const ::L1MuDTEtaPatternLut*)0x0); R__UseDummy(_R__UNIQUE_(Init));

   // Dictionary for non-ClassDef classes
   static TClass *L1MuDTEtaPatternLut_Dictionary() {
      TClass* theClass =::ROOT::GenerateInitInstanceLocal((const ::L1MuDTEtaPatternLut*)0x0)->GetClass();
      L1MuDTEtaPatternLut_TClassManip(theClass);
   return theClass;
   }

   static void L1MuDTEtaPatternLut_TClassManip(TClass* theClass){
      TDataMember* theMember_m_lut = theClass->GetDataMember("m_lut");
      theMember_m_lut->CreateAttributeMap();
      TDictAttributeMap* memberAttrMap_m_lut( theMember_m_lut->GetAttributeMap() );
      memberAttrMap_m_lut->AddProperty("mapping","blob");
   }

} // end of namespace ROOT

namespace ROOT {
   static TClass *L1MuDTQualPatternLut_Dictionary();
   static void L1MuDTQualPatternLut_TClassManip(TClass*);
   static void *new_L1MuDTQualPatternLut(void *p = 0);
   static void *newArray_L1MuDTQualPatternLut(Long_t size, void *p);
   static void delete_L1MuDTQualPatternLut(void *p);
   static void deleteArray_L1MuDTQualPatternLut(void *p);
   static void destruct_L1MuDTQualPatternLut(void *p);

   // Function generating the singleton type initializer
   static TGenericClassInfo *GenerateInitInstanceLocal(const ::L1MuDTQualPatternLut*)
   {
      ::L1MuDTQualPatternLut *ptr = 0;
      static ::TVirtualIsAProxy* isa_proxy = new ::TIsAProxy(typeid(::L1MuDTQualPatternLut));
      static ::ROOT::TGenericClassInfo 
         instance("L1MuDTQualPatternLut", "CondFormats/L1TObjects/interface/L1MuDTQualPatternLut.h", 43,
                  typeid(::L1MuDTQualPatternLut), ::ROOT::Internal::DefineBehavior(ptr, ptr),
                  &L1MuDTQualPatternLut_Dictionary, isa_proxy, 0,
                  sizeof(::L1MuDTQualPatternLut) );
      instance.SetNew(&new_L1MuDTQualPatternLut);
      instance.SetNewArray(&newArray_L1MuDTQualPatternLut);
      instance.SetDelete(&delete_L1MuDTQualPatternLut);
      instance.SetDeleteArray(&deleteArray_L1MuDTQualPatternLut);
      instance.SetDestructor(&destruct_L1MuDTQualPatternLut);
      return &instance;
   }
   TGenericClassInfo *GenerateInitInstance(const ::L1MuDTQualPatternLut*)
   {
      return GenerateInitInstanceLocal((::L1MuDTQualPatternLut*)0);
   }
   // Static variable to force the class initialization
   static ::ROOT::TGenericClassInfo *_R__UNIQUE_(Init) = GenerateInitInstanceLocal((const ::L1MuDTQualPatternLut*)0x0); R__UseDummy(_R__UNIQUE_(Init));

   // Dictionary for non-ClassDef classes
   static TClass *L1MuDTQualPatternLut_Dictionary() {
      TClass* theClass =::ROOT::GenerateInitInstanceLocal((const ::L1MuDTQualPatternLut*)0x0)->GetClass();
      L1MuDTQualPatternLut_TClassManip(theClass);
   return theClass;
   }

   static void L1MuDTQualPatternLut_TClassManip(TClass* theClass){
      TDataMember* theMember_m_lut = theClass->GetDataMember("m_lut");
      theMember_m_lut->CreateAttributeMap();
      TDictAttributeMap* memberAttrMap_m_lut( theMember_m_lut->GetAttributeMap() );
      memberAttrMap_m_lut->AddProperty("mapping","blob");
   }

} // end of namespace ROOT

namespace ROOT {
   static TClass *L1MuDTTFParameters_Dictionary();
   static void L1MuDTTFParameters_TClassManip(TClass*);
   static void *new_L1MuDTTFParameters(void *p = 0);
   static void *newArray_L1MuDTTFParameters(Long_t size, void *p);
   static void delete_L1MuDTTFParameters(void *p);
   static void deleteArray_L1MuDTTFParameters(void *p);
   static void destruct_L1MuDTTFParameters(void *p);

   // Function generating the singleton type initializer
   static TGenericClassInfo *GenerateInitInstanceLocal(const ::L1MuDTTFParameters*)
   {
      ::L1MuDTTFParameters *ptr = 0;
      static ::TVirtualIsAProxy* isa_proxy = new ::TIsAProxy(typeid(::L1MuDTTFParameters));
      static ::ROOT::TGenericClassInfo 
         instance("L1MuDTTFParameters", "CondFormats/L1TObjects/interface/L1MuDTTFParameters.h", 40,
                  typeid(::L1MuDTTFParameters), ::ROOT::Internal::DefineBehavior(ptr, ptr),
                  &L1MuDTTFParameters_Dictionary, isa_proxy, 0,
                  sizeof(::L1MuDTTFParameters) );
      instance.SetNew(&new_L1MuDTTFParameters);
      instance.SetNewArray(&newArray_L1MuDTTFParameters);
      instance.SetDelete(&delete_L1MuDTTFParameters);
      instance.SetDeleteArray(&deleteArray_L1MuDTTFParameters);
      instance.SetDestructor(&destruct_L1MuDTTFParameters);
      return &instance;
   }
   TGenericClassInfo *GenerateInitInstance(const ::L1MuDTTFParameters*)
   {
      return GenerateInitInstanceLocal((::L1MuDTTFParameters*)0);
   }
   // Static variable to force the class initialization
   static ::ROOT::TGenericClassInfo *_R__UNIQUE_(Init) = GenerateInitInstanceLocal((const ::L1MuDTTFParameters*)0x0); R__UseDummy(_R__UNIQUE_(Init));

   // Dictionary for non-ClassDef classes
   static TClass *L1MuDTTFParameters_Dictionary() {
      TClass* theClass =::ROOT::GenerateInitInstanceLocal((const ::L1MuDTTFParameters*)0x0)->GetClass();
      L1MuDTTFParameters_TClassManip(theClass);
   return theClass;
   }

   static void L1MuDTTFParameters_TClassManip(TClass* ){
   }

} // end of namespace ROOT

namespace ROOT {
   static TClass *L1MuDTTFMasks_Dictionary();
   static void L1MuDTTFMasks_TClassManip(TClass*);
   static void *new_L1MuDTTFMasks(void *p = 0);
   static void *newArray_L1MuDTTFMasks(Long_t size, void *p);
   static void delete_L1MuDTTFMasks(void *p);
   static void deleteArray_L1MuDTTFMasks(void *p);
   static void destruct_L1MuDTTFMasks(void *p);

   // Function generating the singleton type initializer
   static TGenericClassInfo *GenerateInitInstanceLocal(const ::L1MuDTTFMasks*)
   {
      ::L1MuDTTFMasks *ptr = 0;
      static ::TVirtualIsAProxy* isa_proxy = new ::TIsAProxy(typeid(::L1MuDTTFMasks));
      static ::ROOT::TGenericClassInfo 
         instance("L1MuDTTFMasks", "CondFormats/L1TObjects/interface/L1MuDTTFMasks.h", 40,
                  typeid(::L1MuDTTFMasks), ::ROOT::Internal::DefineBehavior(ptr, ptr),
                  &L1MuDTTFMasks_Dictionary, isa_proxy, 0,
                  sizeof(::L1MuDTTFMasks) );
      instance.SetNew(&new_L1MuDTTFMasks);
      instance.SetNewArray(&newArray_L1MuDTTFMasks);
      instance.SetDelete(&delete_L1MuDTTFMasks);
      instance.SetDeleteArray(&deleteArray_L1MuDTTFMasks);
      instance.SetDestructor(&destruct_L1MuDTTFMasks);
      return &instance;
   }
   TGenericClassInfo *GenerateInitInstance(const ::L1MuDTTFMasks*)
   {
      return GenerateInitInstanceLocal((::L1MuDTTFMasks*)0);
   }
   // Static variable to force the class initialization
   static ::ROOT::TGenericClassInfo *_R__UNIQUE_(Init) = GenerateInitInstanceLocal((const ::L1MuDTTFMasks*)0x0); R__UseDummy(_R__UNIQUE_(Init));

   // Dictionary for non-ClassDef classes
   static TClass *L1MuDTTFMasks_Dictionary() {
      TClass* theClass =::ROOT::GenerateInitInstanceLocal((const ::L1MuDTTFMasks*)0x0)->GetClass();
      L1MuDTTFMasks_TClassManip(theClass);
   return theClass;
   }

   static void L1MuDTTFMasks_TClassManip(TClass* ){
   }

} // end of namespace ROOT

namespace ROOT {
   static TClass *L1MuCSCTFConfiguration_Dictionary();
   static void L1MuCSCTFConfiguration_TClassManip(TClass*);
   static void *new_L1MuCSCTFConfiguration(void *p = 0);
   static void *newArray_L1MuCSCTFConfiguration(Long_t size, void *p);
   static void delete_L1MuCSCTFConfiguration(void *p);
   static void deleteArray_L1MuCSCTFConfiguration(void *p);
   static void destruct_L1MuCSCTFConfiguration(void *p);

   // Function generating the singleton type initializer
   static TGenericClassInfo *GenerateInitInstanceLocal(const ::L1MuCSCTFConfiguration*)
   {
      ::L1MuCSCTFConfiguration *ptr = 0;
      static ::TVirtualIsAProxy* isa_proxy = new ::TIsAProxy(typeid(::L1MuCSCTFConfiguration));
      static ::ROOT::TGenericClassInfo 
         instance("L1MuCSCTFConfiguration", "CondFormats/L1TObjects/interface/L1MuCSCTFConfiguration.h", 9,
                  typeid(::L1MuCSCTFConfiguration), ::ROOT::Internal::DefineBehavior(ptr, ptr),
                  &L1MuCSCTFConfiguration_Dictionary, isa_proxy, 0,
                  sizeof(::L1MuCSCTFConfiguration) );
      instance.SetNew(&new_L1MuCSCTFConfiguration);
      instance.SetNewArray(&newArray_L1MuCSCTFConfiguration);
      instance.SetDelete(&delete_L1MuCSCTFConfiguration);
      instance.SetDeleteArray(&deleteArray_L1MuCSCTFConfiguration);
      instance.SetDestructor(&destruct_L1MuCSCTFConfiguration);
      return &instance;
   }
   TGenericClassInfo *GenerateInitInstance(const ::L1MuCSCTFConfiguration*)
   {
      return GenerateInitInstanceLocal((::L1MuCSCTFConfiguration*)0);
   }
   // Static variable to force the class initialization
   static ::ROOT::TGenericClassInfo *_R__UNIQUE_(Init) = GenerateInitInstanceLocal((const ::L1MuCSCTFConfiguration*)0x0); R__UseDummy(_R__UNIQUE_(Init));

   // Dictionary for non-ClassDef classes
   static TClass *L1MuCSCTFConfiguration_Dictionary() {
      TClass* theClass =::ROOT::GenerateInitInstanceLocal((const ::L1MuCSCTFConfiguration*)0x0)->GetClass();
      L1MuCSCTFConfiguration_TClassManip(theClass);
   return theClass;
   }

   static void L1MuCSCTFConfiguration_TClassManip(TClass* ){
   }

} // end of namespace ROOT

namespace ROOT {
   static TClass *L1MuCSCTFAlignment_Dictionary();
   static void L1MuCSCTFAlignment_TClassManip(TClass*);
   static void *new_L1MuCSCTFAlignment(void *p = 0);
   static void *newArray_L1MuCSCTFAlignment(Long_t size, void *p);
   static void delete_L1MuCSCTFAlignment(void *p);
   static void deleteArray_L1MuCSCTFAlignment(void *p);
   static void destruct_L1MuCSCTFAlignment(void *p);

   // Function generating the singleton type initializer
   static TGenericClassInfo *GenerateInitInstanceLocal(const ::L1MuCSCTFAlignment*)
   {
      ::L1MuCSCTFAlignment *ptr = 0;
      static ::TVirtualIsAProxy* isa_proxy = new ::TIsAProxy(typeid(::L1MuCSCTFAlignment));
      static ::ROOT::TGenericClassInfo 
         instance("L1MuCSCTFAlignment", "CondFormats/L1TObjects/interface/L1MuCSCTFAlignment.h", 8,
                  typeid(::L1MuCSCTFAlignment), ::ROOT::Internal::DefineBehavior(ptr, ptr),
                  &L1MuCSCTFAlignment_Dictionary, isa_proxy, 0,
                  sizeof(::L1MuCSCTFAlignment) );
      instance.SetNew(&new_L1MuCSCTFAlignment);
      instance.SetNewArray(&newArray_L1MuCSCTFAlignment);
      instance.SetDelete(&delete_L1MuCSCTFAlignment);
      instance.SetDeleteArray(&deleteArray_L1MuCSCTFAlignment);
      instance.SetDestructor(&destruct_L1MuCSCTFAlignment);
      return &instance;
   }
   TGenericClassInfo *GenerateInitInstance(const ::L1MuCSCTFAlignment*)
   {
      return GenerateInitInstanceLocal((::L1MuCSCTFAlignment*)0);
   }
   // Static variable to force the class initialization
   static ::ROOT::TGenericClassInfo *_R__UNIQUE_(Init) = GenerateInitInstanceLocal((const ::L1MuCSCTFAlignment*)0x0); R__UseDummy(_R__UNIQUE_(Init));

   // Dictionary for non-ClassDef classes
   static TClass *L1MuCSCTFAlignment_Dictionary() {
      TClass* theClass =::ROOT::GenerateInitInstanceLocal((const ::L1MuCSCTFAlignment*)0x0)->GetClass();
      L1MuCSCTFAlignment_TClassManip(theClass);
   return theClass;
   }

   static void L1MuCSCTFAlignment_TClassManip(TClass* theClass){
      TDataMember* theMember_coefficients = theClass->GetDataMember("coefficients");
      theMember_coefficients->CreateAttributeMap();
      TDictAttributeMap* memberAttrMap_coefficients( theMember_coefficients->GetAttributeMap() );
      memberAttrMap_coefficients->AddProperty("mapping","blob");
   }

} // end of namespace ROOT

namespace ROOT {
   static TClass *L1MuCSCPtLut_Dictionary();
   static void L1MuCSCPtLut_TClassManip(TClass*);
   static void *new_L1MuCSCPtLut(void *p = 0);
   static void *newArray_L1MuCSCPtLut(Long_t size, void *p);
   static void delete_L1MuCSCPtLut(void *p);
   static void deleteArray_L1MuCSCPtLut(void *p);
   static void destruct_L1MuCSCPtLut(void *p);

   // Function generating the singleton type initializer
   static TGenericClassInfo *GenerateInitInstanceLocal(const ::L1MuCSCPtLut*)
   {
      ::L1MuCSCPtLut *ptr = 0;
      static ::TVirtualIsAProxy* isa_proxy = new ::TIsAProxy(typeid(::L1MuCSCPtLut));
      static ::ROOT::TGenericClassInfo 
         instance("L1MuCSCPtLut", "CondFormats/L1TObjects/interface/L1MuCSCPtLut.h", 11,
                  typeid(::L1MuCSCPtLut), ::ROOT::Internal::DefineBehavior(ptr, ptr),
                  &L1MuCSCPtLut_Dictionary, isa_proxy, 0,
                  sizeof(::L1MuCSCPtLut) );
      instance.SetNew(&new_L1MuCSCPtLut);
      instance.SetNewArray(&newArray_L1MuCSCPtLut);
      instance.SetDelete(&delete_L1MuCSCPtLut);
      instance.SetDeleteArray(&deleteArray_L1MuCSCPtLut);
      instance.SetDestructor(&destruct_L1MuCSCPtLut);
      return &instance;
   }
   TGenericClassInfo *GenerateInitInstance(const ::L1MuCSCPtLut*)
   {
      return GenerateInitInstanceLocal((::L1MuCSCPtLut*)0);
   }
   // Static variable to force the class initialization
   static ::ROOT::TGenericClassInfo *_R__UNIQUE_(Init) = GenerateInitInstanceLocal((const ::L1MuCSCPtLut*)0x0); R__UseDummy(_R__UNIQUE_(Init));

   // Dictionary for non-ClassDef classes
   static TClass *L1MuCSCPtLut_Dictionary() {
      TClass* theClass =::ROOT::GenerateInitInstanceLocal((const ::L1MuCSCPtLut*)0x0)->GetClass();
      L1MuCSCPtLut_TClassManip(theClass);
   return theClass;
   }

   static void L1MuCSCPtLut_TClassManip(TClass* theClass){
      TDataMember* theMember_pt_lut = theClass->GetDataMember("pt_lut");
      theMember_pt_lut->CreateAttributeMap();
      TDictAttributeMap* memberAttrMap_pt_lut( theMember_pt_lut->GetAttributeMap() );
      memberAttrMap_pt_lut->AddProperty("mapping","blob");
   }

} // end of namespace ROOT

namespace ROOT {
   static TClass *L1RPCConfig_Dictionary();
   static void L1RPCConfig_TClassManip(TClass*);
   static void *new_L1RPCConfig(void *p = 0);
   static void *newArray_L1RPCConfig(Long_t size, void *p);
   static void delete_L1RPCConfig(void *p);
   static void deleteArray_L1RPCConfig(void *p);
   static void destruct_L1RPCConfig(void *p);

   // Function generating the singleton type initializer
   static TGenericClassInfo *GenerateInitInstanceLocal(const ::L1RPCConfig*)
   {
      ::L1RPCConfig *ptr = 0;
      static ::TVirtualIsAProxy* isa_proxy = new ::TIsAProxy(typeid(::L1RPCConfig));
      static ::ROOT::TGenericClassInfo 
         instance("L1RPCConfig", "CondFormats/L1TObjects/interface/L1RPCConfig.h", 29,
                  typeid(::L1RPCConfig), ::ROOT::Internal::DefineBehavior(ptr, ptr),
                  &L1RPCConfig_Dictionary, isa_proxy, 0,
                  sizeof(::L1RPCConfig) );
      instance.SetNew(&new_L1RPCConfig);
      instance.SetNewArray(&newArray_L1RPCConfig);
      instance.SetDelete(&delete_L1RPCConfig);
      instance.SetDeleteArray(&deleteArray_L1RPCConfig);
      instance.SetDestructor(&destruct_L1RPCConfig);
      return &instance;
   }
   TGenericClassInfo *GenerateInitInstance(const ::L1RPCConfig*)
   {
      return GenerateInitInstanceLocal((::L1RPCConfig*)0);
   }
   // Static variable to force the class initialization
   static ::ROOT::TGenericClassInfo *_R__UNIQUE_(Init) = GenerateInitInstanceLocal((const ::L1RPCConfig*)0x0); R__UseDummy(_R__UNIQUE_(Init));

   // Dictionary for non-ClassDef classes
   static TClass *L1RPCConfig_Dictionary() {
      TClass* theClass =::ROOT::GenerateInitInstanceLocal((const ::L1RPCConfig*)0x0)->GetClass();
      L1RPCConfig_TClassManip(theClass);
   return theClass;
   }

   static void L1RPCConfig_TClassManip(TClass* theClass){
      TDataMember* theMember_m_pats = theClass->GetDataMember("m_pats");
      theMember_m_pats->CreateAttributeMap();
      TDictAttributeMap* memberAttrMap_m_pats( theMember_m_pats->GetAttributeMap() );
      memberAttrMap_m_pats->AddProperty("mapping","blob");
      TDataMember* theMember_m_quals = theClass->GetDataMember("m_quals");
      theMember_m_quals->CreateAttributeMap();
      TDictAttributeMap* memberAttrMap_m_quals( theMember_m_quals->GetAttributeMap() );
      memberAttrMap_m_quals->AddProperty("mapping","blob");
   }

} // end of namespace ROOT

namespace ROOT {
   static TClass *RPCPattern_Dictionary();
   static void RPCPattern_TClassManip(TClass*);
   static void *new_RPCPattern(void *p = 0);
   static void *newArray_RPCPattern(Long_t size, void *p);
   static void delete_RPCPattern(void *p);
   static void deleteArray_RPCPattern(void *p);
   static void destruct_RPCPattern(void *p);

   // Function generating the singleton type initializer
   static TGenericClassInfo *GenerateInitInstanceLocal(const ::RPCPattern*)
   {
      ::RPCPattern *ptr = 0;
      static ::TVirtualIsAProxy* isa_proxy = new ::TIsAProxy(typeid(::RPCPattern));
      static ::ROOT::TGenericClassInfo 
         instance("RPCPattern", "CondFormats/L1TObjects/interface/RPCPattern.h", 16,
                  typeid(::RPCPattern), ::ROOT::Internal::DefineBehavior(ptr, ptr),
                  &RPCPattern_Dictionary, isa_proxy, 0,
                  sizeof(::RPCPattern) );
      instance.SetNew(&new_RPCPattern);
      instance.SetNewArray(&newArray_RPCPattern);
      instance.SetDelete(&delete_RPCPattern);
      instance.SetDeleteArray(&deleteArray_RPCPattern);
      instance.SetDestructor(&destruct_RPCPattern);
      return &instance;
   }
   TGenericClassInfo *GenerateInitInstance(const ::RPCPattern*)
   {
      return GenerateInitInstanceLocal((::RPCPattern*)0);
   }
   // Static variable to force the class initialization
   static ::ROOT::TGenericClassInfo *_R__UNIQUE_(Init) = GenerateInitInstanceLocal((const ::RPCPattern*)0x0); R__UseDummy(_R__UNIQUE_(Init));

   // Dictionary for non-ClassDef classes
   static TClass *RPCPattern_Dictionary() {
      TClass* theClass =::ROOT::GenerateInitInstanceLocal((const ::RPCPattern*)0x0)->GetClass();
      RPCPattern_TClassManip(theClass);
   return theClass;
   }

   static void RPCPattern_TClassManip(TClass* ){
   }

} // end of namespace ROOT

namespace ROOT {
   static TClass *RPCPatterncLcLRPCLogicalStrip_Dictionary();
   static void RPCPatterncLcLRPCLogicalStrip_TClassManip(TClass*);
   static void *new_RPCPatterncLcLRPCLogicalStrip(void *p = 0);
   static void *newArray_RPCPatterncLcLRPCLogicalStrip(Long_t size, void *p);
   static void delete_RPCPatterncLcLRPCLogicalStrip(void *p);
   static void deleteArray_RPCPatterncLcLRPCLogicalStrip(void *p);
   static void destruct_RPCPatterncLcLRPCLogicalStrip(void *p);

   // Function generating the singleton type initializer
   static TGenericClassInfo *GenerateInitInstanceLocal(const ::RPCPattern::RPCLogicalStrip*)
   {
      ::RPCPattern::RPCLogicalStrip *ptr = 0;
      static ::TVirtualIsAProxy* isa_proxy = new ::TIsAProxy(typeid(::RPCPattern::RPCLogicalStrip));
      static ::ROOT::TGenericClassInfo 
         instance("RPCPattern::RPCLogicalStrip", "CondFormats/L1TObjects/interface/RPCPattern.h", 25,
                  typeid(::RPCPattern::RPCLogicalStrip), ::ROOT::Internal::DefineBehavior(ptr, ptr),
                  &RPCPatterncLcLRPCLogicalStrip_Dictionary, isa_proxy, 0,
                  sizeof(::RPCPattern::RPCLogicalStrip) );
      instance.SetNew(&new_RPCPatterncLcLRPCLogicalStrip);
      instance.SetNewArray(&newArray_RPCPatterncLcLRPCLogicalStrip);
      instance.SetDelete(&delete_RPCPatterncLcLRPCLogicalStrip);
      instance.SetDeleteArray(&deleteArray_RPCPatterncLcLRPCLogicalStrip);
      instance.SetDestructor(&destruct_RPCPatterncLcLRPCLogicalStrip);
      return &instance;
   }
   TGenericClassInfo *GenerateInitInstance(const ::RPCPattern::RPCLogicalStrip*)
   {
      return GenerateInitInstanceLocal((::RPCPattern::RPCLogicalStrip*)0);
   }
   // Static variable to force the class initialization
   static ::ROOT::TGenericClassInfo *_R__UNIQUE_(Init) = GenerateInitInstanceLocal((const ::RPCPattern::RPCLogicalStrip*)0x0); R__UseDummy(_R__UNIQUE_(Init));

   // Dictionary for non-ClassDef classes
   static TClass *RPCPatterncLcLRPCLogicalStrip_Dictionary() {
      TClass* theClass =::ROOT::GenerateInitInstanceLocal((const ::RPCPattern::RPCLogicalStrip*)0x0)->GetClass();
      RPCPatterncLcLRPCLogicalStrip_TClassManip(theClass);
   return theClass;
   }

   static void RPCPatterncLcLRPCLogicalStrip_TClassManip(TClass* ){
   }

} // end of namespace ROOT

namespace ROOT {
   static TClass *RPCPatterncLcLTQuality_Dictionary();
   static void RPCPatterncLcLTQuality_TClassManip(TClass*);
   static void *new_RPCPatterncLcLTQuality(void *p = 0);
   static void *newArray_RPCPatterncLcLTQuality(Long_t size, void *p);
   static void delete_RPCPatterncLcLTQuality(void *p);
   static void deleteArray_RPCPatterncLcLTQuality(void *p);
   static void destruct_RPCPatterncLcLTQuality(void *p);

   // Function generating the singleton type initializer
   static TGenericClassInfo *GenerateInitInstanceLocal(const ::RPCPattern::TQuality*)
   {
      ::RPCPattern::TQuality *ptr = 0;
      static ::TVirtualIsAProxy* isa_proxy = new ::TIsAProxy(typeid(::RPCPattern::TQuality));
      static ::ROOT::TGenericClassInfo 
         instance("RPCPattern::TQuality", "CondFormats/L1TObjects/interface/RPCPattern.h", 38,
                  typeid(::RPCPattern::TQuality), ::ROOT::Internal::DefineBehavior(ptr, ptr),
                  &RPCPatterncLcLTQuality_Dictionary, isa_proxy, 0,
                  sizeof(::RPCPattern::TQuality) );
      instance.SetNew(&new_RPCPatterncLcLTQuality);
      instance.SetNewArray(&newArray_RPCPatterncLcLTQuality);
      instance.SetDelete(&delete_RPCPatterncLcLTQuality);
      instance.SetDeleteArray(&deleteArray_RPCPatterncLcLTQuality);
      instance.SetDestructor(&destruct_RPCPatterncLcLTQuality);
      return &instance;
   }
   TGenericClassInfo *GenerateInitInstance(const ::RPCPattern::TQuality*)
   {
      return GenerateInitInstanceLocal((::RPCPattern::TQuality*)0);
   }
   // Static variable to force the class initialization
   static ::ROOT::TGenericClassInfo *_R__UNIQUE_(Init) = GenerateInitInstanceLocal((const ::RPCPattern::TQuality*)0x0); R__UseDummy(_R__UNIQUE_(Init));

   // Dictionary for non-ClassDef classes
   static TClass *RPCPatterncLcLTQuality_Dictionary() {
      TClass* theClass =::ROOT::GenerateInitInstanceLocal((const ::RPCPattern::TQuality*)0x0)->GetClass();
      RPCPatterncLcLTQuality_TClassManip(theClass);
   return theClass;
   }

   static void RPCPatterncLcLTQuality_TClassManip(TClass* ){
   }

} // end of namespace ROOT

namespace ROOT {
   static TClass *L1RPCConeDefinition_Dictionary();
   static void L1RPCConeDefinition_TClassManip(TClass*);
   static void *new_L1RPCConeDefinition(void *p = 0);
   static void *newArray_L1RPCConeDefinition(Long_t size, void *p);
   static void delete_L1RPCConeDefinition(void *p);
   static void deleteArray_L1RPCConeDefinition(void *p);
   static void destruct_L1RPCConeDefinition(void *p);

   // Function generating the singleton type initializer
   static TGenericClassInfo *GenerateInitInstanceLocal(const ::L1RPCConeDefinition*)
   {
      ::L1RPCConeDefinition *ptr = 0;
      static ::TVirtualIsAProxy* isa_proxy = new ::TIsAProxy(typeid(::L1RPCConeDefinition));
      static ::ROOT::TGenericClassInfo 
         instance("L1RPCConeDefinition", "CondFormats/L1TObjects/interface/L1RPCConeDefinition.h", 8,
                  typeid(::L1RPCConeDefinition), ::ROOT::Internal::DefineBehavior(ptr, ptr),
                  &L1RPCConeDefinition_Dictionary, isa_proxy, 0,
                  sizeof(::L1RPCConeDefinition) );
      instance.SetNew(&new_L1RPCConeDefinition);
      instance.SetNewArray(&newArray_L1RPCConeDefinition);
      instance.SetDelete(&delete_L1RPCConeDefinition);
      instance.SetDeleteArray(&deleteArray_L1RPCConeDefinition);
      instance.SetDestructor(&destruct_L1RPCConeDefinition);
      return &instance;
   }
   TGenericClassInfo *GenerateInitInstance(const ::L1RPCConeDefinition*)
   {
      return GenerateInitInstanceLocal((::L1RPCConeDefinition*)0);
   }
   // Static variable to force the class initialization
   static ::ROOT::TGenericClassInfo *_R__UNIQUE_(Init) = GenerateInitInstanceLocal((const ::L1RPCConeDefinition*)0x0); R__UseDummy(_R__UNIQUE_(Init));

   // Dictionary for non-ClassDef classes
   static TClass *L1RPCConeDefinition_Dictionary() {
      TClass* theClass =::ROOT::GenerateInitInstanceLocal((const ::L1RPCConeDefinition*)0x0)->GetClass();
      L1RPCConeDefinition_TClassManip(theClass);
   return theClass;
   }

   static void L1RPCConeDefinition_TClassManip(TClass* theClass){
      TDataMember* theMember_m_LPSizeVec = theClass->GetDataMember("m_LPSizeVec");
      theMember_m_LPSizeVec->CreateAttributeMap();
      TDictAttributeMap* memberAttrMap_m_LPSizeVec( theMember_m_LPSizeVec->GetAttributeMap() );
      memberAttrMap_m_LPSizeVec->AddProperty("mapping","blob");
      TDataMember* theMember_m_ringToTowerVec = theClass->GetDataMember("m_ringToTowerVec");
      theMember_m_ringToTowerVec->CreateAttributeMap();
      TDictAttributeMap* memberAttrMap_m_ringToTowerVec( theMember_m_ringToTowerVec->GetAttributeMap() );
      memberAttrMap_m_ringToTowerVec->AddProperty("mapping","blob");
      TDataMember* theMember_m_ringToLPVec = theClass->GetDataMember("m_ringToLPVec");
      theMember_m_ringToLPVec->CreateAttributeMap();
      TDictAttributeMap* memberAttrMap_m_ringToLPVec( theMember_m_ringToLPVec->GetAttributeMap() );
      memberAttrMap_m_ringToLPVec->AddProperty("mapping","blob");
   }

} // end of namespace ROOT

namespace ROOT {
   static TClass *L1RPCConeDefinitioncLcLTLPSize_Dictionary();
   static void L1RPCConeDefinitioncLcLTLPSize_TClassManip(TClass*);
   static void *new_L1RPCConeDefinitioncLcLTLPSize(void *p = 0);
   static void *newArray_L1RPCConeDefinitioncLcLTLPSize(Long_t size, void *p);
   static void delete_L1RPCConeDefinitioncLcLTLPSize(void *p);
   static void deleteArray_L1RPCConeDefinitioncLcLTLPSize(void *p);
   static void destruct_L1RPCConeDefinitioncLcLTLPSize(void *p);

   // Function generating the singleton type initializer
   static TGenericClassInfo *GenerateInitInstanceLocal(const ::L1RPCConeDefinition::TLPSize*)
   {
      ::L1RPCConeDefinition::TLPSize *ptr = 0;
      static ::TVirtualIsAProxy* isa_proxy = new ::TIsAProxy(typeid(::L1RPCConeDefinition::TLPSize));
      static ::ROOT::TGenericClassInfo 
         instance("L1RPCConeDefinition::TLPSize", "CondFormats/L1TObjects/interface/L1RPCConeDefinition.h", 16,
                  typeid(::L1RPCConeDefinition::TLPSize), ::ROOT::Internal::DefineBehavior(ptr, ptr),
                  &L1RPCConeDefinitioncLcLTLPSize_Dictionary, isa_proxy, 0,
                  sizeof(::L1RPCConeDefinition::TLPSize) );
      instance.SetNew(&new_L1RPCConeDefinitioncLcLTLPSize);
      instance.SetNewArray(&newArray_L1RPCConeDefinitioncLcLTLPSize);
      instance.SetDelete(&delete_L1RPCConeDefinitioncLcLTLPSize);
      instance.SetDeleteArray(&deleteArray_L1RPCConeDefinitioncLcLTLPSize);
      instance.SetDestructor(&destruct_L1RPCConeDefinitioncLcLTLPSize);
      return &instance;
   }
   TGenericClassInfo *GenerateInitInstance(const ::L1RPCConeDefinition::TLPSize*)
   {
      return GenerateInitInstanceLocal((::L1RPCConeDefinition::TLPSize*)0);
   }
   // Static variable to force the class initialization
   static ::ROOT::TGenericClassInfo *_R__UNIQUE_(Init) = GenerateInitInstanceLocal((const ::L1RPCConeDefinition::TLPSize*)0x0); R__UseDummy(_R__UNIQUE_(Init));

   // Dictionary for non-ClassDef classes
   static TClass *L1RPCConeDefinitioncLcLTLPSize_Dictionary() {
      TClass* theClass =::ROOT::GenerateInitInstanceLocal((const ::L1RPCConeDefinition::TLPSize*)0x0)->GetClass();
      L1RPCConeDefinitioncLcLTLPSize_TClassManip(theClass);
   return theClass;
   }

   static void L1RPCConeDefinitioncLcLTLPSize_TClassManip(TClass* ){
   }

} // end of namespace ROOT

namespace ROOT {
   static TClass *L1RPCConeDefinitioncLcLTRingToTower_Dictionary();
   static void L1RPCConeDefinitioncLcLTRingToTower_TClassManip(TClass*);
   static void *new_L1RPCConeDefinitioncLcLTRingToTower(void *p = 0);
   static void *newArray_L1RPCConeDefinitioncLcLTRingToTower(Long_t size, void *p);
   static void delete_L1RPCConeDefinitioncLcLTRingToTower(void *p);
   static void deleteArray_L1RPCConeDefinitioncLcLTRingToTower(void *p);
   static void destruct_L1RPCConeDefinitioncLcLTRingToTower(void *p);

   // Function generating the singleton type initializer
   static TGenericClassInfo *GenerateInitInstanceLocal(const ::L1RPCConeDefinition::TRingToTower*)
   {
      ::L1RPCConeDefinition::TRingToTower *ptr = 0;
      static ::TVirtualIsAProxy* isa_proxy = new ::TIsAProxy(typeid(::L1RPCConeDefinition::TRingToTower));
      static ::ROOT::TGenericClassInfo 
         instance("L1RPCConeDefinition::TRingToTower", "CondFormats/L1TObjects/interface/L1RPCConeDefinition.h", 35,
                  typeid(::L1RPCConeDefinition::TRingToTower), ::ROOT::Internal::DefineBehavior(ptr, ptr),
                  &L1RPCConeDefinitioncLcLTRingToTower_Dictionary, isa_proxy, 0,
                  sizeof(::L1RPCConeDefinition::TRingToTower) );
      instance.SetNew(&new_L1RPCConeDefinitioncLcLTRingToTower);
      instance.SetNewArray(&newArray_L1RPCConeDefinitioncLcLTRingToTower);
      instance.SetDelete(&delete_L1RPCConeDefinitioncLcLTRingToTower);
      instance.SetDeleteArray(&deleteArray_L1RPCConeDefinitioncLcLTRingToTower);
      instance.SetDestructor(&destruct_L1RPCConeDefinitioncLcLTRingToTower);
      return &instance;
   }
   TGenericClassInfo *GenerateInitInstance(const ::L1RPCConeDefinition::TRingToTower*)
   {
      return GenerateInitInstanceLocal((::L1RPCConeDefinition::TRingToTower*)0);
   }
   // Static variable to force the class initialization
   static ::ROOT::TGenericClassInfo *_R__UNIQUE_(Init) = GenerateInitInstanceLocal((const ::L1RPCConeDefinition::TRingToTower*)0x0); R__UseDummy(_R__UNIQUE_(Init));

   // Dictionary for non-ClassDef classes
   static TClass *L1RPCConeDefinitioncLcLTRingToTower_Dictionary() {
      TClass* theClass =::ROOT::GenerateInitInstanceLocal((const ::L1RPCConeDefinition::TRingToTower*)0x0)->GetClass();
      L1RPCConeDefinitioncLcLTRingToTower_TClassManip(theClass);
   return theClass;
   }

   static void L1RPCConeDefinitioncLcLTRingToTower_TClassManip(TClass* ){
   }

} // end of namespace ROOT

namespace ROOT {
   static TClass *L1RPCConeDefinitioncLcLTRingToLP_Dictionary();
   static void L1RPCConeDefinitioncLcLTRingToLP_TClassManip(TClass*);
   static void *new_L1RPCConeDefinitioncLcLTRingToLP(void *p = 0);
   static void *newArray_L1RPCConeDefinitioncLcLTRingToLP(Long_t size, void *p);
   static void delete_L1RPCConeDefinitioncLcLTRingToLP(void *p);
   static void deleteArray_L1RPCConeDefinitioncLcLTRingToLP(void *p);
   static void destruct_L1RPCConeDefinitioncLcLTRingToLP(void *p);

   // Function generating the singleton type initializer
   static TGenericClassInfo *GenerateInitInstanceLocal(const ::L1RPCConeDefinition::TRingToLP*)
   {
      ::L1RPCConeDefinition::TRingToLP *ptr = 0;
      static ::TVirtualIsAProxy* isa_proxy = new ::TIsAProxy(typeid(::L1RPCConeDefinition::TRingToLP));
      static ::ROOT::TGenericClassInfo 
         instance("L1RPCConeDefinition::TRingToLP", "CondFormats/L1TObjects/interface/L1RPCConeDefinition.h", 55,
                  typeid(::L1RPCConeDefinition::TRingToLP), ::ROOT::Internal::DefineBehavior(ptr, ptr),
                  &L1RPCConeDefinitioncLcLTRingToLP_Dictionary, isa_proxy, 0,
                  sizeof(::L1RPCConeDefinition::TRingToLP) );
      instance.SetNew(&new_L1RPCConeDefinitioncLcLTRingToLP);
      instance.SetNewArray(&newArray_L1RPCConeDefinitioncLcLTRingToLP);
      instance.SetDelete(&delete_L1RPCConeDefinitioncLcLTRingToLP);
      instance.SetDeleteArray(&deleteArray_L1RPCConeDefinitioncLcLTRingToLP);
      instance.SetDestructor(&destruct_L1RPCConeDefinitioncLcLTRingToLP);
      return &instance;
   }
   TGenericClassInfo *GenerateInitInstance(const ::L1RPCConeDefinition::TRingToLP*)
   {
      return GenerateInitInstanceLocal((::L1RPCConeDefinition::TRingToLP*)0);
   }
   // Static variable to force the class initialization
   static ::ROOT::TGenericClassInfo *_R__UNIQUE_(Init) = GenerateInitInstanceLocal((const ::L1RPCConeDefinition::TRingToLP*)0x0); R__UseDummy(_R__UNIQUE_(Init));

   // Dictionary for non-ClassDef classes
   static TClass *L1RPCConeDefinitioncLcLTRingToLP_Dictionary() {
      TClass* theClass =::ROOT::GenerateInitInstanceLocal((const ::L1RPCConeDefinition::TRingToLP*)0x0)->GetClass();
      L1RPCConeDefinitioncLcLTRingToLP_TClassManip(theClass);
   return theClass;
   }

   static void L1RPCConeDefinitioncLcLTRingToLP_TClassManip(TClass* ){
   }

} // end of namespace ROOT

namespace ROOT {
   static TClass *L1RPCBxOrConfig_Dictionary();
   static void L1RPCBxOrConfig_TClassManip(TClass*);
   static void *new_L1RPCBxOrConfig(void *p = 0);
   static void *newArray_L1RPCBxOrConfig(Long_t size, void *p);
   static void delete_L1RPCBxOrConfig(void *p);
   static void deleteArray_L1RPCBxOrConfig(void *p);
   static void destruct_L1RPCBxOrConfig(void *p);

   // Function generating the singleton type initializer
   static TGenericClassInfo *GenerateInitInstanceLocal(const ::L1RPCBxOrConfig*)
   {
      ::L1RPCBxOrConfig *ptr = 0;
      static ::TVirtualIsAProxy* isa_proxy = new ::TIsAProxy(typeid(::L1RPCBxOrConfig));
      static ::ROOT::TGenericClassInfo 
         instance("L1RPCBxOrConfig", "CondFormats/L1TObjects/interface/L1RPCBxOrConfig.h", 28,
                  typeid(::L1RPCBxOrConfig), ::ROOT::Internal::DefineBehavior(ptr, ptr),
                  &L1RPCBxOrConfig_Dictionary, isa_proxy, 0,
                  sizeof(::L1RPCBxOrConfig) );
      instance.SetNew(&new_L1RPCBxOrConfig);
      instance.SetNewArray(&newArray_L1RPCBxOrConfig);
      instance.SetDelete(&delete_L1RPCBxOrConfig);
      instance.SetDeleteArray(&deleteArray_L1RPCBxOrConfig);
      instance.SetDestructor(&destruct_L1RPCBxOrConfig);
      return &instance;
   }
   TGenericClassInfo *GenerateInitInstance(const ::L1RPCBxOrConfig*)
   {
      return GenerateInitInstanceLocal((::L1RPCBxOrConfig*)0);
   }
   // Static variable to force the class initialization
   static ::ROOT::TGenericClassInfo *_R__UNIQUE_(Init) = GenerateInitInstanceLocal((const ::L1RPCBxOrConfig*)0x0); R__UseDummy(_R__UNIQUE_(Init));

   // Dictionary for non-ClassDef classes
   static TClass *L1RPCBxOrConfig_Dictionary() {
      TClass* theClass =::ROOT::GenerateInitInstanceLocal((const ::L1RPCBxOrConfig*)0x0)->GetClass();
      L1RPCBxOrConfig_TClassManip(theClass);
   return theClass;
   }

   static void L1RPCBxOrConfig_TClassManip(TClass* ){
   }

} // end of namespace ROOT

namespace ROOT {
   static TClass *L1RPCHsbConfig_Dictionary();
   static void L1RPCHsbConfig_TClassManip(TClass*);
   static void *new_L1RPCHsbConfig(void *p = 0);
   static void *newArray_L1RPCHsbConfig(Long_t size, void *p);
   static void delete_L1RPCHsbConfig(void *p);
   static void deleteArray_L1RPCHsbConfig(void *p);
   static void destruct_L1RPCHsbConfig(void *p);

   // Function generating the singleton type initializer
   static TGenericClassInfo *GenerateInitInstanceLocal(const ::L1RPCHsbConfig*)
   {
      ::L1RPCHsbConfig *ptr = 0;
      static ::TVirtualIsAProxy* isa_proxy = new ::TIsAProxy(typeid(::L1RPCHsbConfig));
      static ::ROOT::TGenericClassInfo 
         instance("L1RPCHsbConfig", "CondFormats/L1TObjects/interface/L1RPCHsbConfig.h", 28,
                  typeid(::L1RPCHsbConfig), ::ROOT::Internal::DefineBehavior(ptr, ptr),
                  &L1RPCHsbConfig_Dictionary, isa_proxy, 0,
                  sizeof(::L1RPCHsbConfig) );
      instance.SetNew(&new_L1RPCHsbConfig);
      instance.SetNewArray(&newArray_L1RPCHsbConfig);
      instance.SetDelete(&delete_L1RPCHsbConfig);
      instance.SetDeleteArray(&deleteArray_L1RPCHsbConfig);
      instance.SetDestructor(&destruct_L1RPCHsbConfig);
      return &instance;
   }
   TGenericClassInfo *GenerateInitInstance(const ::L1RPCHsbConfig*)
   {
      return GenerateInitInstanceLocal((::L1RPCHsbConfig*)0);
   }
   // Static variable to force the class initialization
   static ::ROOT::TGenericClassInfo *_R__UNIQUE_(Init) = GenerateInitInstanceLocal((const ::L1RPCHsbConfig*)0x0); R__UseDummy(_R__UNIQUE_(Init));

   // Dictionary for non-ClassDef classes
   static TClass *L1RPCHsbConfig_Dictionary() {
      TClass* theClass =::ROOT::GenerateInitInstanceLocal((const ::L1RPCHsbConfig*)0x0)->GetClass();
      L1RPCHsbConfig_TClassManip(theClass);
   return theClass;
   }

   static void L1RPCHsbConfig_TClassManip(TClass* ){
   }

} // end of namespace ROOT

namespace ROOT {
   static TClass *L1TriggerKey_Dictionary();
   static void L1TriggerKey_TClassManip(TClass*);
   static void *new_L1TriggerKey(void *p = 0);
   static void *newArray_L1TriggerKey(Long_t size, void *p);
   static void delete_L1TriggerKey(void *p);
   static void deleteArray_L1TriggerKey(void *p);
   static void destruct_L1TriggerKey(void *p);

   // Function generating the singleton type initializer
   static TGenericClassInfo *GenerateInitInstanceLocal(const ::L1TriggerKey*)
   {
      ::L1TriggerKey *ptr = 0;
      static ::TVirtualIsAProxy* isa_proxy = new ::TIsAProxy(typeid(::L1TriggerKey));
      static ::ROOT::TGenericClassInfo 
         instance("L1TriggerKey", "CondFormats/L1TObjects/interface/L1TriggerKey.h", 23,
                  typeid(::L1TriggerKey), ::ROOT::Internal::DefineBehavior(ptr, ptr),
                  &L1TriggerKey_Dictionary, isa_proxy, 0,
                  sizeof(::L1TriggerKey) );
      instance.SetNew(&new_L1TriggerKey);
      instance.SetNewArray(&newArray_L1TriggerKey);
      instance.SetDelete(&delete_L1TriggerKey);
      instance.SetDeleteArray(&deleteArray_L1TriggerKey);
      instance.SetDestructor(&destruct_L1TriggerKey);
      return &instance;
   }
   TGenericClassInfo *GenerateInitInstance(const ::L1TriggerKey*)
   {
      return GenerateInitInstanceLocal((::L1TriggerKey*)0);
   }
   // Static variable to force the class initialization
   static ::ROOT::TGenericClassInfo *_R__UNIQUE_(Init) = GenerateInitInstanceLocal((const ::L1TriggerKey*)0x0); R__UseDummy(_R__UNIQUE_(Init));

   // Dictionary for non-ClassDef classes
   static TClass *L1TriggerKey_Dictionary() {
      TClass* theClass =::ROOT::GenerateInitInstanceLocal((const ::L1TriggerKey*)0x0)->GetClass();
      L1TriggerKey_TClassManip(theClass);
   return theClass;
   }

   static void L1TriggerKey_TClassManip(TClass* theClass){
      TDataMember* theMember_m_recordToKey = theClass->GetDataMember("m_recordToKey");
      theMember_m_recordToKey->CreateAttributeMap();
      TDictAttributeMap* memberAttrMap_m_recordToKey( theMember_m_recordToKey->GetAttributeMap() );
      memberAttrMap_m_recordToKey->AddProperty("mapping","blob");
   }

} // end of namespace ROOT

namespace ROOT {
   static TClass *L1TriggerKeyList_Dictionary();
   static void L1TriggerKeyList_TClassManip(TClass*);
   static void *new_L1TriggerKeyList(void *p = 0);
   static void *newArray_L1TriggerKeyList(Long_t size, void *p);
   static void delete_L1TriggerKeyList(void *p);
   static void deleteArray_L1TriggerKeyList(void *p);
   static void destruct_L1TriggerKeyList(void *p);

   // Function generating the singleton type initializer
   static TGenericClassInfo *GenerateInitInstanceLocal(const ::L1TriggerKeyList*)
   {
      ::L1TriggerKeyList *ptr = 0;
      static ::TVirtualIsAProxy* isa_proxy = new ::TIsAProxy(typeid(::L1TriggerKeyList));
      static ::ROOT::TGenericClassInfo 
         instance("L1TriggerKeyList", "CondFormats/L1TObjects/interface/L1TriggerKeyList.h", 32,
                  typeid(::L1TriggerKeyList), ::ROOT::Internal::DefineBehavior(ptr, ptr),
                  &L1TriggerKeyList_Dictionary, isa_proxy, 0,
                  sizeof(::L1TriggerKeyList) );
      instance.SetNew(&new_L1TriggerKeyList);
      instance.SetNewArray(&newArray_L1TriggerKeyList);
      instance.SetDelete(&delete_L1TriggerKeyList);
      instance.SetDeleteArray(&deleteArray_L1TriggerKeyList);
      instance.SetDestructor(&destruct_L1TriggerKeyList);
      return &instance;
   }
   TGenericClassInfo *GenerateInitInstance(const ::L1TriggerKeyList*)
   {
      return GenerateInitInstanceLocal((::L1TriggerKeyList*)0);
   }
   // Static variable to force the class initialization
   static ::ROOT::TGenericClassInfo *_R__UNIQUE_(Init) = GenerateInitInstanceLocal((const ::L1TriggerKeyList*)0x0); R__UseDummy(_R__UNIQUE_(Init));

   // Dictionary for non-ClassDef classes
   static TClass *L1TriggerKeyList_Dictionary() {
      TClass* theClass =::ROOT::GenerateInitInstanceLocal((const ::L1TriggerKeyList*)0x0)->GetClass();
      L1TriggerKeyList_TClassManip(theClass);
   return theClass;
   }

   static void L1TriggerKeyList_TClassManip(TClass* theClass){
      TDataMember* theMember_m_tscKeyToToken = theClass->GetDataMember("m_tscKeyToToken");
      theMember_m_tscKeyToToken->CreateAttributeMap();
      TDictAttributeMap* memberAttrMap_m_tscKeyToToken( theMember_m_tscKeyToToken->GetAttributeMap() );
      memberAttrMap_m_tscKeyToToken->AddProperty("mapping","blob");
      TDataMember* theMember_m_recordKeyToken = theClass->GetDataMember("m_recordKeyToken");
      theMember_m_recordKeyToken->CreateAttributeMap();
      TDictAttributeMap* memberAttrMap_m_recordKeyToken( theMember_m_recordKeyToken->GetAttributeMap() );
      memberAttrMap_m_recordKeyToken->AddProperty("mapping","blob");
   }

} // end of namespace ROOT

namespace ROOT {
   static TClass *L1RCTParameters_Dictionary();
   static void L1RCTParameters_TClassManip(TClass*);
   static void *new_L1RCTParameters(void *p = 0);
   static void *newArray_L1RCTParameters(Long_t size, void *p);
   static void delete_L1RCTParameters(void *p);
   static void deleteArray_L1RCTParameters(void *p);
   static void destruct_L1RCTParameters(void *p);

   // Function generating the singleton type initializer
   static TGenericClassInfo *GenerateInitInstanceLocal(const ::L1RCTParameters*)
   {
      ::L1RCTParameters *ptr = 0;
      static ::TVirtualIsAProxy* isa_proxy = new ::TIsAProxy(typeid(::L1RCTParameters));
      static ::ROOT::TGenericClassInfo 
         instance("L1RCTParameters", "CondFormats/L1TObjects/interface/L1RCTParameters.h", 28,
                  typeid(::L1RCTParameters), ::ROOT::Internal::DefineBehavior(ptr, ptr),
                  &L1RCTParameters_Dictionary, isa_proxy, 0,
                  sizeof(::L1RCTParameters) );
      instance.SetNew(&new_L1RCTParameters);
      instance.SetNewArray(&newArray_L1RCTParameters);
      instance.SetDelete(&delete_L1RCTParameters);
      instance.SetDeleteArray(&deleteArray_L1RCTParameters);
      instance.SetDestructor(&destruct_L1RCTParameters);
      return &instance;
   }
   TGenericClassInfo *GenerateInitInstance(const ::L1RCTParameters*)
   {
      return GenerateInitInstanceLocal((::L1RCTParameters*)0);
   }
   // Static variable to force the class initialization
   static ::ROOT::TGenericClassInfo *_R__UNIQUE_(Init) = GenerateInitInstanceLocal((const ::L1RCTParameters*)0x0); R__UseDummy(_R__UNIQUE_(Init));

   // Dictionary for non-ClassDef classes
   static TClass *L1RCTParameters_Dictionary() {
      TClass* theClass =::ROOT::GenerateInitInstanceLocal((const ::L1RCTParameters*)0x0)->GetClass();
      L1RCTParameters_TClassManip(theClass);
   return theClass;
   }

   static void L1RCTParameters_TClassManip(TClass* theClass){
      TDataMember* theMember_eGammaECalScaleFactors_ = theClass->GetDataMember("eGammaECalScaleFactors_");
      theMember_eGammaECalScaleFactors_->CreateAttributeMap();
      TDictAttributeMap* memberAttrMap_eGammaECalScaleFactors_( theMember_eGammaECalScaleFactors_->GetAttributeMap() );
      memberAttrMap_eGammaECalScaleFactors_->AddProperty("mapping","blob");
      TDataMember* theMember_eGammaHCalScaleFactors_ = theClass->GetDataMember("eGammaHCalScaleFactors_");
      theMember_eGammaHCalScaleFactors_->CreateAttributeMap();
      TDictAttributeMap* memberAttrMap_eGammaHCalScaleFactors_( theMember_eGammaHCalScaleFactors_->GetAttributeMap() );
      memberAttrMap_eGammaHCalScaleFactors_->AddProperty("mapping","blob");
      TDataMember* theMember_jetMETECalScaleFactors_ = theClass->GetDataMember("jetMETECalScaleFactors_");
      theMember_jetMETECalScaleFactors_->CreateAttributeMap();
      TDictAttributeMap* memberAttrMap_jetMETECalScaleFactors_( theMember_jetMETECalScaleFactors_->GetAttributeMap() );
      memberAttrMap_jetMETECalScaleFactors_->AddProperty("mapping","blob");
      TDataMember* theMember_jetMETHCalScaleFactors_ = theClass->GetDataMember("jetMETHCalScaleFactors_");
      theMember_jetMETHCalScaleFactors_->CreateAttributeMap();
      TDictAttributeMap* memberAttrMap_jetMETHCalScaleFactors_( theMember_jetMETHCalScaleFactors_->GetAttributeMap() );
      memberAttrMap_jetMETHCalScaleFactors_->AddProperty("mapping","blob");
      TDataMember* theMember_ecal_calib_ = theClass->GetDataMember("ecal_calib_");
      theMember_ecal_calib_->CreateAttributeMap();
      TDictAttributeMap* memberAttrMap_ecal_calib_( theMember_ecal_calib_->GetAttributeMap() );
      memberAttrMap_ecal_calib_->AddProperty("mapping","blob");
      TDataMember* theMember_hcal_calib_ = theClass->GetDataMember("hcal_calib_");
      theMember_hcal_calib_->CreateAttributeMap();
      TDictAttributeMap* memberAttrMap_hcal_calib_( theMember_hcal_calib_->GetAttributeMap() );
      memberAttrMap_hcal_calib_->AddProperty("mapping","blob");
      TDataMember* theMember_hcal_high_calib_ = theClass->GetDataMember("hcal_high_calib_");
      theMember_hcal_high_calib_->CreateAttributeMap();
      TDictAttributeMap* memberAttrMap_hcal_high_calib_( theMember_hcal_high_calib_->GetAttributeMap() );
      memberAttrMap_hcal_high_calib_->AddProperty("mapping","blob");
      TDataMember* theMember_cross_terms_ = theClass->GetDataMember("cross_terms_");
      theMember_cross_terms_->CreateAttributeMap();
      TDictAttributeMap* memberAttrMap_cross_terms_( theMember_cross_terms_->GetAttributeMap() );
      memberAttrMap_cross_terms_->AddProperty("mapping","blob");
      TDataMember* theMember_HoverE_smear_low_ = theClass->GetDataMember("HoverE_smear_low_");
      theMember_HoverE_smear_low_->CreateAttributeMap();
      TDictAttributeMap* memberAttrMap_HoverE_smear_low_( theMember_HoverE_smear_low_->GetAttributeMap() );
      memberAttrMap_HoverE_smear_low_->AddProperty("mapping","blob");
      TDataMember* theMember_HoverE_smear_high_ = theClass->GetDataMember("HoverE_smear_high_");
      theMember_HoverE_smear_high_->CreateAttributeMap();
      TDictAttributeMap* memberAttrMap_HoverE_smear_high_( theMember_HoverE_smear_high_->GetAttributeMap() );
      memberAttrMap_HoverE_smear_high_->AddProperty("mapping","blob");
   }

} // end of namespace ROOT

namespace ROOT {
   static TClass *L1RCTChannelMask_Dictionary();
   static void L1RCTChannelMask_TClassManip(TClass*);
   static void *new_L1RCTChannelMask(void *p = 0);
   static void *newArray_L1RCTChannelMask(Long_t size, void *p);
   static void delete_L1RCTChannelMask(void *p);
   static void deleteArray_L1RCTChannelMask(void *p);
   static void destruct_L1RCTChannelMask(void *p);

   // Function generating the singleton type initializer
   static TGenericClassInfo *GenerateInitInstanceLocal(const ::L1RCTChannelMask*)
   {
      ::L1RCTChannelMask *ptr = 0;
      static ::TVirtualIsAProxy* isa_proxy = new ::TIsAProxy(typeid(::L1RCTChannelMask));
      static ::ROOT::TGenericClassInfo 
         instance("L1RCTChannelMask", "CondFormats/L1TObjects/interface/L1RCTChannelMask.h", 8,
                  typeid(::L1RCTChannelMask), ::ROOT::Internal::DefineBehavior(ptr, ptr),
                  &L1RCTChannelMask_Dictionary, isa_proxy, 0,
                  sizeof(::L1RCTChannelMask) );
      instance.SetNew(&new_L1RCTChannelMask);
      instance.SetNewArray(&newArray_L1RCTChannelMask);
      instance.SetDelete(&delete_L1RCTChannelMask);
      instance.SetDeleteArray(&deleteArray_L1RCTChannelMask);
      instance.SetDestructor(&destruct_L1RCTChannelMask);
      return &instance;
   }
   TGenericClassInfo *GenerateInitInstance(const ::L1RCTChannelMask*)
   {
      return GenerateInitInstanceLocal((::L1RCTChannelMask*)0);
   }
   // Static variable to force the class initialization
   static ::ROOT::TGenericClassInfo *_R__UNIQUE_(Init) = GenerateInitInstanceLocal((const ::L1RCTChannelMask*)0x0); R__UseDummy(_R__UNIQUE_(Init));

   // Dictionary for non-ClassDef classes
   static TClass *L1RCTChannelMask_Dictionary() {
      TClass* theClass =::ROOT::GenerateInitInstanceLocal((const ::L1RCTChannelMask*)0x0)->GetClass();
      L1RCTChannelMask_TClassManip(theClass);
   return theClass;
   }

   static void L1RCTChannelMask_TClassManip(TClass* theClass){
      TDataMember* theMember_ecalMask = theClass->GetDataMember("ecalMask");
      theMember_ecalMask->CreateAttributeMap();
      TDictAttributeMap* memberAttrMap_ecalMask( theMember_ecalMask->GetAttributeMap() );
      memberAttrMap_ecalMask->AddProperty("mapping","blob");
      TDataMember* theMember_hcalMask = theClass->GetDataMember("hcalMask");
      theMember_hcalMask->CreateAttributeMap();
      TDictAttributeMap* memberAttrMap_hcalMask( theMember_hcalMask->GetAttributeMap() );
      memberAttrMap_hcalMask->AddProperty("mapping","blob");
      TDataMember* theMember_hfMask = theClass->GetDataMember("hfMask");
      theMember_hfMask->CreateAttributeMap();
      TDictAttributeMap* memberAttrMap_hfMask( theMember_hfMask->GetAttributeMap() );
      memberAttrMap_hfMask->AddProperty("mapping","blob");
   }

} // end of namespace ROOT

namespace ROOT {
   static TClass *L1RCTNoisyChannelMask_Dictionary();
   static void L1RCTNoisyChannelMask_TClassManip(TClass*);
   static void *new_L1RCTNoisyChannelMask(void *p = 0);
   static void *newArray_L1RCTNoisyChannelMask(Long_t size, void *p);
   static void delete_L1RCTNoisyChannelMask(void *p);
   static void deleteArray_L1RCTNoisyChannelMask(void *p);
   static void destruct_L1RCTNoisyChannelMask(void *p);

   // Function generating the singleton type initializer
   static TGenericClassInfo *GenerateInitInstanceLocal(const ::L1RCTNoisyChannelMask*)
   {
      ::L1RCTNoisyChannelMask *ptr = 0;
      static ::TVirtualIsAProxy* isa_proxy = new ::TIsAProxy(typeid(::L1RCTNoisyChannelMask));
      static ::ROOT::TGenericClassInfo 
         instance("L1RCTNoisyChannelMask", "CondFormats/L1TObjects/interface/L1RCTNoisyChannelMask.h", 8,
                  typeid(::L1RCTNoisyChannelMask), ::ROOT::Internal::DefineBehavior(ptr, ptr),
                  &L1RCTNoisyChannelMask_Dictionary, isa_proxy, 0,
                  sizeof(::L1RCTNoisyChannelMask) );
      instance.SetNew(&new_L1RCTNoisyChannelMask);
      instance.SetNewArray(&newArray_L1RCTNoisyChannelMask);
      instance.SetDelete(&delete_L1RCTNoisyChannelMask);
      instance.SetDeleteArray(&deleteArray_L1RCTNoisyChannelMask);
      instance.SetDestructor(&destruct_L1RCTNoisyChannelMask);
      return &instance;
   }
   TGenericClassInfo *GenerateInitInstance(const ::L1RCTNoisyChannelMask*)
   {
      return GenerateInitInstanceLocal((::L1RCTNoisyChannelMask*)0);
   }
   // Static variable to force the class initialization
   static ::ROOT::TGenericClassInfo *_R__UNIQUE_(Init) = GenerateInitInstanceLocal((const ::L1RCTNoisyChannelMask*)0x0); R__UseDummy(_R__UNIQUE_(Init));

   // Dictionary for non-ClassDef classes
   static TClass *L1RCTNoisyChannelMask_Dictionary() {
      TClass* theClass =::ROOT::GenerateInitInstanceLocal((const ::L1RCTNoisyChannelMask*)0x0)->GetClass();
      L1RCTNoisyChannelMask_TClassManip(theClass);
   return theClass;
   }

   static void L1RCTNoisyChannelMask_TClassManip(TClass* theClass){
      TDataMember* theMember_ecalMask = theClass->GetDataMember("ecalMask");
      theMember_ecalMask->CreateAttributeMap();
      TDictAttributeMap* memberAttrMap_ecalMask( theMember_ecalMask->GetAttributeMap() );
      memberAttrMap_ecalMask->AddProperty("mapping","blob");
      TDataMember* theMember_hcalMask = theClass->GetDataMember("hcalMask");
      theMember_hcalMask->CreateAttributeMap();
      TDictAttributeMap* memberAttrMap_hcalMask( theMember_hcalMask->GetAttributeMap() );
      memberAttrMap_hcalMask->AddProperty("mapping","blob");
      TDataMember* theMember_hfMask = theClass->GetDataMember("hfMask");
      theMember_hfMask->CreateAttributeMap();
      TDictAttributeMap* memberAttrMap_hfMask( theMember_hfMask->GetAttributeMap() );
      memberAttrMap_hfMask->AddProperty("mapping","blob");
   }

} // end of namespace ROOT

namespace ROOT {
   static TClass *L1CaloEcalScale_Dictionary();
   static void L1CaloEcalScale_TClassManip(TClass*);
   static void *new_L1CaloEcalScale(void *p = 0);
   static void *newArray_L1CaloEcalScale(Long_t size, void *p);
   static void delete_L1CaloEcalScale(void *p);
   static void deleteArray_L1CaloEcalScale(void *p);
   static void destruct_L1CaloEcalScale(void *p);

   // Function generating the singleton type initializer
   static TGenericClassInfo *GenerateInitInstanceLocal(const ::L1CaloEcalScale*)
   {
      ::L1CaloEcalScale *ptr = 0;
      static ::TVirtualIsAProxy* isa_proxy = new ::TIsAProxy(typeid(::L1CaloEcalScale));
      static ::ROOT::TGenericClassInfo 
         instance("L1CaloEcalScale", "CondFormats/L1TObjects/interface/L1CaloEcalScale.h", 28,
                  typeid(::L1CaloEcalScale), ::ROOT::Internal::DefineBehavior(ptr, ptr),
                  &L1CaloEcalScale_Dictionary, isa_proxy, 0,
                  sizeof(::L1CaloEcalScale) );
      instance.SetNew(&new_L1CaloEcalScale);
      instance.SetNewArray(&newArray_L1CaloEcalScale);
      instance.SetDelete(&delete_L1CaloEcalScale);
      instance.SetDeleteArray(&deleteArray_L1CaloEcalScale);
      instance.SetDestructor(&destruct_L1CaloEcalScale);
      return &instance;
   }
   TGenericClassInfo *GenerateInitInstance(const ::L1CaloEcalScale*)
   {
      return GenerateInitInstanceLocal((::L1CaloEcalScale*)0);
   }
   // Static variable to force the class initialization
   static ::ROOT::TGenericClassInfo *_R__UNIQUE_(Init) = GenerateInitInstanceLocal((const ::L1CaloEcalScale*)0x0); R__UseDummy(_R__UNIQUE_(Init));

   // Dictionary for non-ClassDef classes
   static TClass *L1CaloEcalScale_Dictionary() {
      TClass* theClass =::ROOT::GenerateInitInstanceLocal((const ::L1CaloEcalScale*)0x0)->GetClass();
      L1CaloEcalScale_TClassManip(theClass);
   return theClass;
   }

   static void L1CaloEcalScale_TClassManip(TClass* theClass){
      TDataMember* theMember_m_scale = theClass->GetDataMember("m_scale");
      theMember_m_scale->CreateAttributeMap();
      TDictAttributeMap* memberAttrMap_m_scale( theMember_m_scale->GetAttributeMap() );
      memberAttrMap_m_scale->AddProperty("mapping","blob");
   }

} // end of namespace ROOT

namespace ROOT {
   static TClass *L1CaloHcalScale_Dictionary();
   static void L1CaloHcalScale_TClassManip(TClass*);
   static void *new_L1CaloHcalScale(void *p = 0);
   static void *newArray_L1CaloHcalScale(Long_t size, void *p);
   static void delete_L1CaloHcalScale(void *p);
   static void deleteArray_L1CaloHcalScale(void *p);
   static void destruct_L1CaloHcalScale(void *p);

   // Function generating the singleton type initializer
   static TGenericClassInfo *GenerateInitInstanceLocal(const ::L1CaloHcalScale*)
   {
      ::L1CaloHcalScale *ptr = 0;
      static ::TVirtualIsAProxy* isa_proxy = new ::TIsAProxy(typeid(::L1CaloHcalScale));
      static ::ROOT::TGenericClassInfo 
         instance("L1CaloHcalScale", "CondFormats/L1TObjects/interface/L1CaloHcalScale.h", 28,
                  typeid(::L1CaloHcalScale), ::ROOT::Internal::DefineBehavior(ptr, ptr),
                  &L1CaloHcalScale_Dictionary, isa_proxy, 0,
                  sizeof(::L1CaloHcalScale) );
      instance.SetNew(&new_L1CaloHcalScale);
      instance.SetNewArray(&newArray_L1CaloHcalScale);
      instance.SetDelete(&delete_L1CaloHcalScale);
      instance.SetDeleteArray(&deleteArray_L1CaloHcalScale);
      instance.SetDestructor(&destruct_L1CaloHcalScale);
      return &instance;
   }
   TGenericClassInfo *GenerateInitInstance(const ::L1CaloHcalScale*)
   {
      return GenerateInitInstanceLocal((::L1CaloHcalScale*)0);
   }
   // Static variable to force the class initialization
   static ::ROOT::TGenericClassInfo *_R__UNIQUE_(Init) = GenerateInitInstanceLocal((const ::L1CaloHcalScale*)0x0); R__UseDummy(_R__UNIQUE_(Init));

   // Dictionary for non-ClassDef classes
   static TClass *L1CaloHcalScale_Dictionary() {
      TClass* theClass =::ROOT::GenerateInitInstanceLocal((const ::L1CaloHcalScale*)0x0)->GetClass();
      L1CaloHcalScale_TClassManip(theClass);
   return theClass;
   }

   static void L1CaloHcalScale_TClassManip(TClass* theClass){
      TDataMember* theMember_m_scale = theClass->GetDataMember("m_scale");
      theMember_m_scale->CreateAttributeMap();
      TDictAttributeMap* memberAttrMap_m_scale( theMember_m_scale->GetAttributeMap() );
      memberAttrMap_m_scale->AddProperty("mapping","blob");
   }

} // end of namespace ROOT

namespace ROOT {
   static TClass *L1GtStableParameters_Dictionary();
   static void L1GtStableParameters_TClassManip(TClass*);
   static void *new_L1GtStableParameters(void *p = 0);
   static void *newArray_L1GtStableParameters(Long_t size, void *p);
   static void delete_L1GtStableParameters(void *p);
   static void deleteArray_L1GtStableParameters(void *p);
   static void destruct_L1GtStableParameters(void *p);

   // Function generating the singleton type initializer
   static TGenericClassInfo *GenerateInitInstanceLocal(const ::L1GtStableParameters*)
   {
      ::L1GtStableParameters *ptr = 0;
      static ::TVirtualIsAProxy* isa_proxy = new ::TIsAProxy(typeid(::L1GtStableParameters));
      static ::ROOT::TGenericClassInfo 
         instance("L1GtStableParameters", "CondFormats/L1TObjects/interface/L1GtStableParameters.h", 35,
                  typeid(::L1GtStableParameters), ::ROOT::Internal::DefineBehavior(ptr, ptr),
                  &L1GtStableParameters_Dictionary, isa_proxy, 0,
                  sizeof(::L1GtStableParameters) );
      instance.SetNew(&new_L1GtStableParameters);
      instance.SetNewArray(&newArray_L1GtStableParameters);
      instance.SetDelete(&delete_L1GtStableParameters);
      instance.SetDeleteArray(&deleteArray_L1GtStableParameters);
      instance.SetDestructor(&destruct_L1GtStableParameters);
      return &instance;
   }
   TGenericClassInfo *GenerateInitInstance(const ::L1GtStableParameters*)
   {
      return GenerateInitInstanceLocal((::L1GtStableParameters*)0);
   }
   // Static variable to force the class initialization
   static ::ROOT::TGenericClassInfo *_R__UNIQUE_(Init) = GenerateInitInstanceLocal((const ::L1GtStableParameters*)0x0); R__UseDummy(_R__UNIQUE_(Init));

   // Dictionary for non-ClassDef classes
   static TClass *L1GtStableParameters_Dictionary() {
      TClass* theClass =::ROOT::GenerateInitInstanceLocal((const ::L1GtStableParameters*)0x0)->GetClass();
      L1GtStableParameters_TClassManip(theClass);
   return theClass;
   }

   static void L1GtStableParameters_TClassManip(TClass* theClass){
      TDataMember* theMember_m_orderConditionChip = theClass->GetDataMember("m_orderConditionChip");
      theMember_m_orderConditionChip->CreateAttributeMap();
      TDictAttributeMap* memberAttrMap_m_orderConditionChip( theMember_m_orderConditionChip->GetAttributeMap() );
      memberAttrMap_m_orderConditionChip->AddProperty("mapping","blob");
   }

} // end of namespace ROOT

namespace ROOT {
   static TClass *GlobalStableParameters_Dictionary();
   static void GlobalStableParameters_TClassManip(TClass*);
   static void *new_GlobalStableParameters(void *p = 0);
   static void *newArray_GlobalStableParameters(Long_t size, void *p);
   static void delete_GlobalStableParameters(void *p);
   static void deleteArray_GlobalStableParameters(void *p);
   static void destruct_GlobalStableParameters(void *p);

   // Function generating the singleton type initializer
   static TGenericClassInfo *GenerateInitInstanceLocal(const ::GlobalStableParameters*)
   {
      ::GlobalStableParameters *ptr = 0;
      static ::TVirtualIsAProxy* isa_proxy = new ::TIsAProxy(typeid(::GlobalStableParameters));
      static ::ROOT::TGenericClassInfo 
         instance("GlobalStableParameters", "CondFormats/L1TObjects/interface/GlobalStableParameters.h", 33,
                  typeid(::GlobalStableParameters), ::ROOT::Internal::DefineBehavior(ptr, ptr),
                  &GlobalStableParameters_Dictionary, isa_proxy, 0,
                  sizeof(::GlobalStableParameters) );
      instance.SetNew(&new_GlobalStableParameters);
      instance.SetNewArray(&newArray_GlobalStableParameters);
      instance.SetDelete(&delete_GlobalStableParameters);
      instance.SetDeleteArray(&deleteArray_GlobalStableParameters);
      instance.SetDestructor(&destruct_GlobalStableParameters);
      return &instance;
   }
   TGenericClassInfo *GenerateInitInstance(const ::GlobalStableParameters*)
   {
      return GenerateInitInstanceLocal((::GlobalStableParameters*)0);
   }
   // Static variable to force the class initialization
   static ::ROOT::TGenericClassInfo *_R__UNIQUE_(Init) = GenerateInitInstanceLocal((const ::GlobalStableParameters*)0x0); R__UseDummy(_R__UNIQUE_(Init));

   // Dictionary for non-ClassDef classes
   static TClass *GlobalStableParameters_Dictionary() {
      TClass* theClass =::ROOT::GenerateInitInstanceLocal((const ::GlobalStableParameters*)0x0)->GetClass();
      GlobalStableParameters_TClassManip(theClass);
   return theClass;
   }

   static void GlobalStableParameters_TClassManip(TClass* theClass){
      TDataMember* theMember_m_orderConditionChip = theClass->GetDataMember("m_orderConditionChip");
      theMember_m_orderConditionChip->CreateAttributeMap();
      TDictAttributeMap* memberAttrMap_m_orderConditionChip( theMember_m_orderConditionChip->GetAttributeMap() );
      memberAttrMap_m_orderConditionChip->AddProperty("mapping","blob");
   }

} // end of namespace ROOT

namespace ROOT {
   static TClass *L1GtParameters_Dictionary();
   static void L1GtParameters_TClassManip(TClass*);
   static void *new_L1GtParameters(void *p = 0);
   static void *newArray_L1GtParameters(Long_t size, void *p);
   static void delete_L1GtParameters(void *p);
   static void deleteArray_L1GtParameters(void *p);
   static void destruct_L1GtParameters(void *p);

   // Function generating the singleton type initializer
   static TGenericClassInfo *GenerateInitInstanceLocal(const ::L1GtParameters*)
   {
      ::L1GtParameters *ptr = 0;
      static ::TVirtualIsAProxy* isa_proxy = new ::TIsAProxy(typeid(::L1GtParameters));
      static ::ROOT::TGenericClassInfo 
         instance("L1GtParameters", "CondFormats/L1TObjects/interface/L1GtParameters.h", 34,
                  typeid(::L1GtParameters), ::ROOT::Internal::DefineBehavior(ptr, ptr),
                  &L1GtParameters_Dictionary, isa_proxy, 0,
                  sizeof(::L1GtParameters) );
      instance.SetNew(&new_L1GtParameters);
      instance.SetNewArray(&newArray_L1GtParameters);
      instance.SetDelete(&delete_L1GtParameters);
      instance.SetDeleteArray(&deleteArray_L1GtParameters);
      instance.SetDestructor(&destruct_L1GtParameters);
      return &instance;
   }
   TGenericClassInfo *GenerateInitInstance(const ::L1GtParameters*)
   {
      return GenerateInitInstanceLocal((::L1GtParameters*)0);
   }
   // Static variable to force the class initialization
   static ::ROOT::TGenericClassInfo *_R__UNIQUE_(Init) = GenerateInitInstanceLocal((const ::L1GtParameters*)0x0); R__UseDummy(_R__UNIQUE_(Init));

   // Dictionary for non-ClassDef classes
   static TClass *L1GtParameters_Dictionary() {
      TClass* theClass =::ROOT::GenerateInitInstanceLocal((const ::L1GtParameters*)0x0)->GetClass();
      L1GtParameters_TClassManip(theClass);
   return theClass;
   }

   static void L1GtParameters_TClassManip(TClass* theClass){
      TDataMember* theMember_m_daqNrBxBoard = theClass->GetDataMember("m_daqNrBxBoard");
      theMember_m_daqNrBxBoard->CreateAttributeMap();
      TDictAttributeMap* memberAttrMap_m_daqNrBxBoard( theMember_m_daqNrBxBoard->GetAttributeMap() );
      memberAttrMap_m_daqNrBxBoard->AddProperty("mapping","blob");
      TDataMember* theMember_m_evmNrBxBoard = theClass->GetDataMember("m_evmNrBxBoard");
      theMember_m_evmNrBxBoard->CreateAttributeMap();
      TDictAttributeMap* memberAttrMap_m_evmNrBxBoard( theMember_m_evmNrBxBoard->GetAttributeMap() );
      memberAttrMap_m_evmNrBxBoard->AddProperty("mapping","blob");
   }

} // end of namespace ROOT

namespace ROOT {
   static TClass *L1GtPrescaleFactors_Dictionary();
   static void L1GtPrescaleFactors_TClassManip(TClass*);
   static void *new_L1GtPrescaleFactors(void *p = 0);
   static void *newArray_L1GtPrescaleFactors(Long_t size, void *p);
   static void delete_L1GtPrescaleFactors(void *p);
   static void deleteArray_L1GtPrescaleFactors(void *p);
   static void destruct_L1GtPrescaleFactors(void *p);

   // Function generating the singleton type initializer
   static TGenericClassInfo *GenerateInitInstanceLocal(const ::L1GtPrescaleFactors*)
   {
      ::L1GtPrescaleFactors *ptr = 0;
      static ::TVirtualIsAProxy* isa_proxy = new ::TIsAProxy(typeid(::L1GtPrescaleFactors));
      static ::ROOT::TGenericClassInfo 
         instance("L1GtPrescaleFactors", "CondFormats/L1TObjects/interface/L1GtPrescaleFactors.h", 32,
                  typeid(::L1GtPrescaleFactors), ::ROOT::Internal::DefineBehavior(ptr, ptr),
                  &L1GtPrescaleFactors_Dictionary, isa_proxy, 0,
                  sizeof(::L1GtPrescaleFactors) );
      instance.SetNew(&new_L1GtPrescaleFactors);
      instance.SetNewArray(&newArray_L1GtPrescaleFactors);
      instance.SetDelete(&delete_L1GtPrescaleFactors);
      instance.SetDeleteArray(&deleteArray_L1GtPrescaleFactors);
      instance.SetDestructor(&destruct_L1GtPrescaleFactors);
      return &instance;
   }
   TGenericClassInfo *GenerateInitInstance(const ::L1GtPrescaleFactors*)
   {
      return GenerateInitInstanceLocal((::L1GtPrescaleFactors*)0);
   }
   // Static variable to force the class initialization
   static ::ROOT::TGenericClassInfo *_R__UNIQUE_(Init) = GenerateInitInstanceLocal((const ::L1GtPrescaleFactors*)0x0); R__UseDummy(_R__UNIQUE_(Init));

   // Dictionary for non-ClassDef classes
   static TClass *L1GtPrescaleFactors_Dictionary() {
      TClass* theClass =::ROOT::GenerateInitInstanceLocal((const ::L1GtPrescaleFactors*)0x0)->GetClass();
      L1GtPrescaleFactors_TClassManip(theClass);
   return theClass;
   }

   static void L1GtPrescaleFactors_TClassManip(TClass* theClass){
      TDataMember* theMember_m_prescaleFactors = theClass->GetDataMember("m_prescaleFactors");
      theMember_m_prescaleFactors->CreateAttributeMap();
      TDictAttributeMap* memberAttrMap_m_prescaleFactors( theMember_m_prescaleFactors->GetAttributeMap() );
      memberAttrMap_m_prescaleFactors->AddProperty("mapping","blob");
   }

} // end of namespace ROOT

namespace ROOT {
   static TClass *L1GtTriggerMask_Dictionary();
   static void L1GtTriggerMask_TClassManip(TClass*);
   static void *new_L1GtTriggerMask(void *p = 0);
   static void *newArray_L1GtTriggerMask(Long_t size, void *p);
   static void delete_L1GtTriggerMask(void *p);
   static void deleteArray_L1GtTriggerMask(void *p);
   static void destruct_L1GtTriggerMask(void *p);

   // Function generating the singleton type initializer
   static TGenericClassInfo *GenerateInitInstanceLocal(const ::L1GtTriggerMask*)
   {
      ::L1GtTriggerMask *ptr = 0;
      static ::TVirtualIsAProxy* isa_proxy = new ::TIsAProxy(typeid(::L1GtTriggerMask));
      static ::ROOT::TGenericClassInfo 
         instance("L1GtTriggerMask", "CondFormats/L1TObjects/interface/L1GtTriggerMask.h", 33,
                  typeid(::L1GtTriggerMask), ::ROOT::Internal::DefineBehavior(ptr, ptr),
                  &L1GtTriggerMask_Dictionary, isa_proxy, 0,
                  sizeof(::L1GtTriggerMask) );
      instance.SetNew(&new_L1GtTriggerMask);
      instance.SetNewArray(&newArray_L1GtTriggerMask);
      instance.SetDelete(&delete_L1GtTriggerMask);
      instance.SetDeleteArray(&deleteArray_L1GtTriggerMask);
      instance.SetDestructor(&destruct_L1GtTriggerMask);
      return &instance;
   }
   TGenericClassInfo *GenerateInitInstance(const ::L1GtTriggerMask*)
   {
      return GenerateInitInstanceLocal((::L1GtTriggerMask*)0);
   }
   // Static variable to force the class initialization
   static ::ROOT::TGenericClassInfo *_R__UNIQUE_(Init) = GenerateInitInstanceLocal((const ::L1GtTriggerMask*)0x0); R__UseDummy(_R__UNIQUE_(Init));

   // Dictionary for non-ClassDef classes
   static TClass *L1GtTriggerMask_Dictionary() {
      TClass* theClass =::ROOT::GenerateInitInstanceLocal((const ::L1GtTriggerMask*)0x0)->GetClass();
      L1GtTriggerMask_TClassManip(theClass);
   return theClass;
   }

   static void L1GtTriggerMask_TClassManip(TClass* theClass){
      TDataMember* theMember_m_triggerMask = theClass->GetDataMember("m_triggerMask");
      theMember_m_triggerMask->CreateAttributeMap();
      TDictAttributeMap* memberAttrMap_m_triggerMask( theMember_m_triggerMask->GetAttributeMap() );
      memberAttrMap_m_triggerMask->AddProperty("mapping","blob");
   }

} // end of namespace ROOT

namespace ROOT {
   static TClass *L1GtBoard_Dictionary();
   static void L1GtBoard_TClassManip(TClass*);
   static void *new_L1GtBoard(void *p = 0);
   static void *newArray_L1GtBoard(Long_t size, void *p);
   static void delete_L1GtBoard(void *p);
   static void deleteArray_L1GtBoard(void *p);
   static void destruct_L1GtBoard(void *p);

   // Function generating the singleton type initializer
   static TGenericClassInfo *GenerateInitInstanceLocal(const ::L1GtBoard*)
   {
      ::L1GtBoard *ptr = 0;
      static ::TVirtualIsAProxy* isa_proxy = new ::TIsAProxy(typeid(::L1GtBoard));
      static ::ROOT::TGenericClassInfo 
         instance("L1GtBoard", "CondFormats/L1TObjects/interface/L1GtBoard.h", 36,
                  typeid(::L1GtBoard), ::ROOT::Internal::DefineBehavior(ptr, ptr),
                  &L1GtBoard_Dictionary, isa_proxy, 0,
                  sizeof(::L1GtBoard) );
      instance.SetNew(&new_L1GtBoard);
      instance.SetNewArray(&newArray_L1GtBoard);
      instance.SetDelete(&delete_L1GtBoard);
      instance.SetDeleteArray(&deleteArray_L1GtBoard);
      instance.SetDestructor(&destruct_L1GtBoard);
      return &instance;
   }
   TGenericClassInfo *GenerateInitInstance(const ::L1GtBoard*)
   {
      return GenerateInitInstanceLocal((::L1GtBoard*)0);
   }
   // Static variable to force the class initialization
   static ::ROOT::TGenericClassInfo *_R__UNIQUE_(Init) = GenerateInitInstanceLocal((const ::L1GtBoard*)0x0); R__UseDummy(_R__UNIQUE_(Init));

   // Dictionary for non-ClassDef classes
   static TClass *L1GtBoard_Dictionary() {
      TClass* theClass =::ROOT::GenerateInitInstanceLocal((const ::L1GtBoard*)0x0)->GetClass();
      L1GtBoard_TClassManip(theClass);
   return theClass;
   }

   static void L1GtBoard_TClassManip(TClass* ){
   }

} // end of namespace ROOT

namespace ROOT {
   static TClass *L1GtBoardMaps_Dictionary();
   static void L1GtBoardMaps_TClassManip(TClass*);
   static void *new_L1GtBoardMaps(void *p = 0);
   static void *newArray_L1GtBoardMaps(Long_t size, void *p);
   static void delete_L1GtBoardMaps(void *p);
   static void deleteArray_L1GtBoardMaps(void *p);
   static void destruct_L1GtBoardMaps(void *p);

   // Function generating the singleton type initializer
   static TGenericClassInfo *GenerateInitInstanceLocal(const ::L1GtBoardMaps*)
   {
      ::L1GtBoardMaps *ptr = 0;
      static ::TVirtualIsAProxy* isa_proxy = new ::TIsAProxy(typeid(::L1GtBoardMaps));
      static ::ROOT::TGenericClassInfo 
         instance("L1GtBoardMaps", "CondFormats/L1TObjects/interface/L1GtBoardMaps.h", 33,
                  typeid(::L1GtBoardMaps), ::ROOT::Internal::DefineBehavior(ptr, ptr),
                  &L1GtBoardMaps_Dictionary, isa_proxy, 0,
                  sizeof(::L1GtBoardMaps) );
      instance.SetNew(&new_L1GtBoardMaps);
      instance.SetNewArray(&newArray_L1GtBoardMaps);
      instance.SetDelete(&delete_L1GtBoardMaps);
      instance.SetDeleteArray(&deleteArray_L1GtBoardMaps);
      instance.SetDestructor(&destruct_L1GtBoardMaps);
      return &instance;
   }
   TGenericClassInfo *GenerateInitInstance(const ::L1GtBoardMaps*)
   {
      return GenerateInitInstanceLocal((::L1GtBoardMaps*)0);
   }
   // Static variable to force the class initialization
   static ::ROOT::TGenericClassInfo *_R__UNIQUE_(Init) = GenerateInitInstanceLocal((const ::L1GtBoardMaps*)0x0); R__UseDummy(_R__UNIQUE_(Init));

   // Dictionary for non-ClassDef classes
   static TClass *L1GtBoardMaps_Dictionary() {
      TClass* theClass =::ROOT::GenerateInitInstanceLocal((const ::L1GtBoardMaps*)0x0)->GetClass();
      L1GtBoardMaps_TClassManip(theClass);
   return theClass;
   }

   static void L1GtBoardMaps_TClassManip(TClass* theClass){
      TDataMember* theMember_m_gtBoardMaps = theClass->GetDataMember("m_gtBoardMaps");
      theMember_m_gtBoardMaps->CreateAttributeMap();
      TDictAttributeMap* memberAttrMap_m_gtBoardMaps( theMember_m_gtBoardMaps->GetAttributeMap() );
      memberAttrMap_m_gtBoardMaps->AddProperty("mapping","blob");
   }

} // end of namespace ROOT

namespace ROOT {
   static TClass *L1GtPsbConfig_Dictionary();
   static void L1GtPsbConfig_TClassManip(TClass*);
   static void *new_L1GtPsbConfig(void *p = 0);
   static void *newArray_L1GtPsbConfig(Long_t size, void *p);
   static void delete_L1GtPsbConfig(void *p);
   static void deleteArray_L1GtPsbConfig(void *p);
   static void destruct_L1GtPsbConfig(void *p);

   // Function generating the singleton type initializer
   static TGenericClassInfo *GenerateInitInstanceLocal(const ::L1GtPsbConfig*)
   {
      ::L1GtPsbConfig *ptr = 0;
      static ::TVirtualIsAProxy* isa_proxy = new ::TIsAProxy(typeid(::L1GtPsbConfig));
      static ::ROOT::TGenericClassInfo 
         instance("L1GtPsbConfig", "CondFormats/L1TObjects/interface/L1GtPsbConfig.h", 32,
                  typeid(::L1GtPsbConfig), ::ROOT::Internal::DefineBehavior(ptr, ptr),
                  &L1GtPsbConfig_Dictionary, isa_proxy, 0,
                  sizeof(::L1GtPsbConfig) );
      instance.SetNew(&new_L1GtPsbConfig);
      instance.SetNewArray(&newArray_L1GtPsbConfig);
      instance.SetDelete(&delete_L1GtPsbConfig);
      instance.SetDeleteArray(&deleteArray_L1GtPsbConfig);
      instance.SetDestructor(&destruct_L1GtPsbConfig);
      return &instance;
   }
   TGenericClassInfo *GenerateInitInstance(const ::L1GtPsbConfig*)
   {
      return GenerateInitInstanceLocal((::L1GtPsbConfig*)0);
   }
   // Static variable to force the class initialization
   static ::ROOT::TGenericClassInfo *_R__UNIQUE_(Init) = GenerateInitInstanceLocal((const ::L1GtPsbConfig*)0x0); R__UseDummy(_R__UNIQUE_(Init));

   // Dictionary for non-ClassDef classes
   static TClass *L1GtPsbConfig_Dictionary() {
      TClass* theClass =::ROOT::GenerateInitInstanceLocal((const ::L1GtPsbConfig*)0x0)->GetClass();
      L1GtPsbConfig_TClassManip(theClass);
   return theClass;
   }

   static void L1GtPsbConfig_TClassManip(TClass* ){
   }

} // end of namespace ROOT

namespace ROOT {
   static TClass *L1GtPsbSetup_Dictionary();
   static void L1GtPsbSetup_TClassManip(TClass*);
   static void *new_L1GtPsbSetup(void *p = 0);
   static void *newArray_L1GtPsbSetup(Long_t size, void *p);
   static void delete_L1GtPsbSetup(void *p);
   static void deleteArray_L1GtPsbSetup(void *p);
   static void destruct_L1GtPsbSetup(void *p);

   // Function generating the singleton type initializer
   static TGenericClassInfo *GenerateInitInstanceLocal(const ::L1GtPsbSetup*)
   {
      ::L1GtPsbSetup *ptr = 0;
      static ::TVirtualIsAProxy* isa_proxy = new ::TIsAProxy(typeid(::L1GtPsbSetup));
      static ::ROOT::TGenericClassInfo 
         instance("L1GtPsbSetup", "CondFormats/L1TObjects/interface/L1GtPsbSetup.h", 32,
                  typeid(::L1GtPsbSetup), ::ROOT::Internal::DefineBehavior(ptr, ptr),
                  &L1GtPsbSetup_Dictionary, isa_proxy, 0,
                  sizeof(::L1GtPsbSetup) );
      instance.SetNew(&new_L1GtPsbSetup);
      instance.SetNewArray(&newArray_L1GtPsbSetup);
      instance.SetDelete(&delete_L1GtPsbSetup);
      instance.SetDeleteArray(&deleteArray_L1GtPsbSetup);
      instance.SetDestructor(&destruct_L1GtPsbSetup);
      return &instance;
   }
   TGenericClassInfo *GenerateInitInstance(const ::L1GtPsbSetup*)
   {
      return GenerateInitInstanceLocal((::L1GtPsbSetup*)0);
   }
   // Static variable to force the class initialization
   static ::ROOT::TGenericClassInfo *_R__UNIQUE_(Init) = GenerateInitInstanceLocal((const ::L1GtPsbSetup*)0x0); R__UseDummy(_R__UNIQUE_(Init));

   // Dictionary for non-ClassDef classes
   static TClass *L1GtPsbSetup_Dictionary() {
      TClass* theClass =::ROOT::GenerateInitInstanceLocal((const ::L1GtPsbSetup*)0x0)->GetClass();
      L1GtPsbSetup_TClassManip(theClass);
   return theClass;
   }

   static void L1GtPsbSetup_TClassManip(TClass* theClass){
      TDataMember* theMember_m_gtPsbSetup = theClass->GetDataMember("m_gtPsbSetup");
      theMember_m_gtPsbSetup->CreateAttributeMap();
      TDictAttributeMap* memberAttrMap_m_gtPsbSetup( theMember_m_gtPsbSetup->GetAttributeMap() );
      memberAttrMap_m_gtPsbSetup->AddProperty("mapping","blob");
   }

} // end of namespace ROOT

namespace ROOT {
   static TClass *pairlEintcOvectorlEL1GtObjectgRsPgR_Dictionary();
   static void pairlEintcOvectorlEL1GtObjectgRsPgR_TClassManip(TClass*);
   static void *new_pairlEintcOvectorlEL1GtObjectgRsPgR(void *p = 0);
   static void *newArray_pairlEintcOvectorlEL1GtObjectgRsPgR(Long_t size, void *p);
   static void delete_pairlEintcOvectorlEL1GtObjectgRsPgR(void *p);
   static void deleteArray_pairlEintcOvectorlEL1GtObjectgRsPgR(void *p);
   static void destruct_pairlEintcOvectorlEL1GtObjectgRsPgR(void *p);

   // Function generating the singleton type initializer
   static TGenericClassInfo *GenerateInitInstanceLocal(const pair<int,vector<L1GtObject> >*)
   {
      pair<int,vector<L1GtObject> > *ptr = 0;
      static ::TVirtualIsAProxy* isa_proxy = new ::TIsAProxy(typeid(pair<int,vector<L1GtObject> >));
      static ::ROOT::TGenericClassInfo 
         instance("pair<int,vector<L1GtObject> >", "string", 96,
                  typeid(pair<int,vector<L1GtObject> >), ::ROOT::Internal::DefineBehavior(ptr, ptr),
                  &pairlEintcOvectorlEL1GtObjectgRsPgR_Dictionary, isa_proxy, 0,
                  sizeof(pair<int,vector<L1GtObject> >) );
      instance.SetNew(&new_pairlEintcOvectorlEL1GtObjectgRsPgR);
      instance.SetNewArray(&newArray_pairlEintcOvectorlEL1GtObjectgRsPgR);
      instance.SetDelete(&delete_pairlEintcOvectorlEL1GtObjectgRsPgR);
      instance.SetDeleteArray(&deleteArray_pairlEintcOvectorlEL1GtObjectgRsPgR);
      instance.SetDestructor(&destruct_pairlEintcOvectorlEL1GtObjectgRsPgR);

      ::ROOT::AddClassAlternate("pair<int,vector<L1GtObject> >","pair<int,std::vector<L1GtObject> >");
      return &instance;
   }
   // Static variable to force the class initialization
   static ::ROOT::TGenericClassInfo *_R__UNIQUE_(Init) = GenerateInitInstanceLocal((const pair<int,vector<L1GtObject> >*)0x0); R__UseDummy(_R__UNIQUE_(Init));

   // Dictionary for non-ClassDef classes
   static TClass *pairlEintcOvectorlEL1GtObjectgRsPgR_Dictionary() {
      TClass* theClass =::ROOT::GenerateInitInstanceLocal((const pair<int,vector<L1GtObject> >*)0x0)->GetClass();
      pairlEintcOvectorlEL1GtObjectgRsPgR_TClassManip(theClass);
   return theClass;
   }

   static void pairlEintcOvectorlEL1GtObjectgRsPgR_TClassManip(TClass* ){
   }

} // end of namespace ROOT

namespace ROOT {
   static TClass *pairlEconstsPintcOvectorlEL1GtObjectgRsPgR_Dictionary();
   static void pairlEconstsPintcOvectorlEL1GtObjectgRsPgR_TClassManip(TClass*);
   static void *new_pairlEconstsPintcOvectorlEL1GtObjectgRsPgR(void *p = 0);
   static void *newArray_pairlEconstsPintcOvectorlEL1GtObjectgRsPgR(Long_t size, void *p);
   static void delete_pairlEconstsPintcOvectorlEL1GtObjectgRsPgR(void *p);
   static void deleteArray_pairlEconstsPintcOvectorlEL1GtObjectgRsPgR(void *p);
   static void destruct_pairlEconstsPintcOvectorlEL1GtObjectgRsPgR(void *p);

   // Function generating the singleton type initializer
   static TGenericClassInfo *GenerateInitInstanceLocal(const pair<const int,vector<L1GtObject> >*)
   {
      pair<const int,vector<L1GtObject> > *ptr = 0;
      static ::TVirtualIsAProxy* isa_proxy = new ::TIsAProxy(typeid(pair<const int,vector<L1GtObject> >));
      static ::ROOT::TGenericClassInfo 
         instance("pair<const int,vector<L1GtObject> >", "string", 96,
                  typeid(pair<const int,vector<L1GtObject> >), ::ROOT::Internal::DefineBehavior(ptr, ptr),
                  &pairlEconstsPintcOvectorlEL1GtObjectgRsPgR_Dictionary, isa_proxy, 0,
                  sizeof(pair<const int,vector<L1GtObject> >) );
      instance.SetNew(&new_pairlEconstsPintcOvectorlEL1GtObjectgRsPgR);
      instance.SetNewArray(&newArray_pairlEconstsPintcOvectorlEL1GtObjectgRsPgR);
      instance.SetDelete(&delete_pairlEconstsPintcOvectorlEL1GtObjectgRsPgR);
      instance.SetDeleteArray(&deleteArray_pairlEconstsPintcOvectorlEL1GtObjectgRsPgR);
      instance.SetDestructor(&destruct_pairlEconstsPintcOvectorlEL1GtObjectgRsPgR);

      ::ROOT::AddClassAlternate("pair<const int,vector<L1GtObject> >","map<int,std::vector<L1GtObject> >::value_type");
      return &instance;
   }
   // Static variable to force the class initialization
   static ::ROOT::TGenericClassInfo *_R__UNIQUE_(Init) = GenerateInitInstanceLocal((const pair<const int,vector<L1GtObject> >*)0x0); R__UseDummy(_R__UNIQUE_(Init));

   // Dictionary for non-ClassDef classes
   static TClass *pairlEconstsPintcOvectorlEL1GtObjectgRsPgR_Dictionary() {
      TClass* theClass =::ROOT::GenerateInitInstanceLocal((const pair<const int,vector<L1GtObject> >*)0x0)->GetClass();
      pairlEconstsPintcOvectorlEL1GtObjectgRsPgR_TClassManip(theClass);
   return theClass;
   }

   static void pairlEconstsPintcOvectorlEL1GtObjectgRsPgR_TClassManip(TClass* ){
   }

} // end of namespace ROOT

namespace ROOT {
   static TClass *L1GtCondition_Dictionary();
   static void L1GtCondition_TClassManip(TClass*);
   static void *new_L1GtCondition(void *p = 0);
   static void *newArray_L1GtCondition(Long_t size, void *p);
   static void delete_L1GtCondition(void *p);
   static void deleteArray_L1GtCondition(void *p);
   static void destruct_L1GtCondition(void *p);

   // Function generating the singleton type initializer
   static TGenericClassInfo *GenerateInitInstanceLocal(const ::L1GtCondition*)
   {
      ::L1GtCondition *ptr = 0;
      static ::TVirtualIsAProxy* isa_proxy = new ::TIsAProxy(typeid(::L1GtCondition));
      static ::ROOT::TGenericClassInfo 
         instance("L1GtCondition", "CondFormats/L1TObjects/interface/L1GtCondition.h", 35,
                  typeid(::L1GtCondition), ::ROOT::Internal::DefineBehavior(ptr, ptr),
                  &L1GtCondition_Dictionary, isa_proxy, 0,
                  sizeof(::L1GtCondition) );
      instance.SetNew(&new_L1GtCondition);
      instance.SetNewArray(&newArray_L1GtCondition);
      instance.SetDelete(&delete_L1GtCondition);
      instance.SetDeleteArray(&deleteArray_L1GtCondition);
      instance.SetDestructor(&destruct_L1GtCondition);
      return &instance;
   }
   TGenericClassInfo *GenerateInitInstance(const ::L1GtCondition*)
   {
      return GenerateInitInstanceLocal((::L1GtCondition*)0);
   }
   // Static variable to force the class initialization
   static ::ROOT::TGenericClassInfo *_R__UNIQUE_(Init) = GenerateInitInstanceLocal((const ::L1GtCondition*)0x0); R__UseDummy(_R__UNIQUE_(Init));

   // Dictionary for non-ClassDef classes
   static TClass *L1GtCondition_Dictionary() {
      TClass* theClass =::ROOT::GenerateInitInstanceLocal((const ::L1GtCondition*)0x0)->GetClass();
      L1GtCondition_TClassManip(theClass);
   return theClass;
   }

   static void L1GtCondition_TClassManip(TClass* ){
   }

} // end of namespace ROOT

namespace ROOT {
   static TClass *L1GtMuonTemplate_Dictionary();
   static void L1GtMuonTemplate_TClassManip(TClass*);
   static void *new_L1GtMuonTemplate(void *p = 0);
   static void *newArray_L1GtMuonTemplate(Long_t size, void *p);
   static void delete_L1GtMuonTemplate(void *p);
   static void deleteArray_L1GtMuonTemplate(void *p);
   static void destruct_L1GtMuonTemplate(void *p);

   // Function generating the singleton type initializer
   static TGenericClassInfo *GenerateInitInstanceLocal(const ::L1GtMuonTemplate*)
   {
      ::L1GtMuonTemplate *ptr = 0;
      static ::TVirtualIsAProxy* isa_proxy = new ::TIsAProxy(typeid(::L1GtMuonTemplate));
      static ::ROOT::TGenericClassInfo 
         instance("L1GtMuonTemplate", "CondFormats/L1TObjects/interface/L1GtMuonTemplate.h", 34,
                  typeid(::L1GtMuonTemplate), ::ROOT::Internal::DefineBehavior(ptr, ptr),
                  &L1GtMuonTemplate_Dictionary, isa_proxy, 0,
                  sizeof(::L1GtMuonTemplate) );
      instance.SetNew(&new_L1GtMuonTemplate);
      instance.SetNewArray(&newArray_L1GtMuonTemplate);
      instance.SetDelete(&delete_L1GtMuonTemplate);
      instance.SetDeleteArray(&deleteArray_L1GtMuonTemplate);
      instance.SetDestructor(&destruct_L1GtMuonTemplate);
      return &instance;
   }
   TGenericClassInfo *GenerateInitInstance(const ::L1GtMuonTemplate*)
   {
      return GenerateInitInstanceLocal((::L1GtMuonTemplate*)0);
   }
   // Static variable to force the class initialization
   static ::ROOT::TGenericClassInfo *_R__UNIQUE_(Init) = GenerateInitInstanceLocal((const ::L1GtMuonTemplate*)0x0); R__UseDummy(_R__UNIQUE_(Init));

   // Dictionary for non-ClassDef classes
   static TClass *L1GtMuonTemplate_Dictionary() {
      TClass* theClass =::ROOT::GenerateInitInstanceLocal((const ::L1GtMuonTemplate*)0x0)->GetClass();
      L1GtMuonTemplate_TClassManip(theClass);
   return theClass;
   }

   static void L1GtMuonTemplate_TClassManip(TClass* ){
   }

} // end of namespace ROOT

namespace ROOT {
   static TClass *L1GtMuonTemplatecLcLObjectParameter_Dictionary();
   static void L1GtMuonTemplatecLcLObjectParameter_TClassManip(TClass*);
   static void *new_L1GtMuonTemplatecLcLObjectParameter(void *p = 0);
   static void *newArray_L1GtMuonTemplatecLcLObjectParameter(Long_t size, void *p);
   static void delete_L1GtMuonTemplatecLcLObjectParameter(void *p);
   static void deleteArray_L1GtMuonTemplatecLcLObjectParameter(void *p);
   static void destruct_L1GtMuonTemplatecLcLObjectParameter(void *p);

   // Function generating the singleton type initializer
   static TGenericClassInfo *GenerateInitInstanceLocal(const ::L1GtMuonTemplate::ObjectParameter*)
   {
      ::L1GtMuonTemplate::ObjectParameter *ptr = 0;
      static ::TVirtualIsAProxy* isa_proxy = new ::TIsAProxy(typeid(::L1GtMuonTemplate::ObjectParameter));
      static ::ROOT::TGenericClassInfo 
         instance("L1GtMuonTemplate::ObjectParameter", "CondFormats/L1TObjects/interface/L1GtMuonTemplate.h", 60,
                  typeid(::L1GtMuonTemplate::ObjectParameter), ::ROOT::Internal::DefineBehavior(ptr, ptr),
                  &L1GtMuonTemplatecLcLObjectParameter_Dictionary, isa_proxy, 0,
                  sizeof(::L1GtMuonTemplate::ObjectParameter) );
      instance.SetNew(&new_L1GtMuonTemplatecLcLObjectParameter);
      instance.SetNewArray(&newArray_L1GtMuonTemplatecLcLObjectParameter);
      instance.SetDelete(&delete_L1GtMuonTemplatecLcLObjectParameter);
      instance.SetDeleteArray(&deleteArray_L1GtMuonTemplatecLcLObjectParameter);
      instance.SetDestructor(&destruct_L1GtMuonTemplatecLcLObjectParameter);
      return &instance;
   }
   TGenericClassInfo *GenerateInitInstance(const ::L1GtMuonTemplate::ObjectParameter*)
   {
      return GenerateInitInstanceLocal((::L1GtMuonTemplate::ObjectParameter*)0);
   }
   // Static variable to force the class initialization
   static ::ROOT::TGenericClassInfo *_R__UNIQUE_(Init) = GenerateInitInstanceLocal((const ::L1GtMuonTemplate::ObjectParameter*)0x0); R__UseDummy(_R__UNIQUE_(Init));

   // Dictionary for non-ClassDef classes
   static TClass *L1GtMuonTemplatecLcLObjectParameter_Dictionary() {
      TClass* theClass =::ROOT::GenerateInitInstanceLocal((const ::L1GtMuonTemplate::ObjectParameter*)0x0)->GetClass();
      L1GtMuonTemplatecLcLObjectParameter_TClassManip(theClass);
   return theClass;
   }

   static void L1GtMuonTemplatecLcLObjectParameter_TClassManip(TClass* ){
   }

} // end of namespace ROOT

namespace ROOT {
   static TClass *L1GtMuonTemplatecLcLCorrelationParameter_Dictionary();
   static void L1GtMuonTemplatecLcLCorrelationParameter_TClassManip(TClass*);
   static void *new_L1GtMuonTemplatecLcLCorrelationParameter(void *p = 0);
   static void *newArray_L1GtMuonTemplatecLcLCorrelationParameter(Long_t size, void *p);
   static void delete_L1GtMuonTemplatecLcLCorrelationParameter(void *p);
   static void deleteArray_L1GtMuonTemplatecLcLCorrelationParameter(void *p);
   static void destruct_L1GtMuonTemplatecLcLCorrelationParameter(void *p);

   // Function generating the singleton type initializer
   static TGenericClassInfo *GenerateInitInstanceLocal(const ::L1GtMuonTemplate::CorrelationParameter*)
   {
      ::L1GtMuonTemplate::CorrelationParameter *ptr = 0;
      static ::TVirtualIsAProxy* isa_proxy = new ::TIsAProxy(typeid(::L1GtMuonTemplate::CorrelationParameter));
      static ::ROOT::TGenericClassInfo 
         instance("L1GtMuonTemplate::CorrelationParameter", "CondFormats/L1TObjects/interface/L1GtMuonTemplate.h", 78,
                  typeid(::L1GtMuonTemplate::CorrelationParameter), ::ROOT::Internal::DefineBehavior(ptr, ptr),
                  &L1GtMuonTemplatecLcLCorrelationParameter_Dictionary, isa_proxy, 0,
                  sizeof(::L1GtMuonTemplate::CorrelationParameter) );
      instance.SetNew(&new_L1GtMuonTemplatecLcLCorrelationParameter);
      instance.SetNewArray(&newArray_L1GtMuonTemplatecLcLCorrelationParameter);
      instance.SetDelete(&delete_L1GtMuonTemplatecLcLCorrelationParameter);
      instance.SetDeleteArray(&deleteArray_L1GtMuonTemplatecLcLCorrelationParameter);
      instance.SetDestructor(&destruct_L1GtMuonTemplatecLcLCorrelationParameter);
      return &instance;
   }
   TGenericClassInfo *GenerateInitInstance(const ::L1GtMuonTemplate::CorrelationParameter*)
   {
      return GenerateInitInstanceLocal((::L1GtMuonTemplate::CorrelationParameter*)0);
   }
   // Static variable to force the class initialization
   static ::ROOT::TGenericClassInfo *_R__UNIQUE_(Init) = GenerateInitInstanceLocal((const ::L1GtMuonTemplate::CorrelationParameter*)0x0); R__UseDummy(_R__UNIQUE_(Init));

   // Dictionary for non-ClassDef classes
   static TClass *L1GtMuonTemplatecLcLCorrelationParameter_Dictionary() {
      TClass* theClass =::ROOT::GenerateInitInstanceLocal((const ::L1GtMuonTemplate::CorrelationParameter*)0x0)->GetClass();
      L1GtMuonTemplatecLcLCorrelationParameter_TClassManip(theClass);
   return theClass;
   }

   static void L1GtMuonTemplatecLcLCorrelationParameter_TClassManip(TClass* ){
   }

} // end of namespace ROOT

namespace ROOT {
   static TClass *L1GtCaloTemplate_Dictionary();
   static void L1GtCaloTemplate_TClassManip(TClass*);
   static void *new_L1GtCaloTemplate(void *p = 0);
   static void *newArray_L1GtCaloTemplate(Long_t size, void *p);
   static void delete_L1GtCaloTemplate(void *p);
   static void deleteArray_L1GtCaloTemplate(void *p);
   static void destruct_L1GtCaloTemplate(void *p);

   // Function generating the singleton type initializer
   static TGenericClassInfo *GenerateInitInstanceLocal(const ::L1GtCaloTemplate*)
   {
      ::L1GtCaloTemplate *ptr = 0;
      static ::TVirtualIsAProxy* isa_proxy = new ::TIsAProxy(typeid(::L1GtCaloTemplate));
      static ::ROOT::TGenericClassInfo 
         instance("L1GtCaloTemplate", "CondFormats/L1TObjects/interface/L1GtCaloTemplate.h", 34,
                  typeid(::L1GtCaloTemplate), ::ROOT::Internal::DefineBehavior(ptr, ptr),
                  &L1GtCaloTemplate_Dictionary, isa_proxy, 0,
                  sizeof(::L1GtCaloTemplate) );
      instance.SetNew(&new_L1GtCaloTemplate);
      instance.SetNewArray(&newArray_L1GtCaloTemplate);
      instance.SetDelete(&delete_L1GtCaloTemplate);
      instance.SetDeleteArray(&deleteArray_L1GtCaloTemplate);
      instance.SetDestructor(&destruct_L1GtCaloTemplate);
      return &instance;
   }
   TGenericClassInfo *GenerateInitInstance(const ::L1GtCaloTemplate*)
   {
      return GenerateInitInstanceLocal((::L1GtCaloTemplate*)0);
   }
   // Static variable to force the class initialization
   static ::ROOT::TGenericClassInfo *_R__UNIQUE_(Init) = GenerateInitInstanceLocal((const ::L1GtCaloTemplate*)0x0); R__UseDummy(_R__UNIQUE_(Init));

   // Dictionary for non-ClassDef classes
   static TClass *L1GtCaloTemplate_Dictionary() {
      TClass* theClass =::ROOT::GenerateInitInstanceLocal((const ::L1GtCaloTemplate*)0x0)->GetClass();
      L1GtCaloTemplate_TClassManip(theClass);
   return theClass;
   }

   static void L1GtCaloTemplate_TClassManip(TClass* ){
   }

} // end of namespace ROOT

namespace ROOT {
   static TClass *L1GtCaloTemplatecLcLObjectParameter_Dictionary();
   static void L1GtCaloTemplatecLcLObjectParameter_TClassManip(TClass*);
   static void *new_L1GtCaloTemplatecLcLObjectParameter(void *p = 0);
   static void *newArray_L1GtCaloTemplatecLcLObjectParameter(Long_t size, void *p);
   static void delete_L1GtCaloTemplatecLcLObjectParameter(void *p);
   static void deleteArray_L1GtCaloTemplatecLcLObjectParameter(void *p);
   static void destruct_L1GtCaloTemplatecLcLObjectParameter(void *p);

   // Function generating the singleton type initializer
   static TGenericClassInfo *GenerateInitInstanceLocal(const ::L1GtCaloTemplate::ObjectParameter*)
   {
      ::L1GtCaloTemplate::ObjectParameter *ptr = 0;
      static ::TVirtualIsAProxy* isa_proxy = new ::TIsAProxy(typeid(::L1GtCaloTemplate::ObjectParameter));
      static ::ROOT::TGenericClassInfo 
         instance("L1GtCaloTemplate::ObjectParameter", "CondFormats/L1TObjects/interface/L1GtCaloTemplate.h", 60,
                  typeid(::L1GtCaloTemplate::ObjectParameter), ::ROOT::Internal::DefineBehavior(ptr, ptr),
                  &L1GtCaloTemplatecLcLObjectParameter_Dictionary, isa_proxy, 0,
                  sizeof(::L1GtCaloTemplate::ObjectParameter) );
      instance.SetNew(&new_L1GtCaloTemplatecLcLObjectParameter);
      instance.SetNewArray(&newArray_L1GtCaloTemplatecLcLObjectParameter);
      instance.SetDelete(&delete_L1GtCaloTemplatecLcLObjectParameter);
      instance.SetDeleteArray(&deleteArray_L1GtCaloTemplatecLcLObjectParameter);
      instance.SetDestructor(&destruct_L1GtCaloTemplatecLcLObjectParameter);
      return &instance;
   }
   TGenericClassInfo *GenerateInitInstance(const ::L1GtCaloTemplate::ObjectParameter*)
   {
      return GenerateInitInstanceLocal((::L1GtCaloTemplate::ObjectParameter*)0);
   }
   // Static variable to force the class initialization
   static ::ROOT::TGenericClassInfo *_R__UNIQUE_(Init) = GenerateInitInstanceLocal((const ::L1GtCaloTemplate::ObjectParameter*)0x0); R__UseDummy(_R__UNIQUE_(Init));

   // Dictionary for non-ClassDef classes
   static TClass *L1GtCaloTemplatecLcLObjectParameter_Dictionary() {
      TClass* theClass =::ROOT::GenerateInitInstanceLocal((const ::L1GtCaloTemplate::ObjectParameter*)0x0)->GetClass();
      L1GtCaloTemplatecLcLObjectParameter_TClassManip(theClass);
   return theClass;
   }

   static void L1GtCaloTemplatecLcLObjectParameter_TClassManip(TClass* ){
   }

} // end of namespace ROOT

namespace ROOT {
   static TClass *L1GtCaloTemplatecLcLCorrelationParameter_Dictionary();
   static void L1GtCaloTemplatecLcLCorrelationParameter_TClassManip(TClass*);
   static void *new_L1GtCaloTemplatecLcLCorrelationParameter(void *p = 0);
   static void *newArray_L1GtCaloTemplatecLcLCorrelationParameter(Long_t size, void *p);
   static void delete_L1GtCaloTemplatecLcLCorrelationParameter(void *p);
   static void deleteArray_L1GtCaloTemplatecLcLCorrelationParameter(void *p);
   static void destruct_L1GtCaloTemplatecLcLCorrelationParameter(void *p);

   // Function generating the singleton type initializer
   static TGenericClassInfo *GenerateInitInstanceLocal(const ::L1GtCaloTemplate::CorrelationParameter*)
   {
      ::L1GtCaloTemplate::CorrelationParameter *ptr = 0;
      static ::TVirtualIsAProxy* isa_proxy = new ::TIsAProxy(typeid(::L1GtCaloTemplate::CorrelationParameter));
      static ::ROOT::TGenericClassInfo 
         instance("L1GtCaloTemplate::CorrelationParameter", "CondFormats/L1TObjects/interface/L1GtCaloTemplate.h", 70,
                  typeid(::L1GtCaloTemplate::CorrelationParameter), ::ROOT::Internal::DefineBehavior(ptr, ptr),
                  &L1GtCaloTemplatecLcLCorrelationParameter_Dictionary, isa_proxy, 0,
                  sizeof(::L1GtCaloTemplate::CorrelationParameter) );
      instance.SetNew(&new_L1GtCaloTemplatecLcLCorrelationParameter);
      instance.SetNewArray(&newArray_L1GtCaloTemplatecLcLCorrelationParameter);
      instance.SetDelete(&delete_L1GtCaloTemplatecLcLCorrelationParameter);
      instance.SetDeleteArray(&deleteArray_L1GtCaloTemplatecLcLCorrelationParameter);
      instance.SetDestructor(&destruct_L1GtCaloTemplatecLcLCorrelationParameter);
      return &instance;
   }
   TGenericClassInfo *GenerateInitInstance(const ::L1GtCaloTemplate::CorrelationParameter*)
   {
      return GenerateInitInstanceLocal((::L1GtCaloTemplate::CorrelationParameter*)0);
   }
   // Static variable to force the class initialization
   static ::ROOT::TGenericClassInfo *_R__UNIQUE_(Init) = GenerateInitInstanceLocal((const ::L1GtCaloTemplate::CorrelationParameter*)0x0); R__UseDummy(_R__UNIQUE_(Init));

   // Dictionary for non-ClassDef classes
   static TClass *L1GtCaloTemplatecLcLCorrelationParameter_Dictionary() {
      TClass* theClass =::ROOT::GenerateInitInstanceLocal((const ::L1GtCaloTemplate::CorrelationParameter*)0x0)->GetClass();
      L1GtCaloTemplatecLcLCorrelationParameter_TClassManip(theClass);
   return theClass;
   }

   static void L1GtCaloTemplatecLcLCorrelationParameter_TClassManip(TClass* ){
   }

} // end of namespace ROOT

namespace ROOT {
   static TClass *L1GtEnergySumTemplate_Dictionary();
   static void L1GtEnergySumTemplate_TClassManip(TClass*);
   static void *new_L1GtEnergySumTemplate(void *p = 0);
   static void *newArray_L1GtEnergySumTemplate(Long_t size, void *p);
   static void delete_L1GtEnergySumTemplate(void *p);
   static void deleteArray_L1GtEnergySumTemplate(void *p);
   static void destruct_L1GtEnergySumTemplate(void *p);

   // Function generating the singleton type initializer
   static TGenericClassInfo *GenerateInitInstanceLocal(const ::L1GtEnergySumTemplate*)
   {
      ::L1GtEnergySumTemplate *ptr = 0;
      static ::TVirtualIsAProxy* isa_proxy = new ::TIsAProxy(typeid(::L1GtEnergySumTemplate));
      static ::ROOT::TGenericClassInfo 
         instance("L1GtEnergySumTemplate", "CondFormats/L1TObjects/interface/L1GtEnergySumTemplate.h", 36,
                  typeid(::L1GtEnergySumTemplate), ::ROOT::Internal::DefineBehavior(ptr, ptr),
                  &L1GtEnergySumTemplate_Dictionary, isa_proxy, 0,
                  sizeof(::L1GtEnergySumTemplate) );
      instance.SetNew(&new_L1GtEnergySumTemplate);
      instance.SetNewArray(&newArray_L1GtEnergySumTemplate);
      instance.SetDelete(&delete_L1GtEnergySumTemplate);
      instance.SetDeleteArray(&deleteArray_L1GtEnergySumTemplate);
      instance.SetDestructor(&destruct_L1GtEnergySumTemplate);
      return &instance;
   }
   TGenericClassInfo *GenerateInitInstance(const ::L1GtEnergySumTemplate*)
   {
      return GenerateInitInstanceLocal((::L1GtEnergySumTemplate*)0);
   }
   // Static variable to force the class initialization
   static ::ROOT::TGenericClassInfo *_R__UNIQUE_(Init) = GenerateInitInstanceLocal((const ::L1GtEnergySumTemplate*)0x0); R__UseDummy(_R__UNIQUE_(Init));

   // Dictionary for non-ClassDef classes
   static TClass *L1GtEnergySumTemplate_Dictionary() {
      TClass* theClass =::ROOT::GenerateInitInstanceLocal((const ::L1GtEnergySumTemplate*)0x0)->GetClass();
      L1GtEnergySumTemplate_TClassManip(theClass);
   return theClass;
   }

   static void L1GtEnergySumTemplate_TClassManip(TClass* ){
   }

} // end of namespace ROOT

namespace ROOT {
   static TClass *L1GtEnergySumTemplatecLcLObjectParameter_Dictionary();
   static void L1GtEnergySumTemplatecLcLObjectParameter_TClassManip(TClass*);
   static void *new_L1GtEnergySumTemplatecLcLObjectParameter(void *p = 0);
   static void *newArray_L1GtEnergySumTemplatecLcLObjectParameter(Long_t size, void *p);
   static void delete_L1GtEnergySumTemplatecLcLObjectParameter(void *p);
   static void deleteArray_L1GtEnergySumTemplatecLcLObjectParameter(void *p);
   static void destruct_L1GtEnergySumTemplatecLcLObjectParameter(void *p);

   // Function generating the singleton type initializer
   static TGenericClassInfo *GenerateInitInstanceLocal(const ::L1GtEnergySumTemplate::ObjectParameter*)
   {
      ::L1GtEnergySumTemplate::ObjectParameter *ptr = 0;
      static ::TVirtualIsAProxy* isa_proxy = new ::TIsAProxy(typeid(::L1GtEnergySumTemplate::ObjectParameter));
      static ::ROOT::TGenericClassInfo 
         instance("L1GtEnergySumTemplate::ObjectParameter", "CondFormats/L1TObjects/interface/L1GtEnergySumTemplate.h", 62,
                  typeid(::L1GtEnergySumTemplate::ObjectParameter), ::ROOT::Internal::DefineBehavior(ptr, ptr),
                  &L1GtEnergySumTemplatecLcLObjectParameter_Dictionary, isa_proxy, 0,
                  sizeof(::L1GtEnergySumTemplate::ObjectParameter) );
      instance.SetNew(&new_L1GtEnergySumTemplatecLcLObjectParameter);
      instance.SetNewArray(&newArray_L1GtEnergySumTemplatecLcLObjectParameter);
      instance.SetDelete(&delete_L1GtEnergySumTemplatecLcLObjectParameter);
      instance.SetDeleteArray(&deleteArray_L1GtEnergySumTemplatecLcLObjectParameter);
      instance.SetDestructor(&destruct_L1GtEnergySumTemplatecLcLObjectParameter);
      return &instance;
   }
   TGenericClassInfo *GenerateInitInstance(const ::L1GtEnergySumTemplate::ObjectParameter*)
   {
      return GenerateInitInstanceLocal((::L1GtEnergySumTemplate::ObjectParameter*)0);
   }
   // Static variable to force the class initialization
   static ::ROOT::TGenericClassInfo *_R__UNIQUE_(Init) = GenerateInitInstanceLocal((const ::L1GtEnergySumTemplate::ObjectParameter*)0x0); R__UseDummy(_R__UNIQUE_(Init));

   // Dictionary for non-ClassDef classes
   static TClass *L1GtEnergySumTemplatecLcLObjectParameter_Dictionary() {
      TClass* theClass =::ROOT::GenerateInitInstanceLocal((const ::L1GtEnergySumTemplate::ObjectParameter*)0x0)->GetClass();
      L1GtEnergySumTemplatecLcLObjectParameter_TClassManip(theClass);
   return theClass;
   }

   static void L1GtEnergySumTemplatecLcLObjectParameter_TClassManip(TClass* ){
   }

} // end of namespace ROOT

namespace ROOT {
   static TClass *L1GtJetCountsTemplate_Dictionary();
   static void L1GtJetCountsTemplate_TClassManip(TClass*);
   static void *new_L1GtJetCountsTemplate(void *p = 0);
   static void *newArray_L1GtJetCountsTemplate(Long_t size, void *p);
   static void delete_L1GtJetCountsTemplate(void *p);
   static void deleteArray_L1GtJetCountsTemplate(void *p);
   static void destruct_L1GtJetCountsTemplate(void *p);

   // Function generating the singleton type initializer
   static TGenericClassInfo *GenerateInitInstanceLocal(const ::L1GtJetCountsTemplate*)
   {
      ::L1GtJetCountsTemplate *ptr = 0;
      static ::TVirtualIsAProxy* isa_proxy = new ::TIsAProxy(typeid(::L1GtJetCountsTemplate));
      static ::ROOT::TGenericClassInfo 
         instance("L1GtJetCountsTemplate", "CondFormats/L1TObjects/interface/L1GtJetCountsTemplate.h", 36,
                  typeid(::L1GtJetCountsTemplate), ::ROOT::Internal::DefineBehavior(ptr, ptr),
                  &L1GtJetCountsTemplate_Dictionary, isa_proxy, 0,
                  sizeof(::L1GtJetCountsTemplate) );
      instance.SetNew(&new_L1GtJetCountsTemplate);
      instance.SetNewArray(&newArray_L1GtJetCountsTemplate);
      instance.SetDelete(&delete_L1GtJetCountsTemplate);
      instance.SetDeleteArray(&deleteArray_L1GtJetCountsTemplate);
      instance.SetDestructor(&destruct_L1GtJetCountsTemplate);
      return &instance;
   }
   TGenericClassInfo *GenerateInitInstance(const ::L1GtJetCountsTemplate*)
   {
      return GenerateInitInstanceLocal((::L1GtJetCountsTemplate*)0);
   }
   // Static variable to force the class initialization
   static ::ROOT::TGenericClassInfo *_R__UNIQUE_(Init) = GenerateInitInstanceLocal((const ::L1GtJetCountsTemplate*)0x0); R__UseDummy(_R__UNIQUE_(Init));

   // Dictionary for non-ClassDef classes
   static TClass *L1GtJetCountsTemplate_Dictionary() {
      TClass* theClass =::ROOT::GenerateInitInstanceLocal((const ::L1GtJetCountsTemplate*)0x0)->GetClass();
      L1GtJetCountsTemplate_TClassManip(theClass);
   return theClass;
   }

   static void L1GtJetCountsTemplate_TClassManip(TClass* ){
   }

} // end of namespace ROOT

namespace ROOT {
   static TClass *L1GtJetCountsTemplatecLcLObjectParameter_Dictionary();
   static void L1GtJetCountsTemplatecLcLObjectParameter_TClassManip(TClass*);
   static void *new_L1GtJetCountsTemplatecLcLObjectParameter(void *p = 0);
   static void *newArray_L1GtJetCountsTemplatecLcLObjectParameter(Long_t size, void *p);
   static void delete_L1GtJetCountsTemplatecLcLObjectParameter(void *p);
   static void deleteArray_L1GtJetCountsTemplatecLcLObjectParameter(void *p);
   static void destruct_L1GtJetCountsTemplatecLcLObjectParameter(void *p);

   // Function generating the singleton type initializer
   static TGenericClassInfo *GenerateInitInstanceLocal(const ::L1GtJetCountsTemplate::ObjectParameter*)
   {
      ::L1GtJetCountsTemplate::ObjectParameter *ptr = 0;
      static ::TVirtualIsAProxy* isa_proxy = new ::TIsAProxy(typeid(::L1GtJetCountsTemplate::ObjectParameter));
      static ::ROOT::TGenericClassInfo 
         instance("L1GtJetCountsTemplate::ObjectParameter", "CondFormats/L1TObjects/interface/L1GtJetCountsTemplate.h", 62,
                  typeid(::L1GtJetCountsTemplate::ObjectParameter), ::ROOT::Internal::DefineBehavior(ptr, ptr),
                  &L1GtJetCountsTemplatecLcLObjectParameter_Dictionary, isa_proxy, 0,
                  sizeof(::L1GtJetCountsTemplate::ObjectParameter) );
      instance.SetNew(&new_L1GtJetCountsTemplatecLcLObjectParameter);
      instance.SetNewArray(&newArray_L1GtJetCountsTemplatecLcLObjectParameter);
      instance.SetDelete(&delete_L1GtJetCountsTemplatecLcLObjectParameter);
      instance.SetDeleteArray(&deleteArray_L1GtJetCountsTemplatecLcLObjectParameter);
      instance.SetDestructor(&destruct_L1GtJetCountsTemplatecLcLObjectParameter);
      return &instance;
   }
   TGenericClassInfo *GenerateInitInstance(const ::L1GtJetCountsTemplate::ObjectParameter*)
   {
      return GenerateInitInstanceLocal((::L1GtJetCountsTemplate::ObjectParameter*)0);
   }
   // Static variable to force the class initialization
   static ::ROOT::TGenericClassInfo *_R__UNIQUE_(Init) = GenerateInitInstanceLocal((const ::L1GtJetCountsTemplate::ObjectParameter*)0x0); R__UseDummy(_R__UNIQUE_(Init));

   // Dictionary for non-ClassDef classes
   static TClass *L1GtJetCountsTemplatecLcLObjectParameter_Dictionary() {
      TClass* theClass =::ROOT::GenerateInitInstanceLocal((const ::L1GtJetCountsTemplate::ObjectParameter*)0x0)->GetClass();
      L1GtJetCountsTemplatecLcLObjectParameter_TClassManip(theClass);
   return theClass;
   }

   static void L1GtJetCountsTemplatecLcLObjectParameter_TClassManip(TClass* ){
   }

} // end of namespace ROOT

namespace ROOT {
   static TClass *L1GtCastorTemplate_Dictionary();
   static void L1GtCastorTemplate_TClassManip(TClass*);
   static void *new_L1GtCastorTemplate(void *p = 0);
   static void *newArray_L1GtCastorTemplate(Long_t size, void *p);
   static void delete_L1GtCastorTemplate(void *p);
   static void deleteArray_L1GtCastorTemplate(void *p);
   static void destruct_L1GtCastorTemplate(void *p);

   // Function generating the singleton type initializer
   static TGenericClassInfo *GenerateInitInstanceLocal(const ::L1GtCastorTemplate*)
   {
      ::L1GtCastorTemplate *ptr = 0;
      static ::TVirtualIsAProxy* isa_proxy = new ::TIsAProxy(typeid(::L1GtCastorTemplate));
      static ::ROOT::TGenericClassInfo 
         instance("L1GtCastorTemplate", "CondFormats/L1TObjects/interface/L1GtCastorTemplate.h", 38,
                  typeid(::L1GtCastorTemplate), ::ROOT::Internal::DefineBehavior(ptr, ptr),
                  &L1GtCastorTemplate_Dictionary, isa_proxy, 0,
                  sizeof(::L1GtCastorTemplate) );
      instance.SetNew(&new_L1GtCastorTemplate);
      instance.SetNewArray(&newArray_L1GtCastorTemplate);
      instance.SetDelete(&delete_L1GtCastorTemplate);
      instance.SetDeleteArray(&deleteArray_L1GtCastorTemplate);
      instance.SetDestructor(&destruct_L1GtCastorTemplate);
      return &instance;
   }
   TGenericClassInfo *GenerateInitInstance(const ::L1GtCastorTemplate*)
   {
      return GenerateInitInstanceLocal((::L1GtCastorTemplate*)0);
   }
   // Static variable to force the class initialization
   static ::ROOT::TGenericClassInfo *_R__UNIQUE_(Init) = GenerateInitInstanceLocal((const ::L1GtCastorTemplate*)0x0); R__UseDummy(_R__UNIQUE_(Init));

   // Dictionary for non-ClassDef classes
   static TClass *L1GtCastorTemplate_Dictionary() {
      TClass* theClass =::ROOT::GenerateInitInstanceLocal((const ::L1GtCastorTemplate*)0x0)->GetClass();
      L1GtCastorTemplate_TClassManip(theClass);
   return theClass;
   }

   static void L1GtCastorTemplate_TClassManip(TClass* ){
   }

} // end of namespace ROOT

namespace ROOT {
   static TClass *L1GtHfBitCountsTemplate_Dictionary();
   static void L1GtHfBitCountsTemplate_TClassManip(TClass*);
   static void *new_L1GtHfBitCountsTemplate(void *p = 0);
   static void *newArray_L1GtHfBitCountsTemplate(Long_t size, void *p);
   static void delete_L1GtHfBitCountsTemplate(void *p);
   static void deleteArray_L1GtHfBitCountsTemplate(void *p);
   static void destruct_L1GtHfBitCountsTemplate(void *p);

   // Function generating the singleton type initializer
   static TGenericClassInfo *GenerateInitInstanceLocal(const ::L1GtHfBitCountsTemplate*)
   {
      ::L1GtHfBitCountsTemplate *ptr = 0;
      static ::TVirtualIsAProxy* isa_proxy = new ::TIsAProxy(typeid(::L1GtHfBitCountsTemplate));
      static ::ROOT::TGenericClassInfo 
         instance("L1GtHfBitCountsTemplate", "CondFormats/L1TObjects/interface/L1GtHfBitCountsTemplate.h", 34,
                  typeid(::L1GtHfBitCountsTemplate), ::ROOT::Internal::DefineBehavior(ptr, ptr),
                  &L1GtHfBitCountsTemplate_Dictionary, isa_proxy, 0,
                  sizeof(::L1GtHfBitCountsTemplate) );
      instance.SetNew(&new_L1GtHfBitCountsTemplate);
      instance.SetNewArray(&newArray_L1GtHfBitCountsTemplate);
      instance.SetDelete(&delete_L1GtHfBitCountsTemplate);
      instance.SetDeleteArray(&deleteArray_L1GtHfBitCountsTemplate);
      instance.SetDestructor(&destruct_L1GtHfBitCountsTemplate);
      return &instance;
   }
   TGenericClassInfo *GenerateInitInstance(const ::L1GtHfBitCountsTemplate*)
   {
      return GenerateInitInstanceLocal((::L1GtHfBitCountsTemplate*)0);
   }
   // Static variable to force the class initialization
   static ::ROOT::TGenericClassInfo *_R__UNIQUE_(Init) = GenerateInitInstanceLocal((const ::L1GtHfBitCountsTemplate*)0x0); R__UseDummy(_R__UNIQUE_(Init));

   // Dictionary for non-ClassDef classes
   static TClass *L1GtHfBitCountsTemplate_Dictionary() {
      TClass* theClass =::ROOT::GenerateInitInstanceLocal((const ::L1GtHfBitCountsTemplate*)0x0)->GetClass();
      L1GtHfBitCountsTemplate_TClassManip(theClass);
   return theClass;
   }

   static void L1GtHfBitCountsTemplate_TClassManip(TClass* ){
   }

} // end of namespace ROOT

namespace ROOT {
   static TClass *L1GtHfBitCountsTemplatecLcLObjectParameter_Dictionary();
   static void L1GtHfBitCountsTemplatecLcLObjectParameter_TClassManip(TClass*);
   static void *new_L1GtHfBitCountsTemplatecLcLObjectParameter(void *p = 0);
   static void *newArray_L1GtHfBitCountsTemplatecLcLObjectParameter(Long_t size, void *p);
   static void delete_L1GtHfBitCountsTemplatecLcLObjectParameter(void *p);
   static void deleteArray_L1GtHfBitCountsTemplatecLcLObjectParameter(void *p);
   static void destruct_L1GtHfBitCountsTemplatecLcLObjectParameter(void *p);

   // Function generating the singleton type initializer
   static TGenericClassInfo *GenerateInitInstanceLocal(const ::L1GtHfBitCountsTemplate::ObjectParameter*)
   {
      ::L1GtHfBitCountsTemplate::ObjectParameter *ptr = 0;
      static ::TVirtualIsAProxy* isa_proxy = new ::TIsAProxy(typeid(::L1GtHfBitCountsTemplate::ObjectParameter));
      static ::ROOT::TGenericClassInfo 
         instance("L1GtHfBitCountsTemplate::ObjectParameter", "CondFormats/L1TObjects/interface/L1GtHfBitCountsTemplate.h", 60,
                  typeid(::L1GtHfBitCountsTemplate::ObjectParameter), ::ROOT::Internal::DefineBehavior(ptr, ptr),
                  &L1GtHfBitCountsTemplatecLcLObjectParameter_Dictionary, isa_proxy, 0,
                  sizeof(::L1GtHfBitCountsTemplate::ObjectParameter) );
      instance.SetNew(&new_L1GtHfBitCountsTemplatecLcLObjectParameter);
      instance.SetNewArray(&newArray_L1GtHfBitCountsTemplatecLcLObjectParameter);
      instance.SetDelete(&delete_L1GtHfBitCountsTemplatecLcLObjectParameter);
      instance.SetDeleteArray(&deleteArray_L1GtHfBitCountsTemplatecLcLObjectParameter);
      instance.SetDestructor(&destruct_L1GtHfBitCountsTemplatecLcLObjectParameter);
      return &instance;
   }
   TGenericClassInfo *GenerateInitInstance(const ::L1GtHfBitCountsTemplate::ObjectParameter*)
   {
      return GenerateInitInstanceLocal((::L1GtHfBitCountsTemplate::ObjectParameter*)0);
   }
   // Static variable to force the class initialization
   static ::ROOT::TGenericClassInfo *_R__UNIQUE_(Init) = GenerateInitInstanceLocal((const ::L1GtHfBitCountsTemplate::ObjectParameter*)0x0); R__UseDummy(_R__UNIQUE_(Init));

   // Dictionary for non-ClassDef classes
   static TClass *L1GtHfBitCountsTemplatecLcLObjectParameter_Dictionary() {
      TClass* theClass =::ROOT::GenerateInitInstanceLocal((const ::L1GtHfBitCountsTemplate::ObjectParameter*)0x0)->GetClass();
      L1GtHfBitCountsTemplatecLcLObjectParameter_TClassManip(theClass);
   return theClass;
   }

   static void L1GtHfBitCountsTemplatecLcLObjectParameter_TClassManip(TClass* ){
   }

} // end of namespace ROOT

namespace ROOT {
   static TClass *L1GtHfRingEtSumsTemplate_Dictionary();
   static void L1GtHfRingEtSumsTemplate_TClassManip(TClass*);
   static void *new_L1GtHfRingEtSumsTemplate(void *p = 0);
   static void *newArray_L1GtHfRingEtSumsTemplate(Long_t size, void *p);
   static void delete_L1GtHfRingEtSumsTemplate(void *p);
   static void deleteArray_L1GtHfRingEtSumsTemplate(void *p);
   static void destruct_L1GtHfRingEtSumsTemplate(void *p);

   // Function generating the singleton type initializer
   static TGenericClassInfo *GenerateInitInstanceLocal(const ::L1GtHfRingEtSumsTemplate*)
   {
      ::L1GtHfRingEtSumsTemplate *ptr = 0;
      static ::TVirtualIsAProxy* isa_proxy = new ::TIsAProxy(typeid(::L1GtHfRingEtSumsTemplate));
      static ::ROOT::TGenericClassInfo 
         instance("L1GtHfRingEtSumsTemplate", "CondFormats/L1TObjects/interface/L1GtHfRingEtSumsTemplate.h", 34,
                  typeid(::L1GtHfRingEtSumsTemplate), ::ROOT::Internal::DefineBehavior(ptr, ptr),
                  &L1GtHfRingEtSumsTemplate_Dictionary, isa_proxy, 0,
                  sizeof(::L1GtHfRingEtSumsTemplate) );
      instance.SetNew(&new_L1GtHfRingEtSumsTemplate);
      instance.SetNewArray(&newArray_L1GtHfRingEtSumsTemplate);
      instance.SetDelete(&delete_L1GtHfRingEtSumsTemplate);
      instance.SetDeleteArray(&deleteArray_L1GtHfRingEtSumsTemplate);
      instance.SetDestructor(&destruct_L1GtHfRingEtSumsTemplate);
      return &instance;
   }
   TGenericClassInfo *GenerateInitInstance(const ::L1GtHfRingEtSumsTemplate*)
   {
      return GenerateInitInstanceLocal((::L1GtHfRingEtSumsTemplate*)0);
   }
   // Static variable to force the class initialization
   static ::ROOT::TGenericClassInfo *_R__UNIQUE_(Init) = GenerateInitInstanceLocal((const ::L1GtHfRingEtSumsTemplate*)0x0); R__UseDummy(_R__UNIQUE_(Init));

   // Dictionary for non-ClassDef classes
   static TClass *L1GtHfRingEtSumsTemplate_Dictionary() {
      TClass* theClass =::ROOT::GenerateInitInstanceLocal((const ::L1GtHfRingEtSumsTemplate*)0x0)->GetClass();
      L1GtHfRingEtSumsTemplate_TClassManip(theClass);
   return theClass;
   }

   static void L1GtHfRingEtSumsTemplate_TClassManip(TClass* ){
   }

} // end of namespace ROOT

namespace ROOT {
   static TClass *L1GtHfRingEtSumsTemplatecLcLObjectParameter_Dictionary();
   static void L1GtHfRingEtSumsTemplatecLcLObjectParameter_TClassManip(TClass*);
   static void *new_L1GtHfRingEtSumsTemplatecLcLObjectParameter(void *p = 0);
   static void *newArray_L1GtHfRingEtSumsTemplatecLcLObjectParameter(Long_t size, void *p);
   static void delete_L1GtHfRingEtSumsTemplatecLcLObjectParameter(void *p);
   static void deleteArray_L1GtHfRingEtSumsTemplatecLcLObjectParameter(void *p);
   static void destruct_L1GtHfRingEtSumsTemplatecLcLObjectParameter(void *p);

   // Function generating the singleton type initializer
   static TGenericClassInfo *GenerateInitInstanceLocal(const ::L1GtHfRingEtSumsTemplate::ObjectParameter*)
   {
      ::L1GtHfRingEtSumsTemplate::ObjectParameter *ptr = 0;
      static ::TVirtualIsAProxy* isa_proxy = new ::TIsAProxy(typeid(::L1GtHfRingEtSumsTemplate::ObjectParameter));
      static ::ROOT::TGenericClassInfo 
         instance("L1GtHfRingEtSumsTemplate::ObjectParameter", "CondFormats/L1TObjects/interface/L1GtHfRingEtSumsTemplate.h", 60,
                  typeid(::L1GtHfRingEtSumsTemplate::ObjectParameter), ::ROOT::Internal::DefineBehavior(ptr, ptr),
                  &L1GtHfRingEtSumsTemplatecLcLObjectParameter_Dictionary, isa_proxy, 0,
                  sizeof(::L1GtHfRingEtSumsTemplate::ObjectParameter) );
      instance.SetNew(&new_L1GtHfRingEtSumsTemplatecLcLObjectParameter);
      instance.SetNewArray(&newArray_L1GtHfRingEtSumsTemplatecLcLObjectParameter);
      instance.SetDelete(&delete_L1GtHfRingEtSumsTemplatecLcLObjectParameter);
      instance.SetDeleteArray(&deleteArray_L1GtHfRingEtSumsTemplatecLcLObjectParameter);
      instance.SetDestructor(&destruct_L1GtHfRingEtSumsTemplatecLcLObjectParameter);
      return &instance;
   }
   TGenericClassInfo *GenerateInitInstance(const ::L1GtHfRingEtSumsTemplate::ObjectParameter*)
   {
      return GenerateInitInstanceLocal((::L1GtHfRingEtSumsTemplate::ObjectParameter*)0);
   }
   // Static variable to force the class initialization
   static ::ROOT::TGenericClassInfo *_R__UNIQUE_(Init) = GenerateInitInstanceLocal((const ::L1GtHfRingEtSumsTemplate::ObjectParameter*)0x0); R__UseDummy(_R__UNIQUE_(Init));

   // Dictionary for non-ClassDef classes
   static TClass *L1GtHfRingEtSumsTemplatecLcLObjectParameter_Dictionary() {
      TClass* theClass =::ROOT::GenerateInitInstanceLocal((const ::L1GtHfRingEtSumsTemplate::ObjectParameter*)0x0)->GetClass();
      L1GtHfRingEtSumsTemplatecLcLObjectParameter_TClassManip(theClass);
   return theClass;
   }

   static void L1GtHfRingEtSumsTemplatecLcLObjectParameter_TClassManip(TClass* ){
   }

} // end of namespace ROOT

namespace ROOT {
   static TClass *L1GtBptxTemplate_Dictionary();
   static void L1GtBptxTemplate_TClassManip(TClass*);
   static void *new_L1GtBptxTemplate(void *p = 0);
   static void *newArray_L1GtBptxTemplate(Long_t size, void *p);
   static void delete_L1GtBptxTemplate(void *p);
   static void deleteArray_L1GtBptxTemplate(void *p);
   static void destruct_L1GtBptxTemplate(void *p);

   // Function generating the singleton type initializer
   static TGenericClassInfo *GenerateInitInstanceLocal(const ::L1GtBptxTemplate*)
   {
      ::L1GtBptxTemplate *ptr = 0;
      static ::TVirtualIsAProxy* isa_proxy = new ::TIsAProxy(typeid(::L1GtBptxTemplate));
      static ::ROOT::TGenericClassInfo 
         instance("L1GtBptxTemplate", "CondFormats/L1TObjects/interface/L1GtBptxTemplate.h", 39,
                  typeid(::L1GtBptxTemplate), ::ROOT::Internal::DefineBehavior(ptr, ptr),
                  &L1GtBptxTemplate_Dictionary, isa_proxy, 0,
                  sizeof(::L1GtBptxTemplate) );
      instance.SetNew(&new_L1GtBptxTemplate);
      instance.SetNewArray(&newArray_L1GtBptxTemplate);
      instance.SetDelete(&delete_L1GtBptxTemplate);
      instance.SetDeleteArray(&deleteArray_L1GtBptxTemplate);
      instance.SetDestructor(&destruct_L1GtBptxTemplate);
      return &instance;
   }
   TGenericClassInfo *GenerateInitInstance(const ::L1GtBptxTemplate*)
   {
      return GenerateInitInstanceLocal((::L1GtBptxTemplate*)0);
   }
   // Static variable to force the class initialization
   static ::ROOT::TGenericClassInfo *_R__UNIQUE_(Init) = GenerateInitInstanceLocal((const ::L1GtBptxTemplate*)0x0); R__UseDummy(_R__UNIQUE_(Init));

   // Dictionary for non-ClassDef classes
   static TClass *L1GtBptxTemplate_Dictionary() {
      TClass* theClass =::ROOT::GenerateInitInstanceLocal((const ::L1GtBptxTemplate*)0x0)->GetClass();
      L1GtBptxTemplate_TClassManip(theClass);
   return theClass;
   }

   static void L1GtBptxTemplate_TClassManip(TClass* ){
   }

} // end of namespace ROOT

namespace ROOT {
   static TClass *L1GtExternalTemplate_Dictionary();
   static void L1GtExternalTemplate_TClassManip(TClass*);
   static void *new_L1GtExternalTemplate(void *p = 0);
   static void *newArray_L1GtExternalTemplate(Long_t size, void *p);
   static void delete_L1GtExternalTemplate(void *p);
   static void deleteArray_L1GtExternalTemplate(void *p);
   static void destruct_L1GtExternalTemplate(void *p);

   // Function generating the singleton type initializer
   static TGenericClassInfo *GenerateInitInstanceLocal(const ::L1GtExternalTemplate*)
   {
      ::L1GtExternalTemplate *ptr = 0;
      static ::TVirtualIsAProxy* isa_proxy = new ::TIsAProxy(typeid(::L1GtExternalTemplate));
      static ::ROOT::TGenericClassInfo 
         instance("L1GtExternalTemplate", "CondFormats/L1TObjects/interface/L1GtExternalTemplate.h", 39,
                  typeid(::L1GtExternalTemplate), ::ROOT::Internal::DefineBehavior(ptr, ptr),
                  &L1GtExternalTemplate_Dictionary, isa_proxy, 0,
                  sizeof(::L1GtExternalTemplate) );
      instance.SetNew(&new_L1GtExternalTemplate);
      instance.SetNewArray(&newArray_L1GtExternalTemplate);
      instance.SetDelete(&delete_L1GtExternalTemplate);
      instance.SetDeleteArray(&deleteArray_L1GtExternalTemplate);
      instance.SetDestructor(&destruct_L1GtExternalTemplate);
      return &instance;
   }
   TGenericClassInfo *GenerateInitInstance(const ::L1GtExternalTemplate*)
   {
      return GenerateInitInstanceLocal((::L1GtExternalTemplate*)0);
   }
   // Static variable to force the class initialization
   static ::ROOT::TGenericClassInfo *_R__UNIQUE_(Init) = GenerateInitInstanceLocal((const ::L1GtExternalTemplate*)0x0); R__UseDummy(_R__UNIQUE_(Init));

   // Dictionary for non-ClassDef classes
   static TClass *L1GtExternalTemplate_Dictionary() {
      TClass* theClass =::ROOT::GenerateInitInstanceLocal((const ::L1GtExternalTemplate*)0x0)->GetClass();
      L1GtExternalTemplate_TClassManip(theClass);
   return theClass;
   }

   static void L1GtExternalTemplate_TClassManip(TClass* ){
   }

} // end of namespace ROOT

namespace ROOT {
   static TClass *L1GtCorrelationTemplate_Dictionary();
   static void L1GtCorrelationTemplate_TClassManip(TClass*);
   static void *new_L1GtCorrelationTemplate(void *p = 0);
   static void *newArray_L1GtCorrelationTemplate(Long_t size, void *p);
   static void delete_L1GtCorrelationTemplate(void *p);
   static void deleteArray_L1GtCorrelationTemplate(void *p);
   static void destruct_L1GtCorrelationTemplate(void *p);

   // Function generating the singleton type initializer
   static TGenericClassInfo *GenerateInitInstanceLocal(const ::L1GtCorrelationTemplate*)
   {
      ::L1GtCorrelationTemplate *ptr = 0;
      static ::TVirtualIsAProxy* isa_proxy = new ::TIsAProxy(typeid(::L1GtCorrelationTemplate));
      static ::ROOT::TGenericClassInfo 
         instance("L1GtCorrelationTemplate", "CondFormats/L1TObjects/interface/L1GtCorrelationTemplate.h", 39,
                  typeid(::L1GtCorrelationTemplate), ::ROOT::Internal::DefineBehavior(ptr, ptr),
                  &L1GtCorrelationTemplate_Dictionary, isa_proxy, 0,
                  sizeof(::L1GtCorrelationTemplate) );
      instance.SetNew(&new_L1GtCorrelationTemplate);
      instance.SetNewArray(&newArray_L1GtCorrelationTemplate);
      instance.SetDelete(&delete_L1GtCorrelationTemplate);
      instance.SetDeleteArray(&deleteArray_L1GtCorrelationTemplate);
      instance.SetDestructor(&destruct_L1GtCorrelationTemplate);
      return &instance;
   }
   TGenericClassInfo *GenerateInitInstance(const ::L1GtCorrelationTemplate*)
   {
      return GenerateInitInstanceLocal((::L1GtCorrelationTemplate*)0);
   }
   // Static variable to force the class initialization
   static ::ROOT::TGenericClassInfo *_R__UNIQUE_(Init) = GenerateInitInstanceLocal((const ::L1GtCorrelationTemplate*)0x0); R__UseDummy(_R__UNIQUE_(Init));

   // Dictionary for non-ClassDef classes
   static TClass *L1GtCorrelationTemplate_Dictionary() {
      TClass* theClass =::ROOT::GenerateInitInstanceLocal((const ::L1GtCorrelationTemplate*)0x0)->GetClass();
      L1GtCorrelationTemplate_TClassManip(theClass);
   return theClass;
   }

   static void L1GtCorrelationTemplate_TClassManip(TClass* ){
   }

} // end of namespace ROOT

namespace ROOT {
   static TClass *L1GtCorrelationTemplatecLcLCorrelationParameter_Dictionary();
   static void L1GtCorrelationTemplatecLcLCorrelationParameter_TClassManip(TClass*);
   static void *new_L1GtCorrelationTemplatecLcLCorrelationParameter(void *p = 0);
   static void *newArray_L1GtCorrelationTemplatecLcLCorrelationParameter(Long_t size, void *p);
   static void delete_L1GtCorrelationTemplatecLcLCorrelationParameter(void *p);
   static void deleteArray_L1GtCorrelationTemplatecLcLCorrelationParameter(void *p);
   static void destruct_L1GtCorrelationTemplatecLcLCorrelationParameter(void *p);

   // Function generating the singleton type initializer
   static TGenericClassInfo *GenerateInitInstanceLocal(const ::L1GtCorrelationTemplate::CorrelationParameter*)
   {
      ::L1GtCorrelationTemplate::CorrelationParameter *ptr = 0;
      static ::TVirtualIsAProxy* isa_proxy = new ::TIsAProxy(typeid(::L1GtCorrelationTemplate::CorrelationParameter));
      static ::ROOT::TGenericClassInfo 
         instance("L1GtCorrelationTemplate::CorrelationParameter", "CondFormats/L1TObjects/interface/L1GtCorrelationTemplate.h", 70,
                  typeid(::L1GtCorrelationTemplate::CorrelationParameter), ::ROOT::Internal::DefineBehavior(ptr, ptr),
                  &L1GtCorrelationTemplatecLcLCorrelationParameter_Dictionary, isa_proxy, 0,
                  sizeof(::L1GtCorrelationTemplate::CorrelationParameter) );
      instance.SetNew(&new_L1GtCorrelationTemplatecLcLCorrelationParameter);
      instance.SetNewArray(&newArray_L1GtCorrelationTemplatecLcLCorrelationParameter);
      instance.SetDelete(&delete_L1GtCorrelationTemplatecLcLCorrelationParameter);
      instance.SetDeleteArray(&deleteArray_L1GtCorrelationTemplatecLcLCorrelationParameter);
      instance.SetDestructor(&destruct_L1GtCorrelationTemplatecLcLCorrelationParameter);
      return &instance;
   }
   TGenericClassInfo *GenerateInitInstance(const ::L1GtCorrelationTemplate::CorrelationParameter*)
   {
      return GenerateInitInstanceLocal((::L1GtCorrelationTemplate::CorrelationParameter*)0);
   }
   // Static variable to force the class initialization
   static ::ROOT::TGenericClassInfo *_R__UNIQUE_(Init) = GenerateInitInstanceLocal((const ::L1GtCorrelationTemplate::CorrelationParameter*)0x0); R__UseDummy(_R__UNIQUE_(Init));

   // Dictionary for non-ClassDef classes
   static TClass *L1GtCorrelationTemplatecLcLCorrelationParameter_Dictionary() {
      TClass* theClass =::ROOT::GenerateInitInstanceLocal((const ::L1GtCorrelationTemplate::CorrelationParameter*)0x0)->GetClass();
      L1GtCorrelationTemplatecLcLCorrelationParameter_TClassManip(theClass);
   return theClass;
   }

   static void L1GtCorrelationTemplatecLcLCorrelationParameter_TClassManip(TClass* ){
   }

} // end of namespace ROOT

namespace ROOT {
   static TClass *L1GtAlgorithm_Dictionary();
   static void L1GtAlgorithm_TClassManip(TClass*);
   static void *new_L1GtAlgorithm(void *p = 0);
   static void *newArray_L1GtAlgorithm(Long_t size, void *p);
   static void delete_L1GtAlgorithm(void *p);
   static void deleteArray_L1GtAlgorithm(void *p);
   static void destruct_L1GtAlgorithm(void *p);

   // Function generating the singleton type initializer
   static TGenericClassInfo *GenerateInitInstanceLocal(const ::L1GtAlgorithm*)
   {
      ::L1GtAlgorithm *ptr = 0;
      static ::TVirtualIsAProxy* isa_proxy = new ::TIsAProxy(typeid(::L1GtAlgorithm));
      static ::ROOT::TGenericClassInfo 
         instance("L1GtAlgorithm", "CondFormats/L1TObjects/interface/L1GtAlgorithm.h", 32,
                  typeid(::L1GtAlgorithm), ::ROOT::Internal::DefineBehavior(ptr, ptr),
                  &L1GtAlgorithm_Dictionary, isa_proxy, 0,
                  sizeof(::L1GtAlgorithm) );
      instance.SetNew(&new_L1GtAlgorithm);
      instance.SetNewArray(&newArray_L1GtAlgorithm);
      instance.SetDelete(&delete_L1GtAlgorithm);
      instance.SetDeleteArray(&deleteArray_L1GtAlgorithm);
      instance.SetDestructor(&destruct_L1GtAlgorithm);
      return &instance;
   }
   TGenericClassInfo *GenerateInitInstance(const ::L1GtAlgorithm*)
   {
      return GenerateInitInstanceLocal((::L1GtAlgorithm*)0);
   }
   // Static variable to force the class initialization
   static ::ROOT::TGenericClassInfo *_R__UNIQUE_(Init) = GenerateInitInstanceLocal((const ::L1GtAlgorithm*)0x0); R__UseDummy(_R__UNIQUE_(Init));

   // Dictionary for non-ClassDef classes
   static TClass *L1GtAlgorithm_Dictionary() {
      TClass* theClass =::ROOT::GenerateInitInstanceLocal((const ::L1GtAlgorithm*)0x0)->GetClass();
      L1GtAlgorithm_TClassManip(theClass);
   return theClass;
   }

   static void L1GtAlgorithm_TClassManip(TClass* ){
   }

} // end of namespace ROOT

namespace ROOT {
   static TClass *pairlEconstsPstringcOL1GtAlgorithmgR_Dictionary();
   static void pairlEconstsPstringcOL1GtAlgorithmgR_TClassManip(TClass*);
   static void *new_pairlEconstsPstringcOL1GtAlgorithmgR(void *p = 0);
   static void *newArray_pairlEconstsPstringcOL1GtAlgorithmgR(Long_t size, void *p);
   static void delete_pairlEconstsPstringcOL1GtAlgorithmgR(void *p);
   static void deleteArray_pairlEconstsPstringcOL1GtAlgorithmgR(void *p);
   static void destruct_pairlEconstsPstringcOL1GtAlgorithmgR(void *p);

   // Function generating the singleton type initializer
   static TGenericClassInfo *GenerateInitInstanceLocal(const pair<const string,L1GtAlgorithm>*)
   {
      pair<const string,L1GtAlgorithm> *ptr = 0;
      static ::TVirtualIsAProxy* isa_proxy = new ::TIsAProxy(typeid(pair<const string,L1GtAlgorithm>));
      static ::ROOT::TGenericClassInfo 
         instance("pair<const string,L1GtAlgorithm>", "string", 96,
                  typeid(pair<const string,L1GtAlgorithm>), ::ROOT::Internal::DefineBehavior(ptr, ptr),
                  &pairlEconstsPstringcOL1GtAlgorithmgR_Dictionary, isa_proxy, 0,
                  sizeof(pair<const string,L1GtAlgorithm>) );
      instance.SetNew(&new_pairlEconstsPstringcOL1GtAlgorithmgR);
      instance.SetNewArray(&newArray_pairlEconstsPstringcOL1GtAlgorithmgR);
      instance.SetDelete(&delete_pairlEconstsPstringcOL1GtAlgorithmgR);
      instance.SetDeleteArray(&deleteArray_pairlEconstsPstringcOL1GtAlgorithmgR);
      instance.SetDestructor(&destruct_pairlEconstsPstringcOL1GtAlgorithmgR);

      ::ROOT::AddClassAlternate("pair<const string,L1GtAlgorithm>","map<std::string,L1GtAlgorithm>::value_type");
      return &instance;
   }
   // Static variable to force the class initialization
   static ::ROOT::TGenericClassInfo *_R__UNIQUE_(Init) = GenerateInitInstanceLocal((const pair<const string,L1GtAlgorithm>*)0x0); R__UseDummy(_R__UNIQUE_(Init));

   // Dictionary for non-ClassDef classes
   static TClass *pairlEconstsPstringcOL1GtAlgorithmgR_Dictionary() {
      TClass* theClass =::ROOT::GenerateInitInstanceLocal((const pair<const string,L1GtAlgorithm>*)0x0)->GetClass();
      pairlEconstsPstringcOL1GtAlgorithmgR_TClassManip(theClass);
   return theClass;
   }

   static void pairlEconstsPstringcOL1GtAlgorithmgR_TClassManip(TClass* ){
   }

} // end of namespace ROOT

namespace ROOT {
   static TClass *pairlEstringcOL1GtAlgorithmgR_Dictionary();
   static void pairlEstringcOL1GtAlgorithmgR_TClassManip(TClass*);
   static void *new_pairlEstringcOL1GtAlgorithmgR(void *p = 0);
   static void *newArray_pairlEstringcOL1GtAlgorithmgR(Long_t size, void *p);
   static void delete_pairlEstringcOL1GtAlgorithmgR(void *p);
   static void deleteArray_pairlEstringcOL1GtAlgorithmgR(void *p);
   static void destruct_pairlEstringcOL1GtAlgorithmgR(void *p);

   // Function generating the singleton type initializer
   static TGenericClassInfo *GenerateInitInstanceLocal(const pair<string,L1GtAlgorithm>*)
   {
      pair<string,L1GtAlgorithm> *ptr = 0;
      static ::TVirtualIsAProxy* isa_proxy = new ::TIsAProxy(typeid(pair<string,L1GtAlgorithm>));
      static ::ROOT::TGenericClassInfo 
         instance("pair<string,L1GtAlgorithm>", "string", 96,
                  typeid(pair<string,L1GtAlgorithm>), ::ROOT::Internal::DefineBehavior(ptr, ptr),
                  &pairlEstringcOL1GtAlgorithmgR_Dictionary, isa_proxy, 0,
                  sizeof(pair<string,L1GtAlgorithm>) );
      instance.SetNew(&new_pairlEstringcOL1GtAlgorithmgR);
      instance.SetNewArray(&newArray_pairlEstringcOL1GtAlgorithmgR);
      instance.SetDelete(&delete_pairlEstringcOL1GtAlgorithmgR);
      instance.SetDeleteArray(&deleteArray_pairlEstringcOL1GtAlgorithmgR);
      instance.SetDestructor(&destruct_pairlEstringcOL1GtAlgorithmgR);

      ::ROOT::AddClassAlternate("pair<string,L1GtAlgorithm>","pair<std::string,L1GtAlgorithm>");
      return &instance;
   }
   // Static variable to force the class initialization
   static ::ROOT::TGenericClassInfo *_R__UNIQUE_(Init) = GenerateInitInstanceLocal((const pair<string,L1GtAlgorithm>*)0x0); R__UseDummy(_R__UNIQUE_(Init));

   // Dictionary for non-ClassDef classes
   static TClass *pairlEstringcOL1GtAlgorithmgR_Dictionary() {
      TClass* theClass =::ROOT::GenerateInitInstanceLocal((const pair<string,L1GtAlgorithm>*)0x0)->GetClass();
      pairlEstringcOL1GtAlgorithmgR_TClassManip(theClass);
   return theClass;
   }

   static void pairlEstringcOL1GtAlgorithmgR_TClassManip(TClass* ){
   }

} // end of namespace ROOT

namespace ROOT {
   static TClass *L1GtTriggerMenu_Dictionary();
   static void L1GtTriggerMenu_TClassManip(TClass*);
   static void *new_L1GtTriggerMenu(void *p = 0);
   static void *newArray_L1GtTriggerMenu(Long_t size, void *p);
   static void delete_L1GtTriggerMenu(void *p);
   static void deleteArray_L1GtTriggerMenu(void *p);
   static void destruct_L1GtTriggerMenu(void *p);

   // Function generating the singleton type initializer
   static TGenericClassInfo *GenerateInitInstanceLocal(const ::L1GtTriggerMenu*)
   {
      ::L1GtTriggerMenu *ptr = 0;
      static ::TVirtualIsAProxy* isa_proxy = new ::TIsAProxy(typeid(::L1GtTriggerMenu));
      static ::ROOT::TGenericClassInfo 
         instance("L1GtTriggerMenu", "CondFormats/L1TObjects/interface/L1GtTriggerMenu.h", 48,
                  typeid(::L1GtTriggerMenu), ::ROOT::Internal::DefineBehavior(ptr, ptr),
                  &L1GtTriggerMenu_Dictionary, isa_proxy, 0,
                  sizeof(::L1GtTriggerMenu) );
      instance.SetNew(&new_L1GtTriggerMenu);
      instance.SetNewArray(&newArray_L1GtTriggerMenu);
      instance.SetDelete(&delete_L1GtTriggerMenu);
      instance.SetDeleteArray(&deleteArray_L1GtTriggerMenu);
      instance.SetDestructor(&destruct_L1GtTriggerMenu);
      return &instance;
   }
   TGenericClassInfo *GenerateInitInstance(const ::L1GtTriggerMenu*)
   {
      return GenerateInitInstanceLocal((::L1GtTriggerMenu*)0);
   }
   // Static variable to force the class initialization
   static ::ROOT::TGenericClassInfo *_R__UNIQUE_(Init) = GenerateInitInstanceLocal((const ::L1GtTriggerMenu*)0x0); R__UseDummy(_R__UNIQUE_(Init));

   // Dictionary for non-ClassDef classes
   static TClass *L1GtTriggerMenu_Dictionary() {
      TClass* theClass =::ROOT::GenerateInitInstanceLocal((const ::L1GtTriggerMenu*)0x0)->GetClass();
      L1GtTriggerMenu_TClassManip(theClass);
   return theClass;
   }

   static void L1GtTriggerMenu_TClassManip(TClass* theClass){
      theClass->CreateAttributeMap();
      TDictAttributeMap* attrMap( theClass->GetAttributeMap() );
      attrMap->AddProperty("class_version","L1GtTriggerMenu_V01");
      TDataMember* theMember_m_vecMuonTemplate = theClass->GetDataMember("m_vecMuonTemplate");
      theMember_m_vecMuonTemplate->CreateAttributeMap();
      TDictAttributeMap* memberAttrMap_m_vecMuonTemplate( theMember_m_vecMuonTemplate->GetAttributeMap() );
      memberAttrMap_m_vecMuonTemplate->AddProperty("mapping","blob");
      TDataMember* theMember_m_vecCaloTemplate = theClass->GetDataMember("m_vecCaloTemplate");
      theMember_m_vecCaloTemplate->CreateAttributeMap();
      TDictAttributeMap* memberAttrMap_m_vecCaloTemplate( theMember_m_vecCaloTemplate->GetAttributeMap() );
      memberAttrMap_m_vecCaloTemplate->AddProperty("mapping","blob");
      TDataMember* theMember_m_vecEnergySumTemplate = theClass->GetDataMember("m_vecEnergySumTemplate");
      theMember_m_vecEnergySumTemplate->CreateAttributeMap();
      TDictAttributeMap* memberAttrMap_m_vecEnergySumTemplate( theMember_m_vecEnergySumTemplate->GetAttributeMap() );
      memberAttrMap_m_vecEnergySumTemplate->AddProperty("mapping","blob");
      TDataMember* theMember_m_vecJetCountsTemplate = theClass->GetDataMember("m_vecJetCountsTemplate");
      theMember_m_vecJetCountsTemplate->CreateAttributeMap();
      TDictAttributeMap* memberAttrMap_m_vecJetCountsTemplate( theMember_m_vecJetCountsTemplate->GetAttributeMap() );
      memberAttrMap_m_vecJetCountsTemplate->AddProperty("mapping","blob");
      TDataMember* theMember_m_vecCastorTemplate = theClass->GetDataMember("m_vecCastorTemplate");
      theMember_m_vecCastorTemplate->CreateAttributeMap();
      TDictAttributeMap* memberAttrMap_m_vecCastorTemplate( theMember_m_vecCastorTemplate->GetAttributeMap() );
      memberAttrMap_m_vecCastorTemplate->AddProperty("mapping","blob");
      TDataMember* theMember_m_vecHfBitCountsTemplate = theClass->GetDataMember("m_vecHfBitCountsTemplate");
      theMember_m_vecHfBitCountsTemplate->CreateAttributeMap();
      TDictAttributeMap* memberAttrMap_m_vecHfBitCountsTemplate( theMember_m_vecHfBitCountsTemplate->GetAttributeMap() );
      memberAttrMap_m_vecHfBitCountsTemplate->AddProperty("mapping","blob");
      TDataMember* theMember_m_vecHfRingEtSumsTemplate = theClass->GetDataMember("m_vecHfRingEtSumsTemplate");
      theMember_m_vecHfRingEtSumsTemplate->CreateAttributeMap();
      TDictAttributeMap* memberAttrMap_m_vecHfRingEtSumsTemplate( theMember_m_vecHfRingEtSumsTemplate->GetAttributeMap() );
      memberAttrMap_m_vecHfRingEtSumsTemplate->AddProperty("mapping","blob");
      TDataMember* theMember_m_vecBptxTemplate = theClass->GetDataMember("m_vecBptxTemplate");
      theMember_m_vecBptxTemplate->CreateAttributeMap();
      TDictAttributeMap* memberAttrMap_m_vecBptxTemplate( theMember_m_vecBptxTemplate->GetAttributeMap() );
      memberAttrMap_m_vecBptxTemplate->AddProperty("mapping","blob");
      TDataMember* theMember_m_vecExternalTemplate = theClass->GetDataMember("m_vecExternalTemplate");
      theMember_m_vecExternalTemplate->CreateAttributeMap();
      TDictAttributeMap* memberAttrMap_m_vecExternalTemplate( theMember_m_vecExternalTemplate->GetAttributeMap() );
      memberAttrMap_m_vecExternalTemplate->AddProperty("mapping","blob");
      TDataMember* theMember_m_vecCorrelationTemplate = theClass->GetDataMember("m_vecCorrelationTemplate");
      theMember_m_vecCorrelationTemplate->CreateAttributeMap();
      TDictAttributeMap* memberAttrMap_m_vecCorrelationTemplate( theMember_m_vecCorrelationTemplate->GetAttributeMap() );
      memberAttrMap_m_vecCorrelationTemplate->AddProperty("mapping","blob");
      TDataMember* theMember_m_corMuonTemplate = theClass->GetDataMember("m_corMuonTemplate");
      theMember_m_corMuonTemplate->CreateAttributeMap();
      TDictAttributeMap* memberAttrMap_m_corMuonTemplate( theMember_m_corMuonTemplate->GetAttributeMap() );
      memberAttrMap_m_corMuonTemplate->AddProperty("mapping","blob");
      TDataMember* theMember_m_corCaloTemplate = theClass->GetDataMember("m_corCaloTemplate");
      theMember_m_corCaloTemplate->CreateAttributeMap();
      TDictAttributeMap* memberAttrMap_m_corCaloTemplate( theMember_m_corCaloTemplate->GetAttributeMap() );
      memberAttrMap_m_corCaloTemplate->AddProperty("mapping","blob");
      TDataMember* theMember_m_corEnergySumTemplate = theClass->GetDataMember("m_corEnergySumTemplate");
      theMember_m_corEnergySumTemplate->CreateAttributeMap();
      TDictAttributeMap* memberAttrMap_m_corEnergySumTemplate( theMember_m_corEnergySumTemplate->GetAttributeMap() );
      memberAttrMap_m_corEnergySumTemplate->AddProperty("mapping","blob");
      TDataMember* theMember_m_algorithmMap = theClass->GetDataMember("m_algorithmMap");
      theMember_m_algorithmMap->CreateAttributeMap();
      TDictAttributeMap* memberAttrMap_m_algorithmMap( theMember_m_algorithmMap->GetAttributeMap() );
      memberAttrMap_m_algorithmMap->AddProperty("mapping","blob");
      TDataMember* theMember_m_algorithmAliasMap = theClass->GetDataMember("m_algorithmAliasMap");
      theMember_m_algorithmAliasMap->CreateAttributeMap();
      TDictAttributeMap* memberAttrMap_m_algorithmAliasMap( theMember_m_algorithmAliasMap->GetAttributeMap() );
      memberAttrMap_m_algorithmAliasMap->AddProperty("mapping","blob");
      TDataMember* theMember_m_technicalTriggerMap = theClass->GetDataMember("m_technicalTriggerMap");
      theMember_m_technicalTriggerMap->CreateAttributeMap();
      TDictAttributeMap* memberAttrMap_m_technicalTriggerMap( theMember_m_technicalTriggerMap->GetAttributeMap() );
      memberAttrMap_m_technicalTriggerMap->AddProperty("mapping","blob");
   }

} // end of namespace ROOT

namespace ROOT {
   static TClass *L1CaloGeometry_Dictionary();
   static void L1CaloGeometry_TClassManip(TClass*);
   static void *new_L1CaloGeometry(void *p = 0);
   static void *newArray_L1CaloGeometry(Long_t size, void *p);
   static void delete_L1CaloGeometry(void *p);
   static void deleteArray_L1CaloGeometry(void *p);
   static void destruct_L1CaloGeometry(void *p);

   // Function generating the singleton type initializer
   static TGenericClassInfo *GenerateInitInstanceLocal(const ::L1CaloGeometry*)
   {
      ::L1CaloGeometry *ptr = 0;
      static ::TVirtualIsAProxy* isa_proxy = new ::TIsAProxy(typeid(::L1CaloGeometry));
      static ::ROOT::TGenericClassInfo 
         instance("L1CaloGeometry", "CondFormats/L1TObjects/interface/L1CaloGeometry.h", 33,
                  typeid(::L1CaloGeometry), ::ROOT::Internal::DefineBehavior(ptr, ptr),
                  &L1CaloGeometry_Dictionary, isa_proxy, 0,
                  sizeof(::L1CaloGeometry) );
      instance.SetNew(&new_L1CaloGeometry);
      instance.SetNewArray(&newArray_L1CaloGeometry);
      instance.SetDelete(&delete_L1CaloGeometry);
      instance.SetDeleteArray(&deleteArray_L1CaloGeometry);
      instance.SetDestructor(&destruct_L1CaloGeometry);
      return &instance;
   }
   TGenericClassInfo *GenerateInitInstance(const ::L1CaloGeometry*)
   {
      return GenerateInitInstanceLocal((::L1CaloGeometry*)0);
   }
   // Static variable to force the class initialization
   static ::ROOT::TGenericClassInfo *_R__UNIQUE_(Init) = GenerateInitInstanceLocal((const ::L1CaloGeometry*)0x0); R__UseDummy(_R__UNIQUE_(Init));

   // Dictionary for non-ClassDef classes
   static TClass *L1CaloGeometry_Dictionary() {
      TClass* theClass =::ROOT::GenerateInitInstanceLocal((const ::L1CaloGeometry*)0x0)->GetClass();
      L1CaloGeometry_TClassManip(theClass);
   return theClass;
   }

   static void L1CaloGeometry_TClassManip(TClass* theClass){
      theClass->CreateAttributeMap();
      TDictAttributeMap* attrMap( theClass->GetAttributeMap() );
      attrMap->AddProperty("class_version","L1CaloGeometry_V01");
      TDataMember* theMember_m_gctEtaBinBoundaries = theClass->GetDataMember("m_gctEtaBinBoundaries");
      theMember_m_gctEtaBinBoundaries->CreateAttributeMap();
      TDictAttributeMap* memberAttrMap_m_gctEtaBinBoundaries( theMember_m_gctEtaBinBoundaries->GetAttributeMap() );
      memberAttrMap_m_gctEtaBinBoundaries->AddProperty("mapping","blob");
   }

} // end of namespace ROOT

namespace ROOT {
   static TClass *L1TUtmAlgorithm_Dictionary();
   static void L1TUtmAlgorithm_TClassManip(TClass*);
   static void *new_L1TUtmAlgorithm(void *p = 0);
   static void *newArray_L1TUtmAlgorithm(Long_t size, void *p);
   static void delete_L1TUtmAlgorithm(void *p);
   static void deleteArray_L1TUtmAlgorithm(void *p);
   static void destruct_L1TUtmAlgorithm(void *p);

   // Function generating the singleton type initializer
   static TGenericClassInfo *GenerateInitInstanceLocal(const ::L1TUtmAlgorithm*)
   {
      ::L1TUtmAlgorithm *ptr = 0;
      static ::TVirtualIsAProxy* isa_proxy = new ::TIsAProxy(typeid(::L1TUtmAlgorithm));
      static ::ROOT::TGenericClassInfo 
         instance("L1TUtmAlgorithm", "CondFormats/L1TObjects/interface/L1TUtmAlgorithm.h", 36,
                  typeid(::L1TUtmAlgorithm), ::ROOT::Internal::DefineBehavior(ptr, ptr),
                  &L1TUtmAlgorithm_Dictionary, isa_proxy, 0,
                  sizeof(::L1TUtmAlgorithm) );
      instance.SetNew(&new_L1TUtmAlgorithm);
      instance.SetNewArray(&newArray_L1TUtmAlgorithm);
      instance.SetDelete(&delete_L1TUtmAlgorithm);
      instance.SetDeleteArray(&deleteArray_L1TUtmAlgorithm);
      instance.SetDestructor(&destruct_L1TUtmAlgorithm);
      return &instance;
   }
   TGenericClassInfo *GenerateInitInstance(const ::L1TUtmAlgorithm*)
   {
      return GenerateInitInstanceLocal((::L1TUtmAlgorithm*)0);
   }
   // Static variable to force the class initialization
   static ::ROOT::TGenericClassInfo *_R__UNIQUE_(Init) = GenerateInitInstanceLocal((const ::L1TUtmAlgorithm*)0x0); R__UseDummy(_R__UNIQUE_(Init));

   // Dictionary for non-ClassDef classes
   static TClass *L1TUtmAlgorithm_Dictionary() {
      TClass* theClass =::ROOT::GenerateInitInstanceLocal((const ::L1TUtmAlgorithm*)0x0)->GetClass();
      L1TUtmAlgorithm_TClassManip(theClass);
   return theClass;
   }

   static void L1TUtmAlgorithm_TClassManip(TClass* theClass){
      TDataMember* theMember_rpn_vector_ = theClass->GetDataMember("rpn_vector_");
      theMember_rpn_vector_->CreateAttributeMap();
      TDictAttributeMap* memberAttrMap_rpn_vector_( theMember_rpn_vector_->GetAttributeMap() );
      memberAttrMap_rpn_vector_->AddProperty("mapping","blob");
   }

} // end of namespace ROOT

namespace ROOT {
   static TClass *L1TUtmBin_Dictionary();
   static void L1TUtmBin_TClassManip(TClass*);
   static void *new_L1TUtmBin(void *p = 0);
   static void *newArray_L1TUtmBin(Long_t size, void *p);
   static void delete_L1TUtmBin(void *p);
   static void deleteArray_L1TUtmBin(void *p);
   static void destruct_L1TUtmBin(void *p);

   // Function generating the singleton type initializer
   static TGenericClassInfo *GenerateInitInstanceLocal(const ::L1TUtmBin*)
   {
      ::L1TUtmBin *ptr = 0;
      static ::TVirtualIsAProxy* isa_proxy = new ::TIsAProxy(typeid(::L1TUtmBin));
      static ::ROOT::TGenericClassInfo 
         instance("L1TUtmBin", "CondFormats/L1TObjects/interface/L1TUtmBin.h", 35,
                  typeid(::L1TUtmBin), ::ROOT::Internal::DefineBehavior(ptr, ptr),
                  &L1TUtmBin_Dictionary, isa_proxy, 0,
                  sizeof(::L1TUtmBin) );
      instance.SetNew(&new_L1TUtmBin);
      instance.SetNewArray(&newArray_L1TUtmBin);
      instance.SetDelete(&delete_L1TUtmBin);
      instance.SetDeleteArray(&deleteArray_L1TUtmBin);
      instance.SetDestructor(&destruct_L1TUtmBin);
      return &instance;
   }
   TGenericClassInfo *GenerateInitInstance(const ::L1TUtmBin*)
   {
      return GenerateInitInstanceLocal((::L1TUtmBin*)0);
   }
   // Static variable to force the class initialization
   static ::ROOT::TGenericClassInfo *_R__UNIQUE_(Init) = GenerateInitInstanceLocal((const ::L1TUtmBin*)0x0); R__UseDummy(_R__UNIQUE_(Init));

   // Dictionary for non-ClassDef classes
   static TClass *L1TUtmBin_Dictionary() {
      TClass* theClass =::ROOT::GenerateInitInstanceLocal((const ::L1TUtmBin*)0x0)->GetClass();
      L1TUtmBin_TClassManip(theClass);
   return theClass;
   }

   static void L1TUtmBin_TClassManip(TClass* ){
   }

} // end of namespace ROOT

namespace ROOT {
   static TClass *L1TUtmCondition_Dictionary();
   static void L1TUtmCondition_TClassManip(TClass*);
   static void *new_L1TUtmCondition(void *p = 0);
   static void *newArray_L1TUtmCondition(Long_t size, void *p);
   static void delete_L1TUtmCondition(void *p);
   static void deleteArray_L1TUtmCondition(void *p);
   static void destruct_L1TUtmCondition(void *p);

   // Function generating the singleton type initializer
   static TGenericClassInfo *GenerateInitInstanceLocal(const ::L1TUtmCondition*)
   {
      ::L1TUtmCondition *ptr = 0;
      static ::TVirtualIsAProxy* isa_proxy = new ::TIsAProxy(typeid(::L1TUtmCondition));
      static ::ROOT::TGenericClassInfo 
         instance("L1TUtmCondition", "CondFormats/L1TObjects/interface/L1TUtmCondition.h", 40,
                  typeid(::L1TUtmCondition), ::ROOT::Internal::DefineBehavior(ptr, ptr),
                  &L1TUtmCondition_Dictionary, isa_proxy, 0,
                  sizeof(::L1TUtmCondition) );
      instance.SetNew(&new_L1TUtmCondition);
      instance.SetNewArray(&newArray_L1TUtmCondition);
      instance.SetDelete(&delete_L1TUtmCondition);
      instance.SetDeleteArray(&deleteArray_L1TUtmCondition);
      instance.SetDestructor(&destruct_L1TUtmCondition);
      return &instance;
   }
   TGenericClassInfo *GenerateInitInstance(const ::L1TUtmCondition*)
   {
      return GenerateInitInstanceLocal((::L1TUtmCondition*)0);
   }
   // Static variable to force the class initialization
   static ::ROOT::TGenericClassInfo *_R__UNIQUE_(Init) = GenerateInitInstanceLocal((const ::L1TUtmCondition*)0x0); R__UseDummy(_R__UNIQUE_(Init));

   // Dictionary for non-ClassDef classes
   static TClass *L1TUtmCondition_Dictionary() {
      TClass* theClass =::ROOT::GenerateInitInstanceLocal((const ::L1TUtmCondition*)0x0)->GetClass();
      L1TUtmCondition_TClassManip(theClass);
   return theClass;
   }

   static void L1TUtmCondition_TClassManip(TClass* theClass){
      TDataMember* theMember_objects_ = theClass->GetDataMember("objects_");
      theMember_objects_->CreateAttributeMap();
      TDictAttributeMap* memberAttrMap_objects_( theMember_objects_->GetAttributeMap() );
      memberAttrMap_objects_->AddProperty("mapping","blob");
      TDataMember* theMember_cuts_ = theClass->GetDataMember("cuts_");
      theMember_cuts_->CreateAttributeMap();
      TDictAttributeMap* memberAttrMap_cuts_( theMember_cuts_->GetAttributeMap() );
      memberAttrMap_cuts_->AddProperty("mapping","blob");
   }

} // end of namespace ROOT

namespace ROOT {
   static TClass *L1TUtmCut_Dictionary();
   static void L1TUtmCut_TClassManip(TClass*);
   static void *new_L1TUtmCut(void *p = 0);
   static void *newArray_L1TUtmCut(Long_t size, void *p);
   static void delete_L1TUtmCut(void *p);
   static void deleteArray_L1TUtmCut(void *p);
   static void destruct_L1TUtmCut(void *p);

   // Function generating the singleton type initializer
   static TGenericClassInfo *GenerateInitInstanceLocal(const ::L1TUtmCut*)
   {
      ::L1TUtmCut *ptr = 0;
      static ::TVirtualIsAProxy* isa_proxy = new ::TIsAProxy(typeid(::L1TUtmCut));
      static ::ROOT::TGenericClassInfo 
         instance("L1TUtmCut", "CondFormats/L1TObjects/interface/L1TUtmCut.h", 36,
                  typeid(::L1TUtmCut), ::ROOT::Internal::DefineBehavior(ptr, ptr),
                  &L1TUtmCut_Dictionary, isa_proxy, 0,
                  sizeof(::L1TUtmCut) );
      instance.SetNew(&new_L1TUtmCut);
      instance.SetNewArray(&newArray_L1TUtmCut);
      instance.SetDelete(&delete_L1TUtmCut);
      instance.SetDeleteArray(&deleteArray_L1TUtmCut);
      instance.SetDestructor(&destruct_L1TUtmCut);
      return &instance;
   }
   TGenericClassInfo *GenerateInitInstance(const ::L1TUtmCut*)
   {
      return GenerateInitInstanceLocal((::L1TUtmCut*)0);
   }
   // Static variable to force the class initialization
   static ::ROOT::TGenericClassInfo *_R__UNIQUE_(Init) = GenerateInitInstanceLocal((const ::L1TUtmCut*)0x0); R__UseDummy(_R__UNIQUE_(Init));

   // Dictionary for non-ClassDef classes
   static TClass *L1TUtmCut_Dictionary() {
      TClass* theClass =::ROOT::GenerateInitInstanceLocal((const ::L1TUtmCut*)0x0)->GetClass();
      L1TUtmCut_TClassManip(theClass);
   return theClass;
   }

   static void L1TUtmCut_TClassManip(TClass* ){
   }

} // end of namespace ROOT

namespace ROOT {
   static TClass *L1TUtmCutValue_Dictionary();
   static void L1TUtmCutValue_TClassManip(TClass*);
   static void *new_L1TUtmCutValue(void *p = 0);
   static void *newArray_L1TUtmCutValue(Long_t size, void *p);
   static void delete_L1TUtmCutValue(void *p);
   static void deleteArray_L1TUtmCutValue(void *p);
   static void destruct_L1TUtmCutValue(void *p);

   // Function generating the singleton type initializer
   static TGenericClassInfo *GenerateInitInstanceLocal(const ::L1TUtmCutValue*)
   {
      ::L1TUtmCutValue *ptr = 0;
      static ::TVirtualIsAProxy* isa_proxy = new ::TIsAProxy(typeid(::L1TUtmCutValue));
      static ::ROOT::TGenericClassInfo 
         instance("L1TUtmCutValue", "CondFormats/L1TObjects/interface/L1TUtmCutValue.h", 35,
                  typeid(::L1TUtmCutValue), ::ROOT::Internal::DefineBehavior(ptr, ptr),
                  &L1TUtmCutValue_Dictionary, isa_proxy, 0,
                  sizeof(::L1TUtmCutValue) );
      instance.SetNew(&new_L1TUtmCutValue);
      instance.SetNewArray(&newArray_L1TUtmCutValue);
      instance.SetDelete(&delete_L1TUtmCutValue);
      instance.SetDeleteArray(&deleteArray_L1TUtmCutValue);
      instance.SetDestructor(&destruct_L1TUtmCutValue);
      return &instance;
   }
   TGenericClassInfo *GenerateInitInstance(const ::L1TUtmCutValue*)
   {
      return GenerateInitInstanceLocal((::L1TUtmCutValue*)0);
   }
   // Static variable to force the class initialization
   static ::ROOT::TGenericClassInfo *_R__UNIQUE_(Init) = GenerateInitInstanceLocal((const ::L1TUtmCutValue*)0x0); R__UseDummy(_R__UNIQUE_(Init));

   // Dictionary for non-ClassDef classes
   static TClass *L1TUtmCutValue_Dictionary() {
      TClass* theClass =::ROOT::GenerateInitInstanceLocal((const ::L1TUtmCutValue*)0x0)->GetClass();
      L1TUtmCutValue_TClassManip(theClass);
   return theClass;
   }

   static void L1TUtmCutValue_TClassManip(TClass* ){
   }

} // end of namespace ROOT

namespace ROOT {
   static TClass *L1TUtmObject_Dictionary();
   static void L1TUtmObject_TClassManip(TClass*);
   static void *new_L1TUtmObject(void *p = 0);
   static void *newArray_L1TUtmObject(Long_t size, void *p);
   static void delete_L1TUtmObject(void *p);
   static void deleteArray_L1TUtmObject(void *p);
   static void destruct_L1TUtmObject(void *p);

   // Function generating the singleton type initializer
   static TGenericClassInfo *GenerateInitInstanceLocal(const ::L1TUtmObject*)
   {
      ::L1TUtmObject *ptr = 0;
      static ::TVirtualIsAProxy* isa_proxy = new ::TIsAProxy(typeid(::L1TUtmObject));
      static ::ROOT::TGenericClassInfo 
         instance("L1TUtmObject", "CondFormats/L1TObjects/interface/L1TUtmObject.h", 36,
                  typeid(::L1TUtmObject), ::ROOT::Internal::DefineBehavior(ptr, ptr),
                  &L1TUtmObject_Dictionary, isa_proxy, 0,
                  sizeof(::L1TUtmObject) );
      instance.SetNew(&new_L1TUtmObject);
      instance.SetNewArray(&newArray_L1TUtmObject);
      instance.SetDelete(&delete_L1TUtmObject);
      instance.SetDeleteArray(&deleteArray_L1TUtmObject);
      instance.SetDestructor(&destruct_L1TUtmObject);
      return &instance;
   }
   TGenericClassInfo *GenerateInitInstance(const ::L1TUtmObject*)
   {
      return GenerateInitInstanceLocal((::L1TUtmObject*)0);
   }
   // Static variable to force the class initialization
   static ::ROOT::TGenericClassInfo *_R__UNIQUE_(Init) = GenerateInitInstanceLocal((const ::L1TUtmObject*)0x0); R__UseDummy(_R__UNIQUE_(Init));

   // Dictionary for non-ClassDef classes
   static TClass *L1TUtmObject_Dictionary() {
      TClass* theClass =::ROOT::GenerateInitInstanceLocal((const ::L1TUtmObject*)0x0)->GetClass();
      L1TUtmObject_TClassManip(theClass);
   return theClass;
   }

   static void L1TUtmObject_TClassManip(TClass* theClass){
      TDataMember* theMember_cuts_ = theClass->GetDataMember("cuts_");
      theMember_cuts_->CreateAttributeMap();
      TDictAttributeMap* memberAttrMap_cuts_( theMember_cuts_->GetAttributeMap() );
      memberAttrMap_cuts_->AddProperty("mapping","blob");
   }

} // end of namespace ROOT

namespace ROOT {
   static TClass *L1TUtmScale_Dictionary();
   static void L1TUtmScale_TClassManip(TClass*);
   static void *new_L1TUtmScale(void *p = 0);
   static void *newArray_L1TUtmScale(Long_t size, void *p);
   static void delete_L1TUtmScale(void *p);
   static void deleteArray_L1TUtmScale(void *p);
   static void destruct_L1TUtmScale(void *p);

   // Function generating the singleton type initializer
   static TGenericClassInfo *GenerateInitInstanceLocal(const ::L1TUtmScale*)
   {
      ::L1TUtmScale *ptr = 0;
      static ::TVirtualIsAProxy* isa_proxy = new ::TIsAProxy(typeid(::L1TUtmScale));
      static ::ROOT::TGenericClassInfo 
         instance("L1TUtmScale", "CondFormats/L1TObjects/interface/L1TUtmScale.h", 39,
                  typeid(::L1TUtmScale), ::ROOT::Internal::DefineBehavior(ptr, ptr),
                  &L1TUtmScale_Dictionary, isa_proxy, 0,
                  sizeof(::L1TUtmScale) );
      instance.SetNew(&new_L1TUtmScale);
      instance.SetNewArray(&newArray_L1TUtmScale);
      instance.SetDelete(&delete_L1TUtmScale);
      instance.SetDeleteArray(&deleteArray_L1TUtmScale);
      instance.SetDestructor(&destruct_L1TUtmScale);
      return &instance;
   }
   TGenericClassInfo *GenerateInitInstance(const ::L1TUtmScale*)
   {
      return GenerateInitInstanceLocal((::L1TUtmScale*)0);
   }
   // Static variable to force the class initialization
   static ::ROOT::TGenericClassInfo *_R__UNIQUE_(Init) = GenerateInitInstanceLocal((const ::L1TUtmScale*)0x0); R__UseDummy(_R__UNIQUE_(Init));

   // Dictionary for non-ClassDef classes
   static TClass *L1TUtmScale_Dictionary() {
      TClass* theClass =::ROOT::GenerateInitInstanceLocal((const ::L1TUtmScale*)0x0)->GetClass();
      L1TUtmScale_TClassManip(theClass);
   return theClass;
   }

   static void L1TUtmScale_TClassManip(TClass* theClass){
      TDataMember* theMember_bins_ = theClass->GetDataMember("bins_");
      theMember_bins_->CreateAttributeMap();
      TDictAttributeMap* memberAttrMap_bins_( theMember_bins_->GetAttributeMap() );
      memberAttrMap_bins_->AddProperty("mapping","blob");
   }

} // end of namespace ROOT

namespace ROOT {
   static TClass *L1TUtmTriggerMenu_Dictionary();
   static void L1TUtmTriggerMenu_TClassManip(TClass*);
   static void *new_L1TUtmTriggerMenu(void *p = 0);
   static void *newArray_L1TUtmTriggerMenu(Long_t size, void *p);
   static void delete_L1TUtmTriggerMenu(void *p);
   static void deleteArray_L1TUtmTriggerMenu(void *p);
   static void destruct_L1TUtmTriggerMenu(void *p);

   // Function generating the singleton type initializer
   static TGenericClassInfo *GenerateInitInstanceLocal(const ::L1TUtmTriggerMenu*)
   {
      ::L1TUtmTriggerMenu *ptr = 0;
      static ::TVirtualIsAProxy* isa_proxy = new ::TIsAProxy(typeid(::L1TUtmTriggerMenu));
      static ::ROOT::TGenericClassInfo 
         instance("L1TUtmTriggerMenu", "CondFormats/L1TObjects/interface/L1TUtmTriggerMenu.h", 40,
                  typeid(::L1TUtmTriggerMenu), ::ROOT::Internal::DefineBehavior(ptr, ptr),
                  &L1TUtmTriggerMenu_Dictionary, isa_proxy, 0,
                  sizeof(::L1TUtmTriggerMenu) );
      instance.SetNew(&new_L1TUtmTriggerMenu);
      instance.SetNewArray(&newArray_L1TUtmTriggerMenu);
      instance.SetDelete(&delete_L1TUtmTriggerMenu);
      instance.SetDeleteArray(&deleteArray_L1TUtmTriggerMenu);
      instance.SetDestructor(&destruct_L1TUtmTriggerMenu);
      return &instance;
   }
   TGenericClassInfo *GenerateInitInstance(const ::L1TUtmTriggerMenu*)
   {
      return GenerateInitInstanceLocal((::L1TUtmTriggerMenu*)0);
   }
   // Static variable to force the class initialization
   static ::ROOT::TGenericClassInfo *_R__UNIQUE_(Init) = GenerateInitInstanceLocal((const ::L1TUtmTriggerMenu*)0x0); R__UseDummy(_R__UNIQUE_(Init));

   // Dictionary for non-ClassDef classes
   static TClass *L1TUtmTriggerMenu_Dictionary() {
      TClass* theClass =::ROOT::GenerateInitInstanceLocal((const ::L1TUtmTriggerMenu*)0x0)->GetClass();
      L1TUtmTriggerMenu_TClassManip(theClass);
   return theClass;
   }

   static void L1TUtmTriggerMenu_TClassManip(TClass* theClass){
      TDataMember* theMember_algorithm_map_ = theClass->GetDataMember("algorithm_map_");
      theMember_algorithm_map_->CreateAttributeMap();
      TDictAttributeMap* memberAttrMap_algorithm_map_( theMember_algorithm_map_->GetAttributeMap() );
      memberAttrMap_algorithm_map_->AddProperty("mapping","blob");
      TDataMember* theMember_condition_map_ = theClass->GetDataMember("condition_map_");
      theMember_condition_map_->CreateAttributeMap();
      TDictAttributeMap* memberAttrMap_condition_map_( theMember_condition_map_->GetAttributeMap() );
      memberAttrMap_condition_map_->AddProperty("mapping","blob");
      TDataMember* theMember_scale_map_ = theClass->GetDataMember("scale_map_");
      theMember_scale_map_->CreateAttributeMap();
      TDictAttributeMap* memberAttrMap_scale_map_( theMember_scale_map_->GetAttributeMap() );
      memberAttrMap_scale_map_->AddProperty("mapping","blob");
      TDataMember* theMember_external_map_ = theClass->GetDataMember("external_map_");
      theMember_external_map_->CreateAttributeMap();
      TDictAttributeMap* memberAttrMap_external_map_( theMember_external_map_->GetAttributeMap() );
      memberAttrMap_external_map_->AddProperty("mapping","blob");
      TDataMember* theMember_token_to_condition_ = theClass->GetDataMember("token_to_condition_");
      theMember_token_to_condition_->CreateAttributeMap();
      TDictAttributeMap* memberAttrMap_token_to_condition_( theMember_token_to_condition_->GetAttributeMap() );
      memberAttrMap_token_to_condition_->AddProperty("mapping","blob");
   }

} // end of namespace ROOT

namespace ROOT {
   // Wrappers around operator new
   static void *new_L1TMuonOverlapParams(void *p) {
      return  p ? new(p) ::L1TMuonOverlapParams : new ::L1TMuonOverlapParams;
   }
   static void *newArray_L1TMuonOverlapParams(Long_t nElements, void *p) {
      return p ? new(p) ::L1TMuonOverlapParams[nElements] : new ::L1TMuonOverlapParams[nElements];
   }
   // Wrapper around operator delete
   static void delete_L1TMuonOverlapParams(void *p) {
      delete ((::L1TMuonOverlapParams*)p);
   }
   static void deleteArray_L1TMuonOverlapParams(void *p) {
      delete [] ((::L1TMuonOverlapParams*)p);
   }
   static void destruct_L1TMuonOverlapParams(void *p) {
      typedef ::L1TMuonOverlapParams current_t;
      ((current_t*)p)->~current_t();
   }
} // end of namespace ROOT for class ::L1TMuonOverlapParams

namespace ROOT {
   // Wrappers around operator new
   static void *new_L1TMuonOverlapParamscLcLNode(void *p) {
      return  p ? ::new((::ROOT::Internal::TOperatorNewHelper*)p) ::L1TMuonOverlapParams::Node : new ::L1TMuonOverlapParams::Node;
   }
   static void *newArray_L1TMuonOverlapParamscLcLNode(Long_t nElements, void *p) {
      return p ? ::new((::ROOT::Internal::TOperatorNewHelper*)p) ::L1TMuonOverlapParams::Node[nElements] : new ::L1TMuonOverlapParams::Node[nElements];
   }
   // Wrapper around operator delete
   static void delete_L1TMuonOverlapParamscLcLNode(void *p) {
      delete ((::L1TMuonOverlapParams::Node*)p);
   }
   static void deleteArray_L1TMuonOverlapParamscLcLNode(void *p) {
      delete [] ((::L1TMuonOverlapParams::Node*)p);
   }
   static void destruct_L1TMuonOverlapParamscLcLNode(void *p) {
      typedef ::L1TMuonOverlapParams::Node current_t;
      ((current_t*)p)->~current_t();
   }
} // end of namespace ROOT for class ::L1TMuonOverlapParams::Node

namespace ROOT {
   // Wrappers around operator new
   static void *new_l1tcLcLLUT(void *p) {
      return  p ? ::new((::ROOT::Internal::TOperatorNewHelper*)p) ::l1t::LUT : new ::l1t::LUT;
   }
   static void *newArray_l1tcLcLLUT(Long_t nElements, void *p) {
      return p ? ::new((::ROOT::Internal::TOperatorNewHelper*)p) ::l1t::LUT[nElements] : new ::l1t::LUT[nElements];
   }
   // Wrapper around operator delete
   static void delete_l1tcLcLLUT(void *p) {
      delete ((::l1t::LUT*)p);
   }
   static void deleteArray_l1tcLcLLUT(void *p) {
      delete [] ((::l1t::LUT*)p);
   }
   static void destruct_l1tcLcLLUT(void *p) {
      typedef ::l1t::LUT current_t;
      ((current_t*)p)->~current_t();
   }
} // end of namespace ROOT for class ::l1t::LUT

namespace ROOT {
   // Wrappers around operator new
   static void *new_l1tcLcLCaloParams(void *p) {
      return  p ? ::new((::ROOT::Internal::TOperatorNewHelper*)p) ::l1t::CaloParams : new ::l1t::CaloParams;
   }
   static void *newArray_l1tcLcLCaloParams(Long_t nElements, void *p) {
      return p ? ::new((::ROOT::Internal::TOperatorNewHelper*)p) ::l1t::CaloParams[nElements] : new ::l1t::CaloParams[nElements];
   }
   // Wrapper around operator delete
   static void delete_l1tcLcLCaloParams(void *p) {
      delete ((::l1t::CaloParams*)p);
   }
   static void deleteArray_l1tcLcLCaloParams(void *p) {
      delete [] ((::l1t::CaloParams*)p);
   }
   static void destruct_l1tcLcLCaloParams(void *p) {
      typedef ::l1t::CaloParams current_t;
      ((current_t*)p)->~current_t();
   }
} // end of namespace ROOT for class ::l1t::CaloParams

namespace ROOT {
   // Wrappers around operator new
   static void *new_l1tcLcLCaloParamscLcLNode(void *p) {
      return  p ? ::new((::ROOT::Internal::TOperatorNewHelper*)p) ::l1t::CaloParams::Node : new ::l1t::CaloParams::Node;
   }
   static void *newArray_l1tcLcLCaloParamscLcLNode(Long_t nElements, void *p) {
      return p ? ::new((::ROOT::Internal::TOperatorNewHelper*)p) ::l1t::CaloParams::Node[nElements] : new ::l1t::CaloParams::Node[nElements];
   }
   // Wrapper around operator delete
   static void delete_l1tcLcLCaloParamscLcLNode(void *p) {
      delete ((::l1t::CaloParams::Node*)p);
   }
   static void deleteArray_l1tcLcLCaloParamscLcLNode(void *p) {
      delete [] ((::l1t::CaloParams::Node*)p);
   }
   static void destruct_l1tcLcLCaloParamscLcLNode(void *p) {
      typedef ::l1t::CaloParams::Node current_t;
      ((current_t*)p)->~current_t();
   }
} // end of namespace ROOT for class ::l1t::CaloParams::Node

namespace ROOT {
   // Wrappers around operator new
   static void *new_l1tcLcLCaloParamscLcLTowerParams(void *p) {
      return  p ? ::new((::ROOT::Internal::TOperatorNewHelper*)p) ::l1t::CaloParams::TowerParams : new ::l1t::CaloParams::TowerParams;
   }
   static void *newArray_l1tcLcLCaloParamscLcLTowerParams(Long_t nElements, void *p) {
      return p ? ::new((::ROOT::Internal::TOperatorNewHelper*)p) ::l1t::CaloParams::TowerParams[nElements] : new ::l1t::CaloParams::TowerParams[nElements];
   }
   // Wrapper around operator delete
   static void delete_l1tcLcLCaloParamscLcLTowerParams(void *p) {
      delete ((::l1t::CaloParams::TowerParams*)p);
   }
   static void deleteArray_l1tcLcLCaloParamscLcLTowerParams(void *p) {
      delete [] ((::l1t::CaloParams::TowerParams*)p);
   }
   static void destruct_l1tcLcLCaloParamscLcLTowerParams(void *p) {
      typedef ::l1t::CaloParams::TowerParams current_t;
      ((current_t*)p)->~current_t();
   }
} // end of namespace ROOT for class ::l1t::CaloParams::TowerParams

namespace ROOT {
   // Wrappers around operator new
   static void *new_l1tcLcLCaloParamscLcLEgParams(void *p) {
      return  p ? ::new((::ROOT::Internal::TOperatorNewHelper*)p) ::l1t::CaloParams::EgParams : new ::l1t::CaloParams::EgParams;
   }
   static void *newArray_l1tcLcLCaloParamscLcLEgParams(Long_t nElements, void *p) {
      return p ? ::new((::ROOT::Internal::TOperatorNewHelper*)p) ::l1t::CaloParams::EgParams[nElements] : new ::l1t::CaloParams::EgParams[nElements];
   }
   // Wrapper around operator delete
   static void delete_l1tcLcLCaloParamscLcLEgParams(void *p) {
      delete ((::l1t::CaloParams::EgParams*)p);
   }
   static void deleteArray_l1tcLcLCaloParamscLcLEgParams(void *p) {
      delete [] ((::l1t::CaloParams::EgParams*)p);
   }
   static void destruct_l1tcLcLCaloParamscLcLEgParams(void *p) {
      typedef ::l1t::CaloParams::EgParams current_t;
      ((current_t*)p)->~current_t();
   }
} // end of namespace ROOT for class ::l1t::CaloParams::EgParams

namespace ROOT {
   // Wrappers around operator new
   static void *new_l1tcLcLCaloParamscLcLJetParams(void *p) {
      return  p ? ::new((::ROOT::Internal::TOperatorNewHelper*)p) ::l1t::CaloParams::JetParams : new ::l1t::CaloParams::JetParams;
   }
   static void *newArray_l1tcLcLCaloParamscLcLJetParams(Long_t nElements, void *p) {
      return p ? ::new((::ROOT::Internal::TOperatorNewHelper*)p) ::l1t::CaloParams::JetParams[nElements] : new ::l1t::CaloParams::JetParams[nElements];
   }
   // Wrapper around operator delete
   static void delete_l1tcLcLCaloParamscLcLJetParams(void *p) {
      delete ((::l1t::CaloParams::JetParams*)p);
   }
   static void deleteArray_l1tcLcLCaloParamscLcLJetParams(void *p) {
      delete [] ((::l1t::CaloParams::JetParams*)p);
   }
   static void destruct_l1tcLcLCaloParamscLcLJetParams(void *p) {
      typedef ::l1t::CaloParams::JetParams current_t;
      ((current_t*)p)->~current_t();
   }
} // end of namespace ROOT for class ::l1t::CaloParams::JetParams

namespace ROOT {
   // Wrappers around operator new
   static void *new_l1tcLcLCaloParamscLcLTauParams(void *p) {
      return  p ? ::new((::ROOT::Internal::TOperatorNewHelper*)p) ::l1t::CaloParams::TauParams : new ::l1t::CaloParams::TauParams;
   }
   static void *newArray_l1tcLcLCaloParamscLcLTauParams(Long_t nElements, void *p) {
      return p ? ::new((::ROOT::Internal::TOperatorNewHelper*)p) ::l1t::CaloParams::TauParams[nElements] : new ::l1t::CaloParams::TauParams[nElements];
   }
   // Wrapper around operator delete
   static void delete_l1tcLcLCaloParamscLcLTauParams(void *p) {
      delete ((::l1t::CaloParams::TauParams*)p);
   }
   static void deleteArray_l1tcLcLCaloParamscLcLTauParams(void *p) {
      delete [] ((::l1t::CaloParams::TauParams*)p);
   }
   static void destruct_l1tcLcLCaloParamscLcLTauParams(void *p) {
      typedef ::l1t::CaloParams::TauParams current_t;
      ((current_t*)p)->~current_t();
   }
} // end of namespace ROOT for class ::l1t::CaloParams::TauParams

namespace ROOT {
   // Wrappers around operator new
   static void *new_l1tcLcLCaloConfig(void *p) {
      return  p ? ::new((::ROOT::Internal::TOperatorNewHelper*)p) ::l1t::CaloConfig : new ::l1t::CaloConfig;
   }
   static void *newArray_l1tcLcLCaloConfig(Long_t nElements, void *p) {
      return p ? ::new((::ROOT::Internal::TOperatorNewHelper*)p) ::l1t::CaloConfig[nElements] : new ::l1t::CaloConfig[nElements];
   }
   // Wrapper around operator delete
   static void delete_l1tcLcLCaloConfig(void *p) {
      delete ((::l1t::CaloConfig*)p);
   }
   static void deleteArray_l1tcLcLCaloConfig(void *p) {
      delete [] ((::l1t::CaloConfig*)p);
   }
   static void destruct_l1tcLcLCaloConfig(void *p) {
      typedef ::l1t::CaloConfig current_t;
      ((current_t*)p)->~current_t();
   }
} // end of namespace ROOT for class ::l1t::CaloConfig

namespace ROOT {
   // Wrappers around operator new
   static void *new_L1TMuonGlobalParams(void *p) {
      return  p ? new(p) ::L1TMuonGlobalParams : new ::L1TMuonGlobalParams;
   }
   static void *newArray_L1TMuonGlobalParams(Long_t nElements, void *p) {
      return p ? new(p) ::L1TMuonGlobalParams[nElements] : new ::L1TMuonGlobalParams[nElements];
   }
   // Wrapper around operator delete
   static void delete_L1TMuonGlobalParams(void *p) {
      delete ((::L1TMuonGlobalParams*)p);
   }
   static void deleteArray_L1TMuonGlobalParams(void *p) {
      delete [] ((::L1TMuonGlobalParams*)p);
   }
   static void destruct_L1TMuonGlobalParams(void *p) {
      typedef ::L1TMuonGlobalParams current_t;
      ((current_t*)p)->~current_t();
   }
} // end of namespace ROOT for class ::L1TMuonGlobalParams

namespace ROOT {
   // Wrappers around operator new
   static void *new_L1TMuonGlobalParamscLcLNode(void *p) {
      return  p ? ::new((::ROOT::Internal::TOperatorNewHelper*)p) ::L1TMuonGlobalParams::Node : new ::L1TMuonGlobalParams::Node;
   }
   static void *newArray_L1TMuonGlobalParamscLcLNode(Long_t nElements, void *p) {
      return p ? ::new((::ROOT::Internal::TOperatorNewHelper*)p) ::L1TMuonGlobalParams::Node[nElements] : new ::L1TMuonGlobalParams::Node[nElements];
   }
   // Wrapper around operator delete
   static void delete_L1TMuonGlobalParamscLcLNode(void *p) {
      delete ((::L1TMuonGlobalParams::Node*)p);
   }
   static void deleteArray_L1TMuonGlobalParamscLcLNode(void *p) {
      delete [] ((::L1TMuonGlobalParams::Node*)p);
   }
   static void destruct_L1TMuonGlobalParamscLcLNode(void *p) {
      typedef ::L1TMuonGlobalParams::Node current_t;
      ((current_t*)p)->~current_t();
   }
} // end of namespace ROOT for class ::L1TMuonGlobalParams::Node

namespace ROOT {
   // Wrappers around operator new
   static void *new_L1TMuonBarrelParams(void *p) {
      return  p ? new(p) ::L1TMuonBarrelParams : new ::L1TMuonBarrelParams;
   }
   static void *newArray_L1TMuonBarrelParams(Long_t nElements, void *p) {
      return p ? new(p) ::L1TMuonBarrelParams[nElements] : new ::L1TMuonBarrelParams[nElements];
   }
   // Wrapper around operator delete
   static void delete_L1TMuonBarrelParams(void *p) {
      delete ((::L1TMuonBarrelParams*)p);
   }
   static void deleteArray_L1TMuonBarrelParams(void *p) {
      delete [] ((::L1TMuonBarrelParams*)p);
   }
   static void destruct_L1TMuonBarrelParams(void *p) {
      typedef ::L1TMuonBarrelParams current_t;
      ((current_t*)p)->~current_t();
   }
} // end of namespace ROOT for class ::L1TMuonBarrelParams

namespace ROOT {
   // Wrappers around operator new
   static void *new_L1TMuonBarrelParamscLcLNode(void *p) {
      return  p ? ::new((::ROOT::Internal::TOperatorNewHelper*)p) ::L1TMuonBarrelParams::Node : new ::L1TMuonBarrelParams::Node;
   }
   static void *newArray_L1TMuonBarrelParamscLcLNode(Long_t nElements, void *p) {
      return p ? ::new((::ROOT::Internal::TOperatorNewHelper*)p) ::L1TMuonBarrelParams::Node[nElements] : new ::L1TMuonBarrelParams::Node[nElements];
   }
   // Wrapper around operator delete
   static void delete_L1TMuonBarrelParamscLcLNode(void *p) {
      delete ((::L1TMuonBarrelParams::Node*)p);
   }
   static void deleteArray_L1TMuonBarrelParamscLcLNode(void *p) {
      delete [] ((::L1TMuonBarrelParams::Node*)p);
   }
   static void destruct_L1TMuonBarrelParamscLcLNode(void *p) {
      typedef ::L1TMuonBarrelParams::Node current_t;
      ((current_t*)p)->~current_t();
   }
} // end of namespace ROOT for class ::L1TMuonBarrelParams::Node

namespace ROOT {
   // Wrappers around operator new
   static void *new_L1TMuonBarrelParamscLcLLUTParamscLcLextLUT(void *p) {
      return  p ? ::new((::ROOT::Internal::TOperatorNewHelper*)p) ::L1TMuonBarrelParams::LUTParams::extLUT : new ::L1TMuonBarrelParams::LUTParams::extLUT;
   }
   static void *newArray_L1TMuonBarrelParamscLcLLUTParamscLcLextLUT(Long_t nElements, void *p) {
      return p ? ::new((::ROOT::Internal::TOperatorNewHelper*)p) ::L1TMuonBarrelParams::LUTParams::extLUT[nElements] : new ::L1TMuonBarrelParams::LUTParams::extLUT[nElements];
   }
   // Wrapper around operator delete
   static void delete_L1TMuonBarrelParamscLcLLUTParamscLcLextLUT(void *p) {
      delete ((::L1TMuonBarrelParams::LUTParams::extLUT*)p);
   }
   static void deleteArray_L1TMuonBarrelParamscLcLLUTParamscLcLextLUT(void *p) {
      delete [] ((::L1TMuonBarrelParams::LUTParams::extLUT*)p);
   }
   static void destruct_L1TMuonBarrelParamscLcLLUTParamscLcLextLUT(void *p) {
      typedef ::L1TMuonBarrelParams::LUTParams::extLUT current_t;
      ((current_t*)p)->~current_t();
   }
} // end of namespace ROOT for class ::L1TMuonBarrelParams::LUTParams::extLUT

namespace ROOT {
   // Wrappers around operator new
   static void *new_L1TMuonBarrelParamscLcLLUTParams(void *p) {
      return  p ? ::new((::ROOT::Internal::TOperatorNewHelper*)p) ::L1TMuonBarrelParams::LUTParams : new ::L1TMuonBarrelParams::LUTParams;
   }
   static void *newArray_L1TMuonBarrelParamscLcLLUTParams(Long_t nElements, void *p) {
      return p ? ::new((::ROOT::Internal::TOperatorNewHelper*)p) ::L1TMuonBarrelParams::LUTParams[nElements] : new ::L1TMuonBarrelParams::LUTParams[nElements];
   }
   // Wrapper around operator delete
   static void delete_L1TMuonBarrelParamscLcLLUTParams(void *p) {
      delete ((::L1TMuonBarrelParams::LUTParams*)p);
   }
   static void deleteArray_L1TMuonBarrelParamscLcLLUTParams(void *p) {
      delete [] ((::L1TMuonBarrelParams::LUTParams*)p);
   }
   static void destruct_L1TMuonBarrelParamscLcLLUTParams(void *p) {
      typedef ::L1TMuonBarrelParams::LUTParams current_t;
      ((current_t*)p)->~current_t();
   }
} // end of namespace ROOT for class ::L1TMuonBarrelParams::LUTParams

namespace ROOT {
   // Wrapper around operator delete
   static void delete_L1MuScale(void *p) {
      delete ((::L1MuScale*)p);
   }
   static void deleteArray_L1MuScale(void *p) {
      delete [] ((::L1MuScale*)p);
   }
   static void destruct_L1MuScale(void *p) {
      typedef ::L1MuScale current_t;
      ((current_t*)p)->~current_t();
   }
} // end of namespace ROOT for class ::L1MuScale

namespace ROOT {
   // Wrappers around operator new
   static void *new_L1MuBinnedScale(void *p) {
      return  p ? new(p) ::L1MuBinnedScale : new ::L1MuBinnedScale;
   }
   static void *newArray_L1MuBinnedScale(Long_t nElements, void *p) {
      return p ? new(p) ::L1MuBinnedScale[nElements] : new ::L1MuBinnedScale[nElements];
   }
   // Wrapper around operator delete
   static void delete_L1MuBinnedScale(void *p) {
      delete ((::L1MuBinnedScale*)p);
   }
   static void deleteArray_L1MuBinnedScale(void *p) {
      delete [] ((::L1MuBinnedScale*)p);
   }
   static void destruct_L1MuBinnedScale(void *p) {
      typedef ::L1MuBinnedScale current_t;
      ((current_t*)p)->~current_t();
   }
} // end of namespace ROOT for class ::L1MuBinnedScale

namespace ROOT {
   // Wrappers around operator new
   static void *new_L1MuSymmetricBinnedScale(void *p) {
      return  p ? new(p) ::L1MuSymmetricBinnedScale : new ::L1MuSymmetricBinnedScale;
   }
   static void *newArray_L1MuSymmetricBinnedScale(Long_t nElements, void *p) {
      return p ? new(p) ::L1MuSymmetricBinnedScale[nElements] : new ::L1MuSymmetricBinnedScale[nElements];
   }
   // Wrapper around operator delete
   static void delete_L1MuSymmetricBinnedScale(void *p) {
      delete ((::L1MuSymmetricBinnedScale*)p);
   }
   static void deleteArray_L1MuSymmetricBinnedScale(void *p) {
      delete [] ((::L1MuSymmetricBinnedScale*)p);
   }
   static void destruct_L1MuSymmetricBinnedScale(void *p) {
      typedef ::L1MuSymmetricBinnedScale current_t;
      ((current_t*)p)->~current_t();
   }
} // end of namespace ROOT for class ::L1MuSymmetricBinnedScale

namespace ROOT {
   // Wrapper around operator delete
   static void delete_L1MuPacking(void *p) {
      delete ((::L1MuPacking*)p);
   }
   static void deleteArray_L1MuPacking(void *p) {
      delete [] ((::L1MuPacking*)p);
   }
   static void destruct_L1MuPacking(void *p) {
      typedef ::L1MuPacking current_t;
      ((current_t*)p)->~current_t();
   }
} // end of namespace ROOT for class ::L1MuPacking

namespace ROOT {
   // Wrappers around operator new
   static void *new_L1MuPseudoSignedPacking(void *p) {
      return  p ? new(p) ::L1MuPseudoSignedPacking : new ::L1MuPseudoSignedPacking;
   }
   static void *newArray_L1MuPseudoSignedPacking(Long_t nElements, void *p) {
      return p ? new(p) ::L1MuPseudoSignedPacking[nElements] : new ::L1MuPseudoSignedPacking[nElements];
   }
   // Wrapper around operator delete
   static void delete_L1MuPseudoSignedPacking(void *p) {
      delete ((::L1MuPseudoSignedPacking*)p);
   }
   static void deleteArray_L1MuPseudoSignedPacking(void *p) {
      delete [] ((::L1MuPseudoSignedPacking*)p);
   }
   static void destruct_L1MuPseudoSignedPacking(void *p) {
      typedef ::L1MuPseudoSignedPacking current_t;
      ((current_t*)p)->~current_t();
   }
} // end of namespace ROOT for class ::L1MuPseudoSignedPacking

namespace ROOT {
   // Wrappers around operator new
   static void *new_L1MuTriggerScales(void *p) {
      return  p ? new(p) ::L1MuTriggerScales : new ::L1MuTriggerScales;
   }
   static void *newArray_L1MuTriggerScales(Long_t nElements, void *p) {
      return p ? new(p) ::L1MuTriggerScales[nElements] : new ::L1MuTriggerScales[nElements];
   }
   // Wrapper around operator delete
   static void delete_L1MuTriggerScales(void *p) {
      delete ((::L1MuTriggerScales*)p);
   }
   static void deleteArray_L1MuTriggerScales(void *p) {
      delete [] ((::L1MuTriggerScales*)p);
   }
   static void destruct_L1MuTriggerScales(void *p) {
      typedef ::L1MuTriggerScales current_t;
      ((current_t*)p)->~current_t();
   }
} // end of namespace ROOT for class ::L1MuTriggerScales

namespace ROOT {
   // Wrappers around operator new
   static void *new_L1MuTriggerPtScale(void *p) {
      return  p ? new(p) ::L1MuTriggerPtScale : new ::L1MuTriggerPtScale;
   }
   static void *newArray_L1MuTriggerPtScale(Long_t nElements, void *p) {
      return p ? new(p) ::L1MuTriggerPtScale[nElements] : new ::L1MuTriggerPtScale[nElements];
   }
   // Wrapper around operator delete
   static void delete_L1MuTriggerPtScale(void *p) {
      delete ((::L1MuTriggerPtScale*)p);
   }
   static void deleteArray_L1MuTriggerPtScale(void *p) {
      delete [] ((::L1MuTriggerPtScale*)p);
   }
   static void destruct_L1MuTriggerPtScale(void *p) {
      typedef ::L1MuTriggerPtScale current_t;
      ((current_t*)p)->~current_t();
   }
} // end of namespace ROOT for class ::L1MuTriggerPtScale

namespace ROOT {
   // Wrappers around operator new
   static void *new_L1MuGMTParameters(void *p) {
      return  p ? new(p) ::L1MuGMTParameters : new ::L1MuGMTParameters;
   }
   static void *newArray_L1MuGMTParameters(Long_t nElements, void *p) {
      return p ? new(p) ::L1MuGMTParameters[nElements] : new ::L1MuGMTParameters[nElements];
   }
   // Wrapper around operator delete
   static void delete_L1MuGMTParameters(void *p) {
      delete ((::L1MuGMTParameters*)p);
   }
   static void deleteArray_L1MuGMTParameters(void *p) {
      delete [] ((::L1MuGMTParameters*)p);
   }
   static void destruct_L1MuGMTParameters(void *p) {
      typedef ::L1MuGMTParameters current_t;
      ((current_t*)p)->~current_t();
   }
} // end of namespace ROOT for class ::L1MuGMTParameters

namespace ROOT {
   // Wrappers around operator new
   static void *new_L1MuGMTChannelMask(void *p) {
      return  p ? new(p) ::L1MuGMTChannelMask : new ::L1MuGMTChannelMask;
   }
   static void *newArray_L1MuGMTChannelMask(Long_t nElements, void *p) {
      return p ? new(p) ::L1MuGMTChannelMask[nElements] : new ::L1MuGMTChannelMask[nElements];
   }
   // Wrapper around operator delete
   static void delete_L1MuGMTChannelMask(void *p) {
      delete ((::L1MuGMTChannelMask*)p);
   }
   static void deleteArray_L1MuGMTChannelMask(void *p) {
      delete [] ((::L1MuGMTChannelMask*)p);
   }
   static void destruct_L1MuGMTChannelMask(void *p) {
      typedef ::L1MuGMTChannelMask current_t;
      ((current_t*)p)->~current_t();
   }
} // end of namespace ROOT for class ::L1MuGMTChannelMask

namespace ROOT {
   // Wrappers around operator new
   static void *new_L1MuGMTScales(void *p) {
      return  p ? new(p) ::L1MuGMTScales : new ::L1MuGMTScales;
   }
   static void *newArray_L1MuGMTScales(Long_t nElements, void *p) {
      return p ? new(p) ::L1MuGMTScales[nElements] : new ::L1MuGMTScales[nElements];
   }
   // Wrapper around operator delete
   static void delete_L1MuGMTScales(void *p) {
      delete ((::L1MuGMTScales*)p);
   }
   static void deleteArray_L1MuGMTScales(void *p) {
      delete [] ((::L1MuGMTScales*)p);
   }
   static void destruct_L1MuGMTScales(void *p) {
      typedef ::L1MuGMTScales current_t;
      ((current_t*)p)->~current_t();
   }
} // end of namespace ROOT for class ::L1MuGMTScales

namespace ROOT {
   // Wrappers around operator new
   static void *new_L1CaloEtScale(void *p) {
      return  p ? new(p) ::L1CaloEtScale : new ::L1CaloEtScale;
   }
   static void *newArray_L1CaloEtScale(Long_t nElements, void *p) {
      return p ? new(p) ::L1CaloEtScale[nElements] : new ::L1CaloEtScale[nElements];
   }
   // Wrapper around operator delete
   static void delete_L1CaloEtScale(void *p) {
      delete ((::L1CaloEtScale*)p);
   }
   static void deleteArray_L1CaloEtScale(void *p) {
      delete [] ((::L1CaloEtScale*)p);
   }
   static void destruct_L1CaloEtScale(void *p) {
      typedef ::L1CaloEtScale current_t;
      ((current_t*)p)->~current_t();
   }
} // end of namespace ROOT for class ::L1CaloEtScale

namespace ROOT {
   // Wrappers around operator new
   static void *new_L1GctChannelMask(void *p) {
      return  p ? new(p) ::L1GctChannelMask : new ::L1GctChannelMask;
   }
   static void *newArray_L1GctChannelMask(Long_t nElements, void *p) {
      return p ? new(p) ::L1GctChannelMask[nElements] : new ::L1GctChannelMask[nElements];
   }
   // Wrapper around operator delete
   static void delete_L1GctChannelMask(void *p) {
      delete ((::L1GctChannelMask*)p);
   }
   static void deleteArray_L1GctChannelMask(void *p) {
      delete [] ((::L1GctChannelMask*)p);
   }
   static void destruct_L1GctChannelMask(void *p) {
      typedef ::L1GctChannelMask current_t;
      ((current_t*)p)->~current_t();
   }
} // end of namespace ROOT for class ::L1GctChannelMask

namespace ROOT {
   // Wrappers around operator new
   static void *new_L1GctJetFinderParams(void *p) {
      return  p ? new(p) ::L1GctJetFinderParams : new ::L1GctJetFinderParams;
   }
   static void *newArray_L1GctJetFinderParams(Long_t nElements, void *p) {
      return p ? new(p) ::L1GctJetFinderParams[nElements] : new ::L1GctJetFinderParams[nElements];
   }
   // Wrapper around operator delete
   static void delete_L1GctJetFinderParams(void *p) {
      delete ((::L1GctJetFinderParams*)p);
   }
   static void deleteArray_L1GctJetFinderParams(void *p) {
      delete [] ((::L1GctJetFinderParams*)p);
   }
   static void destruct_L1GctJetFinderParams(void *p) {
      typedef ::L1GctJetFinderParams current_t;
      ((current_t*)p)->~current_t();
   }
} // end of namespace ROOT for class ::L1GctJetFinderParams

namespace ROOT {
   // Wrappers around operator new
   static void *new_L1MuDTExtLutcLcLLUT(void *p) {
      return  p ? ::new((::ROOT::Internal::TOperatorNewHelper*)p) ::L1MuDTExtLut::LUT : new ::L1MuDTExtLut::LUT;
   }
   static void *newArray_L1MuDTExtLutcLcLLUT(Long_t nElements, void *p) {
      return p ? ::new((::ROOT::Internal::TOperatorNewHelper*)p) ::L1MuDTExtLut::LUT[nElements] : new ::L1MuDTExtLut::LUT[nElements];
   }
   // Wrapper around operator delete
   static void delete_L1MuDTExtLutcLcLLUT(void *p) {
      delete ((::L1MuDTExtLut::LUT*)p);
   }
   static void deleteArray_L1MuDTExtLutcLcLLUT(void *p) {
      delete [] ((::L1MuDTExtLut::LUT*)p);
   }
   static void destruct_L1MuDTExtLutcLcLLUT(void *p) {
      typedef ::L1MuDTExtLut::LUT current_t;
      ((current_t*)p)->~current_t();
   }
} // end of namespace ROOT for class ::L1MuDTExtLut::LUT

namespace ROOT {
   // Wrappers around operator new
   static void *new_L1MuDTExtLut(void *p) {
      return  p ? new(p) ::L1MuDTExtLut : new ::L1MuDTExtLut;
   }
   static void *newArray_L1MuDTExtLut(Long_t nElements, void *p) {
      return p ? new(p) ::L1MuDTExtLut[nElements] : new ::L1MuDTExtLut[nElements];
   }
   // Wrapper around operator delete
   static void delete_L1MuDTExtLut(void *p) {
      delete ((::L1MuDTExtLut*)p);
   }
   static void deleteArray_L1MuDTExtLut(void *p) {
      delete [] ((::L1MuDTExtLut*)p);
   }
   static void destruct_L1MuDTExtLut(void *p) {
      typedef ::L1MuDTExtLut current_t;
      ((current_t*)p)->~current_t();
   }
} // end of namespace ROOT for class ::L1MuDTExtLut

namespace ROOT {
   // Wrappers around operator new
   static void *new_L1MuDTPhiLut(void *p) {
      return  p ? new(p) ::L1MuDTPhiLut : new ::L1MuDTPhiLut;
   }
   static void *newArray_L1MuDTPhiLut(Long_t nElements, void *p) {
      return p ? new(p) ::L1MuDTPhiLut[nElements] : new ::L1MuDTPhiLut[nElements];
   }
   // Wrapper around operator delete
   static void delete_L1MuDTPhiLut(void *p) {
      delete ((::L1MuDTPhiLut*)p);
   }
   static void deleteArray_L1MuDTPhiLut(void *p) {
      delete [] ((::L1MuDTPhiLut*)p);
   }
   static void destruct_L1MuDTPhiLut(void *p) {
      typedef ::L1MuDTPhiLut current_t;
      ((current_t*)p)->~current_t();
   }
} // end of namespace ROOT for class ::L1MuDTPhiLut

namespace ROOT {
   // Wrappers around operator new
   static void *new_L1MuDTPtaLut(void *p) {
      return  p ? new(p) ::L1MuDTPtaLut : new ::L1MuDTPtaLut;
   }
   static void *newArray_L1MuDTPtaLut(Long_t nElements, void *p) {
      return p ? new(p) ::L1MuDTPtaLut[nElements] : new ::L1MuDTPtaLut[nElements];
   }
   // Wrapper around operator delete
   static void delete_L1MuDTPtaLut(void *p) {
      delete ((::L1MuDTPtaLut*)p);
   }
   static void deleteArray_L1MuDTPtaLut(void *p) {
      delete [] ((::L1MuDTPtaLut*)p);
   }
   static void destruct_L1MuDTPtaLut(void *p) {
      typedef ::L1MuDTPtaLut current_t;
      ((current_t*)p)->~current_t();
   }
} // end of namespace ROOT for class ::L1MuDTPtaLut

namespace ROOT {
   // Wrappers around operator new
   static void *new_L1MuDTEtaPattern(void *p) {
      return  p ? new(p) ::L1MuDTEtaPattern : new ::L1MuDTEtaPattern;
   }
   static void *newArray_L1MuDTEtaPattern(Long_t nElements, void *p) {
      return p ? new(p) ::L1MuDTEtaPattern[nElements] : new ::L1MuDTEtaPattern[nElements];
   }
   // Wrapper around operator delete
   static void delete_L1MuDTEtaPattern(void *p) {
      delete ((::L1MuDTEtaPattern*)p);
   }
   static void deleteArray_L1MuDTEtaPattern(void *p) {
      delete [] ((::L1MuDTEtaPattern*)p);
   }
   static void destruct_L1MuDTEtaPattern(void *p) {
      typedef ::L1MuDTEtaPattern current_t;
      ((current_t*)p)->~current_t();
   }
} // end of namespace ROOT for class ::L1MuDTEtaPattern

namespace ROOT {
   // Wrappers around operator new
   static void *new_pairlEshortcOL1MuDTEtaPatterngR(void *p) {
      return  p ? ::new((::ROOT::Internal::TOperatorNewHelper*)p) pair<short,L1MuDTEtaPattern> : new pair<short,L1MuDTEtaPattern>;
   }
   static void *newArray_pairlEshortcOL1MuDTEtaPatterngR(Long_t nElements, void *p) {
      return p ? ::new((::ROOT::Internal::TOperatorNewHelper*)p) pair<short,L1MuDTEtaPattern>[nElements] : new pair<short,L1MuDTEtaPattern>[nElements];
   }
   // Wrapper around operator delete
   static void delete_pairlEshortcOL1MuDTEtaPatterngR(void *p) {
      delete ((pair<short,L1MuDTEtaPattern>*)p);
   }
   static void deleteArray_pairlEshortcOL1MuDTEtaPatterngR(void *p) {
      delete [] ((pair<short,L1MuDTEtaPattern>*)p);
   }
   static void destruct_pairlEshortcOL1MuDTEtaPatterngR(void *p) {
      typedef pair<short,L1MuDTEtaPattern> current_t;
      ((current_t*)p)->~current_t();
   }
} // end of namespace ROOT for class pair<short,L1MuDTEtaPattern>

namespace ROOT {
   // Wrappers around operator new
   static void *new_pairlEconstsPshortcOL1MuDTEtaPatterngR(void *p) {
      return  p ? ::new((::ROOT::Internal::TOperatorNewHelper*)p) pair<const short,L1MuDTEtaPattern> : new pair<const short,L1MuDTEtaPattern>;
   }
   static void *newArray_pairlEconstsPshortcOL1MuDTEtaPatterngR(Long_t nElements, void *p) {
      return p ? ::new((::ROOT::Internal::TOperatorNewHelper*)p) pair<const short,L1MuDTEtaPattern>[nElements] : new pair<const short,L1MuDTEtaPattern>[nElements];
   }
   // Wrapper around operator delete
   static void delete_pairlEconstsPshortcOL1MuDTEtaPatterngR(void *p) {
      delete ((pair<const short,L1MuDTEtaPattern>*)p);
   }
   static void deleteArray_pairlEconstsPshortcOL1MuDTEtaPatterngR(void *p) {
      delete [] ((pair<const short,L1MuDTEtaPattern>*)p);
   }
   static void destruct_pairlEconstsPshortcOL1MuDTEtaPatterngR(void *p) {
      typedef pair<const short,L1MuDTEtaPattern> current_t;
      ((current_t*)p)->~current_t();
   }
} // end of namespace ROOT for class pair<const short,L1MuDTEtaPattern>

namespace ROOT {
   // Wrappers around operator new
   static void *new_L1MuDTEtaPatternLut(void *p) {
      return  p ? new(p) ::L1MuDTEtaPatternLut : new ::L1MuDTEtaPatternLut;
   }
   static void *newArray_L1MuDTEtaPatternLut(Long_t nElements, void *p) {
      return p ? new(p) ::L1MuDTEtaPatternLut[nElements] : new ::L1MuDTEtaPatternLut[nElements];
   }
   // Wrapper around operator delete
   static void delete_L1MuDTEtaPatternLut(void *p) {
      delete ((::L1MuDTEtaPatternLut*)p);
   }
   static void deleteArray_L1MuDTEtaPatternLut(void *p) {
      delete [] ((::L1MuDTEtaPatternLut*)p);
   }
   static void destruct_L1MuDTEtaPatternLut(void *p) {
      typedef ::L1MuDTEtaPatternLut current_t;
      ((current_t*)p)->~current_t();
   }
} // end of namespace ROOT for class ::L1MuDTEtaPatternLut

namespace ROOT {
   // Wrappers around operator new
   static void *new_L1MuDTQualPatternLut(void *p) {
      return  p ? new(p) ::L1MuDTQualPatternLut : new ::L1MuDTQualPatternLut;
   }
   static void *newArray_L1MuDTQualPatternLut(Long_t nElements, void *p) {
      return p ? new(p) ::L1MuDTQualPatternLut[nElements] : new ::L1MuDTQualPatternLut[nElements];
   }
   // Wrapper around operator delete
   static void delete_L1MuDTQualPatternLut(void *p) {
      delete ((::L1MuDTQualPatternLut*)p);
   }
   static void deleteArray_L1MuDTQualPatternLut(void *p) {
      delete [] ((::L1MuDTQualPatternLut*)p);
   }
   static void destruct_L1MuDTQualPatternLut(void *p) {
      typedef ::L1MuDTQualPatternLut current_t;
      ((current_t*)p)->~current_t();
   }
} // end of namespace ROOT for class ::L1MuDTQualPatternLut

namespace ROOT {
   // Wrappers around operator new
   static void *new_L1MuDTTFParameters(void *p) {
      return  p ? new(p) ::L1MuDTTFParameters : new ::L1MuDTTFParameters;
   }
   static void *newArray_L1MuDTTFParameters(Long_t nElements, void *p) {
      return p ? new(p) ::L1MuDTTFParameters[nElements] : new ::L1MuDTTFParameters[nElements];
   }
   // Wrapper around operator delete
   static void delete_L1MuDTTFParameters(void *p) {
      delete ((::L1MuDTTFParameters*)p);
   }
   static void deleteArray_L1MuDTTFParameters(void *p) {
      delete [] ((::L1MuDTTFParameters*)p);
   }
   static void destruct_L1MuDTTFParameters(void *p) {
      typedef ::L1MuDTTFParameters current_t;
      ((current_t*)p)->~current_t();
   }
} // end of namespace ROOT for class ::L1MuDTTFParameters

namespace ROOT {
   // Wrappers around operator new
   static void *new_L1MuDTTFMasks(void *p) {
      return  p ? new(p) ::L1MuDTTFMasks : new ::L1MuDTTFMasks;
   }
   static void *newArray_L1MuDTTFMasks(Long_t nElements, void *p) {
      return p ? new(p) ::L1MuDTTFMasks[nElements] : new ::L1MuDTTFMasks[nElements];
   }
   // Wrapper around operator delete
   static void delete_L1MuDTTFMasks(void *p) {
      delete ((::L1MuDTTFMasks*)p);
   }
   static void deleteArray_L1MuDTTFMasks(void *p) {
      delete [] ((::L1MuDTTFMasks*)p);
   }
   static void destruct_L1MuDTTFMasks(void *p) {
      typedef ::L1MuDTTFMasks current_t;
      ((current_t*)p)->~current_t();
   }
} // end of namespace ROOT for class ::L1MuDTTFMasks

namespace ROOT {
   // Wrappers around operator new
   static void *new_L1MuCSCTFConfiguration(void *p) {
      return  p ? new(p) ::L1MuCSCTFConfiguration : new ::L1MuCSCTFConfiguration;
   }
   static void *newArray_L1MuCSCTFConfiguration(Long_t nElements, void *p) {
      return p ? new(p) ::L1MuCSCTFConfiguration[nElements] : new ::L1MuCSCTFConfiguration[nElements];
   }
   // Wrapper around operator delete
   static void delete_L1MuCSCTFConfiguration(void *p) {
      delete ((::L1MuCSCTFConfiguration*)p);
   }
   static void deleteArray_L1MuCSCTFConfiguration(void *p) {
      delete [] ((::L1MuCSCTFConfiguration*)p);
   }
   static void destruct_L1MuCSCTFConfiguration(void *p) {
      typedef ::L1MuCSCTFConfiguration current_t;
      ((current_t*)p)->~current_t();
   }
} // end of namespace ROOT for class ::L1MuCSCTFConfiguration

namespace ROOT {
   // Wrappers around operator new
   static void *new_L1MuCSCTFAlignment(void *p) {
      return  p ? new(p) ::L1MuCSCTFAlignment : new ::L1MuCSCTFAlignment;
   }
   static void *newArray_L1MuCSCTFAlignment(Long_t nElements, void *p) {
      return p ? new(p) ::L1MuCSCTFAlignment[nElements] : new ::L1MuCSCTFAlignment[nElements];
   }
   // Wrapper around operator delete
   static void delete_L1MuCSCTFAlignment(void *p) {
      delete ((::L1MuCSCTFAlignment*)p);
   }
   static void deleteArray_L1MuCSCTFAlignment(void *p) {
      delete [] ((::L1MuCSCTFAlignment*)p);
   }
   static void destruct_L1MuCSCTFAlignment(void *p) {
      typedef ::L1MuCSCTFAlignment current_t;
      ((current_t*)p)->~current_t();
   }
} // end of namespace ROOT for class ::L1MuCSCTFAlignment

namespace ROOT {
   // Wrappers around operator new
   static void *new_L1MuCSCPtLut(void *p) {
      return  p ? new(p) ::L1MuCSCPtLut : new ::L1MuCSCPtLut;
   }
   static void *newArray_L1MuCSCPtLut(Long_t nElements, void *p) {
      return p ? new(p) ::L1MuCSCPtLut[nElements] : new ::L1MuCSCPtLut[nElements];
   }
   // Wrapper around operator delete
   static void delete_L1MuCSCPtLut(void *p) {
      delete ((::L1MuCSCPtLut*)p);
   }
   static void deleteArray_L1MuCSCPtLut(void *p) {
      delete [] ((::L1MuCSCPtLut*)p);
   }
   static void destruct_L1MuCSCPtLut(void *p) {
      typedef ::L1MuCSCPtLut current_t;
      ((current_t*)p)->~current_t();
   }
} // end of namespace ROOT for class ::L1MuCSCPtLut

namespace ROOT {
   // Wrappers around operator new
   static void *new_L1RPCConfig(void *p) {
      return  p ? new(p) ::L1RPCConfig : new ::L1RPCConfig;
   }
   static void *newArray_L1RPCConfig(Long_t nElements, void *p) {
      return p ? new(p) ::L1RPCConfig[nElements] : new ::L1RPCConfig[nElements];
   }
   // Wrapper around operator delete
   static void delete_L1RPCConfig(void *p) {
      delete ((::L1RPCConfig*)p);
   }
   static void deleteArray_L1RPCConfig(void *p) {
      delete [] ((::L1RPCConfig*)p);
   }
   static void destruct_L1RPCConfig(void *p) {
      typedef ::L1RPCConfig current_t;
      ((current_t*)p)->~current_t();
   }
} // end of namespace ROOT for class ::L1RPCConfig

namespace ROOT {
   // Wrappers around operator new
   static void *new_RPCPattern(void *p) {
      return  p ? new(p) ::RPCPattern : new ::RPCPattern;
   }
   static void *newArray_RPCPattern(Long_t nElements, void *p) {
      return p ? new(p) ::RPCPattern[nElements] : new ::RPCPattern[nElements];
   }
   // Wrapper around operator delete
   static void delete_RPCPattern(void *p) {
      delete ((::RPCPattern*)p);
   }
   static void deleteArray_RPCPattern(void *p) {
      delete [] ((::RPCPattern*)p);
   }
   static void destruct_RPCPattern(void *p) {
      typedef ::RPCPattern current_t;
      ((current_t*)p)->~current_t();
   }
} // end of namespace ROOT for class ::RPCPattern

namespace ROOT {
   // Wrappers around operator new
   static void *new_RPCPatterncLcLRPCLogicalStrip(void *p) {
      return  p ? ::new((::ROOT::Internal::TOperatorNewHelper*)p) ::RPCPattern::RPCLogicalStrip : new ::RPCPattern::RPCLogicalStrip;
   }
   static void *newArray_RPCPatterncLcLRPCLogicalStrip(Long_t nElements, void *p) {
      return p ? ::new((::ROOT::Internal::TOperatorNewHelper*)p) ::RPCPattern::RPCLogicalStrip[nElements] : new ::RPCPattern::RPCLogicalStrip[nElements];
   }
   // Wrapper around operator delete
   static void delete_RPCPatterncLcLRPCLogicalStrip(void *p) {
      delete ((::RPCPattern::RPCLogicalStrip*)p);
   }
   static void deleteArray_RPCPatterncLcLRPCLogicalStrip(void *p) {
      delete [] ((::RPCPattern::RPCLogicalStrip*)p);
   }
   static void destruct_RPCPatterncLcLRPCLogicalStrip(void *p) {
      typedef ::RPCPattern::RPCLogicalStrip current_t;
      ((current_t*)p)->~current_t();
   }
} // end of namespace ROOT for class ::RPCPattern::RPCLogicalStrip

namespace ROOT {
   // Wrappers around operator new
   static void *new_RPCPatterncLcLTQuality(void *p) {
      return  p ? ::new((::ROOT::Internal::TOperatorNewHelper*)p) ::RPCPattern::TQuality : new ::RPCPattern::TQuality;
   }
   static void *newArray_RPCPatterncLcLTQuality(Long_t nElements, void *p) {
      return p ? ::new((::ROOT::Internal::TOperatorNewHelper*)p) ::RPCPattern::TQuality[nElements] : new ::RPCPattern::TQuality[nElements];
   }
   // Wrapper around operator delete
   static void delete_RPCPatterncLcLTQuality(void *p) {
      delete ((::RPCPattern::TQuality*)p);
   }
   static void deleteArray_RPCPatterncLcLTQuality(void *p) {
      delete [] ((::RPCPattern::TQuality*)p);
   }
   static void destruct_RPCPatterncLcLTQuality(void *p) {
      typedef ::RPCPattern::TQuality current_t;
      ((current_t*)p)->~current_t();
   }
} // end of namespace ROOT for class ::RPCPattern::TQuality

namespace ROOT {
   // Wrappers around operator new
   static void *new_L1RPCConeDefinition(void *p) {
      return  p ? new(p) ::L1RPCConeDefinition : new ::L1RPCConeDefinition;
   }
   static void *newArray_L1RPCConeDefinition(Long_t nElements, void *p) {
      return p ? new(p) ::L1RPCConeDefinition[nElements] : new ::L1RPCConeDefinition[nElements];
   }
   // Wrapper around operator delete
   static void delete_L1RPCConeDefinition(void *p) {
      delete ((::L1RPCConeDefinition*)p);
   }
   static void deleteArray_L1RPCConeDefinition(void *p) {
      delete [] ((::L1RPCConeDefinition*)p);
   }
   static void destruct_L1RPCConeDefinition(void *p) {
      typedef ::L1RPCConeDefinition current_t;
      ((current_t*)p)->~current_t();
   }
} // end of namespace ROOT for class ::L1RPCConeDefinition

namespace ROOT {
   // Wrappers around operator new
   static void *new_L1RPCConeDefinitioncLcLTLPSize(void *p) {
      return  p ? ::new((::ROOT::Internal::TOperatorNewHelper*)p) ::L1RPCConeDefinition::TLPSize : new ::L1RPCConeDefinition::TLPSize;
   }
   static void *newArray_L1RPCConeDefinitioncLcLTLPSize(Long_t nElements, void *p) {
      return p ? ::new((::ROOT::Internal::TOperatorNewHelper*)p) ::L1RPCConeDefinition::TLPSize[nElements] : new ::L1RPCConeDefinition::TLPSize[nElements];
   }
   // Wrapper around operator delete
   static void delete_L1RPCConeDefinitioncLcLTLPSize(void *p) {
      delete ((::L1RPCConeDefinition::TLPSize*)p);
   }
   static void deleteArray_L1RPCConeDefinitioncLcLTLPSize(void *p) {
      delete [] ((::L1RPCConeDefinition::TLPSize*)p);
   }
   static void destruct_L1RPCConeDefinitioncLcLTLPSize(void *p) {
      typedef ::L1RPCConeDefinition::TLPSize current_t;
      ((current_t*)p)->~current_t();
   }
} // end of namespace ROOT for class ::L1RPCConeDefinition::TLPSize

namespace ROOT {
   // Wrappers around operator new
   static void *new_L1RPCConeDefinitioncLcLTRingToTower(void *p) {
      return  p ? ::new((::ROOT::Internal::TOperatorNewHelper*)p) ::L1RPCConeDefinition::TRingToTower : new ::L1RPCConeDefinition::TRingToTower;
   }
   static void *newArray_L1RPCConeDefinitioncLcLTRingToTower(Long_t nElements, void *p) {
      return p ? ::new((::ROOT::Internal::TOperatorNewHelper*)p) ::L1RPCConeDefinition::TRingToTower[nElements] : new ::L1RPCConeDefinition::TRingToTower[nElements];
   }
   // Wrapper around operator delete
   static void delete_L1RPCConeDefinitioncLcLTRingToTower(void *p) {
      delete ((::L1RPCConeDefinition::TRingToTower*)p);
   }
   static void deleteArray_L1RPCConeDefinitioncLcLTRingToTower(void *p) {
      delete [] ((::L1RPCConeDefinition::TRingToTower*)p);
   }
   static void destruct_L1RPCConeDefinitioncLcLTRingToTower(void *p) {
      typedef ::L1RPCConeDefinition::TRingToTower current_t;
      ((current_t*)p)->~current_t();
   }
} // end of namespace ROOT for class ::L1RPCConeDefinition::TRingToTower

namespace ROOT {
   // Wrappers around operator new
   static void *new_L1RPCConeDefinitioncLcLTRingToLP(void *p) {
      return  p ? ::new((::ROOT::Internal::TOperatorNewHelper*)p) ::L1RPCConeDefinition::TRingToLP : new ::L1RPCConeDefinition::TRingToLP;
   }
   static void *newArray_L1RPCConeDefinitioncLcLTRingToLP(Long_t nElements, void *p) {
      return p ? ::new((::ROOT::Internal::TOperatorNewHelper*)p) ::L1RPCConeDefinition::TRingToLP[nElements] : new ::L1RPCConeDefinition::TRingToLP[nElements];
   }
   // Wrapper around operator delete
   static void delete_L1RPCConeDefinitioncLcLTRingToLP(void *p) {
      delete ((::L1RPCConeDefinition::TRingToLP*)p);
   }
   static void deleteArray_L1RPCConeDefinitioncLcLTRingToLP(void *p) {
      delete [] ((::L1RPCConeDefinition::TRingToLP*)p);
   }
   static void destruct_L1RPCConeDefinitioncLcLTRingToLP(void *p) {
      typedef ::L1RPCConeDefinition::TRingToLP current_t;
      ((current_t*)p)->~current_t();
   }
} // end of namespace ROOT for class ::L1RPCConeDefinition::TRingToLP

namespace ROOT {
   // Wrappers around operator new
   static void *new_L1RPCBxOrConfig(void *p) {
      return  p ? new(p) ::L1RPCBxOrConfig : new ::L1RPCBxOrConfig;
   }
   static void *newArray_L1RPCBxOrConfig(Long_t nElements, void *p) {
      return p ? new(p) ::L1RPCBxOrConfig[nElements] : new ::L1RPCBxOrConfig[nElements];
   }
   // Wrapper around operator delete
   static void delete_L1RPCBxOrConfig(void *p) {
      delete ((::L1RPCBxOrConfig*)p);
   }
   static void deleteArray_L1RPCBxOrConfig(void *p) {
      delete [] ((::L1RPCBxOrConfig*)p);
   }
   static void destruct_L1RPCBxOrConfig(void *p) {
      typedef ::L1RPCBxOrConfig current_t;
      ((current_t*)p)->~current_t();
   }
} // end of namespace ROOT for class ::L1RPCBxOrConfig

namespace ROOT {
   // Wrappers around operator new
   static void *new_L1RPCHsbConfig(void *p) {
      return  p ? new(p) ::L1RPCHsbConfig : new ::L1RPCHsbConfig;
   }
   static void *newArray_L1RPCHsbConfig(Long_t nElements, void *p) {
      return p ? new(p) ::L1RPCHsbConfig[nElements] : new ::L1RPCHsbConfig[nElements];
   }
   // Wrapper around operator delete
   static void delete_L1RPCHsbConfig(void *p) {
      delete ((::L1RPCHsbConfig*)p);
   }
   static void deleteArray_L1RPCHsbConfig(void *p) {
      delete [] ((::L1RPCHsbConfig*)p);
   }
   static void destruct_L1RPCHsbConfig(void *p) {
      typedef ::L1RPCHsbConfig current_t;
      ((current_t*)p)->~current_t();
   }
} // end of namespace ROOT for class ::L1RPCHsbConfig

namespace ROOT {
   // Wrappers around operator new
   static void *new_L1TriggerKey(void *p) {
      return  p ? new(p) ::L1TriggerKey : new ::L1TriggerKey;
   }
   static void *newArray_L1TriggerKey(Long_t nElements, void *p) {
      return p ? new(p) ::L1TriggerKey[nElements] : new ::L1TriggerKey[nElements];
   }
   // Wrapper around operator delete
   static void delete_L1TriggerKey(void *p) {
      delete ((::L1TriggerKey*)p);
   }
   static void deleteArray_L1TriggerKey(void *p) {
      delete [] ((::L1TriggerKey*)p);
   }
   static void destruct_L1TriggerKey(void *p) {
      typedef ::L1TriggerKey current_t;
      ((current_t*)p)->~current_t();
   }
} // end of namespace ROOT for class ::L1TriggerKey

namespace ROOT {
   // Wrappers around operator new
   static void *new_L1TriggerKeyList(void *p) {
      return  p ? new(p) ::L1TriggerKeyList : new ::L1TriggerKeyList;
   }
   static void *newArray_L1TriggerKeyList(Long_t nElements, void *p) {
      return p ? new(p) ::L1TriggerKeyList[nElements] : new ::L1TriggerKeyList[nElements];
   }
   // Wrapper around operator delete
   static void delete_L1TriggerKeyList(void *p) {
      delete ((::L1TriggerKeyList*)p);
   }
   static void deleteArray_L1TriggerKeyList(void *p) {
      delete [] ((::L1TriggerKeyList*)p);
   }
   static void destruct_L1TriggerKeyList(void *p) {
      typedef ::L1TriggerKeyList current_t;
      ((current_t*)p)->~current_t();
   }
} // end of namespace ROOT for class ::L1TriggerKeyList

namespace ROOT {
   // Wrappers around operator new
   static void *new_L1RCTParameters(void *p) {
      return  p ? new(p) ::L1RCTParameters : new ::L1RCTParameters;
   }
   static void *newArray_L1RCTParameters(Long_t nElements, void *p) {
      return p ? new(p) ::L1RCTParameters[nElements] : new ::L1RCTParameters[nElements];
   }
   // Wrapper around operator delete
   static void delete_L1RCTParameters(void *p) {
      delete ((::L1RCTParameters*)p);
   }
   static void deleteArray_L1RCTParameters(void *p) {
      delete [] ((::L1RCTParameters*)p);
   }
   static void destruct_L1RCTParameters(void *p) {
      typedef ::L1RCTParameters current_t;
      ((current_t*)p)->~current_t();
   }
} // end of namespace ROOT for class ::L1RCTParameters

namespace ROOT {
   // Wrappers around operator new
   static void *new_L1RCTChannelMask(void *p) {
      return  p ? new(p) ::L1RCTChannelMask : new ::L1RCTChannelMask;
   }
   static void *newArray_L1RCTChannelMask(Long_t nElements, void *p) {
      return p ? new(p) ::L1RCTChannelMask[nElements] : new ::L1RCTChannelMask[nElements];
   }
   // Wrapper around operator delete
   static void delete_L1RCTChannelMask(void *p) {
      delete ((::L1RCTChannelMask*)p);
   }
   static void deleteArray_L1RCTChannelMask(void *p) {
      delete [] ((::L1RCTChannelMask*)p);
   }
   static void destruct_L1RCTChannelMask(void *p) {
      typedef ::L1RCTChannelMask current_t;
      ((current_t*)p)->~current_t();
   }
} // end of namespace ROOT for class ::L1RCTChannelMask

namespace ROOT {
   // Wrappers around operator new
   static void *new_L1RCTNoisyChannelMask(void *p) {
      return  p ? new(p) ::L1RCTNoisyChannelMask : new ::L1RCTNoisyChannelMask;
   }
   static void *newArray_L1RCTNoisyChannelMask(Long_t nElements, void *p) {
      return p ? new(p) ::L1RCTNoisyChannelMask[nElements] : new ::L1RCTNoisyChannelMask[nElements];
   }
   // Wrapper around operator delete
   static void delete_L1RCTNoisyChannelMask(void *p) {
      delete ((::L1RCTNoisyChannelMask*)p);
   }
   static void deleteArray_L1RCTNoisyChannelMask(void *p) {
      delete [] ((::L1RCTNoisyChannelMask*)p);
   }
   static void destruct_L1RCTNoisyChannelMask(void *p) {
      typedef ::L1RCTNoisyChannelMask current_t;
      ((current_t*)p)->~current_t();
   }
} // end of namespace ROOT for class ::L1RCTNoisyChannelMask

namespace ROOT {
   // Wrappers around operator new
   static void *new_L1CaloEcalScale(void *p) {
      return  p ? new(p) ::L1CaloEcalScale : new ::L1CaloEcalScale;
   }
   static void *newArray_L1CaloEcalScale(Long_t nElements, void *p) {
      return p ? new(p) ::L1CaloEcalScale[nElements] : new ::L1CaloEcalScale[nElements];
   }
   // Wrapper around operator delete
   static void delete_L1CaloEcalScale(void *p) {
      delete ((::L1CaloEcalScale*)p);
   }
   static void deleteArray_L1CaloEcalScale(void *p) {
      delete [] ((::L1CaloEcalScale*)p);
   }
   static void destruct_L1CaloEcalScale(void *p) {
      typedef ::L1CaloEcalScale current_t;
      ((current_t*)p)->~current_t();
   }
} // end of namespace ROOT for class ::L1CaloEcalScale

namespace ROOT {
   // Wrappers around operator new
   static void *new_L1CaloHcalScale(void *p) {
      return  p ? new(p) ::L1CaloHcalScale : new ::L1CaloHcalScale;
   }
   static void *newArray_L1CaloHcalScale(Long_t nElements, void *p) {
      return p ? new(p) ::L1CaloHcalScale[nElements] : new ::L1CaloHcalScale[nElements];
   }
   // Wrapper around operator delete
   static void delete_L1CaloHcalScale(void *p) {
      delete ((::L1CaloHcalScale*)p);
   }
   static void deleteArray_L1CaloHcalScale(void *p) {
      delete [] ((::L1CaloHcalScale*)p);
   }
   static void destruct_L1CaloHcalScale(void *p) {
      typedef ::L1CaloHcalScale current_t;
      ((current_t*)p)->~current_t();
   }
} // end of namespace ROOT for class ::L1CaloHcalScale

namespace ROOT {
   // Wrappers around operator new
   static void *new_L1GtStableParameters(void *p) {
      return  p ? new(p) ::L1GtStableParameters : new ::L1GtStableParameters;
   }
   static void *newArray_L1GtStableParameters(Long_t nElements, void *p) {
      return p ? new(p) ::L1GtStableParameters[nElements] : new ::L1GtStableParameters[nElements];
   }
   // Wrapper around operator delete
   static void delete_L1GtStableParameters(void *p) {
      delete ((::L1GtStableParameters*)p);
   }
   static void deleteArray_L1GtStableParameters(void *p) {
      delete [] ((::L1GtStableParameters*)p);
   }
   static void destruct_L1GtStableParameters(void *p) {
      typedef ::L1GtStableParameters current_t;
      ((current_t*)p)->~current_t();
   }
} // end of namespace ROOT for class ::L1GtStableParameters

namespace ROOT {
   // Wrappers around operator new
   static void *new_GlobalStableParameters(void *p) {
      return  p ? new(p) ::GlobalStableParameters : new ::GlobalStableParameters;
   }
   static void *newArray_GlobalStableParameters(Long_t nElements, void *p) {
      return p ? new(p) ::GlobalStableParameters[nElements] : new ::GlobalStableParameters[nElements];
   }
   // Wrapper around operator delete
   static void delete_GlobalStableParameters(void *p) {
      delete ((::GlobalStableParameters*)p);
   }
   static void deleteArray_GlobalStableParameters(void *p) {
      delete [] ((::GlobalStableParameters*)p);
   }
   static void destruct_GlobalStableParameters(void *p) {
      typedef ::GlobalStableParameters current_t;
      ((current_t*)p)->~current_t();
   }
} // end of namespace ROOT for class ::GlobalStableParameters

namespace ROOT {
   // Wrappers around operator new
   static void *new_L1GtParameters(void *p) {
      return  p ? new(p) ::L1GtParameters : new ::L1GtParameters;
   }
   static void *newArray_L1GtParameters(Long_t nElements, void *p) {
      return p ? new(p) ::L1GtParameters[nElements] : new ::L1GtParameters[nElements];
   }
   // Wrapper around operator delete
   static void delete_L1GtParameters(void *p) {
      delete ((::L1GtParameters*)p);
   }
   static void deleteArray_L1GtParameters(void *p) {
      delete [] ((::L1GtParameters*)p);
   }
   static void destruct_L1GtParameters(void *p) {
      typedef ::L1GtParameters current_t;
      ((current_t*)p)->~current_t();
   }
} // end of namespace ROOT for class ::L1GtParameters

namespace ROOT {
   // Wrappers around operator new
   static void *new_L1GtPrescaleFactors(void *p) {
      return  p ? new(p) ::L1GtPrescaleFactors : new ::L1GtPrescaleFactors;
   }
   static void *newArray_L1GtPrescaleFactors(Long_t nElements, void *p) {
      return p ? new(p) ::L1GtPrescaleFactors[nElements] : new ::L1GtPrescaleFactors[nElements];
   }
   // Wrapper around operator delete
   static void delete_L1GtPrescaleFactors(void *p) {
      delete ((::L1GtPrescaleFactors*)p);
   }
   static void deleteArray_L1GtPrescaleFactors(void *p) {
      delete [] ((::L1GtPrescaleFactors*)p);
   }
   static void destruct_L1GtPrescaleFactors(void *p) {
      typedef ::L1GtPrescaleFactors current_t;
      ((current_t*)p)->~current_t();
   }
} // end of namespace ROOT for class ::L1GtPrescaleFactors

namespace ROOT {
   // Wrappers around operator new
   static void *new_L1GtTriggerMask(void *p) {
      return  p ? new(p) ::L1GtTriggerMask : new ::L1GtTriggerMask;
   }
   static void *newArray_L1GtTriggerMask(Long_t nElements, void *p) {
      return p ? new(p) ::L1GtTriggerMask[nElements] : new ::L1GtTriggerMask[nElements];
   }
   // Wrapper around operator delete
   static void delete_L1GtTriggerMask(void *p) {
      delete ((::L1GtTriggerMask*)p);
   }
   static void deleteArray_L1GtTriggerMask(void *p) {
      delete [] ((::L1GtTriggerMask*)p);
   }
   static void destruct_L1GtTriggerMask(void *p) {
      typedef ::L1GtTriggerMask current_t;
      ((current_t*)p)->~current_t();
   }
} // end of namespace ROOT for class ::L1GtTriggerMask

namespace ROOT {
   // Wrappers around operator new
   static void *new_L1GtBoard(void *p) {
      return  p ? new(p) ::L1GtBoard : new ::L1GtBoard;
   }
   static void *newArray_L1GtBoard(Long_t nElements, void *p) {
      return p ? new(p) ::L1GtBoard[nElements] : new ::L1GtBoard[nElements];
   }
   // Wrapper around operator delete
   static void delete_L1GtBoard(void *p) {
      delete ((::L1GtBoard*)p);
   }
   static void deleteArray_L1GtBoard(void *p) {
      delete [] ((::L1GtBoard*)p);
   }
   static void destruct_L1GtBoard(void *p) {
      typedef ::L1GtBoard current_t;
      ((current_t*)p)->~current_t();
   }
} // end of namespace ROOT for class ::L1GtBoard

namespace ROOT {
   // Wrappers around operator new
   static void *new_L1GtBoardMaps(void *p) {
      return  p ? new(p) ::L1GtBoardMaps : new ::L1GtBoardMaps;
   }
   static void *newArray_L1GtBoardMaps(Long_t nElements, void *p) {
      return p ? new(p) ::L1GtBoardMaps[nElements] : new ::L1GtBoardMaps[nElements];
   }
   // Wrapper around operator delete
   static void delete_L1GtBoardMaps(void *p) {
      delete ((::L1GtBoardMaps*)p);
   }
   static void deleteArray_L1GtBoardMaps(void *p) {
      delete [] ((::L1GtBoardMaps*)p);
   }
   static void destruct_L1GtBoardMaps(void *p) {
      typedef ::L1GtBoardMaps current_t;
      ((current_t*)p)->~current_t();
   }
} // end of namespace ROOT for class ::L1GtBoardMaps

namespace ROOT {
   // Wrappers around operator new
   static void *new_L1GtPsbConfig(void *p) {
      return  p ? new(p) ::L1GtPsbConfig : new ::L1GtPsbConfig;
   }
   static void *newArray_L1GtPsbConfig(Long_t nElements, void *p) {
      return p ? new(p) ::L1GtPsbConfig[nElements] : new ::L1GtPsbConfig[nElements];
   }
   // Wrapper around operator delete
   static void delete_L1GtPsbConfig(void *p) {
      delete ((::L1GtPsbConfig*)p);
   }
   static void deleteArray_L1GtPsbConfig(void *p) {
      delete [] ((::L1GtPsbConfig*)p);
   }
   static void destruct_L1GtPsbConfig(void *p) {
      typedef ::L1GtPsbConfig current_t;
      ((current_t*)p)->~current_t();
   }
} // end of namespace ROOT for class ::L1GtPsbConfig

namespace ROOT {
   // Wrappers around operator new
   static void *new_L1GtPsbSetup(void *p) {
      return  p ? new(p) ::L1GtPsbSetup : new ::L1GtPsbSetup;
   }
   static void *newArray_L1GtPsbSetup(Long_t nElements, void *p) {
      return p ? new(p) ::L1GtPsbSetup[nElements] : new ::L1GtPsbSetup[nElements];
   }
   // Wrapper around operator delete
   static void delete_L1GtPsbSetup(void *p) {
      delete ((::L1GtPsbSetup*)p);
   }
   static void deleteArray_L1GtPsbSetup(void *p) {
      delete [] ((::L1GtPsbSetup*)p);
   }
   static void destruct_L1GtPsbSetup(void *p) {
      typedef ::L1GtPsbSetup current_t;
      ((current_t*)p)->~current_t();
   }
} // end of namespace ROOT for class ::L1GtPsbSetup

namespace ROOT {
   // Wrappers around operator new
   static void *new_pairlEintcOvectorlEL1GtObjectgRsPgR(void *p) {
      return  p ? ::new((::ROOT::Internal::TOperatorNewHelper*)p) pair<int,vector<L1GtObject> > : new pair<int,vector<L1GtObject> >;
   }
   static void *newArray_pairlEintcOvectorlEL1GtObjectgRsPgR(Long_t nElements, void *p) {
      return p ? ::new((::ROOT::Internal::TOperatorNewHelper*)p) pair<int,vector<L1GtObject> >[nElements] : new pair<int,vector<L1GtObject> >[nElements];
   }
   // Wrapper around operator delete
   static void delete_pairlEintcOvectorlEL1GtObjectgRsPgR(void *p) {
      delete ((pair<int,vector<L1GtObject> >*)p);
   }
   static void deleteArray_pairlEintcOvectorlEL1GtObjectgRsPgR(void *p) {
      delete [] ((pair<int,vector<L1GtObject> >*)p);
   }
   static void destruct_pairlEintcOvectorlEL1GtObjectgRsPgR(void *p) {
      typedef pair<int,vector<L1GtObject> > current_t;
      ((current_t*)p)->~current_t();
   }
} // end of namespace ROOT for class pair<int,vector<L1GtObject> >

namespace ROOT {
   // Wrappers around operator new
   static void *new_pairlEconstsPintcOvectorlEL1GtObjectgRsPgR(void *p) {
      return  p ? ::new((::ROOT::Internal::TOperatorNewHelper*)p) pair<const int,vector<L1GtObject> > : new pair<const int,vector<L1GtObject> >;
   }
   static void *newArray_pairlEconstsPintcOvectorlEL1GtObjectgRsPgR(Long_t nElements, void *p) {
      return p ? ::new((::ROOT::Internal::TOperatorNewHelper*)p) pair<const int,vector<L1GtObject> >[nElements] : new pair<const int,vector<L1GtObject> >[nElements];
   }
   // Wrapper around operator delete
   static void delete_pairlEconstsPintcOvectorlEL1GtObjectgRsPgR(void *p) {
      delete ((pair<const int,vector<L1GtObject> >*)p);
   }
   static void deleteArray_pairlEconstsPintcOvectorlEL1GtObjectgRsPgR(void *p) {
      delete [] ((pair<const int,vector<L1GtObject> >*)p);
   }
   static void destruct_pairlEconstsPintcOvectorlEL1GtObjectgRsPgR(void *p) {
      typedef pair<const int,vector<L1GtObject> > current_t;
      ((current_t*)p)->~current_t();
   }
} // end of namespace ROOT for class pair<const int,vector<L1GtObject> >

namespace ROOT {
   // Wrappers around operator new
   static void *new_L1GtCondition(void *p) {
      return  p ? new(p) ::L1GtCondition : new ::L1GtCondition;
   }
   static void *newArray_L1GtCondition(Long_t nElements, void *p) {
      return p ? new(p) ::L1GtCondition[nElements] : new ::L1GtCondition[nElements];
   }
   // Wrapper around operator delete
   static void delete_L1GtCondition(void *p) {
      delete ((::L1GtCondition*)p);
   }
   static void deleteArray_L1GtCondition(void *p) {
      delete [] ((::L1GtCondition*)p);
   }
   static void destruct_L1GtCondition(void *p) {
      typedef ::L1GtCondition current_t;
      ((current_t*)p)->~current_t();
   }
} // end of namespace ROOT for class ::L1GtCondition

namespace ROOT {
   // Wrappers around operator new
   static void *new_L1GtMuonTemplate(void *p) {
      return  p ? new(p) ::L1GtMuonTemplate : new ::L1GtMuonTemplate;
   }
   static void *newArray_L1GtMuonTemplate(Long_t nElements, void *p) {
      return p ? new(p) ::L1GtMuonTemplate[nElements] : new ::L1GtMuonTemplate[nElements];
   }
   // Wrapper around operator delete
   static void delete_L1GtMuonTemplate(void *p) {
      delete ((::L1GtMuonTemplate*)p);
   }
   static void deleteArray_L1GtMuonTemplate(void *p) {
      delete [] ((::L1GtMuonTemplate*)p);
   }
   static void destruct_L1GtMuonTemplate(void *p) {
      typedef ::L1GtMuonTemplate current_t;
      ((current_t*)p)->~current_t();
   }
} // end of namespace ROOT for class ::L1GtMuonTemplate

namespace ROOT {
   // Wrappers around operator new
   static void *new_L1GtMuonTemplatecLcLObjectParameter(void *p) {
      return  p ? ::new((::ROOT::Internal::TOperatorNewHelper*)p) ::L1GtMuonTemplate::ObjectParameter : new ::L1GtMuonTemplate::ObjectParameter;
   }
   static void *newArray_L1GtMuonTemplatecLcLObjectParameter(Long_t nElements, void *p) {
      return p ? ::new((::ROOT::Internal::TOperatorNewHelper*)p) ::L1GtMuonTemplate::ObjectParameter[nElements] : new ::L1GtMuonTemplate::ObjectParameter[nElements];
   }
   // Wrapper around operator delete
   static void delete_L1GtMuonTemplatecLcLObjectParameter(void *p) {
      delete ((::L1GtMuonTemplate::ObjectParameter*)p);
   }
   static void deleteArray_L1GtMuonTemplatecLcLObjectParameter(void *p) {
      delete [] ((::L1GtMuonTemplate::ObjectParameter*)p);
   }
   static void destruct_L1GtMuonTemplatecLcLObjectParameter(void *p) {
      typedef ::L1GtMuonTemplate::ObjectParameter current_t;
      ((current_t*)p)->~current_t();
   }
} // end of namespace ROOT for class ::L1GtMuonTemplate::ObjectParameter

namespace ROOT {
   // Wrappers around operator new
   static void *new_L1GtMuonTemplatecLcLCorrelationParameter(void *p) {
      return  p ? ::new((::ROOT::Internal::TOperatorNewHelper*)p) ::L1GtMuonTemplate::CorrelationParameter : new ::L1GtMuonTemplate::CorrelationParameter;
   }
   static void *newArray_L1GtMuonTemplatecLcLCorrelationParameter(Long_t nElements, void *p) {
      return p ? ::new((::ROOT::Internal::TOperatorNewHelper*)p) ::L1GtMuonTemplate::CorrelationParameter[nElements] : new ::L1GtMuonTemplate::CorrelationParameter[nElements];
   }
   // Wrapper around operator delete
   static void delete_L1GtMuonTemplatecLcLCorrelationParameter(void *p) {
      delete ((::L1GtMuonTemplate::CorrelationParameter*)p);
   }
   static void deleteArray_L1GtMuonTemplatecLcLCorrelationParameter(void *p) {
      delete [] ((::L1GtMuonTemplate::CorrelationParameter*)p);
   }
   static void destruct_L1GtMuonTemplatecLcLCorrelationParameter(void *p) {
      typedef ::L1GtMuonTemplate::CorrelationParameter current_t;
      ((current_t*)p)->~current_t();
   }
} // end of namespace ROOT for class ::L1GtMuonTemplate::CorrelationParameter

namespace ROOT {
   // Wrappers around operator new
   static void *new_L1GtCaloTemplate(void *p) {
      return  p ? new(p) ::L1GtCaloTemplate : new ::L1GtCaloTemplate;
   }
   static void *newArray_L1GtCaloTemplate(Long_t nElements, void *p) {
      return p ? new(p) ::L1GtCaloTemplate[nElements] : new ::L1GtCaloTemplate[nElements];
   }
   // Wrapper around operator delete
   static void delete_L1GtCaloTemplate(void *p) {
      delete ((::L1GtCaloTemplate*)p);
   }
   static void deleteArray_L1GtCaloTemplate(void *p) {
      delete [] ((::L1GtCaloTemplate*)p);
   }
   static void destruct_L1GtCaloTemplate(void *p) {
      typedef ::L1GtCaloTemplate current_t;
      ((current_t*)p)->~current_t();
   }
} // end of namespace ROOT for class ::L1GtCaloTemplate

namespace ROOT {
   // Wrappers around operator new
   static void *new_L1GtCaloTemplatecLcLObjectParameter(void *p) {
      return  p ? ::new((::ROOT::Internal::TOperatorNewHelper*)p) ::L1GtCaloTemplate::ObjectParameter : new ::L1GtCaloTemplate::ObjectParameter;
   }
   static void *newArray_L1GtCaloTemplatecLcLObjectParameter(Long_t nElements, void *p) {
      return p ? ::new((::ROOT::Internal::TOperatorNewHelper*)p) ::L1GtCaloTemplate::ObjectParameter[nElements] : new ::L1GtCaloTemplate::ObjectParameter[nElements];
   }
   // Wrapper around operator delete
   static void delete_L1GtCaloTemplatecLcLObjectParameter(void *p) {
      delete ((::L1GtCaloTemplate::ObjectParameter*)p);
   }
   static void deleteArray_L1GtCaloTemplatecLcLObjectParameter(void *p) {
      delete [] ((::L1GtCaloTemplate::ObjectParameter*)p);
   }
   static void destruct_L1GtCaloTemplatecLcLObjectParameter(void *p) {
      typedef ::L1GtCaloTemplate::ObjectParameter current_t;
      ((current_t*)p)->~current_t();
   }
} // end of namespace ROOT for class ::L1GtCaloTemplate::ObjectParameter

namespace ROOT {
   // Wrappers around operator new
   static void *new_L1GtCaloTemplatecLcLCorrelationParameter(void *p) {
      return  p ? ::new((::ROOT::Internal::TOperatorNewHelper*)p) ::L1GtCaloTemplate::CorrelationParameter : new ::L1GtCaloTemplate::CorrelationParameter;
   }
   static void *newArray_L1GtCaloTemplatecLcLCorrelationParameter(Long_t nElements, void *p) {
      return p ? ::new((::ROOT::Internal::TOperatorNewHelper*)p) ::L1GtCaloTemplate::CorrelationParameter[nElements] : new ::L1GtCaloTemplate::CorrelationParameter[nElements];
   }
   // Wrapper around operator delete
   static void delete_L1GtCaloTemplatecLcLCorrelationParameter(void *p) {
      delete ((::L1GtCaloTemplate::CorrelationParameter*)p);
   }
   static void deleteArray_L1GtCaloTemplatecLcLCorrelationParameter(void *p) {
      delete [] ((::L1GtCaloTemplate::CorrelationParameter*)p);
   }
   static void destruct_L1GtCaloTemplatecLcLCorrelationParameter(void *p) {
      typedef ::L1GtCaloTemplate::CorrelationParameter current_t;
      ((current_t*)p)->~current_t();
   }
} // end of namespace ROOT for class ::L1GtCaloTemplate::CorrelationParameter

namespace ROOT {
   // Wrappers around operator new
   static void *new_L1GtEnergySumTemplate(void *p) {
      return  p ? new(p) ::L1GtEnergySumTemplate : new ::L1GtEnergySumTemplate;
   }
   static void *newArray_L1GtEnergySumTemplate(Long_t nElements, void *p) {
      return p ? new(p) ::L1GtEnergySumTemplate[nElements] : new ::L1GtEnergySumTemplate[nElements];
   }
   // Wrapper around operator delete
   static void delete_L1GtEnergySumTemplate(void *p) {
      delete ((::L1GtEnergySumTemplate*)p);
   }
   static void deleteArray_L1GtEnergySumTemplate(void *p) {
      delete [] ((::L1GtEnergySumTemplate*)p);
   }
   static void destruct_L1GtEnergySumTemplate(void *p) {
      typedef ::L1GtEnergySumTemplate current_t;
      ((current_t*)p)->~current_t();
   }
} // end of namespace ROOT for class ::L1GtEnergySumTemplate

namespace ROOT {
   // Wrappers around operator new
   static void *new_L1GtEnergySumTemplatecLcLObjectParameter(void *p) {
      return  p ? ::new((::ROOT::Internal::TOperatorNewHelper*)p) ::L1GtEnergySumTemplate::ObjectParameter : new ::L1GtEnergySumTemplate::ObjectParameter;
   }
   static void *newArray_L1GtEnergySumTemplatecLcLObjectParameter(Long_t nElements, void *p) {
      return p ? ::new((::ROOT::Internal::TOperatorNewHelper*)p) ::L1GtEnergySumTemplate::ObjectParameter[nElements] : new ::L1GtEnergySumTemplate::ObjectParameter[nElements];
   }
   // Wrapper around operator delete
   static void delete_L1GtEnergySumTemplatecLcLObjectParameter(void *p) {
      delete ((::L1GtEnergySumTemplate::ObjectParameter*)p);
   }
   static void deleteArray_L1GtEnergySumTemplatecLcLObjectParameter(void *p) {
      delete [] ((::L1GtEnergySumTemplate::ObjectParameter*)p);
   }
   static void destruct_L1GtEnergySumTemplatecLcLObjectParameter(void *p) {
      typedef ::L1GtEnergySumTemplate::ObjectParameter current_t;
      ((current_t*)p)->~current_t();
   }
} // end of namespace ROOT for class ::L1GtEnergySumTemplate::ObjectParameter

namespace ROOT {
   // Wrappers around operator new
   static void *new_L1GtJetCountsTemplate(void *p) {
      return  p ? new(p) ::L1GtJetCountsTemplate : new ::L1GtJetCountsTemplate;
   }
   static void *newArray_L1GtJetCountsTemplate(Long_t nElements, void *p) {
      return p ? new(p) ::L1GtJetCountsTemplate[nElements] : new ::L1GtJetCountsTemplate[nElements];
   }
   // Wrapper around operator delete
   static void delete_L1GtJetCountsTemplate(void *p) {
      delete ((::L1GtJetCountsTemplate*)p);
   }
   static void deleteArray_L1GtJetCountsTemplate(void *p) {
      delete [] ((::L1GtJetCountsTemplate*)p);
   }
   static void destruct_L1GtJetCountsTemplate(void *p) {
      typedef ::L1GtJetCountsTemplate current_t;
      ((current_t*)p)->~current_t();
   }
} // end of namespace ROOT for class ::L1GtJetCountsTemplate

namespace ROOT {
   // Wrappers around operator new
   static void *new_L1GtJetCountsTemplatecLcLObjectParameter(void *p) {
      return  p ? ::new((::ROOT::Internal::TOperatorNewHelper*)p) ::L1GtJetCountsTemplate::ObjectParameter : new ::L1GtJetCountsTemplate::ObjectParameter;
   }
   static void *newArray_L1GtJetCountsTemplatecLcLObjectParameter(Long_t nElements, void *p) {
      return p ? ::new((::ROOT::Internal::TOperatorNewHelper*)p) ::L1GtJetCountsTemplate::ObjectParameter[nElements] : new ::L1GtJetCountsTemplate::ObjectParameter[nElements];
   }
   // Wrapper around operator delete
   static void delete_L1GtJetCountsTemplatecLcLObjectParameter(void *p) {
      delete ((::L1GtJetCountsTemplate::ObjectParameter*)p);
   }
   static void deleteArray_L1GtJetCountsTemplatecLcLObjectParameter(void *p) {
      delete [] ((::L1GtJetCountsTemplate::ObjectParameter*)p);
   }
   static void destruct_L1GtJetCountsTemplatecLcLObjectParameter(void *p) {
      typedef ::L1GtJetCountsTemplate::ObjectParameter current_t;
      ((current_t*)p)->~current_t();
   }
} // end of namespace ROOT for class ::L1GtJetCountsTemplate::ObjectParameter

namespace ROOT {
   // Wrappers around operator new
   static void *new_L1GtCastorTemplate(void *p) {
      return  p ? new(p) ::L1GtCastorTemplate : new ::L1GtCastorTemplate;
   }
   static void *newArray_L1GtCastorTemplate(Long_t nElements, void *p) {
      return p ? new(p) ::L1GtCastorTemplate[nElements] : new ::L1GtCastorTemplate[nElements];
   }
   // Wrapper around operator delete
   static void delete_L1GtCastorTemplate(void *p) {
      delete ((::L1GtCastorTemplate*)p);
   }
   static void deleteArray_L1GtCastorTemplate(void *p) {
      delete [] ((::L1GtCastorTemplate*)p);
   }
   static void destruct_L1GtCastorTemplate(void *p) {
      typedef ::L1GtCastorTemplate current_t;
      ((current_t*)p)->~current_t();
   }
} // end of namespace ROOT for class ::L1GtCastorTemplate

namespace ROOT {
   // Wrappers around operator new
   static void *new_L1GtHfBitCountsTemplate(void *p) {
      return  p ? new(p) ::L1GtHfBitCountsTemplate : new ::L1GtHfBitCountsTemplate;
   }
   static void *newArray_L1GtHfBitCountsTemplate(Long_t nElements, void *p) {
      return p ? new(p) ::L1GtHfBitCountsTemplate[nElements] : new ::L1GtHfBitCountsTemplate[nElements];
   }
   // Wrapper around operator delete
   static void delete_L1GtHfBitCountsTemplate(void *p) {
      delete ((::L1GtHfBitCountsTemplate*)p);
   }
   static void deleteArray_L1GtHfBitCountsTemplate(void *p) {
      delete [] ((::L1GtHfBitCountsTemplate*)p);
   }
   static void destruct_L1GtHfBitCountsTemplate(void *p) {
      typedef ::L1GtHfBitCountsTemplate current_t;
      ((current_t*)p)->~current_t();
   }
} // end of namespace ROOT for class ::L1GtHfBitCountsTemplate

namespace ROOT {
   // Wrappers around operator new
   static void *new_L1GtHfBitCountsTemplatecLcLObjectParameter(void *p) {
      return  p ? ::new((::ROOT::Internal::TOperatorNewHelper*)p) ::L1GtHfBitCountsTemplate::ObjectParameter : new ::L1GtHfBitCountsTemplate::ObjectParameter;
   }
   static void *newArray_L1GtHfBitCountsTemplatecLcLObjectParameter(Long_t nElements, void *p) {
      return p ? ::new((::ROOT::Internal::TOperatorNewHelper*)p) ::L1GtHfBitCountsTemplate::ObjectParameter[nElements] : new ::L1GtHfBitCountsTemplate::ObjectParameter[nElements];
   }
   // Wrapper around operator delete
   static void delete_L1GtHfBitCountsTemplatecLcLObjectParameter(void *p) {
      delete ((::L1GtHfBitCountsTemplate::ObjectParameter*)p);
   }
   static void deleteArray_L1GtHfBitCountsTemplatecLcLObjectParameter(void *p) {
      delete [] ((::L1GtHfBitCountsTemplate::ObjectParameter*)p);
   }
   static void destruct_L1GtHfBitCountsTemplatecLcLObjectParameter(void *p) {
      typedef ::L1GtHfBitCountsTemplate::ObjectParameter current_t;
      ((current_t*)p)->~current_t();
   }
} // end of namespace ROOT for class ::L1GtHfBitCountsTemplate::ObjectParameter

namespace ROOT {
   // Wrappers around operator new
   static void *new_L1GtHfRingEtSumsTemplate(void *p) {
      return  p ? new(p) ::L1GtHfRingEtSumsTemplate : new ::L1GtHfRingEtSumsTemplate;
   }
   static void *newArray_L1GtHfRingEtSumsTemplate(Long_t nElements, void *p) {
      return p ? new(p) ::L1GtHfRingEtSumsTemplate[nElements] : new ::L1GtHfRingEtSumsTemplate[nElements];
   }
   // Wrapper around operator delete
   static void delete_L1GtHfRingEtSumsTemplate(void *p) {
      delete ((::L1GtHfRingEtSumsTemplate*)p);
   }
   static void deleteArray_L1GtHfRingEtSumsTemplate(void *p) {
      delete [] ((::L1GtHfRingEtSumsTemplate*)p);
   }
   static void destruct_L1GtHfRingEtSumsTemplate(void *p) {
      typedef ::L1GtHfRingEtSumsTemplate current_t;
      ((current_t*)p)->~current_t();
   }
} // end of namespace ROOT for class ::L1GtHfRingEtSumsTemplate

namespace ROOT {
   // Wrappers around operator new
   static void *new_L1GtHfRingEtSumsTemplatecLcLObjectParameter(void *p) {
      return  p ? ::new((::ROOT::Internal::TOperatorNewHelper*)p) ::L1GtHfRingEtSumsTemplate::ObjectParameter : new ::L1GtHfRingEtSumsTemplate::ObjectParameter;
   }
   static void *newArray_L1GtHfRingEtSumsTemplatecLcLObjectParameter(Long_t nElements, void *p) {
      return p ? ::new((::ROOT::Internal::TOperatorNewHelper*)p) ::L1GtHfRingEtSumsTemplate::ObjectParameter[nElements] : new ::L1GtHfRingEtSumsTemplate::ObjectParameter[nElements];
   }
   // Wrapper around operator delete
   static void delete_L1GtHfRingEtSumsTemplatecLcLObjectParameter(void *p) {
      delete ((::L1GtHfRingEtSumsTemplate::ObjectParameter*)p);
   }
   static void deleteArray_L1GtHfRingEtSumsTemplatecLcLObjectParameter(void *p) {
      delete [] ((::L1GtHfRingEtSumsTemplate::ObjectParameter*)p);
   }
   static void destruct_L1GtHfRingEtSumsTemplatecLcLObjectParameter(void *p) {
      typedef ::L1GtHfRingEtSumsTemplate::ObjectParameter current_t;
      ((current_t*)p)->~current_t();
   }
} // end of namespace ROOT for class ::L1GtHfRingEtSumsTemplate::ObjectParameter

namespace ROOT {
   // Wrappers around operator new
   static void *new_L1GtBptxTemplate(void *p) {
      return  p ? new(p) ::L1GtBptxTemplate : new ::L1GtBptxTemplate;
   }
   static void *newArray_L1GtBptxTemplate(Long_t nElements, void *p) {
      return p ? new(p) ::L1GtBptxTemplate[nElements] : new ::L1GtBptxTemplate[nElements];
   }
   // Wrapper around operator delete
   static void delete_L1GtBptxTemplate(void *p) {
      delete ((::L1GtBptxTemplate*)p);
   }
   static void deleteArray_L1GtBptxTemplate(void *p) {
      delete [] ((::L1GtBptxTemplate*)p);
   }
   static void destruct_L1GtBptxTemplate(void *p) {
      typedef ::L1GtBptxTemplate current_t;
      ((current_t*)p)->~current_t();
   }
} // end of namespace ROOT for class ::L1GtBptxTemplate

namespace ROOT {
   // Wrappers around operator new
   static void *new_L1GtExternalTemplate(void *p) {
      return  p ? new(p) ::L1GtExternalTemplate : new ::L1GtExternalTemplate;
   }
   static void *newArray_L1GtExternalTemplate(Long_t nElements, void *p) {
      return p ? new(p) ::L1GtExternalTemplate[nElements] : new ::L1GtExternalTemplate[nElements];
   }
   // Wrapper around operator delete
   static void delete_L1GtExternalTemplate(void *p) {
      delete ((::L1GtExternalTemplate*)p);
   }
   static void deleteArray_L1GtExternalTemplate(void *p) {
      delete [] ((::L1GtExternalTemplate*)p);
   }
   static void destruct_L1GtExternalTemplate(void *p) {
      typedef ::L1GtExternalTemplate current_t;
      ((current_t*)p)->~current_t();
   }
} // end of namespace ROOT for class ::L1GtExternalTemplate

namespace ROOT {
   // Wrappers around operator new
   static void *new_L1GtCorrelationTemplate(void *p) {
      return  p ? new(p) ::L1GtCorrelationTemplate : new ::L1GtCorrelationTemplate;
   }
   static void *newArray_L1GtCorrelationTemplate(Long_t nElements, void *p) {
      return p ? new(p) ::L1GtCorrelationTemplate[nElements] : new ::L1GtCorrelationTemplate[nElements];
   }
   // Wrapper around operator delete
   static void delete_L1GtCorrelationTemplate(void *p) {
      delete ((::L1GtCorrelationTemplate*)p);
   }
   static void deleteArray_L1GtCorrelationTemplate(void *p) {
      delete [] ((::L1GtCorrelationTemplate*)p);
   }
   static void destruct_L1GtCorrelationTemplate(void *p) {
      typedef ::L1GtCorrelationTemplate current_t;
      ((current_t*)p)->~current_t();
   }
} // end of namespace ROOT for class ::L1GtCorrelationTemplate

namespace ROOT {
   // Wrappers around operator new
   static void *new_L1GtCorrelationTemplatecLcLCorrelationParameter(void *p) {
      return  p ? ::new((::ROOT::Internal::TOperatorNewHelper*)p) ::L1GtCorrelationTemplate::CorrelationParameter : new ::L1GtCorrelationTemplate::CorrelationParameter;
   }
   static void *newArray_L1GtCorrelationTemplatecLcLCorrelationParameter(Long_t nElements, void *p) {
      return p ? ::new((::ROOT::Internal::TOperatorNewHelper*)p) ::L1GtCorrelationTemplate::CorrelationParameter[nElements] : new ::L1GtCorrelationTemplate::CorrelationParameter[nElements];
   }
   // Wrapper around operator delete
   static void delete_L1GtCorrelationTemplatecLcLCorrelationParameter(void *p) {
      delete ((::L1GtCorrelationTemplate::CorrelationParameter*)p);
   }
   static void deleteArray_L1GtCorrelationTemplatecLcLCorrelationParameter(void *p) {
      delete [] ((::L1GtCorrelationTemplate::CorrelationParameter*)p);
   }
   static void destruct_L1GtCorrelationTemplatecLcLCorrelationParameter(void *p) {
      typedef ::L1GtCorrelationTemplate::CorrelationParameter current_t;
      ((current_t*)p)->~current_t();
   }
} // end of namespace ROOT for class ::L1GtCorrelationTemplate::CorrelationParameter

namespace ROOT {
   // Wrappers around operator new
   static void *new_L1GtAlgorithm(void *p) {
      return  p ? new(p) ::L1GtAlgorithm : new ::L1GtAlgorithm;
   }
   static void *newArray_L1GtAlgorithm(Long_t nElements, void *p) {
      return p ? new(p) ::L1GtAlgorithm[nElements] : new ::L1GtAlgorithm[nElements];
   }
   // Wrapper around operator delete
   static void delete_L1GtAlgorithm(void *p) {
      delete ((::L1GtAlgorithm*)p);
   }
   static void deleteArray_L1GtAlgorithm(void *p) {
      delete [] ((::L1GtAlgorithm*)p);
   }
   static void destruct_L1GtAlgorithm(void *p) {
      typedef ::L1GtAlgorithm current_t;
      ((current_t*)p)->~current_t();
   }
} // end of namespace ROOT for class ::L1GtAlgorithm

namespace ROOT {
   // Wrappers around operator new
   static void *new_pairlEconstsPstringcOL1GtAlgorithmgR(void *p) {
      return  p ? ::new((::ROOT::Internal::TOperatorNewHelper*)p) pair<const string,L1GtAlgorithm> : new pair<const string,L1GtAlgorithm>;
   }
   static void *newArray_pairlEconstsPstringcOL1GtAlgorithmgR(Long_t nElements, void *p) {
      return p ? ::new((::ROOT::Internal::TOperatorNewHelper*)p) pair<const string,L1GtAlgorithm>[nElements] : new pair<const string,L1GtAlgorithm>[nElements];
   }
   // Wrapper around operator delete
   static void delete_pairlEconstsPstringcOL1GtAlgorithmgR(void *p) {
      delete ((pair<const string,L1GtAlgorithm>*)p);
   }
   static void deleteArray_pairlEconstsPstringcOL1GtAlgorithmgR(void *p) {
      delete [] ((pair<const string,L1GtAlgorithm>*)p);
   }
   static void destruct_pairlEconstsPstringcOL1GtAlgorithmgR(void *p) {
      typedef pair<const string,L1GtAlgorithm> current_t;
      ((current_t*)p)->~current_t();
   }
} // end of namespace ROOT for class pair<const string,L1GtAlgorithm>

namespace ROOT {
   // Wrappers around operator new
   static void *new_pairlEstringcOL1GtAlgorithmgR(void *p) {
      return  p ? ::new((::ROOT::Internal::TOperatorNewHelper*)p) pair<string,L1GtAlgorithm> : new pair<string,L1GtAlgorithm>;
   }
   static void *newArray_pairlEstringcOL1GtAlgorithmgR(Long_t nElements, void *p) {
      return p ? ::new((::ROOT::Internal::TOperatorNewHelper*)p) pair<string,L1GtAlgorithm>[nElements] : new pair<string,L1GtAlgorithm>[nElements];
   }
   // Wrapper around operator delete
   static void delete_pairlEstringcOL1GtAlgorithmgR(void *p) {
      delete ((pair<string,L1GtAlgorithm>*)p);
   }
   static void deleteArray_pairlEstringcOL1GtAlgorithmgR(void *p) {
      delete [] ((pair<string,L1GtAlgorithm>*)p);
   }
   static void destruct_pairlEstringcOL1GtAlgorithmgR(void *p) {
      typedef pair<string,L1GtAlgorithm> current_t;
      ((current_t*)p)->~current_t();
   }
} // end of namespace ROOT for class pair<string,L1GtAlgorithm>

namespace ROOT {
   // Wrappers around operator new
   static void *new_L1GtTriggerMenu(void *p) {
      return  p ? new(p) ::L1GtTriggerMenu : new ::L1GtTriggerMenu;
   }
   static void *newArray_L1GtTriggerMenu(Long_t nElements, void *p) {
      return p ? new(p) ::L1GtTriggerMenu[nElements] : new ::L1GtTriggerMenu[nElements];
   }
   // Wrapper around operator delete
   static void delete_L1GtTriggerMenu(void *p) {
      delete ((::L1GtTriggerMenu*)p);
   }
   static void deleteArray_L1GtTriggerMenu(void *p) {
      delete [] ((::L1GtTriggerMenu*)p);
   }
   static void destruct_L1GtTriggerMenu(void *p) {
      typedef ::L1GtTriggerMenu current_t;
      ((current_t*)p)->~current_t();
   }
} // end of namespace ROOT for class ::L1GtTriggerMenu

namespace ROOT {
   // Wrappers around operator new
   static void *new_L1CaloGeometry(void *p) {
      return  p ? new(p) ::L1CaloGeometry : new ::L1CaloGeometry;
   }
   static void *newArray_L1CaloGeometry(Long_t nElements, void *p) {
      return p ? new(p) ::L1CaloGeometry[nElements] : new ::L1CaloGeometry[nElements];
   }
   // Wrapper around operator delete
   static void delete_L1CaloGeometry(void *p) {
      delete ((::L1CaloGeometry*)p);
   }
   static void deleteArray_L1CaloGeometry(void *p) {
      delete [] ((::L1CaloGeometry*)p);
   }
   static void destruct_L1CaloGeometry(void *p) {
      typedef ::L1CaloGeometry current_t;
      ((current_t*)p)->~current_t();
   }
} // end of namespace ROOT for class ::L1CaloGeometry

namespace ROOT {
   // Wrappers around operator new
   static void *new_L1TUtmAlgorithm(void *p) {
      return  p ? new(p) ::L1TUtmAlgorithm : new ::L1TUtmAlgorithm;
   }
   static void *newArray_L1TUtmAlgorithm(Long_t nElements, void *p) {
      return p ? new(p) ::L1TUtmAlgorithm[nElements] : new ::L1TUtmAlgorithm[nElements];
   }
   // Wrapper around operator delete
   static void delete_L1TUtmAlgorithm(void *p) {
      delete ((::L1TUtmAlgorithm*)p);
   }
   static void deleteArray_L1TUtmAlgorithm(void *p) {
      delete [] ((::L1TUtmAlgorithm*)p);
   }
   static void destruct_L1TUtmAlgorithm(void *p) {
      typedef ::L1TUtmAlgorithm current_t;
      ((current_t*)p)->~current_t();
   }
} // end of namespace ROOT for class ::L1TUtmAlgorithm

namespace ROOT {
   // Wrappers around operator new
   static void *new_L1TUtmBin(void *p) {
      return  p ? new(p) ::L1TUtmBin : new ::L1TUtmBin;
   }
   static void *newArray_L1TUtmBin(Long_t nElements, void *p) {
      return p ? new(p) ::L1TUtmBin[nElements] : new ::L1TUtmBin[nElements];
   }
   // Wrapper around operator delete
   static void delete_L1TUtmBin(void *p) {
      delete ((::L1TUtmBin*)p);
   }
   static void deleteArray_L1TUtmBin(void *p) {
      delete [] ((::L1TUtmBin*)p);
   }
   static void destruct_L1TUtmBin(void *p) {
      typedef ::L1TUtmBin current_t;
      ((current_t*)p)->~current_t();
   }
} // end of namespace ROOT for class ::L1TUtmBin

namespace ROOT {
   // Wrappers around operator new
   static void *new_L1TUtmCondition(void *p) {
      return  p ? new(p) ::L1TUtmCondition : new ::L1TUtmCondition;
   }
   static void *newArray_L1TUtmCondition(Long_t nElements, void *p) {
      return p ? new(p) ::L1TUtmCondition[nElements] : new ::L1TUtmCondition[nElements];
   }
   // Wrapper around operator delete
   static void delete_L1TUtmCondition(void *p) {
      delete ((::L1TUtmCondition*)p);
   }
   static void deleteArray_L1TUtmCondition(void *p) {
      delete [] ((::L1TUtmCondition*)p);
   }
   static void destruct_L1TUtmCondition(void *p) {
      typedef ::L1TUtmCondition current_t;
      ((current_t*)p)->~current_t();
   }
} // end of namespace ROOT for class ::L1TUtmCondition

namespace ROOT {
   // Wrappers around operator new
   static void *new_L1TUtmCut(void *p) {
      return  p ? new(p) ::L1TUtmCut : new ::L1TUtmCut;
   }
   static void *newArray_L1TUtmCut(Long_t nElements, void *p) {
      return p ? new(p) ::L1TUtmCut[nElements] : new ::L1TUtmCut[nElements];
   }
   // Wrapper around operator delete
   static void delete_L1TUtmCut(void *p) {
      delete ((::L1TUtmCut*)p);
   }
   static void deleteArray_L1TUtmCut(void *p) {
      delete [] ((::L1TUtmCut*)p);
   }
   static void destruct_L1TUtmCut(void *p) {
      typedef ::L1TUtmCut current_t;
      ((current_t*)p)->~current_t();
   }
} // end of namespace ROOT for class ::L1TUtmCut

namespace ROOT {
   // Wrappers around operator new
   static void *new_L1TUtmCutValue(void *p) {
      return  p ? new(p) ::L1TUtmCutValue : new ::L1TUtmCutValue;
   }
   static void *newArray_L1TUtmCutValue(Long_t nElements, void *p) {
      return p ? new(p) ::L1TUtmCutValue[nElements] : new ::L1TUtmCutValue[nElements];
   }
   // Wrapper around operator delete
   static void delete_L1TUtmCutValue(void *p) {
      delete ((::L1TUtmCutValue*)p);
   }
   static void deleteArray_L1TUtmCutValue(void *p) {
      delete [] ((::L1TUtmCutValue*)p);
   }
   static void destruct_L1TUtmCutValue(void *p) {
      typedef ::L1TUtmCutValue current_t;
      ((current_t*)p)->~current_t();
   }
} // end of namespace ROOT for class ::L1TUtmCutValue

namespace ROOT {
   // Wrappers around operator new
   static void *new_L1TUtmObject(void *p) {
      return  p ? new(p) ::L1TUtmObject : new ::L1TUtmObject;
   }
   static void *newArray_L1TUtmObject(Long_t nElements, void *p) {
      return p ? new(p) ::L1TUtmObject[nElements] : new ::L1TUtmObject[nElements];
   }
   // Wrapper around operator delete
   static void delete_L1TUtmObject(void *p) {
      delete ((::L1TUtmObject*)p);
   }
   static void deleteArray_L1TUtmObject(void *p) {
      delete [] ((::L1TUtmObject*)p);
   }
   static void destruct_L1TUtmObject(void *p) {
      typedef ::L1TUtmObject current_t;
      ((current_t*)p)->~current_t();
   }
} // end of namespace ROOT for class ::L1TUtmObject

namespace ROOT {
   // Wrappers around operator new
   static void *new_L1TUtmScale(void *p) {
      return  p ? new(p) ::L1TUtmScale : new ::L1TUtmScale;
   }
   static void *newArray_L1TUtmScale(Long_t nElements, void *p) {
      return p ? new(p) ::L1TUtmScale[nElements] : new ::L1TUtmScale[nElements];
   }
   // Wrapper around operator delete
   static void delete_L1TUtmScale(void *p) {
      delete ((::L1TUtmScale*)p);
   }
   static void deleteArray_L1TUtmScale(void *p) {
      delete [] ((::L1TUtmScale*)p);
   }
   static void destruct_L1TUtmScale(void *p) {
      typedef ::L1TUtmScale current_t;
      ((current_t*)p)->~current_t();
   }
} // end of namespace ROOT for class ::L1TUtmScale

namespace ROOT {
   // Wrappers around operator new
   static void *new_L1TUtmTriggerMenu(void *p) {
      return  p ? new(p) ::L1TUtmTriggerMenu : new ::L1TUtmTriggerMenu;
   }
   static void *newArray_L1TUtmTriggerMenu(Long_t nElements, void *p) {
      return p ? new(p) ::L1TUtmTriggerMenu[nElements] : new ::L1TUtmTriggerMenu[nElements];
   }
   // Wrapper around operator delete
   static void delete_L1TUtmTriggerMenu(void *p) {
      delete ((::L1TUtmTriggerMenu*)p);
   }
   static void deleteArray_L1TUtmTriggerMenu(void *p) {
      delete [] ((::L1TUtmTriggerMenu*)p);
   }
   static void destruct_L1TUtmTriggerMenu(void *p) {
      typedef ::L1TUtmTriggerMenu current_t;
      ((current_t*)p)->~current_t();
   }
} // end of namespace ROOT for class ::L1TUtmTriggerMenu

namespace ROOT {
   static TClass *vectorlEvectorlEL1GtMuonTemplategRsPgR_Dictionary();
   static void vectorlEvectorlEL1GtMuonTemplategRsPgR_TClassManip(TClass*);
   static void *new_vectorlEvectorlEL1GtMuonTemplategRsPgR(void *p = 0);
   static void *newArray_vectorlEvectorlEL1GtMuonTemplategRsPgR(Long_t size, void *p);
   static void delete_vectorlEvectorlEL1GtMuonTemplategRsPgR(void *p);
   static void deleteArray_vectorlEvectorlEL1GtMuonTemplategRsPgR(void *p);
   static void destruct_vectorlEvectorlEL1GtMuonTemplategRsPgR(void *p);

   // Function generating the singleton type initializer
   static TGenericClassInfo *GenerateInitInstanceLocal(const vector<vector<L1GtMuonTemplate> >*)
   {
      vector<vector<L1GtMuonTemplate> > *ptr = 0;
      static ::TVirtualIsAProxy* isa_proxy = new ::TIsAProxy(typeid(vector<vector<L1GtMuonTemplate> >));
      static ::ROOT::TGenericClassInfo 
         instance("vector<vector<L1GtMuonTemplate> >", -2, "vector", 214,
                  typeid(vector<vector<L1GtMuonTemplate> >), ::ROOT::Internal::DefineBehavior(ptr, ptr),
                  &vectorlEvectorlEL1GtMuonTemplategRsPgR_Dictionary, isa_proxy, 4,
                  sizeof(vector<vector<L1GtMuonTemplate> >) );
      instance.SetNew(&new_vectorlEvectorlEL1GtMuonTemplategRsPgR);
      instance.SetNewArray(&newArray_vectorlEvectorlEL1GtMuonTemplategRsPgR);
      instance.SetDelete(&delete_vectorlEvectorlEL1GtMuonTemplategRsPgR);
      instance.SetDeleteArray(&deleteArray_vectorlEvectorlEL1GtMuonTemplategRsPgR);
      instance.SetDestructor(&destruct_vectorlEvectorlEL1GtMuonTemplategRsPgR);
      instance.AdoptCollectionProxyInfo(TCollectionProxyInfo::Generate(TCollectionProxyInfo::Pushback< vector<vector<L1GtMuonTemplate> > >()));
      return &instance;
   }
   // Static variable to force the class initialization
   static ::ROOT::TGenericClassInfo *_R__UNIQUE_(Init) = GenerateInitInstanceLocal((const vector<vector<L1GtMuonTemplate> >*)0x0); R__UseDummy(_R__UNIQUE_(Init));

   // Dictionary for non-ClassDef classes
   static TClass *vectorlEvectorlEL1GtMuonTemplategRsPgR_Dictionary() {
      TClass* theClass =::ROOT::GenerateInitInstanceLocal((const vector<vector<L1GtMuonTemplate> >*)0x0)->GetClass();
      vectorlEvectorlEL1GtMuonTemplategRsPgR_TClassManip(theClass);
   return theClass;
   }

   static void vectorlEvectorlEL1GtMuonTemplategRsPgR_TClassManip(TClass* ){
   }

} // end of namespace ROOT

namespace ROOT {
   // Wrappers around operator new
   static void *new_vectorlEvectorlEL1GtMuonTemplategRsPgR(void *p) {
      return  p ? ::new((::ROOT::Internal::TOperatorNewHelper*)p) vector<vector<L1GtMuonTemplate> > : new vector<vector<L1GtMuonTemplate> >;
   }
   static void *newArray_vectorlEvectorlEL1GtMuonTemplategRsPgR(Long_t nElements, void *p) {
      return p ? ::new((::ROOT::Internal::TOperatorNewHelper*)p) vector<vector<L1GtMuonTemplate> >[nElements] : new vector<vector<L1GtMuonTemplate> >[nElements];
   }
   // Wrapper around operator delete
   static void delete_vectorlEvectorlEL1GtMuonTemplategRsPgR(void *p) {
      delete ((vector<vector<L1GtMuonTemplate> >*)p);
   }
   static void deleteArray_vectorlEvectorlEL1GtMuonTemplategRsPgR(void *p) {
      delete [] ((vector<vector<L1GtMuonTemplate> >*)p);
   }
   static void destruct_vectorlEvectorlEL1GtMuonTemplategRsPgR(void *p) {
      typedef vector<vector<L1GtMuonTemplate> > current_t;
      ((current_t*)p)->~current_t();
   }
} // end of namespace ROOT for class vector<vector<L1GtMuonTemplate> >

namespace ROOT {
   static TClass *vectorlEvectorlEL1GtJetCountsTemplategRsPgR_Dictionary();
   static void vectorlEvectorlEL1GtJetCountsTemplategRsPgR_TClassManip(TClass*);
   static void *new_vectorlEvectorlEL1GtJetCountsTemplategRsPgR(void *p = 0);
   static void *newArray_vectorlEvectorlEL1GtJetCountsTemplategRsPgR(Long_t size, void *p);
   static void delete_vectorlEvectorlEL1GtJetCountsTemplategRsPgR(void *p);
   static void deleteArray_vectorlEvectorlEL1GtJetCountsTemplategRsPgR(void *p);
   static void destruct_vectorlEvectorlEL1GtJetCountsTemplategRsPgR(void *p);

   // Function generating the singleton type initializer
   static TGenericClassInfo *GenerateInitInstanceLocal(const vector<vector<L1GtJetCountsTemplate> >*)
   {
      vector<vector<L1GtJetCountsTemplate> > *ptr = 0;
      static ::TVirtualIsAProxy* isa_proxy = new ::TIsAProxy(typeid(vector<vector<L1GtJetCountsTemplate> >));
      static ::ROOT::TGenericClassInfo 
         instance("vector<vector<L1GtJetCountsTemplate> >", -2, "vector", 214,
                  typeid(vector<vector<L1GtJetCountsTemplate> >), ::ROOT::Internal::DefineBehavior(ptr, ptr),
                  &vectorlEvectorlEL1GtJetCountsTemplategRsPgR_Dictionary, isa_proxy, 4,
                  sizeof(vector<vector<L1GtJetCountsTemplate> >) );
      instance.SetNew(&new_vectorlEvectorlEL1GtJetCountsTemplategRsPgR);
      instance.SetNewArray(&newArray_vectorlEvectorlEL1GtJetCountsTemplategRsPgR);
      instance.SetDelete(&delete_vectorlEvectorlEL1GtJetCountsTemplategRsPgR);
      instance.SetDeleteArray(&deleteArray_vectorlEvectorlEL1GtJetCountsTemplategRsPgR);
      instance.SetDestructor(&destruct_vectorlEvectorlEL1GtJetCountsTemplategRsPgR);
      instance.AdoptCollectionProxyInfo(TCollectionProxyInfo::Generate(TCollectionProxyInfo::Pushback< vector<vector<L1GtJetCountsTemplate> > >()));
      return &instance;
   }
   // Static variable to force the class initialization
   static ::ROOT::TGenericClassInfo *_R__UNIQUE_(Init) = GenerateInitInstanceLocal((const vector<vector<L1GtJetCountsTemplate> >*)0x0); R__UseDummy(_R__UNIQUE_(Init));

   // Dictionary for non-ClassDef classes
   static TClass *vectorlEvectorlEL1GtJetCountsTemplategRsPgR_Dictionary() {
      TClass* theClass =::ROOT::GenerateInitInstanceLocal((const vector<vector<L1GtJetCountsTemplate> >*)0x0)->GetClass();
      vectorlEvectorlEL1GtJetCountsTemplategRsPgR_TClassManip(theClass);
   return theClass;
   }

   static void vectorlEvectorlEL1GtJetCountsTemplategRsPgR_TClassManip(TClass* ){
   }

} // end of namespace ROOT

namespace ROOT {
   // Wrappers around operator new
   static void *new_vectorlEvectorlEL1GtJetCountsTemplategRsPgR(void *p) {
      return  p ? ::new((::ROOT::Internal::TOperatorNewHelper*)p) vector<vector<L1GtJetCountsTemplate> > : new vector<vector<L1GtJetCountsTemplate> >;
   }
   static void *newArray_vectorlEvectorlEL1GtJetCountsTemplategRsPgR(Long_t nElements, void *p) {
      return p ? ::new((::ROOT::Internal::TOperatorNewHelper*)p) vector<vector<L1GtJetCountsTemplate> >[nElements] : new vector<vector<L1GtJetCountsTemplate> >[nElements];
   }
   // Wrapper around operator delete
   static void delete_vectorlEvectorlEL1GtJetCountsTemplategRsPgR(void *p) {
      delete ((vector<vector<L1GtJetCountsTemplate> >*)p);
   }
   static void deleteArray_vectorlEvectorlEL1GtJetCountsTemplategRsPgR(void *p) {
      delete [] ((vector<vector<L1GtJetCountsTemplate> >*)p);
   }
   static void destruct_vectorlEvectorlEL1GtJetCountsTemplategRsPgR(void *p) {
      typedef vector<vector<L1GtJetCountsTemplate> > current_t;
      ((current_t*)p)->~current_t();
   }
} // end of namespace ROOT for class vector<vector<L1GtJetCountsTemplate> >

namespace ROOT {
   static TClass *vectorlEvectorlEL1GtHfRingEtSumsTemplategRsPgR_Dictionary();
   static void vectorlEvectorlEL1GtHfRingEtSumsTemplategRsPgR_TClassManip(TClass*);
   static void *new_vectorlEvectorlEL1GtHfRingEtSumsTemplategRsPgR(void *p = 0);
   static void *newArray_vectorlEvectorlEL1GtHfRingEtSumsTemplategRsPgR(Long_t size, void *p);
   static void delete_vectorlEvectorlEL1GtHfRingEtSumsTemplategRsPgR(void *p);
   static void deleteArray_vectorlEvectorlEL1GtHfRingEtSumsTemplategRsPgR(void *p);
   static void destruct_vectorlEvectorlEL1GtHfRingEtSumsTemplategRsPgR(void *p);

   // Function generating the singleton type initializer
   static TGenericClassInfo *GenerateInitInstanceLocal(const vector<vector<L1GtHfRingEtSumsTemplate> >*)
   {
      vector<vector<L1GtHfRingEtSumsTemplate> > *ptr = 0;
      static ::TVirtualIsAProxy* isa_proxy = new ::TIsAProxy(typeid(vector<vector<L1GtHfRingEtSumsTemplate> >));
      static ::ROOT::TGenericClassInfo 
         instance("vector<vector<L1GtHfRingEtSumsTemplate> >", -2, "vector", 214,
                  typeid(vector<vector<L1GtHfRingEtSumsTemplate> >), ::ROOT::Internal::DefineBehavior(ptr, ptr),
                  &vectorlEvectorlEL1GtHfRingEtSumsTemplategRsPgR_Dictionary, isa_proxy, 4,
                  sizeof(vector<vector<L1GtHfRingEtSumsTemplate> >) );
      instance.SetNew(&new_vectorlEvectorlEL1GtHfRingEtSumsTemplategRsPgR);
      instance.SetNewArray(&newArray_vectorlEvectorlEL1GtHfRingEtSumsTemplategRsPgR);
      instance.SetDelete(&delete_vectorlEvectorlEL1GtHfRingEtSumsTemplategRsPgR);
      instance.SetDeleteArray(&deleteArray_vectorlEvectorlEL1GtHfRingEtSumsTemplategRsPgR);
      instance.SetDestructor(&destruct_vectorlEvectorlEL1GtHfRingEtSumsTemplategRsPgR);
      instance.AdoptCollectionProxyInfo(TCollectionProxyInfo::Generate(TCollectionProxyInfo::Pushback< vector<vector<L1GtHfRingEtSumsTemplate> > >()));
      return &instance;
   }
   // Static variable to force the class initialization
   static ::ROOT::TGenericClassInfo *_R__UNIQUE_(Init) = GenerateInitInstanceLocal((const vector<vector<L1GtHfRingEtSumsTemplate> >*)0x0); R__UseDummy(_R__UNIQUE_(Init));

   // Dictionary for non-ClassDef classes
   static TClass *vectorlEvectorlEL1GtHfRingEtSumsTemplategRsPgR_Dictionary() {
      TClass* theClass =::ROOT::GenerateInitInstanceLocal((const vector<vector<L1GtHfRingEtSumsTemplate> >*)0x0)->GetClass();
      vectorlEvectorlEL1GtHfRingEtSumsTemplategRsPgR_TClassManip(theClass);
   return theClass;
   }

   static void vectorlEvectorlEL1GtHfRingEtSumsTemplategRsPgR_TClassManip(TClass* ){
   }

} // end of namespace ROOT

namespace ROOT {
   // Wrappers around operator new
   static void *new_vectorlEvectorlEL1GtHfRingEtSumsTemplategRsPgR(void *p) {
      return  p ? ::new((::ROOT::Internal::TOperatorNewHelper*)p) vector<vector<L1GtHfRingEtSumsTemplate> > : new vector<vector<L1GtHfRingEtSumsTemplate> >;
   }
   static void *newArray_vectorlEvectorlEL1GtHfRingEtSumsTemplategRsPgR(Long_t nElements, void *p) {
      return p ? ::new((::ROOT::Internal::TOperatorNewHelper*)p) vector<vector<L1GtHfRingEtSumsTemplate> >[nElements] : new vector<vector<L1GtHfRingEtSumsTemplate> >[nElements];
   }
   // Wrapper around operator delete
   static void delete_vectorlEvectorlEL1GtHfRingEtSumsTemplategRsPgR(void *p) {
      delete ((vector<vector<L1GtHfRingEtSumsTemplate> >*)p);
   }
   static void deleteArray_vectorlEvectorlEL1GtHfRingEtSumsTemplategRsPgR(void *p) {
      delete [] ((vector<vector<L1GtHfRingEtSumsTemplate> >*)p);
   }
   static void destruct_vectorlEvectorlEL1GtHfRingEtSumsTemplategRsPgR(void *p) {
      typedef vector<vector<L1GtHfRingEtSumsTemplate> > current_t;
      ((current_t*)p)->~current_t();
   }
} // end of namespace ROOT for class vector<vector<L1GtHfRingEtSumsTemplate> >

namespace ROOT {
   static TClass *vectorlEvectorlEL1GtHfBitCountsTemplategRsPgR_Dictionary();
   static void vectorlEvectorlEL1GtHfBitCountsTemplategRsPgR_TClassManip(TClass*);
   static void *new_vectorlEvectorlEL1GtHfBitCountsTemplategRsPgR(void *p = 0);
   static void *newArray_vectorlEvectorlEL1GtHfBitCountsTemplategRsPgR(Long_t size, void *p);
   static void delete_vectorlEvectorlEL1GtHfBitCountsTemplategRsPgR(void *p);
   static void deleteArray_vectorlEvectorlEL1GtHfBitCountsTemplategRsPgR(void *p);
   static void destruct_vectorlEvectorlEL1GtHfBitCountsTemplategRsPgR(void *p);

   // Function generating the singleton type initializer
   static TGenericClassInfo *GenerateInitInstanceLocal(const vector<vector<L1GtHfBitCountsTemplate> >*)
   {
      vector<vector<L1GtHfBitCountsTemplate> > *ptr = 0;
      static ::TVirtualIsAProxy* isa_proxy = new ::TIsAProxy(typeid(vector<vector<L1GtHfBitCountsTemplate> >));
      static ::ROOT::TGenericClassInfo 
         instance("vector<vector<L1GtHfBitCountsTemplate> >", -2, "vector", 214,
                  typeid(vector<vector<L1GtHfBitCountsTemplate> >), ::ROOT::Internal::DefineBehavior(ptr, ptr),
                  &vectorlEvectorlEL1GtHfBitCountsTemplategRsPgR_Dictionary, isa_proxy, 4,
                  sizeof(vector<vector<L1GtHfBitCountsTemplate> >) );
      instance.SetNew(&new_vectorlEvectorlEL1GtHfBitCountsTemplategRsPgR);
      instance.SetNewArray(&newArray_vectorlEvectorlEL1GtHfBitCountsTemplategRsPgR);
      instance.SetDelete(&delete_vectorlEvectorlEL1GtHfBitCountsTemplategRsPgR);
      instance.SetDeleteArray(&deleteArray_vectorlEvectorlEL1GtHfBitCountsTemplategRsPgR);
      instance.SetDestructor(&destruct_vectorlEvectorlEL1GtHfBitCountsTemplategRsPgR);
      instance.AdoptCollectionProxyInfo(TCollectionProxyInfo::Generate(TCollectionProxyInfo::Pushback< vector<vector<L1GtHfBitCountsTemplate> > >()));
      return &instance;
   }
   // Static variable to force the class initialization
   static ::ROOT::TGenericClassInfo *_R__UNIQUE_(Init) = GenerateInitInstanceLocal((const vector<vector<L1GtHfBitCountsTemplate> >*)0x0); R__UseDummy(_R__UNIQUE_(Init));

   // Dictionary for non-ClassDef classes
   static TClass *vectorlEvectorlEL1GtHfBitCountsTemplategRsPgR_Dictionary() {
      TClass* theClass =::ROOT::GenerateInitInstanceLocal((const vector<vector<L1GtHfBitCountsTemplate> >*)0x0)->GetClass();
      vectorlEvectorlEL1GtHfBitCountsTemplategRsPgR_TClassManip(theClass);
   return theClass;
   }

   static void vectorlEvectorlEL1GtHfBitCountsTemplategRsPgR_TClassManip(TClass* ){
   }

} // end of namespace ROOT

namespace ROOT {
   // Wrappers around operator new
   static void *new_vectorlEvectorlEL1GtHfBitCountsTemplategRsPgR(void *p) {
      return  p ? ::new((::ROOT::Internal::TOperatorNewHelper*)p) vector<vector<L1GtHfBitCountsTemplate> > : new vector<vector<L1GtHfBitCountsTemplate> >;
   }
   static void *newArray_vectorlEvectorlEL1GtHfBitCountsTemplategRsPgR(Long_t nElements, void *p) {
      return p ? ::new((::ROOT::Internal::TOperatorNewHelper*)p) vector<vector<L1GtHfBitCountsTemplate> >[nElements] : new vector<vector<L1GtHfBitCountsTemplate> >[nElements];
   }
   // Wrapper around operator delete
   static void delete_vectorlEvectorlEL1GtHfBitCountsTemplategRsPgR(void *p) {
      delete ((vector<vector<L1GtHfBitCountsTemplate> >*)p);
   }
   static void deleteArray_vectorlEvectorlEL1GtHfBitCountsTemplategRsPgR(void *p) {
      delete [] ((vector<vector<L1GtHfBitCountsTemplate> >*)p);
   }
   static void destruct_vectorlEvectorlEL1GtHfBitCountsTemplategRsPgR(void *p) {
      typedef vector<vector<L1GtHfBitCountsTemplate> > current_t;
      ((current_t*)p)->~current_t();
   }
} // end of namespace ROOT for class vector<vector<L1GtHfBitCountsTemplate> >

namespace ROOT {
   static TClass *vectorlEvectorlEL1GtExternalTemplategRsPgR_Dictionary();
   static void vectorlEvectorlEL1GtExternalTemplategRsPgR_TClassManip(TClass*);
   static void *new_vectorlEvectorlEL1GtExternalTemplategRsPgR(void *p = 0);
   static void *newArray_vectorlEvectorlEL1GtExternalTemplategRsPgR(Long_t size, void *p);
   static void delete_vectorlEvectorlEL1GtExternalTemplategRsPgR(void *p);
   static void deleteArray_vectorlEvectorlEL1GtExternalTemplategRsPgR(void *p);
   static void destruct_vectorlEvectorlEL1GtExternalTemplategRsPgR(void *p);

   // Function generating the singleton type initializer
   static TGenericClassInfo *GenerateInitInstanceLocal(const vector<vector<L1GtExternalTemplate> >*)
   {
      vector<vector<L1GtExternalTemplate> > *ptr = 0;
      static ::TVirtualIsAProxy* isa_proxy = new ::TIsAProxy(typeid(vector<vector<L1GtExternalTemplate> >));
      static ::ROOT::TGenericClassInfo 
         instance("vector<vector<L1GtExternalTemplate> >", -2, "vector", 214,
                  typeid(vector<vector<L1GtExternalTemplate> >), ::ROOT::Internal::DefineBehavior(ptr, ptr),
                  &vectorlEvectorlEL1GtExternalTemplategRsPgR_Dictionary, isa_proxy, 4,
                  sizeof(vector<vector<L1GtExternalTemplate> >) );
      instance.SetNew(&new_vectorlEvectorlEL1GtExternalTemplategRsPgR);
      instance.SetNewArray(&newArray_vectorlEvectorlEL1GtExternalTemplategRsPgR);
      instance.SetDelete(&delete_vectorlEvectorlEL1GtExternalTemplategRsPgR);
      instance.SetDeleteArray(&deleteArray_vectorlEvectorlEL1GtExternalTemplategRsPgR);
      instance.SetDestructor(&destruct_vectorlEvectorlEL1GtExternalTemplategRsPgR);
      instance.AdoptCollectionProxyInfo(TCollectionProxyInfo::Generate(TCollectionProxyInfo::Pushback< vector<vector<L1GtExternalTemplate> > >()));
      return &instance;
   }
   // Static variable to force the class initialization
   static ::ROOT::TGenericClassInfo *_R__UNIQUE_(Init) = GenerateInitInstanceLocal((const vector<vector<L1GtExternalTemplate> >*)0x0); R__UseDummy(_R__UNIQUE_(Init));

   // Dictionary for non-ClassDef classes
   static TClass *vectorlEvectorlEL1GtExternalTemplategRsPgR_Dictionary() {
      TClass* theClass =::ROOT::GenerateInitInstanceLocal((const vector<vector<L1GtExternalTemplate> >*)0x0)->GetClass();
      vectorlEvectorlEL1GtExternalTemplategRsPgR_TClassManip(theClass);
   return theClass;
   }

   static void vectorlEvectorlEL1GtExternalTemplategRsPgR_TClassManip(TClass* ){
   }

} // end of namespace ROOT

namespace ROOT {
   // Wrappers around operator new
   static void *new_vectorlEvectorlEL1GtExternalTemplategRsPgR(void *p) {
      return  p ? ::new((::ROOT::Internal::TOperatorNewHelper*)p) vector<vector<L1GtExternalTemplate> > : new vector<vector<L1GtExternalTemplate> >;
   }
   static void *newArray_vectorlEvectorlEL1GtExternalTemplategRsPgR(Long_t nElements, void *p) {
      return p ? ::new((::ROOT::Internal::TOperatorNewHelper*)p) vector<vector<L1GtExternalTemplate> >[nElements] : new vector<vector<L1GtExternalTemplate> >[nElements];
   }
   // Wrapper around operator delete
   static void delete_vectorlEvectorlEL1GtExternalTemplategRsPgR(void *p) {
      delete ((vector<vector<L1GtExternalTemplate> >*)p);
   }
   static void deleteArray_vectorlEvectorlEL1GtExternalTemplategRsPgR(void *p) {
      delete [] ((vector<vector<L1GtExternalTemplate> >*)p);
   }
   static void destruct_vectorlEvectorlEL1GtExternalTemplategRsPgR(void *p) {
      typedef vector<vector<L1GtExternalTemplate> > current_t;
      ((current_t*)p)->~current_t();
   }
} // end of namespace ROOT for class vector<vector<L1GtExternalTemplate> >

namespace ROOT {
   static TClass *vectorlEvectorlEL1GtEnergySumTemplategRsPgR_Dictionary();
   static void vectorlEvectorlEL1GtEnergySumTemplategRsPgR_TClassManip(TClass*);
   static void *new_vectorlEvectorlEL1GtEnergySumTemplategRsPgR(void *p = 0);
   static void *newArray_vectorlEvectorlEL1GtEnergySumTemplategRsPgR(Long_t size, void *p);
   static void delete_vectorlEvectorlEL1GtEnergySumTemplategRsPgR(void *p);
   static void deleteArray_vectorlEvectorlEL1GtEnergySumTemplategRsPgR(void *p);
   static void destruct_vectorlEvectorlEL1GtEnergySumTemplategRsPgR(void *p);

   // Function generating the singleton type initializer
   static TGenericClassInfo *GenerateInitInstanceLocal(const vector<vector<L1GtEnergySumTemplate> >*)
   {
      vector<vector<L1GtEnergySumTemplate> > *ptr = 0;
      static ::TVirtualIsAProxy* isa_proxy = new ::TIsAProxy(typeid(vector<vector<L1GtEnergySumTemplate> >));
      static ::ROOT::TGenericClassInfo 
         instance("vector<vector<L1GtEnergySumTemplate> >", -2, "vector", 214,
                  typeid(vector<vector<L1GtEnergySumTemplate> >), ::ROOT::Internal::DefineBehavior(ptr, ptr),
                  &vectorlEvectorlEL1GtEnergySumTemplategRsPgR_Dictionary, isa_proxy, 4,
                  sizeof(vector<vector<L1GtEnergySumTemplate> >) );
      instance.SetNew(&new_vectorlEvectorlEL1GtEnergySumTemplategRsPgR);
      instance.SetNewArray(&newArray_vectorlEvectorlEL1GtEnergySumTemplategRsPgR);
      instance.SetDelete(&delete_vectorlEvectorlEL1GtEnergySumTemplategRsPgR);
      instance.SetDeleteArray(&deleteArray_vectorlEvectorlEL1GtEnergySumTemplategRsPgR);
      instance.SetDestructor(&destruct_vectorlEvectorlEL1GtEnergySumTemplategRsPgR);
      instance.AdoptCollectionProxyInfo(TCollectionProxyInfo::Generate(TCollectionProxyInfo::Pushback< vector<vector<L1GtEnergySumTemplate> > >()));
      return &instance;
   }
   // Static variable to force the class initialization
   static ::ROOT::TGenericClassInfo *_R__UNIQUE_(Init) = GenerateInitInstanceLocal((const vector<vector<L1GtEnergySumTemplate> >*)0x0); R__UseDummy(_R__UNIQUE_(Init));

   // Dictionary for non-ClassDef classes
   static TClass *vectorlEvectorlEL1GtEnergySumTemplategRsPgR_Dictionary() {
      TClass* theClass =::ROOT::GenerateInitInstanceLocal((const vector<vector<L1GtEnergySumTemplate> >*)0x0)->GetClass();
      vectorlEvectorlEL1GtEnergySumTemplategRsPgR_TClassManip(theClass);
   return theClass;
   }

   static void vectorlEvectorlEL1GtEnergySumTemplategRsPgR_TClassManip(TClass* ){
   }

} // end of namespace ROOT

namespace ROOT {
   // Wrappers around operator new
   static void *new_vectorlEvectorlEL1GtEnergySumTemplategRsPgR(void *p) {
      return  p ? ::new((::ROOT::Internal::TOperatorNewHelper*)p) vector<vector<L1GtEnergySumTemplate> > : new vector<vector<L1GtEnergySumTemplate> >;
   }
   static void *newArray_vectorlEvectorlEL1GtEnergySumTemplategRsPgR(Long_t nElements, void *p) {
      return p ? ::new((::ROOT::Internal::TOperatorNewHelper*)p) vector<vector<L1GtEnergySumTemplate> >[nElements] : new vector<vector<L1GtEnergySumTemplate> >[nElements];
   }
   // Wrapper around operator delete
   static void delete_vectorlEvectorlEL1GtEnergySumTemplategRsPgR(void *p) {
      delete ((vector<vector<L1GtEnergySumTemplate> >*)p);
   }
   static void deleteArray_vectorlEvectorlEL1GtEnergySumTemplategRsPgR(void *p) {
      delete [] ((vector<vector<L1GtEnergySumTemplate> >*)p);
   }
   static void destruct_vectorlEvectorlEL1GtEnergySumTemplategRsPgR(void *p) {
      typedef vector<vector<L1GtEnergySumTemplate> > current_t;
      ((current_t*)p)->~current_t();
   }
} // end of namespace ROOT for class vector<vector<L1GtEnergySumTemplate> >

namespace ROOT {
   static TClass *vectorlEvectorlEL1GtCorrelationTemplategRsPgR_Dictionary();
   static void vectorlEvectorlEL1GtCorrelationTemplategRsPgR_TClassManip(TClass*);
   static void *new_vectorlEvectorlEL1GtCorrelationTemplategRsPgR(void *p = 0);
   static void *newArray_vectorlEvectorlEL1GtCorrelationTemplategRsPgR(Long_t size, void *p);
   static void delete_vectorlEvectorlEL1GtCorrelationTemplategRsPgR(void *p);
   static void deleteArray_vectorlEvectorlEL1GtCorrelationTemplategRsPgR(void *p);
   static void destruct_vectorlEvectorlEL1GtCorrelationTemplategRsPgR(void *p);

   // Function generating the singleton type initializer
   static TGenericClassInfo *GenerateInitInstanceLocal(const vector<vector<L1GtCorrelationTemplate> >*)
   {
      vector<vector<L1GtCorrelationTemplate> > *ptr = 0;
      static ::TVirtualIsAProxy* isa_proxy = new ::TIsAProxy(typeid(vector<vector<L1GtCorrelationTemplate> >));
      static ::ROOT::TGenericClassInfo 
         instance("vector<vector<L1GtCorrelationTemplate> >", -2, "vector", 214,
                  typeid(vector<vector<L1GtCorrelationTemplate> >), ::ROOT::Internal::DefineBehavior(ptr, ptr),
                  &vectorlEvectorlEL1GtCorrelationTemplategRsPgR_Dictionary, isa_proxy, 4,
                  sizeof(vector<vector<L1GtCorrelationTemplate> >) );
      instance.SetNew(&new_vectorlEvectorlEL1GtCorrelationTemplategRsPgR);
      instance.SetNewArray(&newArray_vectorlEvectorlEL1GtCorrelationTemplategRsPgR);
      instance.SetDelete(&delete_vectorlEvectorlEL1GtCorrelationTemplategRsPgR);
      instance.SetDeleteArray(&deleteArray_vectorlEvectorlEL1GtCorrelationTemplategRsPgR);
      instance.SetDestructor(&destruct_vectorlEvectorlEL1GtCorrelationTemplategRsPgR);
      instance.AdoptCollectionProxyInfo(TCollectionProxyInfo::Generate(TCollectionProxyInfo::Pushback< vector<vector<L1GtCorrelationTemplate> > >()));
      return &instance;
   }
   // Static variable to force the class initialization
   static ::ROOT::TGenericClassInfo *_R__UNIQUE_(Init) = GenerateInitInstanceLocal((const vector<vector<L1GtCorrelationTemplate> >*)0x0); R__UseDummy(_R__UNIQUE_(Init));

   // Dictionary for non-ClassDef classes
   static TClass *vectorlEvectorlEL1GtCorrelationTemplategRsPgR_Dictionary() {
      TClass* theClass =::ROOT::GenerateInitInstanceLocal((const vector<vector<L1GtCorrelationTemplate> >*)0x0)->GetClass();
      vectorlEvectorlEL1GtCorrelationTemplategRsPgR_TClassManip(theClass);
   return theClass;
   }

   static void vectorlEvectorlEL1GtCorrelationTemplategRsPgR_TClassManip(TClass* ){
   }

} // end of namespace ROOT

namespace ROOT {
   // Wrappers around operator new
   static void *new_vectorlEvectorlEL1GtCorrelationTemplategRsPgR(void *p) {
      return  p ? ::new((::ROOT::Internal::TOperatorNewHelper*)p) vector<vector<L1GtCorrelationTemplate> > : new vector<vector<L1GtCorrelationTemplate> >;
   }
   static void *newArray_vectorlEvectorlEL1GtCorrelationTemplategRsPgR(Long_t nElements, void *p) {
      return p ? ::new((::ROOT::Internal::TOperatorNewHelper*)p) vector<vector<L1GtCorrelationTemplate> >[nElements] : new vector<vector<L1GtCorrelationTemplate> >[nElements];
   }
   // Wrapper around operator delete
   static void delete_vectorlEvectorlEL1GtCorrelationTemplategRsPgR(void *p) {
      delete ((vector<vector<L1GtCorrelationTemplate> >*)p);
   }
   static void deleteArray_vectorlEvectorlEL1GtCorrelationTemplategRsPgR(void *p) {
      delete [] ((vector<vector<L1GtCorrelationTemplate> >*)p);
   }
   static void destruct_vectorlEvectorlEL1GtCorrelationTemplategRsPgR(void *p) {
      typedef vector<vector<L1GtCorrelationTemplate> > current_t;
      ((current_t*)p)->~current_t();
   }
} // end of namespace ROOT for class vector<vector<L1GtCorrelationTemplate> >

namespace ROOT {
   static TClass *vectorlEvectorlEL1GtCastorTemplategRsPgR_Dictionary();
   static void vectorlEvectorlEL1GtCastorTemplategRsPgR_TClassManip(TClass*);
   static void *new_vectorlEvectorlEL1GtCastorTemplategRsPgR(void *p = 0);
   static void *newArray_vectorlEvectorlEL1GtCastorTemplategRsPgR(Long_t size, void *p);
   static void delete_vectorlEvectorlEL1GtCastorTemplategRsPgR(void *p);
   static void deleteArray_vectorlEvectorlEL1GtCastorTemplategRsPgR(void *p);
   static void destruct_vectorlEvectorlEL1GtCastorTemplategRsPgR(void *p);

   // Function generating the singleton type initializer
   static TGenericClassInfo *GenerateInitInstanceLocal(const vector<vector<L1GtCastorTemplate> >*)
   {
      vector<vector<L1GtCastorTemplate> > *ptr = 0;
      static ::TVirtualIsAProxy* isa_proxy = new ::TIsAProxy(typeid(vector<vector<L1GtCastorTemplate> >));
      static ::ROOT::TGenericClassInfo 
         instance("vector<vector<L1GtCastorTemplate> >", -2, "vector", 214,
                  typeid(vector<vector<L1GtCastorTemplate> >), ::ROOT::Internal::DefineBehavior(ptr, ptr),
                  &vectorlEvectorlEL1GtCastorTemplategRsPgR_Dictionary, isa_proxy, 4,
                  sizeof(vector<vector<L1GtCastorTemplate> >) );
      instance.SetNew(&new_vectorlEvectorlEL1GtCastorTemplategRsPgR);
      instance.SetNewArray(&newArray_vectorlEvectorlEL1GtCastorTemplategRsPgR);
      instance.SetDelete(&delete_vectorlEvectorlEL1GtCastorTemplategRsPgR);
      instance.SetDeleteArray(&deleteArray_vectorlEvectorlEL1GtCastorTemplategRsPgR);
      instance.SetDestructor(&destruct_vectorlEvectorlEL1GtCastorTemplategRsPgR);
      instance.AdoptCollectionProxyInfo(TCollectionProxyInfo::Generate(TCollectionProxyInfo::Pushback< vector<vector<L1GtCastorTemplate> > >()));
      return &instance;
   }
   // Static variable to force the class initialization
   static ::ROOT::TGenericClassInfo *_R__UNIQUE_(Init) = GenerateInitInstanceLocal((const vector<vector<L1GtCastorTemplate> >*)0x0); R__UseDummy(_R__UNIQUE_(Init));

   // Dictionary for non-ClassDef classes
   static TClass *vectorlEvectorlEL1GtCastorTemplategRsPgR_Dictionary() {
      TClass* theClass =::ROOT::GenerateInitInstanceLocal((const vector<vector<L1GtCastorTemplate> >*)0x0)->GetClass();
      vectorlEvectorlEL1GtCastorTemplategRsPgR_TClassManip(theClass);
   return theClass;
   }

   static void vectorlEvectorlEL1GtCastorTemplategRsPgR_TClassManip(TClass* ){
   }

} // end of namespace ROOT

namespace ROOT {
   // Wrappers around operator new
   static void *new_vectorlEvectorlEL1GtCastorTemplategRsPgR(void *p) {
      return  p ? ::new((::ROOT::Internal::TOperatorNewHelper*)p) vector<vector<L1GtCastorTemplate> > : new vector<vector<L1GtCastorTemplate> >;
   }
   static void *newArray_vectorlEvectorlEL1GtCastorTemplategRsPgR(Long_t nElements, void *p) {
      return p ? ::new((::ROOT::Internal::TOperatorNewHelper*)p) vector<vector<L1GtCastorTemplate> >[nElements] : new vector<vector<L1GtCastorTemplate> >[nElements];
   }
   // Wrapper around operator delete
   static void delete_vectorlEvectorlEL1GtCastorTemplategRsPgR(void *p) {
      delete ((vector<vector<L1GtCastorTemplate> >*)p);
   }
   static void deleteArray_vectorlEvectorlEL1GtCastorTemplategRsPgR(void *p) {
      delete [] ((vector<vector<L1GtCastorTemplate> >*)p);
   }
   static void destruct_vectorlEvectorlEL1GtCastorTemplategRsPgR(void *p) {
      typedef vector<vector<L1GtCastorTemplate> > current_t;
      ((current_t*)p)->~current_t();
   }
} // end of namespace ROOT for class vector<vector<L1GtCastorTemplate> >

namespace ROOT {
   static TClass *vectorlEvectorlEL1GtCaloTemplategRsPgR_Dictionary();
   static void vectorlEvectorlEL1GtCaloTemplategRsPgR_TClassManip(TClass*);
   static void *new_vectorlEvectorlEL1GtCaloTemplategRsPgR(void *p = 0);
   static void *newArray_vectorlEvectorlEL1GtCaloTemplategRsPgR(Long_t size, void *p);
   static void delete_vectorlEvectorlEL1GtCaloTemplategRsPgR(void *p);
   static void deleteArray_vectorlEvectorlEL1GtCaloTemplategRsPgR(void *p);
   static void destruct_vectorlEvectorlEL1GtCaloTemplategRsPgR(void *p);

   // Function generating the singleton type initializer
   static TGenericClassInfo *GenerateInitInstanceLocal(const vector<vector<L1GtCaloTemplate> >*)
   {
      vector<vector<L1GtCaloTemplate> > *ptr = 0;
      static ::TVirtualIsAProxy* isa_proxy = new ::TIsAProxy(typeid(vector<vector<L1GtCaloTemplate> >));
      static ::ROOT::TGenericClassInfo 
         instance("vector<vector<L1GtCaloTemplate> >", -2, "vector", 214,
                  typeid(vector<vector<L1GtCaloTemplate> >), ::ROOT::Internal::DefineBehavior(ptr, ptr),
                  &vectorlEvectorlEL1GtCaloTemplategRsPgR_Dictionary, isa_proxy, 4,
                  sizeof(vector<vector<L1GtCaloTemplate> >) );
      instance.SetNew(&new_vectorlEvectorlEL1GtCaloTemplategRsPgR);
      instance.SetNewArray(&newArray_vectorlEvectorlEL1GtCaloTemplategRsPgR);
      instance.SetDelete(&delete_vectorlEvectorlEL1GtCaloTemplategRsPgR);
      instance.SetDeleteArray(&deleteArray_vectorlEvectorlEL1GtCaloTemplategRsPgR);
      instance.SetDestructor(&destruct_vectorlEvectorlEL1GtCaloTemplategRsPgR);
      instance.AdoptCollectionProxyInfo(TCollectionProxyInfo::Generate(TCollectionProxyInfo::Pushback< vector<vector<L1GtCaloTemplate> > >()));
      return &instance;
   }
   // Static variable to force the class initialization
   static ::ROOT::TGenericClassInfo *_R__UNIQUE_(Init) = GenerateInitInstanceLocal((const vector<vector<L1GtCaloTemplate> >*)0x0); R__UseDummy(_R__UNIQUE_(Init));

   // Dictionary for non-ClassDef classes
   static TClass *vectorlEvectorlEL1GtCaloTemplategRsPgR_Dictionary() {
      TClass* theClass =::ROOT::GenerateInitInstanceLocal((const vector<vector<L1GtCaloTemplate> >*)0x0)->GetClass();
      vectorlEvectorlEL1GtCaloTemplategRsPgR_TClassManip(theClass);
   return theClass;
   }

   static void vectorlEvectorlEL1GtCaloTemplategRsPgR_TClassManip(TClass* ){
   }

} // end of namespace ROOT

namespace ROOT {
   // Wrappers around operator new
   static void *new_vectorlEvectorlEL1GtCaloTemplategRsPgR(void *p) {
      return  p ? ::new((::ROOT::Internal::TOperatorNewHelper*)p) vector<vector<L1GtCaloTemplate> > : new vector<vector<L1GtCaloTemplate> >;
   }
   static void *newArray_vectorlEvectorlEL1GtCaloTemplategRsPgR(Long_t nElements, void *p) {
      return p ? ::new((::ROOT::Internal::TOperatorNewHelper*)p) vector<vector<L1GtCaloTemplate> >[nElements] : new vector<vector<L1GtCaloTemplate> >[nElements];
   }
   // Wrapper around operator delete
   static void delete_vectorlEvectorlEL1GtCaloTemplategRsPgR(void *p) {
      delete ((vector<vector<L1GtCaloTemplate> >*)p);
   }
   static void deleteArray_vectorlEvectorlEL1GtCaloTemplategRsPgR(void *p) {
      delete [] ((vector<vector<L1GtCaloTemplate> >*)p);
   }
   static void destruct_vectorlEvectorlEL1GtCaloTemplategRsPgR(void *p) {
      typedef vector<vector<L1GtCaloTemplate> > current_t;
      ((current_t*)p)->~current_t();
   }
} // end of namespace ROOT for class vector<vector<L1GtCaloTemplate> >

namespace ROOT {
   static TClass *vectorlEvectorlEL1GtBptxTemplategRsPgR_Dictionary();
   static void vectorlEvectorlEL1GtBptxTemplategRsPgR_TClassManip(TClass*);
   static void *new_vectorlEvectorlEL1GtBptxTemplategRsPgR(void *p = 0);
   static void *newArray_vectorlEvectorlEL1GtBptxTemplategRsPgR(Long_t size, void *p);
   static void delete_vectorlEvectorlEL1GtBptxTemplategRsPgR(void *p);
   static void deleteArray_vectorlEvectorlEL1GtBptxTemplategRsPgR(void *p);
   static void destruct_vectorlEvectorlEL1GtBptxTemplategRsPgR(void *p);

   // Function generating the singleton type initializer
   static TGenericClassInfo *GenerateInitInstanceLocal(const vector<vector<L1GtBptxTemplate> >*)
   {
      vector<vector<L1GtBptxTemplate> > *ptr = 0;
      static ::TVirtualIsAProxy* isa_proxy = new ::TIsAProxy(typeid(vector<vector<L1GtBptxTemplate> >));
      static ::ROOT::TGenericClassInfo 
         instance("vector<vector<L1GtBptxTemplate> >", -2, "vector", 214,
                  typeid(vector<vector<L1GtBptxTemplate> >), ::ROOT::Internal::DefineBehavior(ptr, ptr),
                  &vectorlEvectorlEL1GtBptxTemplategRsPgR_Dictionary, isa_proxy, 4,
                  sizeof(vector<vector<L1GtBptxTemplate> >) );
      instance.SetNew(&new_vectorlEvectorlEL1GtBptxTemplategRsPgR);
      instance.SetNewArray(&newArray_vectorlEvectorlEL1GtBptxTemplategRsPgR);
      instance.SetDelete(&delete_vectorlEvectorlEL1GtBptxTemplategRsPgR);
      instance.SetDeleteArray(&deleteArray_vectorlEvectorlEL1GtBptxTemplategRsPgR);
      instance.SetDestructor(&destruct_vectorlEvectorlEL1GtBptxTemplategRsPgR);
      instance.AdoptCollectionProxyInfo(TCollectionProxyInfo::Generate(TCollectionProxyInfo::Pushback< vector<vector<L1GtBptxTemplate> > >()));
      return &instance;
   }
   // Static variable to force the class initialization
   static ::ROOT::TGenericClassInfo *_R__UNIQUE_(Init) = GenerateInitInstanceLocal((const vector<vector<L1GtBptxTemplate> >*)0x0); R__UseDummy(_R__UNIQUE_(Init));

   // Dictionary for non-ClassDef classes
   static TClass *vectorlEvectorlEL1GtBptxTemplategRsPgR_Dictionary() {
      TClass* theClass =::ROOT::GenerateInitInstanceLocal((const vector<vector<L1GtBptxTemplate> >*)0x0)->GetClass();
      vectorlEvectorlEL1GtBptxTemplategRsPgR_TClassManip(theClass);
   return theClass;
   }

   static void vectorlEvectorlEL1GtBptxTemplategRsPgR_TClassManip(TClass* ){
   }

} // end of namespace ROOT

namespace ROOT {
   // Wrappers around operator new
   static void *new_vectorlEvectorlEL1GtBptxTemplategRsPgR(void *p) {
      return  p ? ::new((::ROOT::Internal::TOperatorNewHelper*)p) vector<vector<L1GtBptxTemplate> > : new vector<vector<L1GtBptxTemplate> >;
   }
   static void *newArray_vectorlEvectorlEL1GtBptxTemplategRsPgR(Long_t nElements, void *p) {
      return p ? ::new((::ROOT::Internal::TOperatorNewHelper*)p) vector<vector<L1GtBptxTemplate> >[nElements] : new vector<vector<L1GtBptxTemplate> >[nElements];
   }
   // Wrapper around operator delete
   static void delete_vectorlEvectorlEL1GtBptxTemplategRsPgR(void *p) {
      delete ((vector<vector<L1GtBptxTemplate> >*)p);
   }
   static void deleteArray_vectorlEvectorlEL1GtBptxTemplategRsPgR(void *p) {
      delete [] ((vector<vector<L1GtBptxTemplate> >*)p);
   }
   static void destruct_vectorlEvectorlEL1GtBptxTemplategRsPgR(void *p) {
      typedef vector<vector<L1GtBptxTemplate> > current_t;
      ((current_t*)p)->~current_t();
   }
} // end of namespace ROOT for class vector<vector<L1GtBptxTemplate> >

namespace ROOT {
   static TClass *vectorlEmaplEshortcOshortgRsPgR_Dictionary();
   static void vectorlEmaplEshortcOshortgRsPgR_TClassManip(TClass*);
   static void *new_vectorlEmaplEshortcOshortgRsPgR(void *p = 0);
   static void *newArray_vectorlEmaplEshortcOshortgRsPgR(Long_t size, void *p);
   static void delete_vectorlEmaplEshortcOshortgRsPgR(void *p);
   static void deleteArray_vectorlEmaplEshortcOshortgRsPgR(void *p);
   static void destruct_vectorlEmaplEshortcOshortgRsPgR(void *p);

   // Function generating the singleton type initializer
   static TGenericClassInfo *GenerateInitInstanceLocal(const vector<map<short,short> >*)
   {
      vector<map<short,short> > *ptr = 0;
      static ::TVirtualIsAProxy* isa_proxy = new ::TIsAProxy(typeid(vector<map<short,short> >));
      static ::ROOT::TGenericClassInfo 
         instance("vector<map<short,short> >", -2, "vector", 214,
                  typeid(vector<map<short,short> >), ::ROOT::Internal::DefineBehavior(ptr, ptr),
                  &vectorlEmaplEshortcOshortgRsPgR_Dictionary, isa_proxy, 4,
                  sizeof(vector<map<short,short> >) );
      instance.SetNew(&new_vectorlEmaplEshortcOshortgRsPgR);
      instance.SetNewArray(&newArray_vectorlEmaplEshortcOshortgRsPgR);
      instance.SetDelete(&delete_vectorlEmaplEshortcOshortgRsPgR);
      instance.SetDeleteArray(&deleteArray_vectorlEmaplEshortcOshortgRsPgR);
      instance.SetDestructor(&destruct_vectorlEmaplEshortcOshortgRsPgR);
      instance.AdoptCollectionProxyInfo(TCollectionProxyInfo::Generate(TCollectionProxyInfo::Pushback< vector<map<short,short> > >()));
      return &instance;
   }
   // Static variable to force the class initialization
   static ::ROOT::TGenericClassInfo *_R__UNIQUE_(Init) = GenerateInitInstanceLocal((const vector<map<short,short> >*)0x0); R__UseDummy(_R__UNIQUE_(Init));

   // Dictionary for non-ClassDef classes
   static TClass *vectorlEmaplEshortcOshortgRsPgR_Dictionary() {
      TClass* theClass =::ROOT::GenerateInitInstanceLocal((const vector<map<short,short> >*)0x0)->GetClass();
      vectorlEmaplEshortcOshortgRsPgR_TClassManip(theClass);
   return theClass;
   }

   static void vectorlEmaplEshortcOshortgRsPgR_TClassManip(TClass* ){
   }

} // end of namespace ROOT

namespace ROOT {
   // Wrappers around operator new
   static void *new_vectorlEmaplEshortcOshortgRsPgR(void *p) {
      return  p ? ::new((::ROOT::Internal::TOperatorNewHelper*)p) vector<map<short,short> > : new vector<map<short,short> >;
   }
   static void *newArray_vectorlEmaplEshortcOshortgRsPgR(Long_t nElements, void *p) {
      return p ? ::new((::ROOT::Internal::TOperatorNewHelper*)p) vector<map<short,short> >[nElements] : new vector<map<short,short> >[nElements];
   }
   // Wrapper around operator delete
   static void delete_vectorlEmaplEshortcOshortgRsPgR(void *p) {
      delete ((vector<map<short,short> >*)p);
   }
   static void deleteArray_vectorlEmaplEshortcOshortgRsPgR(void *p) {
      delete [] ((vector<map<short,short> >*)p);
   }
   static void destruct_vectorlEmaplEshortcOshortgRsPgR(void *p) {
      typedef vector<map<short,short> > current_t;
      ((current_t*)p)->~current_t();
   }
} // end of namespace ROOT for class vector<map<short,short> >

namespace ROOT {
   static TClass *vectorlEl1tcLcLCaloParamscLcLNodegR_Dictionary();
   static void vectorlEl1tcLcLCaloParamscLcLNodegR_TClassManip(TClass*);
   static void *new_vectorlEl1tcLcLCaloParamscLcLNodegR(void *p = 0);
   static void *newArray_vectorlEl1tcLcLCaloParamscLcLNodegR(Long_t size, void *p);
   static void delete_vectorlEl1tcLcLCaloParamscLcLNodegR(void *p);
   static void deleteArray_vectorlEl1tcLcLCaloParamscLcLNodegR(void *p);
   static void destruct_vectorlEl1tcLcLCaloParamscLcLNodegR(void *p);

   // Function generating the singleton type initializer
   static TGenericClassInfo *GenerateInitInstanceLocal(const vector<l1t::CaloParams::Node>*)
   {
      vector<l1t::CaloParams::Node> *ptr = 0;
      static ::TVirtualIsAProxy* isa_proxy = new ::TIsAProxy(typeid(vector<l1t::CaloParams::Node>));
      static ::ROOT::TGenericClassInfo 
         instance("vector<l1t::CaloParams::Node>", -2, "vector", 214,
                  typeid(vector<l1t::CaloParams::Node>), ::ROOT::Internal::DefineBehavior(ptr, ptr),
                  &vectorlEl1tcLcLCaloParamscLcLNodegR_Dictionary, isa_proxy, 4,
                  sizeof(vector<l1t::CaloParams::Node>) );
      instance.SetNew(&new_vectorlEl1tcLcLCaloParamscLcLNodegR);
      instance.SetNewArray(&newArray_vectorlEl1tcLcLCaloParamscLcLNodegR);
      instance.SetDelete(&delete_vectorlEl1tcLcLCaloParamscLcLNodegR);
      instance.SetDeleteArray(&deleteArray_vectorlEl1tcLcLCaloParamscLcLNodegR);
      instance.SetDestructor(&destruct_vectorlEl1tcLcLCaloParamscLcLNodegR);
      instance.AdoptCollectionProxyInfo(TCollectionProxyInfo::Generate(TCollectionProxyInfo::Pushback< vector<l1t::CaloParams::Node> >()));
      return &instance;
   }
   // Static variable to force the class initialization
   static ::ROOT::TGenericClassInfo *_R__UNIQUE_(Init) = GenerateInitInstanceLocal((const vector<l1t::CaloParams::Node>*)0x0); R__UseDummy(_R__UNIQUE_(Init));

   // Dictionary for non-ClassDef classes
   static TClass *vectorlEl1tcLcLCaloParamscLcLNodegR_Dictionary() {
      TClass* theClass =::ROOT::GenerateInitInstanceLocal((const vector<l1t::CaloParams::Node>*)0x0)->GetClass();
      vectorlEl1tcLcLCaloParamscLcLNodegR_TClassManip(theClass);
   return theClass;
   }

   static void vectorlEl1tcLcLCaloParamscLcLNodegR_TClassManip(TClass* ){
   }

} // end of namespace ROOT

namespace ROOT {
   // Wrappers around operator new
   static void *new_vectorlEl1tcLcLCaloParamscLcLNodegR(void *p) {
      return  p ? ::new((::ROOT::Internal::TOperatorNewHelper*)p) vector<l1t::CaloParams::Node> : new vector<l1t::CaloParams::Node>;
   }
   static void *newArray_vectorlEl1tcLcLCaloParamscLcLNodegR(Long_t nElements, void *p) {
      return p ? ::new((::ROOT::Internal::TOperatorNewHelper*)p) vector<l1t::CaloParams::Node>[nElements] : new vector<l1t::CaloParams::Node>[nElements];
   }
   // Wrapper around operator delete
   static void delete_vectorlEl1tcLcLCaloParamscLcLNodegR(void *p) {
      delete ((vector<l1t::CaloParams::Node>*)p);
   }
   static void deleteArray_vectorlEl1tcLcLCaloParamscLcLNodegR(void *p) {
      delete [] ((vector<l1t::CaloParams::Node>*)p);
   }
   static void destruct_vectorlEl1tcLcLCaloParamscLcLNodegR(void *p) {
      typedef vector<l1t::CaloParams::Node> current_t;
      ((current_t*)p)->~current_t();
   }
} // end of namespace ROOT for class vector<l1t::CaloParams::Node>

namespace ROOT {
   static TClass *vectorlERPCPatterngR_Dictionary();
   static void vectorlERPCPatterngR_TClassManip(TClass*);
   static void *new_vectorlERPCPatterngR(void *p = 0);
   static void *newArray_vectorlERPCPatterngR(Long_t size, void *p);
   static void delete_vectorlERPCPatterngR(void *p);
   static void deleteArray_vectorlERPCPatterngR(void *p);
   static void destruct_vectorlERPCPatterngR(void *p);

   // Function generating the singleton type initializer
   static TGenericClassInfo *GenerateInitInstanceLocal(const vector<RPCPattern>*)
   {
      vector<RPCPattern> *ptr = 0;
      static ::TVirtualIsAProxy* isa_proxy = new ::TIsAProxy(typeid(vector<RPCPattern>));
      static ::ROOT::TGenericClassInfo 
         instance("vector<RPCPattern>", -2, "vector", 214,
                  typeid(vector<RPCPattern>), ::ROOT::Internal::DefineBehavior(ptr, ptr),
                  &vectorlERPCPatterngR_Dictionary, isa_proxy, 4,
                  sizeof(vector<RPCPattern>) );
      instance.SetNew(&new_vectorlERPCPatterngR);
      instance.SetNewArray(&newArray_vectorlERPCPatterngR);
      instance.SetDelete(&delete_vectorlERPCPatterngR);
      instance.SetDeleteArray(&deleteArray_vectorlERPCPatterngR);
      instance.SetDestructor(&destruct_vectorlERPCPatterngR);
      instance.AdoptCollectionProxyInfo(TCollectionProxyInfo::Generate(TCollectionProxyInfo::Pushback< vector<RPCPattern> >()));
      return &instance;
   }
   // Static variable to force the class initialization
   static ::ROOT::TGenericClassInfo *_R__UNIQUE_(Init) = GenerateInitInstanceLocal((const vector<RPCPattern>*)0x0); R__UseDummy(_R__UNIQUE_(Init));

   // Dictionary for non-ClassDef classes
   static TClass *vectorlERPCPatterngR_Dictionary() {
      TClass* theClass =::ROOT::GenerateInitInstanceLocal((const vector<RPCPattern>*)0x0)->GetClass();
      vectorlERPCPatterngR_TClassManip(theClass);
   return theClass;
   }

   static void vectorlERPCPatterngR_TClassManip(TClass* ){
   }

} // end of namespace ROOT

namespace ROOT {
   // Wrappers around operator new
   static void *new_vectorlERPCPatterngR(void *p) {
      return  p ? ::new((::ROOT::Internal::TOperatorNewHelper*)p) vector<RPCPattern> : new vector<RPCPattern>;
   }
   static void *newArray_vectorlERPCPatterngR(Long_t nElements, void *p) {
      return p ? ::new((::ROOT::Internal::TOperatorNewHelper*)p) vector<RPCPattern>[nElements] : new vector<RPCPattern>[nElements];
   }
   // Wrapper around operator delete
   static void delete_vectorlERPCPatterngR(void *p) {
      delete ((vector<RPCPattern>*)p);
   }
   static void deleteArray_vectorlERPCPatterngR(void *p) {
      delete [] ((vector<RPCPattern>*)p);
   }
   static void destruct_vectorlERPCPatterngR(void *p) {
      typedef vector<RPCPattern> current_t;
      ((current_t*)p)->~current_t();
   }
} // end of namespace ROOT for class vector<RPCPattern>

namespace ROOT {
   static TClass *vectorlERPCPatterncLcLTQualitygR_Dictionary();
   static void vectorlERPCPatterncLcLTQualitygR_TClassManip(TClass*);
   static void *new_vectorlERPCPatterncLcLTQualitygR(void *p = 0);
   static void *newArray_vectorlERPCPatterncLcLTQualitygR(Long_t size, void *p);
   static void delete_vectorlERPCPatterncLcLTQualitygR(void *p);
   static void deleteArray_vectorlERPCPatterncLcLTQualitygR(void *p);
   static void destruct_vectorlERPCPatterncLcLTQualitygR(void *p);

   // Function generating the singleton type initializer
   static TGenericClassInfo *GenerateInitInstanceLocal(const vector<RPCPattern::TQuality>*)
   {
      vector<RPCPattern::TQuality> *ptr = 0;
      static ::TVirtualIsAProxy* isa_proxy = new ::TIsAProxy(typeid(vector<RPCPattern::TQuality>));
      static ::ROOT::TGenericClassInfo 
         instance("vector<RPCPattern::TQuality>", -2, "vector", 214,
                  typeid(vector<RPCPattern::TQuality>), ::ROOT::Internal::DefineBehavior(ptr, ptr),
                  &vectorlERPCPatterncLcLTQualitygR_Dictionary, isa_proxy, 4,
                  sizeof(vector<RPCPattern::TQuality>) );
      instance.SetNew(&new_vectorlERPCPatterncLcLTQualitygR);
      instance.SetNewArray(&newArray_vectorlERPCPatterncLcLTQualitygR);
      instance.SetDelete(&delete_vectorlERPCPatterncLcLTQualitygR);
      instance.SetDeleteArray(&deleteArray_vectorlERPCPatterncLcLTQualitygR);
      instance.SetDestructor(&destruct_vectorlERPCPatterncLcLTQualitygR);
      instance.AdoptCollectionProxyInfo(TCollectionProxyInfo::Generate(TCollectionProxyInfo::Pushback< vector<RPCPattern::TQuality> >()));
      return &instance;
   }
   // Static variable to force the class initialization
   static ::ROOT::TGenericClassInfo *_R__UNIQUE_(Init) = GenerateInitInstanceLocal((const vector<RPCPattern::TQuality>*)0x0); R__UseDummy(_R__UNIQUE_(Init));

   // Dictionary for non-ClassDef classes
   static TClass *vectorlERPCPatterncLcLTQualitygR_Dictionary() {
      TClass* theClass =::ROOT::GenerateInitInstanceLocal((const vector<RPCPattern::TQuality>*)0x0)->GetClass();
      vectorlERPCPatterncLcLTQualitygR_TClassManip(theClass);
   return theClass;
   }

   static void vectorlERPCPatterncLcLTQualitygR_TClassManip(TClass* ){
   }

} // end of namespace ROOT

namespace ROOT {
   // Wrappers around operator new
   static void *new_vectorlERPCPatterncLcLTQualitygR(void *p) {
      return  p ? ::new((::ROOT::Internal::TOperatorNewHelper*)p) vector<RPCPattern::TQuality> : new vector<RPCPattern::TQuality>;
   }
   static void *newArray_vectorlERPCPatterncLcLTQualitygR(Long_t nElements, void *p) {
      return p ? ::new((::ROOT::Internal::TOperatorNewHelper*)p) vector<RPCPattern::TQuality>[nElements] : new vector<RPCPattern::TQuality>[nElements];
   }
   // Wrapper around operator delete
   static void delete_vectorlERPCPatterncLcLTQualitygR(void *p) {
      delete ((vector<RPCPattern::TQuality>*)p);
   }
   static void deleteArray_vectorlERPCPatterncLcLTQualitygR(void *p) {
      delete [] ((vector<RPCPattern::TQuality>*)p);
   }
   static void destruct_vectorlERPCPatterncLcLTQualitygR(void *p) {
      typedef vector<RPCPattern::TQuality> current_t;
      ((current_t*)p)->~current_t();
   }
} // end of namespace ROOT for class vector<RPCPattern::TQuality>

namespace ROOT {
   static TClass *vectorlEL1TUtmTriggerMenugR_Dictionary();
   static void vectorlEL1TUtmTriggerMenugR_TClassManip(TClass*);
   static void *new_vectorlEL1TUtmTriggerMenugR(void *p = 0);
   static void *newArray_vectorlEL1TUtmTriggerMenugR(Long_t size, void *p);
   static void delete_vectorlEL1TUtmTriggerMenugR(void *p);
   static void deleteArray_vectorlEL1TUtmTriggerMenugR(void *p);
   static void destruct_vectorlEL1TUtmTriggerMenugR(void *p);

   // Function generating the singleton type initializer
   static TGenericClassInfo *GenerateInitInstanceLocal(const vector<L1TUtmTriggerMenu>*)
   {
      vector<L1TUtmTriggerMenu> *ptr = 0;
      static ::TVirtualIsAProxy* isa_proxy = new ::TIsAProxy(typeid(vector<L1TUtmTriggerMenu>));
      static ::ROOT::TGenericClassInfo 
         instance("vector<L1TUtmTriggerMenu>", -2, "vector", 214,
                  typeid(vector<L1TUtmTriggerMenu>), ::ROOT::Internal::DefineBehavior(ptr, ptr),
                  &vectorlEL1TUtmTriggerMenugR_Dictionary, isa_proxy, 4,
                  sizeof(vector<L1TUtmTriggerMenu>) );
      instance.SetNew(&new_vectorlEL1TUtmTriggerMenugR);
      instance.SetNewArray(&newArray_vectorlEL1TUtmTriggerMenugR);
      instance.SetDelete(&delete_vectorlEL1TUtmTriggerMenugR);
      instance.SetDeleteArray(&deleteArray_vectorlEL1TUtmTriggerMenugR);
      instance.SetDestructor(&destruct_vectorlEL1TUtmTriggerMenugR);
      instance.AdoptCollectionProxyInfo(TCollectionProxyInfo::Generate(TCollectionProxyInfo::Pushback< vector<L1TUtmTriggerMenu> >()));
      return &instance;
   }
   // Static variable to force the class initialization
   static ::ROOT::TGenericClassInfo *_R__UNIQUE_(Init) = GenerateInitInstanceLocal((const vector<L1TUtmTriggerMenu>*)0x0); R__UseDummy(_R__UNIQUE_(Init));

   // Dictionary for non-ClassDef classes
   static TClass *vectorlEL1TUtmTriggerMenugR_Dictionary() {
      TClass* theClass =::ROOT::GenerateInitInstanceLocal((const vector<L1TUtmTriggerMenu>*)0x0)->GetClass();
      vectorlEL1TUtmTriggerMenugR_TClassManip(theClass);
   return theClass;
   }

   static void vectorlEL1TUtmTriggerMenugR_TClassManip(TClass* ){
   }

} // end of namespace ROOT

namespace ROOT {
   // Wrappers around operator new
   static void *new_vectorlEL1TUtmTriggerMenugR(void *p) {
      return  p ? ::new((::ROOT::Internal::TOperatorNewHelper*)p) vector<L1TUtmTriggerMenu> : new vector<L1TUtmTriggerMenu>;
   }
   static void *newArray_vectorlEL1TUtmTriggerMenugR(Long_t nElements, void *p) {
      return p ? ::new((::ROOT::Internal::TOperatorNewHelper*)p) vector<L1TUtmTriggerMenu>[nElements] : new vector<L1TUtmTriggerMenu>[nElements];
   }
   // Wrapper around operator delete
   static void delete_vectorlEL1TUtmTriggerMenugR(void *p) {
      delete ((vector<L1TUtmTriggerMenu>*)p);
   }
   static void deleteArray_vectorlEL1TUtmTriggerMenugR(void *p) {
      delete [] ((vector<L1TUtmTriggerMenu>*)p);
   }
   static void destruct_vectorlEL1TUtmTriggerMenugR(void *p) {
      typedef vector<L1TUtmTriggerMenu> current_t;
      ((current_t*)p)->~current_t();
   }
} // end of namespace ROOT for class vector<L1TUtmTriggerMenu>

namespace ROOT {
   static TClass *vectorlEL1TUtmScalegR_Dictionary();
   static void vectorlEL1TUtmScalegR_TClassManip(TClass*);
   static void *new_vectorlEL1TUtmScalegR(void *p = 0);
   static void *newArray_vectorlEL1TUtmScalegR(Long_t size, void *p);
   static void delete_vectorlEL1TUtmScalegR(void *p);
   static void deleteArray_vectorlEL1TUtmScalegR(void *p);
   static void destruct_vectorlEL1TUtmScalegR(void *p);

   // Function generating the singleton type initializer
   static TGenericClassInfo *GenerateInitInstanceLocal(const vector<L1TUtmScale>*)
   {
      vector<L1TUtmScale> *ptr = 0;
      static ::TVirtualIsAProxy* isa_proxy = new ::TIsAProxy(typeid(vector<L1TUtmScale>));
      static ::ROOT::TGenericClassInfo 
         instance("vector<L1TUtmScale>", -2, "vector", 214,
                  typeid(vector<L1TUtmScale>), ::ROOT::Internal::DefineBehavior(ptr, ptr),
                  &vectorlEL1TUtmScalegR_Dictionary, isa_proxy, 4,
                  sizeof(vector<L1TUtmScale>) );
      instance.SetNew(&new_vectorlEL1TUtmScalegR);
      instance.SetNewArray(&newArray_vectorlEL1TUtmScalegR);
      instance.SetDelete(&delete_vectorlEL1TUtmScalegR);
      instance.SetDeleteArray(&deleteArray_vectorlEL1TUtmScalegR);
      instance.SetDestructor(&destruct_vectorlEL1TUtmScalegR);
      instance.AdoptCollectionProxyInfo(TCollectionProxyInfo::Generate(TCollectionProxyInfo::Pushback< vector<L1TUtmScale> >()));
      return &instance;
   }
   // Static variable to force the class initialization
   static ::ROOT::TGenericClassInfo *_R__UNIQUE_(Init) = GenerateInitInstanceLocal((const vector<L1TUtmScale>*)0x0); R__UseDummy(_R__UNIQUE_(Init));

   // Dictionary for non-ClassDef classes
   static TClass *vectorlEL1TUtmScalegR_Dictionary() {
      TClass* theClass =::ROOT::GenerateInitInstanceLocal((const vector<L1TUtmScale>*)0x0)->GetClass();
      vectorlEL1TUtmScalegR_TClassManip(theClass);
   return theClass;
   }

   static void vectorlEL1TUtmScalegR_TClassManip(TClass* ){
   }

} // end of namespace ROOT

namespace ROOT {
   // Wrappers around operator new
   static void *new_vectorlEL1TUtmScalegR(void *p) {
      return  p ? ::new((::ROOT::Internal::TOperatorNewHelper*)p) vector<L1TUtmScale> : new vector<L1TUtmScale>;
   }
   static void *newArray_vectorlEL1TUtmScalegR(Long_t nElements, void *p) {
      return p ? ::new((::ROOT::Internal::TOperatorNewHelper*)p) vector<L1TUtmScale>[nElements] : new vector<L1TUtmScale>[nElements];
   }
   // Wrapper around operator delete
   static void delete_vectorlEL1TUtmScalegR(void *p) {
      delete ((vector<L1TUtmScale>*)p);
   }
   static void deleteArray_vectorlEL1TUtmScalegR(void *p) {
      delete [] ((vector<L1TUtmScale>*)p);
   }
   static void destruct_vectorlEL1TUtmScalegR(void *p) {
      typedef vector<L1TUtmScale> current_t;
      ((current_t*)p)->~current_t();
   }
} // end of namespace ROOT for class vector<L1TUtmScale>

namespace ROOT {
   static TClass *vectorlEL1TUtmObjectgR_Dictionary();
   static void vectorlEL1TUtmObjectgR_TClassManip(TClass*);
   static void *new_vectorlEL1TUtmObjectgR(void *p = 0);
   static void *newArray_vectorlEL1TUtmObjectgR(Long_t size, void *p);
   static void delete_vectorlEL1TUtmObjectgR(void *p);
   static void deleteArray_vectorlEL1TUtmObjectgR(void *p);
   static void destruct_vectorlEL1TUtmObjectgR(void *p);

   // Function generating the singleton type initializer
   static TGenericClassInfo *GenerateInitInstanceLocal(const vector<L1TUtmObject>*)
   {
      vector<L1TUtmObject> *ptr = 0;
      static ::TVirtualIsAProxy* isa_proxy = new ::TIsAProxy(typeid(vector<L1TUtmObject>));
      static ::ROOT::TGenericClassInfo 
         instance("vector<L1TUtmObject>", -2, "vector", 214,
                  typeid(vector<L1TUtmObject>), ::ROOT::Internal::DefineBehavior(ptr, ptr),
                  &vectorlEL1TUtmObjectgR_Dictionary, isa_proxy, 4,
                  sizeof(vector<L1TUtmObject>) );
      instance.SetNew(&new_vectorlEL1TUtmObjectgR);
      instance.SetNewArray(&newArray_vectorlEL1TUtmObjectgR);
      instance.SetDelete(&delete_vectorlEL1TUtmObjectgR);
      instance.SetDeleteArray(&deleteArray_vectorlEL1TUtmObjectgR);
      instance.SetDestructor(&destruct_vectorlEL1TUtmObjectgR);
      instance.AdoptCollectionProxyInfo(TCollectionProxyInfo::Generate(TCollectionProxyInfo::Pushback< vector<L1TUtmObject> >()));
      return &instance;
   }
   // Static variable to force the class initialization
   static ::ROOT::TGenericClassInfo *_R__UNIQUE_(Init) = GenerateInitInstanceLocal((const vector<L1TUtmObject>*)0x0); R__UseDummy(_R__UNIQUE_(Init));

   // Dictionary for non-ClassDef classes
   static TClass *vectorlEL1TUtmObjectgR_Dictionary() {
      TClass* theClass =::ROOT::GenerateInitInstanceLocal((const vector<L1TUtmObject>*)0x0)->GetClass();
      vectorlEL1TUtmObjectgR_TClassManip(theClass);
   return theClass;
   }

   static void vectorlEL1TUtmObjectgR_TClassManip(TClass* ){
   }

} // end of namespace ROOT

namespace ROOT {
   // Wrappers around operator new
   static void *new_vectorlEL1TUtmObjectgR(void *p) {
      return  p ? ::new((::ROOT::Internal::TOperatorNewHelper*)p) vector<L1TUtmObject> : new vector<L1TUtmObject>;
   }
   static void *newArray_vectorlEL1TUtmObjectgR(Long_t nElements, void *p) {
      return p ? ::new((::ROOT::Internal::TOperatorNewHelper*)p) vector<L1TUtmObject>[nElements] : new vector<L1TUtmObject>[nElements];
   }
   // Wrapper around operator delete
   static void delete_vectorlEL1TUtmObjectgR(void *p) {
      delete ((vector<L1TUtmObject>*)p);
   }
   static void deleteArray_vectorlEL1TUtmObjectgR(void *p) {
      delete [] ((vector<L1TUtmObject>*)p);
   }
   static void destruct_vectorlEL1TUtmObjectgR(void *p) {
      typedef vector<L1TUtmObject> current_t;
      ((current_t*)p)->~current_t();
   }
} // end of namespace ROOT for class vector<L1TUtmObject>

namespace ROOT {
   static TClass *vectorlEL1TUtmCutValuegR_Dictionary();
   static void vectorlEL1TUtmCutValuegR_TClassManip(TClass*);
   static void *new_vectorlEL1TUtmCutValuegR(void *p = 0);
   static void *newArray_vectorlEL1TUtmCutValuegR(Long_t size, void *p);
   static void delete_vectorlEL1TUtmCutValuegR(void *p);
   static void deleteArray_vectorlEL1TUtmCutValuegR(void *p);
   static void destruct_vectorlEL1TUtmCutValuegR(void *p);

   // Function generating the singleton type initializer
   static TGenericClassInfo *GenerateInitInstanceLocal(const vector<L1TUtmCutValue>*)
   {
      vector<L1TUtmCutValue> *ptr = 0;
      static ::TVirtualIsAProxy* isa_proxy = new ::TIsAProxy(typeid(vector<L1TUtmCutValue>));
      static ::ROOT::TGenericClassInfo 
         instance("vector<L1TUtmCutValue>", -2, "vector", 214,
                  typeid(vector<L1TUtmCutValue>), ::ROOT::Internal::DefineBehavior(ptr, ptr),
                  &vectorlEL1TUtmCutValuegR_Dictionary, isa_proxy, 4,
                  sizeof(vector<L1TUtmCutValue>) );
      instance.SetNew(&new_vectorlEL1TUtmCutValuegR);
      instance.SetNewArray(&newArray_vectorlEL1TUtmCutValuegR);
      instance.SetDelete(&delete_vectorlEL1TUtmCutValuegR);
      instance.SetDeleteArray(&deleteArray_vectorlEL1TUtmCutValuegR);
      instance.SetDestructor(&destruct_vectorlEL1TUtmCutValuegR);
      instance.AdoptCollectionProxyInfo(TCollectionProxyInfo::Generate(TCollectionProxyInfo::Pushback< vector<L1TUtmCutValue> >()));
      return &instance;
   }
   // Static variable to force the class initialization
   static ::ROOT::TGenericClassInfo *_R__UNIQUE_(Init) = GenerateInitInstanceLocal((const vector<L1TUtmCutValue>*)0x0); R__UseDummy(_R__UNIQUE_(Init));

   // Dictionary for non-ClassDef classes
   static TClass *vectorlEL1TUtmCutValuegR_Dictionary() {
      TClass* theClass =::ROOT::GenerateInitInstanceLocal((const vector<L1TUtmCutValue>*)0x0)->GetClass();
      vectorlEL1TUtmCutValuegR_TClassManip(theClass);
   return theClass;
   }

   static void vectorlEL1TUtmCutValuegR_TClassManip(TClass* ){
   }

} // end of namespace ROOT

namespace ROOT {
   // Wrappers around operator new
   static void *new_vectorlEL1TUtmCutValuegR(void *p) {
      return  p ? ::new((::ROOT::Internal::TOperatorNewHelper*)p) vector<L1TUtmCutValue> : new vector<L1TUtmCutValue>;
   }
   static void *newArray_vectorlEL1TUtmCutValuegR(Long_t nElements, void *p) {
      return p ? ::new((::ROOT::Internal::TOperatorNewHelper*)p) vector<L1TUtmCutValue>[nElements] : new vector<L1TUtmCutValue>[nElements];
   }
   // Wrapper around operator delete
   static void delete_vectorlEL1TUtmCutValuegR(void *p) {
      delete ((vector<L1TUtmCutValue>*)p);
   }
   static void deleteArray_vectorlEL1TUtmCutValuegR(void *p) {
      delete [] ((vector<L1TUtmCutValue>*)p);
   }
   static void destruct_vectorlEL1TUtmCutValuegR(void *p) {
      typedef vector<L1TUtmCutValue> current_t;
      ((current_t*)p)->~current_t();
   }
} // end of namespace ROOT for class vector<L1TUtmCutValue>

namespace ROOT {
   static TClass *vectorlEL1TUtmCutgR_Dictionary();
   static void vectorlEL1TUtmCutgR_TClassManip(TClass*);
   static void *new_vectorlEL1TUtmCutgR(void *p = 0);
   static void *newArray_vectorlEL1TUtmCutgR(Long_t size, void *p);
   static void delete_vectorlEL1TUtmCutgR(void *p);
   static void deleteArray_vectorlEL1TUtmCutgR(void *p);
   static void destruct_vectorlEL1TUtmCutgR(void *p);

   // Function generating the singleton type initializer
   static TGenericClassInfo *GenerateInitInstanceLocal(const vector<L1TUtmCut>*)
   {
      vector<L1TUtmCut> *ptr = 0;
      static ::TVirtualIsAProxy* isa_proxy = new ::TIsAProxy(typeid(vector<L1TUtmCut>));
      static ::ROOT::TGenericClassInfo 
         instance("vector<L1TUtmCut>", -2, "vector", 214,
                  typeid(vector<L1TUtmCut>), ::ROOT::Internal::DefineBehavior(ptr, ptr),
                  &vectorlEL1TUtmCutgR_Dictionary, isa_proxy, 4,
                  sizeof(vector<L1TUtmCut>) );
      instance.SetNew(&new_vectorlEL1TUtmCutgR);
      instance.SetNewArray(&newArray_vectorlEL1TUtmCutgR);
      instance.SetDelete(&delete_vectorlEL1TUtmCutgR);
      instance.SetDeleteArray(&deleteArray_vectorlEL1TUtmCutgR);
      instance.SetDestructor(&destruct_vectorlEL1TUtmCutgR);
      instance.AdoptCollectionProxyInfo(TCollectionProxyInfo::Generate(TCollectionProxyInfo::Pushback< vector<L1TUtmCut> >()));
      return &instance;
   }
   // Static variable to force the class initialization
   static ::ROOT::TGenericClassInfo *_R__UNIQUE_(Init) = GenerateInitInstanceLocal((const vector<L1TUtmCut>*)0x0); R__UseDummy(_R__UNIQUE_(Init));

   // Dictionary for non-ClassDef classes
   static TClass *vectorlEL1TUtmCutgR_Dictionary() {
      TClass* theClass =::ROOT::GenerateInitInstanceLocal((const vector<L1TUtmCut>*)0x0)->GetClass();
      vectorlEL1TUtmCutgR_TClassManip(theClass);
   return theClass;
   }

   static void vectorlEL1TUtmCutgR_TClassManip(TClass* ){
   }

} // end of namespace ROOT

namespace ROOT {
   // Wrappers around operator new
   static void *new_vectorlEL1TUtmCutgR(void *p) {
      return  p ? ::new((::ROOT::Internal::TOperatorNewHelper*)p) vector<L1TUtmCut> : new vector<L1TUtmCut>;
   }
   static void *newArray_vectorlEL1TUtmCutgR(Long_t nElements, void *p) {
      return p ? ::new((::ROOT::Internal::TOperatorNewHelper*)p) vector<L1TUtmCut>[nElements] : new vector<L1TUtmCut>[nElements];
   }
   // Wrapper around operator delete
   static void delete_vectorlEL1TUtmCutgR(void *p) {
      delete ((vector<L1TUtmCut>*)p);
   }
   static void deleteArray_vectorlEL1TUtmCutgR(void *p) {
      delete [] ((vector<L1TUtmCut>*)p);
   }
   static void destruct_vectorlEL1TUtmCutgR(void *p) {
      typedef vector<L1TUtmCut> current_t;
      ((current_t*)p)->~current_t();
   }
} // end of namespace ROOT for class vector<L1TUtmCut>

namespace ROOT {
   static TClass *vectorlEL1TUtmConditiongR_Dictionary();
   static void vectorlEL1TUtmConditiongR_TClassManip(TClass*);
   static void *new_vectorlEL1TUtmConditiongR(void *p = 0);
   static void *newArray_vectorlEL1TUtmConditiongR(Long_t size, void *p);
   static void delete_vectorlEL1TUtmConditiongR(void *p);
   static void deleteArray_vectorlEL1TUtmConditiongR(void *p);
   static void destruct_vectorlEL1TUtmConditiongR(void *p);

   // Function generating the singleton type initializer
   static TGenericClassInfo *GenerateInitInstanceLocal(const vector<L1TUtmCondition>*)
   {
      vector<L1TUtmCondition> *ptr = 0;
      static ::TVirtualIsAProxy* isa_proxy = new ::TIsAProxy(typeid(vector<L1TUtmCondition>));
      static ::ROOT::TGenericClassInfo 
         instance("vector<L1TUtmCondition>", -2, "vector", 214,
                  typeid(vector<L1TUtmCondition>), ::ROOT::Internal::DefineBehavior(ptr, ptr),
                  &vectorlEL1TUtmConditiongR_Dictionary, isa_proxy, 4,
                  sizeof(vector<L1TUtmCondition>) );
      instance.SetNew(&new_vectorlEL1TUtmConditiongR);
      instance.SetNewArray(&newArray_vectorlEL1TUtmConditiongR);
      instance.SetDelete(&delete_vectorlEL1TUtmConditiongR);
      instance.SetDeleteArray(&deleteArray_vectorlEL1TUtmConditiongR);
      instance.SetDestructor(&destruct_vectorlEL1TUtmConditiongR);
      instance.AdoptCollectionProxyInfo(TCollectionProxyInfo::Generate(TCollectionProxyInfo::Pushback< vector<L1TUtmCondition> >()));
      return &instance;
   }
   // Static variable to force the class initialization
   static ::ROOT::TGenericClassInfo *_R__UNIQUE_(Init) = GenerateInitInstanceLocal((const vector<L1TUtmCondition>*)0x0); R__UseDummy(_R__UNIQUE_(Init));

   // Dictionary for non-ClassDef classes
   static TClass *vectorlEL1TUtmConditiongR_Dictionary() {
      TClass* theClass =::ROOT::GenerateInitInstanceLocal((const vector<L1TUtmCondition>*)0x0)->GetClass();
      vectorlEL1TUtmConditiongR_TClassManip(theClass);
   return theClass;
   }

   static void vectorlEL1TUtmConditiongR_TClassManip(TClass* ){
   }

} // end of namespace ROOT

namespace ROOT {
   // Wrappers around operator new
   static void *new_vectorlEL1TUtmConditiongR(void *p) {
      return  p ? ::new((::ROOT::Internal::TOperatorNewHelper*)p) vector<L1TUtmCondition> : new vector<L1TUtmCondition>;
   }
   static void *newArray_vectorlEL1TUtmConditiongR(Long_t nElements, void *p) {
      return p ? ::new((::ROOT::Internal::TOperatorNewHelper*)p) vector<L1TUtmCondition>[nElements] : new vector<L1TUtmCondition>[nElements];
   }
   // Wrapper around operator delete
   static void delete_vectorlEL1TUtmConditiongR(void *p) {
      delete ((vector<L1TUtmCondition>*)p);
   }
   static void deleteArray_vectorlEL1TUtmConditiongR(void *p) {
      delete [] ((vector<L1TUtmCondition>*)p);
   }
   static void destruct_vectorlEL1TUtmConditiongR(void *p) {
      typedef vector<L1TUtmCondition> current_t;
      ((current_t*)p)->~current_t();
   }
} // end of namespace ROOT for class vector<L1TUtmCondition>

namespace ROOT {
   static TClass *vectorlEL1TUtmBingR_Dictionary();
   static void vectorlEL1TUtmBingR_TClassManip(TClass*);
   static void *new_vectorlEL1TUtmBingR(void *p = 0);
   static void *newArray_vectorlEL1TUtmBingR(Long_t size, void *p);
   static void delete_vectorlEL1TUtmBingR(void *p);
   static void deleteArray_vectorlEL1TUtmBingR(void *p);
   static void destruct_vectorlEL1TUtmBingR(void *p);

   // Function generating the singleton type initializer
   static TGenericClassInfo *GenerateInitInstanceLocal(const vector<L1TUtmBin>*)
   {
      vector<L1TUtmBin> *ptr = 0;
      static ::TVirtualIsAProxy* isa_proxy = new ::TIsAProxy(typeid(vector<L1TUtmBin>));
      static ::ROOT::TGenericClassInfo 
         instance("vector<L1TUtmBin>", -2, "vector", 214,
                  typeid(vector<L1TUtmBin>), ::ROOT::Internal::DefineBehavior(ptr, ptr),
                  &vectorlEL1TUtmBingR_Dictionary, isa_proxy, 4,
                  sizeof(vector<L1TUtmBin>) );
      instance.SetNew(&new_vectorlEL1TUtmBingR);
      instance.SetNewArray(&newArray_vectorlEL1TUtmBingR);
      instance.SetDelete(&delete_vectorlEL1TUtmBingR);
      instance.SetDeleteArray(&deleteArray_vectorlEL1TUtmBingR);
      instance.SetDestructor(&destruct_vectorlEL1TUtmBingR);
      instance.AdoptCollectionProxyInfo(TCollectionProxyInfo::Generate(TCollectionProxyInfo::Pushback< vector<L1TUtmBin> >()));
      return &instance;
   }
   // Static variable to force the class initialization
   static ::ROOT::TGenericClassInfo *_R__UNIQUE_(Init) = GenerateInitInstanceLocal((const vector<L1TUtmBin>*)0x0); R__UseDummy(_R__UNIQUE_(Init));

   // Dictionary for non-ClassDef classes
   static TClass *vectorlEL1TUtmBingR_Dictionary() {
      TClass* theClass =::ROOT::GenerateInitInstanceLocal((const vector<L1TUtmBin>*)0x0)->GetClass();
      vectorlEL1TUtmBingR_TClassManip(theClass);
   return theClass;
   }

   static void vectorlEL1TUtmBingR_TClassManip(TClass* ){
   }

} // end of namespace ROOT

namespace ROOT {
   // Wrappers around operator new
   static void *new_vectorlEL1TUtmBingR(void *p) {
      return  p ? ::new((::ROOT::Internal::TOperatorNewHelper*)p) vector<L1TUtmBin> : new vector<L1TUtmBin>;
   }
   static void *newArray_vectorlEL1TUtmBingR(Long_t nElements, void *p) {
      return p ? ::new((::ROOT::Internal::TOperatorNewHelper*)p) vector<L1TUtmBin>[nElements] : new vector<L1TUtmBin>[nElements];
   }
   // Wrapper around operator delete
   static void delete_vectorlEL1TUtmBingR(void *p) {
      delete ((vector<L1TUtmBin>*)p);
   }
   static void deleteArray_vectorlEL1TUtmBingR(void *p) {
      delete [] ((vector<L1TUtmBin>*)p);
   }
   static void destruct_vectorlEL1TUtmBingR(void *p) {
      typedef vector<L1TUtmBin> current_t;
      ((current_t*)p)->~current_t();
   }
} // end of namespace ROOT for class vector<L1TUtmBin>

namespace ROOT {
   static TClass *vectorlEL1TUtmAlgorithmgR_Dictionary();
   static void vectorlEL1TUtmAlgorithmgR_TClassManip(TClass*);
   static void *new_vectorlEL1TUtmAlgorithmgR(void *p = 0);
   static void *newArray_vectorlEL1TUtmAlgorithmgR(Long_t size, void *p);
   static void delete_vectorlEL1TUtmAlgorithmgR(void *p);
   static void deleteArray_vectorlEL1TUtmAlgorithmgR(void *p);
   static void destruct_vectorlEL1TUtmAlgorithmgR(void *p);

   // Function generating the singleton type initializer
   static TGenericClassInfo *GenerateInitInstanceLocal(const vector<L1TUtmAlgorithm>*)
   {
      vector<L1TUtmAlgorithm> *ptr = 0;
      static ::TVirtualIsAProxy* isa_proxy = new ::TIsAProxy(typeid(vector<L1TUtmAlgorithm>));
      static ::ROOT::TGenericClassInfo 
         instance("vector<L1TUtmAlgorithm>", -2, "vector", 214,
                  typeid(vector<L1TUtmAlgorithm>), ::ROOT::Internal::DefineBehavior(ptr, ptr),
                  &vectorlEL1TUtmAlgorithmgR_Dictionary, isa_proxy, 4,
                  sizeof(vector<L1TUtmAlgorithm>) );
      instance.SetNew(&new_vectorlEL1TUtmAlgorithmgR);
      instance.SetNewArray(&newArray_vectorlEL1TUtmAlgorithmgR);
      instance.SetDelete(&delete_vectorlEL1TUtmAlgorithmgR);
      instance.SetDeleteArray(&deleteArray_vectorlEL1TUtmAlgorithmgR);
      instance.SetDestructor(&destruct_vectorlEL1TUtmAlgorithmgR);
      instance.AdoptCollectionProxyInfo(TCollectionProxyInfo::Generate(TCollectionProxyInfo::Pushback< vector<L1TUtmAlgorithm> >()));
      return &instance;
   }
   // Static variable to force the class initialization
   static ::ROOT::TGenericClassInfo *_R__UNIQUE_(Init) = GenerateInitInstanceLocal((const vector<L1TUtmAlgorithm>*)0x0); R__UseDummy(_R__UNIQUE_(Init));

   // Dictionary for non-ClassDef classes
   static TClass *vectorlEL1TUtmAlgorithmgR_Dictionary() {
      TClass* theClass =::ROOT::GenerateInitInstanceLocal((const vector<L1TUtmAlgorithm>*)0x0)->GetClass();
      vectorlEL1TUtmAlgorithmgR_TClassManip(theClass);
   return theClass;
   }

   static void vectorlEL1TUtmAlgorithmgR_TClassManip(TClass* ){
   }

} // end of namespace ROOT

namespace ROOT {
   // Wrappers around operator new
   static void *new_vectorlEL1TUtmAlgorithmgR(void *p) {
      return  p ? ::new((::ROOT::Internal::TOperatorNewHelper*)p) vector<L1TUtmAlgorithm> : new vector<L1TUtmAlgorithm>;
   }
   static void *newArray_vectorlEL1TUtmAlgorithmgR(Long_t nElements, void *p) {
      return p ? ::new((::ROOT::Internal::TOperatorNewHelper*)p) vector<L1TUtmAlgorithm>[nElements] : new vector<L1TUtmAlgorithm>[nElements];
   }
   // Wrapper around operator delete
   static void delete_vectorlEL1TUtmAlgorithmgR(void *p) {
      delete ((vector<L1TUtmAlgorithm>*)p);
   }
   static void deleteArray_vectorlEL1TUtmAlgorithmgR(void *p) {
      delete [] ((vector<L1TUtmAlgorithm>*)p);
   }
   static void destruct_vectorlEL1TUtmAlgorithmgR(void *p) {
      typedef vector<L1TUtmAlgorithm> current_t;
      ((current_t*)p)->~current_t();
   }
} // end of namespace ROOT for class vector<L1TUtmAlgorithm>

namespace ROOT {
   static TClass *vectorlEL1TMuonOverlapParamscLcLNodegR_Dictionary();
   static void vectorlEL1TMuonOverlapParamscLcLNodegR_TClassManip(TClass*);
   static void *new_vectorlEL1TMuonOverlapParamscLcLNodegR(void *p = 0);
   static void *newArray_vectorlEL1TMuonOverlapParamscLcLNodegR(Long_t size, void *p);
   static void delete_vectorlEL1TMuonOverlapParamscLcLNodegR(void *p);
   static void deleteArray_vectorlEL1TMuonOverlapParamscLcLNodegR(void *p);
   static void destruct_vectorlEL1TMuonOverlapParamscLcLNodegR(void *p);

   // Function generating the singleton type initializer
   static TGenericClassInfo *GenerateInitInstanceLocal(const vector<L1TMuonOverlapParams::Node>*)
   {
      vector<L1TMuonOverlapParams::Node> *ptr = 0;
      static ::TVirtualIsAProxy* isa_proxy = new ::TIsAProxy(typeid(vector<L1TMuonOverlapParams::Node>));
      static ::ROOT::TGenericClassInfo 
         instance("vector<L1TMuonOverlapParams::Node>", -2, "vector", 214,
                  typeid(vector<L1TMuonOverlapParams::Node>), ::ROOT::Internal::DefineBehavior(ptr, ptr),
                  &vectorlEL1TMuonOverlapParamscLcLNodegR_Dictionary, isa_proxy, 4,
                  sizeof(vector<L1TMuonOverlapParams::Node>) );
      instance.SetNew(&new_vectorlEL1TMuonOverlapParamscLcLNodegR);
      instance.SetNewArray(&newArray_vectorlEL1TMuonOverlapParamscLcLNodegR);
      instance.SetDelete(&delete_vectorlEL1TMuonOverlapParamscLcLNodegR);
      instance.SetDeleteArray(&deleteArray_vectorlEL1TMuonOverlapParamscLcLNodegR);
      instance.SetDestructor(&destruct_vectorlEL1TMuonOverlapParamscLcLNodegR);
      instance.AdoptCollectionProxyInfo(TCollectionProxyInfo::Generate(TCollectionProxyInfo::Pushback< vector<L1TMuonOverlapParams::Node> >()));
      return &instance;
   }
   // Static variable to force the class initialization
   static ::ROOT::TGenericClassInfo *_R__UNIQUE_(Init) = GenerateInitInstanceLocal((const vector<L1TMuonOverlapParams::Node>*)0x0); R__UseDummy(_R__UNIQUE_(Init));

   // Dictionary for non-ClassDef classes
   static TClass *vectorlEL1TMuonOverlapParamscLcLNodegR_Dictionary() {
      TClass* theClass =::ROOT::GenerateInitInstanceLocal((const vector<L1TMuonOverlapParams::Node>*)0x0)->GetClass();
      vectorlEL1TMuonOverlapParamscLcLNodegR_TClassManip(theClass);
   return theClass;
   }

   static void vectorlEL1TMuonOverlapParamscLcLNodegR_TClassManip(TClass* ){
   }

} // end of namespace ROOT

namespace ROOT {
   // Wrappers around operator new
   static void *new_vectorlEL1TMuonOverlapParamscLcLNodegR(void *p) {
      return  p ? ::new((::ROOT::Internal::TOperatorNewHelper*)p) vector<L1TMuonOverlapParams::Node> : new vector<L1TMuonOverlapParams::Node>;
   }
   static void *newArray_vectorlEL1TMuonOverlapParamscLcLNodegR(Long_t nElements, void *p) {
      return p ? ::new((::ROOT::Internal::TOperatorNewHelper*)p) vector<L1TMuonOverlapParams::Node>[nElements] : new vector<L1TMuonOverlapParams::Node>[nElements];
   }
   // Wrapper around operator delete
   static void delete_vectorlEL1TMuonOverlapParamscLcLNodegR(void *p) {
      delete ((vector<L1TMuonOverlapParams::Node>*)p);
   }
   static void deleteArray_vectorlEL1TMuonOverlapParamscLcLNodegR(void *p) {
      delete [] ((vector<L1TMuonOverlapParams::Node>*)p);
   }
   static void destruct_vectorlEL1TMuonOverlapParamscLcLNodegR(void *p) {
      typedef vector<L1TMuonOverlapParams::Node> current_t;
      ((current_t*)p)->~current_t();
   }
} // end of namespace ROOT for class vector<L1TMuonOverlapParams::Node>

namespace ROOT {
   static TClass *vectorlEL1TMuonBarrelParamscLcLNodegR_Dictionary();
   static void vectorlEL1TMuonBarrelParamscLcLNodegR_TClassManip(TClass*);
   static void *new_vectorlEL1TMuonBarrelParamscLcLNodegR(void *p = 0);
   static void *newArray_vectorlEL1TMuonBarrelParamscLcLNodegR(Long_t size, void *p);
   static void delete_vectorlEL1TMuonBarrelParamscLcLNodegR(void *p);
   static void deleteArray_vectorlEL1TMuonBarrelParamscLcLNodegR(void *p);
   static void destruct_vectorlEL1TMuonBarrelParamscLcLNodegR(void *p);

   // Function generating the singleton type initializer
   static TGenericClassInfo *GenerateInitInstanceLocal(const vector<L1TMuonBarrelParams::Node>*)
   {
      vector<L1TMuonBarrelParams::Node> *ptr = 0;
      static ::TVirtualIsAProxy* isa_proxy = new ::TIsAProxy(typeid(vector<L1TMuonBarrelParams::Node>));
      static ::ROOT::TGenericClassInfo 
         instance("vector<L1TMuonBarrelParams::Node>", -2, "vector", 214,
                  typeid(vector<L1TMuonBarrelParams::Node>), ::ROOT::Internal::DefineBehavior(ptr, ptr),
                  &vectorlEL1TMuonBarrelParamscLcLNodegR_Dictionary, isa_proxy, 4,
                  sizeof(vector<L1TMuonBarrelParams::Node>) );
      instance.SetNew(&new_vectorlEL1TMuonBarrelParamscLcLNodegR);
      instance.SetNewArray(&newArray_vectorlEL1TMuonBarrelParamscLcLNodegR);
      instance.SetDelete(&delete_vectorlEL1TMuonBarrelParamscLcLNodegR);
      instance.SetDeleteArray(&deleteArray_vectorlEL1TMuonBarrelParamscLcLNodegR);
      instance.SetDestructor(&destruct_vectorlEL1TMuonBarrelParamscLcLNodegR);
      instance.AdoptCollectionProxyInfo(TCollectionProxyInfo::Generate(TCollectionProxyInfo::Pushback< vector<L1TMuonBarrelParams::Node> >()));
      return &instance;
   }
   // Static variable to force the class initialization
   static ::ROOT::TGenericClassInfo *_R__UNIQUE_(Init) = GenerateInitInstanceLocal((const vector<L1TMuonBarrelParams::Node>*)0x0); R__UseDummy(_R__UNIQUE_(Init));

   // Dictionary for non-ClassDef classes
   static TClass *vectorlEL1TMuonBarrelParamscLcLNodegR_Dictionary() {
      TClass* theClass =::ROOT::GenerateInitInstanceLocal((const vector<L1TMuonBarrelParams::Node>*)0x0)->GetClass();
      vectorlEL1TMuonBarrelParamscLcLNodegR_TClassManip(theClass);
   return theClass;
   }

   static void vectorlEL1TMuonBarrelParamscLcLNodegR_TClassManip(TClass* ){
   }

} // end of namespace ROOT

namespace ROOT {
   // Wrappers around operator new
   static void *new_vectorlEL1TMuonBarrelParamscLcLNodegR(void *p) {
      return  p ? ::new((::ROOT::Internal::TOperatorNewHelper*)p) vector<L1TMuonBarrelParams::Node> : new vector<L1TMuonBarrelParams::Node>;
   }
   static void *newArray_vectorlEL1TMuonBarrelParamscLcLNodegR(Long_t nElements, void *p) {
      return p ? ::new((::ROOT::Internal::TOperatorNewHelper*)p) vector<L1TMuonBarrelParams::Node>[nElements] : new vector<L1TMuonBarrelParams::Node>[nElements];
   }
   // Wrapper around operator delete
   static void delete_vectorlEL1TMuonBarrelParamscLcLNodegR(void *p) {
      delete ((vector<L1TMuonBarrelParams::Node>*)p);
   }
   static void deleteArray_vectorlEL1TMuonBarrelParamscLcLNodegR(void *p) {
      delete [] ((vector<L1TMuonBarrelParams::Node>*)p);
   }
   static void destruct_vectorlEL1TMuonBarrelParamscLcLNodegR(void *p) {
      typedef vector<L1TMuonBarrelParams::Node> current_t;
      ((current_t*)p)->~current_t();
   }
} // end of namespace ROOT for class vector<L1TMuonBarrelParams::Node>

namespace ROOT {
   static TClass *vectorlEL1TMuonBarrelParamscLcLLUTParamscLcLextLUTgR_Dictionary();
   static void vectorlEL1TMuonBarrelParamscLcLLUTParamscLcLextLUTgR_TClassManip(TClass*);
   static void *new_vectorlEL1TMuonBarrelParamscLcLLUTParamscLcLextLUTgR(void *p = 0);
   static void *newArray_vectorlEL1TMuonBarrelParamscLcLLUTParamscLcLextLUTgR(Long_t size, void *p);
   static void delete_vectorlEL1TMuonBarrelParamscLcLLUTParamscLcLextLUTgR(void *p);
   static void deleteArray_vectorlEL1TMuonBarrelParamscLcLLUTParamscLcLextLUTgR(void *p);
   static void destruct_vectorlEL1TMuonBarrelParamscLcLLUTParamscLcLextLUTgR(void *p);

   // Function generating the singleton type initializer
   static TGenericClassInfo *GenerateInitInstanceLocal(const vector<L1TMuonBarrelParams::LUTParams::extLUT>*)
   {
      vector<L1TMuonBarrelParams::LUTParams::extLUT> *ptr = 0;
      static ::TVirtualIsAProxy* isa_proxy = new ::TIsAProxy(typeid(vector<L1TMuonBarrelParams::LUTParams::extLUT>));
      static ::ROOT::TGenericClassInfo 
         instance("vector<L1TMuonBarrelParams::LUTParams::extLUT>", -2, "vector", 214,
                  typeid(vector<L1TMuonBarrelParams::LUTParams::extLUT>), ::ROOT::Internal::DefineBehavior(ptr, ptr),
                  &vectorlEL1TMuonBarrelParamscLcLLUTParamscLcLextLUTgR_Dictionary, isa_proxy, 4,
                  sizeof(vector<L1TMuonBarrelParams::LUTParams::extLUT>) );
      instance.SetNew(&new_vectorlEL1TMuonBarrelParamscLcLLUTParamscLcLextLUTgR);
      instance.SetNewArray(&newArray_vectorlEL1TMuonBarrelParamscLcLLUTParamscLcLextLUTgR);
      instance.SetDelete(&delete_vectorlEL1TMuonBarrelParamscLcLLUTParamscLcLextLUTgR);
      instance.SetDeleteArray(&deleteArray_vectorlEL1TMuonBarrelParamscLcLLUTParamscLcLextLUTgR);
      instance.SetDestructor(&destruct_vectorlEL1TMuonBarrelParamscLcLLUTParamscLcLextLUTgR);
      instance.AdoptCollectionProxyInfo(TCollectionProxyInfo::Generate(TCollectionProxyInfo::Pushback< vector<L1TMuonBarrelParams::LUTParams::extLUT> >()));
      return &instance;
   }
   // Static variable to force the class initialization
   static ::ROOT::TGenericClassInfo *_R__UNIQUE_(Init) = GenerateInitInstanceLocal((const vector<L1TMuonBarrelParams::LUTParams::extLUT>*)0x0); R__UseDummy(_R__UNIQUE_(Init));

   // Dictionary for non-ClassDef classes
   static TClass *vectorlEL1TMuonBarrelParamscLcLLUTParamscLcLextLUTgR_Dictionary() {
      TClass* theClass =::ROOT::GenerateInitInstanceLocal((const vector<L1TMuonBarrelParams::LUTParams::extLUT>*)0x0)->GetClass();
      vectorlEL1TMuonBarrelParamscLcLLUTParamscLcLextLUTgR_TClassManip(theClass);
   return theClass;
   }

   static void vectorlEL1TMuonBarrelParamscLcLLUTParamscLcLextLUTgR_TClassManip(TClass* ){
   }

} // end of namespace ROOT

namespace ROOT {
   // Wrappers around operator new
   static void *new_vectorlEL1TMuonBarrelParamscLcLLUTParamscLcLextLUTgR(void *p) {
      return  p ? ::new((::ROOT::Internal::TOperatorNewHelper*)p) vector<L1TMuonBarrelParams::LUTParams::extLUT> : new vector<L1TMuonBarrelParams::LUTParams::extLUT>;
   }
   static void *newArray_vectorlEL1TMuonBarrelParamscLcLLUTParamscLcLextLUTgR(Long_t nElements, void *p) {
      return p ? ::new((::ROOT::Internal::TOperatorNewHelper*)p) vector<L1TMuonBarrelParams::LUTParams::extLUT>[nElements] : new vector<L1TMuonBarrelParams::LUTParams::extLUT>[nElements];
   }
   // Wrapper around operator delete
   static void delete_vectorlEL1TMuonBarrelParamscLcLLUTParamscLcLextLUTgR(void *p) {
      delete ((vector<L1TMuonBarrelParams::LUTParams::extLUT>*)p);
   }
   static void deleteArray_vectorlEL1TMuonBarrelParamscLcLLUTParamscLcLextLUTgR(void *p) {
      delete [] ((vector<L1TMuonBarrelParams::LUTParams::extLUT>*)p);
   }
   static void destruct_vectorlEL1TMuonBarrelParamscLcLLUTParamscLcLextLUTgR(void *p) {
      typedef vector<L1TMuonBarrelParams::LUTParams::extLUT> current_t;
      ((current_t*)p)->~current_t();
   }
} // end of namespace ROOT for class vector<L1TMuonBarrelParams::LUTParams::extLUT>

namespace ROOT {
   static TClass *vectorlEL1RPCConeDefinitioncLcLTRingToTowergR_Dictionary();
   static void vectorlEL1RPCConeDefinitioncLcLTRingToTowergR_TClassManip(TClass*);
   static void *new_vectorlEL1RPCConeDefinitioncLcLTRingToTowergR(void *p = 0);
   static void *newArray_vectorlEL1RPCConeDefinitioncLcLTRingToTowergR(Long_t size, void *p);
   static void delete_vectorlEL1RPCConeDefinitioncLcLTRingToTowergR(void *p);
   static void deleteArray_vectorlEL1RPCConeDefinitioncLcLTRingToTowergR(void *p);
   static void destruct_vectorlEL1RPCConeDefinitioncLcLTRingToTowergR(void *p);

   // Function generating the singleton type initializer
   static TGenericClassInfo *GenerateInitInstanceLocal(const vector<L1RPCConeDefinition::TRingToTower>*)
   {
      vector<L1RPCConeDefinition::TRingToTower> *ptr = 0;
      static ::TVirtualIsAProxy* isa_proxy = new ::TIsAProxy(typeid(vector<L1RPCConeDefinition::TRingToTower>));
      static ::ROOT::TGenericClassInfo 
         instance("vector<L1RPCConeDefinition::TRingToTower>", -2, "vector", 214,
                  typeid(vector<L1RPCConeDefinition::TRingToTower>), ::ROOT::Internal::DefineBehavior(ptr, ptr),
                  &vectorlEL1RPCConeDefinitioncLcLTRingToTowergR_Dictionary, isa_proxy, 4,
                  sizeof(vector<L1RPCConeDefinition::TRingToTower>) );
      instance.SetNew(&new_vectorlEL1RPCConeDefinitioncLcLTRingToTowergR);
      instance.SetNewArray(&newArray_vectorlEL1RPCConeDefinitioncLcLTRingToTowergR);
      instance.SetDelete(&delete_vectorlEL1RPCConeDefinitioncLcLTRingToTowergR);
      instance.SetDeleteArray(&deleteArray_vectorlEL1RPCConeDefinitioncLcLTRingToTowergR);
      instance.SetDestructor(&destruct_vectorlEL1RPCConeDefinitioncLcLTRingToTowergR);
      instance.AdoptCollectionProxyInfo(TCollectionProxyInfo::Generate(TCollectionProxyInfo::Pushback< vector<L1RPCConeDefinition::TRingToTower> >()));
      return &instance;
   }
   // Static variable to force the class initialization
   static ::ROOT::TGenericClassInfo *_R__UNIQUE_(Init) = GenerateInitInstanceLocal((const vector<L1RPCConeDefinition::TRingToTower>*)0x0); R__UseDummy(_R__UNIQUE_(Init));

   // Dictionary for non-ClassDef classes
   static TClass *vectorlEL1RPCConeDefinitioncLcLTRingToTowergR_Dictionary() {
      TClass* theClass =::ROOT::GenerateInitInstanceLocal((const vector<L1RPCConeDefinition::TRingToTower>*)0x0)->GetClass();
      vectorlEL1RPCConeDefinitioncLcLTRingToTowergR_TClassManip(theClass);
   return theClass;
   }

   static void vectorlEL1RPCConeDefinitioncLcLTRingToTowergR_TClassManip(TClass* ){
   }

} // end of namespace ROOT

namespace ROOT {
   // Wrappers around operator new
   static void *new_vectorlEL1RPCConeDefinitioncLcLTRingToTowergR(void *p) {
      return  p ? ::new((::ROOT::Internal::TOperatorNewHelper*)p) vector<L1RPCConeDefinition::TRingToTower> : new vector<L1RPCConeDefinition::TRingToTower>;
   }
   static void *newArray_vectorlEL1RPCConeDefinitioncLcLTRingToTowergR(Long_t nElements, void *p) {
      return p ? ::new((::ROOT::Internal::TOperatorNewHelper*)p) vector<L1RPCConeDefinition::TRingToTower>[nElements] : new vector<L1RPCConeDefinition::TRingToTower>[nElements];
   }
   // Wrapper around operator delete
   static void delete_vectorlEL1RPCConeDefinitioncLcLTRingToTowergR(void *p) {
      delete ((vector<L1RPCConeDefinition::TRingToTower>*)p);
   }
   static void deleteArray_vectorlEL1RPCConeDefinitioncLcLTRingToTowergR(void *p) {
      delete [] ((vector<L1RPCConeDefinition::TRingToTower>*)p);
   }
   static void destruct_vectorlEL1RPCConeDefinitioncLcLTRingToTowergR(void *p) {
      typedef vector<L1RPCConeDefinition::TRingToTower> current_t;
      ((current_t*)p)->~current_t();
   }
} // end of namespace ROOT for class vector<L1RPCConeDefinition::TRingToTower>

namespace ROOT {
   static TClass *vectorlEL1RPCConeDefinitioncLcLTRingToLPgR_Dictionary();
   static void vectorlEL1RPCConeDefinitioncLcLTRingToLPgR_TClassManip(TClass*);
   static void *new_vectorlEL1RPCConeDefinitioncLcLTRingToLPgR(void *p = 0);
   static void *newArray_vectorlEL1RPCConeDefinitioncLcLTRingToLPgR(Long_t size, void *p);
   static void delete_vectorlEL1RPCConeDefinitioncLcLTRingToLPgR(void *p);
   static void deleteArray_vectorlEL1RPCConeDefinitioncLcLTRingToLPgR(void *p);
   static void destruct_vectorlEL1RPCConeDefinitioncLcLTRingToLPgR(void *p);

   // Function generating the singleton type initializer
   static TGenericClassInfo *GenerateInitInstanceLocal(const vector<L1RPCConeDefinition::TRingToLP>*)
   {
      vector<L1RPCConeDefinition::TRingToLP> *ptr = 0;
      static ::TVirtualIsAProxy* isa_proxy = new ::TIsAProxy(typeid(vector<L1RPCConeDefinition::TRingToLP>));
      static ::ROOT::TGenericClassInfo 
         instance("vector<L1RPCConeDefinition::TRingToLP>", -2, "vector", 214,
                  typeid(vector<L1RPCConeDefinition::TRingToLP>), ::ROOT::Internal::DefineBehavior(ptr, ptr),
                  &vectorlEL1RPCConeDefinitioncLcLTRingToLPgR_Dictionary, isa_proxy, 4,
                  sizeof(vector<L1RPCConeDefinition::TRingToLP>) );
      instance.SetNew(&new_vectorlEL1RPCConeDefinitioncLcLTRingToLPgR);
      instance.SetNewArray(&newArray_vectorlEL1RPCConeDefinitioncLcLTRingToLPgR);
      instance.SetDelete(&delete_vectorlEL1RPCConeDefinitioncLcLTRingToLPgR);
      instance.SetDeleteArray(&deleteArray_vectorlEL1RPCConeDefinitioncLcLTRingToLPgR);
      instance.SetDestructor(&destruct_vectorlEL1RPCConeDefinitioncLcLTRingToLPgR);
      instance.AdoptCollectionProxyInfo(TCollectionProxyInfo::Generate(TCollectionProxyInfo::Pushback< vector<L1RPCConeDefinition::TRingToLP> >()));
      return &instance;
   }
   // Static variable to force the class initialization
   static ::ROOT::TGenericClassInfo *_R__UNIQUE_(Init) = GenerateInitInstanceLocal((const vector<L1RPCConeDefinition::TRingToLP>*)0x0); R__UseDummy(_R__UNIQUE_(Init));

   // Dictionary for non-ClassDef classes
   static TClass *vectorlEL1RPCConeDefinitioncLcLTRingToLPgR_Dictionary() {
      TClass* theClass =::ROOT::GenerateInitInstanceLocal((const vector<L1RPCConeDefinition::TRingToLP>*)0x0)->GetClass();
      vectorlEL1RPCConeDefinitioncLcLTRingToLPgR_TClassManip(theClass);
   return theClass;
   }

   static void vectorlEL1RPCConeDefinitioncLcLTRingToLPgR_TClassManip(TClass* ){
   }

} // end of namespace ROOT

namespace ROOT {
   // Wrappers around operator new
   static void *new_vectorlEL1RPCConeDefinitioncLcLTRingToLPgR(void *p) {
      return  p ? ::new((::ROOT::Internal::TOperatorNewHelper*)p) vector<L1RPCConeDefinition::TRingToLP> : new vector<L1RPCConeDefinition::TRingToLP>;
   }
   static void *newArray_vectorlEL1RPCConeDefinitioncLcLTRingToLPgR(Long_t nElements, void *p) {
      return p ? ::new((::ROOT::Internal::TOperatorNewHelper*)p) vector<L1RPCConeDefinition::TRingToLP>[nElements] : new vector<L1RPCConeDefinition::TRingToLP>[nElements];
   }
   // Wrapper around operator delete
   static void delete_vectorlEL1RPCConeDefinitioncLcLTRingToLPgR(void *p) {
      delete ((vector<L1RPCConeDefinition::TRingToLP>*)p);
   }
   static void deleteArray_vectorlEL1RPCConeDefinitioncLcLTRingToLPgR(void *p) {
      delete [] ((vector<L1RPCConeDefinition::TRingToLP>*)p);
   }
   static void destruct_vectorlEL1RPCConeDefinitioncLcLTRingToLPgR(void *p) {
      typedef vector<L1RPCConeDefinition::TRingToLP> current_t;
      ((current_t*)p)->~current_t();
   }
} // end of namespace ROOT for class vector<L1RPCConeDefinition::TRingToLP>

namespace ROOT {
   static TClass *vectorlEL1RPCConeDefinitioncLcLTLPSizegR_Dictionary();
   static void vectorlEL1RPCConeDefinitioncLcLTLPSizegR_TClassManip(TClass*);
   static void *new_vectorlEL1RPCConeDefinitioncLcLTLPSizegR(void *p = 0);
   static void *newArray_vectorlEL1RPCConeDefinitioncLcLTLPSizegR(Long_t size, void *p);
   static void delete_vectorlEL1RPCConeDefinitioncLcLTLPSizegR(void *p);
   static void deleteArray_vectorlEL1RPCConeDefinitioncLcLTLPSizegR(void *p);
   static void destruct_vectorlEL1RPCConeDefinitioncLcLTLPSizegR(void *p);

   // Function generating the singleton type initializer
   static TGenericClassInfo *GenerateInitInstanceLocal(const vector<L1RPCConeDefinition::TLPSize>*)
   {
      vector<L1RPCConeDefinition::TLPSize> *ptr = 0;
      static ::TVirtualIsAProxy* isa_proxy = new ::TIsAProxy(typeid(vector<L1RPCConeDefinition::TLPSize>));
      static ::ROOT::TGenericClassInfo 
         instance("vector<L1RPCConeDefinition::TLPSize>", -2, "vector", 214,
                  typeid(vector<L1RPCConeDefinition::TLPSize>), ::ROOT::Internal::DefineBehavior(ptr, ptr),
                  &vectorlEL1RPCConeDefinitioncLcLTLPSizegR_Dictionary, isa_proxy, 4,
                  sizeof(vector<L1RPCConeDefinition::TLPSize>) );
      instance.SetNew(&new_vectorlEL1RPCConeDefinitioncLcLTLPSizegR);
      instance.SetNewArray(&newArray_vectorlEL1RPCConeDefinitioncLcLTLPSizegR);
      instance.SetDelete(&delete_vectorlEL1RPCConeDefinitioncLcLTLPSizegR);
      instance.SetDeleteArray(&deleteArray_vectorlEL1RPCConeDefinitioncLcLTLPSizegR);
      instance.SetDestructor(&destruct_vectorlEL1RPCConeDefinitioncLcLTLPSizegR);
      instance.AdoptCollectionProxyInfo(TCollectionProxyInfo::Generate(TCollectionProxyInfo::Pushback< vector<L1RPCConeDefinition::TLPSize> >()));
      return &instance;
   }
   // Static variable to force the class initialization
   static ::ROOT::TGenericClassInfo *_R__UNIQUE_(Init) = GenerateInitInstanceLocal((const vector<L1RPCConeDefinition::TLPSize>*)0x0); R__UseDummy(_R__UNIQUE_(Init));

   // Dictionary for non-ClassDef classes
   static TClass *vectorlEL1RPCConeDefinitioncLcLTLPSizegR_Dictionary() {
      TClass* theClass =::ROOT::GenerateInitInstanceLocal((const vector<L1RPCConeDefinition::TLPSize>*)0x0)->GetClass();
      vectorlEL1RPCConeDefinitioncLcLTLPSizegR_TClassManip(theClass);
   return theClass;
   }

   static void vectorlEL1RPCConeDefinitioncLcLTLPSizegR_TClassManip(TClass* ){
   }

} // end of namespace ROOT

namespace ROOT {
   // Wrappers around operator new
   static void *new_vectorlEL1RPCConeDefinitioncLcLTLPSizegR(void *p) {
      return  p ? ::new((::ROOT::Internal::TOperatorNewHelper*)p) vector<L1RPCConeDefinition::TLPSize> : new vector<L1RPCConeDefinition::TLPSize>;
   }
   static void *newArray_vectorlEL1RPCConeDefinitioncLcLTLPSizegR(Long_t nElements, void *p) {
      return p ? ::new((::ROOT::Internal::TOperatorNewHelper*)p) vector<L1RPCConeDefinition::TLPSize>[nElements] : new vector<L1RPCConeDefinition::TLPSize>[nElements];
   }
   // Wrapper around operator delete
   static void delete_vectorlEL1RPCConeDefinitioncLcLTLPSizegR(void *p) {
      delete ((vector<L1RPCConeDefinition::TLPSize>*)p);
   }
   static void deleteArray_vectorlEL1RPCConeDefinitioncLcLTLPSizegR(void *p) {
      delete [] ((vector<L1RPCConeDefinition::TLPSize>*)p);
   }
   static void destruct_vectorlEL1RPCConeDefinitioncLcLTLPSizegR(void *p) {
      typedef vector<L1RPCConeDefinition::TLPSize> current_t;
      ((current_t*)p)->~current_t();
   }
} // end of namespace ROOT for class vector<L1RPCConeDefinition::TLPSize>

namespace ROOT {
   static TClass *vectorlEL1MuDTExtLutcLcLLUTgR_Dictionary();
   static void vectorlEL1MuDTExtLutcLcLLUTgR_TClassManip(TClass*);
   static void *new_vectorlEL1MuDTExtLutcLcLLUTgR(void *p = 0);
   static void *newArray_vectorlEL1MuDTExtLutcLcLLUTgR(Long_t size, void *p);
   static void delete_vectorlEL1MuDTExtLutcLcLLUTgR(void *p);
   static void deleteArray_vectorlEL1MuDTExtLutcLcLLUTgR(void *p);
   static void destruct_vectorlEL1MuDTExtLutcLcLLUTgR(void *p);

   // Function generating the singleton type initializer
   static TGenericClassInfo *GenerateInitInstanceLocal(const vector<L1MuDTExtLut::LUT>*)
   {
      vector<L1MuDTExtLut::LUT> *ptr = 0;
      static ::TVirtualIsAProxy* isa_proxy = new ::TIsAProxy(typeid(vector<L1MuDTExtLut::LUT>));
      static ::ROOT::TGenericClassInfo 
         instance("vector<L1MuDTExtLut::LUT>", -2, "vector", 214,
                  typeid(vector<L1MuDTExtLut::LUT>), ::ROOT::Internal::DefineBehavior(ptr, ptr),
                  &vectorlEL1MuDTExtLutcLcLLUTgR_Dictionary, isa_proxy, 4,
                  sizeof(vector<L1MuDTExtLut::LUT>) );
      instance.SetNew(&new_vectorlEL1MuDTExtLutcLcLLUTgR);
      instance.SetNewArray(&newArray_vectorlEL1MuDTExtLutcLcLLUTgR);
      instance.SetDelete(&delete_vectorlEL1MuDTExtLutcLcLLUTgR);
      instance.SetDeleteArray(&deleteArray_vectorlEL1MuDTExtLutcLcLLUTgR);
      instance.SetDestructor(&destruct_vectorlEL1MuDTExtLutcLcLLUTgR);
      instance.AdoptCollectionProxyInfo(TCollectionProxyInfo::Generate(TCollectionProxyInfo::Pushback< vector<L1MuDTExtLut::LUT> >()));
      return &instance;
   }
   // Static variable to force the class initialization
   static ::ROOT::TGenericClassInfo *_R__UNIQUE_(Init) = GenerateInitInstanceLocal((const vector<L1MuDTExtLut::LUT>*)0x0); R__UseDummy(_R__UNIQUE_(Init));

   // Dictionary for non-ClassDef classes
   static TClass *vectorlEL1MuDTExtLutcLcLLUTgR_Dictionary() {
      TClass* theClass =::ROOT::GenerateInitInstanceLocal((const vector<L1MuDTExtLut::LUT>*)0x0)->GetClass();
      vectorlEL1MuDTExtLutcLcLLUTgR_TClassManip(theClass);
   return theClass;
   }

   static void vectorlEL1MuDTExtLutcLcLLUTgR_TClassManip(TClass* ){
   }

} // end of namespace ROOT

namespace ROOT {
   // Wrappers around operator new
   static void *new_vectorlEL1MuDTExtLutcLcLLUTgR(void *p) {
      return  p ? ::new((::ROOT::Internal::TOperatorNewHelper*)p) vector<L1MuDTExtLut::LUT> : new vector<L1MuDTExtLut::LUT>;
   }
   static void *newArray_vectorlEL1MuDTExtLutcLcLLUTgR(Long_t nElements, void *p) {
      return p ? ::new((::ROOT::Internal::TOperatorNewHelper*)p) vector<L1MuDTExtLut::LUT>[nElements] : new vector<L1MuDTExtLut::LUT>[nElements];
   }
   // Wrapper around operator delete
   static void delete_vectorlEL1MuDTExtLutcLcLLUTgR(void *p) {
      delete ((vector<L1MuDTExtLut::LUT>*)p);
   }
   static void deleteArray_vectorlEL1MuDTExtLutcLcLLUTgR(void *p) {
      delete [] ((vector<L1MuDTExtLut::LUT>*)p);
   }
   static void destruct_vectorlEL1MuDTExtLutcLcLLUTgR(void *p) {
      typedef vector<L1MuDTExtLut::LUT> current_t;
      ((current_t*)p)->~current_t();
   }
} // end of namespace ROOT for class vector<L1MuDTExtLut::LUT>

namespace ROOT {
   static TClass *vectorlEL1GtPsbQuadgR_Dictionary();
   static void vectorlEL1GtPsbQuadgR_TClassManip(TClass*);
   static void *new_vectorlEL1GtPsbQuadgR(void *p = 0);
   static void *newArray_vectorlEL1GtPsbQuadgR(Long_t size, void *p);
   static void delete_vectorlEL1GtPsbQuadgR(void *p);
   static void deleteArray_vectorlEL1GtPsbQuadgR(void *p);
   static void destruct_vectorlEL1GtPsbQuadgR(void *p);

   // Function generating the singleton type initializer
   static TGenericClassInfo *GenerateInitInstanceLocal(const vector<L1GtPsbQuad>*)
   {
      vector<L1GtPsbQuad> *ptr = 0;
      static ::TVirtualIsAProxy* isa_proxy = new ::TIsAProxy(typeid(vector<L1GtPsbQuad>));
      static ::ROOT::TGenericClassInfo 
         instance("vector<L1GtPsbQuad>", -2, "vector", 214,
                  typeid(vector<L1GtPsbQuad>), ::ROOT::Internal::DefineBehavior(ptr, ptr),
                  &vectorlEL1GtPsbQuadgR_Dictionary, isa_proxy, 4,
                  sizeof(vector<L1GtPsbQuad>) );
      instance.SetNew(&new_vectorlEL1GtPsbQuadgR);
      instance.SetNewArray(&newArray_vectorlEL1GtPsbQuadgR);
      instance.SetDelete(&delete_vectorlEL1GtPsbQuadgR);
      instance.SetDeleteArray(&deleteArray_vectorlEL1GtPsbQuadgR);
      instance.SetDestructor(&destruct_vectorlEL1GtPsbQuadgR);
      instance.AdoptCollectionProxyInfo(TCollectionProxyInfo::Generate(TCollectionProxyInfo::Pushback< vector<L1GtPsbQuad> >()));
      return &instance;
   }
   // Static variable to force the class initialization
   static ::ROOT::TGenericClassInfo *_R__UNIQUE_(Init) = GenerateInitInstanceLocal((const vector<L1GtPsbQuad>*)0x0); R__UseDummy(_R__UNIQUE_(Init));

   // Dictionary for non-ClassDef classes
   static TClass *vectorlEL1GtPsbQuadgR_Dictionary() {
      TClass* theClass =::ROOT::GenerateInitInstanceLocal((const vector<L1GtPsbQuad>*)0x0)->GetClass();
      vectorlEL1GtPsbQuadgR_TClassManip(theClass);
   return theClass;
   }

   static void vectorlEL1GtPsbQuadgR_TClassManip(TClass* ){
   }

} // end of namespace ROOT

namespace ROOT {
   // Wrappers around operator new
   static void *new_vectorlEL1GtPsbQuadgR(void *p) {
      return  p ? ::new((::ROOT::Internal::TOperatorNewHelper*)p) vector<L1GtPsbQuad> : new vector<L1GtPsbQuad>;
   }
   static void *newArray_vectorlEL1GtPsbQuadgR(Long_t nElements, void *p) {
      return p ? ::new((::ROOT::Internal::TOperatorNewHelper*)p) vector<L1GtPsbQuad>[nElements] : new vector<L1GtPsbQuad>[nElements];
   }
   // Wrapper around operator delete
   static void delete_vectorlEL1GtPsbQuadgR(void *p) {
      delete ((vector<L1GtPsbQuad>*)p);
   }
   static void deleteArray_vectorlEL1GtPsbQuadgR(void *p) {
      delete [] ((vector<L1GtPsbQuad>*)p);
   }
   static void destruct_vectorlEL1GtPsbQuadgR(void *p) {
      typedef vector<L1GtPsbQuad> current_t;
      ((current_t*)p)->~current_t();
   }
} // end of namespace ROOT for class vector<L1GtPsbQuad>

namespace ROOT {
   static TClass *vectorlEL1GtPsbConfiggR_Dictionary();
   static void vectorlEL1GtPsbConfiggR_TClassManip(TClass*);
   static void *new_vectorlEL1GtPsbConfiggR(void *p = 0);
   static void *newArray_vectorlEL1GtPsbConfiggR(Long_t size, void *p);
   static void delete_vectorlEL1GtPsbConfiggR(void *p);
   static void deleteArray_vectorlEL1GtPsbConfiggR(void *p);
   static void destruct_vectorlEL1GtPsbConfiggR(void *p);

   // Function generating the singleton type initializer
   static TGenericClassInfo *GenerateInitInstanceLocal(const vector<L1GtPsbConfig>*)
   {
      vector<L1GtPsbConfig> *ptr = 0;
      static ::TVirtualIsAProxy* isa_proxy = new ::TIsAProxy(typeid(vector<L1GtPsbConfig>));
      static ::ROOT::TGenericClassInfo 
         instance("vector<L1GtPsbConfig>", -2, "vector", 214,
                  typeid(vector<L1GtPsbConfig>), ::ROOT::Internal::DefineBehavior(ptr, ptr),
                  &vectorlEL1GtPsbConfiggR_Dictionary, isa_proxy, 4,
                  sizeof(vector<L1GtPsbConfig>) );
      instance.SetNew(&new_vectorlEL1GtPsbConfiggR);
      instance.SetNewArray(&newArray_vectorlEL1GtPsbConfiggR);
      instance.SetDelete(&delete_vectorlEL1GtPsbConfiggR);
      instance.SetDeleteArray(&deleteArray_vectorlEL1GtPsbConfiggR);
      instance.SetDestructor(&destruct_vectorlEL1GtPsbConfiggR);
      instance.AdoptCollectionProxyInfo(TCollectionProxyInfo::Generate(TCollectionProxyInfo::Pushback< vector<L1GtPsbConfig> >()));
      return &instance;
   }
   // Static variable to force the class initialization
   static ::ROOT::TGenericClassInfo *_R__UNIQUE_(Init) = GenerateInitInstanceLocal((const vector<L1GtPsbConfig>*)0x0); R__UseDummy(_R__UNIQUE_(Init));

   // Dictionary for non-ClassDef classes
   static TClass *vectorlEL1GtPsbConfiggR_Dictionary() {
      TClass* theClass =::ROOT::GenerateInitInstanceLocal((const vector<L1GtPsbConfig>*)0x0)->GetClass();
      vectorlEL1GtPsbConfiggR_TClassManip(theClass);
   return theClass;
   }

   static void vectorlEL1GtPsbConfiggR_TClassManip(TClass* ){
   }

} // end of namespace ROOT

namespace ROOT {
   // Wrappers around operator new
   static void *new_vectorlEL1GtPsbConfiggR(void *p) {
      return  p ? ::new((::ROOT::Internal::TOperatorNewHelper*)p) vector<L1GtPsbConfig> : new vector<L1GtPsbConfig>;
   }
   static void *newArray_vectorlEL1GtPsbConfiggR(Long_t nElements, void *p) {
      return p ? ::new((::ROOT::Internal::TOperatorNewHelper*)p) vector<L1GtPsbConfig>[nElements] : new vector<L1GtPsbConfig>[nElements];
   }
   // Wrapper around operator delete
   static void delete_vectorlEL1GtPsbConfiggR(void *p) {
      delete ((vector<L1GtPsbConfig>*)p);
   }
   static void deleteArray_vectorlEL1GtPsbConfiggR(void *p) {
      delete [] ((vector<L1GtPsbConfig>*)p);
   }
   static void destruct_vectorlEL1GtPsbConfiggR(void *p) {
      typedef vector<L1GtPsbConfig> current_t;
      ((current_t*)p)->~current_t();
   }
} // end of namespace ROOT for class vector<L1GtPsbConfig>

namespace ROOT {
   static TClass *vectorlEL1GtObjectgR_Dictionary();
   static void vectorlEL1GtObjectgR_TClassManip(TClass*);
   static void *new_vectorlEL1GtObjectgR(void *p = 0);
   static void *newArray_vectorlEL1GtObjectgR(Long_t size, void *p);
   static void delete_vectorlEL1GtObjectgR(void *p);
   static void deleteArray_vectorlEL1GtObjectgR(void *p);
   static void destruct_vectorlEL1GtObjectgR(void *p);

   // Function generating the singleton type initializer
   static TGenericClassInfo *GenerateInitInstanceLocal(const vector<L1GtObject>*)
   {
      vector<L1GtObject> *ptr = 0;
      static ::TVirtualIsAProxy* isa_proxy = new ::TIsAProxy(typeid(vector<L1GtObject>));
      static ::ROOT::TGenericClassInfo 
         instance("vector<L1GtObject>", -2, "vector", 214,
                  typeid(vector<L1GtObject>), ::ROOT::Internal::DefineBehavior(ptr, ptr),
                  &vectorlEL1GtObjectgR_Dictionary, isa_proxy, 4,
                  sizeof(vector<L1GtObject>) );
      instance.SetNew(&new_vectorlEL1GtObjectgR);
      instance.SetNewArray(&newArray_vectorlEL1GtObjectgR);
      instance.SetDelete(&delete_vectorlEL1GtObjectgR);
      instance.SetDeleteArray(&deleteArray_vectorlEL1GtObjectgR);
      instance.SetDestructor(&destruct_vectorlEL1GtObjectgR);
      instance.AdoptCollectionProxyInfo(TCollectionProxyInfo::Generate(TCollectionProxyInfo::Pushback< vector<L1GtObject> >()));
      return &instance;
   }
   // Static variable to force the class initialization
   static ::ROOT::TGenericClassInfo *_R__UNIQUE_(Init) = GenerateInitInstanceLocal((const vector<L1GtObject>*)0x0); R__UseDummy(_R__UNIQUE_(Init));

   // Dictionary for non-ClassDef classes
   static TClass *vectorlEL1GtObjectgR_Dictionary() {
      TClass* theClass =::ROOT::GenerateInitInstanceLocal((const vector<L1GtObject>*)0x0)->GetClass();
      vectorlEL1GtObjectgR_TClassManip(theClass);
   return theClass;
   }

   static void vectorlEL1GtObjectgR_TClassManip(TClass* ){
   }

} // end of namespace ROOT

namespace ROOT {
   // Wrappers around operator new
   static void *new_vectorlEL1GtObjectgR(void *p) {
      return  p ? ::new((::ROOT::Internal::TOperatorNewHelper*)p) vector<L1GtObject> : new vector<L1GtObject>;
   }
   static void *newArray_vectorlEL1GtObjectgR(Long_t nElements, void *p) {
      return p ? ::new((::ROOT::Internal::TOperatorNewHelper*)p) vector<L1GtObject>[nElements] : new vector<L1GtObject>[nElements];
   }
   // Wrapper around operator delete
   static void delete_vectorlEL1GtObjectgR(void *p) {
      delete ((vector<L1GtObject>*)p);
   }
   static void deleteArray_vectorlEL1GtObjectgR(void *p) {
      delete [] ((vector<L1GtObject>*)p);
   }
   static void destruct_vectorlEL1GtObjectgR(void *p) {
      typedef vector<L1GtObject> current_t;
      ((current_t*)p)->~current_t();
   }
} // end of namespace ROOT for class vector<L1GtObject>

namespace ROOT {
   static TClass *vectorlEL1GtMuonTemplategR_Dictionary();
   static void vectorlEL1GtMuonTemplategR_TClassManip(TClass*);
   static void *new_vectorlEL1GtMuonTemplategR(void *p = 0);
   static void *newArray_vectorlEL1GtMuonTemplategR(Long_t size, void *p);
   static void delete_vectorlEL1GtMuonTemplategR(void *p);
   static void deleteArray_vectorlEL1GtMuonTemplategR(void *p);
   static void destruct_vectorlEL1GtMuonTemplategR(void *p);

   // Function generating the singleton type initializer
   static TGenericClassInfo *GenerateInitInstanceLocal(const vector<L1GtMuonTemplate>*)
   {
      vector<L1GtMuonTemplate> *ptr = 0;
      static ::TVirtualIsAProxy* isa_proxy = new ::TIsAProxy(typeid(vector<L1GtMuonTemplate>));
      static ::ROOT::TGenericClassInfo 
         instance("vector<L1GtMuonTemplate>", -2, "vector", 214,
                  typeid(vector<L1GtMuonTemplate>), ::ROOT::Internal::DefineBehavior(ptr, ptr),
                  &vectorlEL1GtMuonTemplategR_Dictionary, isa_proxy, 4,
                  sizeof(vector<L1GtMuonTemplate>) );
      instance.SetNew(&new_vectorlEL1GtMuonTemplategR);
      instance.SetNewArray(&newArray_vectorlEL1GtMuonTemplategR);
      instance.SetDelete(&delete_vectorlEL1GtMuonTemplategR);
      instance.SetDeleteArray(&deleteArray_vectorlEL1GtMuonTemplategR);
      instance.SetDestructor(&destruct_vectorlEL1GtMuonTemplategR);
      instance.AdoptCollectionProxyInfo(TCollectionProxyInfo::Generate(TCollectionProxyInfo::Pushback< vector<L1GtMuonTemplate> >()));
      return &instance;
   }
   // Static variable to force the class initialization
   static ::ROOT::TGenericClassInfo *_R__UNIQUE_(Init) = GenerateInitInstanceLocal((const vector<L1GtMuonTemplate>*)0x0); R__UseDummy(_R__UNIQUE_(Init));

   // Dictionary for non-ClassDef classes
   static TClass *vectorlEL1GtMuonTemplategR_Dictionary() {
      TClass* theClass =::ROOT::GenerateInitInstanceLocal((const vector<L1GtMuonTemplate>*)0x0)->GetClass();
      vectorlEL1GtMuonTemplategR_TClassManip(theClass);
   return theClass;
   }

   static void vectorlEL1GtMuonTemplategR_TClassManip(TClass* ){
   }

} // end of namespace ROOT

namespace ROOT {
   // Wrappers around operator new
   static void *new_vectorlEL1GtMuonTemplategR(void *p) {
      return  p ? ::new((::ROOT::Internal::TOperatorNewHelper*)p) vector<L1GtMuonTemplate> : new vector<L1GtMuonTemplate>;
   }
   static void *newArray_vectorlEL1GtMuonTemplategR(Long_t nElements, void *p) {
      return p ? ::new((::ROOT::Internal::TOperatorNewHelper*)p) vector<L1GtMuonTemplate>[nElements] : new vector<L1GtMuonTemplate>[nElements];
   }
   // Wrapper around operator delete
   static void delete_vectorlEL1GtMuonTemplategR(void *p) {
      delete ((vector<L1GtMuonTemplate>*)p);
   }
   static void deleteArray_vectorlEL1GtMuonTemplategR(void *p) {
      delete [] ((vector<L1GtMuonTemplate>*)p);
   }
   static void destruct_vectorlEL1GtMuonTemplategR(void *p) {
      typedef vector<L1GtMuonTemplate> current_t;
      ((current_t*)p)->~current_t();
   }
} // end of namespace ROOT for class vector<L1GtMuonTemplate>

namespace ROOT {
   static TClass *vectorlEL1GtMuonTemplatecLcLObjectParametergR_Dictionary();
   static void vectorlEL1GtMuonTemplatecLcLObjectParametergR_TClassManip(TClass*);
   static void *new_vectorlEL1GtMuonTemplatecLcLObjectParametergR(void *p = 0);
   static void *newArray_vectorlEL1GtMuonTemplatecLcLObjectParametergR(Long_t size, void *p);
   static void delete_vectorlEL1GtMuonTemplatecLcLObjectParametergR(void *p);
   static void deleteArray_vectorlEL1GtMuonTemplatecLcLObjectParametergR(void *p);
   static void destruct_vectorlEL1GtMuonTemplatecLcLObjectParametergR(void *p);

   // Function generating the singleton type initializer
   static TGenericClassInfo *GenerateInitInstanceLocal(const vector<L1GtMuonTemplate::ObjectParameter>*)
   {
      vector<L1GtMuonTemplate::ObjectParameter> *ptr = 0;
      static ::TVirtualIsAProxy* isa_proxy = new ::TIsAProxy(typeid(vector<L1GtMuonTemplate::ObjectParameter>));
      static ::ROOT::TGenericClassInfo 
         instance("vector<L1GtMuonTemplate::ObjectParameter>", -2, "vector", 214,
                  typeid(vector<L1GtMuonTemplate::ObjectParameter>), ::ROOT::Internal::DefineBehavior(ptr, ptr),
                  &vectorlEL1GtMuonTemplatecLcLObjectParametergR_Dictionary, isa_proxy, 4,
                  sizeof(vector<L1GtMuonTemplate::ObjectParameter>) );
      instance.SetNew(&new_vectorlEL1GtMuonTemplatecLcLObjectParametergR);
      instance.SetNewArray(&newArray_vectorlEL1GtMuonTemplatecLcLObjectParametergR);
      instance.SetDelete(&delete_vectorlEL1GtMuonTemplatecLcLObjectParametergR);
      instance.SetDeleteArray(&deleteArray_vectorlEL1GtMuonTemplatecLcLObjectParametergR);
      instance.SetDestructor(&destruct_vectorlEL1GtMuonTemplatecLcLObjectParametergR);
      instance.AdoptCollectionProxyInfo(TCollectionProxyInfo::Generate(TCollectionProxyInfo::Pushback< vector<L1GtMuonTemplate::ObjectParameter> >()));
      return &instance;
   }
   // Static variable to force the class initialization
   static ::ROOT::TGenericClassInfo *_R__UNIQUE_(Init) = GenerateInitInstanceLocal((const vector<L1GtMuonTemplate::ObjectParameter>*)0x0); R__UseDummy(_R__UNIQUE_(Init));

   // Dictionary for non-ClassDef classes
   static TClass *vectorlEL1GtMuonTemplatecLcLObjectParametergR_Dictionary() {
      TClass* theClass =::ROOT::GenerateInitInstanceLocal((const vector<L1GtMuonTemplate::ObjectParameter>*)0x0)->GetClass();
      vectorlEL1GtMuonTemplatecLcLObjectParametergR_TClassManip(theClass);
   return theClass;
   }

   static void vectorlEL1GtMuonTemplatecLcLObjectParametergR_TClassManip(TClass* ){
   }

} // end of namespace ROOT

namespace ROOT {
   // Wrappers around operator new
   static void *new_vectorlEL1GtMuonTemplatecLcLObjectParametergR(void *p) {
      return  p ? ::new((::ROOT::Internal::TOperatorNewHelper*)p) vector<L1GtMuonTemplate::ObjectParameter> : new vector<L1GtMuonTemplate::ObjectParameter>;
   }
   static void *newArray_vectorlEL1GtMuonTemplatecLcLObjectParametergR(Long_t nElements, void *p) {
      return p ? ::new((::ROOT::Internal::TOperatorNewHelper*)p) vector<L1GtMuonTemplate::ObjectParameter>[nElements] : new vector<L1GtMuonTemplate::ObjectParameter>[nElements];
   }
   // Wrapper around operator delete
   static void delete_vectorlEL1GtMuonTemplatecLcLObjectParametergR(void *p) {
      delete ((vector<L1GtMuonTemplate::ObjectParameter>*)p);
   }
   static void deleteArray_vectorlEL1GtMuonTemplatecLcLObjectParametergR(void *p) {
      delete [] ((vector<L1GtMuonTemplate::ObjectParameter>*)p);
   }
   static void destruct_vectorlEL1GtMuonTemplatecLcLObjectParametergR(void *p) {
      typedef vector<L1GtMuonTemplate::ObjectParameter> current_t;
      ((current_t*)p)->~current_t();
   }
} // end of namespace ROOT for class vector<L1GtMuonTemplate::ObjectParameter>

namespace ROOT {
   static TClass *vectorlEL1GtJetCountsTemplategR_Dictionary();
   static void vectorlEL1GtJetCountsTemplategR_TClassManip(TClass*);
   static void *new_vectorlEL1GtJetCountsTemplategR(void *p = 0);
   static void *newArray_vectorlEL1GtJetCountsTemplategR(Long_t size, void *p);
   static void delete_vectorlEL1GtJetCountsTemplategR(void *p);
   static void deleteArray_vectorlEL1GtJetCountsTemplategR(void *p);
   static void destruct_vectorlEL1GtJetCountsTemplategR(void *p);

   // Function generating the singleton type initializer
   static TGenericClassInfo *GenerateInitInstanceLocal(const vector<L1GtJetCountsTemplate>*)
   {
      vector<L1GtJetCountsTemplate> *ptr = 0;
      static ::TVirtualIsAProxy* isa_proxy = new ::TIsAProxy(typeid(vector<L1GtJetCountsTemplate>));
      static ::ROOT::TGenericClassInfo 
         instance("vector<L1GtJetCountsTemplate>", -2, "vector", 214,
                  typeid(vector<L1GtJetCountsTemplate>), ::ROOT::Internal::DefineBehavior(ptr, ptr),
                  &vectorlEL1GtJetCountsTemplategR_Dictionary, isa_proxy, 4,
                  sizeof(vector<L1GtJetCountsTemplate>) );
      instance.SetNew(&new_vectorlEL1GtJetCountsTemplategR);
      instance.SetNewArray(&newArray_vectorlEL1GtJetCountsTemplategR);
      instance.SetDelete(&delete_vectorlEL1GtJetCountsTemplategR);
      instance.SetDeleteArray(&deleteArray_vectorlEL1GtJetCountsTemplategR);
      instance.SetDestructor(&destruct_vectorlEL1GtJetCountsTemplategR);
      instance.AdoptCollectionProxyInfo(TCollectionProxyInfo::Generate(TCollectionProxyInfo::Pushback< vector<L1GtJetCountsTemplate> >()));
      return &instance;
   }
   // Static variable to force the class initialization
   static ::ROOT::TGenericClassInfo *_R__UNIQUE_(Init) = GenerateInitInstanceLocal((const vector<L1GtJetCountsTemplate>*)0x0); R__UseDummy(_R__UNIQUE_(Init));

   // Dictionary for non-ClassDef classes
   static TClass *vectorlEL1GtJetCountsTemplategR_Dictionary() {
      TClass* theClass =::ROOT::GenerateInitInstanceLocal((const vector<L1GtJetCountsTemplate>*)0x0)->GetClass();
      vectorlEL1GtJetCountsTemplategR_TClassManip(theClass);
   return theClass;
   }

   static void vectorlEL1GtJetCountsTemplategR_TClassManip(TClass* ){
   }

} // end of namespace ROOT

namespace ROOT {
   // Wrappers around operator new
   static void *new_vectorlEL1GtJetCountsTemplategR(void *p) {
      return  p ? ::new((::ROOT::Internal::TOperatorNewHelper*)p) vector<L1GtJetCountsTemplate> : new vector<L1GtJetCountsTemplate>;
   }
   static void *newArray_vectorlEL1GtJetCountsTemplategR(Long_t nElements, void *p) {
      return p ? ::new((::ROOT::Internal::TOperatorNewHelper*)p) vector<L1GtJetCountsTemplate>[nElements] : new vector<L1GtJetCountsTemplate>[nElements];
   }
   // Wrapper around operator delete
   static void delete_vectorlEL1GtJetCountsTemplategR(void *p) {
      delete ((vector<L1GtJetCountsTemplate>*)p);
   }
   static void deleteArray_vectorlEL1GtJetCountsTemplategR(void *p) {
      delete [] ((vector<L1GtJetCountsTemplate>*)p);
   }
   static void destruct_vectorlEL1GtJetCountsTemplategR(void *p) {
      typedef vector<L1GtJetCountsTemplate> current_t;
      ((current_t*)p)->~current_t();
   }
} // end of namespace ROOT for class vector<L1GtJetCountsTemplate>

namespace ROOT {
   static TClass *vectorlEL1GtJetCountsTemplatecLcLObjectParametergR_Dictionary();
   static void vectorlEL1GtJetCountsTemplatecLcLObjectParametergR_TClassManip(TClass*);
   static void *new_vectorlEL1GtJetCountsTemplatecLcLObjectParametergR(void *p = 0);
   static void *newArray_vectorlEL1GtJetCountsTemplatecLcLObjectParametergR(Long_t size, void *p);
   static void delete_vectorlEL1GtJetCountsTemplatecLcLObjectParametergR(void *p);
   static void deleteArray_vectorlEL1GtJetCountsTemplatecLcLObjectParametergR(void *p);
   static void destruct_vectorlEL1GtJetCountsTemplatecLcLObjectParametergR(void *p);

   // Function generating the singleton type initializer
   static TGenericClassInfo *GenerateInitInstanceLocal(const vector<L1GtJetCountsTemplate::ObjectParameter>*)
   {
      vector<L1GtJetCountsTemplate::ObjectParameter> *ptr = 0;
      static ::TVirtualIsAProxy* isa_proxy = new ::TIsAProxy(typeid(vector<L1GtJetCountsTemplate::ObjectParameter>));
      static ::ROOT::TGenericClassInfo 
         instance("vector<L1GtJetCountsTemplate::ObjectParameter>", -2, "vector", 214,
                  typeid(vector<L1GtJetCountsTemplate::ObjectParameter>), ::ROOT::Internal::DefineBehavior(ptr, ptr),
                  &vectorlEL1GtJetCountsTemplatecLcLObjectParametergR_Dictionary, isa_proxy, 4,
                  sizeof(vector<L1GtJetCountsTemplate::ObjectParameter>) );
      instance.SetNew(&new_vectorlEL1GtJetCountsTemplatecLcLObjectParametergR);
      instance.SetNewArray(&newArray_vectorlEL1GtJetCountsTemplatecLcLObjectParametergR);
      instance.SetDelete(&delete_vectorlEL1GtJetCountsTemplatecLcLObjectParametergR);
      instance.SetDeleteArray(&deleteArray_vectorlEL1GtJetCountsTemplatecLcLObjectParametergR);
      instance.SetDestructor(&destruct_vectorlEL1GtJetCountsTemplatecLcLObjectParametergR);
      instance.AdoptCollectionProxyInfo(TCollectionProxyInfo::Generate(TCollectionProxyInfo::Pushback< vector<L1GtJetCountsTemplate::ObjectParameter> >()));
      return &instance;
   }
   // Static variable to force the class initialization
   static ::ROOT::TGenericClassInfo *_R__UNIQUE_(Init) = GenerateInitInstanceLocal((const vector<L1GtJetCountsTemplate::ObjectParameter>*)0x0); R__UseDummy(_R__UNIQUE_(Init));

   // Dictionary for non-ClassDef classes
   static TClass *vectorlEL1GtJetCountsTemplatecLcLObjectParametergR_Dictionary() {
      TClass* theClass =::ROOT::GenerateInitInstanceLocal((const vector<L1GtJetCountsTemplate::ObjectParameter>*)0x0)->GetClass();
      vectorlEL1GtJetCountsTemplatecLcLObjectParametergR_TClassManip(theClass);
   return theClass;
   }

   static void vectorlEL1GtJetCountsTemplatecLcLObjectParametergR_TClassManip(TClass* ){
   }

} // end of namespace ROOT

namespace ROOT {
   // Wrappers around operator new
   static void *new_vectorlEL1GtJetCountsTemplatecLcLObjectParametergR(void *p) {
      return  p ? ::new((::ROOT::Internal::TOperatorNewHelper*)p) vector<L1GtJetCountsTemplate::ObjectParameter> : new vector<L1GtJetCountsTemplate::ObjectParameter>;
   }
   static void *newArray_vectorlEL1GtJetCountsTemplatecLcLObjectParametergR(Long_t nElements, void *p) {
      return p ? ::new((::ROOT::Internal::TOperatorNewHelper*)p) vector<L1GtJetCountsTemplate::ObjectParameter>[nElements] : new vector<L1GtJetCountsTemplate::ObjectParameter>[nElements];
   }
   // Wrapper around operator delete
   static void delete_vectorlEL1GtJetCountsTemplatecLcLObjectParametergR(void *p) {
      delete ((vector<L1GtJetCountsTemplate::ObjectParameter>*)p);
   }
   static void deleteArray_vectorlEL1GtJetCountsTemplatecLcLObjectParametergR(void *p) {
      delete [] ((vector<L1GtJetCountsTemplate::ObjectParameter>*)p);
   }
   static void destruct_vectorlEL1GtJetCountsTemplatecLcLObjectParametergR(void *p) {
      typedef vector<L1GtJetCountsTemplate::ObjectParameter> current_t;
      ((current_t*)p)->~current_t();
   }
} // end of namespace ROOT for class vector<L1GtJetCountsTemplate::ObjectParameter>

namespace ROOT {
   static TClass *vectorlEL1GtHfRingEtSumsTemplategR_Dictionary();
   static void vectorlEL1GtHfRingEtSumsTemplategR_TClassManip(TClass*);
   static void *new_vectorlEL1GtHfRingEtSumsTemplategR(void *p = 0);
   static void *newArray_vectorlEL1GtHfRingEtSumsTemplategR(Long_t size, void *p);
   static void delete_vectorlEL1GtHfRingEtSumsTemplategR(void *p);
   static void deleteArray_vectorlEL1GtHfRingEtSumsTemplategR(void *p);
   static void destruct_vectorlEL1GtHfRingEtSumsTemplategR(void *p);

   // Function generating the singleton type initializer
   static TGenericClassInfo *GenerateInitInstanceLocal(const vector<L1GtHfRingEtSumsTemplate>*)
   {
      vector<L1GtHfRingEtSumsTemplate> *ptr = 0;
      static ::TVirtualIsAProxy* isa_proxy = new ::TIsAProxy(typeid(vector<L1GtHfRingEtSumsTemplate>));
      static ::ROOT::TGenericClassInfo 
         instance("vector<L1GtHfRingEtSumsTemplate>", -2, "vector", 214,
                  typeid(vector<L1GtHfRingEtSumsTemplate>), ::ROOT::Internal::DefineBehavior(ptr, ptr),
                  &vectorlEL1GtHfRingEtSumsTemplategR_Dictionary, isa_proxy, 4,
                  sizeof(vector<L1GtHfRingEtSumsTemplate>) );
      instance.SetNew(&new_vectorlEL1GtHfRingEtSumsTemplategR);
      instance.SetNewArray(&newArray_vectorlEL1GtHfRingEtSumsTemplategR);
      instance.SetDelete(&delete_vectorlEL1GtHfRingEtSumsTemplategR);
      instance.SetDeleteArray(&deleteArray_vectorlEL1GtHfRingEtSumsTemplategR);
      instance.SetDestructor(&destruct_vectorlEL1GtHfRingEtSumsTemplategR);
      instance.AdoptCollectionProxyInfo(TCollectionProxyInfo::Generate(TCollectionProxyInfo::Pushback< vector<L1GtHfRingEtSumsTemplate> >()));
      return &instance;
   }
   // Static variable to force the class initialization
   static ::ROOT::TGenericClassInfo *_R__UNIQUE_(Init) = GenerateInitInstanceLocal((const vector<L1GtHfRingEtSumsTemplate>*)0x0); R__UseDummy(_R__UNIQUE_(Init));

   // Dictionary for non-ClassDef classes
   static TClass *vectorlEL1GtHfRingEtSumsTemplategR_Dictionary() {
      TClass* theClass =::ROOT::GenerateInitInstanceLocal((const vector<L1GtHfRingEtSumsTemplate>*)0x0)->GetClass();
      vectorlEL1GtHfRingEtSumsTemplategR_TClassManip(theClass);
   return theClass;
   }

   static void vectorlEL1GtHfRingEtSumsTemplategR_TClassManip(TClass* ){
   }

} // end of namespace ROOT

namespace ROOT {
   // Wrappers around operator new
   static void *new_vectorlEL1GtHfRingEtSumsTemplategR(void *p) {
      return  p ? ::new((::ROOT::Internal::TOperatorNewHelper*)p) vector<L1GtHfRingEtSumsTemplate> : new vector<L1GtHfRingEtSumsTemplate>;
   }
   static void *newArray_vectorlEL1GtHfRingEtSumsTemplategR(Long_t nElements, void *p) {
      return p ? ::new((::ROOT::Internal::TOperatorNewHelper*)p) vector<L1GtHfRingEtSumsTemplate>[nElements] : new vector<L1GtHfRingEtSumsTemplate>[nElements];
   }
   // Wrapper around operator delete
   static void delete_vectorlEL1GtHfRingEtSumsTemplategR(void *p) {
      delete ((vector<L1GtHfRingEtSumsTemplate>*)p);
   }
   static void deleteArray_vectorlEL1GtHfRingEtSumsTemplategR(void *p) {
      delete [] ((vector<L1GtHfRingEtSumsTemplate>*)p);
   }
   static void destruct_vectorlEL1GtHfRingEtSumsTemplategR(void *p) {
      typedef vector<L1GtHfRingEtSumsTemplate> current_t;
      ((current_t*)p)->~current_t();
   }
} // end of namespace ROOT for class vector<L1GtHfRingEtSumsTemplate>

namespace ROOT {
   static TClass *vectorlEL1GtHfRingEtSumsTemplatecLcLObjectParametergR_Dictionary();
   static void vectorlEL1GtHfRingEtSumsTemplatecLcLObjectParametergR_TClassManip(TClass*);
   static void *new_vectorlEL1GtHfRingEtSumsTemplatecLcLObjectParametergR(void *p = 0);
   static void *newArray_vectorlEL1GtHfRingEtSumsTemplatecLcLObjectParametergR(Long_t size, void *p);
   static void delete_vectorlEL1GtHfRingEtSumsTemplatecLcLObjectParametergR(void *p);
   static void deleteArray_vectorlEL1GtHfRingEtSumsTemplatecLcLObjectParametergR(void *p);
   static void destruct_vectorlEL1GtHfRingEtSumsTemplatecLcLObjectParametergR(void *p);

   // Function generating the singleton type initializer
   static TGenericClassInfo *GenerateInitInstanceLocal(const vector<L1GtHfRingEtSumsTemplate::ObjectParameter>*)
   {
      vector<L1GtHfRingEtSumsTemplate::ObjectParameter> *ptr = 0;
      static ::TVirtualIsAProxy* isa_proxy = new ::TIsAProxy(typeid(vector<L1GtHfRingEtSumsTemplate::ObjectParameter>));
      static ::ROOT::TGenericClassInfo 
         instance("vector<L1GtHfRingEtSumsTemplate::ObjectParameter>", -2, "vector", 214,
                  typeid(vector<L1GtHfRingEtSumsTemplate::ObjectParameter>), ::ROOT::Internal::DefineBehavior(ptr, ptr),
                  &vectorlEL1GtHfRingEtSumsTemplatecLcLObjectParametergR_Dictionary, isa_proxy, 4,
                  sizeof(vector<L1GtHfRingEtSumsTemplate::ObjectParameter>) );
      instance.SetNew(&new_vectorlEL1GtHfRingEtSumsTemplatecLcLObjectParametergR);
      instance.SetNewArray(&newArray_vectorlEL1GtHfRingEtSumsTemplatecLcLObjectParametergR);
      instance.SetDelete(&delete_vectorlEL1GtHfRingEtSumsTemplatecLcLObjectParametergR);
      instance.SetDeleteArray(&deleteArray_vectorlEL1GtHfRingEtSumsTemplatecLcLObjectParametergR);
      instance.SetDestructor(&destruct_vectorlEL1GtHfRingEtSumsTemplatecLcLObjectParametergR);
      instance.AdoptCollectionProxyInfo(TCollectionProxyInfo::Generate(TCollectionProxyInfo::Pushback< vector<L1GtHfRingEtSumsTemplate::ObjectParameter> >()));
      return &instance;
   }
   // Static variable to force the class initialization
   static ::ROOT::TGenericClassInfo *_R__UNIQUE_(Init) = GenerateInitInstanceLocal((const vector<L1GtHfRingEtSumsTemplate::ObjectParameter>*)0x0); R__UseDummy(_R__UNIQUE_(Init));

   // Dictionary for non-ClassDef classes
   static TClass *vectorlEL1GtHfRingEtSumsTemplatecLcLObjectParametergR_Dictionary() {
      TClass* theClass =::ROOT::GenerateInitInstanceLocal((const vector<L1GtHfRingEtSumsTemplate::ObjectParameter>*)0x0)->GetClass();
      vectorlEL1GtHfRingEtSumsTemplatecLcLObjectParametergR_TClassManip(theClass);
   return theClass;
   }

   static void vectorlEL1GtHfRingEtSumsTemplatecLcLObjectParametergR_TClassManip(TClass* ){
   }

} // end of namespace ROOT

namespace ROOT {
   // Wrappers around operator new
   static void *new_vectorlEL1GtHfRingEtSumsTemplatecLcLObjectParametergR(void *p) {
      return  p ? ::new((::ROOT::Internal::TOperatorNewHelper*)p) vector<L1GtHfRingEtSumsTemplate::ObjectParameter> : new vector<L1GtHfRingEtSumsTemplate::ObjectParameter>;
   }
   static void *newArray_vectorlEL1GtHfRingEtSumsTemplatecLcLObjectParametergR(Long_t nElements, void *p) {
      return p ? ::new((::ROOT::Internal::TOperatorNewHelper*)p) vector<L1GtHfRingEtSumsTemplate::ObjectParameter>[nElements] : new vector<L1GtHfRingEtSumsTemplate::ObjectParameter>[nElements];
   }
   // Wrapper around operator delete
   static void delete_vectorlEL1GtHfRingEtSumsTemplatecLcLObjectParametergR(void *p) {
      delete ((vector<L1GtHfRingEtSumsTemplate::ObjectParameter>*)p);
   }
   static void deleteArray_vectorlEL1GtHfRingEtSumsTemplatecLcLObjectParametergR(void *p) {
      delete [] ((vector<L1GtHfRingEtSumsTemplate::ObjectParameter>*)p);
   }
   static void destruct_vectorlEL1GtHfRingEtSumsTemplatecLcLObjectParametergR(void *p) {
      typedef vector<L1GtHfRingEtSumsTemplate::ObjectParameter> current_t;
      ((current_t*)p)->~current_t();
   }
} // end of namespace ROOT for class vector<L1GtHfRingEtSumsTemplate::ObjectParameter>

namespace ROOT {
   static TClass *vectorlEL1GtHfBitCountsTemplategR_Dictionary();
   static void vectorlEL1GtHfBitCountsTemplategR_TClassManip(TClass*);
   static void *new_vectorlEL1GtHfBitCountsTemplategR(void *p = 0);
   static void *newArray_vectorlEL1GtHfBitCountsTemplategR(Long_t size, void *p);
   static void delete_vectorlEL1GtHfBitCountsTemplategR(void *p);
   static void deleteArray_vectorlEL1GtHfBitCountsTemplategR(void *p);
   static void destruct_vectorlEL1GtHfBitCountsTemplategR(void *p);

   // Function generating the singleton type initializer
   static TGenericClassInfo *GenerateInitInstanceLocal(const vector<L1GtHfBitCountsTemplate>*)
   {
      vector<L1GtHfBitCountsTemplate> *ptr = 0;
      static ::TVirtualIsAProxy* isa_proxy = new ::TIsAProxy(typeid(vector<L1GtHfBitCountsTemplate>));
      static ::ROOT::TGenericClassInfo 
         instance("vector<L1GtHfBitCountsTemplate>", -2, "vector", 214,
                  typeid(vector<L1GtHfBitCountsTemplate>), ::ROOT::Internal::DefineBehavior(ptr, ptr),
                  &vectorlEL1GtHfBitCountsTemplategR_Dictionary, isa_proxy, 4,
                  sizeof(vector<L1GtHfBitCountsTemplate>) );
      instance.SetNew(&new_vectorlEL1GtHfBitCountsTemplategR);
      instance.SetNewArray(&newArray_vectorlEL1GtHfBitCountsTemplategR);
      instance.SetDelete(&delete_vectorlEL1GtHfBitCountsTemplategR);
      instance.SetDeleteArray(&deleteArray_vectorlEL1GtHfBitCountsTemplategR);
      instance.SetDestructor(&destruct_vectorlEL1GtHfBitCountsTemplategR);
      instance.AdoptCollectionProxyInfo(TCollectionProxyInfo::Generate(TCollectionProxyInfo::Pushback< vector<L1GtHfBitCountsTemplate> >()));
      return &instance;
   }
   // Static variable to force the class initialization
   static ::ROOT::TGenericClassInfo *_R__UNIQUE_(Init) = GenerateInitInstanceLocal((const vector<L1GtHfBitCountsTemplate>*)0x0); R__UseDummy(_R__UNIQUE_(Init));

   // Dictionary for non-ClassDef classes
   static TClass *vectorlEL1GtHfBitCountsTemplategR_Dictionary() {
      TClass* theClass =::ROOT::GenerateInitInstanceLocal((const vector<L1GtHfBitCountsTemplate>*)0x0)->GetClass();
      vectorlEL1GtHfBitCountsTemplategR_TClassManip(theClass);
   return theClass;
   }

   static void vectorlEL1GtHfBitCountsTemplategR_TClassManip(TClass* ){
   }

} // end of namespace ROOT

namespace ROOT {
   // Wrappers around operator new
   static void *new_vectorlEL1GtHfBitCountsTemplategR(void *p) {
      return  p ? ::new((::ROOT::Internal::TOperatorNewHelper*)p) vector<L1GtHfBitCountsTemplate> : new vector<L1GtHfBitCountsTemplate>;
   }
   static void *newArray_vectorlEL1GtHfBitCountsTemplategR(Long_t nElements, void *p) {
      return p ? ::new((::ROOT::Internal::TOperatorNewHelper*)p) vector<L1GtHfBitCountsTemplate>[nElements] : new vector<L1GtHfBitCountsTemplate>[nElements];
   }
   // Wrapper around operator delete
   static void delete_vectorlEL1GtHfBitCountsTemplategR(void *p) {
      delete ((vector<L1GtHfBitCountsTemplate>*)p);
   }
   static void deleteArray_vectorlEL1GtHfBitCountsTemplategR(void *p) {
      delete [] ((vector<L1GtHfBitCountsTemplate>*)p);
   }
   static void destruct_vectorlEL1GtHfBitCountsTemplategR(void *p) {
      typedef vector<L1GtHfBitCountsTemplate> current_t;
      ((current_t*)p)->~current_t();
   }
} // end of namespace ROOT for class vector<L1GtHfBitCountsTemplate>

namespace ROOT {
   static TClass *vectorlEL1GtHfBitCountsTemplatecLcLObjectParametergR_Dictionary();
   static void vectorlEL1GtHfBitCountsTemplatecLcLObjectParametergR_TClassManip(TClass*);
   static void *new_vectorlEL1GtHfBitCountsTemplatecLcLObjectParametergR(void *p = 0);
   static void *newArray_vectorlEL1GtHfBitCountsTemplatecLcLObjectParametergR(Long_t size, void *p);
   static void delete_vectorlEL1GtHfBitCountsTemplatecLcLObjectParametergR(void *p);
   static void deleteArray_vectorlEL1GtHfBitCountsTemplatecLcLObjectParametergR(void *p);
   static void destruct_vectorlEL1GtHfBitCountsTemplatecLcLObjectParametergR(void *p);

   // Function generating the singleton type initializer
   static TGenericClassInfo *GenerateInitInstanceLocal(const vector<L1GtHfBitCountsTemplate::ObjectParameter>*)
   {
      vector<L1GtHfBitCountsTemplate::ObjectParameter> *ptr = 0;
      static ::TVirtualIsAProxy* isa_proxy = new ::TIsAProxy(typeid(vector<L1GtHfBitCountsTemplate::ObjectParameter>));
      static ::ROOT::TGenericClassInfo 
         instance("vector<L1GtHfBitCountsTemplate::ObjectParameter>", -2, "vector", 214,
                  typeid(vector<L1GtHfBitCountsTemplate::ObjectParameter>), ::ROOT::Internal::DefineBehavior(ptr, ptr),
                  &vectorlEL1GtHfBitCountsTemplatecLcLObjectParametergR_Dictionary, isa_proxy, 4,
                  sizeof(vector<L1GtHfBitCountsTemplate::ObjectParameter>) );
      instance.SetNew(&new_vectorlEL1GtHfBitCountsTemplatecLcLObjectParametergR);
      instance.SetNewArray(&newArray_vectorlEL1GtHfBitCountsTemplatecLcLObjectParametergR);
      instance.SetDelete(&delete_vectorlEL1GtHfBitCountsTemplatecLcLObjectParametergR);
      instance.SetDeleteArray(&deleteArray_vectorlEL1GtHfBitCountsTemplatecLcLObjectParametergR);
      instance.SetDestructor(&destruct_vectorlEL1GtHfBitCountsTemplatecLcLObjectParametergR);
      instance.AdoptCollectionProxyInfo(TCollectionProxyInfo::Generate(TCollectionProxyInfo::Pushback< vector<L1GtHfBitCountsTemplate::ObjectParameter> >()));
      return &instance;
   }
   // Static variable to force the class initialization
   static ::ROOT::TGenericClassInfo *_R__UNIQUE_(Init) = GenerateInitInstanceLocal((const vector<L1GtHfBitCountsTemplate::ObjectParameter>*)0x0); R__UseDummy(_R__UNIQUE_(Init));

   // Dictionary for non-ClassDef classes
   static TClass *vectorlEL1GtHfBitCountsTemplatecLcLObjectParametergR_Dictionary() {
      TClass* theClass =::ROOT::GenerateInitInstanceLocal((const vector<L1GtHfBitCountsTemplate::ObjectParameter>*)0x0)->GetClass();
      vectorlEL1GtHfBitCountsTemplatecLcLObjectParametergR_TClassManip(theClass);
   return theClass;
   }

   static void vectorlEL1GtHfBitCountsTemplatecLcLObjectParametergR_TClassManip(TClass* ){
   }

} // end of namespace ROOT

namespace ROOT {
   // Wrappers around operator new
   static void *new_vectorlEL1GtHfBitCountsTemplatecLcLObjectParametergR(void *p) {
      return  p ? ::new((::ROOT::Internal::TOperatorNewHelper*)p) vector<L1GtHfBitCountsTemplate::ObjectParameter> : new vector<L1GtHfBitCountsTemplate::ObjectParameter>;
   }
   static void *newArray_vectorlEL1GtHfBitCountsTemplatecLcLObjectParametergR(Long_t nElements, void *p) {
      return p ? ::new((::ROOT::Internal::TOperatorNewHelper*)p) vector<L1GtHfBitCountsTemplate::ObjectParameter>[nElements] : new vector<L1GtHfBitCountsTemplate::ObjectParameter>[nElements];
   }
   // Wrapper around operator delete
   static void delete_vectorlEL1GtHfBitCountsTemplatecLcLObjectParametergR(void *p) {
      delete ((vector<L1GtHfBitCountsTemplate::ObjectParameter>*)p);
   }
   static void deleteArray_vectorlEL1GtHfBitCountsTemplatecLcLObjectParametergR(void *p) {
      delete [] ((vector<L1GtHfBitCountsTemplate::ObjectParameter>*)p);
   }
   static void destruct_vectorlEL1GtHfBitCountsTemplatecLcLObjectParametergR(void *p) {
      typedef vector<L1GtHfBitCountsTemplate::ObjectParameter> current_t;
      ((current_t*)p)->~current_t();
   }
} // end of namespace ROOT for class vector<L1GtHfBitCountsTemplate::ObjectParameter>

namespace ROOT {
   static TClass *vectorlEL1GtExternalTemplategR_Dictionary();
   static void vectorlEL1GtExternalTemplategR_TClassManip(TClass*);
   static void *new_vectorlEL1GtExternalTemplategR(void *p = 0);
   static void *newArray_vectorlEL1GtExternalTemplategR(Long_t size, void *p);
   static void delete_vectorlEL1GtExternalTemplategR(void *p);
   static void deleteArray_vectorlEL1GtExternalTemplategR(void *p);
   static void destruct_vectorlEL1GtExternalTemplategR(void *p);

   // Function generating the singleton type initializer
   static TGenericClassInfo *GenerateInitInstanceLocal(const vector<L1GtExternalTemplate>*)
   {
      vector<L1GtExternalTemplate> *ptr = 0;
      static ::TVirtualIsAProxy* isa_proxy = new ::TIsAProxy(typeid(vector<L1GtExternalTemplate>));
      static ::ROOT::TGenericClassInfo 
         instance("vector<L1GtExternalTemplate>", -2, "vector", 214,
                  typeid(vector<L1GtExternalTemplate>), ::ROOT::Internal::DefineBehavior(ptr, ptr),
                  &vectorlEL1GtExternalTemplategR_Dictionary, isa_proxy, 4,
                  sizeof(vector<L1GtExternalTemplate>) );
      instance.SetNew(&new_vectorlEL1GtExternalTemplategR);
      instance.SetNewArray(&newArray_vectorlEL1GtExternalTemplategR);
      instance.SetDelete(&delete_vectorlEL1GtExternalTemplategR);
      instance.SetDeleteArray(&deleteArray_vectorlEL1GtExternalTemplategR);
      instance.SetDestructor(&destruct_vectorlEL1GtExternalTemplategR);
      instance.AdoptCollectionProxyInfo(TCollectionProxyInfo::Generate(TCollectionProxyInfo::Pushback< vector<L1GtExternalTemplate> >()));
      return &instance;
   }
   // Static variable to force the class initialization
   static ::ROOT::TGenericClassInfo *_R__UNIQUE_(Init) = GenerateInitInstanceLocal((const vector<L1GtExternalTemplate>*)0x0); R__UseDummy(_R__UNIQUE_(Init));

   // Dictionary for non-ClassDef classes
   static TClass *vectorlEL1GtExternalTemplategR_Dictionary() {
      TClass* theClass =::ROOT::GenerateInitInstanceLocal((const vector<L1GtExternalTemplate>*)0x0)->GetClass();
      vectorlEL1GtExternalTemplategR_TClassManip(theClass);
   return theClass;
   }

   static void vectorlEL1GtExternalTemplategR_TClassManip(TClass* ){
   }

} // end of namespace ROOT

namespace ROOT {
   // Wrappers around operator new
   static void *new_vectorlEL1GtExternalTemplategR(void *p) {
      return  p ? ::new((::ROOT::Internal::TOperatorNewHelper*)p) vector<L1GtExternalTemplate> : new vector<L1GtExternalTemplate>;
   }
   static void *newArray_vectorlEL1GtExternalTemplategR(Long_t nElements, void *p) {
      return p ? ::new((::ROOT::Internal::TOperatorNewHelper*)p) vector<L1GtExternalTemplate>[nElements] : new vector<L1GtExternalTemplate>[nElements];
   }
   // Wrapper around operator delete
   static void delete_vectorlEL1GtExternalTemplategR(void *p) {
      delete ((vector<L1GtExternalTemplate>*)p);
   }
   static void deleteArray_vectorlEL1GtExternalTemplategR(void *p) {
      delete [] ((vector<L1GtExternalTemplate>*)p);
   }
   static void destruct_vectorlEL1GtExternalTemplategR(void *p) {
      typedef vector<L1GtExternalTemplate> current_t;
      ((current_t*)p)->~current_t();
   }
} // end of namespace ROOT for class vector<L1GtExternalTemplate>

namespace ROOT {
   static TClass *vectorlEL1GtEnergySumTemplategR_Dictionary();
   static void vectorlEL1GtEnergySumTemplategR_TClassManip(TClass*);
   static void *new_vectorlEL1GtEnergySumTemplategR(void *p = 0);
   static void *newArray_vectorlEL1GtEnergySumTemplategR(Long_t size, void *p);
   static void delete_vectorlEL1GtEnergySumTemplategR(void *p);
   static void deleteArray_vectorlEL1GtEnergySumTemplategR(void *p);
   static void destruct_vectorlEL1GtEnergySumTemplategR(void *p);

   // Function generating the singleton type initializer
   static TGenericClassInfo *GenerateInitInstanceLocal(const vector<L1GtEnergySumTemplate>*)
   {
      vector<L1GtEnergySumTemplate> *ptr = 0;
      static ::TVirtualIsAProxy* isa_proxy = new ::TIsAProxy(typeid(vector<L1GtEnergySumTemplate>));
      static ::ROOT::TGenericClassInfo 
         instance("vector<L1GtEnergySumTemplate>", -2, "vector", 214,
                  typeid(vector<L1GtEnergySumTemplate>), ::ROOT::Internal::DefineBehavior(ptr, ptr),
                  &vectorlEL1GtEnergySumTemplategR_Dictionary, isa_proxy, 4,
                  sizeof(vector<L1GtEnergySumTemplate>) );
      instance.SetNew(&new_vectorlEL1GtEnergySumTemplategR);
      instance.SetNewArray(&newArray_vectorlEL1GtEnergySumTemplategR);
      instance.SetDelete(&delete_vectorlEL1GtEnergySumTemplategR);
      instance.SetDeleteArray(&deleteArray_vectorlEL1GtEnergySumTemplategR);
      instance.SetDestructor(&destruct_vectorlEL1GtEnergySumTemplategR);
      instance.AdoptCollectionProxyInfo(TCollectionProxyInfo::Generate(TCollectionProxyInfo::Pushback< vector<L1GtEnergySumTemplate> >()));
      return &instance;
   }
   // Static variable to force the class initialization
   static ::ROOT::TGenericClassInfo *_R__UNIQUE_(Init) = GenerateInitInstanceLocal((const vector<L1GtEnergySumTemplate>*)0x0); R__UseDummy(_R__UNIQUE_(Init));

   // Dictionary for non-ClassDef classes
   static TClass *vectorlEL1GtEnergySumTemplategR_Dictionary() {
      TClass* theClass =::ROOT::GenerateInitInstanceLocal((const vector<L1GtEnergySumTemplate>*)0x0)->GetClass();
      vectorlEL1GtEnergySumTemplategR_TClassManip(theClass);
   return theClass;
   }

   static void vectorlEL1GtEnergySumTemplategR_TClassManip(TClass* ){
   }

} // end of namespace ROOT

namespace ROOT {
   // Wrappers around operator new
   static void *new_vectorlEL1GtEnergySumTemplategR(void *p) {
      return  p ? ::new((::ROOT::Internal::TOperatorNewHelper*)p) vector<L1GtEnergySumTemplate> : new vector<L1GtEnergySumTemplate>;
   }
   static void *newArray_vectorlEL1GtEnergySumTemplategR(Long_t nElements, void *p) {
      return p ? ::new((::ROOT::Internal::TOperatorNewHelper*)p) vector<L1GtEnergySumTemplate>[nElements] : new vector<L1GtEnergySumTemplate>[nElements];
   }
   // Wrapper around operator delete
   static void delete_vectorlEL1GtEnergySumTemplategR(void *p) {
      delete ((vector<L1GtEnergySumTemplate>*)p);
   }
   static void deleteArray_vectorlEL1GtEnergySumTemplategR(void *p) {
      delete [] ((vector<L1GtEnergySumTemplate>*)p);
   }
   static void destruct_vectorlEL1GtEnergySumTemplategR(void *p) {
      typedef vector<L1GtEnergySumTemplate> current_t;
      ((current_t*)p)->~current_t();
   }
} // end of namespace ROOT for class vector<L1GtEnergySumTemplate>

namespace ROOT {
   static TClass *vectorlEL1GtEnergySumTemplatecLcLObjectParametergR_Dictionary();
   static void vectorlEL1GtEnergySumTemplatecLcLObjectParametergR_TClassManip(TClass*);
   static void *new_vectorlEL1GtEnergySumTemplatecLcLObjectParametergR(void *p = 0);
   static void *newArray_vectorlEL1GtEnergySumTemplatecLcLObjectParametergR(Long_t size, void *p);
   static void delete_vectorlEL1GtEnergySumTemplatecLcLObjectParametergR(void *p);
   static void deleteArray_vectorlEL1GtEnergySumTemplatecLcLObjectParametergR(void *p);
   static void destruct_vectorlEL1GtEnergySumTemplatecLcLObjectParametergR(void *p);

   // Function generating the singleton type initializer
   static TGenericClassInfo *GenerateInitInstanceLocal(const vector<L1GtEnergySumTemplate::ObjectParameter>*)
   {
      vector<L1GtEnergySumTemplate::ObjectParameter> *ptr = 0;
      static ::TVirtualIsAProxy* isa_proxy = new ::TIsAProxy(typeid(vector<L1GtEnergySumTemplate::ObjectParameter>));
      static ::ROOT::TGenericClassInfo 
         instance("vector<L1GtEnergySumTemplate::ObjectParameter>", -2, "vector", 214,
                  typeid(vector<L1GtEnergySumTemplate::ObjectParameter>), ::ROOT::Internal::DefineBehavior(ptr, ptr),
                  &vectorlEL1GtEnergySumTemplatecLcLObjectParametergR_Dictionary, isa_proxy, 4,
                  sizeof(vector<L1GtEnergySumTemplate::ObjectParameter>) );
      instance.SetNew(&new_vectorlEL1GtEnergySumTemplatecLcLObjectParametergR);
      instance.SetNewArray(&newArray_vectorlEL1GtEnergySumTemplatecLcLObjectParametergR);
      instance.SetDelete(&delete_vectorlEL1GtEnergySumTemplatecLcLObjectParametergR);
      instance.SetDeleteArray(&deleteArray_vectorlEL1GtEnergySumTemplatecLcLObjectParametergR);
      instance.SetDestructor(&destruct_vectorlEL1GtEnergySumTemplatecLcLObjectParametergR);
      instance.AdoptCollectionProxyInfo(TCollectionProxyInfo::Generate(TCollectionProxyInfo::Pushback< vector<L1GtEnergySumTemplate::ObjectParameter> >()));
      return &instance;
   }
   // Static variable to force the class initialization
   static ::ROOT::TGenericClassInfo *_R__UNIQUE_(Init) = GenerateInitInstanceLocal((const vector<L1GtEnergySumTemplate::ObjectParameter>*)0x0); R__UseDummy(_R__UNIQUE_(Init));

   // Dictionary for non-ClassDef classes
   static TClass *vectorlEL1GtEnergySumTemplatecLcLObjectParametergR_Dictionary() {
      TClass* theClass =::ROOT::GenerateInitInstanceLocal((const vector<L1GtEnergySumTemplate::ObjectParameter>*)0x0)->GetClass();
      vectorlEL1GtEnergySumTemplatecLcLObjectParametergR_TClassManip(theClass);
   return theClass;
   }

   static void vectorlEL1GtEnergySumTemplatecLcLObjectParametergR_TClassManip(TClass* ){
   }

} // end of namespace ROOT

namespace ROOT {
   // Wrappers around operator new
   static void *new_vectorlEL1GtEnergySumTemplatecLcLObjectParametergR(void *p) {
      return  p ? ::new((::ROOT::Internal::TOperatorNewHelper*)p) vector<L1GtEnergySumTemplate::ObjectParameter> : new vector<L1GtEnergySumTemplate::ObjectParameter>;
   }
   static void *newArray_vectorlEL1GtEnergySumTemplatecLcLObjectParametergR(Long_t nElements, void *p) {
      return p ? ::new((::ROOT::Internal::TOperatorNewHelper*)p) vector<L1GtEnergySumTemplate::ObjectParameter>[nElements] : new vector<L1GtEnergySumTemplate::ObjectParameter>[nElements];
   }
   // Wrapper around operator delete
   static void delete_vectorlEL1GtEnergySumTemplatecLcLObjectParametergR(void *p) {
      delete ((vector<L1GtEnergySumTemplate::ObjectParameter>*)p);
   }
   static void deleteArray_vectorlEL1GtEnergySumTemplatecLcLObjectParametergR(void *p) {
      delete [] ((vector<L1GtEnergySumTemplate::ObjectParameter>*)p);
   }
   static void destruct_vectorlEL1GtEnergySumTemplatecLcLObjectParametergR(void *p) {
      typedef vector<L1GtEnergySumTemplate::ObjectParameter> current_t;
      ((current_t*)p)->~current_t();
   }
} // end of namespace ROOT for class vector<L1GtEnergySumTemplate::ObjectParameter>

namespace ROOT {
   static TClass *vectorlEL1GtCorrelationTemplategR_Dictionary();
   static void vectorlEL1GtCorrelationTemplategR_TClassManip(TClass*);
   static void *new_vectorlEL1GtCorrelationTemplategR(void *p = 0);
   static void *newArray_vectorlEL1GtCorrelationTemplategR(Long_t size, void *p);
   static void delete_vectorlEL1GtCorrelationTemplategR(void *p);
   static void deleteArray_vectorlEL1GtCorrelationTemplategR(void *p);
   static void destruct_vectorlEL1GtCorrelationTemplategR(void *p);

   // Function generating the singleton type initializer
   static TGenericClassInfo *GenerateInitInstanceLocal(const vector<L1GtCorrelationTemplate>*)
   {
      vector<L1GtCorrelationTemplate> *ptr = 0;
      static ::TVirtualIsAProxy* isa_proxy = new ::TIsAProxy(typeid(vector<L1GtCorrelationTemplate>));
      static ::ROOT::TGenericClassInfo 
         instance("vector<L1GtCorrelationTemplate>", -2, "vector", 214,
                  typeid(vector<L1GtCorrelationTemplate>), ::ROOT::Internal::DefineBehavior(ptr, ptr),
                  &vectorlEL1GtCorrelationTemplategR_Dictionary, isa_proxy, 4,
                  sizeof(vector<L1GtCorrelationTemplate>) );
      instance.SetNew(&new_vectorlEL1GtCorrelationTemplategR);
      instance.SetNewArray(&newArray_vectorlEL1GtCorrelationTemplategR);
      instance.SetDelete(&delete_vectorlEL1GtCorrelationTemplategR);
      instance.SetDeleteArray(&deleteArray_vectorlEL1GtCorrelationTemplategR);
      instance.SetDestructor(&destruct_vectorlEL1GtCorrelationTemplategR);
      instance.AdoptCollectionProxyInfo(TCollectionProxyInfo::Generate(TCollectionProxyInfo::Pushback< vector<L1GtCorrelationTemplate> >()));
      return &instance;
   }
   // Static variable to force the class initialization
   static ::ROOT::TGenericClassInfo *_R__UNIQUE_(Init) = GenerateInitInstanceLocal((const vector<L1GtCorrelationTemplate>*)0x0); R__UseDummy(_R__UNIQUE_(Init));

   // Dictionary for non-ClassDef classes
   static TClass *vectorlEL1GtCorrelationTemplategR_Dictionary() {
      TClass* theClass =::ROOT::GenerateInitInstanceLocal((const vector<L1GtCorrelationTemplate>*)0x0)->GetClass();
      vectorlEL1GtCorrelationTemplategR_TClassManip(theClass);
   return theClass;
   }

   static void vectorlEL1GtCorrelationTemplategR_TClassManip(TClass* ){
   }

} // end of namespace ROOT

namespace ROOT {
   // Wrappers around operator new
   static void *new_vectorlEL1GtCorrelationTemplategR(void *p) {
      return  p ? ::new((::ROOT::Internal::TOperatorNewHelper*)p) vector<L1GtCorrelationTemplate> : new vector<L1GtCorrelationTemplate>;
   }
   static void *newArray_vectorlEL1GtCorrelationTemplategR(Long_t nElements, void *p) {
      return p ? ::new((::ROOT::Internal::TOperatorNewHelper*)p) vector<L1GtCorrelationTemplate>[nElements] : new vector<L1GtCorrelationTemplate>[nElements];
   }
   // Wrapper around operator delete
   static void delete_vectorlEL1GtCorrelationTemplategR(void *p) {
      delete ((vector<L1GtCorrelationTemplate>*)p);
   }
   static void deleteArray_vectorlEL1GtCorrelationTemplategR(void *p) {
      delete [] ((vector<L1GtCorrelationTemplate>*)p);
   }
   static void destruct_vectorlEL1GtCorrelationTemplategR(void *p) {
      typedef vector<L1GtCorrelationTemplate> current_t;
      ((current_t*)p)->~current_t();
   }
} // end of namespace ROOT for class vector<L1GtCorrelationTemplate>

namespace ROOT {
   static TClass *vectorlEL1GtCastorTemplategR_Dictionary();
   static void vectorlEL1GtCastorTemplategR_TClassManip(TClass*);
   static void *new_vectorlEL1GtCastorTemplategR(void *p = 0);
   static void *newArray_vectorlEL1GtCastorTemplategR(Long_t size, void *p);
   static void delete_vectorlEL1GtCastorTemplategR(void *p);
   static void deleteArray_vectorlEL1GtCastorTemplategR(void *p);
   static void destruct_vectorlEL1GtCastorTemplategR(void *p);

   // Function generating the singleton type initializer
   static TGenericClassInfo *GenerateInitInstanceLocal(const vector<L1GtCastorTemplate>*)
   {
      vector<L1GtCastorTemplate> *ptr = 0;
      static ::TVirtualIsAProxy* isa_proxy = new ::TIsAProxy(typeid(vector<L1GtCastorTemplate>));
      static ::ROOT::TGenericClassInfo 
         instance("vector<L1GtCastorTemplate>", -2, "vector", 214,
                  typeid(vector<L1GtCastorTemplate>), ::ROOT::Internal::DefineBehavior(ptr, ptr),
                  &vectorlEL1GtCastorTemplategR_Dictionary, isa_proxy, 4,
                  sizeof(vector<L1GtCastorTemplate>) );
      instance.SetNew(&new_vectorlEL1GtCastorTemplategR);
      instance.SetNewArray(&newArray_vectorlEL1GtCastorTemplategR);
      instance.SetDelete(&delete_vectorlEL1GtCastorTemplategR);
      instance.SetDeleteArray(&deleteArray_vectorlEL1GtCastorTemplategR);
      instance.SetDestructor(&destruct_vectorlEL1GtCastorTemplategR);
      instance.AdoptCollectionProxyInfo(TCollectionProxyInfo::Generate(TCollectionProxyInfo::Pushback< vector<L1GtCastorTemplate> >()));
      return &instance;
   }
   // Static variable to force the class initialization
   static ::ROOT::TGenericClassInfo *_R__UNIQUE_(Init) = GenerateInitInstanceLocal((const vector<L1GtCastorTemplate>*)0x0); R__UseDummy(_R__UNIQUE_(Init));

   // Dictionary for non-ClassDef classes
   static TClass *vectorlEL1GtCastorTemplategR_Dictionary() {
      TClass* theClass =::ROOT::GenerateInitInstanceLocal((const vector<L1GtCastorTemplate>*)0x0)->GetClass();
      vectorlEL1GtCastorTemplategR_TClassManip(theClass);
   return theClass;
   }

   static void vectorlEL1GtCastorTemplategR_TClassManip(TClass* ){
   }

} // end of namespace ROOT

namespace ROOT {
   // Wrappers around operator new
   static void *new_vectorlEL1GtCastorTemplategR(void *p) {
      return  p ? ::new((::ROOT::Internal::TOperatorNewHelper*)p) vector<L1GtCastorTemplate> : new vector<L1GtCastorTemplate>;
   }
   static void *newArray_vectorlEL1GtCastorTemplategR(Long_t nElements, void *p) {
      return p ? ::new((::ROOT::Internal::TOperatorNewHelper*)p) vector<L1GtCastorTemplate>[nElements] : new vector<L1GtCastorTemplate>[nElements];
   }
   // Wrapper around operator delete
   static void delete_vectorlEL1GtCastorTemplategR(void *p) {
      delete ((vector<L1GtCastorTemplate>*)p);
   }
   static void deleteArray_vectorlEL1GtCastorTemplategR(void *p) {
      delete [] ((vector<L1GtCastorTemplate>*)p);
   }
   static void destruct_vectorlEL1GtCastorTemplategR(void *p) {
      typedef vector<L1GtCastorTemplate> current_t;
      ((current_t*)p)->~current_t();
   }
} // end of namespace ROOT for class vector<L1GtCastorTemplate>

namespace ROOT {
   static TClass *vectorlEL1GtCaloTemplategR_Dictionary();
   static void vectorlEL1GtCaloTemplategR_TClassManip(TClass*);
   static void *new_vectorlEL1GtCaloTemplategR(void *p = 0);
   static void *newArray_vectorlEL1GtCaloTemplategR(Long_t size, void *p);
   static void delete_vectorlEL1GtCaloTemplategR(void *p);
   static void deleteArray_vectorlEL1GtCaloTemplategR(void *p);
   static void destruct_vectorlEL1GtCaloTemplategR(void *p);

   // Function generating the singleton type initializer
   static TGenericClassInfo *GenerateInitInstanceLocal(const vector<L1GtCaloTemplate>*)
   {
      vector<L1GtCaloTemplate> *ptr = 0;
      static ::TVirtualIsAProxy* isa_proxy = new ::TIsAProxy(typeid(vector<L1GtCaloTemplate>));
      static ::ROOT::TGenericClassInfo 
         instance("vector<L1GtCaloTemplate>", -2, "vector", 214,
                  typeid(vector<L1GtCaloTemplate>), ::ROOT::Internal::DefineBehavior(ptr, ptr),
                  &vectorlEL1GtCaloTemplategR_Dictionary, isa_proxy, 4,
                  sizeof(vector<L1GtCaloTemplate>) );
      instance.SetNew(&new_vectorlEL1GtCaloTemplategR);
      instance.SetNewArray(&newArray_vectorlEL1GtCaloTemplategR);
      instance.SetDelete(&delete_vectorlEL1GtCaloTemplategR);
      instance.SetDeleteArray(&deleteArray_vectorlEL1GtCaloTemplategR);
      instance.SetDestructor(&destruct_vectorlEL1GtCaloTemplategR);
      instance.AdoptCollectionProxyInfo(TCollectionProxyInfo::Generate(TCollectionProxyInfo::Pushback< vector<L1GtCaloTemplate> >()));
      return &instance;
   }
   // Static variable to force the class initialization
   static ::ROOT::TGenericClassInfo *_R__UNIQUE_(Init) = GenerateInitInstanceLocal((const vector<L1GtCaloTemplate>*)0x0); R__UseDummy(_R__UNIQUE_(Init));

   // Dictionary for non-ClassDef classes
   static TClass *vectorlEL1GtCaloTemplategR_Dictionary() {
      TClass* theClass =::ROOT::GenerateInitInstanceLocal((const vector<L1GtCaloTemplate>*)0x0)->GetClass();
      vectorlEL1GtCaloTemplategR_TClassManip(theClass);
   return theClass;
   }

   static void vectorlEL1GtCaloTemplategR_TClassManip(TClass* ){
   }

} // end of namespace ROOT

namespace ROOT {
   // Wrappers around operator new
   static void *new_vectorlEL1GtCaloTemplategR(void *p) {
      return  p ? ::new((::ROOT::Internal::TOperatorNewHelper*)p) vector<L1GtCaloTemplate> : new vector<L1GtCaloTemplate>;
   }
   static void *newArray_vectorlEL1GtCaloTemplategR(Long_t nElements, void *p) {
      return p ? ::new((::ROOT::Internal::TOperatorNewHelper*)p) vector<L1GtCaloTemplate>[nElements] : new vector<L1GtCaloTemplate>[nElements];
   }
   // Wrapper around operator delete
   static void delete_vectorlEL1GtCaloTemplategR(void *p) {
      delete ((vector<L1GtCaloTemplate>*)p);
   }
   static void deleteArray_vectorlEL1GtCaloTemplategR(void *p) {
      delete [] ((vector<L1GtCaloTemplate>*)p);
   }
   static void destruct_vectorlEL1GtCaloTemplategR(void *p) {
      typedef vector<L1GtCaloTemplate> current_t;
      ((current_t*)p)->~current_t();
   }
} // end of namespace ROOT for class vector<L1GtCaloTemplate>

namespace ROOT {
   static TClass *vectorlEL1GtCaloTemplatecLcLObjectParametergR_Dictionary();
   static void vectorlEL1GtCaloTemplatecLcLObjectParametergR_TClassManip(TClass*);
   static void *new_vectorlEL1GtCaloTemplatecLcLObjectParametergR(void *p = 0);
   static void *newArray_vectorlEL1GtCaloTemplatecLcLObjectParametergR(Long_t size, void *p);
   static void delete_vectorlEL1GtCaloTemplatecLcLObjectParametergR(void *p);
   static void deleteArray_vectorlEL1GtCaloTemplatecLcLObjectParametergR(void *p);
   static void destruct_vectorlEL1GtCaloTemplatecLcLObjectParametergR(void *p);

   // Function generating the singleton type initializer
   static TGenericClassInfo *GenerateInitInstanceLocal(const vector<L1GtCaloTemplate::ObjectParameter>*)
   {
      vector<L1GtCaloTemplate::ObjectParameter> *ptr = 0;
      static ::TVirtualIsAProxy* isa_proxy = new ::TIsAProxy(typeid(vector<L1GtCaloTemplate::ObjectParameter>));
      static ::ROOT::TGenericClassInfo 
         instance("vector<L1GtCaloTemplate::ObjectParameter>", -2, "vector", 214,
                  typeid(vector<L1GtCaloTemplate::ObjectParameter>), ::ROOT::Internal::DefineBehavior(ptr, ptr),
                  &vectorlEL1GtCaloTemplatecLcLObjectParametergR_Dictionary, isa_proxy, 4,
                  sizeof(vector<L1GtCaloTemplate::ObjectParameter>) );
      instance.SetNew(&new_vectorlEL1GtCaloTemplatecLcLObjectParametergR);
      instance.SetNewArray(&newArray_vectorlEL1GtCaloTemplatecLcLObjectParametergR);
      instance.SetDelete(&delete_vectorlEL1GtCaloTemplatecLcLObjectParametergR);
      instance.SetDeleteArray(&deleteArray_vectorlEL1GtCaloTemplatecLcLObjectParametergR);
      instance.SetDestructor(&destruct_vectorlEL1GtCaloTemplatecLcLObjectParametergR);
      instance.AdoptCollectionProxyInfo(TCollectionProxyInfo::Generate(TCollectionProxyInfo::Pushback< vector<L1GtCaloTemplate::ObjectParameter> >()));
      return &instance;
   }
   // Static variable to force the class initialization
   static ::ROOT::TGenericClassInfo *_R__UNIQUE_(Init) = GenerateInitInstanceLocal((const vector<L1GtCaloTemplate::ObjectParameter>*)0x0); R__UseDummy(_R__UNIQUE_(Init));

   // Dictionary for non-ClassDef classes
   static TClass *vectorlEL1GtCaloTemplatecLcLObjectParametergR_Dictionary() {
      TClass* theClass =::ROOT::GenerateInitInstanceLocal((const vector<L1GtCaloTemplate::ObjectParameter>*)0x0)->GetClass();
      vectorlEL1GtCaloTemplatecLcLObjectParametergR_TClassManip(theClass);
   return theClass;
   }

   static void vectorlEL1GtCaloTemplatecLcLObjectParametergR_TClassManip(TClass* ){
   }

} // end of namespace ROOT

namespace ROOT {
   // Wrappers around operator new
   static void *new_vectorlEL1GtCaloTemplatecLcLObjectParametergR(void *p) {
      return  p ? ::new((::ROOT::Internal::TOperatorNewHelper*)p) vector<L1GtCaloTemplate::ObjectParameter> : new vector<L1GtCaloTemplate::ObjectParameter>;
   }
   static void *newArray_vectorlEL1GtCaloTemplatecLcLObjectParametergR(Long_t nElements, void *p) {
      return p ? ::new((::ROOT::Internal::TOperatorNewHelper*)p) vector<L1GtCaloTemplate::ObjectParameter>[nElements] : new vector<L1GtCaloTemplate::ObjectParameter>[nElements];
   }
   // Wrapper around operator delete
   static void delete_vectorlEL1GtCaloTemplatecLcLObjectParametergR(void *p) {
      delete ((vector<L1GtCaloTemplate::ObjectParameter>*)p);
   }
   static void deleteArray_vectorlEL1GtCaloTemplatecLcLObjectParametergR(void *p) {
      delete [] ((vector<L1GtCaloTemplate::ObjectParameter>*)p);
   }
   static void destruct_vectorlEL1GtCaloTemplatecLcLObjectParametergR(void *p) {
      typedef vector<L1GtCaloTemplate::ObjectParameter> current_t;
      ((current_t*)p)->~current_t();
   }
} // end of namespace ROOT for class vector<L1GtCaloTemplate::ObjectParameter>

namespace ROOT {
   static TClass *vectorlEL1GtBptxTemplategR_Dictionary();
   static void vectorlEL1GtBptxTemplategR_TClassManip(TClass*);
   static void *new_vectorlEL1GtBptxTemplategR(void *p = 0);
   static void *newArray_vectorlEL1GtBptxTemplategR(Long_t size, void *p);
   static void delete_vectorlEL1GtBptxTemplategR(void *p);
   static void deleteArray_vectorlEL1GtBptxTemplategR(void *p);
   static void destruct_vectorlEL1GtBptxTemplategR(void *p);

   // Function generating the singleton type initializer
   static TGenericClassInfo *GenerateInitInstanceLocal(const vector<L1GtBptxTemplate>*)
   {
      vector<L1GtBptxTemplate> *ptr = 0;
      static ::TVirtualIsAProxy* isa_proxy = new ::TIsAProxy(typeid(vector<L1GtBptxTemplate>));
      static ::ROOT::TGenericClassInfo 
         instance("vector<L1GtBptxTemplate>", -2, "vector", 214,
                  typeid(vector<L1GtBptxTemplate>), ::ROOT::Internal::DefineBehavior(ptr, ptr),
                  &vectorlEL1GtBptxTemplategR_Dictionary, isa_proxy, 4,
                  sizeof(vector<L1GtBptxTemplate>) );
      instance.SetNew(&new_vectorlEL1GtBptxTemplategR);
      instance.SetNewArray(&newArray_vectorlEL1GtBptxTemplategR);
      instance.SetDelete(&delete_vectorlEL1GtBptxTemplategR);
      instance.SetDeleteArray(&deleteArray_vectorlEL1GtBptxTemplategR);
      instance.SetDestructor(&destruct_vectorlEL1GtBptxTemplategR);
      instance.AdoptCollectionProxyInfo(TCollectionProxyInfo::Generate(TCollectionProxyInfo::Pushback< vector<L1GtBptxTemplate> >()));
      return &instance;
   }
   // Static variable to force the class initialization
   static ::ROOT::TGenericClassInfo *_R__UNIQUE_(Init) = GenerateInitInstanceLocal((const vector<L1GtBptxTemplate>*)0x0); R__UseDummy(_R__UNIQUE_(Init));

   // Dictionary for non-ClassDef classes
   static TClass *vectorlEL1GtBptxTemplategR_Dictionary() {
      TClass* theClass =::ROOT::GenerateInitInstanceLocal((const vector<L1GtBptxTemplate>*)0x0)->GetClass();
      vectorlEL1GtBptxTemplategR_TClassManip(theClass);
   return theClass;
   }

   static void vectorlEL1GtBptxTemplategR_TClassManip(TClass* ){
   }

} // end of namespace ROOT

namespace ROOT {
   // Wrappers around operator new
   static void *new_vectorlEL1GtBptxTemplategR(void *p) {
      return  p ? ::new((::ROOT::Internal::TOperatorNewHelper*)p) vector<L1GtBptxTemplate> : new vector<L1GtBptxTemplate>;
   }
   static void *newArray_vectorlEL1GtBptxTemplategR(Long_t nElements, void *p) {
      return p ? ::new((::ROOT::Internal::TOperatorNewHelper*)p) vector<L1GtBptxTemplate>[nElements] : new vector<L1GtBptxTemplate>[nElements];
   }
   // Wrapper around operator delete
   static void delete_vectorlEL1GtBptxTemplategR(void *p) {
      delete ((vector<L1GtBptxTemplate>*)p);
   }
   static void deleteArray_vectorlEL1GtBptxTemplategR(void *p) {
      delete [] ((vector<L1GtBptxTemplate>*)p);
   }
   static void destruct_vectorlEL1GtBptxTemplategR(void *p) {
      typedef vector<L1GtBptxTemplate> current_t;
      ((current_t*)p)->~current_t();
   }
} // end of namespace ROOT for class vector<L1GtBptxTemplate>

namespace ROOT {
   static TClass *vectorlEL1GtBoardgR_Dictionary();
   static void vectorlEL1GtBoardgR_TClassManip(TClass*);
   static void *new_vectorlEL1GtBoardgR(void *p = 0);
   static void *newArray_vectorlEL1GtBoardgR(Long_t size, void *p);
   static void delete_vectorlEL1GtBoardgR(void *p);
   static void deleteArray_vectorlEL1GtBoardgR(void *p);
   static void destruct_vectorlEL1GtBoardgR(void *p);

   // Function generating the singleton type initializer
   static TGenericClassInfo *GenerateInitInstanceLocal(const vector<L1GtBoard>*)
   {
      vector<L1GtBoard> *ptr = 0;
      static ::TVirtualIsAProxy* isa_proxy = new ::TIsAProxy(typeid(vector<L1GtBoard>));
      static ::ROOT::TGenericClassInfo 
         instance("vector<L1GtBoard>", -2, "vector", 214,
                  typeid(vector<L1GtBoard>), ::ROOT::Internal::DefineBehavior(ptr, ptr),
                  &vectorlEL1GtBoardgR_Dictionary, isa_proxy, 4,
                  sizeof(vector<L1GtBoard>) );
      instance.SetNew(&new_vectorlEL1GtBoardgR);
      instance.SetNewArray(&newArray_vectorlEL1GtBoardgR);
      instance.SetDelete(&delete_vectorlEL1GtBoardgR);
      instance.SetDeleteArray(&deleteArray_vectorlEL1GtBoardgR);
      instance.SetDestructor(&destruct_vectorlEL1GtBoardgR);
      instance.AdoptCollectionProxyInfo(TCollectionProxyInfo::Generate(TCollectionProxyInfo::Pushback< vector<L1GtBoard> >()));
      return &instance;
   }
   // Static variable to force the class initialization
   static ::ROOT::TGenericClassInfo *_R__UNIQUE_(Init) = GenerateInitInstanceLocal((const vector<L1GtBoard>*)0x0); R__UseDummy(_R__UNIQUE_(Init));

   // Dictionary for non-ClassDef classes
   static TClass *vectorlEL1GtBoardgR_Dictionary() {
      TClass* theClass =::ROOT::GenerateInitInstanceLocal((const vector<L1GtBoard>*)0x0)->GetClass();
      vectorlEL1GtBoardgR_TClassManip(theClass);
   return theClass;
   }

   static void vectorlEL1GtBoardgR_TClassManip(TClass* ){
   }

} // end of namespace ROOT

namespace ROOT {
   // Wrappers around operator new
   static void *new_vectorlEL1GtBoardgR(void *p) {
      return  p ? ::new((::ROOT::Internal::TOperatorNewHelper*)p) vector<L1GtBoard> : new vector<L1GtBoard>;
   }
   static void *newArray_vectorlEL1GtBoardgR(Long_t nElements, void *p) {
      return p ? ::new((::ROOT::Internal::TOperatorNewHelper*)p) vector<L1GtBoard>[nElements] : new vector<L1GtBoard>[nElements];
   }
   // Wrapper around operator delete
   static void delete_vectorlEL1GtBoardgR(void *p) {
      delete ((vector<L1GtBoard>*)p);
   }
   static void deleteArray_vectorlEL1GtBoardgR(void *p) {
      delete [] ((vector<L1GtBoard>*)p);
   }
   static void destruct_vectorlEL1GtBoardgR(void *p) {
      typedef vector<L1GtBoard> current_t;
      ((current_t*)p)->~current_t();
   }
} // end of namespace ROOT for class vector<L1GtBoard>

namespace ROOT {
   static TClass *maplEstringcOL1TUtmTriggerMenugR_Dictionary();
   static void maplEstringcOL1TUtmTriggerMenugR_TClassManip(TClass*);
   static void *new_maplEstringcOL1TUtmTriggerMenugR(void *p = 0);
   static void *newArray_maplEstringcOL1TUtmTriggerMenugR(Long_t size, void *p);
   static void delete_maplEstringcOL1TUtmTriggerMenugR(void *p);
   static void deleteArray_maplEstringcOL1TUtmTriggerMenugR(void *p);
   static void destruct_maplEstringcOL1TUtmTriggerMenugR(void *p);

   // Function generating the singleton type initializer
   static TGenericClassInfo *GenerateInitInstanceLocal(const map<string,L1TUtmTriggerMenu>*)
   {
      map<string,L1TUtmTriggerMenu> *ptr = 0;
      static ::TVirtualIsAProxy* isa_proxy = new ::TIsAProxy(typeid(map<string,L1TUtmTriggerMenu>));
      static ::ROOT::TGenericClassInfo 
         instance("map<string,L1TUtmTriggerMenu>", -2, "map", 96,
                  typeid(map<string,L1TUtmTriggerMenu>), ::ROOT::Internal::DefineBehavior(ptr, ptr),
                  &maplEstringcOL1TUtmTriggerMenugR_Dictionary, isa_proxy, 4,
                  sizeof(map<string,L1TUtmTriggerMenu>) );
      instance.SetNew(&new_maplEstringcOL1TUtmTriggerMenugR);
      instance.SetNewArray(&newArray_maplEstringcOL1TUtmTriggerMenugR);
      instance.SetDelete(&delete_maplEstringcOL1TUtmTriggerMenugR);
      instance.SetDeleteArray(&deleteArray_maplEstringcOL1TUtmTriggerMenugR);
      instance.SetDestructor(&destruct_maplEstringcOL1TUtmTriggerMenugR);
      instance.AdoptCollectionProxyInfo(TCollectionProxyInfo::Generate(TCollectionProxyInfo::MapInsert< map<string,L1TUtmTriggerMenu> >()));
      return &instance;
   }
   // Static variable to force the class initialization
   static ::ROOT::TGenericClassInfo *_R__UNIQUE_(Init) = GenerateInitInstanceLocal((const map<string,L1TUtmTriggerMenu>*)0x0); R__UseDummy(_R__UNIQUE_(Init));

   // Dictionary for non-ClassDef classes
   static TClass *maplEstringcOL1TUtmTriggerMenugR_Dictionary() {
      TClass* theClass =::ROOT::GenerateInitInstanceLocal((const map<string,L1TUtmTriggerMenu>*)0x0)->GetClass();
      maplEstringcOL1TUtmTriggerMenugR_TClassManip(theClass);
   return theClass;
   }

   static void maplEstringcOL1TUtmTriggerMenugR_TClassManip(TClass* ){
   }

} // end of namespace ROOT

namespace ROOT {
   // Wrappers around operator new
   static void *new_maplEstringcOL1TUtmTriggerMenugR(void *p) {
      return  p ? ::new((::ROOT::Internal::TOperatorNewHelper*)p) map<string,L1TUtmTriggerMenu> : new map<string,L1TUtmTriggerMenu>;
   }
   static void *newArray_maplEstringcOL1TUtmTriggerMenugR(Long_t nElements, void *p) {
      return p ? ::new((::ROOT::Internal::TOperatorNewHelper*)p) map<string,L1TUtmTriggerMenu>[nElements] : new map<string,L1TUtmTriggerMenu>[nElements];
   }
   // Wrapper around operator delete
   static void delete_maplEstringcOL1TUtmTriggerMenugR(void *p) {
      delete ((map<string,L1TUtmTriggerMenu>*)p);
   }
   static void deleteArray_maplEstringcOL1TUtmTriggerMenugR(void *p) {
      delete [] ((map<string,L1TUtmTriggerMenu>*)p);
   }
   static void destruct_maplEstringcOL1TUtmTriggerMenugR(void *p) {
      typedef map<string,L1TUtmTriggerMenu> current_t;
      ((current_t*)p)->~current_t();
   }
} // end of namespace ROOT for class map<string,L1TUtmTriggerMenu>

namespace ROOT {
   static TClass *maplEstringcOL1TUtmScalegR_Dictionary();
   static void maplEstringcOL1TUtmScalegR_TClassManip(TClass*);
   static void *new_maplEstringcOL1TUtmScalegR(void *p = 0);
   static void *newArray_maplEstringcOL1TUtmScalegR(Long_t size, void *p);
   static void delete_maplEstringcOL1TUtmScalegR(void *p);
   static void deleteArray_maplEstringcOL1TUtmScalegR(void *p);
   static void destruct_maplEstringcOL1TUtmScalegR(void *p);

   // Function generating the singleton type initializer
   static TGenericClassInfo *GenerateInitInstanceLocal(const map<string,L1TUtmScale>*)
   {
      map<string,L1TUtmScale> *ptr = 0;
      static ::TVirtualIsAProxy* isa_proxy = new ::TIsAProxy(typeid(map<string,L1TUtmScale>));
      static ::ROOT::TGenericClassInfo 
         instance("map<string,L1TUtmScale>", -2, "map", 96,
                  typeid(map<string,L1TUtmScale>), ::ROOT::Internal::DefineBehavior(ptr, ptr),
                  &maplEstringcOL1TUtmScalegR_Dictionary, isa_proxy, 4,
                  sizeof(map<string,L1TUtmScale>) );
      instance.SetNew(&new_maplEstringcOL1TUtmScalegR);
      instance.SetNewArray(&newArray_maplEstringcOL1TUtmScalegR);
      instance.SetDelete(&delete_maplEstringcOL1TUtmScalegR);
      instance.SetDeleteArray(&deleteArray_maplEstringcOL1TUtmScalegR);
      instance.SetDestructor(&destruct_maplEstringcOL1TUtmScalegR);
      instance.AdoptCollectionProxyInfo(TCollectionProxyInfo::Generate(TCollectionProxyInfo::MapInsert< map<string,L1TUtmScale> >()));
      return &instance;
   }
   // Static variable to force the class initialization
   static ::ROOT::TGenericClassInfo *_R__UNIQUE_(Init) = GenerateInitInstanceLocal((const map<string,L1TUtmScale>*)0x0); R__UseDummy(_R__UNIQUE_(Init));

   // Dictionary for non-ClassDef classes
   static TClass *maplEstringcOL1TUtmScalegR_Dictionary() {
      TClass* theClass =::ROOT::GenerateInitInstanceLocal((const map<string,L1TUtmScale>*)0x0)->GetClass();
      maplEstringcOL1TUtmScalegR_TClassManip(theClass);
   return theClass;
   }

   static void maplEstringcOL1TUtmScalegR_TClassManip(TClass* ){
   }

} // end of namespace ROOT

namespace ROOT {
   // Wrappers around operator new
   static void *new_maplEstringcOL1TUtmScalegR(void *p) {
      return  p ? ::new((::ROOT::Internal::TOperatorNewHelper*)p) map<string,L1TUtmScale> : new map<string,L1TUtmScale>;
   }
   static void *newArray_maplEstringcOL1TUtmScalegR(Long_t nElements, void *p) {
      return p ? ::new((::ROOT::Internal::TOperatorNewHelper*)p) map<string,L1TUtmScale>[nElements] : new map<string,L1TUtmScale>[nElements];
   }
   // Wrapper around operator delete
   static void delete_maplEstringcOL1TUtmScalegR(void *p) {
      delete ((map<string,L1TUtmScale>*)p);
   }
   static void deleteArray_maplEstringcOL1TUtmScalegR(void *p) {
      delete [] ((map<string,L1TUtmScale>*)p);
   }
   static void destruct_maplEstringcOL1TUtmScalegR(void *p) {
      typedef map<string,L1TUtmScale> current_t;
      ((current_t*)p)->~current_t();
   }
} // end of namespace ROOT for class map<string,L1TUtmScale>

namespace ROOT {
   static TClass *maplEstringcOL1TUtmObjectgR_Dictionary();
   static void maplEstringcOL1TUtmObjectgR_TClassManip(TClass*);
   static void *new_maplEstringcOL1TUtmObjectgR(void *p = 0);
   static void *newArray_maplEstringcOL1TUtmObjectgR(Long_t size, void *p);
   static void delete_maplEstringcOL1TUtmObjectgR(void *p);
   static void deleteArray_maplEstringcOL1TUtmObjectgR(void *p);
   static void destruct_maplEstringcOL1TUtmObjectgR(void *p);

   // Function generating the singleton type initializer
   static TGenericClassInfo *GenerateInitInstanceLocal(const map<string,L1TUtmObject>*)
   {
      map<string,L1TUtmObject> *ptr = 0;
      static ::TVirtualIsAProxy* isa_proxy = new ::TIsAProxy(typeid(map<string,L1TUtmObject>));
      static ::ROOT::TGenericClassInfo 
         instance("map<string,L1TUtmObject>", -2, "map", 96,
                  typeid(map<string,L1TUtmObject>), ::ROOT::Internal::DefineBehavior(ptr, ptr),
                  &maplEstringcOL1TUtmObjectgR_Dictionary, isa_proxy, 4,
                  sizeof(map<string,L1TUtmObject>) );
      instance.SetNew(&new_maplEstringcOL1TUtmObjectgR);
      instance.SetNewArray(&newArray_maplEstringcOL1TUtmObjectgR);
      instance.SetDelete(&delete_maplEstringcOL1TUtmObjectgR);
      instance.SetDeleteArray(&deleteArray_maplEstringcOL1TUtmObjectgR);
      instance.SetDestructor(&destruct_maplEstringcOL1TUtmObjectgR);
      instance.AdoptCollectionProxyInfo(TCollectionProxyInfo::Generate(TCollectionProxyInfo::MapInsert< map<string,L1TUtmObject> >()));
      return &instance;
   }
   // Static variable to force the class initialization
   static ::ROOT::TGenericClassInfo *_R__UNIQUE_(Init) = GenerateInitInstanceLocal((const map<string,L1TUtmObject>*)0x0); R__UseDummy(_R__UNIQUE_(Init));

   // Dictionary for non-ClassDef classes
   static TClass *maplEstringcOL1TUtmObjectgR_Dictionary() {
      TClass* theClass =::ROOT::GenerateInitInstanceLocal((const map<string,L1TUtmObject>*)0x0)->GetClass();
      maplEstringcOL1TUtmObjectgR_TClassManip(theClass);
   return theClass;
   }

   static void maplEstringcOL1TUtmObjectgR_TClassManip(TClass* ){
   }

} // end of namespace ROOT

namespace ROOT {
   // Wrappers around operator new
   static void *new_maplEstringcOL1TUtmObjectgR(void *p) {
      return  p ? ::new((::ROOT::Internal::TOperatorNewHelper*)p) map<string,L1TUtmObject> : new map<string,L1TUtmObject>;
   }
   static void *newArray_maplEstringcOL1TUtmObjectgR(Long_t nElements, void *p) {
      return p ? ::new((::ROOT::Internal::TOperatorNewHelper*)p) map<string,L1TUtmObject>[nElements] : new map<string,L1TUtmObject>[nElements];
   }
   // Wrapper around operator delete
   static void delete_maplEstringcOL1TUtmObjectgR(void *p) {
      delete ((map<string,L1TUtmObject>*)p);
   }
   static void deleteArray_maplEstringcOL1TUtmObjectgR(void *p) {
      delete [] ((map<string,L1TUtmObject>*)p);
   }
   static void destruct_maplEstringcOL1TUtmObjectgR(void *p) {
      typedef map<string,L1TUtmObject> current_t;
      ((current_t*)p)->~current_t();
   }
} // end of namespace ROOT for class map<string,L1TUtmObject>

namespace ROOT {
   static TClass *maplEstringcOL1TUtmCutValuegR_Dictionary();
   static void maplEstringcOL1TUtmCutValuegR_TClassManip(TClass*);
   static void *new_maplEstringcOL1TUtmCutValuegR(void *p = 0);
   static void *newArray_maplEstringcOL1TUtmCutValuegR(Long_t size, void *p);
   static void delete_maplEstringcOL1TUtmCutValuegR(void *p);
   static void deleteArray_maplEstringcOL1TUtmCutValuegR(void *p);
   static void destruct_maplEstringcOL1TUtmCutValuegR(void *p);

   // Function generating the singleton type initializer
   static TGenericClassInfo *GenerateInitInstanceLocal(const map<string,L1TUtmCutValue>*)
   {
      map<string,L1TUtmCutValue> *ptr = 0;
      static ::TVirtualIsAProxy* isa_proxy = new ::TIsAProxy(typeid(map<string,L1TUtmCutValue>));
      static ::ROOT::TGenericClassInfo 
         instance("map<string,L1TUtmCutValue>", -2, "map", 96,
                  typeid(map<string,L1TUtmCutValue>), ::ROOT::Internal::DefineBehavior(ptr, ptr),
                  &maplEstringcOL1TUtmCutValuegR_Dictionary, isa_proxy, 4,
                  sizeof(map<string,L1TUtmCutValue>) );
      instance.SetNew(&new_maplEstringcOL1TUtmCutValuegR);
      instance.SetNewArray(&newArray_maplEstringcOL1TUtmCutValuegR);
      instance.SetDelete(&delete_maplEstringcOL1TUtmCutValuegR);
      instance.SetDeleteArray(&deleteArray_maplEstringcOL1TUtmCutValuegR);
      instance.SetDestructor(&destruct_maplEstringcOL1TUtmCutValuegR);
      instance.AdoptCollectionProxyInfo(TCollectionProxyInfo::Generate(TCollectionProxyInfo::MapInsert< map<string,L1TUtmCutValue> >()));
      return &instance;
   }
   // Static variable to force the class initialization
   static ::ROOT::TGenericClassInfo *_R__UNIQUE_(Init) = GenerateInitInstanceLocal((const map<string,L1TUtmCutValue>*)0x0); R__UseDummy(_R__UNIQUE_(Init));

   // Dictionary for non-ClassDef classes
   static TClass *maplEstringcOL1TUtmCutValuegR_Dictionary() {
      TClass* theClass =::ROOT::GenerateInitInstanceLocal((const map<string,L1TUtmCutValue>*)0x0)->GetClass();
      maplEstringcOL1TUtmCutValuegR_TClassManip(theClass);
   return theClass;
   }

   static void maplEstringcOL1TUtmCutValuegR_TClassManip(TClass* ){
   }

} // end of namespace ROOT

namespace ROOT {
   // Wrappers around operator new
   static void *new_maplEstringcOL1TUtmCutValuegR(void *p) {
      return  p ? ::new((::ROOT::Internal::TOperatorNewHelper*)p) map<string,L1TUtmCutValue> : new map<string,L1TUtmCutValue>;
   }
   static void *newArray_maplEstringcOL1TUtmCutValuegR(Long_t nElements, void *p) {
      return p ? ::new((::ROOT::Internal::TOperatorNewHelper*)p) map<string,L1TUtmCutValue>[nElements] : new map<string,L1TUtmCutValue>[nElements];
   }
   // Wrapper around operator delete
   static void delete_maplEstringcOL1TUtmCutValuegR(void *p) {
      delete ((map<string,L1TUtmCutValue>*)p);
   }
   static void deleteArray_maplEstringcOL1TUtmCutValuegR(void *p) {
      delete [] ((map<string,L1TUtmCutValue>*)p);
   }
   static void destruct_maplEstringcOL1TUtmCutValuegR(void *p) {
      typedef map<string,L1TUtmCutValue> current_t;
      ((current_t*)p)->~current_t();
   }
} // end of namespace ROOT for class map<string,L1TUtmCutValue>

namespace ROOT {
   static TClass *maplEstringcOL1TUtmCutgR_Dictionary();
   static void maplEstringcOL1TUtmCutgR_TClassManip(TClass*);
   static void *new_maplEstringcOL1TUtmCutgR(void *p = 0);
   static void *newArray_maplEstringcOL1TUtmCutgR(Long_t size, void *p);
   static void delete_maplEstringcOL1TUtmCutgR(void *p);
   static void deleteArray_maplEstringcOL1TUtmCutgR(void *p);
   static void destruct_maplEstringcOL1TUtmCutgR(void *p);

   // Function generating the singleton type initializer
   static TGenericClassInfo *GenerateInitInstanceLocal(const map<string,L1TUtmCut>*)
   {
      map<string,L1TUtmCut> *ptr = 0;
      static ::TVirtualIsAProxy* isa_proxy = new ::TIsAProxy(typeid(map<string,L1TUtmCut>));
      static ::ROOT::TGenericClassInfo 
         instance("map<string,L1TUtmCut>", -2, "map", 96,
                  typeid(map<string,L1TUtmCut>), ::ROOT::Internal::DefineBehavior(ptr, ptr),
                  &maplEstringcOL1TUtmCutgR_Dictionary, isa_proxy, 4,
                  sizeof(map<string,L1TUtmCut>) );
      instance.SetNew(&new_maplEstringcOL1TUtmCutgR);
      instance.SetNewArray(&newArray_maplEstringcOL1TUtmCutgR);
      instance.SetDelete(&delete_maplEstringcOL1TUtmCutgR);
      instance.SetDeleteArray(&deleteArray_maplEstringcOL1TUtmCutgR);
      instance.SetDestructor(&destruct_maplEstringcOL1TUtmCutgR);
      instance.AdoptCollectionProxyInfo(TCollectionProxyInfo::Generate(TCollectionProxyInfo::MapInsert< map<string,L1TUtmCut> >()));
      return &instance;
   }
   // Static variable to force the class initialization
   static ::ROOT::TGenericClassInfo *_R__UNIQUE_(Init) = GenerateInitInstanceLocal((const map<string,L1TUtmCut>*)0x0); R__UseDummy(_R__UNIQUE_(Init));

   // Dictionary for non-ClassDef classes
   static TClass *maplEstringcOL1TUtmCutgR_Dictionary() {
      TClass* theClass =::ROOT::GenerateInitInstanceLocal((const map<string,L1TUtmCut>*)0x0)->GetClass();
      maplEstringcOL1TUtmCutgR_TClassManip(theClass);
   return theClass;
   }

   static void maplEstringcOL1TUtmCutgR_TClassManip(TClass* ){
   }

} // end of namespace ROOT

namespace ROOT {
   // Wrappers around operator new
   static void *new_maplEstringcOL1TUtmCutgR(void *p) {
      return  p ? ::new((::ROOT::Internal::TOperatorNewHelper*)p) map<string,L1TUtmCut> : new map<string,L1TUtmCut>;
   }
   static void *newArray_maplEstringcOL1TUtmCutgR(Long_t nElements, void *p) {
      return p ? ::new((::ROOT::Internal::TOperatorNewHelper*)p) map<string,L1TUtmCut>[nElements] : new map<string,L1TUtmCut>[nElements];
   }
   // Wrapper around operator delete
   static void delete_maplEstringcOL1TUtmCutgR(void *p) {
      delete ((map<string,L1TUtmCut>*)p);
   }
   static void deleteArray_maplEstringcOL1TUtmCutgR(void *p) {
      delete [] ((map<string,L1TUtmCut>*)p);
   }
   static void destruct_maplEstringcOL1TUtmCutgR(void *p) {
      typedef map<string,L1TUtmCut> current_t;
      ((current_t*)p)->~current_t();
   }
} // end of namespace ROOT for class map<string,L1TUtmCut>

namespace ROOT {
   static TClass *maplEstringcOL1TUtmConditiongR_Dictionary();
   static void maplEstringcOL1TUtmConditiongR_TClassManip(TClass*);
   static void *new_maplEstringcOL1TUtmConditiongR(void *p = 0);
   static void *newArray_maplEstringcOL1TUtmConditiongR(Long_t size, void *p);
   static void delete_maplEstringcOL1TUtmConditiongR(void *p);
   static void deleteArray_maplEstringcOL1TUtmConditiongR(void *p);
   static void destruct_maplEstringcOL1TUtmConditiongR(void *p);

   // Function generating the singleton type initializer
   static TGenericClassInfo *GenerateInitInstanceLocal(const map<string,L1TUtmCondition>*)
   {
      map<string,L1TUtmCondition> *ptr = 0;
      static ::TVirtualIsAProxy* isa_proxy = new ::TIsAProxy(typeid(map<string,L1TUtmCondition>));
      static ::ROOT::TGenericClassInfo 
         instance("map<string,L1TUtmCondition>", -2, "map", 96,
                  typeid(map<string,L1TUtmCondition>), ::ROOT::Internal::DefineBehavior(ptr, ptr),
                  &maplEstringcOL1TUtmConditiongR_Dictionary, isa_proxy, 4,
                  sizeof(map<string,L1TUtmCondition>) );
      instance.SetNew(&new_maplEstringcOL1TUtmConditiongR);
      instance.SetNewArray(&newArray_maplEstringcOL1TUtmConditiongR);
      instance.SetDelete(&delete_maplEstringcOL1TUtmConditiongR);
      instance.SetDeleteArray(&deleteArray_maplEstringcOL1TUtmConditiongR);
      instance.SetDestructor(&destruct_maplEstringcOL1TUtmConditiongR);
      instance.AdoptCollectionProxyInfo(TCollectionProxyInfo::Generate(TCollectionProxyInfo::MapInsert< map<string,L1TUtmCondition> >()));
      return &instance;
   }
   // Static variable to force the class initialization
   static ::ROOT::TGenericClassInfo *_R__UNIQUE_(Init) = GenerateInitInstanceLocal((const map<string,L1TUtmCondition>*)0x0); R__UseDummy(_R__UNIQUE_(Init));

   // Dictionary for non-ClassDef classes
   static TClass *maplEstringcOL1TUtmConditiongR_Dictionary() {
      TClass* theClass =::ROOT::GenerateInitInstanceLocal((const map<string,L1TUtmCondition>*)0x0)->GetClass();
      maplEstringcOL1TUtmConditiongR_TClassManip(theClass);
   return theClass;
   }

   static void maplEstringcOL1TUtmConditiongR_TClassManip(TClass* ){
   }

} // end of namespace ROOT

namespace ROOT {
   // Wrappers around operator new
   static void *new_maplEstringcOL1TUtmConditiongR(void *p) {
      return  p ? ::new((::ROOT::Internal::TOperatorNewHelper*)p) map<string,L1TUtmCondition> : new map<string,L1TUtmCondition>;
   }
   static void *newArray_maplEstringcOL1TUtmConditiongR(Long_t nElements, void *p) {
      return p ? ::new((::ROOT::Internal::TOperatorNewHelper*)p) map<string,L1TUtmCondition>[nElements] : new map<string,L1TUtmCondition>[nElements];
   }
   // Wrapper around operator delete
   static void delete_maplEstringcOL1TUtmConditiongR(void *p) {
      delete ((map<string,L1TUtmCondition>*)p);
   }
   static void deleteArray_maplEstringcOL1TUtmConditiongR(void *p) {
      delete [] ((map<string,L1TUtmCondition>*)p);
   }
   static void destruct_maplEstringcOL1TUtmConditiongR(void *p) {
      typedef map<string,L1TUtmCondition> current_t;
      ((current_t*)p)->~current_t();
   }
} // end of namespace ROOT for class map<string,L1TUtmCondition>

namespace ROOT {
   static TClass *maplEstringcOL1TUtmBingR_Dictionary();
   static void maplEstringcOL1TUtmBingR_TClassManip(TClass*);
   static void *new_maplEstringcOL1TUtmBingR(void *p = 0);
   static void *newArray_maplEstringcOL1TUtmBingR(Long_t size, void *p);
   static void delete_maplEstringcOL1TUtmBingR(void *p);
   static void deleteArray_maplEstringcOL1TUtmBingR(void *p);
   static void destruct_maplEstringcOL1TUtmBingR(void *p);

   // Function generating the singleton type initializer
   static TGenericClassInfo *GenerateInitInstanceLocal(const map<string,L1TUtmBin>*)
   {
      map<string,L1TUtmBin> *ptr = 0;
      static ::TVirtualIsAProxy* isa_proxy = new ::TIsAProxy(typeid(map<string,L1TUtmBin>));
      static ::ROOT::TGenericClassInfo 
         instance("map<string,L1TUtmBin>", -2, "map", 96,
                  typeid(map<string,L1TUtmBin>), ::ROOT::Internal::DefineBehavior(ptr, ptr),
                  &maplEstringcOL1TUtmBingR_Dictionary, isa_proxy, 4,
                  sizeof(map<string,L1TUtmBin>) );
      instance.SetNew(&new_maplEstringcOL1TUtmBingR);
      instance.SetNewArray(&newArray_maplEstringcOL1TUtmBingR);
      instance.SetDelete(&delete_maplEstringcOL1TUtmBingR);
      instance.SetDeleteArray(&deleteArray_maplEstringcOL1TUtmBingR);
      instance.SetDestructor(&destruct_maplEstringcOL1TUtmBingR);
      instance.AdoptCollectionProxyInfo(TCollectionProxyInfo::Generate(TCollectionProxyInfo::MapInsert< map<string,L1TUtmBin> >()));
      return &instance;
   }
   // Static variable to force the class initialization
   static ::ROOT::TGenericClassInfo *_R__UNIQUE_(Init) = GenerateInitInstanceLocal((const map<string,L1TUtmBin>*)0x0); R__UseDummy(_R__UNIQUE_(Init));

   // Dictionary for non-ClassDef classes
   static TClass *maplEstringcOL1TUtmBingR_Dictionary() {
      TClass* theClass =::ROOT::GenerateInitInstanceLocal((const map<string,L1TUtmBin>*)0x0)->GetClass();
      maplEstringcOL1TUtmBingR_TClassManip(theClass);
   return theClass;
   }

   static void maplEstringcOL1TUtmBingR_TClassManip(TClass* ){
   }

} // end of namespace ROOT

namespace ROOT {
   // Wrappers around operator new
   static void *new_maplEstringcOL1TUtmBingR(void *p) {
      return  p ? ::new((::ROOT::Internal::TOperatorNewHelper*)p) map<string,L1TUtmBin> : new map<string,L1TUtmBin>;
   }
   static void *newArray_maplEstringcOL1TUtmBingR(Long_t nElements, void *p) {
      return p ? ::new((::ROOT::Internal::TOperatorNewHelper*)p) map<string,L1TUtmBin>[nElements] : new map<string,L1TUtmBin>[nElements];
   }
   // Wrapper around operator delete
   static void delete_maplEstringcOL1TUtmBingR(void *p) {
      delete ((map<string,L1TUtmBin>*)p);
   }
   static void deleteArray_maplEstringcOL1TUtmBingR(void *p) {
      delete [] ((map<string,L1TUtmBin>*)p);
   }
   static void destruct_maplEstringcOL1TUtmBingR(void *p) {
      typedef map<string,L1TUtmBin> current_t;
      ((current_t*)p)->~current_t();
   }
} // end of namespace ROOT for class map<string,L1TUtmBin>

namespace ROOT {
   static TClass *maplEstringcOL1TUtmAlgorithmgR_Dictionary();
   static void maplEstringcOL1TUtmAlgorithmgR_TClassManip(TClass*);
   static void *new_maplEstringcOL1TUtmAlgorithmgR(void *p = 0);
   static void *newArray_maplEstringcOL1TUtmAlgorithmgR(Long_t size, void *p);
   static void delete_maplEstringcOL1TUtmAlgorithmgR(void *p);
   static void deleteArray_maplEstringcOL1TUtmAlgorithmgR(void *p);
   static void destruct_maplEstringcOL1TUtmAlgorithmgR(void *p);

   // Function generating the singleton type initializer
   static TGenericClassInfo *GenerateInitInstanceLocal(const map<string,L1TUtmAlgorithm>*)
   {
      map<string,L1TUtmAlgorithm> *ptr = 0;
      static ::TVirtualIsAProxy* isa_proxy = new ::TIsAProxy(typeid(map<string,L1TUtmAlgorithm>));
      static ::ROOT::TGenericClassInfo 
         instance("map<string,L1TUtmAlgorithm>", -2, "map", 96,
                  typeid(map<string,L1TUtmAlgorithm>), ::ROOT::Internal::DefineBehavior(ptr, ptr),
                  &maplEstringcOL1TUtmAlgorithmgR_Dictionary, isa_proxy, 4,
                  sizeof(map<string,L1TUtmAlgorithm>) );
      instance.SetNew(&new_maplEstringcOL1TUtmAlgorithmgR);
      instance.SetNewArray(&newArray_maplEstringcOL1TUtmAlgorithmgR);
      instance.SetDelete(&delete_maplEstringcOL1TUtmAlgorithmgR);
      instance.SetDeleteArray(&deleteArray_maplEstringcOL1TUtmAlgorithmgR);
      instance.SetDestructor(&destruct_maplEstringcOL1TUtmAlgorithmgR);
      instance.AdoptCollectionProxyInfo(TCollectionProxyInfo::Generate(TCollectionProxyInfo::MapInsert< map<string,L1TUtmAlgorithm> >()));
      return &instance;
   }
   // Static variable to force the class initialization
   static ::ROOT::TGenericClassInfo *_R__UNIQUE_(Init) = GenerateInitInstanceLocal((const map<string,L1TUtmAlgorithm>*)0x0); R__UseDummy(_R__UNIQUE_(Init));

   // Dictionary for non-ClassDef classes
   static TClass *maplEstringcOL1TUtmAlgorithmgR_Dictionary() {
      TClass* theClass =::ROOT::GenerateInitInstanceLocal((const map<string,L1TUtmAlgorithm>*)0x0)->GetClass();
      maplEstringcOL1TUtmAlgorithmgR_TClassManip(theClass);
   return theClass;
   }

   static void maplEstringcOL1TUtmAlgorithmgR_TClassManip(TClass* ){
   }

} // end of namespace ROOT

namespace ROOT {
   // Wrappers around operator new
   static void *new_maplEstringcOL1TUtmAlgorithmgR(void *p) {
      return  p ? ::new((::ROOT::Internal::TOperatorNewHelper*)p) map<string,L1TUtmAlgorithm> : new map<string,L1TUtmAlgorithm>;
   }
   static void *newArray_maplEstringcOL1TUtmAlgorithmgR(Long_t nElements, void *p) {
      return p ? ::new((::ROOT::Internal::TOperatorNewHelper*)p) map<string,L1TUtmAlgorithm>[nElements] : new map<string,L1TUtmAlgorithm>[nElements];
   }
   // Wrapper around operator delete
   static void delete_maplEstringcOL1TUtmAlgorithmgR(void *p) {
      delete ((map<string,L1TUtmAlgorithm>*)p);
   }
   static void deleteArray_maplEstringcOL1TUtmAlgorithmgR(void *p) {
      delete [] ((map<string,L1TUtmAlgorithm>*)p);
   }
   static void destruct_maplEstringcOL1TUtmAlgorithmgR(void *p) {
      typedef map<string,L1TUtmAlgorithm> current_t;
      ((current_t*)p)->~current_t();
   }
} // end of namespace ROOT for class map<string,L1TUtmAlgorithm>

namespace ROOT {
   static TClass *maplEstringcOL1GtAlgorithmgR_Dictionary();
   static void maplEstringcOL1GtAlgorithmgR_TClassManip(TClass*);
   static void *new_maplEstringcOL1GtAlgorithmgR(void *p = 0);
   static void *newArray_maplEstringcOL1GtAlgorithmgR(Long_t size, void *p);
   static void delete_maplEstringcOL1GtAlgorithmgR(void *p);
   static void deleteArray_maplEstringcOL1GtAlgorithmgR(void *p);
   static void destruct_maplEstringcOL1GtAlgorithmgR(void *p);

   // Function generating the singleton type initializer
   static TGenericClassInfo *GenerateInitInstanceLocal(const map<string,L1GtAlgorithm>*)
   {
      map<string,L1GtAlgorithm> *ptr = 0;
      static ::TVirtualIsAProxy* isa_proxy = new ::TIsAProxy(typeid(map<string,L1GtAlgorithm>));
      static ::ROOT::TGenericClassInfo 
         instance("map<string,L1GtAlgorithm>", -2, "map", 96,
                  typeid(map<string,L1GtAlgorithm>), ::ROOT::Internal::DefineBehavior(ptr, ptr),
                  &maplEstringcOL1GtAlgorithmgR_Dictionary, isa_proxy, 4,
                  sizeof(map<string,L1GtAlgorithm>) );
      instance.SetNew(&new_maplEstringcOL1GtAlgorithmgR);
      instance.SetNewArray(&newArray_maplEstringcOL1GtAlgorithmgR);
      instance.SetDelete(&delete_maplEstringcOL1GtAlgorithmgR);
      instance.SetDeleteArray(&deleteArray_maplEstringcOL1GtAlgorithmgR);
      instance.SetDestructor(&destruct_maplEstringcOL1GtAlgorithmgR);
      instance.AdoptCollectionProxyInfo(TCollectionProxyInfo::Generate(TCollectionProxyInfo::MapInsert< map<string,L1GtAlgorithm> >()));
      return &instance;
   }
   // Static variable to force the class initialization
   static ::ROOT::TGenericClassInfo *_R__UNIQUE_(Init) = GenerateInitInstanceLocal((const map<string,L1GtAlgorithm>*)0x0); R__UseDummy(_R__UNIQUE_(Init));

   // Dictionary for non-ClassDef classes
   static TClass *maplEstringcOL1GtAlgorithmgR_Dictionary() {
      TClass* theClass =::ROOT::GenerateInitInstanceLocal((const map<string,L1GtAlgorithm>*)0x0)->GetClass();
      maplEstringcOL1GtAlgorithmgR_TClassManip(theClass);
   return theClass;
   }

   static void maplEstringcOL1GtAlgorithmgR_TClassManip(TClass* ){
   }

} // end of namespace ROOT

namespace ROOT {
   // Wrappers around operator new
   static void *new_maplEstringcOL1GtAlgorithmgR(void *p) {
      return  p ? ::new((::ROOT::Internal::TOperatorNewHelper*)p) map<string,L1GtAlgorithm> : new map<string,L1GtAlgorithm>;
   }
   static void *newArray_maplEstringcOL1GtAlgorithmgR(Long_t nElements, void *p) {
      return p ? ::new((::ROOT::Internal::TOperatorNewHelper*)p) map<string,L1GtAlgorithm>[nElements] : new map<string,L1GtAlgorithm>[nElements];
   }
   // Wrapper around operator delete
   static void delete_maplEstringcOL1GtAlgorithmgR(void *p) {
      delete ((map<string,L1GtAlgorithm>*)p);
   }
   static void deleteArray_maplEstringcOL1GtAlgorithmgR(void *p) {
      delete [] ((map<string,L1GtAlgorithm>*)p);
   }
   static void destruct_maplEstringcOL1GtAlgorithmgR(void *p) {
      typedef map<string,L1GtAlgorithm> current_t;
      ((current_t*)p)->~current_t();
   }
} // end of namespace ROOT for class map<string,L1GtAlgorithm>

namespace ROOT {
   static TClass *maplEshortcOshortgR_Dictionary();
   static void maplEshortcOshortgR_TClassManip(TClass*);
   static void *new_maplEshortcOshortgR(void *p = 0);
   static void *newArray_maplEshortcOshortgR(Long_t size, void *p);
   static void delete_maplEshortcOshortgR(void *p);
   static void deleteArray_maplEshortcOshortgR(void *p);
   static void destruct_maplEshortcOshortgR(void *p);

   // Function generating the singleton type initializer
   static TGenericClassInfo *GenerateInitInstanceLocal(const map<short,short>*)
   {
      map<short,short> *ptr = 0;
      static ::TVirtualIsAProxy* isa_proxy = new ::TIsAProxy(typeid(map<short,short>));
      static ::ROOT::TGenericClassInfo 
         instance("map<short,short>", -2, "map", 96,
                  typeid(map<short,short>), ::ROOT::Internal::DefineBehavior(ptr, ptr),
                  &maplEshortcOshortgR_Dictionary, isa_proxy, 4,
                  sizeof(map<short,short>) );
      instance.SetNew(&new_maplEshortcOshortgR);
      instance.SetNewArray(&newArray_maplEshortcOshortgR);
      instance.SetDelete(&delete_maplEshortcOshortgR);
      instance.SetDeleteArray(&deleteArray_maplEshortcOshortgR);
      instance.SetDestructor(&destruct_maplEshortcOshortgR);
      instance.AdoptCollectionProxyInfo(TCollectionProxyInfo::Generate(TCollectionProxyInfo::MapInsert< map<short,short> >()));
      return &instance;
   }
   // Static variable to force the class initialization
   static ::ROOT::TGenericClassInfo *_R__UNIQUE_(Init) = GenerateInitInstanceLocal((const map<short,short>*)0x0); R__UseDummy(_R__UNIQUE_(Init));

   // Dictionary for non-ClassDef classes
   static TClass *maplEshortcOshortgR_Dictionary() {
      TClass* theClass =::ROOT::GenerateInitInstanceLocal((const map<short,short>*)0x0)->GetClass();
      maplEshortcOshortgR_TClassManip(theClass);
   return theClass;
   }

   static void maplEshortcOshortgR_TClassManip(TClass* ){
   }

} // end of namespace ROOT

namespace ROOT {
   // Wrappers around operator new
   static void *new_maplEshortcOshortgR(void *p) {
      return  p ? ::new((::ROOT::Internal::TOperatorNewHelper*)p) map<short,short> : new map<short,short>;
   }
   static void *newArray_maplEshortcOshortgR(Long_t nElements, void *p) {
      return p ? ::new((::ROOT::Internal::TOperatorNewHelper*)p) map<short,short>[nElements] : new map<short,short>[nElements];
   }
   // Wrapper around operator delete
   static void delete_maplEshortcOshortgR(void *p) {
      delete ((map<short,short>*)p);
   }
   static void deleteArray_maplEshortcOshortgR(void *p) {
      delete [] ((map<short,short>*)p);
   }
   static void destruct_maplEshortcOshortgR(void *p) {
      typedef map<short,short> current_t;
      ((current_t*)p)->~current_t();
   }
} // end of namespace ROOT for class map<short,short>

namespace ROOT {
   static TClass *maplEshortcOL1MuDTEtaPatterngR_Dictionary();
   static void maplEshortcOL1MuDTEtaPatterngR_TClassManip(TClass*);
   static void *new_maplEshortcOL1MuDTEtaPatterngR(void *p = 0);
   static void *newArray_maplEshortcOL1MuDTEtaPatterngR(Long_t size, void *p);
   static void delete_maplEshortcOL1MuDTEtaPatterngR(void *p);
   static void deleteArray_maplEshortcOL1MuDTEtaPatterngR(void *p);
   static void destruct_maplEshortcOL1MuDTEtaPatterngR(void *p);

   // Function generating the singleton type initializer
   static TGenericClassInfo *GenerateInitInstanceLocal(const map<short,L1MuDTEtaPattern>*)
   {
      map<short,L1MuDTEtaPattern> *ptr = 0;
      static ::TVirtualIsAProxy* isa_proxy = new ::TIsAProxy(typeid(map<short,L1MuDTEtaPattern>));
      static ::ROOT::TGenericClassInfo 
         instance("map<short,L1MuDTEtaPattern>", -2, "map", 96,
                  typeid(map<short,L1MuDTEtaPattern>), ::ROOT::Internal::DefineBehavior(ptr, ptr),
                  &maplEshortcOL1MuDTEtaPatterngR_Dictionary, isa_proxy, 4,
                  sizeof(map<short,L1MuDTEtaPattern>) );
      instance.SetNew(&new_maplEshortcOL1MuDTEtaPatterngR);
      instance.SetNewArray(&newArray_maplEshortcOL1MuDTEtaPatterngR);
      instance.SetDelete(&delete_maplEshortcOL1MuDTEtaPatterngR);
      instance.SetDeleteArray(&deleteArray_maplEshortcOL1MuDTEtaPatterngR);
      instance.SetDestructor(&destruct_maplEshortcOL1MuDTEtaPatterngR);
      instance.AdoptCollectionProxyInfo(TCollectionProxyInfo::Generate(TCollectionProxyInfo::MapInsert< map<short,L1MuDTEtaPattern> >()));
      return &instance;
   }
   // Static variable to force the class initialization
   static ::ROOT::TGenericClassInfo *_R__UNIQUE_(Init) = GenerateInitInstanceLocal((const map<short,L1MuDTEtaPattern>*)0x0); R__UseDummy(_R__UNIQUE_(Init));

   // Dictionary for non-ClassDef classes
   static TClass *maplEshortcOL1MuDTEtaPatterngR_Dictionary() {
      TClass* theClass =::ROOT::GenerateInitInstanceLocal((const map<short,L1MuDTEtaPattern>*)0x0)->GetClass();
      maplEshortcOL1MuDTEtaPatterngR_TClassManip(theClass);
   return theClass;
   }

   static void maplEshortcOL1MuDTEtaPatterngR_TClassManip(TClass* ){
   }

} // end of namespace ROOT

namespace ROOT {
   // Wrappers around operator new
   static void *new_maplEshortcOL1MuDTEtaPatterngR(void *p) {
      return  p ? ::new((::ROOT::Internal::TOperatorNewHelper*)p) map<short,L1MuDTEtaPattern> : new map<short,L1MuDTEtaPattern>;
   }
   static void *newArray_maplEshortcOL1MuDTEtaPatterngR(Long_t nElements, void *p) {
      return p ? ::new((::ROOT::Internal::TOperatorNewHelper*)p) map<short,L1MuDTEtaPattern>[nElements] : new map<short,L1MuDTEtaPattern>[nElements];
   }
   // Wrapper around operator delete
   static void delete_maplEshortcOL1MuDTEtaPatterngR(void *p) {
      delete ((map<short,L1MuDTEtaPattern>*)p);
   }
   static void deleteArray_maplEshortcOL1MuDTEtaPatterngR(void *p) {
      delete [] ((map<short,L1MuDTEtaPattern>*)p);
   }
   static void destruct_maplEshortcOL1MuDTEtaPatterngR(void *p) {
      typedef map<short,L1MuDTEtaPattern> current_t;
      ((current_t*)p)->~current_t();
   }
} // end of namespace ROOT for class map<short,L1MuDTEtaPattern>

namespace ROOT {
   static TClass *maplEintcOvectorlEL1GtObjectgRsPgR_Dictionary();
   static void maplEintcOvectorlEL1GtObjectgRsPgR_TClassManip(TClass*);
   static void *new_maplEintcOvectorlEL1GtObjectgRsPgR(void *p = 0);
   static void *newArray_maplEintcOvectorlEL1GtObjectgRsPgR(Long_t size, void *p);
   static void delete_maplEintcOvectorlEL1GtObjectgRsPgR(void *p);
   static void deleteArray_maplEintcOvectorlEL1GtObjectgRsPgR(void *p);
   static void destruct_maplEintcOvectorlEL1GtObjectgRsPgR(void *p);

   // Function generating the singleton type initializer
   static TGenericClassInfo *GenerateInitInstanceLocal(const map<int,vector<L1GtObject> >*)
   {
      map<int,vector<L1GtObject> > *ptr = 0;
      static ::TVirtualIsAProxy* isa_proxy = new ::TIsAProxy(typeid(map<int,vector<L1GtObject> >));
      static ::ROOT::TGenericClassInfo 
         instance("map<int,vector<L1GtObject> >", -2, "map", 96,
                  typeid(map<int,vector<L1GtObject> >), ::ROOT::Internal::DefineBehavior(ptr, ptr),
                  &maplEintcOvectorlEL1GtObjectgRsPgR_Dictionary, isa_proxy, 4,
                  sizeof(map<int,vector<L1GtObject> >) );
      instance.SetNew(&new_maplEintcOvectorlEL1GtObjectgRsPgR);
      instance.SetNewArray(&newArray_maplEintcOvectorlEL1GtObjectgRsPgR);
      instance.SetDelete(&delete_maplEintcOvectorlEL1GtObjectgRsPgR);
      instance.SetDeleteArray(&deleteArray_maplEintcOvectorlEL1GtObjectgRsPgR);
      instance.SetDestructor(&destruct_maplEintcOvectorlEL1GtObjectgRsPgR);
      instance.AdoptCollectionProxyInfo(TCollectionProxyInfo::Generate(TCollectionProxyInfo::MapInsert< map<int,vector<L1GtObject> > >()));
      return &instance;
   }
   // Static variable to force the class initialization
   static ::ROOT::TGenericClassInfo *_R__UNIQUE_(Init) = GenerateInitInstanceLocal((const map<int,vector<L1GtObject> >*)0x0); R__UseDummy(_R__UNIQUE_(Init));

   // Dictionary for non-ClassDef classes
   static TClass *maplEintcOvectorlEL1GtObjectgRsPgR_Dictionary() {
      TClass* theClass =::ROOT::GenerateInitInstanceLocal((const map<int,vector<L1GtObject> >*)0x0)->GetClass();
      maplEintcOvectorlEL1GtObjectgRsPgR_TClassManip(theClass);
   return theClass;
   }

   static void maplEintcOvectorlEL1GtObjectgRsPgR_TClassManip(TClass* ){
   }

} // end of namespace ROOT

namespace ROOT {
   // Wrappers around operator new
   static void *new_maplEintcOvectorlEL1GtObjectgRsPgR(void *p) {
      return  p ? ::new((::ROOT::Internal::TOperatorNewHelper*)p) map<int,vector<L1GtObject> > : new map<int,vector<L1GtObject> >;
   }
   static void *newArray_maplEintcOvectorlEL1GtObjectgRsPgR(Long_t nElements, void *p) {
      return p ? ::new((::ROOT::Internal::TOperatorNewHelper*)p) map<int,vector<L1GtObject> >[nElements] : new map<int,vector<L1GtObject> >[nElements];
   }
   // Wrapper around operator delete
   static void delete_maplEintcOvectorlEL1GtObjectgRsPgR(void *p) {
      delete ((map<int,vector<L1GtObject> >*)p);
   }
   static void deleteArray_maplEintcOvectorlEL1GtObjectgRsPgR(void *p) {
      delete [] ((map<int,vector<L1GtObject> >*)p);
   }
   static void destruct_maplEintcOvectorlEL1GtObjectgRsPgR(void *p) {
      typedef map<int,vector<L1GtObject> > current_t;
      ((current_t*)p)->~current_t();
   }
} // end of namespace ROOT for class map<int,vector<L1GtObject> >

namespace {
  void TriggerDictionaryInitialization_CondFormatsL1TObjects_xr_Impl() {
    static const char* headers[] = {
0    };
    static const char* includePaths[] = {
"/disk1/scheuch/grid/FullDestroyAnalysis2016/Wheel0/Working/CMSSW_8_0_2/src/CondFormats/L1TObjects/src",
"/disk1/scheuch/grid/FullDestroyAnalysis2016/Wheel0/Working/CMSSW_8_0_2/src",
"/disk1/scheuch/grid/FullDestroyAnalysis2016/Wheel0/Working/CMSSW_8_0_2/poison",
"/cvmfs/cms.cern.ch/slc6_amd64_gcc530/cms/cmssw/CMSSW_8_0_2/src",
"/cvmfs/cms.cern.ch/slc6_amd64_gcc530/lcg/root/6.06.00-ikhhed2/include",
"/cvmfs/cms.cern.ch/slc6_amd64_gcc530/external/pcre/8.37/include",
"/cvmfs/cms.cern.ch/slc6_amd64_gcc530/external/boost/1.57.0-ikhhed/include",
"/cvmfs/cms.cern.ch/slc6_amd64_gcc530/external/bz2lib/1.0.6/include",
"/cvmfs/cms.cern.ch/slc6_amd64_gcc530/external/libuuid/2.22.2/include",
"/cvmfs/cms.cern.ch/slc6_amd64_gcc530/external/tbb/44_20151115oss/include",
"/cvmfs/cms.cern.ch/slc6_amd64_gcc530/external/zlib/1.2.8/include",
"/cvmfs/cms.cern.ch/slc6_amd64_gcc530/lcg/root/6.06.00-ikhhed2/include",
"/disk1/scheuch/grid/FullDestroyAnalysis2016/Wheel0/Working/CMSSW_8_0_2/",
0
    };
    static const char* fwdDeclCode = R"DICTFWDDCLS(
#line 1 "CondFormatsL1TObjects_xr dictionary forward declarations' payload"
#pragma clang diagnostic ignored "-Wkeyword-compat"
#pragma clang diagnostic ignored "-Wignored-attributes"
#pragma clang diagnostic ignored "-Wreturn-type-c-linkage"
extern int __Cling_Autoloading_Map;
class __attribute__((annotate("$clingAutoload$CondFormats/L1TObjects/interface/L1TMuonOverlapParams.h")))  L1TMuonOverlapParams;
namespace l1t{class __attribute__((annotate("$clingAutoload$CondFormats/L1TObjects/interface/LUT.h")))  LUT;}
namespace l1t{class __attribute__((annotate("$clingAutoload$CondFormats/L1TObjects/interface/CaloParams.h")))  CaloParams;}
namespace l1t{class __attribute__((annotate("$clingAutoload$CondFormats/L1TObjects/interface/CaloConfig.h")))  CaloConfig;}
class __attribute__((annotate("$clingAutoload$CondFormats/L1TObjects/interface/L1TMuonGlobalParams.h")))  L1TMuonGlobalParams;
class __attribute__((annotate("$clingAutoload$CondFormats/L1TObjects/interface/L1TMuonBarrelParams.h")))  L1TMuonBarrelParams;
namespace std{template <typename _Tp> struct __attribute__((annotate("$clingAutoload$string")))  less;
}
namespace std{template <class _T1, class _T2> struct __attribute__((annotate("$clingAutoload$string")))  pair;
}
namespace std{template <typename _Tp> class __attribute__((annotate("$clingAutoload$string")))  allocator;
}
class __attribute__((annotate("$clingAutoload$CondFormats/L1TObjects/interface/L1MuScale.h")))  L1MuScale;
class __attribute__((annotate("$clingAutoload$CondFormats/L1TObjects/interface/L1MuScale.h")))  L1MuBinnedScale;
class __attribute__((annotate("$clingAutoload$CondFormats/L1TObjects/interface/L1MuScale.h")))  L1MuSymmetricBinnedScale;
class __attribute__((annotate("$clingAutoload$CondFormats/L1TObjects/interface/L1MuScale.h")))  L1MuPacking;
class __attribute__((annotate("$clingAutoload$CondFormats/L1TObjects/interface/L1MuScale.h")))  L1MuPseudoSignedPacking;
class __attribute__((annotate("$clingAutoload$CondFormats/L1TObjects/interface/L1MuTriggerScales.h")))  L1MuTriggerScales;
class __attribute__((annotate("$clingAutoload$CondFormats/L1TObjects/interface/L1MuTriggerPtScale.h")))  L1MuTriggerPtScale;
class __attribute__((annotate(R"ATTRDUMP(class_version@@@L1MuGMTParameters_V01)ATTRDUMP"))) __attribute__((annotate("$clingAutoload$CondFormats/L1TObjects/interface/L1MuGMTParameters.h")))  L1MuGMTParameters;
class __attribute__((annotate("$clingAutoload$CondFormats/L1TObjects/interface/L1MuGMTChannelMask.h")))  L1MuGMTChannelMask;
class __attribute__((annotate("$clingAutoload$CondFormats/L1TObjects/interface/L1MuGMTScales.h")))  L1MuGMTScales;
class __attribute__((annotate("$clingAutoload$CondFormats/L1TObjects/interface/L1CaloEtScale.h")))  L1CaloEtScale;
class __attribute__((annotate("$clingAutoload$CondFormats/L1TObjects/interface/L1GctChannelMask.h")))  L1GctChannelMask;
class __attribute__((annotate("$clingAutoload$CondFormats/L1TObjects/interface/L1GctJetFinderParams.h")))  L1GctJetFinderParams;
class __attribute__((annotate("$clingAutoload$CondFormats/L1TObjects/interface/L1MuDTExtLut.h")))  L1MuDTExtLut;
class __attribute__((annotate("$clingAutoload$CondFormats/L1TObjects/interface/L1MuDTPhiLut.h")))  L1MuDTPhiLut;
class __attribute__((annotate("$clingAutoload$CondFormats/L1TObjects/interface/L1MuDTPtaLut.h")))  L1MuDTPtaLut;
class __attribute__((annotate("$clingAutoload$CondFormats/L1TObjects/interface/L1MuDTEtaPatternLut.h")))  L1MuDTEtaPattern;
class __attribute__((annotate("$clingAutoload$CondFormats/L1TObjects/interface/L1MuDTEtaPatternLut.h")))  L1MuDTEtaPatternLut;
class __attribute__((annotate("$clingAutoload$CondFormats/L1TObjects/interface/L1MuDTQualPatternLut.h")))  L1MuDTQualPatternLut;
class __attribute__((annotate("$clingAutoload$CondFormats/L1TObjects/interface/L1MuDTTFParameters.h")))  L1MuDTTFParameters;
class __attribute__((annotate("$clingAutoload$CondFormats/L1TObjects/interface/L1MuDTTFMasks.h")))  L1MuDTTFMasks;
class __attribute__((annotate("$clingAutoload$CondFormats/L1TObjects/interface/L1MuCSCTFConfiguration.h")))  L1MuCSCTFConfiguration;
class __attribute__((annotate("$clingAutoload$CondFormats/L1TObjects/interface/L1MuCSCTFAlignment.h")))  L1MuCSCTFAlignment;
class __attribute__((annotate("$clingAutoload$CondFormats/L1TObjects/interface/L1MuCSCPtLut.h")))  L1MuCSCPtLut;
class __attribute__((annotate("$clingAutoload$CondFormats/L1TObjects/interface/L1RPCConfig.h")))  L1RPCConfig;
class __attribute__((annotate("$clingAutoload$CondFormats/L1TObjects/interface/L1RPCConfig.h")))  RPCPattern;
class __attribute__((annotate("$clingAutoload$CondFormats/L1TObjects/interface/L1RPCConeDefinition.h")))  L1RPCConeDefinition;
class __attribute__((annotate("$clingAutoload$CondFormats/L1TObjects/interface/L1RPCBxOrConfig.h")))  L1RPCBxOrConfig;
class __attribute__((annotate("$clingAutoload$CondFormats/L1TObjects/interface/L1RPCHsbConfig.h")))  L1RPCHsbConfig;
class __attribute__((annotate("$clingAutoload$CondFormats/L1TObjects/interface/L1TriggerKey.h")))  L1TriggerKey;
class __attribute__((annotate("$clingAutoload$CondFormats/L1TObjects/interface/L1TriggerKeyList.h")))  L1TriggerKeyList;
class __attribute__((annotate("$clingAutoload$CondFormats/L1TObjects/interface/L1RCTParameters.h")))  L1RCTParameters;
struct __attribute__((annotate("$clingAutoload$CondFormats/L1TObjects/interface/L1RCTChannelMask.h")))  L1RCTChannelMask;
struct __attribute__((annotate("$clingAutoload$CondFormats/L1TObjects/interface/L1RCTNoisyChannelMask.h")))  L1RCTNoisyChannelMask;
class __attribute__((annotate("$clingAutoload$CondFormats/L1TObjects/interface/L1CaloEcalScale.h")))  L1CaloEcalScale;
class __attribute__((annotate("$clingAutoload$CondFormats/L1TObjects/interface/L1CaloHcalScale.h")))  L1CaloHcalScale;
class __attribute__((annotate("$clingAutoload$CondFormats/L1TObjects/interface/L1GtStableParameters.h")))  L1GtStableParameters;
class __attribute__((annotate("$clingAutoload$CondFormats/L1TObjects/interface/GlobalStableParameters.h")))  GlobalStableParameters;
class __attribute__((annotate("$clingAutoload$CondFormats/L1TObjects/interface/L1GtParameters.h")))  L1GtParameters;
class __attribute__((annotate("$clingAutoload$CondFormats/L1TObjects/interface/L1GtPrescaleFactors.h")))  L1GtPrescaleFactors;
class __attribute__((annotate("$clingAutoload$CondFormats/L1TObjects/interface/L1GtTriggerMask.h")))  L1GtTriggerMask;
class __attribute__((annotate("$clingAutoload$CondFormats/L1TObjects/interface/L1GtBoard.h")))  L1GtBoard;
class __attribute__((annotate("$clingAutoload$CondFormats/L1TObjects/interface/L1GtBoardMaps.h")))  L1GtBoardMaps;
enum  __attribute__((annotate("$clingAutoload$CondFormats/L1TObjects/interface/L1GtBoard.h"))) L1GtPsbQuad : unsigned int;
class __attribute__((annotate("$clingAutoload$CondFormats/L1TObjects/interface/L1GtPsbConfig.h")))  L1GtPsbConfig;
class __attribute__((annotate("$clingAutoload$CondFormats/L1TObjects/interface/L1GtPsbSetup.h")))  L1GtPsbSetup;
enum  __attribute__((annotate("$clingAutoload$CondFormats/L1TObjects/interface/L1GtBoard.h"))) L1GtObject : unsigned int;
class __attribute__((annotate("$clingAutoload$CondFormats/L1TObjects/interface/L1GtCondition.h")))  L1GtCondition;
class __attribute__((annotate("$clingAutoload$CondFormats/L1TObjects/interface/L1GtTriggerMenu.h")))  L1GtMuonTemplate;
class __attribute__((annotate("$clingAutoload$CondFormats/L1TObjects/interface/L1GtTriggerMenu.h")))  L1GtCaloTemplate;
class __attribute__((annotate("$clingAutoload$CondFormats/L1TObjects/interface/L1GtTriggerMenu.h")))  L1GtEnergySumTemplate;
class __attribute__((annotate("$clingAutoload$CondFormats/L1TObjects/interface/L1GtTriggerMenu.h")))  L1GtJetCountsTemplate;
class __attribute__((annotate("$clingAutoload$CondFormats/L1TObjects/interface/L1GtTriggerMenu.h")))  L1GtCastorTemplate;
class __attribute__((annotate("$clingAutoload$CondFormats/L1TObjects/interface/L1GtTriggerMenu.h")))  L1GtHfBitCountsTemplate;
class __attribute__((annotate("$clingAutoload$CondFormats/L1TObjects/interface/L1GtTriggerMenu.h")))  L1GtHfRingEtSumsTemplate;
class __attribute__((annotate("$clingAutoload$CondFormats/L1TObjects/interface/L1GtTriggerMenu.h")))  L1GtBptxTemplate;
class __attribute__((annotate("$clingAutoload$CondFormats/L1TObjects/interface/L1GtTriggerMenu.h")))  L1GtExternalTemplate;
class __attribute__((annotate("$clingAutoload$CondFormats/L1TObjects/interface/L1GtTriggerMenu.h")))  L1GtCorrelationTemplate;
class __attribute__((annotate("$clingAutoload$CondFormats/L1TObjects/interface/L1GtAlgorithm.h")))  L1GtAlgorithm;
namespace std{template <class _CharT> struct __attribute__((annotate("$clingAutoload$string")))  char_traits;
}
class __attribute__((annotate(R"ATTRDUMP(class_version@@@L1GtTriggerMenu_V01)ATTRDUMP"))) __attribute__((annotate("$clingAutoload$CondFormats/L1TObjects/interface/L1GtTriggerMenu.h")))  L1GtTriggerMenu;
class __attribute__((annotate(R"ATTRDUMP(class_version@@@L1CaloGeometry_V01)ATTRDUMP"))) __attribute__((annotate("$clingAutoload$CondFormats/L1TObjects/interface/L1CaloGeometry.h")))  L1CaloGeometry;
class __attribute__((annotate("$clingAutoload$CondFormats/L1TObjects/interface/L1TUtmAlgorithm.h")))  L1TUtmAlgorithm;
class __attribute__((annotate("$clingAutoload$CondFormats/L1TObjects/interface/L1TUtmBin.h")))  L1TUtmBin;
class __attribute__((annotate("$clingAutoload$CondFormats/L1TObjects/interface/L1TUtmCondition.h")))  L1TUtmCondition;
class __attribute__((annotate("$clingAutoload$CondFormats/L1TObjects/interface/L1TUtmCondition.h")))  L1TUtmCut;
struct __attribute__((annotate("$clingAutoload$CondFormats/L1TObjects/interface/L1TUtmCondition.h")))  L1TUtmCutValue;
class __attribute__((annotate("$clingAutoload$CondFormats/L1TObjects/interface/L1TUtmCondition.h")))  L1TUtmObject;
class __attribute__((annotate("$clingAutoload$CondFormats/L1TObjects/interface/L1TUtmScale.h")))  L1TUtmScale;
class __attribute__((annotate("$clingAutoload$CondFormats/L1TObjects/interface/L1TUtmTriggerMenu.h")))  L1TUtmTriggerMenu;
)DICTFWDDCLS";
    static const char* payloadCode = R"DICTPAYLOAD(
#line 1 "CondFormatsL1TObjects_xr dictionary payload"

#ifndef G__VECTOR_HAS_CLASS_ITERATOR
  #define G__VECTOR_HAS_CLASS_ITERATOR 1
#endif
#ifndef CMS_DICT_IMPL
  #define CMS_DICT_IMPL 1
#endif
#ifndef _REENTRANT
  #define _REENTRANT 1
#endif
#ifndef GNUSOURCE
  #define GNUSOURCE 1
#endif
#ifndef __STRICT_ANSI__
  #define __STRICT_ANSI__ 1
#endif
#ifndef GNU_GCC
  #define GNU_GCC 1
#endif
#ifndef _GNU_SOURCE
  #define _GNU_SOURCE 1
#endif
#ifndef CMSSW_GIT_HASH
  #define CMSSW_GIT_HASH "CMSSW_8_0_2"
#endif
#ifndef PROJECT_NAME
  #define PROJECT_NAME "CMSSW"
#endif
#ifndef PROJECT_VERSION
  #define PROJECT_VERSION "CMSSW_8_0_2"
#endif
#ifndef BOOST_SPIRIT_THREADSAFE
  #define BOOST_SPIRIT_THREADSAFE 1
#endif
#ifndef PHOENIX_THREADSAFE
  #define PHOENIX_THREADSAFE 1
#endif
#ifndef CMSSW_REFLEX_DICT
  #define CMSSW_REFLEX_DICT 1
#endif

#define _BACKWARD_BACKWARD_WARNING_H
#include "CondFormats/L1TObjects/interface/L1MuScale.h"
#include "CondFormats/L1TObjects/interface/L1MuTriggerScales.h"
#include "CondFormats/L1TObjects/interface/L1MuTriggerPtScale.h"
#include "CondFormats/L1TObjects/interface/L1MuGMTParameters.h"
#include "CondFormats/L1TObjects/interface/L1MuGMTChannelMask.h"
#include "CondFormats/L1TObjects/interface/L1MuGMTScales.h"
#include "CondFormats/L1TObjects/interface/L1CaloEtScale.h"
#include "CondFormats/L1TObjects/interface/L1GctChannelMask.h"
#include "CondFormats/L1TObjects/interface/L1GctJetFinderParams.h"
#include "CondFormats/L1TObjects/interface/L1MuDTExtLut.h"
#include "CondFormats/L1TObjects/interface/L1MuDTPhiLut.h"
#include "CondFormats/L1TObjects/interface/L1MuDTPtaLut.h"
#include "CondFormats/L1TObjects/interface/L1MuDTEtaPatternLut.h"
#include "CondFormats/L1TObjects/interface/L1MuDTQualPatternLut.h"
#include "CondFormats/L1TObjects/interface/L1MuDTTFParameters.h"
#include "CondFormats/L1TObjects/interface/L1MuDTTFMasks.h"
#include "CondFormats/L1TObjects/interface/L1MuCSCTFConfiguration.h"
#include "CondFormats/L1TObjects/interface/L1MuCSCPtLut.h"
#include "CondFormats/L1TObjects/interface/L1MuCSCTFAlignment.h"
#include "CondFormats/L1TObjects/interface/L1RPCConfig.h"
#include "CondFormats/L1TObjects/interface/L1RPCConeDefinition.h"
#include "CondFormats/L1TObjects/interface/L1RCTParameters.h"
#include "CondFormats/L1TObjects/interface/L1RCTChannelMask.h"
#include "CondFormats/L1TObjects/interface/L1RCTNoisyChannelMask.h"
#include "CondFormats/L1TObjects/interface/L1CaloEcalScale.h"
#include "CondFormats/L1TObjects/interface/L1CaloHcalScale.h"
#include "CondFormats/L1TObjects/interface/L1TriggerKey.h"
#include "CondFormats/L1TObjects/interface/L1TriggerKeyList.h"

#include "CondFormats/L1TObjects/interface/L1GtStableParameters.h"
#include "CondFormats/L1TObjects/interface/L1GtParameters.h"
#include "CondFormats/L1TObjects/interface/L1GtPrescaleFactors.h"
#include "CondFormats/L1TObjects/interface/L1GtTriggerMask.h"
#include "CondFormats/L1TObjects/interface/L1GtBoard.h"
#include "CondFormats/L1TObjects/interface/L1GtBoardMaps.h"
#include "CondFormats/L1TObjects/interface/L1GtPsbConfig.h"
#include "CondFormats/L1TObjects/interface/L1GtPsbSetup.h"
#include "CondFormats/L1TObjects/interface/L1GtCondition.h"
#include "CondFormats/L1TObjects/interface/L1GtAlgorithm.h"
#include "CondFormats/L1TObjects/interface/L1GtTriggerMenu.h"
#include "CondFormats/L1TObjects/interface/GlobalStableParameters.h"

#include "CondFormats/L1TObjects/interface/L1CaloGeometry.h"
#include "CondFormats/L1TObjects/interface/L1RPCBxOrConfig.h"
#include "CondFormats/L1TObjects/interface/L1RPCHsbConfig.h"

#include "CondFormats/L1TObjects/interface/LUT.h"
#include "CondFormats/L1TObjects/interface/CaloParams.h"
#include "CondFormats/L1TObjects/interface/CaloConfig.h"

#include "CondFormats/L1TObjects/interface/L1TMuonOverlapParams.h"
#include "CondFormats/L1TObjects/interface/L1TMuonGlobalParams.h"
#include "CondFormats/L1TObjects/interface/L1TMuonBarrelParams.h"

#include "CondFormats/L1TObjects/interface/L1TUtmAlgorithm.h"
#include "CondFormats/L1TObjects/interface/L1TUtmBin.h"
#include "CondFormats/L1TObjects/interface/L1TUtmCondition.h"
#include "CondFormats/L1TObjects/interface/L1TUtmCut.h"
#include "CondFormats/L1TObjects/interface/L1TUtmCutValue.h"
#include "CondFormats/L1TObjects/interface/L1TUtmObject.h"
#include "CondFormats/L1TObjects/interface/L1TUtmScale.h"
#include "CondFormats/L1TObjects/interface/L1TUtmTriggerMenu.h"

namespace CondFormats_L1TObjects {
  struct dictionary {
    
    std::vector<l1t::CaloParams::Node> dummy1a;
    l1t::CaloParams dummy1b;
    l1t::LUT dummy1c;

    l1t::CaloConfig dummy2;

    std::vector<L1MuDTExtLut::LUT> dummy3 ;
    std::vector<L1GtMuonTemplate> dummy4 ;
    std::vector<L1GtCaloTemplate> dummy5 ;
    std::vector<L1GtEnergySumTemplate> dummy6 ;
    std::vector<L1GtJetCountsTemplate> dummy7 ;
    std::vector<L1GtCorrelationTemplate> dummy8 ;
    std::vector<L1GtCastorTemplate> dummy8a ;
    std::vector<L1GtHfBitCountsTemplate> dummy8b ;
    std::vector<L1GtHfRingEtSumsTemplate> dummy8c ;
    std::vector<L1GtBptxTemplate> dummy8d ;
    std::vector<L1GtExternalTemplate> dummy8e ;
    std::map< std::string, L1GtAlgorithm > dummy9 ;
    std::pair< std::string, L1GtAlgorithm > dummy9a ;
    std::pair<short,L1MuDTEtaPattern> dummy11 ;
    std::pair<int, std::vector<L1GtObject> > dummy13 ;
//    std::vector<L1RPCConeDefinition::TLPSize> dummy15;
//    std::vector<L1RPCConeDefinition::TRingToTower> dummy15a;
//    std::vector<L1RPCConeDefinition::TRingToLP> dummy15b;
    L1TMuonGlobalParams dummy16;
    std::vector<L1TMuonGlobalParams::Node> dummy16a;


    L1TMuonOverlapParams dummy17;
    std::vector< L1TMuonOverlapParams::Node> dummy17a;

    L1TMuonBarrelParams dummy18;
    std::vector<L1TMuonBarrelParams::Node> dummy18a;


    L1TUtmAlgorithm dummy19a;
    L1TUtmBin dummy19b;
    L1TUtmCondition dummy19c;
    L1TUtmCut dummy19d;
    L1TUtmCutValue dummy19e;
    L1TUtmObject dummy19f;
    L1TUtmScale dummy19g;
    L1TUtmTriggerMenu dummy19h;

  };
}

#undef  _BACKWARD_BACKWARD_WARNING_H
)DICTPAYLOAD";
    static const char* classesHeaders[]={
"GlobalStableParameters", payloadCode, "@",
"L1CaloEcalScale", payloadCode, "@",
"L1CaloEtScale", payloadCode, "@",
"L1CaloGeometry", payloadCode, "@",
"L1CaloHcalScale", payloadCode, "@",
"L1GctChannelMask", payloadCode, "@",
"L1GctJetFinderParams", payloadCode, "@",
"L1GtAlgorithm", payloadCode, "@",
"L1GtBoard", payloadCode, "@",
"L1GtBoardMaps", payloadCode, "@",
"L1GtBptxTemplate", payloadCode, "@",
"L1GtCaloTemplate", payloadCode, "@",
"L1GtCaloTemplate::CorrelationParameter", payloadCode, "@",
"L1GtCaloTemplate::ObjectParameter", payloadCode, "@",
"L1GtCastorTemplate", payloadCode, "@",
"L1GtCondition", payloadCode, "@",
"L1GtConditionCategory", payloadCode, "@",
"L1GtConditionType", payloadCode, "@",
"L1GtCorrelationTemplate", payloadCode, "@",
"L1GtCorrelationTemplate::CorrelationParameter", payloadCode, "@",
"L1GtEnergySumTemplate", payloadCode, "@",
"L1GtEnergySumTemplate::ObjectParameter", payloadCode, "@",
"L1GtExternalTemplate", payloadCode, "@",
"L1GtHfBitCountsTemplate", payloadCode, "@",
"L1GtHfBitCountsTemplate::ObjectParameter", payloadCode, "@",
"L1GtHfRingEtSumsTemplate", payloadCode, "@",
"L1GtHfRingEtSumsTemplate::ObjectParameter", payloadCode, "@",
"L1GtJetCountsTemplate", payloadCode, "@",
"L1GtJetCountsTemplate::ObjectParameter", payloadCode, "@",
"L1GtMuonTemplate", payloadCode, "@",
"L1GtMuonTemplate::CorrelationParameter", payloadCode, "@",
"L1GtMuonTemplate::ObjectParameter", payloadCode, "@",
"L1GtParameters", payloadCode, "@",
"L1GtPrescaleFactors", payloadCode, "@",
"L1GtPsbConfig", payloadCode, "@",
"L1GtPsbQuad", payloadCode, "@",
"L1GtPsbSetup", payloadCode, "@",
"L1GtStableParameters", payloadCode, "@",
"L1GtTriggerMask", payloadCode, "@",
"L1GtTriggerMenu", payloadCode, "@",
"L1MuBinnedScale", payloadCode, "@",
"L1MuCSCPtLut", payloadCode, "@",
"L1MuCSCTFAlignment", payloadCode, "@",
"L1MuCSCTFConfiguration", payloadCode, "@",
"L1MuDTEtaPattern", payloadCode, "@",
"L1MuDTEtaPatternLut", payloadCode, "@",
"L1MuDTExtLut", payloadCode, "@",
"L1MuDTExtLut::LUT", payloadCode, "@",
"L1MuDTPhiLut", payloadCode, "@",
"L1MuDTPtaLut", payloadCode, "@",
"L1MuDTQualPatternLut", payloadCode, "@",
"L1MuDTTFMasks", payloadCode, "@",
"L1MuDTTFParameters", payloadCode, "@",
"L1MuGMTChannelMask", payloadCode, "@",
"L1MuGMTParameters", payloadCode, "@",
"L1MuGMTScales", payloadCode, "@",
"L1MuPacking", payloadCode, "@",
"L1MuPseudoSignedPacking", payloadCode, "@",
"L1MuScale", payloadCode, "@",
"L1MuSymmetricBinnedScale", payloadCode, "@",
"L1MuTriggerPtScale", payloadCode, "@",
"L1MuTriggerScales", payloadCode, "@",
"L1RCTChannelMask", payloadCode, "@",
"L1RCTNoisyChannelMask", payloadCode, "@",
"L1RCTParameters", payloadCode, "@",
"L1RPCBxOrConfig", payloadCode, "@",
"L1RPCConeDefinition", payloadCode, "@",
"L1RPCConeDefinition::TLPSize", payloadCode, "@",
"L1RPCConeDefinition::TRingToLP", payloadCode, "@",
"L1RPCConeDefinition::TRingToTower", payloadCode, "@",
"L1RPCConfig", payloadCode, "@",
"L1RPCHsbConfig", payloadCode, "@",
"L1TMuonBarrelParams", payloadCode, "@",
"L1TMuonBarrelParams::LUTParams", payloadCode, "@",
"L1TMuonBarrelParams::LUTParams::extLUT", payloadCode, "@",
"L1TMuonBarrelParams::Node", payloadCode, "@",
"L1TMuonGlobalParams", payloadCode, "@",
"L1TMuonGlobalParams::Node", payloadCode, "@",
"L1TMuonOverlapParams", payloadCode, "@",
"L1TMuonOverlapParams::Node", payloadCode, "@",
"L1TUtmAlgorithm", payloadCode, "@",
"L1TUtmBin", payloadCode, "@",
"L1TUtmCondition", payloadCode, "@",
"L1TUtmCut", payloadCode, "@",
"L1TUtmCutValue", payloadCode, "@",
"L1TUtmObject", payloadCode, "@",
"L1TUtmScale", payloadCode, "@",
"L1TUtmTriggerMenu", payloadCode, "@",
"L1TriggerKey", payloadCode, "@",
"L1TriggerKeyList", payloadCode, "@",
"RPCPattern", payloadCode, "@",
"RPCPattern::RPCLogicalStrip", payloadCode, "@",
"RPCPattern::TQuality", payloadCode, "@",
"l1t::CaloConfig", payloadCode, "@",
"l1t::CaloParams", payloadCode, "@",
"l1t::CaloParams::EgParams", payloadCode, "@",
"l1t::CaloParams::JetParams", payloadCode, "@",
"l1t::CaloParams::Node", payloadCode, "@",
"l1t::CaloParams::TauParams", payloadCode, "@",
"l1t::CaloParams::TowerParams", payloadCode, "@",
"l1t::LUT", payloadCode, "@",
nullptr};

    static bool isInitialized = false;
    if (!isInitialized) {
      TROOT::RegisterModule("CondFormatsL1TObjects_xr",
        headers, includePaths, payloadCode, fwdDeclCode,
        TriggerDictionaryInitialization_CondFormatsL1TObjects_xr_Impl, {}, classesHeaders);
      isInitialized = true;
    }
  }
  static struct DictInit {
    DictInit() {
      TriggerDictionaryInitialization_CondFormatsL1TObjects_xr_Impl();
    }
  } __TheDictionaryInitializer;
}
void TriggerDictionaryInitialization_CondFormatsL1TObjects_xr() {
  TriggerDictionaryInitialization_CondFormatsL1TObjects_xr_Impl();
}
