// Do NOT change. Changes will be lost next time file is generated

#define R__DICTIONARY_FILENAME tmpdIslc6_amd64_gcc493dIsrcdIDataFormatsdIL1TMuondIsrcdIDataFormatsL1TMuondIadIDataFormatsL1TMuon_xr

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
#include "src/DataFormats/L1TMuon/src/classes.h"

// Header files passed via #pragma extra_include

namespace ROOT {
   static TClass *l1tcLcLRegionalMuonCand_Dictionary();
   static void l1tcLcLRegionalMuonCand_TClassManip(TClass*);
   static void *new_l1tcLcLRegionalMuonCand(void *p = 0);
   static void *newArray_l1tcLcLRegionalMuonCand(Long_t size, void *p);
   static void delete_l1tcLcLRegionalMuonCand(void *p);
   static void deleteArray_l1tcLcLRegionalMuonCand(void *p);
   static void destruct_l1tcLcLRegionalMuonCand(void *p);

   // Function generating the singleton type initializer
   static TGenericClassInfo *GenerateInitInstanceLocal(const ::l1t::RegionalMuonCand*)
   {
      ::l1t::RegionalMuonCand *ptr = 0;
      static ::TVirtualIsAProxy* isa_proxy = new ::TIsAProxy(typeid(::l1t::RegionalMuonCand));
      static ::ROOT::TGenericClassInfo 
         instance("l1t::RegionalMuonCand", "DataFormats/L1TMuon/interface/RegionalMuonCand.h", 8,
                  typeid(::l1t::RegionalMuonCand), ::ROOT::Internal::DefineBehavior(ptr, ptr),
                  &l1tcLcLRegionalMuonCand_Dictionary, isa_proxy, 0,
                  sizeof(::l1t::RegionalMuonCand) );
      instance.SetNew(&new_l1tcLcLRegionalMuonCand);
      instance.SetNewArray(&newArray_l1tcLcLRegionalMuonCand);
      instance.SetDelete(&delete_l1tcLcLRegionalMuonCand);
      instance.SetDeleteArray(&deleteArray_l1tcLcLRegionalMuonCand);
      instance.SetDestructor(&destruct_l1tcLcLRegionalMuonCand);
      return &instance;
   }
   TGenericClassInfo *GenerateInitInstance(const ::l1t::RegionalMuonCand*)
   {
      return GenerateInitInstanceLocal((::l1t::RegionalMuonCand*)0);
   }
   // Static variable to force the class initialization
   static ::ROOT::TGenericClassInfo *_R__UNIQUE_(Init) = GenerateInitInstanceLocal((const ::l1t::RegionalMuonCand*)0x0); R__UseDummy(_R__UNIQUE_(Init));

   // Dictionary for non-ClassDef classes
   static TClass *l1tcLcLRegionalMuonCand_Dictionary() {
      TClass* theClass =::ROOT::GenerateInitInstanceLocal((const ::l1t::RegionalMuonCand*)0x0)->GetClass();
      l1tcLcLRegionalMuonCand_TClassManip(theClass);
   return theClass;
   }

   static void l1tcLcLRegionalMuonCand_TClassManip(TClass* ){
   }

} // end of namespace ROOT

namespace ROOT {
   static TClass *BXVectorlEl1tcLcLRegionalMuonCandgR_Dictionary();
   static void BXVectorlEl1tcLcLRegionalMuonCandgR_TClassManip(TClass*);
   static void *new_BXVectorlEl1tcLcLRegionalMuonCandgR(void *p = 0);
   static void *newArray_BXVectorlEl1tcLcLRegionalMuonCandgR(Long_t size, void *p);
   static void delete_BXVectorlEl1tcLcLRegionalMuonCandgR(void *p);
   static void deleteArray_BXVectorlEl1tcLcLRegionalMuonCandgR(void *p);
   static void destruct_BXVectorlEl1tcLcLRegionalMuonCandgR(void *p);

   // Function generating the singleton type initializer
   static TGenericClassInfo *GenerateInitInstanceLocal(const ::BXVector<l1t::RegionalMuonCand>*)
   {
      ::BXVector<l1t::RegionalMuonCand> *ptr = 0;
      static ::TVirtualIsAProxy* isa_proxy = new ::TIsAProxy(typeid(::BXVector<l1t::RegionalMuonCand>));
      static ::ROOT::TGenericClassInfo 
         instance("BXVector<l1t::RegionalMuonCand>", "DataFormats/L1Trigger/interface/BXVector.h", 15,
                  typeid(::BXVector<l1t::RegionalMuonCand>), ::ROOT::Internal::DefineBehavior(ptr, ptr),
                  &BXVectorlEl1tcLcLRegionalMuonCandgR_Dictionary, isa_proxy, 0,
                  sizeof(::BXVector<l1t::RegionalMuonCand>) );
      instance.SetNew(&new_BXVectorlEl1tcLcLRegionalMuonCandgR);
      instance.SetNewArray(&newArray_BXVectorlEl1tcLcLRegionalMuonCandgR);
      instance.SetDelete(&delete_BXVectorlEl1tcLcLRegionalMuonCandgR);
      instance.SetDeleteArray(&deleteArray_BXVectorlEl1tcLcLRegionalMuonCandgR);
      instance.SetDestructor(&destruct_BXVectorlEl1tcLcLRegionalMuonCandgR);

      ::ROOT::AddClassAlternate("BXVector<l1t::RegionalMuonCand>","l1t::RegionalMuonCandBxCollection");
      return &instance;
   }
   TGenericClassInfo *GenerateInitInstance(const ::BXVector<l1t::RegionalMuonCand>*)
   {
      return GenerateInitInstanceLocal((::BXVector<l1t::RegionalMuonCand>*)0);
   }
   // Static variable to force the class initialization
   static ::ROOT::TGenericClassInfo *_R__UNIQUE_(Init) = GenerateInitInstanceLocal((const ::BXVector<l1t::RegionalMuonCand>*)0x0); R__UseDummy(_R__UNIQUE_(Init));

   // Dictionary for non-ClassDef classes
   static TClass *BXVectorlEl1tcLcLRegionalMuonCandgR_Dictionary() {
      TClass* theClass =::ROOT::GenerateInitInstanceLocal((const ::BXVector<l1t::RegionalMuonCand>*)0x0)->GetClass();
      BXVectorlEl1tcLcLRegionalMuonCandgR_TClassManip(theClass);
   return theClass;
   }

   static void BXVectorlEl1tcLcLRegionalMuonCandgR_TClassManip(TClass* ){
   }

} // end of namespace ROOT

namespace ROOT {
   static TClass *edmcLcLWrapperlEBXVectorlEl1tcLcLRegionalMuonCandgRsPgR_Dictionary();
   static void edmcLcLWrapperlEBXVectorlEl1tcLcLRegionalMuonCandgRsPgR_TClassManip(TClass*);
   static void *new_edmcLcLWrapperlEBXVectorlEl1tcLcLRegionalMuonCandgRsPgR(void *p = 0);
   static void *newArray_edmcLcLWrapperlEBXVectorlEl1tcLcLRegionalMuonCandgRsPgR(Long_t size, void *p);
   static void delete_edmcLcLWrapperlEBXVectorlEl1tcLcLRegionalMuonCandgRsPgR(void *p);
   static void deleteArray_edmcLcLWrapperlEBXVectorlEl1tcLcLRegionalMuonCandgRsPgR(void *p);
   static void destruct_edmcLcLWrapperlEBXVectorlEl1tcLcLRegionalMuonCandgRsPgR(void *p);

   // Function generating the singleton type initializer
   static TGenericClassInfo *GenerateInitInstanceLocal(const ::edm::Wrapper<BXVector<l1t::RegionalMuonCand> >*)
   {
      ::edm::Wrapper<BXVector<l1t::RegionalMuonCand> > *ptr = 0;
      static ::TVirtualIsAProxy* isa_proxy = new ::TIsAProxy(typeid(::edm::Wrapper<BXVector<l1t::RegionalMuonCand> >));
      static ::ROOT::TGenericClassInfo 
         instance("edm::Wrapper<BXVector<l1t::RegionalMuonCand> >", ::edm::Wrapper<BXVector<l1t::RegionalMuonCand> >::Class_Version(), "DataFormats/Common/interface/Wrapper.h", 25,
                  typeid(::edm::Wrapper<BXVector<l1t::RegionalMuonCand> >), ::ROOT::Internal::DefineBehavior(ptr, ptr),
                  &edmcLcLWrapperlEBXVectorlEl1tcLcLRegionalMuonCandgRsPgR_Dictionary, isa_proxy, 0,
                  sizeof(::edm::Wrapper<BXVector<l1t::RegionalMuonCand> >) );
      instance.SetNew(&new_edmcLcLWrapperlEBXVectorlEl1tcLcLRegionalMuonCandgRsPgR);
      instance.SetNewArray(&newArray_edmcLcLWrapperlEBXVectorlEl1tcLcLRegionalMuonCandgRsPgR);
      instance.SetDelete(&delete_edmcLcLWrapperlEBXVectorlEl1tcLcLRegionalMuonCandgRsPgR);
      instance.SetDeleteArray(&deleteArray_edmcLcLWrapperlEBXVectorlEl1tcLcLRegionalMuonCandgRsPgR);
      instance.SetDestructor(&destruct_edmcLcLWrapperlEBXVectorlEl1tcLcLRegionalMuonCandgRsPgR);

      ::ROOT::AddClassAlternate("edm::Wrapper<BXVector<l1t::RegionalMuonCand> >","edm::Wrapper<l1t::RegionalMuonCandBxCollection>");
      return &instance;
   }
   TGenericClassInfo *GenerateInitInstance(const ::edm::Wrapper<BXVector<l1t::RegionalMuonCand> >*)
   {
      return GenerateInitInstanceLocal((::edm::Wrapper<BXVector<l1t::RegionalMuonCand> >*)0);
   }
   // Static variable to force the class initialization
   static ::ROOT::TGenericClassInfo *_R__UNIQUE_(Init) = GenerateInitInstanceLocal((const ::edm::Wrapper<BXVector<l1t::RegionalMuonCand> >*)0x0); R__UseDummy(_R__UNIQUE_(Init));

   // Dictionary for non-ClassDef classes
   static TClass *edmcLcLWrapperlEBXVectorlEl1tcLcLRegionalMuonCandgRsPgR_Dictionary() {
      TClass* theClass =::ROOT::GenerateInitInstanceLocal((const ::edm::Wrapper<BXVector<l1t::RegionalMuonCand> >*)0x0)->GetClass();
      edmcLcLWrapperlEBXVectorlEl1tcLcLRegionalMuonCandgRsPgR_TClassManip(theClass);
   return theClass;
   }

   static void edmcLcLWrapperlEBXVectorlEl1tcLcLRegionalMuonCandgRsPgR_TClassManip(TClass* ){
   }

} // end of namespace ROOT

namespace ROOT {
   static TClass *l1tcLcLMuonCaloSum_Dictionary();
   static void l1tcLcLMuonCaloSum_TClassManip(TClass*);
   static void *new_l1tcLcLMuonCaloSum(void *p = 0);
   static void *newArray_l1tcLcLMuonCaloSum(Long_t size, void *p);
   static void delete_l1tcLcLMuonCaloSum(void *p);
   static void deleteArray_l1tcLcLMuonCaloSum(void *p);
   static void destruct_l1tcLcLMuonCaloSum(void *p);

   // Function generating the singleton type initializer
   static TGenericClassInfo *GenerateInitInstanceLocal(const ::l1t::MuonCaloSum*)
   {
      ::l1t::MuonCaloSum *ptr = 0;
      static ::TVirtualIsAProxy* isa_proxy = new ::TIsAProxy(typeid(::l1t::MuonCaloSum));
      static ::ROOT::TGenericClassInfo 
         instance("l1t::MuonCaloSum", "DataFormats/L1TMuon/interface/MuonCaloSum.h", 7,
                  typeid(::l1t::MuonCaloSum), ::ROOT::Internal::DefineBehavior(ptr, ptr),
                  &l1tcLcLMuonCaloSum_Dictionary, isa_proxy, 0,
                  sizeof(::l1t::MuonCaloSum) );
      instance.SetNew(&new_l1tcLcLMuonCaloSum);
      instance.SetNewArray(&newArray_l1tcLcLMuonCaloSum);
      instance.SetDelete(&delete_l1tcLcLMuonCaloSum);
      instance.SetDeleteArray(&deleteArray_l1tcLcLMuonCaloSum);
      instance.SetDestructor(&destruct_l1tcLcLMuonCaloSum);
      return &instance;
   }
   TGenericClassInfo *GenerateInitInstance(const ::l1t::MuonCaloSum*)
   {
      return GenerateInitInstanceLocal((::l1t::MuonCaloSum*)0);
   }
   // Static variable to force the class initialization
   static ::ROOT::TGenericClassInfo *_R__UNIQUE_(Init) = GenerateInitInstanceLocal((const ::l1t::MuonCaloSum*)0x0); R__UseDummy(_R__UNIQUE_(Init));

   // Dictionary for non-ClassDef classes
   static TClass *l1tcLcLMuonCaloSum_Dictionary() {
      TClass* theClass =::ROOT::GenerateInitInstanceLocal((const ::l1t::MuonCaloSum*)0x0)->GetClass();
      l1tcLcLMuonCaloSum_TClassManip(theClass);
   return theClass;
   }

   static void l1tcLcLMuonCaloSum_TClassManip(TClass* ){
   }

} // end of namespace ROOT

namespace ROOT {
   static TClass *BXVectorlEl1tcLcLMuonCaloSumgR_Dictionary();
   static void BXVectorlEl1tcLcLMuonCaloSumgR_TClassManip(TClass*);
   static void *new_BXVectorlEl1tcLcLMuonCaloSumgR(void *p = 0);
   static void *newArray_BXVectorlEl1tcLcLMuonCaloSumgR(Long_t size, void *p);
   static void delete_BXVectorlEl1tcLcLMuonCaloSumgR(void *p);
   static void deleteArray_BXVectorlEl1tcLcLMuonCaloSumgR(void *p);
   static void destruct_BXVectorlEl1tcLcLMuonCaloSumgR(void *p);

   // Function generating the singleton type initializer
   static TGenericClassInfo *GenerateInitInstanceLocal(const ::BXVector<l1t::MuonCaloSum>*)
   {
      ::BXVector<l1t::MuonCaloSum> *ptr = 0;
      static ::TVirtualIsAProxy* isa_proxy = new ::TIsAProxy(typeid(::BXVector<l1t::MuonCaloSum>));
      static ::ROOT::TGenericClassInfo 
         instance("BXVector<l1t::MuonCaloSum>", "DataFormats/L1Trigger/interface/BXVector.h", 15,
                  typeid(::BXVector<l1t::MuonCaloSum>), ::ROOT::Internal::DefineBehavior(ptr, ptr),
                  &BXVectorlEl1tcLcLMuonCaloSumgR_Dictionary, isa_proxy, 0,
                  sizeof(::BXVector<l1t::MuonCaloSum>) );
      instance.SetNew(&new_BXVectorlEl1tcLcLMuonCaloSumgR);
      instance.SetNewArray(&newArray_BXVectorlEl1tcLcLMuonCaloSumgR);
      instance.SetDelete(&delete_BXVectorlEl1tcLcLMuonCaloSumgR);
      instance.SetDeleteArray(&deleteArray_BXVectorlEl1tcLcLMuonCaloSumgR);
      instance.SetDestructor(&destruct_BXVectorlEl1tcLcLMuonCaloSumgR);

      ::ROOT::AddClassAlternate("BXVector<l1t::MuonCaloSum>","l1t::MuonCaloSumBxCollection");
      return &instance;
   }
   TGenericClassInfo *GenerateInitInstance(const ::BXVector<l1t::MuonCaloSum>*)
   {
      return GenerateInitInstanceLocal((::BXVector<l1t::MuonCaloSum>*)0);
   }
   // Static variable to force the class initialization
   static ::ROOT::TGenericClassInfo *_R__UNIQUE_(Init) = GenerateInitInstanceLocal((const ::BXVector<l1t::MuonCaloSum>*)0x0); R__UseDummy(_R__UNIQUE_(Init));

   // Dictionary for non-ClassDef classes
   static TClass *BXVectorlEl1tcLcLMuonCaloSumgR_Dictionary() {
      TClass* theClass =::ROOT::GenerateInitInstanceLocal((const ::BXVector<l1t::MuonCaloSum>*)0x0)->GetClass();
      BXVectorlEl1tcLcLMuonCaloSumgR_TClassManip(theClass);
   return theClass;
   }

   static void BXVectorlEl1tcLcLMuonCaloSumgR_TClassManip(TClass* ){
   }

} // end of namespace ROOT

namespace ROOT {
   static TClass *edmcLcLWrapperlEBXVectorlEl1tcLcLMuonCaloSumgRsPgR_Dictionary();
   static void edmcLcLWrapperlEBXVectorlEl1tcLcLMuonCaloSumgRsPgR_TClassManip(TClass*);
   static void *new_edmcLcLWrapperlEBXVectorlEl1tcLcLMuonCaloSumgRsPgR(void *p = 0);
   static void *newArray_edmcLcLWrapperlEBXVectorlEl1tcLcLMuonCaloSumgRsPgR(Long_t size, void *p);
   static void delete_edmcLcLWrapperlEBXVectorlEl1tcLcLMuonCaloSumgRsPgR(void *p);
   static void deleteArray_edmcLcLWrapperlEBXVectorlEl1tcLcLMuonCaloSumgRsPgR(void *p);
   static void destruct_edmcLcLWrapperlEBXVectorlEl1tcLcLMuonCaloSumgRsPgR(void *p);

   // Function generating the singleton type initializer
   static TGenericClassInfo *GenerateInitInstanceLocal(const ::edm::Wrapper<BXVector<l1t::MuonCaloSum> >*)
   {
      ::edm::Wrapper<BXVector<l1t::MuonCaloSum> > *ptr = 0;
      static ::TVirtualIsAProxy* isa_proxy = new ::TIsAProxy(typeid(::edm::Wrapper<BXVector<l1t::MuonCaloSum> >));
      static ::ROOT::TGenericClassInfo 
         instance("edm::Wrapper<BXVector<l1t::MuonCaloSum> >", ::edm::Wrapper<BXVector<l1t::MuonCaloSum> >::Class_Version(), "DataFormats/Common/interface/Wrapper.h", 25,
                  typeid(::edm::Wrapper<BXVector<l1t::MuonCaloSum> >), ::ROOT::Internal::DefineBehavior(ptr, ptr),
                  &edmcLcLWrapperlEBXVectorlEl1tcLcLMuonCaloSumgRsPgR_Dictionary, isa_proxy, 0,
                  sizeof(::edm::Wrapper<BXVector<l1t::MuonCaloSum> >) );
      instance.SetNew(&new_edmcLcLWrapperlEBXVectorlEl1tcLcLMuonCaloSumgRsPgR);
      instance.SetNewArray(&newArray_edmcLcLWrapperlEBXVectorlEl1tcLcLMuonCaloSumgRsPgR);
      instance.SetDelete(&delete_edmcLcLWrapperlEBXVectorlEl1tcLcLMuonCaloSumgRsPgR);
      instance.SetDeleteArray(&deleteArray_edmcLcLWrapperlEBXVectorlEl1tcLcLMuonCaloSumgRsPgR);
      instance.SetDestructor(&destruct_edmcLcLWrapperlEBXVectorlEl1tcLcLMuonCaloSumgRsPgR);

      ::ROOT::AddClassAlternate("edm::Wrapper<BXVector<l1t::MuonCaloSum> >","edm::Wrapper<l1t::MuonCaloSumBxCollection>");
      return &instance;
   }
   TGenericClassInfo *GenerateInitInstance(const ::edm::Wrapper<BXVector<l1t::MuonCaloSum> >*)
   {
      return GenerateInitInstanceLocal((::edm::Wrapper<BXVector<l1t::MuonCaloSum> >*)0);
   }
   // Static variable to force the class initialization
   static ::ROOT::TGenericClassInfo *_R__UNIQUE_(Init) = GenerateInitInstanceLocal((const ::edm::Wrapper<BXVector<l1t::MuonCaloSum> >*)0x0); R__UseDummy(_R__UNIQUE_(Init));

   // Dictionary for non-ClassDef classes
   static TClass *edmcLcLWrapperlEBXVectorlEl1tcLcLMuonCaloSumgRsPgR_Dictionary() {
      TClass* theClass =::ROOT::GenerateInitInstanceLocal((const ::edm::Wrapper<BXVector<l1t::MuonCaloSum> >*)0x0)->GetClass();
      edmcLcLWrapperlEBXVectorlEl1tcLcLMuonCaloSumgRsPgR_TClassManip(theClass);
   return theClass;
   }

   static void edmcLcLWrapperlEBXVectorlEl1tcLcLMuonCaloSumgRsPgR_TClassManip(TClass* ){
   }

} // end of namespace ROOT

namespace ROOT {
   static TClass *l1tcLcLEMTFOutput_Dictionary();
   static void l1tcLcLEMTFOutput_TClassManip(TClass*);
   static void *new_l1tcLcLEMTFOutput(void *p = 0);
   static void *newArray_l1tcLcLEMTFOutput(Long_t size, void *p);
   static void delete_l1tcLcLEMTFOutput(void *p);
   static void deleteArray_l1tcLcLEMTFOutput(void *p);
   static void destruct_l1tcLcLEMTFOutput(void *p);

   // Function generating the singleton type initializer
   static TGenericClassInfo *GenerateInitInstanceLocal(const ::l1t::EMTFOutput*)
   {
      ::l1t::EMTFOutput *ptr = 0;
      static ::TVirtualIsAProxy* isa_proxy = new ::TIsAProxy(typeid(::l1t::EMTFOutput));
      static ::ROOT::TGenericClassInfo 
         instance("l1t::EMTFOutput", "DataFormats/L1TMuon/interface/EMTFOutput.h", 23,
                  typeid(::l1t::EMTFOutput), ::ROOT::Internal::DefineBehavior(ptr, ptr),
                  &l1tcLcLEMTFOutput_Dictionary, isa_proxy, 0,
                  sizeof(::l1t::EMTFOutput) );
      instance.SetNew(&new_l1tcLcLEMTFOutput);
      instance.SetNewArray(&newArray_l1tcLcLEMTFOutput);
      instance.SetDelete(&delete_l1tcLcLEMTFOutput);
      instance.SetDeleteArray(&deleteArray_l1tcLcLEMTFOutput);
      instance.SetDestructor(&destruct_l1tcLcLEMTFOutput);
      return &instance;
   }
   TGenericClassInfo *GenerateInitInstance(const ::l1t::EMTFOutput*)
   {
      return GenerateInitInstanceLocal((::l1t::EMTFOutput*)0);
   }
   // Static variable to force the class initialization
   static ::ROOT::TGenericClassInfo *_R__UNIQUE_(Init) = GenerateInitInstanceLocal((const ::l1t::EMTFOutput*)0x0); R__UseDummy(_R__UNIQUE_(Init));

   // Dictionary for non-ClassDef classes
   static TClass *l1tcLcLEMTFOutput_Dictionary() {
      TClass* theClass =::ROOT::GenerateInitInstanceLocal((const ::l1t::EMTFOutput*)0x0)->GetClass();
      l1tcLcLEMTFOutput_TClassManip(theClass);
   return theClass;
   }

   static void l1tcLcLEMTFOutput_TClassManip(TClass* ){
   }

} // end of namespace ROOT

namespace ROOT {
   static TClass *edmcLcLWrapperlEvectorlEl1tcLcLEMTFOutputgRsPgR_Dictionary();
   static void edmcLcLWrapperlEvectorlEl1tcLcLEMTFOutputgRsPgR_TClassManip(TClass*);
   static void *new_edmcLcLWrapperlEvectorlEl1tcLcLEMTFOutputgRsPgR(void *p = 0);
   static void *newArray_edmcLcLWrapperlEvectorlEl1tcLcLEMTFOutputgRsPgR(Long_t size, void *p);
   static void delete_edmcLcLWrapperlEvectorlEl1tcLcLEMTFOutputgRsPgR(void *p);
   static void deleteArray_edmcLcLWrapperlEvectorlEl1tcLcLEMTFOutputgRsPgR(void *p);
   static void destruct_edmcLcLWrapperlEvectorlEl1tcLcLEMTFOutputgRsPgR(void *p);

   // Function generating the singleton type initializer
   static TGenericClassInfo *GenerateInitInstanceLocal(const ::edm::Wrapper<vector<l1t::EMTFOutput> >*)
   {
      ::edm::Wrapper<vector<l1t::EMTFOutput> > *ptr = 0;
      static ::TVirtualIsAProxy* isa_proxy = new ::TIsAProxy(typeid(::edm::Wrapper<vector<l1t::EMTFOutput> >));
      static ::ROOT::TGenericClassInfo 
         instance("edm::Wrapper<vector<l1t::EMTFOutput> >", ::edm::Wrapper<vector<l1t::EMTFOutput> >::Class_Version(), "DataFormats/Common/interface/Wrapper.h", 25,
                  typeid(::edm::Wrapper<vector<l1t::EMTFOutput> >), ::ROOT::Internal::DefineBehavior(ptr, ptr),
                  &edmcLcLWrapperlEvectorlEl1tcLcLEMTFOutputgRsPgR_Dictionary, isa_proxy, 0,
                  sizeof(::edm::Wrapper<vector<l1t::EMTFOutput> >) );
      instance.SetNew(&new_edmcLcLWrapperlEvectorlEl1tcLcLEMTFOutputgRsPgR);
      instance.SetNewArray(&newArray_edmcLcLWrapperlEvectorlEl1tcLcLEMTFOutputgRsPgR);
      instance.SetDelete(&delete_edmcLcLWrapperlEvectorlEl1tcLcLEMTFOutputgRsPgR);
      instance.SetDeleteArray(&deleteArray_edmcLcLWrapperlEvectorlEl1tcLcLEMTFOutputgRsPgR);
      instance.SetDestructor(&destruct_edmcLcLWrapperlEvectorlEl1tcLcLEMTFOutputgRsPgR);

      ::ROOT::AddClassAlternate("edm::Wrapper<vector<l1t::EMTFOutput> >","edm::Wrapper<l1t::EMTFOutputCollection>");
      return &instance;
   }
   TGenericClassInfo *GenerateInitInstance(const ::edm::Wrapper<vector<l1t::EMTFOutput> >*)
   {
      return GenerateInitInstanceLocal((::edm::Wrapper<vector<l1t::EMTFOutput> >*)0);
   }
   // Static variable to force the class initialization
   static ::ROOT::TGenericClassInfo *_R__UNIQUE_(Init) = GenerateInitInstanceLocal((const ::edm::Wrapper<vector<l1t::EMTFOutput> >*)0x0); R__UseDummy(_R__UNIQUE_(Init));

   // Dictionary for non-ClassDef classes
   static TClass *edmcLcLWrapperlEvectorlEl1tcLcLEMTFOutputgRsPgR_Dictionary() {
      TClass* theClass =::ROOT::GenerateInitInstanceLocal((const ::edm::Wrapper<vector<l1t::EMTFOutput> >*)0x0)->GetClass();
      edmcLcLWrapperlEvectorlEl1tcLcLEMTFOutputgRsPgR_TClassManip(theClass);
   return theClass;
   }

   static void edmcLcLWrapperlEvectorlEl1tcLcLEMTFOutputgRsPgR_TClassManip(TClass* ){
   }

} // end of namespace ROOT

namespace ROOT {
   static TClass *l1tcLcLemtfcLcLAMC13Header_Dictionary();
   static void l1tcLcLemtfcLcLAMC13Header_TClassManip(TClass*);
   static void *new_l1tcLcLemtfcLcLAMC13Header(void *p = 0);
   static void *newArray_l1tcLcLemtfcLcLAMC13Header(Long_t size, void *p);
   static void delete_l1tcLcLemtfcLcLAMC13Header(void *p);
   static void deleteArray_l1tcLcLemtfcLcLAMC13Header(void *p);
   static void destruct_l1tcLcLemtfcLcLAMC13Header(void *p);

   // Function generating the singleton type initializer
   static TGenericClassInfo *GenerateInitInstanceLocal(const ::l1t::emtf::AMC13Header*)
   {
      ::l1t::emtf::AMC13Header *ptr = 0;
      static ::TVirtualIsAProxy* isa_proxy = new ::TIsAProxy(typeid(::l1t::emtf::AMC13Header));
      static ::ROOT::TGenericClassInfo 
         instance("l1t::emtf::AMC13Header", "DataFormats/L1TMuon/interface/EMTF/AMC13Header.h", 11,
                  typeid(::l1t::emtf::AMC13Header), ::ROOT::Internal::DefineBehavior(ptr, ptr),
                  &l1tcLcLemtfcLcLAMC13Header_Dictionary, isa_proxy, 0,
                  sizeof(::l1t::emtf::AMC13Header) );
      instance.SetNew(&new_l1tcLcLemtfcLcLAMC13Header);
      instance.SetNewArray(&newArray_l1tcLcLemtfcLcLAMC13Header);
      instance.SetDelete(&delete_l1tcLcLemtfcLcLAMC13Header);
      instance.SetDeleteArray(&deleteArray_l1tcLcLemtfcLcLAMC13Header);
      instance.SetDestructor(&destruct_l1tcLcLemtfcLcLAMC13Header);
      return &instance;
   }
   TGenericClassInfo *GenerateInitInstance(const ::l1t::emtf::AMC13Header*)
   {
      return GenerateInitInstanceLocal((::l1t::emtf::AMC13Header*)0);
   }
   // Static variable to force the class initialization
   static ::ROOT::TGenericClassInfo *_R__UNIQUE_(Init) = GenerateInitInstanceLocal((const ::l1t::emtf::AMC13Header*)0x0); R__UseDummy(_R__UNIQUE_(Init));

   // Dictionary for non-ClassDef classes
   static TClass *l1tcLcLemtfcLcLAMC13Header_Dictionary() {
      TClass* theClass =::ROOT::GenerateInitInstanceLocal((const ::l1t::emtf::AMC13Header*)0x0)->GetClass();
      l1tcLcLemtfcLcLAMC13Header_TClassManip(theClass);
   return theClass;
   }

   static void l1tcLcLemtfcLcLAMC13Header_TClassManip(TClass* ){
   }

} // end of namespace ROOT

namespace ROOT {
   static TClass *l1tcLcLemtfcLcLMTF7Header_Dictionary();
   static void l1tcLcLemtfcLcLMTF7Header_TClassManip(TClass*);
   static void *new_l1tcLcLemtfcLcLMTF7Header(void *p = 0);
   static void *newArray_l1tcLcLemtfcLcLMTF7Header(Long_t size, void *p);
   static void delete_l1tcLcLemtfcLcLMTF7Header(void *p);
   static void deleteArray_l1tcLcLemtfcLcLMTF7Header(void *p);
   static void destruct_l1tcLcLemtfcLcLMTF7Header(void *p);

   // Function generating the singleton type initializer
   static TGenericClassInfo *GenerateInitInstanceLocal(const ::l1t::emtf::MTF7Header*)
   {
      ::l1t::emtf::MTF7Header *ptr = 0;
      static ::TVirtualIsAProxy* isa_proxy = new ::TIsAProxy(typeid(::l1t::emtf::MTF7Header));
      static ::ROOT::TGenericClassInfo 
         instance("l1t::emtf::MTF7Header", "DataFormats/L1TMuon/interface/EMTF/MTF7Header.h", 11,
                  typeid(::l1t::emtf::MTF7Header), ::ROOT::Internal::DefineBehavior(ptr, ptr),
                  &l1tcLcLemtfcLcLMTF7Header_Dictionary, isa_proxy, 0,
                  sizeof(::l1t::emtf::MTF7Header) );
      instance.SetNew(&new_l1tcLcLemtfcLcLMTF7Header);
      instance.SetNewArray(&newArray_l1tcLcLemtfcLcLMTF7Header);
      instance.SetDelete(&delete_l1tcLcLemtfcLcLMTF7Header);
      instance.SetDeleteArray(&deleteArray_l1tcLcLemtfcLcLMTF7Header);
      instance.SetDestructor(&destruct_l1tcLcLemtfcLcLMTF7Header);
      return &instance;
   }
   TGenericClassInfo *GenerateInitInstance(const ::l1t::emtf::MTF7Header*)
   {
      return GenerateInitInstanceLocal((::l1t::emtf::MTF7Header*)0);
   }
   // Static variable to force the class initialization
   static ::ROOT::TGenericClassInfo *_R__UNIQUE_(Init) = GenerateInitInstanceLocal((const ::l1t::emtf::MTF7Header*)0x0); R__UseDummy(_R__UNIQUE_(Init));

   // Dictionary for non-ClassDef classes
   static TClass *l1tcLcLemtfcLcLMTF7Header_Dictionary() {
      TClass* theClass =::ROOT::GenerateInitInstanceLocal((const ::l1t::emtf::MTF7Header*)0x0)->GetClass();
      l1tcLcLemtfcLcLMTF7Header_TClassManip(theClass);
   return theClass;
   }

   static void l1tcLcLemtfcLcLMTF7Header_TClassManip(TClass* ){
   }

} // end of namespace ROOT

namespace ROOT {
   static TClass *l1tcLcLemtfcLcLEventHeader_Dictionary();
   static void l1tcLcLemtfcLcLEventHeader_TClassManip(TClass*);
   static void *new_l1tcLcLemtfcLcLEventHeader(void *p = 0);
   static void *newArray_l1tcLcLemtfcLcLEventHeader(Long_t size, void *p);
   static void delete_l1tcLcLemtfcLcLEventHeader(void *p);
   static void deleteArray_l1tcLcLemtfcLcLEventHeader(void *p);
   static void destruct_l1tcLcLemtfcLcLEventHeader(void *p);

   // Function generating the singleton type initializer
   static TGenericClassInfo *GenerateInitInstanceLocal(const ::l1t::emtf::EventHeader*)
   {
      ::l1t::emtf::EventHeader *ptr = 0;
      static ::TVirtualIsAProxy* isa_proxy = new ::TIsAProxy(typeid(::l1t::emtf::EventHeader));
      static ::ROOT::TGenericClassInfo 
         instance("l1t::emtf::EventHeader", "DataFormats/L1TMuon/interface/EMTF/EventHeader.h", 10,
                  typeid(::l1t::emtf::EventHeader), ::ROOT::Internal::DefineBehavior(ptr, ptr),
                  &l1tcLcLemtfcLcLEventHeader_Dictionary, isa_proxy, 0,
                  sizeof(::l1t::emtf::EventHeader) );
      instance.SetNew(&new_l1tcLcLemtfcLcLEventHeader);
      instance.SetNewArray(&newArray_l1tcLcLemtfcLcLEventHeader);
      instance.SetDelete(&delete_l1tcLcLemtfcLcLEventHeader);
      instance.SetDeleteArray(&deleteArray_l1tcLcLemtfcLcLEventHeader);
      instance.SetDestructor(&destruct_l1tcLcLemtfcLcLEventHeader);
      return &instance;
   }
   TGenericClassInfo *GenerateInitInstance(const ::l1t::emtf::EventHeader*)
   {
      return GenerateInitInstanceLocal((::l1t::emtf::EventHeader*)0);
   }
   // Static variable to force the class initialization
   static ::ROOT::TGenericClassInfo *_R__UNIQUE_(Init) = GenerateInitInstanceLocal((const ::l1t::emtf::EventHeader*)0x0); R__UseDummy(_R__UNIQUE_(Init));

   // Dictionary for non-ClassDef classes
   static TClass *l1tcLcLemtfcLcLEventHeader_Dictionary() {
      TClass* theClass =::ROOT::GenerateInitInstanceLocal((const ::l1t::emtf::EventHeader*)0x0)->GetClass();
      l1tcLcLemtfcLcLEventHeader_TClassManip(theClass);
   return theClass;
   }

   static void l1tcLcLemtfcLcLEventHeader_TClassManip(TClass* ){
   }

} // end of namespace ROOT

namespace ROOT {
   static TClass *l1tcLcLemtfcLcLCounters_Dictionary();
   static void l1tcLcLemtfcLcLCounters_TClassManip(TClass*);
   static void *new_l1tcLcLemtfcLcLCounters(void *p = 0);
   static void *newArray_l1tcLcLemtfcLcLCounters(Long_t size, void *p);
   static void delete_l1tcLcLemtfcLcLCounters(void *p);
   static void deleteArray_l1tcLcLemtfcLcLCounters(void *p);
   static void destruct_l1tcLcLemtfcLcLCounters(void *p);

   // Function generating the singleton type initializer
   static TGenericClassInfo *GenerateInitInstanceLocal(const ::l1t::emtf::Counters*)
   {
      ::l1t::emtf::Counters *ptr = 0;
      static ::TVirtualIsAProxy* isa_proxy = new ::TIsAProxy(typeid(::l1t::emtf::Counters));
      static ::ROOT::TGenericClassInfo 
         instance("l1t::emtf::Counters", "DataFormats/L1TMuon/interface/EMTF/Counters.h", 10,
                  typeid(::l1t::emtf::Counters), ::ROOT::Internal::DefineBehavior(ptr, ptr),
                  &l1tcLcLemtfcLcLCounters_Dictionary, isa_proxy, 0,
                  sizeof(::l1t::emtf::Counters) );
      instance.SetNew(&new_l1tcLcLemtfcLcLCounters);
      instance.SetNewArray(&newArray_l1tcLcLemtfcLcLCounters);
      instance.SetDelete(&delete_l1tcLcLemtfcLcLCounters);
      instance.SetDeleteArray(&deleteArray_l1tcLcLemtfcLcLCounters);
      instance.SetDestructor(&destruct_l1tcLcLemtfcLcLCounters);
      return &instance;
   }
   TGenericClassInfo *GenerateInitInstance(const ::l1t::emtf::Counters*)
   {
      return GenerateInitInstanceLocal((::l1t::emtf::Counters*)0);
   }
   // Static variable to force the class initialization
   static ::ROOT::TGenericClassInfo *_R__UNIQUE_(Init) = GenerateInitInstanceLocal((const ::l1t::emtf::Counters*)0x0); R__UseDummy(_R__UNIQUE_(Init));

   // Dictionary for non-ClassDef classes
   static TClass *l1tcLcLemtfcLcLCounters_Dictionary() {
      TClass* theClass =::ROOT::GenerateInitInstanceLocal((const ::l1t::emtf::Counters*)0x0)->GetClass();
      l1tcLcLemtfcLcLCounters_TClassManip(theClass);
   return theClass;
   }

   static void l1tcLcLemtfcLcLCounters_TClassManip(TClass* ){
   }

} // end of namespace ROOT

namespace ROOT {
   static TClass *l1tcLcLemtfcLcLME_Dictionary();
   static void l1tcLcLemtfcLcLME_TClassManip(TClass*);
   static void *new_l1tcLcLemtfcLcLME(void *p = 0);
   static void *newArray_l1tcLcLemtfcLcLME(Long_t size, void *p);
   static void delete_l1tcLcLemtfcLcLME(void *p);
   static void deleteArray_l1tcLcLemtfcLcLME(void *p);
   static void destruct_l1tcLcLemtfcLcLME(void *p);

   // Function generating the singleton type initializer
   static TGenericClassInfo *GenerateInitInstanceLocal(const ::l1t::emtf::ME*)
   {
      ::l1t::emtf::ME *ptr = 0;
      static ::TVirtualIsAProxy* isa_proxy = new ::TIsAProxy(typeid(::l1t::emtf::ME));
      static ::ROOT::TGenericClassInfo 
         instance("l1t::emtf::ME", "DataFormats/L1TMuon/interface/EMTF/ME.h", 10,
                  typeid(::l1t::emtf::ME), ::ROOT::Internal::DefineBehavior(ptr, ptr),
                  &l1tcLcLemtfcLcLME_Dictionary, isa_proxy, 0,
                  sizeof(::l1t::emtf::ME) );
      instance.SetNew(&new_l1tcLcLemtfcLcLME);
      instance.SetNewArray(&newArray_l1tcLcLemtfcLcLME);
      instance.SetDelete(&delete_l1tcLcLemtfcLcLME);
      instance.SetDeleteArray(&deleteArray_l1tcLcLemtfcLcLME);
      instance.SetDestructor(&destruct_l1tcLcLemtfcLcLME);
      return &instance;
   }
   TGenericClassInfo *GenerateInitInstance(const ::l1t::emtf::ME*)
   {
      return GenerateInitInstanceLocal((::l1t::emtf::ME*)0);
   }
   // Static variable to force the class initialization
   static ::ROOT::TGenericClassInfo *_R__UNIQUE_(Init) = GenerateInitInstanceLocal((const ::l1t::emtf::ME*)0x0); R__UseDummy(_R__UNIQUE_(Init));

   // Dictionary for non-ClassDef classes
   static TClass *l1tcLcLemtfcLcLME_Dictionary() {
      TClass* theClass =::ROOT::GenerateInitInstanceLocal((const ::l1t::emtf::ME*)0x0)->GetClass();
      l1tcLcLemtfcLcLME_TClassManip(theClass);
   return theClass;
   }

   static void l1tcLcLemtfcLcLME_TClassManip(TClass* ){
   }

} // end of namespace ROOT

namespace ROOT {
   static TClass *l1tcLcLemtfcLcLRPC_Dictionary();
   static void l1tcLcLemtfcLcLRPC_TClassManip(TClass*);
   static void *new_l1tcLcLemtfcLcLRPC(void *p = 0);
   static void *newArray_l1tcLcLemtfcLcLRPC(Long_t size, void *p);
   static void delete_l1tcLcLemtfcLcLRPC(void *p);
   static void deleteArray_l1tcLcLemtfcLcLRPC(void *p);
   static void destruct_l1tcLcLemtfcLcLRPC(void *p);

   // Function generating the singleton type initializer
   static TGenericClassInfo *GenerateInitInstanceLocal(const ::l1t::emtf::RPC*)
   {
      ::l1t::emtf::RPC *ptr = 0;
      static ::TVirtualIsAProxy* isa_proxy = new ::TIsAProxy(typeid(::l1t::emtf::RPC));
      static ::ROOT::TGenericClassInfo 
         instance("l1t::emtf::RPC", "DataFormats/L1TMuon/interface/EMTF/RPC.h", 10,
                  typeid(::l1t::emtf::RPC), ::ROOT::Internal::DefineBehavior(ptr, ptr),
                  &l1tcLcLemtfcLcLRPC_Dictionary, isa_proxy, 0,
                  sizeof(::l1t::emtf::RPC) );
      instance.SetNew(&new_l1tcLcLemtfcLcLRPC);
      instance.SetNewArray(&newArray_l1tcLcLemtfcLcLRPC);
      instance.SetDelete(&delete_l1tcLcLemtfcLcLRPC);
      instance.SetDeleteArray(&deleteArray_l1tcLcLemtfcLcLRPC);
      instance.SetDestructor(&destruct_l1tcLcLemtfcLcLRPC);
      return &instance;
   }
   TGenericClassInfo *GenerateInitInstance(const ::l1t::emtf::RPC*)
   {
      return GenerateInitInstanceLocal((::l1t::emtf::RPC*)0);
   }
   // Static variable to force the class initialization
   static ::ROOT::TGenericClassInfo *_R__UNIQUE_(Init) = GenerateInitInstanceLocal((const ::l1t::emtf::RPC*)0x0); R__UseDummy(_R__UNIQUE_(Init));

   // Dictionary for non-ClassDef classes
   static TClass *l1tcLcLemtfcLcLRPC_Dictionary() {
      TClass* theClass =::ROOT::GenerateInitInstanceLocal((const ::l1t::emtf::RPC*)0x0)->GetClass();
      l1tcLcLemtfcLcLRPC_TClassManip(theClass);
   return theClass;
   }

   static void l1tcLcLemtfcLcLRPC_TClassManip(TClass* ){
   }

} // end of namespace ROOT

namespace ROOT {
   static TClass *l1tcLcLemtfcLcLSP_Dictionary();
   static void l1tcLcLemtfcLcLSP_TClassManip(TClass*);
   static void *new_l1tcLcLemtfcLcLSP(void *p = 0);
   static void *newArray_l1tcLcLemtfcLcLSP(Long_t size, void *p);
   static void delete_l1tcLcLemtfcLcLSP(void *p);
   static void deleteArray_l1tcLcLemtfcLcLSP(void *p);
   static void destruct_l1tcLcLemtfcLcLSP(void *p);

   // Function generating the singleton type initializer
   static TGenericClassInfo *GenerateInitInstanceLocal(const ::l1t::emtf::SP*)
   {
      ::l1t::emtf::SP *ptr = 0;
      static ::TVirtualIsAProxy* isa_proxy = new ::TIsAProxy(typeid(::l1t::emtf::SP));
      static ::ROOT::TGenericClassInfo 
         instance("l1t::emtf::SP", "DataFormats/L1TMuon/interface/EMTF/SP.h", 10,
                  typeid(::l1t::emtf::SP), ::ROOT::Internal::DefineBehavior(ptr, ptr),
                  &l1tcLcLemtfcLcLSP_Dictionary, isa_proxy, 0,
                  sizeof(::l1t::emtf::SP) );
      instance.SetNew(&new_l1tcLcLemtfcLcLSP);
      instance.SetNewArray(&newArray_l1tcLcLemtfcLcLSP);
      instance.SetDelete(&delete_l1tcLcLemtfcLcLSP);
      instance.SetDeleteArray(&deleteArray_l1tcLcLemtfcLcLSP);
      instance.SetDestructor(&destruct_l1tcLcLemtfcLcLSP);
      return &instance;
   }
   TGenericClassInfo *GenerateInitInstance(const ::l1t::emtf::SP*)
   {
      return GenerateInitInstanceLocal((::l1t::emtf::SP*)0);
   }
   // Static variable to force the class initialization
   static ::ROOT::TGenericClassInfo *_R__UNIQUE_(Init) = GenerateInitInstanceLocal((const ::l1t::emtf::SP*)0x0); R__UseDummy(_R__UNIQUE_(Init));

   // Dictionary for non-ClassDef classes
   static TClass *l1tcLcLemtfcLcLSP_Dictionary() {
      TClass* theClass =::ROOT::GenerateInitInstanceLocal((const ::l1t::emtf::SP*)0x0)->GetClass();
      l1tcLcLemtfcLcLSP_TClassManip(theClass);
   return theClass;
   }

   static void l1tcLcLemtfcLcLSP_TClassManip(TClass* ){
   }

} // end of namespace ROOT

namespace ROOT {
   static TClass *l1tcLcLemtfcLcLEventTrailer_Dictionary();
   static void l1tcLcLemtfcLcLEventTrailer_TClassManip(TClass*);
   static void *new_l1tcLcLemtfcLcLEventTrailer(void *p = 0);
   static void *newArray_l1tcLcLemtfcLcLEventTrailer(Long_t size, void *p);
   static void delete_l1tcLcLemtfcLcLEventTrailer(void *p);
   static void deleteArray_l1tcLcLemtfcLcLEventTrailer(void *p);
   static void destruct_l1tcLcLemtfcLcLEventTrailer(void *p);

   // Function generating the singleton type initializer
   static TGenericClassInfo *GenerateInitInstanceLocal(const ::l1t::emtf::EventTrailer*)
   {
      ::l1t::emtf::EventTrailer *ptr = 0;
      static ::TVirtualIsAProxy* isa_proxy = new ::TIsAProxy(typeid(::l1t::emtf::EventTrailer));
      static ::ROOT::TGenericClassInfo 
         instance("l1t::emtf::EventTrailer", "DataFormats/L1TMuon/interface/EMTF/EventTrailer.h", 10,
                  typeid(::l1t::emtf::EventTrailer), ::ROOT::Internal::DefineBehavior(ptr, ptr),
                  &l1tcLcLemtfcLcLEventTrailer_Dictionary, isa_proxy, 0,
                  sizeof(::l1t::emtf::EventTrailer) );
      instance.SetNew(&new_l1tcLcLemtfcLcLEventTrailer);
      instance.SetNewArray(&newArray_l1tcLcLemtfcLcLEventTrailer);
      instance.SetDelete(&delete_l1tcLcLemtfcLcLEventTrailer);
      instance.SetDeleteArray(&deleteArray_l1tcLcLemtfcLcLEventTrailer);
      instance.SetDestructor(&destruct_l1tcLcLemtfcLcLEventTrailer);
      return &instance;
   }
   TGenericClassInfo *GenerateInitInstance(const ::l1t::emtf::EventTrailer*)
   {
      return GenerateInitInstanceLocal((::l1t::emtf::EventTrailer*)0);
   }
   // Static variable to force the class initialization
   static ::ROOT::TGenericClassInfo *_R__UNIQUE_(Init) = GenerateInitInstanceLocal((const ::l1t::emtf::EventTrailer*)0x0); R__UseDummy(_R__UNIQUE_(Init));

   // Dictionary for non-ClassDef classes
   static TClass *l1tcLcLemtfcLcLEventTrailer_Dictionary() {
      TClass* theClass =::ROOT::GenerateInitInstanceLocal((const ::l1t::emtf::EventTrailer*)0x0)->GetClass();
      l1tcLcLemtfcLcLEventTrailer_TClassManip(theClass);
   return theClass;
   }

   static void l1tcLcLemtfcLcLEventTrailer_TClassManip(TClass* ){
   }

} // end of namespace ROOT

namespace ROOT {
   static TClass *l1tcLcLemtfcLcLMTF7Trailer_Dictionary();
   static void l1tcLcLemtfcLcLMTF7Trailer_TClassManip(TClass*);
   static void *new_l1tcLcLemtfcLcLMTF7Trailer(void *p = 0);
   static void *newArray_l1tcLcLemtfcLcLMTF7Trailer(Long_t size, void *p);
   static void delete_l1tcLcLemtfcLcLMTF7Trailer(void *p);
   static void deleteArray_l1tcLcLemtfcLcLMTF7Trailer(void *p);
   static void destruct_l1tcLcLemtfcLcLMTF7Trailer(void *p);

   // Function generating the singleton type initializer
   static TGenericClassInfo *GenerateInitInstanceLocal(const ::l1t::emtf::MTF7Trailer*)
   {
      ::l1t::emtf::MTF7Trailer *ptr = 0;
      static ::TVirtualIsAProxy* isa_proxy = new ::TIsAProxy(typeid(::l1t::emtf::MTF7Trailer));
      static ::ROOT::TGenericClassInfo 
         instance("l1t::emtf::MTF7Trailer", "DataFormats/L1TMuon/interface/EMTF/MTF7Trailer.h", 11,
                  typeid(::l1t::emtf::MTF7Trailer), ::ROOT::Internal::DefineBehavior(ptr, ptr),
                  &l1tcLcLemtfcLcLMTF7Trailer_Dictionary, isa_proxy, 0,
                  sizeof(::l1t::emtf::MTF7Trailer) );
      instance.SetNew(&new_l1tcLcLemtfcLcLMTF7Trailer);
      instance.SetNewArray(&newArray_l1tcLcLemtfcLcLMTF7Trailer);
      instance.SetDelete(&delete_l1tcLcLemtfcLcLMTF7Trailer);
      instance.SetDeleteArray(&deleteArray_l1tcLcLemtfcLcLMTF7Trailer);
      instance.SetDestructor(&destruct_l1tcLcLemtfcLcLMTF7Trailer);
      return &instance;
   }
   TGenericClassInfo *GenerateInitInstance(const ::l1t::emtf::MTF7Trailer*)
   {
      return GenerateInitInstanceLocal((::l1t::emtf::MTF7Trailer*)0);
   }
   // Static variable to force the class initialization
   static ::ROOT::TGenericClassInfo *_R__UNIQUE_(Init) = GenerateInitInstanceLocal((const ::l1t::emtf::MTF7Trailer*)0x0); R__UseDummy(_R__UNIQUE_(Init));

   // Dictionary for non-ClassDef classes
   static TClass *l1tcLcLemtfcLcLMTF7Trailer_Dictionary() {
      TClass* theClass =::ROOT::GenerateInitInstanceLocal((const ::l1t::emtf::MTF7Trailer*)0x0)->GetClass();
      l1tcLcLemtfcLcLMTF7Trailer_TClassManip(theClass);
   return theClass;
   }

   static void l1tcLcLemtfcLcLMTF7Trailer_TClassManip(TClass* ){
   }

} // end of namespace ROOT

namespace ROOT {
   static TClass *l1tcLcLemtfcLcLAMC13Trailer_Dictionary();
   static void l1tcLcLemtfcLcLAMC13Trailer_TClassManip(TClass*);
   static void *new_l1tcLcLemtfcLcLAMC13Trailer(void *p = 0);
   static void *newArray_l1tcLcLemtfcLcLAMC13Trailer(Long_t size, void *p);
   static void delete_l1tcLcLemtfcLcLAMC13Trailer(void *p);
   static void deleteArray_l1tcLcLemtfcLcLAMC13Trailer(void *p);
   static void destruct_l1tcLcLemtfcLcLAMC13Trailer(void *p);

   // Function generating the singleton type initializer
   static TGenericClassInfo *GenerateInitInstanceLocal(const ::l1t::emtf::AMC13Trailer*)
   {
      ::l1t::emtf::AMC13Trailer *ptr = 0;
      static ::TVirtualIsAProxy* isa_proxy = new ::TIsAProxy(typeid(::l1t::emtf::AMC13Trailer));
      static ::ROOT::TGenericClassInfo 
         instance("l1t::emtf::AMC13Trailer", "DataFormats/L1TMuon/interface/EMTF/AMC13Trailer.h", 11,
                  typeid(::l1t::emtf::AMC13Trailer), ::ROOT::Internal::DefineBehavior(ptr, ptr),
                  &l1tcLcLemtfcLcLAMC13Trailer_Dictionary, isa_proxy, 0,
                  sizeof(::l1t::emtf::AMC13Trailer) );
      instance.SetNew(&new_l1tcLcLemtfcLcLAMC13Trailer);
      instance.SetNewArray(&newArray_l1tcLcLemtfcLcLAMC13Trailer);
      instance.SetDelete(&delete_l1tcLcLemtfcLcLAMC13Trailer);
      instance.SetDeleteArray(&deleteArray_l1tcLcLemtfcLcLAMC13Trailer);
      instance.SetDestructor(&destruct_l1tcLcLemtfcLcLAMC13Trailer);
      return &instance;
   }
   TGenericClassInfo *GenerateInitInstance(const ::l1t::emtf::AMC13Trailer*)
   {
      return GenerateInitInstanceLocal((::l1t::emtf::AMC13Trailer*)0);
   }
   // Static variable to force the class initialization
   static ::ROOT::TGenericClassInfo *_R__UNIQUE_(Init) = GenerateInitInstanceLocal((const ::l1t::emtf::AMC13Trailer*)0x0); R__UseDummy(_R__UNIQUE_(Init));

   // Dictionary for non-ClassDef classes
   static TClass *l1tcLcLemtfcLcLAMC13Trailer_Dictionary() {
      TClass* theClass =::ROOT::GenerateInitInstanceLocal((const ::l1t::emtf::AMC13Trailer*)0x0)->GetClass();
      l1tcLcLemtfcLcLAMC13Trailer_TClassManip(theClass);
   return theClass;
   }

   static void l1tcLcLemtfcLcLAMC13Trailer_TClassManip(TClass* ){
   }

} // end of namespace ROOT

namespace ROOT {
   // Wrappers around operator new
   static void *new_l1tcLcLRegionalMuonCand(void *p) {
      return  p ? ::new((::ROOT::Internal::TOperatorNewHelper*)p) ::l1t::RegionalMuonCand : new ::l1t::RegionalMuonCand;
   }
   static void *newArray_l1tcLcLRegionalMuonCand(Long_t nElements, void *p) {
      return p ? ::new((::ROOT::Internal::TOperatorNewHelper*)p) ::l1t::RegionalMuonCand[nElements] : new ::l1t::RegionalMuonCand[nElements];
   }
   // Wrapper around operator delete
   static void delete_l1tcLcLRegionalMuonCand(void *p) {
      delete ((::l1t::RegionalMuonCand*)p);
   }
   static void deleteArray_l1tcLcLRegionalMuonCand(void *p) {
      delete [] ((::l1t::RegionalMuonCand*)p);
   }
   static void destruct_l1tcLcLRegionalMuonCand(void *p) {
      typedef ::l1t::RegionalMuonCand current_t;
      ((current_t*)p)->~current_t();
   }
} // end of namespace ROOT for class ::l1t::RegionalMuonCand

namespace ROOT {
   // Wrappers around operator new
   static void *new_BXVectorlEl1tcLcLRegionalMuonCandgR(void *p) {
      return  p ? new(p) ::BXVector<l1t::RegionalMuonCand> : new ::BXVector<l1t::RegionalMuonCand>;
   }
   static void *newArray_BXVectorlEl1tcLcLRegionalMuonCandgR(Long_t nElements, void *p) {
      return p ? new(p) ::BXVector<l1t::RegionalMuonCand>[nElements] : new ::BXVector<l1t::RegionalMuonCand>[nElements];
   }
   // Wrapper around operator delete
   static void delete_BXVectorlEl1tcLcLRegionalMuonCandgR(void *p) {
      delete ((::BXVector<l1t::RegionalMuonCand>*)p);
   }
   static void deleteArray_BXVectorlEl1tcLcLRegionalMuonCandgR(void *p) {
      delete [] ((::BXVector<l1t::RegionalMuonCand>*)p);
   }
   static void destruct_BXVectorlEl1tcLcLRegionalMuonCandgR(void *p) {
      typedef ::BXVector<l1t::RegionalMuonCand> current_t;
      ((current_t*)p)->~current_t();
   }
} // end of namespace ROOT for class ::BXVector<l1t::RegionalMuonCand>

namespace ROOT {
   // Wrappers around operator new
   static void *new_edmcLcLWrapperlEBXVectorlEl1tcLcLRegionalMuonCandgRsPgR(void *p) {
      return  p ? ::new((::ROOT::Internal::TOperatorNewHelper*)p) ::edm::Wrapper<BXVector<l1t::RegionalMuonCand> > : new ::edm::Wrapper<BXVector<l1t::RegionalMuonCand> >;
   }
   static void *newArray_edmcLcLWrapperlEBXVectorlEl1tcLcLRegionalMuonCandgRsPgR(Long_t nElements, void *p) {
      return p ? ::new((::ROOT::Internal::TOperatorNewHelper*)p) ::edm::Wrapper<BXVector<l1t::RegionalMuonCand> >[nElements] : new ::edm::Wrapper<BXVector<l1t::RegionalMuonCand> >[nElements];
   }
   // Wrapper around operator delete
   static void delete_edmcLcLWrapperlEBXVectorlEl1tcLcLRegionalMuonCandgRsPgR(void *p) {
      delete ((::edm::Wrapper<BXVector<l1t::RegionalMuonCand> >*)p);
   }
   static void deleteArray_edmcLcLWrapperlEBXVectorlEl1tcLcLRegionalMuonCandgRsPgR(void *p) {
      delete [] ((::edm::Wrapper<BXVector<l1t::RegionalMuonCand> >*)p);
   }
   static void destruct_edmcLcLWrapperlEBXVectorlEl1tcLcLRegionalMuonCandgRsPgR(void *p) {
      typedef ::edm::Wrapper<BXVector<l1t::RegionalMuonCand> > current_t;
      ((current_t*)p)->~current_t();
   }
} // end of namespace ROOT for class ::edm::Wrapper<BXVector<l1t::RegionalMuonCand> >

namespace ROOT {
   // Wrappers around operator new
   static void *new_l1tcLcLMuonCaloSum(void *p) {
      return  p ? ::new((::ROOT::Internal::TOperatorNewHelper*)p) ::l1t::MuonCaloSum : new ::l1t::MuonCaloSum;
   }
   static void *newArray_l1tcLcLMuonCaloSum(Long_t nElements, void *p) {
      return p ? ::new((::ROOT::Internal::TOperatorNewHelper*)p) ::l1t::MuonCaloSum[nElements] : new ::l1t::MuonCaloSum[nElements];
   }
   // Wrapper around operator delete
   static void delete_l1tcLcLMuonCaloSum(void *p) {
      delete ((::l1t::MuonCaloSum*)p);
   }
   static void deleteArray_l1tcLcLMuonCaloSum(void *p) {
      delete [] ((::l1t::MuonCaloSum*)p);
   }
   static void destruct_l1tcLcLMuonCaloSum(void *p) {
      typedef ::l1t::MuonCaloSum current_t;
      ((current_t*)p)->~current_t();
   }
} // end of namespace ROOT for class ::l1t::MuonCaloSum

namespace ROOT {
   // Wrappers around operator new
   static void *new_BXVectorlEl1tcLcLMuonCaloSumgR(void *p) {
      return  p ? new(p) ::BXVector<l1t::MuonCaloSum> : new ::BXVector<l1t::MuonCaloSum>;
   }
   static void *newArray_BXVectorlEl1tcLcLMuonCaloSumgR(Long_t nElements, void *p) {
      return p ? new(p) ::BXVector<l1t::MuonCaloSum>[nElements] : new ::BXVector<l1t::MuonCaloSum>[nElements];
   }
   // Wrapper around operator delete
   static void delete_BXVectorlEl1tcLcLMuonCaloSumgR(void *p) {
      delete ((::BXVector<l1t::MuonCaloSum>*)p);
   }
   static void deleteArray_BXVectorlEl1tcLcLMuonCaloSumgR(void *p) {
      delete [] ((::BXVector<l1t::MuonCaloSum>*)p);
   }
   static void destruct_BXVectorlEl1tcLcLMuonCaloSumgR(void *p) {
      typedef ::BXVector<l1t::MuonCaloSum> current_t;
      ((current_t*)p)->~current_t();
   }
} // end of namespace ROOT for class ::BXVector<l1t::MuonCaloSum>

namespace ROOT {
   // Wrappers around operator new
   static void *new_edmcLcLWrapperlEBXVectorlEl1tcLcLMuonCaloSumgRsPgR(void *p) {
      return  p ? ::new((::ROOT::Internal::TOperatorNewHelper*)p) ::edm::Wrapper<BXVector<l1t::MuonCaloSum> > : new ::edm::Wrapper<BXVector<l1t::MuonCaloSum> >;
   }
   static void *newArray_edmcLcLWrapperlEBXVectorlEl1tcLcLMuonCaloSumgRsPgR(Long_t nElements, void *p) {
      return p ? ::new((::ROOT::Internal::TOperatorNewHelper*)p) ::edm::Wrapper<BXVector<l1t::MuonCaloSum> >[nElements] : new ::edm::Wrapper<BXVector<l1t::MuonCaloSum> >[nElements];
   }
   // Wrapper around operator delete
   static void delete_edmcLcLWrapperlEBXVectorlEl1tcLcLMuonCaloSumgRsPgR(void *p) {
      delete ((::edm::Wrapper<BXVector<l1t::MuonCaloSum> >*)p);
   }
   static void deleteArray_edmcLcLWrapperlEBXVectorlEl1tcLcLMuonCaloSumgRsPgR(void *p) {
      delete [] ((::edm::Wrapper<BXVector<l1t::MuonCaloSum> >*)p);
   }
   static void destruct_edmcLcLWrapperlEBXVectorlEl1tcLcLMuonCaloSumgRsPgR(void *p) {
      typedef ::edm::Wrapper<BXVector<l1t::MuonCaloSum> > current_t;
      ((current_t*)p)->~current_t();
   }
} // end of namespace ROOT for class ::edm::Wrapper<BXVector<l1t::MuonCaloSum> >

namespace ROOT {
   // Wrappers around operator new
   static void *new_l1tcLcLEMTFOutput(void *p) {
      return  p ? ::new((::ROOT::Internal::TOperatorNewHelper*)p) ::l1t::EMTFOutput : new ::l1t::EMTFOutput;
   }
   static void *newArray_l1tcLcLEMTFOutput(Long_t nElements, void *p) {
      return p ? ::new((::ROOT::Internal::TOperatorNewHelper*)p) ::l1t::EMTFOutput[nElements] : new ::l1t::EMTFOutput[nElements];
   }
   // Wrapper around operator delete
   static void delete_l1tcLcLEMTFOutput(void *p) {
      delete ((::l1t::EMTFOutput*)p);
   }
   static void deleteArray_l1tcLcLEMTFOutput(void *p) {
      delete [] ((::l1t::EMTFOutput*)p);
   }
   static void destruct_l1tcLcLEMTFOutput(void *p) {
      typedef ::l1t::EMTFOutput current_t;
      ((current_t*)p)->~current_t();
   }
} // end of namespace ROOT for class ::l1t::EMTFOutput

namespace ROOT {
   // Wrappers around operator new
   static void *new_edmcLcLWrapperlEvectorlEl1tcLcLEMTFOutputgRsPgR(void *p) {
      return  p ? ::new((::ROOT::Internal::TOperatorNewHelper*)p) ::edm::Wrapper<vector<l1t::EMTFOutput> > : new ::edm::Wrapper<vector<l1t::EMTFOutput> >;
   }
   static void *newArray_edmcLcLWrapperlEvectorlEl1tcLcLEMTFOutputgRsPgR(Long_t nElements, void *p) {
      return p ? ::new((::ROOT::Internal::TOperatorNewHelper*)p) ::edm::Wrapper<vector<l1t::EMTFOutput> >[nElements] : new ::edm::Wrapper<vector<l1t::EMTFOutput> >[nElements];
   }
   // Wrapper around operator delete
   static void delete_edmcLcLWrapperlEvectorlEl1tcLcLEMTFOutputgRsPgR(void *p) {
      delete ((::edm::Wrapper<vector<l1t::EMTFOutput> >*)p);
   }
   static void deleteArray_edmcLcLWrapperlEvectorlEl1tcLcLEMTFOutputgRsPgR(void *p) {
      delete [] ((::edm::Wrapper<vector<l1t::EMTFOutput> >*)p);
   }
   static void destruct_edmcLcLWrapperlEvectorlEl1tcLcLEMTFOutputgRsPgR(void *p) {
      typedef ::edm::Wrapper<vector<l1t::EMTFOutput> > current_t;
      ((current_t*)p)->~current_t();
   }
} // end of namespace ROOT for class ::edm::Wrapper<vector<l1t::EMTFOutput> >

namespace ROOT {
   // Wrappers around operator new
   static void *new_l1tcLcLemtfcLcLAMC13Header(void *p) {
      return  p ? ::new((::ROOT::Internal::TOperatorNewHelper*)p) ::l1t::emtf::AMC13Header : new ::l1t::emtf::AMC13Header;
   }
   static void *newArray_l1tcLcLemtfcLcLAMC13Header(Long_t nElements, void *p) {
      return p ? ::new((::ROOT::Internal::TOperatorNewHelper*)p) ::l1t::emtf::AMC13Header[nElements] : new ::l1t::emtf::AMC13Header[nElements];
   }
   // Wrapper around operator delete
   static void delete_l1tcLcLemtfcLcLAMC13Header(void *p) {
      delete ((::l1t::emtf::AMC13Header*)p);
   }
   static void deleteArray_l1tcLcLemtfcLcLAMC13Header(void *p) {
      delete [] ((::l1t::emtf::AMC13Header*)p);
   }
   static void destruct_l1tcLcLemtfcLcLAMC13Header(void *p) {
      typedef ::l1t::emtf::AMC13Header current_t;
      ((current_t*)p)->~current_t();
   }
} // end of namespace ROOT for class ::l1t::emtf::AMC13Header

namespace ROOT {
   // Wrappers around operator new
   static void *new_l1tcLcLemtfcLcLMTF7Header(void *p) {
      return  p ? ::new((::ROOT::Internal::TOperatorNewHelper*)p) ::l1t::emtf::MTF7Header : new ::l1t::emtf::MTF7Header;
   }
   static void *newArray_l1tcLcLemtfcLcLMTF7Header(Long_t nElements, void *p) {
      return p ? ::new((::ROOT::Internal::TOperatorNewHelper*)p) ::l1t::emtf::MTF7Header[nElements] : new ::l1t::emtf::MTF7Header[nElements];
   }
   // Wrapper around operator delete
   static void delete_l1tcLcLemtfcLcLMTF7Header(void *p) {
      delete ((::l1t::emtf::MTF7Header*)p);
   }
   static void deleteArray_l1tcLcLemtfcLcLMTF7Header(void *p) {
      delete [] ((::l1t::emtf::MTF7Header*)p);
   }
   static void destruct_l1tcLcLemtfcLcLMTF7Header(void *p) {
      typedef ::l1t::emtf::MTF7Header current_t;
      ((current_t*)p)->~current_t();
   }
} // end of namespace ROOT for class ::l1t::emtf::MTF7Header

namespace ROOT {
   // Wrappers around operator new
   static void *new_l1tcLcLemtfcLcLEventHeader(void *p) {
      return  p ? ::new((::ROOT::Internal::TOperatorNewHelper*)p) ::l1t::emtf::EventHeader : new ::l1t::emtf::EventHeader;
   }
   static void *newArray_l1tcLcLemtfcLcLEventHeader(Long_t nElements, void *p) {
      return p ? ::new((::ROOT::Internal::TOperatorNewHelper*)p) ::l1t::emtf::EventHeader[nElements] : new ::l1t::emtf::EventHeader[nElements];
   }
   // Wrapper around operator delete
   static void delete_l1tcLcLemtfcLcLEventHeader(void *p) {
      delete ((::l1t::emtf::EventHeader*)p);
   }
   static void deleteArray_l1tcLcLemtfcLcLEventHeader(void *p) {
      delete [] ((::l1t::emtf::EventHeader*)p);
   }
   static void destruct_l1tcLcLemtfcLcLEventHeader(void *p) {
      typedef ::l1t::emtf::EventHeader current_t;
      ((current_t*)p)->~current_t();
   }
} // end of namespace ROOT for class ::l1t::emtf::EventHeader

namespace ROOT {
   // Wrappers around operator new
   static void *new_l1tcLcLemtfcLcLCounters(void *p) {
      return  p ? ::new((::ROOT::Internal::TOperatorNewHelper*)p) ::l1t::emtf::Counters : new ::l1t::emtf::Counters;
   }
   static void *newArray_l1tcLcLemtfcLcLCounters(Long_t nElements, void *p) {
      return p ? ::new((::ROOT::Internal::TOperatorNewHelper*)p) ::l1t::emtf::Counters[nElements] : new ::l1t::emtf::Counters[nElements];
   }
   // Wrapper around operator delete
   static void delete_l1tcLcLemtfcLcLCounters(void *p) {
      delete ((::l1t::emtf::Counters*)p);
   }
   static void deleteArray_l1tcLcLemtfcLcLCounters(void *p) {
      delete [] ((::l1t::emtf::Counters*)p);
   }
   static void destruct_l1tcLcLemtfcLcLCounters(void *p) {
      typedef ::l1t::emtf::Counters current_t;
      ((current_t*)p)->~current_t();
   }
} // end of namespace ROOT for class ::l1t::emtf::Counters

namespace ROOT {
   // Wrappers around operator new
   static void *new_l1tcLcLemtfcLcLME(void *p) {
      return  p ? ::new((::ROOT::Internal::TOperatorNewHelper*)p) ::l1t::emtf::ME : new ::l1t::emtf::ME;
   }
   static void *newArray_l1tcLcLemtfcLcLME(Long_t nElements, void *p) {
      return p ? ::new((::ROOT::Internal::TOperatorNewHelper*)p) ::l1t::emtf::ME[nElements] : new ::l1t::emtf::ME[nElements];
   }
   // Wrapper around operator delete
   static void delete_l1tcLcLemtfcLcLME(void *p) {
      delete ((::l1t::emtf::ME*)p);
   }
   static void deleteArray_l1tcLcLemtfcLcLME(void *p) {
      delete [] ((::l1t::emtf::ME*)p);
   }
   static void destruct_l1tcLcLemtfcLcLME(void *p) {
      typedef ::l1t::emtf::ME current_t;
      ((current_t*)p)->~current_t();
   }
} // end of namespace ROOT for class ::l1t::emtf::ME

namespace ROOT {
   // Wrappers around operator new
   static void *new_l1tcLcLemtfcLcLRPC(void *p) {
      return  p ? ::new((::ROOT::Internal::TOperatorNewHelper*)p) ::l1t::emtf::RPC : new ::l1t::emtf::RPC;
   }
   static void *newArray_l1tcLcLemtfcLcLRPC(Long_t nElements, void *p) {
      return p ? ::new((::ROOT::Internal::TOperatorNewHelper*)p) ::l1t::emtf::RPC[nElements] : new ::l1t::emtf::RPC[nElements];
   }
   // Wrapper around operator delete
   static void delete_l1tcLcLemtfcLcLRPC(void *p) {
      delete ((::l1t::emtf::RPC*)p);
   }
   static void deleteArray_l1tcLcLemtfcLcLRPC(void *p) {
      delete [] ((::l1t::emtf::RPC*)p);
   }
   static void destruct_l1tcLcLemtfcLcLRPC(void *p) {
      typedef ::l1t::emtf::RPC current_t;
      ((current_t*)p)->~current_t();
   }
} // end of namespace ROOT for class ::l1t::emtf::RPC

namespace ROOT {
   // Wrappers around operator new
   static void *new_l1tcLcLemtfcLcLSP(void *p) {
      return  p ? ::new((::ROOT::Internal::TOperatorNewHelper*)p) ::l1t::emtf::SP : new ::l1t::emtf::SP;
   }
   static void *newArray_l1tcLcLemtfcLcLSP(Long_t nElements, void *p) {
      return p ? ::new((::ROOT::Internal::TOperatorNewHelper*)p) ::l1t::emtf::SP[nElements] : new ::l1t::emtf::SP[nElements];
   }
   // Wrapper around operator delete
   static void delete_l1tcLcLemtfcLcLSP(void *p) {
      delete ((::l1t::emtf::SP*)p);
   }
   static void deleteArray_l1tcLcLemtfcLcLSP(void *p) {
      delete [] ((::l1t::emtf::SP*)p);
   }
   static void destruct_l1tcLcLemtfcLcLSP(void *p) {
      typedef ::l1t::emtf::SP current_t;
      ((current_t*)p)->~current_t();
   }
} // end of namespace ROOT for class ::l1t::emtf::SP

namespace ROOT {
   // Wrappers around operator new
   static void *new_l1tcLcLemtfcLcLEventTrailer(void *p) {
      return  p ? ::new((::ROOT::Internal::TOperatorNewHelper*)p) ::l1t::emtf::EventTrailer : new ::l1t::emtf::EventTrailer;
   }
   static void *newArray_l1tcLcLemtfcLcLEventTrailer(Long_t nElements, void *p) {
      return p ? ::new((::ROOT::Internal::TOperatorNewHelper*)p) ::l1t::emtf::EventTrailer[nElements] : new ::l1t::emtf::EventTrailer[nElements];
   }
   // Wrapper around operator delete
   static void delete_l1tcLcLemtfcLcLEventTrailer(void *p) {
      delete ((::l1t::emtf::EventTrailer*)p);
   }
   static void deleteArray_l1tcLcLemtfcLcLEventTrailer(void *p) {
      delete [] ((::l1t::emtf::EventTrailer*)p);
   }
   static void destruct_l1tcLcLemtfcLcLEventTrailer(void *p) {
      typedef ::l1t::emtf::EventTrailer current_t;
      ((current_t*)p)->~current_t();
   }
} // end of namespace ROOT for class ::l1t::emtf::EventTrailer

namespace ROOT {
   // Wrappers around operator new
   static void *new_l1tcLcLemtfcLcLMTF7Trailer(void *p) {
      return  p ? ::new((::ROOT::Internal::TOperatorNewHelper*)p) ::l1t::emtf::MTF7Trailer : new ::l1t::emtf::MTF7Trailer;
   }
   static void *newArray_l1tcLcLemtfcLcLMTF7Trailer(Long_t nElements, void *p) {
      return p ? ::new((::ROOT::Internal::TOperatorNewHelper*)p) ::l1t::emtf::MTF7Trailer[nElements] : new ::l1t::emtf::MTF7Trailer[nElements];
   }
   // Wrapper around operator delete
   static void delete_l1tcLcLemtfcLcLMTF7Trailer(void *p) {
      delete ((::l1t::emtf::MTF7Trailer*)p);
   }
   static void deleteArray_l1tcLcLemtfcLcLMTF7Trailer(void *p) {
      delete [] ((::l1t::emtf::MTF7Trailer*)p);
   }
   static void destruct_l1tcLcLemtfcLcLMTF7Trailer(void *p) {
      typedef ::l1t::emtf::MTF7Trailer current_t;
      ((current_t*)p)->~current_t();
   }
} // end of namespace ROOT for class ::l1t::emtf::MTF7Trailer

namespace ROOT {
   // Wrappers around operator new
   static void *new_l1tcLcLemtfcLcLAMC13Trailer(void *p) {
      return  p ? ::new((::ROOT::Internal::TOperatorNewHelper*)p) ::l1t::emtf::AMC13Trailer : new ::l1t::emtf::AMC13Trailer;
   }
   static void *newArray_l1tcLcLemtfcLcLAMC13Trailer(Long_t nElements, void *p) {
      return p ? ::new((::ROOT::Internal::TOperatorNewHelper*)p) ::l1t::emtf::AMC13Trailer[nElements] : new ::l1t::emtf::AMC13Trailer[nElements];
   }
   // Wrapper around operator delete
   static void delete_l1tcLcLemtfcLcLAMC13Trailer(void *p) {
      delete ((::l1t::emtf::AMC13Trailer*)p);
   }
   static void deleteArray_l1tcLcLemtfcLcLAMC13Trailer(void *p) {
      delete [] ((::l1t::emtf::AMC13Trailer*)p);
   }
   static void destruct_l1tcLcLemtfcLcLAMC13Trailer(void *p) {
      typedef ::l1t::emtf::AMC13Trailer current_t;
      ((current_t*)p)->~current_t();
   }
} // end of namespace ROOT for class ::l1t::emtf::AMC13Trailer

namespace ROOT {
   static TClass *vectorlEl1tcLcLemtfcLcLSPgR_Dictionary();
   static void vectorlEl1tcLcLemtfcLcLSPgR_TClassManip(TClass*);
   static void *new_vectorlEl1tcLcLemtfcLcLSPgR(void *p = 0);
   static void *newArray_vectorlEl1tcLcLemtfcLcLSPgR(Long_t size, void *p);
   static void delete_vectorlEl1tcLcLemtfcLcLSPgR(void *p);
   static void deleteArray_vectorlEl1tcLcLemtfcLcLSPgR(void *p);
   static void destruct_vectorlEl1tcLcLemtfcLcLSPgR(void *p);

   // Function generating the singleton type initializer
   static TGenericClassInfo *GenerateInitInstanceLocal(const vector<l1t::emtf::SP>*)
   {
      vector<l1t::emtf::SP> *ptr = 0;
      static ::TVirtualIsAProxy* isa_proxy = new ::TIsAProxy(typeid(vector<l1t::emtf::SP>));
      static ::ROOT::TGenericClassInfo 
         instance("vector<l1t::emtf::SP>", -2, "vector", 214,
                  typeid(vector<l1t::emtf::SP>), ::ROOT::Internal::DefineBehavior(ptr, ptr),
                  &vectorlEl1tcLcLemtfcLcLSPgR_Dictionary, isa_proxy, 4,
                  sizeof(vector<l1t::emtf::SP>) );
      instance.SetNew(&new_vectorlEl1tcLcLemtfcLcLSPgR);
      instance.SetNewArray(&newArray_vectorlEl1tcLcLemtfcLcLSPgR);
      instance.SetDelete(&delete_vectorlEl1tcLcLemtfcLcLSPgR);
      instance.SetDeleteArray(&deleteArray_vectorlEl1tcLcLemtfcLcLSPgR);
      instance.SetDestructor(&destruct_vectorlEl1tcLcLemtfcLcLSPgR);
      instance.AdoptCollectionProxyInfo(TCollectionProxyInfo::Generate(TCollectionProxyInfo::Pushback< vector<l1t::emtf::SP> >()));
      return &instance;
   }
   // Static variable to force the class initialization
   static ::ROOT::TGenericClassInfo *_R__UNIQUE_(Init) = GenerateInitInstanceLocal((const vector<l1t::emtf::SP>*)0x0); R__UseDummy(_R__UNIQUE_(Init));

   // Dictionary for non-ClassDef classes
   static TClass *vectorlEl1tcLcLemtfcLcLSPgR_Dictionary() {
      TClass* theClass =::ROOT::GenerateInitInstanceLocal((const vector<l1t::emtf::SP>*)0x0)->GetClass();
      vectorlEl1tcLcLemtfcLcLSPgR_TClassManip(theClass);
   return theClass;
   }

   static void vectorlEl1tcLcLemtfcLcLSPgR_TClassManip(TClass* ){
   }

} // end of namespace ROOT

namespace ROOT {
   // Wrappers around operator new
   static void *new_vectorlEl1tcLcLemtfcLcLSPgR(void *p) {
      return  p ? ::new((::ROOT::Internal::TOperatorNewHelper*)p) vector<l1t::emtf::SP> : new vector<l1t::emtf::SP>;
   }
   static void *newArray_vectorlEl1tcLcLemtfcLcLSPgR(Long_t nElements, void *p) {
      return p ? ::new((::ROOT::Internal::TOperatorNewHelper*)p) vector<l1t::emtf::SP>[nElements] : new vector<l1t::emtf::SP>[nElements];
   }
   // Wrapper around operator delete
   static void delete_vectorlEl1tcLcLemtfcLcLSPgR(void *p) {
      delete ((vector<l1t::emtf::SP>*)p);
   }
   static void deleteArray_vectorlEl1tcLcLemtfcLcLSPgR(void *p) {
      delete [] ((vector<l1t::emtf::SP>*)p);
   }
   static void destruct_vectorlEl1tcLcLemtfcLcLSPgR(void *p) {
      typedef vector<l1t::emtf::SP> current_t;
      ((current_t*)p)->~current_t();
   }
} // end of namespace ROOT for class vector<l1t::emtf::SP>

namespace ROOT {
   static TClass *vectorlEl1tcLcLemtfcLcLRPCgR_Dictionary();
   static void vectorlEl1tcLcLemtfcLcLRPCgR_TClassManip(TClass*);
   static void *new_vectorlEl1tcLcLemtfcLcLRPCgR(void *p = 0);
   static void *newArray_vectorlEl1tcLcLemtfcLcLRPCgR(Long_t size, void *p);
   static void delete_vectorlEl1tcLcLemtfcLcLRPCgR(void *p);
   static void deleteArray_vectorlEl1tcLcLemtfcLcLRPCgR(void *p);
   static void destruct_vectorlEl1tcLcLemtfcLcLRPCgR(void *p);

   // Function generating the singleton type initializer
   static TGenericClassInfo *GenerateInitInstanceLocal(const vector<l1t::emtf::RPC>*)
   {
      vector<l1t::emtf::RPC> *ptr = 0;
      static ::TVirtualIsAProxy* isa_proxy = new ::TIsAProxy(typeid(vector<l1t::emtf::RPC>));
      static ::ROOT::TGenericClassInfo 
         instance("vector<l1t::emtf::RPC>", -2, "vector", 214,
                  typeid(vector<l1t::emtf::RPC>), ::ROOT::Internal::DefineBehavior(ptr, ptr),
                  &vectorlEl1tcLcLemtfcLcLRPCgR_Dictionary, isa_proxy, 4,
                  sizeof(vector<l1t::emtf::RPC>) );
      instance.SetNew(&new_vectorlEl1tcLcLemtfcLcLRPCgR);
      instance.SetNewArray(&newArray_vectorlEl1tcLcLemtfcLcLRPCgR);
      instance.SetDelete(&delete_vectorlEl1tcLcLemtfcLcLRPCgR);
      instance.SetDeleteArray(&deleteArray_vectorlEl1tcLcLemtfcLcLRPCgR);
      instance.SetDestructor(&destruct_vectorlEl1tcLcLemtfcLcLRPCgR);
      instance.AdoptCollectionProxyInfo(TCollectionProxyInfo::Generate(TCollectionProxyInfo::Pushback< vector<l1t::emtf::RPC> >()));
      return &instance;
   }
   // Static variable to force the class initialization
   static ::ROOT::TGenericClassInfo *_R__UNIQUE_(Init) = GenerateInitInstanceLocal((const vector<l1t::emtf::RPC>*)0x0); R__UseDummy(_R__UNIQUE_(Init));

   // Dictionary for non-ClassDef classes
   static TClass *vectorlEl1tcLcLemtfcLcLRPCgR_Dictionary() {
      TClass* theClass =::ROOT::GenerateInitInstanceLocal((const vector<l1t::emtf::RPC>*)0x0)->GetClass();
      vectorlEl1tcLcLemtfcLcLRPCgR_TClassManip(theClass);
   return theClass;
   }

   static void vectorlEl1tcLcLemtfcLcLRPCgR_TClassManip(TClass* ){
   }

} // end of namespace ROOT

namespace ROOT {
   // Wrappers around operator new
   static void *new_vectorlEl1tcLcLemtfcLcLRPCgR(void *p) {
      return  p ? ::new((::ROOT::Internal::TOperatorNewHelper*)p) vector<l1t::emtf::RPC> : new vector<l1t::emtf::RPC>;
   }
   static void *newArray_vectorlEl1tcLcLemtfcLcLRPCgR(Long_t nElements, void *p) {
      return p ? ::new((::ROOT::Internal::TOperatorNewHelper*)p) vector<l1t::emtf::RPC>[nElements] : new vector<l1t::emtf::RPC>[nElements];
   }
   // Wrapper around operator delete
   static void delete_vectorlEl1tcLcLemtfcLcLRPCgR(void *p) {
      delete ((vector<l1t::emtf::RPC>*)p);
   }
   static void deleteArray_vectorlEl1tcLcLemtfcLcLRPCgR(void *p) {
      delete [] ((vector<l1t::emtf::RPC>*)p);
   }
   static void destruct_vectorlEl1tcLcLemtfcLcLRPCgR(void *p) {
      typedef vector<l1t::emtf::RPC> current_t;
      ((current_t*)p)->~current_t();
   }
} // end of namespace ROOT for class vector<l1t::emtf::RPC>

namespace ROOT {
   static TClass *vectorlEl1tcLcLemtfcLcLMEgR_Dictionary();
   static void vectorlEl1tcLcLemtfcLcLMEgR_TClassManip(TClass*);
   static void *new_vectorlEl1tcLcLemtfcLcLMEgR(void *p = 0);
   static void *newArray_vectorlEl1tcLcLemtfcLcLMEgR(Long_t size, void *p);
   static void delete_vectorlEl1tcLcLemtfcLcLMEgR(void *p);
   static void deleteArray_vectorlEl1tcLcLemtfcLcLMEgR(void *p);
   static void destruct_vectorlEl1tcLcLemtfcLcLMEgR(void *p);

   // Function generating the singleton type initializer
   static TGenericClassInfo *GenerateInitInstanceLocal(const vector<l1t::emtf::ME>*)
   {
      vector<l1t::emtf::ME> *ptr = 0;
      static ::TVirtualIsAProxy* isa_proxy = new ::TIsAProxy(typeid(vector<l1t::emtf::ME>));
      static ::ROOT::TGenericClassInfo 
         instance("vector<l1t::emtf::ME>", -2, "vector", 214,
                  typeid(vector<l1t::emtf::ME>), ::ROOT::Internal::DefineBehavior(ptr, ptr),
                  &vectorlEl1tcLcLemtfcLcLMEgR_Dictionary, isa_proxy, 4,
                  sizeof(vector<l1t::emtf::ME>) );
      instance.SetNew(&new_vectorlEl1tcLcLemtfcLcLMEgR);
      instance.SetNewArray(&newArray_vectorlEl1tcLcLemtfcLcLMEgR);
      instance.SetDelete(&delete_vectorlEl1tcLcLemtfcLcLMEgR);
      instance.SetDeleteArray(&deleteArray_vectorlEl1tcLcLemtfcLcLMEgR);
      instance.SetDestructor(&destruct_vectorlEl1tcLcLemtfcLcLMEgR);
      instance.AdoptCollectionProxyInfo(TCollectionProxyInfo::Generate(TCollectionProxyInfo::Pushback< vector<l1t::emtf::ME> >()));
      return &instance;
   }
   // Static variable to force the class initialization
   static ::ROOT::TGenericClassInfo *_R__UNIQUE_(Init) = GenerateInitInstanceLocal((const vector<l1t::emtf::ME>*)0x0); R__UseDummy(_R__UNIQUE_(Init));

   // Dictionary for non-ClassDef classes
   static TClass *vectorlEl1tcLcLemtfcLcLMEgR_Dictionary() {
      TClass* theClass =::ROOT::GenerateInitInstanceLocal((const vector<l1t::emtf::ME>*)0x0)->GetClass();
      vectorlEl1tcLcLemtfcLcLMEgR_TClassManip(theClass);
   return theClass;
   }

   static void vectorlEl1tcLcLemtfcLcLMEgR_TClassManip(TClass* ){
   }

} // end of namespace ROOT

namespace ROOT {
   // Wrappers around operator new
   static void *new_vectorlEl1tcLcLemtfcLcLMEgR(void *p) {
      return  p ? ::new((::ROOT::Internal::TOperatorNewHelper*)p) vector<l1t::emtf::ME> : new vector<l1t::emtf::ME>;
   }
   static void *newArray_vectorlEl1tcLcLemtfcLcLMEgR(Long_t nElements, void *p) {
      return p ? ::new((::ROOT::Internal::TOperatorNewHelper*)p) vector<l1t::emtf::ME>[nElements] : new vector<l1t::emtf::ME>[nElements];
   }
   // Wrapper around operator delete
   static void delete_vectorlEl1tcLcLemtfcLcLMEgR(void *p) {
      delete ((vector<l1t::emtf::ME>*)p);
   }
   static void deleteArray_vectorlEl1tcLcLemtfcLcLMEgR(void *p) {
      delete [] ((vector<l1t::emtf::ME>*)p);
   }
   static void destruct_vectorlEl1tcLcLemtfcLcLMEgR(void *p) {
      typedef vector<l1t::emtf::ME> current_t;
      ((current_t*)p)->~current_t();
   }
} // end of namespace ROOT for class vector<l1t::emtf::ME>

namespace ROOT {
   static TClass *vectorlEl1tcLcLEMTFOutputgR_Dictionary();
   static void vectorlEl1tcLcLEMTFOutputgR_TClassManip(TClass*);
   static void *new_vectorlEl1tcLcLEMTFOutputgR(void *p = 0);
   static void *newArray_vectorlEl1tcLcLEMTFOutputgR(Long_t size, void *p);
   static void delete_vectorlEl1tcLcLEMTFOutputgR(void *p);
   static void deleteArray_vectorlEl1tcLcLEMTFOutputgR(void *p);
   static void destruct_vectorlEl1tcLcLEMTFOutputgR(void *p);

   // Function generating the singleton type initializer
   static TGenericClassInfo *GenerateInitInstanceLocal(const vector<l1t::EMTFOutput>*)
   {
      vector<l1t::EMTFOutput> *ptr = 0;
      static ::TVirtualIsAProxy* isa_proxy = new ::TIsAProxy(typeid(vector<l1t::EMTFOutput>));
      static ::ROOT::TGenericClassInfo 
         instance("vector<l1t::EMTFOutput>", -2, "vector", 214,
                  typeid(vector<l1t::EMTFOutput>), ::ROOT::Internal::DefineBehavior(ptr, ptr),
                  &vectorlEl1tcLcLEMTFOutputgR_Dictionary, isa_proxy, 4,
                  sizeof(vector<l1t::EMTFOutput>) );
      instance.SetNew(&new_vectorlEl1tcLcLEMTFOutputgR);
      instance.SetNewArray(&newArray_vectorlEl1tcLcLEMTFOutputgR);
      instance.SetDelete(&delete_vectorlEl1tcLcLEMTFOutputgR);
      instance.SetDeleteArray(&deleteArray_vectorlEl1tcLcLEMTFOutputgR);
      instance.SetDestructor(&destruct_vectorlEl1tcLcLEMTFOutputgR);
      instance.AdoptCollectionProxyInfo(TCollectionProxyInfo::Generate(TCollectionProxyInfo::Pushback< vector<l1t::EMTFOutput> >()));
      return &instance;
   }
   // Static variable to force the class initialization
   static ::ROOT::TGenericClassInfo *_R__UNIQUE_(Init) = GenerateInitInstanceLocal((const vector<l1t::EMTFOutput>*)0x0); R__UseDummy(_R__UNIQUE_(Init));

   // Dictionary for non-ClassDef classes
   static TClass *vectorlEl1tcLcLEMTFOutputgR_Dictionary() {
      TClass* theClass =::ROOT::GenerateInitInstanceLocal((const vector<l1t::EMTFOutput>*)0x0)->GetClass();
      vectorlEl1tcLcLEMTFOutputgR_TClassManip(theClass);
   return theClass;
   }

   static void vectorlEl1tcLcLEMTFOutputgR_TClassManip(TClass* ){
   }

} // end of namespace ROOT

namespace ROOT {
   // Wrappers around operator new
   static void *new_vectorlEl1tcLcLEMTFOutputgR(void *p) {
      return  p ? ::new((::ROOT::Internal::TOperatorNewHelper*)p) vector<l1t::EMTFOutput> : new vector<l1t::EMTFOutput>;
   }
   static void *newArray_vectorlEl1tcLcLEMTFOutputgR(Long_t nElements, void *p) {
      return p ? ::new((::ROOT::Internal::TOperatorNewHelper*)p) vector<l1t::EMTFOutput>[nElements] : new vector<l1t::EMTFOutput>[nElements];
   }
   // Wrapper around operator delete
   static void delete_vectorlEl1tcLcLEMTFOutputgR(void *p) {
      delete ((vector<l1t::EMTFOutput>*)p);
   }
   static void deleteArray_vectorlEl1tcLcLEMTFOutputgR(void *p) {
      delete [] ((vector<l1t::EMTFOutput>*)p);
   }
   static void destruct_vectorlEl1tcLcLEMTFOutputgR(void *p) {
      typedef vector<l1t::EMTFOutput> current_t;
      ((current_t*)p)->~current_t();
   }
} // end of namespace ROOT for class vector<l1t::EMTFOutput>

namespace {
  void TriggerDictionaryInitialization_DataFormatsL1TMuon_xr_Impl() {
    static const char* headers[] = {
0    };
    static const char* includePaths[] = {
"/disk1/scheuch/grid/FullDestroyAnalysis2016/Wheel0/Working/test/CMSSW_8_0_2/src",
"/disk1/scheuch/grid/FullDestroyAnalysis2016/Wheel0/Working/test/CMSSW_8_0_2/poison",
"/cvmfs/cms.cern.ch/slc6_amd64_gcc493/cms/cmssw/CMSSW_8_0_2/src",
"/cvmfs/cms.cern.ch/slc6_amd64_gcc493/lcg/root/6.06.00-ikhhed4/include",
"/cvmfs/cms.cern.ch/slc6_amd64_gcc493/external/boost/1.57.0-kpegke/include",
"/cvmfs/cms.cern.ch/slc6_amd64_gcc493/external/pcre/7.9__8.33/include",
"/cvmfs/cms.cern.ch/slc6_amd64_gcc493/external/bz2lib/1.0.5/include",
"/cvmfs/cms.cern.ch/slc6_amd64_gcc493/external/libuuid/2.22.2/include",
"/cvmfs/cms.cern.ch/slc6_amd64_gcc493/external/python/2.7.6-kpegke/include/python2.7",
"/cvmfs/cms.cern.ch/slc6_amd64_gcc493/external/tbb/44_20151115oss/include",
"/cvmfs/cms.cern.ch/slc6_amd64_gcc493/external/zlib/1.2.8/include",
"/cvmfs/cms.cern.ch/slc6_amd64_gcc493/lcg/root/6.06.00-ikhhed4/include",
"/disk1/scheuch/grid/FullDestroyAnalysis2016/Wheel0/Working/test/CMSSW_8_0_2/",
0
    };
    static const char* fwdDeclCode = R"DICTFWDDCLS(
#line 1 "DataFormatsL1TMuon_xr dictionary forward declarations' payload"
#pragma clang diagnostic ignored "-Wkeyword-compat"
#pragma clang diagnostic ignored "-Wignored-attributes"
#pragma clang diagnostic ignored "-Wreturn-type-c-linkage"
extern int __Cling_Autoloading_Map;
namespace l1t{class __attribute__((annotate("$clingAutoload$DataFormats/L1TMuon/interface/RegionalMuonCand.h")))  RegionalMuonCand;}
template <class T> class __attribute__((annotate("$clingAutoload$DataFormats/L1TMuon/interface/MuonCaloSumFwd.h")))  BXVector;

namespace edm{template <typename T> class __attribute__((annotate("$clingAutoload$DataFormats/Common/interface/Wrapper.h")))  Wrapper;
}
namespace l1t{class __attribute__((annotate("$clingAutoload$DataFormats/L1TMuon/interface/MuonCaloSum.h")))  MuonCaloSum;}
namespace l1t{class __attribute__((annotate("$clingAutoload$DataFormats/L1TMuon/interface/EMTFOutput.h")))  EMTFOutput;}
namespace std{template <typename _Tp> class __attribute__((annotate("$clingAutoload$string")))  allocator;
}
namespace l1t{namespace emtf{class __attribute__((annotate("$clingAutoload$DataFormats/L1TMuon/interface/EMTFOutput.h")))  AMC13Header;}}
namespace l1t{namespace emtf{class __attribute__((annotate("$clingAutoload$DataFormats/L1TMuon/interface/EMTFOutput.h")))  MTF7Header;}}
namespace l1t{namespace emtf{class __attribute__((annotate("$clingAutoload$DataFormats/L1TMuon/interface/EMTFOutput.h")))  EventHeader;}}
namespace l1t{namespace emtf{class __attribute__((annotate("$clingAutoload$DataFormats/L1TMuon/interface/EMTFOutput.h")))  Counters;}}
namespace l1t{namespace emtf{class __attribute__((annotate("$clingAutoload$DataFormats/L1TMuon/interface/EMTFOutput.h")))  ME;}}
namespace l1t{namespace emtf{class __attribute__((annotate("$clingAutoload$DataFormats/L1TMuon/interface/EMTFOutput.h")))  RPC;}}
namespace l1t{namespace emtf{class __attribute__((annotate("$clingAutoload$DataFormats/L1TMuon/interface/EMTFOutput.h")))  SP;}}
namespace l1t{namespace emtf{class __attribute__((annotate("$clingAutoload$DataFormats/L1TMuon/interface/EMTFOutput.h")))  EventTrailer;}}
namespace l1t{namespace emtf{class __attribute__((annotate("$clingAutoload$DataFormats/L1TMuon/interface/EMTFOutput.h")))  MTF7Trailer;}}
namespace l1t{namespace emtf{class __attribute__((annotate("$clingAutoload$DataFormats/L1TMuon/interface/EMTFOutput.h")))  AMC13Trailer;}}
namespace l1t{typedef BXVector<l1t::MuonCaloSum> MuonCaloSumBxCollection __attribute__((annotate("$clingAutoload$DataFormats/L1TMuon/interface/MuonCaloSumFwd.h"))) ;}
namespace l1t{typedef BXVector<l1t::RegionalMuonCand> RegionalMuonCandBxCollection __attribute__((annotate("$clingAutoload$DataFormats/L1TMuon/interface/RegionalMuonCandFwd.h"))) ;}
)DICTFWDDCLS";
    static const char* payloadCode = R"DICTPAYLOAD(
#line 1 "DataFormatsL1TMuon_xr dictionary payload"

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
#include "DataFormats/Common/interface/Wrapper.h"
#include "DataFormats/Common/interface/RefToBase.h"

#include "DataFormats/L1TMuon/interface/MuonCaloSumFwd.h"
#include "DataFormats/L1TMuon/interface/MuonCaloSum.h"
#include "DataFormats/L1TMuon/interface/RegionalMuonCandFwd.h"
#include "DataFormats/L1TMuon/interface/RegionalMuonCand.h"
#include "DataFormats/L1TMuon/interface/EMTFOutput.h"

namespace {
  struct dictionary {
    l1t::MuonCaloSumBxCollection caloSum;
    edm::Wrapper<l1t::MuonCaloSumBxCollection> caloSumWrap;

    l1t::RegionalMuonCandBxCollection regCand;
    edm::Wrapper<l1t::RegionalMuonCandBxCollection> regCandWrap;
   
    l1t::EMTFOutputCollection emtfOutput;
    edm::Wrapper<l1t::EMTFOutputCollection> emtfOutputWrap;
   
  };
}



#undef  _BACKWARD_BACKWARD_WARNING_H
)DICTPAYLOAD";
    static const char* classesHeaders[]={
"BXVector<l1t::MuonCaloSum>", payloadCode, "@",
"BXVector<l1t::RegionalMuonCand>", payloadCode, "@",
"edm::Wrapper<BXVector<l1t::MuonCaloSum> >", payloadCode, "@",
"edm::Wrapper<BXVector<l1t::RegionalMuonCand> >", payloadCode, "@",
"edm::Wrapper<l1t::EMTFOutputCollection>", payloadCode, "@",
"edm::Wrapper<l1t::MuonCaloSumBxCollection>", payloadCode, "@",
"edm::Wrapper<l1t::RegionalMuonCandBxCollection>", payloadCode, "@",
"edm::Wrapper<vector<l1t::EMTFOutput> >", payloadCode, "@",
"l1t::EMTFOutput", payloadCode, "@",
"l1t::EMTFOutputCollection", payloadCode, "@",
"l1t::MuonCaloSum", payloadCode, "@",
"l1t::MuonCaloSumBxCollection", payloadCode, "@",
"l1t::RegionalMuonCand", payloadCode, "@",
"l1t::RegionalMuonCandBxCollection", payloadCode, "@",
"l1t::emtf::AMC13Header", payloadCode, "@",
"l1t::emtf::AMC13Trailer", payloadCode, "@",
"l1t::emtf::Counters", payloadCode, "@",
"l1t::emtf::EventHeader", payloadCode, "@",
"l1t::emtf::EventTrailer", payloadCode, "@",
"l1t::emtf::ME", payloadCode, "@",
"l1t::emtf::MECollection", payloadCode, "@",
"l1t::emtf::MTF7Header", payloadCode, "@",
"l1t::emtf::MTF7Trailer", payloadCode, "@",
"l1t::emtf::RPC", payloadCode, "@",
"l1t::emtf::RPCCollection", payloadCode, "@",
"l1t::emtf::SP", payloadCode, "@",
"l1t::emtf::SPCollection", payloadCode, "@",
nullptr};

    static bool isInitialized = false;
    if (!isInitialized) {
      TROOT::RegisterModule("DataFormatsL1TMuon_xr",
        headers, includePaths, payloadCode, fwdDeclCode,
        TriggerDictionaryInitialization_DataFormatsL1TMuon_xr_Impl, {}, classesHeaders);
      isInitialized = true;
    }
  }
  static struct DictInit {
    DictInit() {
      TriggerDictionaryInitialization_DataFormatsL1TMuon_xr_Impl();
    }
  } __TheDictionaryInitializer;
}
void TriggerDictionaryInitialization_DataFormatsL1TMuon_xr() {
  TriggerDictionaryInitialization_DataFormatsL1TMuon_xr_Impl();
}
