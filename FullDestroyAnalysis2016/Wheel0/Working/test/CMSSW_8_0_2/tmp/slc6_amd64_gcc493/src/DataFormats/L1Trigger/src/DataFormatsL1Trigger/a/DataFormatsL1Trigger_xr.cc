// Do NOT change. Changes will be lost next time file is generated

#define R__DICTIONARY_FILENAME tmpdIslc6_amd64_gcc493dIsrcdIDataFormatsdIL1TriggerdIsrcdIDataFormatsL1TriggerdIadIDataFormatsL1Trigger_xr

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
#include "src/DataFormats/L1Trigger/src/classes.h"

// Header files passed via #pragma extra_include

namespace ROOT {
   static TClass *l1tcLcLL1Candidate_Dictionary();
   static void l1tcLcLL1Candidate_TClassManip(TClass*);
   static void *new_l1tcLcLL1Candidate(void *p = 0);
   static void *newArray_l1tcLcLL1Candidate(Long_t size, void *p);
   static void delete_l1tcLcLL1Candidate(void *p);
   static void deleteArray_l1tcLcLL1Candidate(void *p);
   static void destruct_l1tcLcLL1Candidate(void *p);

   // Function generating the singleton type initializer
   static TGenericClassInfo *GenerateInitInstanceLocal(const ::l1t::L1Candidate*)
   {
      ::l1t::L1Candidate *ptr = 0;
      static ::TVirtualIsAProxy* isa_proxy = new ::TIsAProxy(typeid(::l1t::L1Candidate));
      static ::ROOT::TGenericClassInfo 
         instance("l1t::L1Candidate", 12, "DataFormats/L1Trigger/interface/L1Candidate.h", 16,
                  typeid(::l1t::L1Candidate), ::ROOT::Internal::DefineBehavior(ptr, ptr),
                  &l1tcLcLL1Candidate_Dictionary, isa_proxy, 8,
                  sizeof(::l1t::L1Candidate) );
      instance.SetNew(&new_l1tcLcLL1Candidate);
      instance.SetNewArray(&newArray_l1tcLcLL1Candidate);
      instance.SetDelete(&delete_l1tcLcLL1Candidate);
      instance.SetDeleteArray(&deleteArray_l1tcLcLL1Candidate);
      instance.SetDestructor(&destruct_l1tcLcLL1Candidate);
      return &instance;
   }
   TGenericClassInfo *GenerateInitInstance(const ::l1t::L1Candidate*)
   {
      return GenerateInitInstanceLocal((::l1t::L1Candidate*)0);
   }
   // Static variable to force the class initialization
   static ::ROOT::TGenericClassInfo *_R__UNIQUE_(Init) = GenerateInitInstanceLocal((const ::l1t::L1Candidate*)0x0); R__UseDummy(_R__UNIQUE_(Init));

   // Dictionary for non-ClassDef classes
   static TClass *l1tcLcLL1Candidate_Dictionary() {
      TClass* theClass =::ROOT::GenerateInitInstanceLocal((const ::l1t::L1Candidate*)0x0)->GetClass();
      l1tcLcLL1Candidate_TClassManip(theClass);
   return theClass;
   }

   static void l1tcLcLL1Candidate_TClassManip(TClass* ){
   }

} // end of namespace ROOT

namespace ROOT {
   static TClass *BXVectorlEl1tcLcLL1CandidategR_Dictionary();
   static void BXVectorlEl1tcLcLL1CandidategR_TClassManip(TClass*);
   static void *new_BXVectorlEl1tcLcLL1CandidategR(void *p = 0);
   static void *newArray_BXVectorlEl1tcLcLL1CandidategR(Long_t size, void *p);
   static void delete_BXVectorlEl1tcLcLL1CandidategR(void *p);
   static void deleteArray_BXVectorlEl1tcLcLL1CandidategR(void *p);
   static void destruct_BXVectorlEl1tcLcLL1CandidategR(void *p);

   // Function generating the singleton type initializer
   static TGenericClassInfo *GenerateInitInstanceLocal(const ::BXVector<l1t::L1Candidate>*)
   {
      ::BXVector<l1t::L1Candidate> *ptr = 0;
      static ::TVirtualIsAProxy* isa_proxy = new ::TIsAProxy(typeid(::BXVector<l1t::L1Candidate>));
      static ::ROOT::TGenericClassInfo 
         instance("BXVector<l1t::L1Candidate>", "DataFormats/L1Trigger/interface/BXVector.h", 15,
                  typeid(::BXVector<l1t::L1Candidate>), ::ROOT::Internal::DefineBehavior(ptr, ptr),
                  &BXVectorlEl1tcLcLL1CandidategR_Dictionary, isa_proxy, 0,
                  sizeof(::BXVector<l1t::L1Candidate>) );
      instance.SetNew(&new_BXVectorlEl1tcLcLL1CandidategR);
      instance.SetNewArray(&newArray_BXVectorlEl1tcLcLL1CandidategR);
      instance.SetDelete(&delete_BXVectorlEl1tcLcLL1CandidategR);
      instance.SetDeleteArray(&deleteArray_BXVectorlEl1tcLcLL1CandidategR);
      instance.SetDestructor(&destruct_BXVectorlEl1tcLcLL1CandidategR);

      ::ROOT::AddClassAlternate("BXVector<l1t::L1Candidate>","l1t::L1CandidateBxCollection");
      return &instance;
   }
   TGenericClassInfo *GenerateInitInstance(const ::BXVector<l1t::L1Candidate>*)
   {
      return GenerateInitInstanceLocal((::BXVector<l1t::L1Candidate>*)0);
   }
   // Static variable to force the class initialization
   static ::ROOT::TGenericClassInfo *_R__UNIQUE_(Init) = GenerateInitInstanceLocal((const ::BXVector<l1t::L1Candidate>*)0x0); R__UseDummy(_R__UNIQUE_(Init));

   // Dictionary for non-ClassDef classes
   static TClass *BXVectorlEl1tcLcLL1CandidategR_Dictionary() {
      TClass* theClass =::ROOT::GenerateInitInstanceLocal((const ::BXVector<l1t::L1Candidate>*)0x0)->GetClass();
      BXVectorlEl1tcLcLL1CandidategR_TClassManip(theClass);
   return theClass;
   }

   static void BXVectorlEl1tcLcLL1CandidategR_TClassManip(TClass* ){
   }

} // end of namespace ROOT

namespace ROOT {
   static TClass *edmcLcLWrapperlEBXVectorlEl1tcLcLL1CandidategRsPgR_Dictionary();
   static void edmcLcLWrapperlEBXVectorlEl1tcLcLL1CandidategRsPgR_TClassManip(TClass*);
   static void *new_edmcLcLWrapperlEBXVectorlEl1tcLcLL1CandidategRsPgR(void *p = 0);
   static void *newArray_edmcLcLWrapperlEBXVectorlEl1tcLcLL1CandidategRsPgR(Long_t size, void *p);
   static void delete_edmcLcLWrapperlEBXVectorlEl1tcLcLL1CandidategRsPgR(void *p);
   static void deleteArray_edmcLcLWrapperlEBXVectorlEl1tcLcLL1CandidategRsPgR(void *p);
   static void destruct_edmcLcLWrapperlEBXVectorlEl1tcLcLL1CandidategRsPgR(void *p);

   // Function generating the singleton type initializer
   static TGenericClassInfo *GenerateInitInstanceLocal(const ::edm::Wrapper<BXVector<l1t::L1Candidate> >*)
   {
      ::edm::Wrapper<BXVector<l1t::L1Candidate> > *ptr = 0;
      static ::TVirtualIsAProxy* isa_proxy = new ::TIsAProxy(typeid(::edm::Wrapper<BXVector<l1t::L1Candidate> >));
      static ::ROOT::TGenericClassInfo 
         instance("edm::Wrapper<BXVector<l1t::L1Candidate> >", ::edm::Wrapper<BXVector<l1t::L1Candidate> >::Class_Version(), "DataFormats/Common/interface/Wrapper.h", 25,
                  typeid(::edm::Wrapper<BXVector<l1t::L1Candidate> >), ::ROOT::Internal::DefineBehavior(ptr, ptr),
                  &edmcLcLWrapperlEBXVectorlEl1tcLcLL1CandidategRsPgR_Dictionary, isa_proxy, 0,
                  sizeof(::edm::Wrapper<BXVector<l1t::L1Candidate> >) );
      instance.SetNew(&new_edmcLcLWrapperlEBXVectorlEl1tcLcLL1CandidategRsPgR);
      instance.SetNewArray(&newArray_edmcLcLWrapperlEBXVectorlEl1tcLcLL1CandidategRsPgR);
      instance.SetDelete(&delete_edmcLcLWrapperlEBXVectorlEl1tcLcLL1CandidategRsPgR);
      instance.SetDeleteArray(&deleteArray_edmcLcLWrapperlEBXVectorlEl1tcLcLL1CandidategRsPgR);
      instance.SetDestructor(&destruct_edmcLcLWrapperlEBXVectorlEl1tcLcLL1CandidategRsPgR);

      ::ROOT::AddClassAlternate("edm::Wrapper<BXVector<l1t::L1Candidate> >","edm::Wrapper<l1t::L1CandidateBxCollection>");
      return &instance;
   }
   TGenericClassInfo *GenerateInitInstance(const ::edm::Wrapper<BXVector<l1t::L1Candidate> >*)
   {
      return GenerateInitInstanceLocal((::edm::Wrapper<BXVector<l1t::L1Candidate> >*)0);
   }
   // Static variable to force the class initialization
   static ::ROOT::TGenericClassInfo *_R__UNIQUE_(Init) = GenerateInitInstanceLocal((const ::edm::Wrapper<BXVector<l1t::L1Candidate> >*)0x0); R__UseDummy(_R__UNIQUE_(Init));

   // Dictionary for non-ClassDef classes
   static TClass *edmcLcLWrapperlEBXVectorlEl1tcLcLL1CandidategRsPgR_Dictionary() {
      TClass* theClass =::ROOT::GenerateInitInstanceLocal((const ::edm::Wrapper<BXVector<l1t::L1Candidate> >*)0x0)->GetClass();
      edmcLcLWrapperlEBXVectorlEl1tcLcLL1CandidategRsPgR_TClassManip(theClass);
   return theClass;
   }

   static void edmcLcLWrapperlEBXVectorlEl1tcLcLL1CandidategRsPgR_TClassManip(TClass* ){
   }

} // end of namespace ROOT

namespace ROOT {
   static TClass *edmcLcLReflEBXVectorlEl1tcLcLL1CandidategRcOl1tcLcLL1CandidatecOedmcLcLrefhelpercLcLFindUsingAdvancelEBXVectorlEl1tcLcLL1CandidategRcOl1tcLcLL1CandidategRsPgR_Dictionary();
   static void edmcLcLReflEBXVectorlEl1tcLcLL1CandidategRcOl1tcLcLL1CandidatecOedmcLcLrefhelpercLcLFindUsingAdvancelEBXVectorlEl1tcLcLL1CandidategRcOl1tcLcLL1CandidategRsPgR_TClassManip(TClass*);
   static void *new_edmcLcLReflEBXVectorlEl1tcLcLL1CandidategRcOl1tcLcLL1CandidatecOedmcLcLrefhelpercLcLFindUsingAdvancelEBXVectorlEl1tcLcLL1CandidategRcOl1tcLcLL1CandidategRsPgR(void *p = 0);
   static void *newArray_edmcLcLReflEBXVectorlEl1tcLcLL1CandidategRcOl1tcLcLL1CandidatecOedmcLcLrefhelpercLcLFindUsingAdvancelEBXVectorlEl1tcLcLL1CandidategRcOl1tcLcLL1CandidategRsPgR(Long_t size, void *p);
   static void delete_edmcLcLReflEBXVectorlEl1tcLcLL1CandidategRcOl1tcLcLL1CandidatecOedmcLcLrefhelpercLcLFindUsingAdvancelEBXVectorlEl1tcLcLL1CandidategRcOl1tcLcLL1CandidategRsPgR(void *p);
   static void deleteArray_edmcLcLReflEBXVectorlEl1tcLcLL1CandidategRcOl1tcLcLL1CandidatecOedmcLcLrefhelpercLcLFindUsingAdvancelEBXVectorlEl1tcLcLL1CandidategRcOl1tcLcLL1CandidategRsPgR(void *p);
   static void destruct_edmcLcLReflEBXVectorlEl1tcLcLL1CandidategRcOl1tcLcLL1CandidatecOedmcLcLrefhelpercLcLFindUsingAdvancelEBXVectorlEl1tcLcLL1CandidategRcOl1tcLcLL1CandidategRsPgR(void *p);

   // Function generating the singleton type initializer
   static TGenericClassInfo *GenerateInitInstanceLocal(const ::edm::Ref<BXVector<l1t::L1Candidate>,l1t::L1Candidate,edm::refhelper::FindUsingAdvance<BXVector<l1t::L1Candidate>,l1t::L1Candidate> >*)
   {
      ::edm::Ref<BXVector<l1t::L1Candidate>,l1t::L1Candidate,edm::refhelper::FindUsingAdvance<BXVector<l1t::L1Candidate>,l1t::L1Candidate> > *ptr = 0;
      static ::TVirtualIsAProxy* isa_proxy = new ::TIsAProxy(typeid(::edm::Ref<BXVector<l1t::L1Candidate>,l1t::L1Candidate,edm::refhelper::FindUsingAdvance<BXVector<l1t::L1Candidate>,l1t::L1Candidate> >));
      static ::ROOT::TGenericClassInfo 
         instance("edm::Ref<BXVector<l1t::L1Candidate>,l1t::L1Candidate,edm::refhelper::FindUsingAdvance<BXVector<l1t::L1Candidate>,l1t::L1Candidate> >", ::edm::Ref<BXVector<l1t::L1Candidate>,l1t::L1Candidate,edm::refhelper::FindUsingAdvance<BXVector<l1t::L1Candidate>,l1t::L1Candidate> >::Class_Version(), "DataFormats/Common/interface/Ref.h", 152,
                  typeid(::edm::Ref<BXVector<l1t::L1Candidate>,l1t::L1Candidate,edm::refhelper::FindUsingAdvance<BXVector<l1t::L1Candidate>,l1t::L1Candidate> >), ::ROOT::Internal::DefineBehavior(ptr, ptr),
                  &edmcLcLReflEBXVectorlEl1tcLcLL1CandidategRcOl1tcLcLL1CandidatecOedmcLcLrefhelpercLcLFindUsingAdvancelEBXVectorlEl1tcLcLL1CandidategRcOl1tcLcLL1CandidategRsPgR_Dictionary, isa_proxy, 0,
                  sizeof(::edm::Ref<BXVector<l1t::L1Candidate>,l1t::L1Candidate,edm::refhelper::FindUsingAdvance<BXVector<l1t::L1Candidate>,l1t::L1Candidate> >) );
      instance.SetNew(&new_edmcLcLReflEBXVectorlEl1tcLcLL1CandidategRcOl1tcLcLL1CandidatecOedmcLcLrefhelpercLcLFindUsingAdvancelEBXVectorlEl1tcLcLL1CandidategRcOl1tcLcLL1CandidategRsPgR);
      instance.SetNewArray(&newArray_edmcLcLReflEBXVectorlEl1tcLcLL1CandidategRcOl1tcLcLL1CandidatecOedmcLcLrefhelpercLcLFindUsingAdvancelEBXVectorlEl1tcLcLL1CandidategRcOl1tcLcLL1CandidategRsPgR);
      instance.SetDelete(&delete_edmcLcLReflEBXVectorlEl1tcLcLL1CandidategRcOl1tcLcLL1CandidatecOedmcLcLrefhelpercLcLFindUsingAdvancelEBXVectorlEl1tcLcLL1CandidategRcOl1tcLcLL1CandidategRsPgR);
      instance.SetDeleteArray(&deleteArray_edmcLcLReflEBXVectorlEl1tcLcLL1CandidategRcOl1tcLcLL1CandidatecOedmcLcLrefhelpercLcLFindUsingAdvancelEBXVectorlEl1tcLcLL1CandidategRcOl1tcLcLL1CandidategRsPgR);
      instance.SetDestructor(&destruct_edmcLcLReflEBXVectorlEl1tcLcLL1CandidategRcOl1tcLcLL1CandidatecOedmcLcLrefhelpercLcLFindUsingAdvancelEBXVectorlEl1tcLcLL1CandidategRcOl1tcLcLL1CandidategRsPgR);

      ::ROOT::AddClassAlternate("edm::Ref<BXVector<l1t::L1Candidate>,l1t::L1Candidate,edm::refhelper::FindUsingAdvance<BXVector<l1t::L1Candidate>,l1t::L1Candidate> >","l1t::L1CandidateRef");
      return &instance;
   }
   TGenericClassInfo *GenerateInitInstance(const ::edm::Ref<BXVector<l1t::L1Candidate>,l1t::L1Candidate,edm::refhelper::FindUsingAdvance<BXVector<l1t::L1Candidate>,l1t::L1Candidate> >*)
   {
      return GenerateInitInstanceLocal((::edm::Ref<BXVector<l1t::L1Candidate>,l1t::L1Candidate,edm::refhelper::FindUsingAdvance<BXVector<l1t::L1Candidate>,l1t::L1Candidate> >*)0);
   }
   // Static variable to force the class initialization
   static ::ROOT::TGenericClassInfo *_R__UNIQUE_(Init) = GenerateInitInstanceLocal((const ::edm::Ref<BXVector<l1t::L1Candidate>,l1t::L1Candidate,edm::refhelper::FindUsingAdvance<BXVector<l1t::L1Candidate>,l1t::L1Candidate> >*)0x0); R__UseDummy(_R__UNIQUE_(Init));

   // Dictionary for non-ClassDef classes
   static TClass *edmcLcLReflEBXVectorlEl1tcLcLL1CandidategRcOl1tcLcLL1CandidatecOedmcLcLrefhelpercLcLFindUsingAdvancelEBXVectorlEl1tcLcLL1CandidategRcOl1tcLcLL1CandidategRsPgR_Dictionary() {
      TClass* theClass =::ROOT::GenerateInitInstanceLocal((const ::edm::Ref<BXVector<l1t::L1Candidate>,l1t::L1Candidate,edm::refhelper::FindUsingAdvance<BXVector<l1t::L1Candidate>,l1t::L1Candidate> >*)0x0)->GetClass();
      edmcLcLReflEBXVectorlEl1tcLcLL1CandidategRcOl1tcLcLL1CandidatecOedmcLcLrefhelpercLcLFindUsingAdvancelEBXVectorlEl1tcLcLL1CandidategRcOl1tcLcLL1CandidategRsPgR_TClassManip(theClass);
   return theClass;
   }

   static void edmcLcLReflEBXVectorlEl1tcLcLL1CandidategRcOl1tcLcLL1CandidatecOedmcLcLrefhelpercLcLFindUsingAdvancelEBXVectorlEl1tcLcLL1CandidategRcOl1tcLcLL1CandidategRsPgR_TClassManip(TClass* ){
   }

} // end of namespace ROOT

namespace ROOT {
   static TClass *edmcLcLWrapperlEedmcLcLReflEBXVectorlEl1tcLcLL1CandidategRcOl1tcLcLL1CandidatecOedmcLcLrefhelpercLcLFindUsingAdvancelEBXVectorlEl1tcLcLL1CandidategRcOl1tcLcLL1CandidategRsPgRsPgR_Dictionary();
   static void edmcLcLWrapperlEedmcLcLReflEBXVectorlEl1tcLcLL1CandidategRcOl1tcLcLL1CandidatecOedmcLcLrefhelpercLcLFindUsingAdvancelEBXVectorlEl1tcLcLL1CandidategRcOl1tcLcLL1CandidategRsPgRsPgR_TClassManip(TClass*);
   static void *new_edmcLcLWrapperlEedmcLcLReflEBXVectorlEl1tcLcLL1CandidategRcOl1tcLcLL1CandidatecOedmcLcLrefhelpercLcLFindUsingAdvancelEBXVectorlEl1tcLcLL1CandidategRcOl1tcLcLL1CandidategRsPgRsPgR(void *p = 0);
   static void *newArray_edmcLcLWrapperlEedmcLcLReflEBXVectorlEl1tcLcLL1CandidategRcOl1tcLcLL1CandidatecOedmcLcLrefhelpercLcLFindUsingAdvancelEBXVectorlEl1tcLcLL1CandidategRcOl1tcLcLL1CandidategRsPgRsPgR(Long_t size, void *p);
   static void delete_edmcLcLWrapperlEedmcLcLReflEBXVectorlEl1tcLcLL1CandidategRcOl1tcLcLL1CandidatecOedmcLcLrefhelpercLcLFindUsingAdvancelEBXVectorlEl1tcLcLL1CandidategRcOl1tcLcLL1CandidategRsPgRsPgR(void *p);
   static void deleteArray_edmcLcLWrapperlEedmcLcLReflEBXVectorlEl1tcLcLL1CandidategRcOl1tcLcLL1CandidatecOedmcLcLrefhelpercLcLFindUsingAdvancelEBXVectorlEl1tcLcLL1CandidategRcOl1tcLcLL1CandidategRsPgRsPgR(void *p);
   static void destruct_edmcLcLWrapperlEedmcLcLReflEBXVectorlEl1tcLcLL1CandidategRcOl1tcLcLL1CandidatecOedmcLcLrefhelpercLcLFindUsingAdvancelEBXVectorlEl1tcLcLL1CandidategRcOl1tcLcLL1CandidategRsPgRsPgR(void *p);

   // Function generating the singleton type initializer
   static TGenericClassInfo *GenerateInitInstanceLocal(const ::edm::Wrapper<edm::Ref<BXVector<l1t::L1Candidate>,l1t::L1Candidate,edm::refhelper::FindUsingAdvance<BXVector<l1t::L1Candidate>,l1t::L1Candidate> > >*)
   {
      ::edm::Wrapper<edm::Ref<BXVector<l1t::L1Candidate>,l1t::L1Candidate,edm::refhelper::FindUsingAdvance<BXVector<l1t::L1Candidate>,l1t::L1Candidate> > > *ptr = 0;
      static ::TVirtualIsAProxy* isa_proxy = new ::TIsAProxy(typeid(::edm::Wrapper<edm::Ref<BXVector<l1t::L1Candidate>,l1t::L1Candidate,edm::refhelper::FindUsingAdvance<BXVector<l1t::L1Candidate>,l1t::L1Candidate> > >));
      static ::ROOT::TGenericClassInfo 
         instance("edm::Wrapper<edm::Ref<BXVector<l1t::L1Candidate>,l1t::L1Candidate,edm::refhelper::FindUsingAdvance<BXVector<l1t::L1Candidate>,l1t::L1Candidate> > >", ::edm::Wrapper<edm::Ref<BXVector<l1t::L1Candidate>,l1t::L1Candidate,edm::refhelper::FindUsingAdvance<BXVector<l1t::L1Candidate>,l1t::L1Candidate> > >::Class_Version(), "DataFormats/Common/interface/Wrapper.h", 25,
                  typeid(::edm::Wrapper<edm::Ref<BXVector<l1t::L1Candidate>,l1t::L1Candidate,edm::refhelper::FindUsingAdvance<BXVector<l1t::L1Candidate>,l1t::L1Candidate> > >), ::ROOT::Internal::DefineBehavior(ptr, ptr),
                  &edmcLcLWrapperlEedmcLcLReflEBXVectorlEl1tcLcLL1CandidategRcOl1tcLcLL1CandidatecOedmcLcLrefhelpercLcLFindUsingAdvancelEBXVectorlEl1tcLcLL1CandidategRcOl1tcLcLL1CandidategRsPgRsPgR_Dictionary, isa_proxy, 0,
                  sizeof(::edm::Wrapper<edm::Ref<BXVector<l1t::L1Candidate>,l1t::L1Candidate,edm::refhelper::FindUsingAdvance<BXVector<l1t::L1Candidate>,l1t::L1Candidate> > >) );
      instance.SetNew(&new_edmcLcLWrapperlEedmcLcLReflEBXVectorlEl1tcLcLL1CandidategRcOl1tcLcLL1CandidatecOedmcLcLrefhelpercLcLFindUsingAdvancelEBXVectorlEl1tcLcLL1CandidategRcOl1tcLcLL1CandidategRsPgRsPgR);
      instance.SetNewArray(&newArray_edmcLcLWrapperlEedmcLcLReflEBXVectorlEl1tcLcLL1CandidategRcOl1tcLcLL1CandidatecOedmcLcLrefhelpercLcLFindUsingAdvancelEBXVectorlEl1tcLcLL1CandidategRcOl1tcLcLL1CandidategRsPgRsPgR);
      instance.SetDelete(&delete_edmcLcLWrapperlEedmcLcLReflEBXVectorlEl1tcLcLL1CandidategRcOl1tcLcLL1CandidatecOedmcLcLrefhelpercLcLFindUsingAdvancelEBXVectorlEl1tcLcLL1CandidategRcOl1tcLcLL1CandidategRsPgRsPgR);
      instance.SetDeleteArray(&deleteArray_edmcLcLWrapperlEedmcLcLReflEBXVectorlEl1tcLcLL1CandidategRcOl1tcLcLL1CandidatecOedmcLcLrefhelpercLcLFindUsingAdvancelEBXVectorlEl1tcLcLL1CandidategRcOl1tcLcLL1CandidategRsPgRsPgR);
      instance.SetDestructor(&destruct_edmcLcLWrapperlEedmcLcLReflEBXVectorlEl1tcLcLL1CandidategRcOl1tcLcLL1CandidatecOedmcLcLrefhelpercLcLFindUsingAdvancelEBXVectorlEl1tcLcLL1CandidategRcOl1tcLcLL1CandidategRsPgRsPgR);

      ::ROOT::AddClassAlternate("edm::Wrapper<edm::Ref<BXVector<l1t::L1Candidate>,l1t::L1Candidate,edm::refhelper::FindUsingAdvance<BXVector<l1t::L1Candidate>,l1t::L1Candidate> > >","edm::Wrapper<l1t::L1CandidateRef>");
      return &instance;
   }
   TGenericClassInfo *GenerateInitInstance(const ::edm::Wrapper<edm::Ref<BXVector<l1t::L1Candidate>,l1t::L1Candidate,edm::refhelper::FindUsingAdvance<BXVector<l1t::L1Candidate>,l1t::L1Candidate> > >*)
   {
      return GenerateInitInstanceLocal((::edm::Wrapper<edm::Ref<BXVector<l1t::L1Candidate>,l1t::L1Candidate,edm::refhelper::FindUsingAdvance<BXVector<l1t::L1Candidate>,l1t::L1Candidate> > >*)0);
   }
   // Static variable to force the class initialization
   static ::ROOT::TGenericClassInfo *_R__UNIQUE_(Init) = GenerateInitInstanceLocal((const ::edm::Wrapper<edm::Ref<BXVector<l1t::L1Candidate>,l1t::L1Candidate,edm::refhelper::FindUsingAdvance<BXVector<l1t::L1Candidate>,l1t::L1Candidate> > >*)0x0); R__UseDummy(_R__UNIQUE_(Init));

   // Dictionary for non-ClassDef classes
   static TClass *edmcLcLWrapperlEedmcLcLReflEBXVectorlEl1tcLcLL1CandidategRcOl1tcLcLL1CandidatecOedmcLcLrefhelpercLcLFindUsingAdvancelEBXVectorlEl1tcLcLL1CandidategRcOl1tcLcLL1CandidategRsPgRsPgR_Dictionary() {
      TClass* theClass =::ROOT::GenerateInitInstanceLocal((const ::edm::Wrapper<edm::Ref<BXVector<l1t::L1Candidate>,l1t::L1Candidate,edm::refhelper::FindUsingAdvance<BXVector<l1t::L1Candidate>,l1t::L1Candidate> > >*)0x0)->GetClass();
      edmcLcLWrapperlEedmcLcLReflEBXVectorlEl1tcLcLL1CandidategRcOl1tcLcLL1CandidatecOedmcLcLrefhelpercLcLFindUsingAdvancelEBXVectorlEl1tcLcLL1CandidategRcOl1tcLcLL1CandidategRsPgRsPgR_TClassManip(theClass);
   return theClass;
   }

   static void edmcLcLWrapperlEedmcLcLReflEBXVectorlEl1tcLcLL1CandidategRcOl1tcLcLL1CandidatecOedmcLcLrefhelpercLcLFindUsingAdvancelEBXVectorlEl1tcLcLL1CandidategRcOl1tcLcLL1CandidategRsPgRsPgR_TClassManip(TClass* ){
   }

} // end of namespace ROOT

namespace ROOT {
   static TClass *edmcLcLRefVectorlEBXVectorlEl1tcLcLL1CandidategRcOl1tcLcLL1CandidatecOedmcLcLrefhelpercLcLFindUsingAdvancelEBXVectorlEl1tcLcLL1CandidategRcOl1tcLcLL1CandidategRsPgR_Dictionary();
   static void edmcLcLRefVectorlEBXVectorlEl1tcLcLL1CandidategRcOl1tcLcLL1CandidatecOedmcLcLrefhelpercLcLFindUsingAdvancelEBXVectorlEl1tcLcLL1CandidategRcOl1tcLcLL1CandidategRsPgR_TClassManip(TClass*);
   static void *new_edmcLcLRefVectorlEBXVectorlEl1tcLcLL1CandidategRcOl1tcLcLL1CandidatecOedmcLcLrefhelpercLcLFindUsingAdvancelEBXVectorlEl1tcLcLL1CandidategRcOl1tcLcLL1CandidategRsPgR(void *p = 0);
   static void *newArray_edmcLcLRefVectorlEBXVectorlEl1tcLcLL1CandidategRcOl1tcLcLL1CandidatecOedmcLcLrefhelpercLcLFindUsingAdvancelEBXVectorlEl1tcLcLL1CandidategRcOl1tcLcLL1CandidategRsPgR(Long_t size, void *p);
   static void delete_edmcLcLRefVectorlEBXVectorlEl1tcLcLL1CandidategRcOl1tcLcLL1CandidatecOedmcLcLrefhelpercLcLFindUsingAdvancelEBXVectorlEl1tcLcLL1CandidategRcOl1tcLcLL1CandidategRsPgR(void *p);
   static void deleteArray_edmcLcLRefVectorlEBXVectorlEl1tcLcLL1CandidategRcOl1tcLcLL1CandidatecOedmcLcLrefhelpercLcLFindUsingAdvancelEBXVectorlEl1tcLcLL1CandidategRcOl1tcLcLL1CandidategRsPgR(void *p);
   static void destruct_edmcLcLRefVectorlEBXVectorlEl1tcLcLL1CandidategRcOl1tcLcLL1CandidatecOedmcLcLrefhelpercLcLFindUsingAdvancelEBXVectorlEl1tcLcLL1CandidategRcOl1tcLcLL1CandidategRsPgR(void *p);

   // Function generating the singleton type initializer
   static TGenericClassInfo *GenerateInitInstanceLocal(const ::edm::RefVector<BXVector<l1t::L1Candidate>,l1t::L1Candidate,edm::refhelper::FindUsingAdvance<BXVector<l1t::L1Candidate>,l1t::L1Candidate> >*)
   {
      ::edm::RefVector<BXVector<l1t::L1Candidate>,l1t::L1Candidate,edm::refhelper::FindUsingAdvance<BXVector<l1t::L1Candidate>,l1t::L1Candidate> > *ptr = 0;
      static ::TVirtualIsAProxy* isa_proxy = new ::TIsAProxy(typeid(::edm::RefVector<BXVector<l1t::L1Candidate>,l1t::L1Candidate,edm::refhelper::FindUsingAdvance<BXVector<l1t::L1Candidate>,l1t::L1Candidate> >));
      static ::ROOT::TGenericClassInfo 
         instance("edm::RefVector<BXVector<l1t::L1Candidate>,l1t::L1Candidate,edm::refhelper::FindUsingAdvance<BXVector<l1t::L1Candidate>,l1t::L1Candidate> >", ::edm::RefVector<BXVector<l1t::L1Candidate>,l1t::L1Candidate,edm::refhelper::FindUsingAdvance<BXVector<l1t::L1Candidate>,l1t::L1Candidate> >::Class_Version(), "DataFormats/Common/interface/RefVector.h", 33,
                  typeid(::edm::RefVector<BXVector<l1t::L1Candidate>,l1t::L1Candidate,edm::refhelper::FindUsingAdvance<BXVector<l1t::L1Candidate>,l1t::L1Candidate> >), ::ROOT::Internal::DefineBehavior(ptr, ptr),
                  &edmcLcLRefVectorlEBXVectorlEl1tcLcLL1CandidategRcOl1tcLcLL1CandidatecOedmcLcLrefhelpercLcLFindUsingAdvancelEBXVectorlEl1tcLcLL1CandidategRcOl1tcLcLL1CandidategRsPgR_Dictionary, isa_proxy, 0,
                  sizeof(::edm::RefVector<BXVector<l1t::L1Candidate>,l1t::L1Candidate,edm::refhelper::FindUsingAdvance<BXVector<l1t::L1Candidate>,l1t::L1Candidate> >) );
      instance.SetNew(&new_edmcLcLRefVectorlEBXVectorlEl1tcLcLL1CandidategRcOl1tcLcLL1CandidatecOedmcLcLrefhelpercLcLFindUsingAdvancelEBXVectorlEl1tcLcLL1CandidategRcOl1tcLcLL1CandidategRsPgR);
      instance.SetNewArray(&newArray_edmcLcLRefVectorlEBXVectorlEl1tcLcLL1CandidategRcOl1tcLcLL1CandidatecOedmcLcLrefhelpercLcLFindUsingAdvancelEBXVectorlEl1tcLcLL1CandidategRcOl1tcLcLL1CandidategRsPgR);
      instance.SetDelete(&delete_edmcLcLRefVectorlEBXVectorlEl1tcLcLL1CandidategRcOl1tcLcLL1CandidatecOedmcLcLrefhelpercLcLFindUsingAdvancelEBXVectorlEl1tcLcLL1CandidategRcOl1tcLcLL1CandidategRsPgR);
      instance.SetDeleteArray(&deleteArray_edmcLcLRefVectorlEBXVectorlEl1tcLcLL1CandidategRcOl1tcLcLL1CandidatecOedmcLcLrefhelpercLcLFindUsingAdvancelEBXVectorlEl1tcLcLL1CandidategRcOl1tcLcLL1CandidategRsPgR);
      instance.SetDestructor(&destruct_edmcLcLRefVectorlEBXVectorlEl1tcLcLL1CandidategRcOl1tcLcLL1CandidatecOedmcLcLrefhelpercLcLFindUsingAdvancelEBXVectorlEl1tcLcLL1CandidategRcOl1tcLcLL1CandidategRsPgR);

      ::ROOT::AddClassAlternate("edm::RefVector<BXVector<l1t::L1Candidate>,l1t::L1Candidate,edm::refhelper::FindUsingAdvance<BXVector<l1t::L1Candidate>,l1t::L1Candidate> >","l1t::L1CandidateRefVector");
      return &instance;
   }
   TGenericClassInfo *GenerateInitInstance(const ::edm::RefVector<BXVector<l1t::L1Candidate>,l1t::L1Candidate,edm::refhelper::FindUsingAdvance<BXVector<l1t::L1Candidate>,l1t::L1Candidate> >*)
   {
      return GenerateInitInstanceLocal((::edm::RefVector<BXVector<l1t::L1Candidate>,l1t::L1Candidate,edm::refhelper::FindUsingAdvance<BXVector<l1t::L1Candidate>,l1t::L1Candidate> >*)0);
   }
   // Static variable to force the class initialization
   static ::ROOT::TGenericClassInfo *_R__UNIQUE_(Init) = GenerateInitInstanceLocal((const ::edm::RefVector<BXVector<l1t::L1Candidate>,l1t::L1Candidate,edm::refhelper::FindUsingAdvance<BXVector<l1t::L1Candidate>,l1t::L1Candidate> >*)0x0); R__UseDummy(_R__UNIQUE_(Init));

   // Dictionary for non-ClassDef classes
   static TClass *edmcLcLRefVectorlEBXVectorlEl1tcLcLL1CandidategRcOl1tcLcLL1CandidatecOedmcLcLrefhelpercLcLFindUsingAdvancelEBXVectorlEl1tcLcLL1CandidategRcOl1tcLcLL1CandidategRsPgR_Dictionary() {
      TClass* theClass =::ROOT::GenerateInitInstanceLocal((const ::edm::RefVector<BXVector<l1t::L1Candidate>,l1t::L1Candidate,edm::refhelper::FindUsingAdvance<BXVector<l1t::L1Candidate>,l1t::L1Candidate> >*)0x0)->GetClass();
      edmcLcLRefVectorlEBXVectorlEl1tcLcLL1CandidategRcOl1tcLcLL1CandidatecOedmcLcLrefhelpercLcLFindUsingAdvancelEBXVectorlEl1tcLcLL1CandidategRcOl1tcLcLL1CandidategRsPgR_TClassManip(theClass);
   return theClass;
   }

   static void edmcLcLRefVectorlEBXVectorlEl1tcLcLL1CandidategRcOl1tcLcLL1CandidatecOedmcLcLrefhelpercLcLFindUsingAdvancelEBXVectorlEl1tcLcLL1CandidategRcOl1tcLcLL1CandidategRsPgR_TClassManip(TClass* ){
   }

} // end of namespace ROOT

namespace ROOT {
   static TClass *edmcLcLWrapperlEedmcLcLRefVectorlEBXVectorlEl1tcLcLL1CandidategRcOl1tcLcLL1CandidatecOedmcLcLrefhelpercLcLFindUsingAdvancelEBXVectorlEl1tcLcLL1CandidategRcOl1tcLcLL1CandidategRsPgRsPgR_Dictionary();
   static void edmcLcLWrapperlEedmcLcLRefVectorlEBXVectorlEl1tcLcLL1CandidategRcOl1tcLcLL1CandidatecOedmcLcLrefhelpercLcLFindUsingAdvancelEBXVectorlEl1tcLcLL1CandidategRcOl1tcLcLL1CandidategRsPgRsPgR_TClassManip(TClass*);
   static void *new_edmcLcLWrapperlEedmcLcLRefVectorlEBXVectorlEl1tcLcLL1CandidategRcOl1tcLcLL1CandidatecOedmcLcLrefhelpercLcLFindUsingAdvancelEBXVectorlEl1tcLcLL1CandidategRcOl1tcLcLL1CandidategRsPgRsPgR(void *p = 0);
   static void *newArray_edmcLcLWrapperlEedmcLcLRefVectorlEBXVectorlEl1tcLcLL1CandidategRcOl1tcLcLL1CandidatecOedmcLcLrefhelpercLcLFindUsingAdvancelEBXVectorlEl1tcLcLL1CandidategRcOl1tcLcLL1CandidategRsPgRsPgR(Long_t size, void *p);
   static void delete_edmcLcLWrapperlEedmcLcLRefVectorlEBXVectorlEl1tcLcLL1CandidategRcOl1tcLcLL1CandidatecOedmcLcLrefhelpercLcLFindUsingAdvancelEBXVectorlEl1tcLcLL1CandidategRcOl1tcLcLL1CandidategRsPgRsPgR(void *p);
   static void deleteArray_edmcLcLWrapperlEedmcLcLRefVectorlEBXVectorlEl1tcLcLL1CandidategRcOl1tcLcLL1CandidatecOedmcLcLrefhelpercLcLFindUsingAdvancelEBXVectorlEl1tcLcLL1CandidategRcOl1tcLcLL1CandidategRsPgRsPgR(void *p);
   static void destruct_edmcLcLWrapperlEedmcLcLRefVectorlEBXVectorlEl1tcLcLL1CandidategRcOl1tcLcLL1CandidatecOedmcLcLrefhelpercLcLFindUsingAdvancelEBXVectorlEl1tcLcLL1CandidategRcOl1tcLcLL1CandidategRsPgRsPgR(void *p);

   // Function generating the singleton type initializer
   static TGenericClassInfo *GenerateInitInstanceLocal(const ::edm::Wrapper<edm::RefVector<BXVector<l1t::L1Candidate>,l1t::L1Candidate,edm::refhelper::FindUsingAdvance<BXVector<l1t::L1Candidate>,l1t::L1Candidate> > >*)
   {
      ::edm::Wrapper<edm::RefVector<BXVector<l1t::L1Candidate>,l1t::L1Candidate,edm::refhelper::FindUsingAdvance<BXVector<l1t::L1Candidate>,l1t::L1Candidate> > > *ptr = 0;
      static ::TVirtualIsAProxy* isa_proxy = new ::TIsAProxy(typeid(::edm::Wrapper<edm::RefVector<BXVector<l1t::L1Candidate>,l1t::L1Candidate,edm::refhelper::FindUsingAdvance<BXVector<l1t::L1Candidate>,l1t::L1Candidate> > >));
      static ::ROOT::TGenericClassInfo 
         instance("edm::Wrapper<edm::RefVector<BXVector<l1t::L1Candidate>,l1t::L1Candidate,edm::refhelper::FindUsingAdvance<BXVector<l1t::L1Candidate>,l1t::L1Candidate> > >", ::edm::Wrapper<edm::RefVector<BXVector<l1t::L1Candidate>,l1t::L1Candidate,edm::refhelper::FindUsingAdvance<BXVector<l1t::L1Candidate>,l1t::L1Candidate> > >::Class_Version(), "DataFormats/Common/interface/Wrapper.h", 25,
                  typeid(::edm::Wrapper<edm::RefVector<BXVector<l1t::L1Candidate>,l1t::L1Candidate,edm::refhelper::FindUsingAdvance<BXVector<l1t::L1Candidate>,l1t::L1Candidate> > >), ::ROOT::Internal::DefineBehavior(ptr, ptr),
                  &edmcLcLWrapperlEedmcLcLRefVectorlEBXVectorlEl1tcLcLL1CandidategRcOl1tcLcLL1CandidatecOedmcLcLrefhelpercLcLFindUsingAdvancelEBXVectorlEl1tcLcLL1CandidategRcOl1tcLcLL1CandidategRsPgRsPgR_Dictionary, isa_proxy, 0,
                  sizeof(::edm::Wrapper<edm::RefVector<BXVector<l1t::L1Candidate>,l1t::L1Candidate,edm::refhelper::FindUsingAdvance<BXVector<l1t::L1Candidate>,l1t::L1Candidate> > >) );
      instance.SetNew(&new_edmcLcLWrapperlEedmcLcLRefVectorlEBXVectorlEl1tcLcLL1CandidategRcOl1tcLcLL1CandidatecOedmcLcLrefhelpercLcLFindUsingAdvancelEBXVectorlEl1tcLcLL1CandidategRcOl1tcLcLL1CandidategRsPgRsPgR);
      instance.SetNewArray(&newArray_edmcLcLWrapperlEedmcLcLRefVectorlEBXVectorlEl1tcLcLL1CandidategRcOl1tcLcLL1CandidatecOedmcLcLrefhelpercLcLFindUsingAdvancelEBXVectorlEl1tcLcLL1CandidategRcOl1tcLcLL1CandidategRsPgRsPgR);
      instance.SetDelete(&delete_edmcLcLWrapperlEedmcLcLRefVectorlEBXVectorlEl1tcLcLL1CandidategRcOl1tcLcLL1CandidatecOedmcLcLrefhelpercLcLFindUsingAdvancelEBXVectorlEl1tcLcLL1CandidategRcOl1tcLcLL1CandidategRsPgRsPgR);
      instance.SetDeleteArray(&deleteArray_edmcLcLWrapperlEedmcLcLRefVectorlEBXVectorlEl1tcLcLL1CandidategRcOl1tcLcLL1CandidatecOedmcLcLrefhelpercLcLFindUsingAdvancelEBXVectorlEl1tcLcLL1CandidategRcOl1tcLcLL1CandidategRsPgRsPgR);
      instance.SetDestructor(&destruct_edmcLcLWrapperlEedmcLcLRefVectorlEBXVectorlEl1tcLcLL1CandidategRcOl1tcLcLL1CandidatecOedmcLcLrefhelpercLcLFindUsingAdvancelEBXVectorlEl1tcLcLL1CandidategRcOl1tcLcLL1CandidategRsPgRsPgR);

      ::ROOT::AddClassAlternate("edm::Wrapper<edm::RefVector<BXVector<l1t::L1Candidate>,l1t::L1Candidate,edm::refhelper::FindUsingAdvance<BXVector<l1t::L1Candidate>,l1t::L1Candidate> > >","edm::Wrapper<l1t::L1CandidateRefVector>");
      return &instance;
   }
   TGenericClassInfo *GenerateInitInstance(const ::edm::Wrapper<edm::RefVector<BXVector<l1t::L1Candidate>,l1t::L1Candidate,edm::refhelper::FindUsingAdvance<BXVector<l1t::L1Candidate>,l1t::L1Candidate> > >*)
   {
      return GenerateInitInstanceLocal((::edm::Wrapper<edm::RefVector<BXVector<l1t::L1Candidate>,l1t::L1Candidate,edm::refhelper::FindUsingAdvance<BXVector<l1t::L1Candidate>,l1t::L1Candidate> > >*)0);
   }
   // Static variable to force the class initialization
   static ::ROOT::TGenericClassInfo *_R__UNIQUE_(Init) = GenerateInitInstanceLocal((const ::edm::Wrapper<edm::RefVector<BXVector<l1t::L1Candidate>,l1t::L1Candidate,edm::refhelper::FindUsingAdvance<BXVector<l1t::L1Candidate>,l1t::L1Candidate> > >*)0x0); R__UseDummy(_R__UNIQUE_(Init));

   // Dictionary for non-ClassDef classes
   static TClass *edmcLcLWrapperlEedmcLcLRefVectorlEBXVectorlEl1tcLcLL1CandidategRcOl1tcLcLL1CandidatecOedmcLcLrefhelpercLcLFindUsingAdvancelEBXVectorlEl1tcLcLL1CandidategRcOl1tcLcLL1CandidategRsPgRsPgR_Dictionary() {
      TClass* theClass =::ROOT::GenerateInitInstanceLocal((const ::edm::Wrapper<edm::RefVector<BXVector<l1t::L1Candidate>,l1t::L1Candidate,edm::refhelper::FindUsingAdvance<BXVector<l1t::L1Candidate>,l1t::L1Candidate> > >*)0x0)->GetClass();
      edmcLcLWrapperlEedmcLcLRefVectorlEBXVectorlEl1tcLcLL1CandidategRcOl1tcLcLL1CandidatecOedmcLcLrefhelpercLcLFindUsingAdvancelEBXVectorlEl1tcLcLL1CandidategRcOl1tcLcLL1CandidategRsPgRsPgR_TClassManip(theClass);
   return theClass;
   }

   static void edmcLcLWrapperlEedmcLcLRefVectorlEBXVectorlEl1tcLcLL1CandidategRcOl1tcLcLL1CandidatecOedmcLcLrefhelpercLcLFindUsingAdvancelEBXVectorlEl1tcLcLL1CandidategRcOl1tcLcLL1CandidategRsPgRsPgR_TClassManip(TClass* ){
   }

} // end of namespace ROOT

namespace ROOT {
   static TClass *edmcLcLWrapperlEvectorlEedmcLcLReflEBXVectorlEl1tcLcLL1CandidategRcOl1tcLcLL1CandidatecOedmcLcLrefhelpercLcLFindUsingAdvancelEBXVectorlEl1tcLcLL1CandidategRcOl1tcLcLL1CandidategRsPgRsPgRsPgR_Dictionary();
   static void edmcLcLWrapperlEvectorlEedmcLcLReflEBXVectorlEl1tcLcLL1CandidategRcOl1tcLcLL1CandidatecOedmcLcLrefhelpercLcLFindUsingAdvancelEBXVectorlEl1tcLcLL1CandidategRcOl1tcLcLL1CandidategRsPgRsPgRsPgR_TClassManip(TClass*);
   static void *new_edmcLcLWrapperlEvectorlEedmcLcLReflEBXVectorlEl1tcLcLL1CandidategRcOl1tcLcLL1CandidatecOedmcLcLrefhelpercLcLFindUsingAdvancelEBXVectorlEl1tcLcLL1CandidategRcOl1tcLcLL1CandidategRsPgRsPgRsPgR(void *p = 0);
   static void *newArray_edmcLcLWrapperlEvectorlEedmcLcLReflEBXVectorlEl1tcLcLL1CandidategRcOl1tcLcLL1CandidatecOedmcLcLrefhelpercLcLFindUsingAdvancelEBXVectorlEl1tcLcLL1CandidategRcOl1tcLcLL1CandidategRsPgRsPgRsPgR(Long_t size, void *p);
   static void delete_edmcLcLWrapperlEvectorlEedmcLcLReflEBXVectorlEl1tcLcLL1CandidategRcOl1tcLcLL1CandidatecOedmcLcLrefhelpercLcLFindUsingAdvancelEBXVectorlEl1tcLcLL1CandidategRcOl1tcLcLL1CandidategRsPgRsPgRsPgR(void *p);
   static void deleteArray_edmcLcLWrapperlEvectorlEedmcLcLReflEBXVectorlEl1tcLcLL1CandidategRcOl1tcLcLL1CandidatecOedmcLcLrefhelpercLcLFindUsingAdvancelEBXVectorlEl1tcLcLL1CandidategRcOl1tcLcLL1CandidategRsPgRsPgRsPgR(void *p);
   static void destruct_edmcLcLWrapperlEvectorlEedmcLcLReflEBXVectorlEl1tcLcLL1CandidategRcOl1tcLcLL1CandidatecOedmcLcLrefhelpercLcLFindUsingAdvancelEBXVectorlEl1tcLcLL1CandidategRcOl1tcLcLL1CandidategRsPgRsPgRsPgR(void *p);

   // Function generating the singleton type initializer
   static TGenericClassInfo *GenerateInitInstanceLocal(const ::edm::Wrapper<vector<edm::Ref<BXVector<l1t::L1Candidate>,l1t::L1Candidate,edm::refhelper::FindUsingAdvance<BXVector<l1t::L1Candidate>,l1t::L1Candidate> > > >*)
   {
      ::edm::Wrapper<vector<edm::Ref<BXVector<l1t::L1Candidate>,l1t::L1Candidate,edm::refhelper::FindUsingAdvance<BXVector<l1t::L1Candidate>,l1t::L1Candidate> > > > *ptr = 0;
      static ::TVirtualIsAProxy* isa_proxy = new ::TIsAProxy(typeid(::edm::Wrapper<vector<edm::Ref<BXVector<l1t::L1Candidate>,l1t::L1Candidate,edm::refhelper::FindUsingAdvance<BXVector<l1t::L1Candidate>,l1t::L1Candidate> > > >));
      static ::ROOT::TGenericClassInfo 
         instance("edm::Wrapper<vector<edm::Ref<BXVector<l1t::L1Candidate>,l1t::L1Candidate,edm::refhelper::FindUsingAdvance<BXVector<l1t::L1Candidate>,l1t::L1Candidate> > > >", ::edm::Wrapper<vector<edm::Ref<BXVector<l1t::L1Candidate>,l1t::L1Candidate,edm::refhelper::FindUsingAdvance<BXVector<l1t::L1Candidate>,l1t::L1Candidate> > > >::Class_Version(), "DataFormats/Common/interface/Wrapper.h", 25,
                  typeid(::edm::Wrapper<vector<edm::Ref<BXVector<l1t::L1Candidate>,l1t::L1Candidate,edm::refhelper::FindUsingAdvance<BXVector<l1t::L1Candidate>,l1t::L1Candidate> > > >), ::ROOT::Internal::DefineBehavior(ptr, ptr),
                  &edmcLcLWrapperlEvectorlEedmcLcLReflEBXVectorlEl1tcLcLL1CandidategRcOl1tcLcLL1CandidatecOedmcLcLrefhelpercLcLFindUsingAdvancelEBXVectorlEl1tcLcLL1CandidategRcOl1tcLcLL1CandidategRsPgRsPgRsPgR_Dictionary, isa_proxy, 0,
                  sizeof(::edm::Wrapper<vector<edm::Ref<BXVector<l1t::L1Candidate>,l1t::L1Candidate,edm::refhelper::FindUsingAdvance<BXVector<l1t::L1Candidate>,l1t::L1Candidate> > > >) );
      instance.SetNew(&new_edmcLcLWrapperlEvectorlEedmcLcLReflEBXVectorlEl1tcLcLL1CandidategRcOl1tcLcLL1CandidatecOedmcLcLrefhelpercLcLFindUsingAdvancelEBXVectorlEl1tcLcLL1CandidategRcOl1tcLcLL1CandidategRsPgRsPgRsPgR);
      instance.SetNewArray(&newArray_edmcLcLWrapperlEvectorlEedmcLcLReflEBXVectorlEl1tcLcLL1CandidategRcOl1tcLcLL1CandidatecOedmcLcLrefhelpercLcLFindUsingAdvancelEBXVectorlEl1tcLcLL1CandidategRcOl1tcLcLL1CandidategRsPgRsPgRsPgR);
      instance.SetDelete(&delete_edmcLcLWrapperlEvectorlEedmcLcLReflEBXVectorlEl1tcLcLL1CandidategRcOl1tcLcLL1CandidatecOedmcLcLrefhelpercLcLFindUsingAdvancelEBXVectorlEl1tcLcLL1CandidategRcOl1tcLcLL1CandidategRsPgRsPgRsPgR);
      instance.SetDeleteArray(&deleteArray_edmcLcLWrapperlEvectorlEedmcLcLReflEBXVectorlEl1tcLcLL1CandidategRcOl1tcLcLL1CandidatecOedmcLcLrefhelpercLcLFindUsingAdvancelEBXVectorlEl1tcLcLL1CandidategRcOl1tcLcLL1CandidategRsPgRsPgRsPgR);
      instance.SetDestructor(&destruct_edmcLcLWrapperlEvectorlEedmcLcLReflEBXVectorlEl1tcLcLL1CandidategRcOl1tcLcLL1CandidatecOedmcLcLrefhelpercLcLFindUsingAdvancelEBXVectorlEl1tcLcLL1CandidategRcOl1tcLcLL1CandidategRsPgRsPgRsPgR);

      ::ROOT::AddClassAlternate("edm::Wrapper<vector<edm::Ref<BXVector<l1t::L1Candidate>,l1t::L1Candidate,edm::refhelper::FindUsingAdvance<BXVector<l1t::L1Candidate>,l1t::L1Candidate> > > >","edm::Wrapper<l1t::L1CandidateVectorRef>");
      return &instance;
   }
   TGenericClassInfo *GenerateInitInstance(const ::edm::Wrapper<vector<edm::Ref<BXVector<l1t::L1Candidate>,l1t::L1Candidate,edm::refhelper::FindUsingAdvance<BXVector<l1t::L1Candidate>,l1t::L1Candidate> > > >*)
   {
      return GenerateInitInstanceLocal((::edm::Wrapper<vector<edm::Ref<BXVector<l1t::L1Candidate>,l1t::L1Candidate,edm::refhelper::FindUsingAdvance<BXVector<l1t::L1Candidate>,l1t::L1Candidate> > > >*)0);
   }
   // Static variable to force the class initialization
   static ::ROOT::TGenericClassInfo *_R__UNIQUE_(Init) = GenerateInitInstanceLocal((const ::edm::Wrapper<vector<edm::Ref<BXVector<l1t::L1Candidate>,l1t::L1Candidate,edm::refhelper::FindUsingAdvance<BXVector<l1t::L1Candidate>,l1t::L1Candidate> > > >*)0x0); R__UseDummy(_R__UNIQUE_(Init));

   // Dictionary for non-ClassDef classes
   static TClass *edmcLcLWrapperlEvectorlEedmcLcLReflEBXVectorlEl1tcLcLL1CandidategRcOl1tcLcLL1CandidatecOedmcLcLrefhelpercLcLFindUsingAdvancelEBXVectorlEl1tcLcLL1CandidategRcOl1tcLcLL1CandidategRsPgRsPgRsPgR_Dictionary() {
      TClass* theClass =::ROOT::GenerateInitInstanceLocal((const ::edm::Wrapper<vector<edm::Ref<BXVector<l1t::L1Candidate>,l1t::L1Candidate,edm::refhelper::FindUsingAdvance<BXVector<l1t::L1Candidate>,l1t::L1Candidate> > > >*)0x0)->GetClass();
      edmcLcLWrapperlEvectorlEedmcLcLReflEBXVectorlEl1tcLcLL1CandidategRcOl1tcLcLL1CandidatecOedmcLcLrefhelpercLcLFindUsingAdvancelEBXVectorlEl1tcLcLL1CandidategRcOl1tcLcLL1CandidategRsPgRsPgRsPgR_TClassManip(theClass);
   return theClass;
   }

   static void edmcLcLWrapperlEvectorlEedmcLcLReflEBXVectorlEl1tcLcLL1CandidategRcOl1tcLcLL1CandidatecOedmcLcLrefhelpercLcLFindUsingAdvancelEBXVectorlEl1tcLcLL1CandidategRcOl1tcLcLL1CandidategRsPgRsPgRsPgR_TClassManip(TClass* ){
   }

} // end of namespace ROOT

namespace ROOT {
   static TClass *l1tcLcLJet_Dictionary();
   static void l1tcLcLJet_TClassManip(TClass*);
   static void *new_l1tcLcLJet(void *p = 0);
   static void *newArray_l1tcLcLJet(Long_t size, void *p);
   static void delete_l1tcLcLJet(void *p);
   static void deleteArray_l1tcLcLJet(void *p);
   static void destruct_l1tcLcLJet(void *p);

   // Function generating the singleton type initializer
   static TGenericClassInfo *GenerateInitInstanceLocal(const ::l1t::Jet*)
   {
      ::l1t::Jet *ptr = 0;
      static ::TVirtualIsAProxy* isa_proxy = new ::TIsAProxy(typeid(::l1t::Jet));
      static ::ROOT::TGenericClassInfo 
         instance("l1t::Jet", 13, "DataFormats/L1Trigger/interface/Jet.h", 16,
                  typeid(::l1t::Jet), ::ROOT::Internal::DefineBehavior(ptr, ptr),
                  &l1tcLcLJet_Dictionary, isa_proxy, 8,
                  sizeof(::l1t::Jet) );
      instance.SetNew(&new_l1tcLcLJet);
      instance.SetNewArray(&newArray_l1tcLcLJet);
      instance.SetDelete(&delete_l1tcLcLJet);
      instance.SetDeleteArray(&deleteArray_l1tcLcLJet);
      instance.SetDestructor(&destruct_l1tcLcLJet);
      return &instance;
   }
   TGenericClassInfo *GenerateInitInstance(const ::l1t::Jet*)
   {
      return GenerateInitInstanceLocal((::l1t::Jet*)0);
   }
   // Static variable to force the class initialization
   static ::ROOT::TGenericClassInfo *_R__UNIQUE_(Init) = GenerateInitInstanceLocal((const ::l1t::Jet*)0x0); R__UseDummy(_R__UNIQUE_(Init));

   // Dictionary for non-ClassDef classes
   static TClass *l1tcLcLJet_Dictionary() {
      TClass* theClass =::ROOT::GenerateInitInstanceLocal((const ::l1t::Jet*)0x0)->GetClass();
      l1tcLcLJet_TClassManip(theClass);
   return theClass;
   }

   static void l1tcLcLJet_TClassManip(TClass* ){
   }

} // end of namespace ROOT

namespace ROOT {
   static TClass *BXVectorlEl1tcLcLJetgR_Dictionary();
   static void BXVectorlEl1tcLcLJetgR_TClassManip(TClass*);
   static void *new_BXVectorlEl1tcLcLJetgR(void *p = 0);
   static void *newArray_BXVectorlEl1tcLcLJetgR(Long_t size, void *p);
   static void delete_BXVectorlEl1tcLcLJetgR(void *p);
   static void deleteArray_BXVectorlEl1tcLcLJetgR(void *p);
   static void destruct_BXVectorlEl1tcLcLJetgR(void *p);

   // Function generating the singleton type initializer
   static TGenericClassInfo *GenerateInitInstanceLocal(const ::BXVector<l1t::Jet>*)
   {
      ::BXVector<l1t::Jet> *ptr = 0;
      static ::TVirtualIsAProxy* isa_proxy = new ::TIsAProxy(typeid(::BXVector<l1t::Jet>));
      static ::ROOT::TGenericClassInfo 
         instance("BXVector<l1t::Jet>", "DataFormats/L1Trigger/interface/BXVector.h", 15,
                  typeid(::BXVector<l1t::Jet>), ::ROOT::Internal::DefineBehavior(ptr, ptr),
                  &BXVectorlEl1tcLcLJetgR_Dictionary, isa_proxy, 0,
                  sizeof(::BXVector<l1t::Jet>) );
      instance.SetNew(&new_BXVectorlEl1tcLcLJetgR);
      instance.SetNewArray(&newArray_BXVectorlEl1tcLcLJetgR);
      instance.SetDelete(&delete_BXVectorlEl1tcLcLJetgR);
      instance.SetDeleteArray(&deleteArray_BXVectorlEl1tcLcLJetgR);
      instance.SetDestructor(&destruct_BXVectorlEl1tcLcLJetgR);

      ::ROOT::AddClassAlternate("BXVector<l1t::Jet>","l1t::JetBxCollection");
      return &instance;
   }
   TGenericClassInfo *GenerateInitInstance(const ::BXVector<l1t::Jet>*)
   {
      return GenerateInitInstanceLocal((::BXVector<l1t::Jet>*)0);
   }
   // Static variable to force the class initialization
   static ::ROOT::TGenericClassInfo *_R__UNIQUE_(Init) = GenerateInitInstanceLocal((const ::BXVector<l1t::Jet>*)0x0); R__UseDummy(_R__UNIQUE_(Init));

   // Dictionary for non-ClassDef classes
   static TClass *BXVectorlEl1tcLcLJetgR_Dictionary() {
      TClass* theClass =::ROOT::GenerateInitInstanceLocal((const ::BXVector<l1t::Jet>*)0x0)->GetClass();
      BXVectorlEl1tcLcLJetgR_TClassManip(theClass);
   return theClass;
   }

   static void BXVectorlEl1tcLcLJetgR_TClassManip(TClass* ){
   }

} // end of namespace ROOT

namespace ROOT {
   static TClass *edmcLcLWrapperlEBXVectorlEl1tcLcLJetgRsPgR_Dictionary();
   static void edmcLcLWrapperlEBXVectorlEl1tcLcLJetgRsPgR_TClassManip(TClass*);
   static void *new_edmcLcLWrapperlEBXVectorlEl1tcLcLJetgRsPgR(void *p = 0);
   static void *newArray_edmcLcLWrapperlEBXVectorlEl1tcLcLJetgRsPgR(Long_t size, void *p);
   static void delete_edmcLcLWrapperlEBXVectorlEl1tcLcLJetgRsPgR(void *p);
   static void deleteArray_edmcLcLWrapperlEBXVectorlEl1tcLcLJetgRsPgR(void *p);
   static void destruct_edmcLcLWrapperlEBXVectorlEl1tcLcLJetgRsPgR(void *p);

   // Function generating the singleton type initializer
   static TGenericClassInfo *GenerateInitInstanceLocal(const ::edm::Wrapper<BXVector<l1t::Jet> >*)
   {
      ::edm::Wrapper<BXVector<l1t::Jet> > *ptr = 0;
      static ::TVirtualIsAProxy* isa_proxy = new ::TIsAProxy(typeid(::edm::Wrapper<BXVector<l1t::Jet> >));
      static ::ROOT::TGenericClassInfo 
         instance("edm::Wrapper<BXVector<l1t::Jet> >", ::edm::Wrapper<BXVector<l1t::Jet> >::Class_Version(), "DataFormats/Common/interface/Wrapper.h", 25,
                  typeid(::edm::Wrapper<BXVector<l1t::Jet> >), ::ROOT::Internal::DefineBehavior(ptr, ptr),
                  &edmcLcLWrapperlEBXVectorlEl1tcLcLJetgRsPgR_Dictionary, isa_proxy, 0,
                  sizeof(::edm::Wrapper<BXVector<l1t::Jet> >) );
      instance.SetNew(&new_edmcLcLWrapperlEBXVectorlEl1tcLcLJetgRsPgR);
      instance.SetNewArray(&newArray_edmcLcLWrapperlEBXVectorlEl1tcLcLJetgRsPgR);
      instance.SetDelete(&delete_edmcLcLWrapperlEBXVectorlEl1tcLcLJetgRsPgR);
      instance.SetDeleteArray(&deleteArray_edmcLcLWrapperlEBXVectorlEl1tcLcLJetgRsPgR);
      instance.SetDestructor(&destruct_edmcLcLWrapperlEBXVectorlEl1tcLcLJetgRsPgR);

      ::ROOT::AddClassAlternate("edm::Wrapper<BXVector<l1t::Jet> >","edm::Wrapper<l1t::JetBxCollection>");
      return &instance;
   }
   TGenericClassInfo *GenerateInitInstance(const ::edm::Wrapper<BXVector<l1t::Jet> >*)
   {
      return GenerateInitInstanceLocal((::edm::Wrapper<BXVector<l1t::Jet> >*)0);
   }
   // Static variable to force the class initialization
   static ::ROOT::TGenericClassInfo *_R__UNIQUE_(Init) = GenerateInitInstanceLocal((const ::edm::Wrapper<BXVector<l1t::Jet> >*)0x0); R__UseDummy(_R__UNIQUE_(Init));

   // Dictionary for non-ClassDef classes
   static TClass *edmcLcLWrapperlEBXVectorlEl1tcLcLJetgRsPgR_Dictionary() {
      TClass* theClass =::ROOT::GenerateInitInstanceLocal((const ::edm::Wrapper<BXVector<l1t::Jet> >*)0x0)->GetClass();
      edmcLcLWrapperlEBXVectorlEl1tcLcLJetgRsPgR_TClassManip(theClass);
   return theClass;
   }

   static void edmcLcLWrapperlEBXVectorlEl1tcLcLJetgRsPgR_TClassManip(TClass* ){
   }

} // end of namespace ROOT

namespace ROOT {
   static TClass *edmcLcLReflEBXVectorlEl1tcLcLJetgRcOl1tcLcLJetcOedmcLcLrefhelpercLcLFindUsingAdvancelEBXVectorlEl1tcLcLJetgRcOl1tcLcLJetgRsPgR_Dictionary();
   static void edmcLcLReflEBXVectorlEl1tcLcLJetgRcOl1tcLcLJetcOedmcLcLrefhelpercLcLFindUsingAdvancelEBXVectorlEl1tcLcLJetgRcOl1tcLcLJetgRsPgR_TClassManip(TClass*);
   static void *new_edmcLcLReflEBXVectorlEl1tcLcLJetgRcOl1tcLcLJetcOedmcLcLrefhelpercLcLFindUsingAdvancelEBXVectorlEl1tcLcLJetgRcOl1tcLcLJetgRsPgR(void *p = 0);
   static void *newArray_edmcLcLReflEBXVectorlEl1tcLcLJetgRcOl1tcLcLJetcOedmcLcLrefhelpercLcLFindUsingAdvancelEBXVectorlEl1tcLcLJetgRcOl1tcLcLJetgRsPgR(Long_t size, void *p);
   static void delete_edmcLcLReflEBXVectorlEl1tcLcLJetgRcOl1tcLcLJetcOedmcLcLrefhelpercLcLFindUsingAdvancelEBXVectorlEl1tcLcLJetgRcOl1tcLcLJetgRsPgR(void *p);
   static void deleteArray_edmcLcLReflEBXVectorlEl1tcLcLJetgRcOl1tcLcLJetcOedmcLcLrefhelpercLcLFindUsingAdvancelEBXVectorlEl1tcLcLJetgRcOl1tcLcLJetgRsPgR(void *p);
   static void destruct_edmcLcLReflEBXVectorlEl1tcLcLJetgRcOl1tcLcLJetcOedmcLcLrefhelpercLcLFindUsingAdvancelEBXVectorlEl1tcLcLJetgRcOl1tcLcLJetgRsPgR(void *p);

   // Function generating the singleton type initializer
   static TGenericClassInfo *GenerateInitInstanceLocal(const ::edm::Ref<BXVector<l1t::Jet>,l1t::Jet,edm::refhelper::FindUsingAdvance<BXVector<l1t::Jet>,l1t::Jet> >*)
   {
      ::edm::Ref<BXVector<l1t::Jet>,l1t::Jet,edm::refhelper::FindUsingAdvance<BXVector<l1t::Jet>,l1t::Jet> > *ptr = 0;
      static ::TVirtualIsAProxy* isa_proxy = new ::TIsAProxy(typeid(::edm::Ref<BXVector<l1t::Jet>,l1t::Jet,edm::refhelper::FindUsingAdvance<BXVector<l1t::Jet>,l1t::Jet> >));
      static ::ROOT::TGenericClassInfo 
         instance("edm::Ref<BXVector<l1t::Jet>,l1t::Jet,edm::refhelper::FindUsingAdvance<BXVector<l1t::Jet>,l1t::Jet> >", ::edm::Ref<BXVector<l1t::Jet>,l1t::Jet,edm::refhelper::FindUsingAdvance<BXVector<l1t::Jet>,l1t::Jet> >::Class_Version(), "DataFormats/Common/interface/Ref.h", 152,
                  typeid(::edm::Ref<BXVector<l1t::Jet>,l1t::Jet,edm::refhelper::FindUsingAdvance<BXVector<l1t::Jet>,l1t::Jet> >), ::ROOT::Internal::DefineBehavior(ptr, ptr),
                  &edmcLcLReflEBXVectorlEl1tcLcLJetgRcOl1tcLcLJetcOedmcLcLrefhelpercLcLFindUsingAdvancelEBXVectorlEl1tcLcLJetgRcOl1tcLcLJetgRsPgR_Dictionary, isa_proxy, 0,
                  sizeof(::edm::Ref<BXVector<l1t::Jet>,l1t::Jet,edm::refhelper::FindUsingAdvance<BXVector<l1t::Jet>,l1t::Jet> >) );
      instance.SetNew(&new_edmcLcLReflEBXVectorlEl1tcLcLJetgRcOl1tcLcLJetcOedmcLcLrefhelpercLcLFindUsingAdvancelEBXVectorlEl1tcLcLJetgRcOl1tcLcLJetgRsPgR);
      instance.SetNewArray(&newArray_edmcLcLReflEBXVectorlEl1tcLcLJetgRcOl1tcLcLJetcOedmcLcLrefhelpercLcLFindUsingAdvancelEBXVectorlEl1tcLcLJetgRcOl1tcLcLJetgRsPgR);
      instance.SetDelete(&delete_edmcLcLReflEBXVectorlEl1tcLcLJetgRcOl1tcLcLJetcOedmcLcLrefhelpercLcLFindUsingAdvancelEBXVectorlEl1tcLcLJetgRcOl1tcLcLJetgRsPgR);
      instance.SetDeleteArray(&deleteArray_edmcLcLReflEBXVectorlEl1tcLcLJetgRcOl1tcLcLJetcOedmcLcLrefhelpercLcLFindUsingAdvancelEBXVectorlEl1tcLcLJetgRcOl1tcLcLJetgRsPgR);
      instance.SetDestructor(&destruct_edmcLcLReflEBXVectorlEl1tcLcLJetgRcOl1tcLcLJetcOedmcLcLrefhelpercLcLFindUsingAdvancelEBXVectorlEl1tcLcLJetgRcOl1tcLcLJetgRsPgR);

      ::ROOT::AddClassAlternate("edm::Ref<BXVector<l1t::Jet>,l1t::Jet,edm::refhelper::FindUsingAdvance<BXVector<l1t::Jet>,l1t::Jet> >","l1t::JetRef");
      return &instance;
   }
   TGenericClassInfo *GenerateInitInstance(const ::edm::Ref<BXVector<l1t::Jet>,l1t::Jet,edm::refhelper::FindUsingAdvance<BXVector<l1t::Jet>,l1t::Jet> >*)
   {
      return GenerateInitInstanceLocal((::edm::Ref<BXVector<l1t::Jet>,l1t::Jet,edm::refhelper::FindUsingAdvance<BXVector<l1t::Jet>,l1t::Jet> >*)0);
   }
   // Static variable to force the class initialization
   static ::ROOT::TGenericClassInfo *_R__UNIQUE_(Init) = GenerateInitInstanceLocal((const ::edm::Ref<BXVector<l1t::Jet>,l1t::Jet,edm::refhelper::FindUsingAdvance<BXVector<l1t::Jet>,l1t::Jet> >*)0x0); R__UseDummy(_R__UNIQUE_(Init));

   // Dictionary for non-ClassDef classes
   static TClass *edmcLcLReflEBXVectorlEl1tcLcLJetgRcOl1tcLcLJetcOedmcLcLrefhelpercLcLFindUsingAdvancelEBXVectorlEl1tcLcLJetgRcOl1tcLcLJetgRsPgR_Dictionary() {
      TClass* theClass =::ROOT::GenerateInitInstanceLocal((const ::edm::Ref<BXVector<l1t::Jet>,l1t::Jet,edm::refhelper::FindUsingAdvance<BXVector<l1t::Jet>,l1t::Jet> >*)0x0)->GetClass();
      edmcLcLReflEBXVectorlEl1tcLcLJetgRcOl1tcLcLJetcOedmcLcLrefhelpercLcLFindUsingAdvancelEBXVectorlEl1tcLcLJetgRcOl1tcLcLJetgRsPgR_TClassManip(theClass);
   return theClass;
   }

   static void edmcLcLReflEBXVectorlEl1tcLcLJetgRcOl1tcLcLJetcOedmcLcLrefhelpercLcLFindUsingAdvancelEBXVectorlEl1tcLcLJetgRcOl1tcLcLJetgRsPgR_TClassManip(TClass* ){
   }

} // end of namespace ROOT

namespace ROOT {
   static TClass *edmcLcLWrapperlEedmcLcLReflEBXVectorlEl1tcLcLJetgRcOl1tcLcLJetcOedmcLcLrefhelpercLcLFindUsingAdvancelEBXVectorlEl1tcLcLJetgRcOl1tcLcLJetgRsPgRsPgR_Dictionary();
   static void edmcLcLWrapperlEedmcLcLReflEBXVectorlEl1tcLcLJetgRcOl1tcLcLJetcOedmcLcLrefhelpercLcLFindUsingAdvancelEBXVectorlEl1tcLcLJetgRcOl1tcLcLJetgRsPgRsPgR_TClassManip(TClass*);
   static void *new_edmcLcLWrapperlEedmcLcLReflEBXVectorlEl1tcLcLJetgRcOl1tcLcLJetcOedmcLcLrefhelpercLcLFindUsingAdvancelEBXVectorlEl1tcLcLJetgRcOl1tcLcLJetgRsPgRsPgR(void *p = 0);
   static void *newArray_edmcLcLWrapperlEedmcLcLReflEBXVectorlEl1tcLcLJetgRcOl1tcLcLJetcOedmcLcLrefhelpercLcLFindUsingAdvancelEBXVectorlEl1tcLcLJetgRcOl1tcLcLJetgRsPgRsPgR(Long_t size, void *p);
   static void delete_edmcLcLWrapperlEedmcLcLReflEBXVectorlEl1tcLcLJetgRcOl1tcLcLJetcOedmcLcLrefhelpercLcLFindUsingAdvancelEBXVectorlEl1tcLcLJetgRcOl1tcLcLJetgRsPgRsPgR(void *p);
   static void deleteArray_edmcLcLWrapperlEedmcLcLReflEBXVectorlEl1tcLcLJetgRcOl1tcLcLJetcOedmcLcLrefhelpercLcLFindUsingAdvancelEBXVectorlEl1tcLcLJetgRcOl1tcLcLJetgRsPgRsPgR(void *p);
   static void destruct_edmcLcLWrapperlEedmcLcLReflEBXVectorlEl1tcLcLJetgRcOl1tcLcLJetcOedmcLcLrefhelpercLcLFindUsingAdvancelEBXVectorlEl1tcLcLJetgRcOl1tcLcLJetgRsPgRsPgR(void *p);

   // Function generating the singleton type initializer
   static TGenericClassInfo *GenerateInitInstanceLocal(const ::edm::Wrapper<edm::Ref<BXVector<l1t::Jet>,l1t::Jet,edm::refhelper::FindUsingAdvance<BXVector<l1t::Jet>,l1t::Jet> > >*)
   {
      ::edm::Wrapper<edm::Ref<BXVector<l1t::Jet>,l1t::Jet,edm::refhelper::FindUsingAdvance<BXVector<l1t::Jet>,l1t::Jet> > > *ptr = 0;
      static ::TVirtualIsAProxy* isa_proxy = new ::TIsAProxy(typeid(::edm::Wrapper<edm::Ref<BXVector<l1t::Jet>,l1t::Jet,edm::refhelper::FindUsingAdvance<BXVector<l1t::Jet>,l1t::Jet> > >));
      static ::ROOT::TGenericClassInfo 
         instance("edm::Wrapper<edm::Ref<BXVector<l1t::Jet>,l1t::Jet,edm::refhelper::FindUsingAdvance<BXVector<l1t::Jet>,l1t::Jet> > >", ::edm::Wrapper<edm::Ref<BXVector<l1t::Jet>,l1t::Jet,edm::refhelper::FindUsingAdvance<BXVector<l1t::Jet>,l1t::Jet> > >::Class_Version(), "DataFormats/Common/interface/Wrapper.h", 25,
                  typeid(::edm::Wrapper<edm::Ref<BXVector<l1t::Jet>,l1t::Jet,edm::refhelper::FindUsingAdvance<BXVector<l1t::Jet>,l1t::Jet> > >), ::ROOT::Internal::DefineBehavior(ptr, ptr),
                  &edmcLcLWrapperlEedmcLcLReflEBXVectorlEl1tcLcLJetgRcOl1tcLcLJetcOedmcLcLrefhelpercLcLFindUsingAdvancelEBXVectorlEl1tcLcLJetgRcOl1tcLcLJetgRsPgRsPgR_Dictionary, isa_proxy, 0,
                  sizeof(::edm::Wrapper<edm::Ref<BXVector<l1t::Jet>,l1t::Jet,edm::refhelper::FindUsingAdvance<BXVector<l1t::Jet>,l1t::Jet> > >) );
      instance.SetNew(&new_edmcLcLWrapperlEedmcLcLReflEBXVectorlEl1tcLcLJetgRcOl1tcLcLJetcOedmcLcLrefhelpercLcLFindUsingAdvancelEBXVectorlEl1tcLcLJetgRcOl1tcLcLJetgRsPgRsPgR);
      instance.SetNewArray(&newArray_edmcLcLWrapperlEedmcLcLReflEBXVectorlEl1tcLcLJetgRcOl1tcLcLJetcOedmcLcLrefhelpercLcLFindUsingAdvancelEBXVectorlEl1tcLcLJetgRcOl1tcLcLJetgRsPgRsPgR);
      instance.SetDelete(&delete_edmcLcLWrapperlEedmcLcLReflEBXVectorlEl1tcLcLJetgRcOl1tcLcLJetcOedmcLcLrefhelpercLcLFindUsingAdvancelEBXVectorlEl1tcLcLJetgRcOl1tcLcLJetgRsPgRsPgR);
      instance.SetDeleteArray(&deleteArray_edmcLcLWrapperlEedmcLcLReflEBXVectorlEl1tcLcLJetgRcOl1tcLcLJetcOedmcLcLrefhelpercLcLFindUsingAdvancelEBXVectorlEl1tcLcLJetgRcOl1tcLcLJetgRsPgRsPgR);
      instance.SetDestructor(&destruct_edmcLcLWrapperlEedmcLcLReflEBXVectorlEl1tcLcLJetgRcOl1tcLcLJetcOedmcLcLrefhelpercLcLFindUsingAdvancelEBXVectorlEl1tcLcLJetgRcOl1tcLcLJetgRsPgRsPgR);

      ::ROOT::AddClassAlternate("edm::Wrapper<edm::Ref<BXVector<l1t::Jet>,l1t::Jet,edm::refhelper::FindUsingAdvance<BXVector<l1t::Jet>,l1t::Jet> > >","edm::Wrapper<l1t::JetRef>");
      return &instance;
   }
   TGenericClassInfo *GenerateInitInstance(const ::edm::Wrapper<edm::Ref<BXVector<l1t::Jet>,l1t::Jet,edm::refhelper::FindUsingAdvance<BXVector<l1t::Jet>,l1t::Jet> > >*)
   {
      return GenerateInitInstanceLocal((::edm::Wrapper<edm::Ref<BXVector<l1t::Jet>,l1t::Jet,edm::refhelper::FindUsingAdvance<BXVector<l1t::Jet>,l1t::Jet> > >*)0);
   }
   // Static variable to force the class initialization
   static ::ROOT::TGenericClassInfo *_R__UNIQUE_(Init) = GenerateInitInstanceLocal((const ::edm::Wrapper<edm::Ref<BXVector<l1t::Jet>,l1t::Jet,edm::refhelper::FindUsingAdvance<BXVector<l1t::Jet>,l1t::Jet> > >*)0x0); R__UseDummy(_R__UNIQUE_(Init));

   // Dictionary for non-ClassDef classes
   static TClass *edmcLcLWrapperlEedmcLcLReflEBXVectorlEl1tcLcLJetgRcOl1tcLcLJetcOedmcLcLrefhelpercLcLFindUsingAdvancelEBXVectorlEl1tcLcLJetgRcOl1tcLcLJetgRsPgRsPgR_Dictionary() {
      TClass* theClass =::ROOT::GenerateInitInstanceLocal((const ::edm::Wrapper<edm::Ref<BXVector<l1t::Jet>,l1t::Jet,edm::refhelper::FindUsingAdvance<BXVector<l1t::Jet>,l1t::Jet> > >*)0x0)->GetClass();
      edmcLcLWrapperlEedmcLcLReflEBXVectorlEl1tcLcLJetgRcOl1tcLcLJetcOedmcLcLrefhelpercLcLFindUsingAdvancelEBXVectorlEl1tcLcLJetgRcOl1tcLcLJetgRsPgRsPgR_TClassManip(theClass);
   return theClass;
   }

   static void edmcLcLWrapperlEedmcLcLReflEBXVectorlEl1tcLcLJetgRcOl1tcLcLJetcOedmcLcLrefhelpercLcLFindUsingAdvancelEBXVectorlEl1tcLcLJetgRcOl1tcLcLJetgRsPgRsPgR_TClassManip(TClass* ){
   }

} // end of namespace ROOT

namespace ROOT {
   static TClass *edmcLcLRefVectorlEBXVectorlEl1tcLcLJetgRcOl1tcLcLJetcOedmcLcLrefhelpercLcLFindUsingAdvancelEBXVectorlEl1tcLcLJetgRcOl1tcLcLJetgRsPgR_Dictionary();
   static void edmcLcLRefVectorlEBXVectorlEl1tcLcLJetgRcOl1tcLcLJetcOedmcLcLrefhelpercLcLFindUsingAdvancelEBXVectorlEl1tcLcLJetgRcOl1tcLcLJetgRsPgR_TClassManip(TClass*);
   static void *new_edmcLcLRefVectorlEBXVectorlEl1tcLcLJetgRcOl1tcLcLJetcOedmcLcLrefhelpercLcLFindUsingAdvancelEBXVectorlEl1tcLcLJetgRcOl1tcLcLJetgRsPgR(void *p = 0);
   static void *newArray_edmcLcLRefVectorlEBXVectorlEl1tcLcLJetgRcOl1tcLcLJetcOedmcLcLrefhelpercLcLFindUsingAdvancelEBXVectorlEl1tcLcLJetgRcOl1tcLcLJetgRsPgR(Long_t size, void *p);
   static void delete_edmcLcLRefVectorlEBXVectorlEl1tcLcLJetgRcOl1tcLcLJetcOedmcLcLrefhelpercLcLFindUsingAdvancelEBXVectorlEl1tcLcLJetgRcOl1tcLcLJetgRsPgR(void *p);
   static void deleteArray_edmcLcLRefVectorlEBXVectorlEl1tcLcLJetgRcOl1tcLcLJetcOedmcLcLrefhelpercLcLFindUsingAdvancelEBXVectorlEl1tcLcLJetgRcOl1tcLcLJetgRsPgR(void *p);
   static void destruct_edmcLcLRefVectorlEBXVectorlEl1tcLcLJetgRcOl1tcLcLJetcOedmcLcLrefhelpercLcLFindUsingAdvancelEBXVectorlEl1tcLcLJetgRcOl1tcLcLJetgRsPgR(void *p);

   // Function generating the singleton type initializer
   static TGenericClassInfo *GenerateInitInstanceLocal(const ::edm::RefVector<BXVector<l1t::Jet>,l1t::Jet,edm::refhelper::FindUsingAdvance<BXVector<l1t::Jet>,l1t::Jet> >*)
   {
      ::edm::RefVector<BXVector<l1t::Jet>,l1t::Jet,edm::refhelper::FindUsingAdvance<BXVector<l1t::Jet>,l1t::Jet> > *ptr = 0;
      static ::TVirtualIsAProxy* isa_proxy = new ::TIsAProxy(typeid(::edm::RefVector<BXVector<l1t::Jet>,l1t::Jet,edm::refhelper::FindUsingAdvance<BXVector<l1t::Jet>,l1t::Jet> >));
      static ::ROOT::TGenericClassInfo 
         instance("edm::RefVector<BXVector<l1t::Jet>,l1t::Jet,edm::refhelper::FindUsingAdvance<BXVector<l1t::Jet>,l1t::Jet> >", ::edm::RefVector<BXVector<l1t::Jet>,l1t::Jet,edm::refhelper::FindUsingAdvance<BXVector<l1t::Jet>,l1t::Jet> >::Class_Version(), "DataFormats/Common/interface/RefVector.h", 33,
                  typeid(::edm::RefVector<BXVector<l1t::Jet>,l1t::Jet,edm::refhelper::FindUsingAdvance<BXVector<l1t::Jet>,l1t::Jet> >), ::ROOT::Internal::DefineBehavior(ptr, ptr),
                  &edmcLcLRefVectorlEBXVectorlEl1tcLcLJetgRcOl1tcLcLJetcOedmcLcLrefhelpercLcLFindUsingAdvancelEBXVectorlEl1tcLcLJetgRcOl1tcLcLJetgRsPgR_Dictionary, isa_proxy, 0,
                  sizeof(::edm::RefVector<BXVector<l1t::Jet>,l1t::Jet,edm::refhelper::FindUsingAdvance<BXVector<l1t::Jet>,l1t::Jet> >) );
      instance.SetNew(&new_edmcLcLRefVectorlEBXVectorlEl1tcLcLJetgRcOl1tcLcLJetcOedmcLcLrefhelpercLcLFindUsingAdvancelEBXVectorlEl1tcLcLJetgRcOl1tcLcLJetgRsPgR);
      instance.SetNewArray(&newArray_edmcLcLRefVectorlEBXVectorlEl1tcLcLJetgRcOl1tcLcLJetcOedmcLcLrefhelpercLcLFindUsingAdvancelEBXVectorlEl1tcLcLJetgRcOl1tcLcLJetgRsPgR);
      instance.SetDelete(&delete_edmcLcLRefVectorlEBXVectorlEl1tcLcLJetgRcOl1tcLcLJetcOedmcLcLrefhelpercLcLFindUsingAdvancelEBXVectorlEl1tcLcLJetgRcOl1tcLcLJetgRsPgR);
      instance.SetDeleteArray(&deleteArray_edmcLcLRefVectorlEBXVectorlEl1tcLcLJetgRcOl1tcLcLJetcOedmcLcLrefhelpercLcLFindUsingAdvancelEBXVectorlEl1tcLcLJetgRcOl1tcLcLJetgRsPgR);
      instance.SetDestructor(&destruct_edmcLcLRefVectorlEBXVectorlEl1tcLcLJetgRcOl1tcLcLJetcOedmcLcLrefhelpercLcLFindUsingAdvancelEBXVectorlEl1tcLcLJetgRcOl1tcLcLJetgRsPgR);

      ::ROOT::AddClassAlternate("edm::RefVector<BXVector<l1t::Jet>,l1t::Jet,edm::refhelper::FindUsingAdvance<BXVector<l1t::Jet>,l1t::Jet> >","l1t::JetRefVector");
      return &instance;
   }
   TGenericClassInfo *GenerateInitInstance(const ::edm::RefVector<BXVector<l1t::Jet>,l1t::Jet,edm::refhelper::FindUsingAdvance<BXVector<l1t::Jet>,l1t::Jet> >*)
   {
      return GenerateInitInstanceLocal((::edm::RefVector<BXVector<l1t::Jet>,l1t::Jet,edm::refhelper::FindUsingAdvance<BXVector<l1t::Jet>,l1t::Jet> >*)0);
   }
   // Static variable to force the class initialization
   static ::ROOT::TGenericClassInfo *_R__UNIQUE_(Init) = GenerateInitInstanceLocal((const ::edm::RefVector<BXVector<l1t::Jet>,l1t::Jet,edm::refhelper::FindUsingAdvance<BXVector<l1t::Jet>,l1t::Jet> >*)0x0); R__UseDummy(_R__UNIQUE_(Init));

   // Dictionary for non-ClassDef classes
   static TClass *edmcLcLRefVectorlEBXVectorlEl1tcLcLJetgRcOl1tcLcLJetcOedmcLcLrefhelpercLcLFindUsingAdvancelEBXVectorlEl1tcLcLJetgRcOl1tcLcLJetgRsPgR_Dictionary() {
      TClass* theClass =::ROOT::GenerateInitInstanceLocal((const ::edm::RefVector<BXVector<l1t::Jet>,l1t::Jet,edm::refhelper::FindUsingAdvance<BXVector<l1t::Jet>,l1t::Jet> >*)0x0)->GetClass();
      edmcLcLRefVectorlEBXVectorlEl1tcLcLJetgRcOl1tcLcLJetcOedmcLcLrefhelpercLcLFindUsingAdvancelEBXVectorlEl1tcLcLJetgRcOl1tcLcLJetgRsPgR_TClassManip(theClass);
   return theClass;
   }

   static void edmcLcLRefVectorlEBXVectorlEl1tcLcLJetgRcOl1tcLcLJetcOedmcLcLrefhelpercLcLFindUsingAdvancelEBXVectorlEl1tcLcLJetgRcOl1tcLcLJetgRsPgR_TClassManip(TClass* ){
   }

} // end of namespace ROOT

namespace ROOT {
   static TClass *edmcLcLWrapperlEedmcLcLRefVectorlEBXVectorlEl1tcLcLJetgRcOl1tcLcLJetcOedmcLcLrefhelpercLcLFindUsingAdvancelEBXVectorlEl1tcLcLJetgRcOl1tcLcLJetgRsPgRsPgR_Dictionary();
   static void edmcLcLWrapperlEedmcLcLRefVectorlEBXVectorlEl1tcLcLJetgRcOl1tcLcLJetcOedmcLcLrefhelpercLcLFindUsingAdvancelEBXVectorlEl1tcLcLJetgRcOl1tcLcLJetgRsPgRsPgR_TClassManip(TClass*);
   static void *new_edmcLcLWrapperlEedmcLcLRefVectorlEBXVectorlEl1tcLcLJetgRcOl1tcLcLJetcOedmcLcLrefhelpercLcLFindUsingAdvancelEBXVectorlEl1tcLcLJetgRcOl1tcLcLJetgRsPgRsPgR(void *p = 0);
   static void *newArray_edmcLcLWrapperlEedmcLcLRefVectorlEBXVectorlEl1tcLcLJetgRcOl1tcLcLJetcOedmcLcLrefhelpercLcLFindUsingAdvancelEBXVectorlEl1tcLcLJetgRcOl1tcLcLJetgRsPgRsPgR(Long_t size, void *p);
   static void delete_edmcLcLWrapperlEedmcLcLRefVectorlEBXVectorlEl1tcLcLJetgRcOl1tcLcLJetcOedmcLcLrefhelpercLcLFindUsingAdvancelEBXVectorlEl1tcLcLJetgRcOl1tcLcLJetgRsPgRsPgR(void *p);
   static void deleteArray_edmcLcLWrapperlEedmcLcLRefVectorlEBXVectorlEl1tcLcLJetgRcOl1tcLcLJetcOedmcLcLrefhelpercLcLFindUsingAdvancelEBXVectorlEl1tcLcLJetgRcOl1tcLcLJetgRsPgRsPgR(void *p);
   static void destruct_edmcLcLWrapperlEedmcLcLRefVectorlEBXVectorlEl1tcLcLJetgRcOl1tcLcLJetcOedmcLcLrefhelpercLcLFindUsingAdvancelEBXVectorlEl1tcLcLJetgRcOl1tcLcLJetgRsPgRsPgR(void *p);

   // Function generating the singleton type initializer
   static TGenericClassInfo *GenerateInitInstanceLocal(const ::edm::Wrapper<edm::RefVector<BXVector<l1t::Jet>,l1t::Jet,edm::refhelper::FindUsingAdvance<BXVector<l1t::Jet>,l1t::Jet> > >*)
   {
      ::edm::Wrapper<edm::RefVector<BXVector<l1t::Jet>,l1t::Jet,edm::refhelper::FindUsingAdvance<BXVector<l1t::Jet>,l1t::Jet> > > *ptr = 0;
      static ::TVirtualIsAProxy* isa_proxy = new ::TIsAProxy(typeid(::edm::Wrapper<edm::RefVector<BXVector<l1t::Jet>,l1t::Jet,edm::refhelper::FindUsingAdvance<BXVector<l1t::Jet>,l1t::Jet> > >));
      static ::ROOT::TGenericClassInfo 
         instance("edm::Wrapper<edm::RefVector<BXVector<l1t::Jet>,l1t::Jet,edm::refhelper::FindUsingAdvance<BXVector<l1t::Jet>,l1t::Jet> > >", ::edm::Wrapper<edm::RefVector<BXVector<l1t::Jet>,l1t::Jet,edm::refhelper::FindUsingAdvance<BXVector<l1t::Jet>,l1t::Jet> > >::Class_Version(), "DataFormats/Common/interface/Wrapper.h", 25,
                  typeid(::edm::Wrapper<edm::RefVector<BXVector<l1t::Jet>,l1t::Jet,edm::refhelper::FindUsingAdvance<BXVector<l1t::Jet>,l1t::Jet> > >), ::ROOT::Internal::DefineBehavior(ptr, ptr),
                  &edmcLcLWrapperlEedmcLcLRefVectorlEBXVectorlEl1tcLcLJetgRcOl1tcLcLJetcOedmcLcLrefhelpercLcLFindUsingAdvancelEBXVectorlEl1tcLcLJetgRcOl1tcLcLJetgRsPgRsPgR_Dictionary, isa_proxy, 0,
                  sizeof(::edm::Wrapper<edm::RefVector<BXVector<l1t::Jet>,l1t::Jet,edm::refhelper::FindUsingAdvance<BXVector<l1t::Jet>,l1t::Jet> > >) );
      instance.SetNew(&new_edmcLcLWrapperlEedmcLcLRefVectorlEBXVectorlEl1tcLcLJetgRcOl1tcLcLJetcOedmcLcLrefhelpercLcLFindUsingAdvancelEBXVectorlEl1tcLcLJetgRcOl1tcLcLJetgRsPgRsPgR);
      instance.SetNewArray(&newArray_edmcLcLWrapperlEedmcLcLRefVectorlEBXVectorlEl1tcLcLJetgRcOl1tcLcLJetcOedmcLcLrefhelpercLcLFindUsingAdvancelEBXVectorlEl1tcLcLJetgRcOl1tcLcLJetgRsPgRsPgR);
      instance.SetDelete(&delete_edmcLcLWrapperlEedmcLcLRefVectorlEBXVectorlEl1tcLcLJetgRcOl1tcLcLJetcOedmcLcLrefhelpercLcLFindUsingAdvancelEBXVectorlEl1tcLcLJetgRcOl1tcLcLJetgRsPgRsPgR);
      instance.SetDeleteArray(&deleteArray_edmcLcLWrapperlEedmcLcLRefVectorlEBXVectorlEl1tcLcLJetgRcOl1tcLcLJetcOedmcLcLrefhelpercLcLFindUsingAdvancelEBXVectorlEl1tcLcLJetgRcOl1tcLcLJetgRsPgRsPgR);
      instance.SetDestructor(&destruct_edmcLcLWrapperlEedmcLcLRefVectorlEBXVectorlEl1tcLcLJetgRcOl1tcLcLJetcOedmcLcLrefhelpercLcLFindUsingAdvancelEBXVectorlEl1tcLcLJetgRcOl1tcLcLJetgRsPgRsPgR);

      ::ROOT::AddClassAlternate("edm::Wrapper<edm::RefVector<BXVector<l1t::Jet>,l1t::Jet,edm::refhelper::FindUsingAdvance<BXVector<l1t::Jet>,l1t::Jet> > >","edm::Wrapper<l1t::JetRefVector>");
      return &instance;
   }
   TGenericClassInfo *GenerateInitInstance(const ::edm::Wrapper<edm::RefVector<BXVector<l1t::Jet>,l1t::Jet,edm::refhelper::FindUsingAdvance<BXVector<l1t::Jet>,l1t::Jet> > >*)
   {
      return GenerateInitInstanceLocal((::edm::Wrapper<edm::RefVector<BXVector<l1t::Jet>,l1t::Jet,edm::refhelper::FindUsingAdvance<BXVector<l1t::Jet>,l1t::Jet> > >*)0);
   }
   // Static variable to force the class initialization
   static ::ROOT::TGenericClassInfo *_R__UNIQUE_(Init) = GenerateInitInstanceLocal((const ::edm::Wrapper<edm::RefVector<BXVector<l1t::Jet>,l1t::Jet,edm::refhelper::FindUsingAdvance<BXVector<l1t::Jet>,l1t::Jet> > >*)0x0); R__UseDummy(_R__UNIQUE_(Init));

   // Dictionary for non-ClassDef classes
   static TClass *edmcLcLWrapperlEedmcLcLRefVectorlEBXVectorlEl1tcLcLJetgRcOl1tcLcLJetcOedmcLcLrefhelpercLcLFindUsingAdvancelEBXVectorlEl1tcLcLJetgRcOl1tcLcLJetgRsPgRsPgR_Dictionary() {
      TClass* theClass =::ROOT::GenerateInitInstanceLocal((const ::edm::Wrapper<edm::RefVector<BXVector<l1t::Jet>,l1t::Jet,edm::refhelper::FindUsingAdvance<BXVector<l1t::Jet>,l1t::Jet> > >*)0x0)->GetClass();
      edmcLcLWrapperlEedmcLcLRefVectorlEBXVectorlEl1tcLcLJetgRcOl1tcLcLJetcOedmcLcLrefhelpercLcLFindUsingAdvancelEBXVectorlEl1tcLcLJetgRcOl1tcLcLJetgRsPgRsPgR_TClassManip(theClass);
   return theClass;
   }

   static void edmcLcLWrapperlEedmcLcLRefVectorlEBXVectorlEl1tcLcLJetgRcOl1tcLcLJetcOedmcLcLrefhelpercLcLFindUsingAdvancelEBXVectorlEl1tcLcLJetgRcOl1tcLcLJetgRsPgRsPgR_TClassManip(TClass* ){
   }

} // end of namespace ROOT

namespace ROOT {
   static TClass *edmcLcLWrapperlEvectorlEedmcLcLReflEBXVectorlEl1tcLcLJetgRcOl1tcLcLJetcOedmcLcLrefhelpercLcLFindUsingAdvancelEBXVectorlEl1tcLcLJetgRcOl1tcLcLJetgRsPgRsPgRsPgR_Dictionary();
   static void edmcLcLWrapperlEvectorlEedmcLcLReflEBXVectorlEl1tcLcLJetgRcOl1tcLcLJetcOedmcLcLrefhelpercLcLFindUsingAdvancelEBXVectorlEl1tcLcLJetgRcOl1tcLcLJetgRsPgRsPgRsPgR_TClassManip(TClass*);
   static void *new_edmcLcLWrapperlEvectorlEedmcLcLReflEBXVectorlEl1tcLcLJetgRcOl1tcLcLJetcOedmcLcLrefhelpercLcLFindUsingAdvancelEBXVectorlEl1tcLcLJetgRcOl1tcLcLJetgRsPgRsPgRsPgR(void *p = 0);
   static void *newArray_edmcLcLWrapperlEvectorlEedmcLcLReflEBXVectorlEl1tcLcLJetgRcOl1tcLcLJetcOedmcLcLrefhelpercLcLFindUsingAdvancelEBXVectorlEl1tcLcLJetgRcOl1tcLcLJetgRsPgRsPgRsPgR(Long_t size, void *p);
   static void delete_edmcLcLWrapperlEvectorlEedmcLcLReflEBXVectorlEl1tcLcLJetgRcOl1tcLcLJetcOedmcLcLrefhelpercLcLFindUsingAdvancelEBXVectorlEl1tcLcLJetgRcOl1tcLcLJetgRsPgRsPgRsPgR(void *p);
   static void deleteArray_edmcLcLWrapperlEvectorlEedmcLcLReflEBXVectorlEl1tcLcLJetgRcOl1tcLcLJetcOedmcLcLrefhelpercLcLFindUsingAdvancelEBXVectorlEl1tcLcLJetgRcOl1tcLcLJetgRsPgRsPgRsPgR(void *p);
   static void destruct_edmcLcLWrapperlEvectorlEedmcLcLReflEBXVectorlEl1tcLcLJetgRcOl1tcLcLJetcOedmcLcLrefhelpercLcLFindUsingAdvancelEBXVectorlEl1tcLcLJetgRcOl1tcLcLJetgRsPgRsPgRsPgR(void *p);

   // Function generating the singleton type initializer
   static TGenericClassInfo *GenerateInitInstanceLocal(const ::edm::Wrapper<vector<edm::Ref<BXVector<l1t::Jet>,l1t::Jet,edm::refhelper::FindUsingAdvance<BXVector<l1t::Jet>,l1t::Jet> > > >*)
   {
      ::edm::Wrapper<vector<edm::Ref<BXVector<l1t::Jet>,l1t::Jet,edm::refhelper::FindUsingAdvance<BXVector<l1t::Jet>,l1t::Jet> > > > *ptr = 0;
      static ::TVirtualIsAProxy* isa_proxy = new ::TIsAProxy(typeid(::edm::Wrapper<vector<edm::Ref<BXVector<l1t::Jet>,l1t::Jet,edm::refhelper::FindUsingAdvance<BXVector<l1t::Jet>,l1t::Jet> > > >));
      static ::ROOT::TGenericClassInfo 
         instance("edm::Wrapper<vector<edm::Ref<BXVector<l1t::Jet>,l1t::Jet,edm::refhelper::FindUsingAdvance<BXVector<l1t::Jet>,l1t::Jet> > > >", ::edm::Wrapper<vector<edm::Ref<BXVector<l1t::Jet>,l1t::Jet,edm::refhelper::FindUsingAdvance<BXVector<l1t::Jet>,l1t::Jet> > > >::Class_Version(), "DataFormats/Common/interface/Wrapper.h", 25,
                  typeid(::edm::Wrapper<vector<edm::Ref<BXVector<l1t::Jet>,l1t::Jet,edm::refhelper::FindUsingAdvance<BXVector<l1t::Jet>,l1t::Jet> > > >), ::ROOT::Internal::DefineBehavior(ptr, ptr),
                  &edmcLcLWrapperlEvectorlEedmcLcLReflEBXVectorlEl1tcLcLJetgRcOl1tcLcLJetcOedmcLcLrefhelpercLcLFindUsingAdvancelEBXVectorlEl1tcLcLJetgRcOl1tcLcLJetgRsPgRsPgRsPgR_Dictionary, isa_proxy, 0,
                  sizeof(::edm::Wrapper<vector<edm::Ref<BXVector<l1t::Jet>,l1t::Jet,edm::refhelper::FindUsingAdvance<BXVector<l1t::Jet>,l1t::Jet> > > >) );
      instance.SetNew(&new_edmcLcLWrapperlEvectorlEedmcLcLReflEBXVectorlEl1tcLcLJetgRcOl1tcLcLJetcOedmcLcLrefhelpercLcLFindUsingAdvancelEBXVectorlEl1tcLcLJetgRcOl1tcLcLJetgRsPgRsPgRsPgR);
      instance.SetNewArray(&newArray_edmcLcLWrapperlEvectorlEedmcLcLReflEBXVectorlEl1tcLcLJetgRcOl1tcLcLJetcOedmcLcLrefhelpercLcLFindUsingAdvancelEBXVectorlEl1tcLcLJetgRcOl1tcLcLJetgRsPgRsPgRsPgR);
      instance.SetDelete(&delete_edmcLcLWrapperlEvectorlEedmcLcLReflEBXVectorlEl1tcLcLJetgRcOl1tcLcLJetcOedmcLcLrefhelpercLcLFindUsingAdvancelEBXVectorlEl1tcLcLJetgRcOl1tcLcLJetgRsPgRsPgRsPgR);
      instance.SetDeleteArray(&deleteArray_edmcLcLWrapperlEvectorlEedmcLcLReflEBXVectorlEl1tcLcLJetgRcOl1tcLcLJetcOedmcLcLrefhelpercLcLFindUsingAdvancelEBXVectorlEl1tcLcLJetgRcOl1tcLcLJetgRsPgRsPgRsPgR);
      instance.SetDestructor(&destruct_edmcLcLWrapperlEvectorlEedmcLcLReflEBXVectorlEl1tcLcLJetgRcOl1tcLcLJetcOedmcLcLrefhelpercLcLFindUsingAdvancelEBXVectorlEl1tcLcLJetgRcOl1tcLcLJetgRsPgRsPgRsPgR);

      ::ROOT::AddClassAlternate("edm::Wrapper<vector<edm::Ref<BXVector<l1t::Jet>,l1t::Jet,edm::refhelper::FindUsingAdvance<BXVector<l1t::Jet>,l1t::Jet> > > >","edm::Wrapper<l1t::JetVectorRef>");
      return &instance;
   }
   TGenericClassInfo *GenerateInitInstance(const ::edm::Wrapper<vector<edm::Ref<BXVector<l1t::Jet>,l1t::Jet,edm::refhelper::FindUsingAdvance<BXVector<l1t::Jet>,l1t::Jet> > > >*)
   {
      return GenerateInitInstanceLocal((::edm::Wrapper<vector<edm::Ref<BXVector<l1t::Jet>,l1t::Jet,edm::refhelper::FindUsingAdvance<BXVector<l1t::Jet>,l1t::Jet> > > >*)0);
   }
   // Static variable to force the class initialization
   static ::ROOT::TGenericClassInfo *_R__UNIQUE_(Init) = GenerateInitInstanceLocal((const ::edm::Wrapper<vector<edm::Ref<BXVector<l1t::Jet>,l1t::Jet,edm::refhelper::FindUsingAdvance<BXVector<l1t::Jet>,l1t::Jet> > > >*)0x0); R__UseDummy(_R__UNIQUE_(Init));

   // Dictionary for non-ClassDef classes
   static TClass *edmcLcLWrapperlEvectorlEedmcLcLReflEBXVectorlEl1tcLcLJetgRcOl1tcLcLJetcOedmcLcLrefhelpercLcLFindUsingAdvancelEBXVectorlEl1tcLcLJetgRcOl1tcLcLJetgRsPgRsPgRsPgR_Dictionary() {
      TClass* theClass =::ROOT::GenerateInitInstanceLocal((const ::edm::Wrapper<vector<edm::Ref<BXVector<l1t::Jet>,l1t::Jet,edm::refhelper::FindUsingAdvance<BXVector<l1t::Jet>,l1t::Jet> > > >*)0x0)->GetClass();
      edmcLcLWrapperlEvectorlEedmcLcLReflEBXVectorlEl1tcLcLJetgRcOl1tcLcLJetcOedmcLcLrefhelpercLcLFindUsingAdvancelEBXVectorlEl1tcLcLJetgRcOl1tcLcLJetgRsPgRsPgRsPgR_TClassManip(theClass);
   return theClass;
   }

   static void edmcLcLWrapperlEvectorlEedmcLcLReflEBXVectorlEl1tcLcLJetgRcOl1tcLcLJetcOedmcLcLrefhelpercLcLFindUsingAdvancelEBXVectorlEl1tcLcLJetgRcOl1tcLcLJetgRsPgRsPgRsPgR_TClassManip(TClass* ){
   }

} // end of namespace ROOT

namespace ROOT {
   static TClass *l1tcLcLEGamma_Dictionary();
   static void l1tcLcLEGamma_TClassManip(TClass*);
   static void *new_l1tcLcLEGamma(void *p = 0);
   static void *newArray_l1tcLcLEGamma(Long_t size, void *p);
   static void delete_l1tcLcLEGamma(void *p);
   static void deleteArray_l1tcLcLEGamma(void *p);
   static void destruct_l1tcLcLEGamma(void *p);

   // Function generating the singleton type initializer
   static TGenericClassInfo *GenerateInitInstanceLocal(const ::l1t::EGamma*)
   {
      ::l1t::EGamma *ptr = 0;
      static ::TVirtualIsAProxy* isa_proxy = new ::TIsAProxy(typeid(::l1t::EGamma));
      static ::ROOT::TGenericClassInfo 
         instance("l1t::EGamma", 13, "DataFormats/L1Trigger/interface/EGamma.h", 17,
                  typeid(::l1t::EGamma), ::ROOT::Internal::DefineBehavior(ptr, ptr),
                  &l1tcLcLEGamma_Dictionary, isa_proxy, 8,
                  sizeof(::l1t::EGamma) );
      instance.SetNew(&new_l1tcLcLEGamma);
      instance.SetNewArray(&newArray_l1tcLcLEGamma);
      instance.SetDelete(&delete_l1tcLcLEGamma);
      instance.SetDeleteArray(&deleteArray_l1tcLcLEGamma);
      instance.SetDestructor(&destruct_l1tcLcLEGamma);
      return &instance;
   }
   TGenericClassInfo *GenerateInitInstance(const ::l1t::EGamma*)
   {
      return GenerateInitInstanceLocal((::l1t::EGamma*)0);
   }
   // Static variable to force the class initialization
   static ::ROOT::TGenericClassInfo *_R__UNIQUE_(Init) = GenerateInitInstanceLocal((const ::l1t::EGamma*)0x0); R__UseDummy(_R__UNIQUE_(Init));

   // Dictionary for non-ClassDef classes
   static TClass *l1tcLcLEGamma_Dictionary() {
      TClass* theClass =::ROOT::GenerateInitInstanceLocal((const ::l1t::EGamma*)0x0)->GetClass();
      l1tcLcLEGamma_TClassManip(theClass);
   return theClass;
   }

   static void l1tcLcLEGamma_TClassManip(TClass* ){
   }

} // end of namespace ROOT

namespace ROOT {
   static TClass *BXVectorlEl1tcLcLEGammagR_Dictionary();
   static void BXVectorlEl1tcLcLEGammagR_TClassManip(TClass*);
   static void *new_BXVectorlEl1tcLcLEGammagR(void *p = 0);
   static void *newArray_BXVectorlEl1tcLcLEGammagR(Long_t size, void *p);
   static void delete_BXVectorlEl1tcLcLEGammagR(void *p);
   static void deleteArray_BXVectorlEl1tcLcLEGammagR(void *p);
   static void destruct_BXVectorlEl1tcLcLEGammagR(void *p);

   // Function generating the singleton type initializer
   static TGenericClassInfo *GenerateInitInstanceLocal(const ::BXVector<l1t::EGamma>*)
   {
      ::BXVector<l1t::EGamma> *ptr = 0;
      static ::TVirtualIsAProxy* isa_proxy = new ::TIsAProxy(typeid(::BXVector<l1t::EGamma>));
      static ::ROOT::TGenericClassInfo 
         instance("BXVector<l1t::EGamma>", "DataFormats/L1Trigger/interface/BXVector.h", 15,
                  typeid(::BXVector<l1t::EGamma>), ::ROOT::Internal::DefineBehavior(ptr, ptr),
                  &BXVectorlEl1tcLcLEGammagR_Dictionary, isa_proxy, 0,
                  sizeof(::BXVector<l1t::EGamma>) );
      instance.SetNew(&new_BXVectorlEl1tcLcLEGammagR);
      instance.SetNewArray(&newArray_BXVectorlEl1tcLcLEGammagR);
      instance.SetDelete(&delete_BXVectorlEl1tcLcLEGammagR);
      instance.SetDeleteArray(&deleteArray_BXVectorlEl1tcLcLEGammagR);
      instance.SetDestructor(&destruct_BXVectorlEl1tcLcLEGammagR);

      ::ROOT::AddClassAlternate("BXVector<l1t::EGamma>","l1t::EGammaBxCollection");
      return &instance;
   }
   TGenericClassInfo *GenerateInitInstance(const ::BXVector<l1t::EGamma>*)
   {
      return GenerateInitInstanceLocal((::BXVector<l1t::EGamma>*)0);
   }
   // Static variable to force the class initialization
   static ::ROOT::TGenericClassInfo *_R__UNIQUE_(Init) = GenerateInitInstanceLocal((const ::BXVector<l1t::EGamma>*)0x0); R__UseDummy(_R__UNIQUE_(Init));

   // Dictionary for non-ClassDef classes
   static TClass *BXVectorlEl1tcLcLEGammagR_Dictionary() {
      TClass* theClass =::ROOT::GenerateInitInstanceLocal((const ::BXVector<l1t::EGamma>*)0x0)->GetClass();
      BXVectorlEl1tcLcLEGammagR_TClassManip(theClass);
   return theClass;
   }

   static void BXVectorlEl1tcLcLEGammagR_TClassManip(TClass* ){
   }

} // end of namespace ROOT

namespace ROOT {
   static TClass *edmcLcLWrapperlEBXVectorlEl1tcLcLEGammagRsPgR_Dictionary();
   static void edmcLcLWrapperlEBXVectorlEl1tcLcLEGammagRsPgR_TClassManip(TClass*);
   static void *new_edmcLcLWrapperlEBXVectorlEl1tcLcLEGammagRsPgR(void *p = 0);
   static void *newArray_edmcLcLWrapperlEBXVectorlEl1tcLcLEGammagRsPgR(Long_t size, void *p);
   static void delete_edmcLcLWrapperlEBXVectorlEl1tcLcLEGammagRsPgR(void *p);
   static void deleteArray_edmcLcLWrapperlEBXVectorlEl1tcLcLEGammagRsPgR(void *p);
   static void destruct_edmcLcLWrapperlEBXVectorlEl1tcLcLEGammagRsPgR(void *p);

   // Function generating the singleton type initializer
   static TGenericClassInfo *GenerateInitInstanceLocal(const ::edm::Wrapper<BXVector<l1t::EGamma> >*)
   {
      ::edm::Wrapper<BXVector<l1t::EGamma> > *ptr = 0;
      static ::TVirtualIsAProxy* isa_proxy = new ::TIsAProxy(typeid(::edm::Wrapper<BXVector<l1t::EGamma> >));
      static ::ROOT::TGenericClassInfo 
         instance("edm::Wrapper<BXVector<l1t::EGamma> >", ::edm::Wrapper<BXVector<l1t::EGamma> >::Class_Version(), "DataFormats/Common/interface/Wrapper.h", 25,
                  typeid(::edm::Wrapper<BXVector<l1t::EGamma> >), ::ROOT::Internal::DefineBehavior(ptr, ptr),
                  &edmcLcLWrapperlEBXVectorlEl1tcLcLEGammagRsPgR_Dictionary, isa_proxy, 0,
                  sizeof(::edm::Wrapper<BXVector<l1t::EGamma> >) );
      instance.SetNew(&new_edmcLcLWrapperlEBXVectorlEl1tcLcLEGammagRsPgR);
      instance.SetNewArray(&newArray_edmcLcLWrapperlEBXVectorlEl1tcLcLEGammagRsPgR);
      instance.SetDelete(&delete_edmcLcLWrapperlEBXVectorlEl1tcLcLEGammagRsPgR);
      instance.SetDeleteArray(&deleteArray_edmcLcLWrapperlEBXVectorlEl1tcLcLEGammagRsPgR);
      instance.SetDestructor(&destruct_edmcLcLWrapperlEBXVectorlEl1tcLcLEGammagRsPgR);

      ::ROOT::AddClassAlternate("edm::Wrapper<BXVector<l1t::EGamma> >","edm::Wrapper<l1t::EGammaBxCollection>");
      return &instance;
   }
   TGenericClassInfo *GenerateInitInstance(const ::edm::Wrapper<BXVector<l1t::EGamma> >*)
   {
      return GenerateInitInstanceLocal((::edm::Wrapper<BXVector<l1t::EGamma> >*)0);
   }
   // Static variable to force the class initialization
   static ::ROOT::TGenericClassInfo *_R__UNIQUE_(Init) = GenerateInitInstanceLocal((const ::edm::Wrapper<BXVector<l1t::EGamma> >*)0x0); R__UseDummy(_R__UNIQUE_(Init));

   // Dictionary for non-ClassDef classes
   static TClass *edmcLcLWrapperlEBXVectorlEl1tcLcLEGammagRsPgR_Dictionary() {
      TClass* theClass =::ROOT::GenerateInitInstanceLocal((const ::edm::Wrapper<BXVector<l1t::EGamma> >*)0x0)->GetClass();
      edmcLcLWrapperlEBXVectorlEl1tcLcLEGammagRsPgR_TClassManip(theClass);
   return theClass;
   }

   static void edmcLcLWrapperlEBXVectorlEl1tcLcLEGammagRsPgR_TClassManip(TClass* ){
   }

} // end of namespace ROOT

namespace ROOT {
   static TClass *edmcLcLReflEBXVectorlEl1tcLcLEGammagRcOl1tcLcLEGammacOedmcLcLrefhelpercLcLFindUsingAdvancelEBXVectorlEl1tcLcLEGammagRcOl1tcLcLEGammagRsPgR_Dictionary();
   static void edmcLcLReflEBXVectorlEl1tcLcLEGammagRcOl1tcLcLEGammacOedmcLcLrefhelpercLcLFindUsingAdvancelEBXVectorlEl1tcLcLEGammagRcOl1tcLcLEGammagRsPgR_TClassManip(TClass*);
   static void *new_edmcLcLReflEBXVectorlEl1tcLcLEGammagRcOl1tcLcLEGammacOedmcLcLrefhelpercLcLFindUsingAdvancelEBXVectorlEl1tcLcLEGammagRcOl1tcLcLEGammagRsPgR(void *p = 0);
   static void *newArray_edmcLcLReflEBXVectorlEl1tcLcLEGammagRcOl1tcLcLEGammacOedmcLcLrefhelpercLcLFindUsingAdvancelEBXVectorlEl1tcLcLEGammagRcOl1tcLcLEGammagRsPgR(Long_t size, void *p);
   static void delete_edmcLcLReflEBXVectorlEl1tcLcLEGammagRcOl1tcLcLEGammacOedmcLcLrefhelpercLcLFindUsingAdvancelEBXVectorlEl1tcLcLEGammagRcOl1tcLcLEGammagRsPgR(void *p);
   static void deleteArray_edmcLcLReflEBXVectorlEl1tcLcLEGammagRcOl1tcLcLEGammacOedmcLcLrefhelpercLcLFindUsingAdvancelEBXVectorlEl1tcLcLEGammagRcOl1tcLcLEGammagRsPgR(void *p);
   static void destruct_edmcLcLReflEBXVectorlEl1tcLcLEGammagRcOl1tcLcLEGammacOedmcLcLrefhelpercLcLFindUsingAdvancelEBXVectorlEl1tcLcLEGammagRcOl1tcLcLEGammagRsPgR(void *p);

   // Function generating the singleton type initializer
   static TGenericClassInfo *GenerateInitInstanceLocal(const ::edm::Ref<BXVector<l1t::EGamma>,l1t::EGamma,edm::refhelper::FindUsingAdvance<BXVector<l1t::EGamma>,l1t::EGamma> >*)
   {
      ::edm::Ref<BXVector<l1t::EGamma>,l1t::EGamma,edm::refhelper::FindUsingAdvance<BXVector<l1t::EGamma>,l1t::EGamma> > *ptr = 0;
      static ::TVirtualIsAProxy* isa_proxy = new ::TIsAProxy(typeid(::edm::Ref<BXVector<l1t::EGamma>,l1t::EGamma,edm::refhelper::FindUsingAdvance<BXVector<l1t::EGamma>,l1t::EGamma> >));
      static ::ROOT::TGenericClassInfo 
         instance("edm::Ref<BXVector<l1t::EGamma>,l1t::EGamma,edm::refhelper::FindUsingAdvance<BXVector<l1t::EGamma>,l1t::EGamma> >", ::edm::Ref<BXVector<l1t::EGamma>,l1t::EGamma,edm::refhelper::FindUsingAdvance<BXVector<l1t::EGamma>,l1t::EGamma> >::Class_Version(), "DataFormats/Common/interface/Ref.h", 152,
                  typeid(::edm::Ref<BXVector<l1t::EGamma>,l1t::EGamma,edm::refhelper::FindUsingAdvance<BXVector<l1t::EGamma>,l1t::EGamma> >), ::ROOT::Internal::DefineBehavior(ptr, ptr),
                  &edmcLcLReflEBXVectorlEl1tcLcLEGammagRcOl1tcLcLEGammacOedmcLcLrefhelpercLcLFindUsingAdvancelEBXVectorlEl1tcLcLEGammagRcOl1tcLcLEGammagRsPgR_Dictionary, isa_proxy, 0,
                  sizeof(::edm::Ref<BXVector<l1t::EGamma>,l1t::EGamma,edm::refhelper::FindUsingAdvance<BXVector<l1t::EGamma>,l1t::EGamma> >) );
      instance.SetNew(&new_edmcLcLReflEBXVectorlEl1tcLcLEGammagRcOl1tcLcLEGammacOedmcLcLrefhelpercLcLFindUsingAdvancelEBXVectorlEl1tcLcLEGammagRcOl1tcLcLEGammagRsPgR);
      instance.SetNewArray(&newArray_edmcLcLReflEBXVectorlEl1tcLcLEGammagRcOl1tcLcLEGammacOedmcLcLrefhelpercLcLFindUsingAdvancelEBXVectorlEl1tcLcLEGammagRcOl1tcLcLEGammagRsPgR);
      instance.SetDelete(&delete_edmcLcLReflEBXVectorlEl1tcLcLEGammagRcOl1tcLcLEGammacOedmcLcLrefhelpercLcLFindUsingAdvancelEBXVectorlEl1tcLcLEGammagRcOl1tcLcLEGammagRsPgR);
      instance.SetDeleteArray(&deleteArray_edmcLcLReflEBXVectorlEl1tcLcLEGammagRcOl1tcLcLEGammacOedmcLcLrefhelpercLcLFindUsingAdvancelEBXVectorlEl1tcLcLEGammagRcOl1tcLcLEGammagRsPgR);
      instance.SetDestructor(&destruct_edmcLcLReflEBXVectorlEl1tcLcLEGammagRcOl1tcLcLEGammacOedmcLcLrefhelpercLcLFindUsingAdvancelEBXVectorlEl1tcLcLEGammagRcOl1tcLcLEGammagRsPgR);

      ::ROOT::AddClassAlternate("edm::Ref<BXVector<l1t::EGamma>,l1t::EGamma,edm::refhelper::FindUsingAdvance<BXVector<l1t::EGamma>,l1t::EGamma> >","l1t::EGammaRef");
      return &instance;
   }
   TGenericClassInfo *GenerateInitInstance(const ::edm::Ref<BXVector<l1t::EGamma>,l1t::EGamma,edm::refhelper::FindUsingAdvance<BXVector<l1t::EGamma>,l1t::EGamma> >*)
   {
      return GenerateInitInstanceLocal((::edm::Ref<BXVector<l1t::EGamma>,l1t::EGamma,edm::refhelper::FindUsingAdvance<BXVector<l1t::EGamma>,l1t::EGamma> >*)0);
   }
   // Static variable to force the class initialization
   static ::ROOT::TGenericClassInfo *_R__UNIQUE_(Init) = GenerateInitInstanceLocal((const ::edm::Ref<BXVector<l1t::EGamma>,l1t::EGamma,edm::refhelper::FindUsingAdvance<BXVector<l1t::EGamma>,l1t::EGamma> >*)0x0); R__UseDummy(_R__UNIQUE_(Init));

   // Dictionary for non-ClassDef classes
   static TClass *edmcLcLReflEBXVectorlEl1tcLcLEGammagRcOl1tcLcLEGammacOedmcLcLrefhelpercLcLFindUsingAdvancelEBXVectorlEl1tcLcLEGammagRcOl1tcLcLEGammagRsPgR_Dictionary() {
      TClass* theClass =::ROOT::GenerateInitInstanceLocal((const ::edm::Ref<BXVector<l1t::EGamma>,l1t::EGamma,edm::refhelper::FindUsingAdvance<BXVector<l1t::EGamma>,l1t::EGamma> >*)0x0)->GetClass();
      edmcLcLReflEBXVectorlEl1tcLcLEGammagRcOl1tcLcLEGammacOedmcLcLrefhelpercLcLFindUsingAdvancelEBXVectorlEl1tcLcLEGammagRcOl1tcLcLEGammagRsPgR_TClassManip(theClass);
   return theClass;
   }

   static void edmcLcLReflEBXVectorlEl1tcLcLEGammagRcOl1tcLcLEGammacOedmcLcLrefhelpercLcLFindUsingAdvancelEBXVectorlEl1tcLcLEGammagRcOl1tcLcLEGammagRsPgR_TClassManip(TClass* ){
   }

} // end of namespace ROOT

namespace ROOT {
   static TClass *edmcLcLWrapperlEedmcLcLReflEBXVectorlEl1tcLcLEGammagRcOl1tcLcLEGammacOedmcLcLrefhelpercLcLFindUsingAdvancelEBXVectorlEl1tcLcLEGammagRcOl1tcLcLEGammagRsPgRsPgR_Dictionary();
   static void edmcLcLWrapperlEedmcLcLReflEBXVectorlEl1tcLcLEGammagRcOl1tcLcLEGammacOedmcLcLrefhelpercLcLFindUsingAdvancelEBXVectorlEl1tcLcLEGammagRcOl1tcLcLEGammagRsPgRsPgR_TClassManip(TClass*);
   static void *new_edmcLcLWrapperlEedmcLcLReflEBXVectorlEl1tcLcLEGammagRcOl1tcLcLEGammacOedmcLcLrefhelpercLcLFindUsingAdvancelEBXVectorlEl1tcLcLEGammagRcOl1tcLcLEGammagRsPgRsPgR(void *p = 0);
   static void *newArray_edmcLcLWrapperlEedmcLcLReflEBXVectorlEl1tcLcLEGammagRcOl1tcLcLEGammacOedmcLcLrefhelpercLcLFindUsingAdvancelEBXVectorlEl1tcLcLEGammagRcOl1tcLcLEGammagRsPgRsPgR(Long_t size, void *p);
   static void delete_edmcLcLWrapperlEedmcLcLReflEBXVectorlEl1tcLcLEGammagRcOl1tcLcLEGammacOedmcLcLrefhelpercLcLFindUsingAdvancelEBXVectorlEl1tcLcLEGammagRcOl1tcLcLEGammagRsPgRsPgR(void *p);
   static void deleteArray_edmcLcLWrapperlEedmcLcLReflEBXVectorlEl1tcLcLEGammagRcOl1tcLcLEGammacOedmcLcLrefhelpercLcLFindUsingAdvancelEBXVectorlEl1tcLcLEGammagRcOl1tcLcLEGammagRsPgRsPgR(void *p);
   static void destruct_edmcLcLWrapperlEedmcLcLReflEBXVectorlEl1tcLcLEGammagRcOl1tcLcLEGammacOedmcLcLrefhelpercLcLFindUsingAdvancelEBXVectorlEl1tcLcLEGammagRcOl1tcLcLEGammagRsPgRsPgR(void *p);

   // Function generating the singleton type initializer
   static TGenericClassInfo *GenerateInitInstanceLocal(const ::edm::Wrapper<edm::Ref<BXVector<l1t::EGamma>,l1t::EGamma,edm::refhelper::FindUsingAdvance<BXVector<l1t::EGamma>,l1t::EGamma> > >*)
   {
      ::edm::Wrapper<edm::Ref<BXVector<l1t::EGamma>,l1t::EGamma,edm::refhelper::FindUsingAdvance<BXVector<l1t::EGamma>,l1t::EGamma> > > *ptr = 0;
      static ::TVirtualIsAProxy* isa_proxy = new ::TIsAProxy(typeid(::edm::Wrapper<edm::Ref<BXVector<l1t::EGamma>,l1t::EGamma,edm::refhelper::FindUsingAdvance<BXVector<l1t::EGamma>,l1t::EGamma> > >));
      static ::ROOT::TGenericClassInfo 
         instance("edm::Wrapper<edm::Ref<BXVector<l1t::EGamma>,l1t::EGamma,edm::refhelper::FindUsingAdvance<BXVector<l1t::EGamma>,l1t::EGamma> > >", ::edm::Wrapper<edm::Ref<BXVector<l1t::EGamma>,l1t::EGamma,edm::refhelper::FindUsingAdvance<BXVector<l1t::EGamma>,l1t::EGamma> > >::Class_Version(), "DataFormats/Common/interface/Wrapper.h", 25,
                  typeid(::edm::Wrapper<edm::Ref<BXVector<l1t::EGamma>,l1t::EGamma,edm::refhelper::FindUsingAdvance<BXVector<l1t::EGamma>,l1t::EGamma> > >), ::ROOT::Internal::DefineBehavior(ptr, ptr),
                  &edmcLcLWrapperlEedmcLcLReflEBXVectorlEl1tcLcLEGammagRcOl1tcLcLEGammacOedmcLcLrefhelpercLcLFindUsingAdvancelEBXVectorlEl1tcLcLEGammagRcOl1tcLcLEGammagRsPgRsPgR_Dictionary, isa_proxy, 0,
                  sizeof(::edm::Wrapper<edm::Ref<BXVector<l1t::EGamma>,l1t::EGamma,edm::refhelper::FindUsingAdvance<BXVector<l1t::EGamma>,l1t::EGamma> > >) );
      instance.SetNew(&new_edmcLcLWrapperlEedmcLcLReflEBXVectorlEl1tcLcLEGammagRcOl1tcLcLEGammacOedmcLcLrefhelpercLcLFindUsingAdvancelEBXVectorlEl1tcLcLEGammagRcOl1tcLcLEGammagRsPgRsPgR);
      instance.SetNewArray(&newArray_edmcLcLWrapperlEedmcLcLReflEBXVectorlEl1tcLcLEGammagRcOl1tcLcLEGammacOedmcLcLrefhelpercLcLFindUsingAdvancelEBXVectorlEl1tcLcLEGammagRcOl1tcLcLEGammagRsPgRsPgR);
      instance.SetDelete(&delete_edmcLcLWrapperlEedmcLcLReflEBXVectorlEl1tcLcLEGammagRcOl1tcLcLEGammacOedmcLcLrefhelpercLcLFindUsingAdvancelEBXVectorlEl1tcLcLEGammagRcOl1tcLcLEGammagRsPgRsPgR);
      instance.SetDeleteArray(&deleteArray_edmcLcLWrapperlEedmcLcLReflEBXVectorlEl1tcLcLEGammagRcOl1tcLcLEGammacOedmcLcLrefhelpercLcLFindUsingAdvancelEBXVectorlEl1tcLcLEGammagRcOl1tcLcLEGammagRsPgRsPgR);
      instance.SetDestructor(&destruct_edmcLcLWrapperlEedmcLcLReflEBXVectorlEl1tcLcLEGammagRcOl1tcLcLEGammacOedmcLcLrefhelpercLcLFindUsingAdvancelEBXVectorlEl1tcLcLEGammagRcOl1tcLcLEGammagRsPgRsPgR);

      ::ROOT::AddClassAlternate("edm::Wrapper<edm::Ref<BXVector<l1t::EGamma>,l1t::EGamma,edm::refhelper::FindUsingAdvance<BXVector<l1t::EGamma>,l1t::EGamma> > >","edm::Wrapper<l1t::EGammaRef>");
      return &instance;
   }
   TGenericClassInfo *GenerateInitInstance(const ::edm::Wrapper<edm::Ref<BXVector<l1t::EGamma>,l1t::EGamma,edm::refhelper::FindUsingAdvance<BXVector<l1t::EGamma>,l1t::EGamma> > >*)
   {
      return GenerateInitInstanceLocal((::edm::Wrapper<edm::Ref<BXVector<l1t::EGamma>,l1t::EGamma,edm::refhelper::FindUsingAdvance<BXVector<l1t::EGamma>,l1t::EGamma> > >*)0);
   }
   // Static variable to force the class initialization
   static ::ROOT::TGenericClassInfo *_R__UNIQUE_(Init) = GenerateInitInstanceLocal((const ::edm::Wrapper<edm::Ref<BXVector<l1t::EGamma>,l1t::EGamma,edm::refhelper::FindUsingAdvance<BXVector<l1t::EGamma>,l1t::EGamma> > >*)0x0); R__UseDummy(_R__UNIQUE_(Init));

   // Dictionary for non-ClassDef classes
   static TClass *edmcLcLWrapperlEedmcLcLReflEBXVectorlEl1tcLcLEGammagRcOl1tcLcLEGammacOedmcLcLrefhelpercLcLFindUsingAdvancelEBXVectorlEl1tcLcLEGammagRcOl1tcLcLEGammagRsPgRsPgR_Dictionary() {
      TClass* theClass =::ROOT::GenerateInitInstanceLocal((const ::edm::Wrapper<edm::Ref<BXVector<l1t::EGamma>,l1t::EGamma,edm::refhelper::FindUsingAdvance<BXVector<l1t::EGamma>,l1t::EGamma> > >*)0x0)->GetClass();
      edmcLcLWrapperlEedmcLcLReflEBXVectorlEl1tcLcLEGammagRcOl1tcLcLEGammacOedmcLcLrefhelpercLcLFindUsingAdvancelEBXVectorlEl1tcLcLEGammagRcOl1tcLcLEGammagRsPgRsPgR_TClassManip(theClass);
   return theClass;
   }

   static void edmcLcLWrapperlEedmcLcLReflEBXVectorlEl1tcLcLEGammagRcOl1tcLcLEGammacOedmcLcLrefhelpercLcLFindUsingAdvancelEBXVectorlEl1tcLcLEGammagRcOl1tcLcLEGammagRsPgRsPgR_TClassManip(TClass* ){
   }

} // end of namespace ROOT

namespace ROOT {
   static TClass *edmcLcLRefVectorlEBXVectorlEl1tcLcLEGammagRcOl1tcLcLEGammacOedmcLcLrefhelpercLcLFindUsingAdvancelEBXVectorlEl1tcLcLEGammagRcOl1tcLcLEGammagRsPgR_Dictionary();
   static void edmcLcLRefVectorlEBXVectorlEl1tcLcLEGammagRcOl1tcLcLEGammacOedmcLcLrefhelpercLcLFindUsingAdvancelEBXVectorlEl1tcLcLEGammagRcOl1tcLcLEGammagRsPgR_TClassManip(TClass*);
   static void *new_edmcLcLRefVectorlEBXVectorlEl1tcLcLEGammagRcOl1tcLcLEGammacOedmcLcLrefhelpercLcLFindUsingAdvancelEBXVectorlEl1tcLcLEGammagRcOl1tcLcLEGammagRsPgR(void *p = 0);
   static void *newArray_edmcLcLRefVectorlEBXVectorlEl1tcLcLEGammagRcOl1tcLcLEGammacOedmcLcLrefhelpercLcLFindUsingAdvancelEBXVectorlEl1tcLcLEGammagRcOl1tcLcLEGammagRsPgR(Long_t size, void *p);
   static void delete_edmcLcLRefVectorlEBXVectorlEl1tcLcLEGammagRcOl1tcLcLEGammacOedmcLcLrefhelpercLcLFindUsingAdvancelEBXVectorlEl1tcLcLEGammagRcOl1tcLcLEGammagRsPgR(void *p);
   static void deleteArray_edmcLcLRefVectorlEBXVectorlEl1tcLcLEGammagRcOl1tcLcLEGammacOedmcLcLrefhelpercLcLFindUsingAdvancelEBXVectorlEl1tcLcLEGammagRcOl1tcLcLEGammagRsPgR(void *p);
   static void destruct_edmcLcLRefVectorlEBXVectorlEl1tcLcLEGammagRcOl1tcLcLEGammacOedmcLcLrefhelpercLcLFindUsingAdvancelEBXVectorlEl1tcLcLEGammagRcOl1tcLcLEGammagRsPgR(void *p);

   // Function generating the singleton type initializer
   static TGenericClassInfo *GenerateInitInstanceLocal(const ::edm::RefVector<BXVector<l1t::EGamma>,l1t::EGamma,edm::refhelper::FindUsingAdvance<BXVector<l1t::EGamma>,l1t::EGamma> >*)
   {
      ::edm::RefVector<BXVector<l1t::EGamma>,l1t::EGamma,edm::refhelper::FindUsingAdvance<BXVector<l1t::EGamma>,l1t::EGamma> > *ptr = 0;
      static ::TVirtualIsAProxy* isa_proxy = new ::TIsAProxy(typeid(::edm::RefVector<BXVector<l1t::EGamma>,l1t::EGamma,edm::refhelper::FindUsingAdvance<BXVector<l1t::EGamma>,l1t::EGamma> >));
      static ::ROOT::TGenericClassInfo 
         instance("edm::RefVector<BXVector<l1t::EGamma>,l1t::EGamma,edm::refhelper::FindUsingAdvance<BXVector<l1t::EGamma>,l1t::EGamma> >", ::edm::RefVector<BXVector<l1t::EGamma>,l1t::EGamma,edm::refhelper::FindUsingAdvance<BXVector<l1t::EGamma>,l1t::EGamma> >::Class_Version(), "DataFormats/Common/interface/RefVector.h", 33,
                  typeid(::edm::RefVector<BXVector<l1t::EGamma>,l1t::EGamma,edm::refhelper::FindUsingAdvance<BXVector<l1t::EGamma>,l1t::EGamma> >), ::ROOT::Internal::DefineBehavior(ptr, ptr),
                  &edmcLcLRefVectorlEBXVectorlEl1tcLcLEGammagRcOl1tcLcLEGammacOedmcLcLrefhelpercLcLFindUsingAdvancelEBXVectorlEl1tcLcLEGammagRcOl1tcLcLEGammagRsPgR_Dictionary, isa_proxy, 0,
                  sizeof(::edm::RefVector<BXVector<l1t::EGamma>,l1t::EGamma,edm::refhelper::FindUsingAdvance<BXVector<l1t::EGamma>,l1t::EGamma> >) );
      instance.SetNew(&new_edmcLcLRefVectorlEBXVectorlEl1tcLcLEGammagRcOl1tcLcLEGammacOedmcLcLrefhelpercLcLFindUsingAdvancelEBXVectorlEl1tcLcLEGammagRcOl1tcLcLEGammagRsPgR);
      instance.SetNewArray(&newArray_edmcLcLRefVectorlEBXVectorlEl1tcLcLEGammagRcOl1tcLcLEGammacOedmcLcLrefhelpercLcLFindUsingAdvancelEBXVectorlEl1tcLcLEGammagRcOl1tcLcLEGammagRsPgR);
      instance.SetDelete(&delete_edmcLcLRefVectorlEBXVectorlEl1tcLcLEGammagRcOl1tcLcLEGammacOedmcLcLrefhelpercLcLFindUsingAdvancelEBXVectorlEl1tcLcLEGammagRcOl1tcLcLEGammagRsPgR);
      instance.SetDeleteArray(&deleteArray_edmcLcLRefVectorlEBXVectorlEl1tcLcLEGammagRcOl1tcLcLEGammacOedmcLcLrefhelpercLcLFindUsingAdvancelEBXVectorlEl1tcLcLEGammagRcOl1tcLcLEGammagRsPgR);
      instance.SetDestructor(&destruct_edmcLcLRefVectorlEBXVectorlEl1tcLcLEGammagRcOl1tcLcLEGammacOedmcLcLrefhelpercLcLFindUsingAdvancelEBXVectorlEl1tcLcLEGammagRcOl1tcLcLEGammagRsPgR);

      ::ROOT::AddClassAlternate("edm::RefVector<BXVector<l1t::EGamma>,l1t::EGamma,edm::refhelper::FindUsingAdvance<BXVector<l1t::EGamma>,l1t::EGamma> >","l1t::EGammaRefVector");
      return &instance;
   }
   TGenericClassInfo *GenerateInitInstance(const ::edm::RefVector<BXVector<l1t::EGamma>,l1t::EGamma,edm::refhelper::FindUsingAdvance<BXVector<l1t::EGamma>,l1t::EGamma> >*)
   {
      return GenerateInitInstanceLocal((::edm::RefVector<BXVector<l1t::EGamma>,l1t::EGamma,edm::refhelper::FindUsingAdvance<BXVector<l1t::EGamma>,l1t::EGamma> >*)0);
   }
   // Static variable to force the class initialization
   static ::ROOT::TGenericClassInfo *_R__UNIQUE_(Init) = GenerateInitInstanceLocal((const ::edm::RefVector<BXVector<l1t::EGamma>,l1t::EGamma,edm::refhelper::FindUsingAdvance<BXVector<l1t::EGamma>,l1t::EGamma> >*)0x0); R__UseDummy(_R__UNIQUE_(Init));

   // Dictionary for non-ClassDef classes
   static TClass *edmcLcLRefVectorlEBXVectorlEl1tcLcLEGammagRcOl1tcLcLEGammacOedmcLcLrefhelpercLcLFindUsingAdvancelEBXVectorlEl1tcLcLEGammagRcOl1tcLcLEGammagRsPgR_Dictionary() {
      TClass* theClass =::ROOT::GenerateInitInstanceLocal((const ::edm::RefVector<BXVector<l1t::EGamma>,l1t::EGamma,edm::refhelper::FindUsingAdvance<BXVector<l1t::EGamma>,l1t::EGamma> >*)0x0)->GetClass();
      edmcLcLRefVectorlEBXVectorlEl1tcLcLEGammagRcOl1tcLcLEGammacOedmcLcLrefhelpercLcLFindUsingAdvancelEBXVectorlEl1tcLcLEGammagRcOl1tcLcLEGammagRsPgR_TClassManip(theClass);
   return theClass;
   }

   static void edmcLcLRefVectorlEBXVectorlEl1tcLcLEGammagRcOl1tcLcLEGammacOedmcLcLrefhelpercLcLFindUsingAdvancelEBXVectorlEl1tcLcLEGammagRcOl1tcLcLEGammagRsPgR_TClassManip(TClass* ){
   }

} // end of namespace ROOT

namespace ROOT {
   static TClass *edmcLcLWrapperlEedmcLcLRefVectorlEBXVectorlEl1tcLcLEGammagRcOl1tcLcLEGammacOedmcLcLrefhelpercLcLFindUsingAdvancelEBXVectorlEl1tcLcLEGammagRcOl1tcLcLEGammagRsPgRsPgR_Dictionary();
   static void edmcLcLWrapperlEedmcLcLRefVectorlEBXVectorlEl1tcLcLEGammagRcOl1tcLcLEGammacOedmcLcLrefhelpercLcLFindUsingAdvancelEBXVectorlEl1tcLcLEGammagRcOl1tcLcLEGammagRsPgRsPgR_TClassManip(TClass*);
   static void *new_edmcLcLWrapperlEedmcLcLRefVectorlEBXVectorlEl1tcLcLEGammagRcOl1tcLcLEGammacOedmcLcLrefhelpercLcLFindUsingAdvancelEBXVectorlEl1tcLcLEGammagRcOl1tcLcLEGammagRsPgRsPgR(void *p = 0);
   static void *newArray_edmcLcLWrapperlEedmcLcLRefVectorlEBXVectorlEl1tcLcLEGammagRcOl1tcLcLEGammacOedmcLcLrefhelpercLcLFindUsingAdvancelEBXVectorlEl1tcLcLEGammagRcOl1tcLcLEGammagRsPgRsPgR(Long_t size, void *p);
   static void delete_edmcLcLWrapperlEedmcLcLRefVectorlEBXVectorlEl1tcLcLEGammagRcOl1tcLcLEGammacOedmcLcLrefhelpercLcLFindUsingAdvancelEBXVectorlEl1tcLcLEGammagRcOl1tcLcLEGammagRsPgRsPgR(void *p);
   static void deleteArray_edmcLcLWrapperlEedmcLcLRefVectorlEBXVectorlEl1tcLcLEGammagRcOl1tcLcLEGammacOedmcLcLrefhelpercLcLFindUsingAdvancelEBXVectorlEl1tcLcLEGammagRcOl1tcLcLEGammagRsPgRsPgR(void *p);
   static void destruct_edmcLcLWrapperlEedmcLcLRefVectorlEBXVectorlEl1tcLcLEGammagRcOl1tcLcLEGammacOedmcLcLrefhelpercLcLFindUsingAdvancelEBXVectorlEl1tcLcLEGammagRcOl1tcLcLEGammagRsPgRsPgR(void *p);

   // Function generating the singleton type initializer
   static TGenericClassInfo *GenerateInitInstanceLocal(const ::edm::Wrapper<edm::RefVector<BXVector<l1t::EGamma>,l1t::EGamma,edm::refhelper::FindUsingAdvance<BXVector<l1t::EGamma>,l1t::EGamma> > >*)
   {
      ::edm::Wrapper<edm::RefVector<BXVector<l1t::EGamma>,l1t::EGamma,edm::refhelper::FindUsingAdvance<BXVector<l1t::EGamma>,l1t::EGamma> > > *ptr = 0;
      static ::TVirtualIsAProxy* isa_proxy = new ::TIsAProxy(typeid(::edm::Wrapper<edm::RefVector<BXVector<l1t::EGamma>,l1t::EGamma,edm::refhelper::FindUsingAdvance<BXVector<l1t::EGamma>,l1t::EGamma> > >));
      static ::ROOT::TGenericClassInfo 
         instance("edm::Wrapper<edm::RefVector<BXVector<l1t::EGamma>,l1t::EGamma,edm::refhelper::FindUsingAdvance<BXVector<l1t::EGamma>,l1t::EGamma> > >", ::edm::Wrapper<edm::RefVector<BXVector<l1t::EGamma>,l1t::EGamma,edm::refhelper::FindUsingAdvance<BXVector<l1t::EGamma>,l1t::EGamma> > >::Class_Version(), "DataFormats/Common/interface/Wrapper.h", 25,
                  typeid(::edm::Wrapper<edm::RefVector<BXVector<l1t::EGamma>,l1t::EGamma,edm::refhelper::FindUsingAdvance<BXVector<l1t::EGamma>,l1t::EGamma> > >), ::ROOT::Internal::DefineBehavior(ptr, ptr),
                  &edmcLcLWrapperlEedmcLcLRefVectorlEBXVectorlEl1tcLcLEGammagRcOl1tcLcLEGammacOedmcLcLrefhelpercLcLFindUsingAdvancelEBXVectorlEl1tcLcLEGammagRcOl1tcLcLEGammagRsPgRsPgR_Dictionary, isa_proxy, 0,
                  sizeof(::edm::Wrapper<edm::RefVector<BXVector<l1t::EGamma>,l1t::EGamma,edm::refhelper::FindUsingAdvance<BXVector<l1t::EGamma>,l1t::EGamma> > >) );
      instance.SetNew(&new_edmcLcLWrapperlEedmcLcLRefVectorlEBXVectorlEl1tcLcLEGammagRcOl1tcLcLEGammacOedmcLcLrefhelpercLcLFindUsingAdvancelEBXVectorlEl1tcLcLEGammagRcOl1tcLcLEGammagRsPgRsPgR);
      instance.SetNewArray(&newArray_edmcLcLWrapperlEedmcLcLRefVectorlEBXVectorlEl1tcLcLEGammagRcOl1tcLcLEGammacOedmcLcLrefhelpercLcLFindUsingAdvancelEBXVectorlEl1tcLcLEGammagRcOl1tcLcLEGammagRsPgRsPgR);
      instance.SetDelete(&delete_edmcLcLWrapperlEedmcLcLRefVectorlEBXVectorlEl1tcLcLEGammagRcOl1tcLcLEGammacOedmcLcLrefhelpercLcLFindUsingAdvancelEBXVectorlEl1tcLcLEGammagRcOl1tcLcLEGammagRsPgRsPgR);
      instance.SetDeleteArray(&deleteArray_edmcLcLWrapperlEedmcLcLRefVectorlEBXVectorlEl1tcLcLEGammagRcOl1tcLcLEGammacOedmcLcLrefhelpercLcLFindUsingAdvancelEBXVectorlEl1tcLcLEGammagRcOl1tcLcLEGammagRsPgRsPgR);
      instance.SetDestructor(&destruct_edmcLcLWrapperlEedmcLcLRefVectorlEBXVectorlEl1tcLcLEGammagRcOl1tcLcLEGammacOedmcLcLrefhelpercLcLFindUsingAdvancelEBXVectorlEl1tcLcLEGammagRcOl1tcLcLEGammagRsPgRsPgR);

      ::ROOT::AddClassAlternate("edm::Wrapper<edm::RefVector<BXVector<l1t::EGamma>,l1t::EGamma,edm::refhelper::FindUsingAdvance<BXVector<l1t::EGamma>,l1t::EGamma> > >","edm::Wrapper<l1t::EGammaRefVector>");
      return &instance;
   }
   TGenericClassInfo *GenerateInitInstance(const ::edm::Wrapper<edm::RefVector<BXVector<l1t::EGamma>,l1t::EGamma,edm::refhelper::FindUsingAdvance<BXVector<l1t::EGamma>,l1t::EGamma> > >*)
   {
      return GenerateInitInstanceLocal((::edm::Wrapper<edm::RefVector<BXVector<l1t::EGamma>,l1t::EGamma,edm::refhelper::FindUsingAdvance<BXVector<l1t::EGamma>,l1t::EGamma> > >*)0);
   }
   // Static variable to force the class initialization
   static ::ROOT::TGenericClassInfo *_R__UNIQUE_(Init) = GenerateInitInstanceLocal((const ::edm::Wrapper<edm::RefVector<BXVector<l1t::EGamma>,l1t::EGamma,edm::refhelper::FindUsingAdvance<BXVector<l1t::EGamma>,l1t::EGamma> > >*)0x0); R__UseDummy(_R__UNIQUE_(Init));

   // Dictionary for non-ClassDef classes
   static TClass *edmcLcLWrapperlEedmcLcLRefVectorlEBXVectorlEl1tcLcLEGammagRcOl1tcLcLEGammacOedmcLcLrefhelpercLcLFindUsingAdvancelEBXVectorlEl1tcLcLEGammagRcOl1tcLcLEGammagRsPgRsPgR_Dictionary() {
      TClass* theClass =::ROOT::GenerateInitInstanceLocal((const ::edm::Wrapper<edm::RefVector<BXVector<l1t::EGamma>,l1t::EGamma,edm::refhelper::FindUsingAdvance<BXVector<l1t::EGamma>,l1t::EGamma> > >*)0x0)->GetClass();
      edmcLcLWrapperlEedmcLcLRefVectorlEBXVectorlEl1tcLcLEGammagRcOl1tcLcLEGammacOedmcLcLrefhelpercLcLFindUsingAdvancelEBXVectorlEl1tcLcLEGammagRcOl1tcLcLEGammagRsPgRsPgR_TClassManip(theClass);
   return theClass;
   }

   static void edmcLcLWrapperlEedmcLcLRefVectorlEBXVectorlEl1tcLcLEGammagRcOl1tcLcLEGammacOedmcLcLrefhelpercLcLFindUsingAdvancelEBXVectorlEl1tcLcLEGammagRcOl1tcLcLEGammagRsPgRsPgR_TClassManip(TClass* ){
   }

} // end of namespace ROOT

namespace ROOT {
   static TClass *edmcLcLWrapperlEvectorlEedmcLcLReflEBXVectorlEl1tcLcLEGammagRcOl1tcLcLEGammacOedmcLcLrefhelpercLcLFindUsingAdvancelEBXVectorlEl1tcLcLEGammagRcOl1tcLcLEGammagRsPgRsPgRsPgR_Dictionary();
   static void edmcLcLWrapperlEvectorlEedmcLcLReflEBXVectorlEl1tcLcLEGammagRcOl1tcLcLEGammacOedmcLcLrefhelpercLcLFindUsingAdvancelEBXVectorlEl1tcLcLEGammagRcOl1tcLcLEGammagRsPgRsPgRsPgR_TClassManip(TClass*);
   static void *new_edmcLcLWrapperlEvectorlEedmcLcLReflEBXVectorlEl1tcLcLEGammagRcOl1tcLcLEGammacOedmcLcLrefhelpercLcLFindUsingAdvancelEBXVectorlEl1tcLcLEGammagRcOl1tcLcLEGammagRsPgRsPgRsPgR(void *p = 0);
   static void *newArray_edmcLcLWrapperlEvectorlEedmcLcLReflEBXVectorlEl1tcLcLEGammagRcOl1tcLcLEGammacOedmcLcLrefhelpercLcLFindUsingAdvancelEBXVectorlEl1tcLcLEGammagRcOl1tcLcLEGammagRsPgRsPgRsPgR(Long_t size, void *p);
   static void delete_edmcLcLWrapperlEvectorlEedmcLcLReflEBXVectorlEl1tcLcLEGammagRcOl1tcLcLEGammacOedmcLcLrefhelpercLcLFindUsingAdvancelEBXVectorlEl1tcLcLEGammagRcOl1tcLcLEGammagRsPgRsPgRsPgR(void *p);
   static void deleteArray_edmcLcLWrapperlEvectorlEedmcLcLReflEBXVectorlEl1tcLcLEGammagRcOl1tcLcLEGammacOedmcLcLrefhelpercLcLFindUsingAdvancelEBXVectorlEl1tcLcLEGammagRcOl1tcLcLEGammagRsPgRsPgRsPgR(void *p);
   static void destruct_edmcLcLWrapperlEvectorlEedmcLcLReflEBXVectorlEl1tcLcLEGammagRcOl1tcLcLEGammacOedmcLcLrefhelpercLcLFindUsingAdvancelEBXVectorlEl1tcLcLEGammagRcOl1tcLcLEGammagRsPgRsPgRsPgR(void *p);

   // Function generating the singleton type initializer
   static TGenericClassInfo *GenerateInitInstanceLocal(const ::edm::Wrapper<vector<edm::Ref<BXVector<l1t::EGamma>,l1t::EGamma,edm::refhelper::FindUsingAdvance<BXVector<l1t::EGamma>,l1t::EGamma> > > >*)
   {
      ::edm::Wrapper<vector<edm::Ref<BXVector<l1t::EGamma>,l1t::EGamma,edm::refhelper::FindUsingAdvance<BXVector<l1t::EGamma>,l1t::EGamma> > > > *ptr = 0;
      static ::TVirtualIsAProxy* isa_proxy = new ::TIsAProxy(typeid(::edm::Wrapper<vector<edm::Ref<BXVector<l1t::EGamma>,l1t::EGamma,edm::refhelper::FindUsingAdvance<BXVector<l1t::EGamma>,l1t::EGamma> > > >));
      static ::ROOT::TGenericClassInfo 
         instance("edm::Wrapper<vector<edm::Ref<BXVector<l1t::EGamma>,l1t::EGamma,edm::refhelper::FindUsingAdvance<BXVector<l1t::EGamma>,l1t::EGamma> > > >", ::edm::Wrapper<vector<edm::Ref<BXVector<l1t::EGamma>,l1t::EGamma,edm::refhelper::FindUsingAdvance<BXVector<l1t::EGamma>,l1t::EGamma> > > >::Class_Version(), "DataFormats/Common/interface/Wrapper.h", 25,
                  typeid(::edm::Wrapper<vector<edm::Ref<BXVector<l1t::EGamma>,l1t::EGamma,edm::refhelper::FindUsingAdvance<BXVector<l1t::EGamma>,l1t::EGamma> > > >), ::ROOT::Internal::DefineBehavior(ptr, ptr),
                  &edmcLcLWrapperlEvectorlEedmcLcLReflEBXVectorlEl1tcLcLEGammagRcOl1tcLcLEGammacOedmcLcLrefhelpercLcLFindUsingAdvancelEBXVectorlEl1tcLcLEGammagRcOl1tcLcLEGammagRsPgRsPgRsPgR_Dictionary, isa_proxy, 0,
                  sizeof(::edm::Wrapper<vector<edm::Ref<BXVector<l1t::EGamma>,l1t::EGamma,edm::refhelper::FindUsingAdvance<BXVector<l1t::EGamma>,l1t::EGamma> > > >) );
      instance.SetNew(&new_edmcLcLWrapperlEvectorlEedmcLcLReflEBXVectorlEl1tcLcLEGammagRcOl1tcLcLEGammacOedmcLcLrefhelpercLcLFindUsingAdvancelEBXVectorlEl1tcLcLEGammagRcOl1tcLcLEGammagRsPgRsPgRsPgR);
      instance.SetNewArray(&newArray_edmcLcLWrapperlEvectorlEedmcLcLReflEBXVectorlEl1tcLcLEGammagRcOl1tcLcLEGammacOedmcLcLrefhelpercLcLFindUsingAdvancelEBXVectorlEl1tcLcLEGammagRcOl1tcLcLEGammagRsPgRsPgRsPgR);
      instance.SetDelete(&delete_edmcLcLWrapperlEvectorlEedmcLcLReflEBXVectorlEl1tcLcLEGammagRcOl1tcLcLEGammacOedmcLcLrefhelpercLcLFindUsingAdvancelEBXVectorlEl1tcLcLEGammagRcOl1tcLcLEGammagRsPgRsPgRsPgR);
      instance.SetDeleteArray(&deleteArray_edmcLcLWrapperlEvectorlEedmcLcLReflEBXVectorlEl1tcLcLEGammagRcOl1tcLcLEGammacOedmcLcLrefhelpercLcLFindUsingAdvancelEBXVectorlEl1tcLcLEGammagRcOl1tcLcLEGammagRsPgRsPgRsPgR);
      instance.SetDestructor(&destruct_edmcLcLWrapperlEvectorlEedmcLcLReflEBXVectorlEl1tcLcLEGammagRcOl1tcLcLEGammacOedmcLcLrefhelpercLcLFindUsingAdvancelEBXVectorlEl1tcLcLEGammagRcOl1tcLcLEGammagRsPgRsPgRsPgR);

      ::ROOT::AddClassAlternate("edm::Wrapper<vector<edm::Ref<BXVector<l1t::EGamma>,l1t::EGamma,edm::refhelper::FindUsingAdvance<BXVector<l1t::EGamma>,l1t::EGamma> > > >","edm::Wrapper<l1t::EGammaVectorRef>");
      return &instance;
   }
   TGenericClassInfo *GenerateInitInstance(const ::edm::Wrapper<vector<edm::Ref<BXVector<l1t::EGamma>,l1t::EGamma,edm::refhelper::FindUsingAdvance<BXVector<l1t::EGamma>,l1t::EGamma> > > >*)
   {
      return GenerateInitInstanceLocal((::edm::Wrapper<vector<edm::Ref<BXVector<l1t::EGamma>,l1t::EGamma,edm::refhelper::FindUsingAdvance<BXVector<l1t::EGamma>,l1t::EGamma> > > >*)0);
   }
   // Static variable to force the class initialization
   static ::ROOT::TGenericClassInfo *_R__UNIQUE_(Init) = GenerateInitInstanceLocal((const ::edm::Wrapper<vector<edm::Ref<BXVector<l1t::EGamma>,l1t::EGamma,edm::refhelper::FindUsingAdvance<BXVector<l1t::EGamma>,l1t::EGamma> > > >*)0x0); R__UseDummy(_R__UNIQUE_(Init));

   // Dictionary for non-ClassDef classes
   static TClass *edmcLcLWrapperlEvectorlEedmcLcLReflEBXVectorlEl1tcLcLEGammagRcOl1tcLcLEGammacOedmcLcLrefhelpercLcLFindUsingAdvancelEBXVectorlEl1tcLcLEGammagRcOl1tcLcLEGammagRsPgRsPgRsPgR_Dictionary() {
      TClass* theClass =::ROOT::GenerateInitInstanceLocal((const ::edm::Wrapper<vector<edm::Ref<BXVector<l1t::EGamma>,l1t::EGamma,edm::refhelper::FindUsingAdvance<BXVector<l1t::EGamma>,l1t::EGamma> > > >*)0x0)->GetClass();
      edmcLcLWrapperlEvectorlEedmcLcLReflEBXVectorlEl1tcLcLEGammagRcOl1tcLcLEGammacOedmcLcLrefhelpercLcLFindUsingAdvancelEBXVectorlEl1tcLcLEGammagRcOl1tcLcLEGammagRsPgRsPgRsPgR_TClassManip(theClass);
   return theClass;
   }

   static void edmcLcLWrapperlEvectorlEedmcLcLReflEBXVectorlEl1tcLcLEGammagRcOl1tcLcLEGammacOedmcLcLrefhelpercLcLFindUsingAdvancelEBXVectorlEl1tcLcLEGammagRcOl1tcLcLEGammagRsPgRsPgRsPgR_TClassManip(TClass* ){
   }

} // end of namespace ROOT

namespace ROOT {
   static TClass *l1tcLcLEtSum_Dictionary();
   static void l1tcLcLEtSum_TClassManip(TClass*);
   static void *new_l1tcLcLEtSum(void *p = 0);
   static void *newArray_l1tcLcLEtSum(Long_t size, void *p);
   static void delete_l1tcLcLEtSum(void *p);
   static void deleteArray_l1tcLcLEtSum(void *p);
   static void destruct_l1tcLcLEtSum(void *p);

   // Function generating the singleton type initializer
   static TGenericClassInfo *GenerateInitInstanceLocal(const ::l1t::EtSum*)
   {
      ::l1t::EtSum *ptr = 0;
      static ::TVirtualIsAProxy* isa_proxy = new ::TIsAProxy(typeid(::l1t::EtSum));
      static ::ROOT::TGenericClassInfo 
         instance("l1t::EtSum", 13, "DataFormats/L1Trigger/interface/EtSum.h", 16,
                  typeid(::l1t::EtSum), ::ROOT::Internal::DefineBehavior(ptr, ptr),
                  &l1tcLcLEtSum_Dictionary, isa_proxy, 8,
                  sizeof(::l1t::EtSum) );
      instance.SetNew(&new_l1tcLcLEtSum);
      instance.SetNewArray(&newArray_l1tcLcLEtSum);
      instance.SetDelete(&delete_l1tcLcLEtSum);
      instance.SetDeleteArray(&deleteArray_l1tcLcLEtSum);
      instance.SetDestructor(&destruct_l1tcLcLEtSum);
      return &instance;
   }
   TGenericClassInfo *GenerateInitInstance(const ::l1t::EtSum*)
   {
      return GenerateInitInstanceLocal((::l1t::EtSum*)0);
   }
   // Static variable to force the class initialization
   static ::ROOT::TGenericClassInfo *_R__UNIQUE_(Init) = GenerateInitInstanceLocal((const ::l1t::EtSum*)0x0); R__UseDummy(_R__UNIQUE_(Init));

   // Dictionary for non-ClassDef classes
   static TClass *l1tcLcLEtSum_Dictionary() {
      TClass* theClass =::ROOT::GenerateInitInstanceLocal((const ::l1t::EtSum*)0x0)->GetClass();
      l1tcLcLEtSum_TClassManip(theClass);
   return theClass;
   }

   static void l1tcLcLEtSum_TClassManip(TClass* ){
   }

} // end of namespace ROOT

namespace ROOT {
   static TClass *BXVectorlEl1tcLcLEtSumgR_Dictionary();
   static void BXVectorlEl1tcLcLEtSumgR_TClassManip(TClass*);
   static void *new_BXVectorlEl1tcLcLEtSumgR(void *p = 0);
   static void *newArray_BXVectorlEl1tcLcLEtSumgR(Long_t size, void *p);
   static void delete_BXVectorlEl1tcLcLEtSumgR(void *p);
   static void deleteArray_BXVectorlEl1tcLcLEtSumgR(void *p);
   static void destruct_BXVectorlEl1tcLcLEtSumgR(void *p);

   // Function generating the singleton type initializer
   static TGenericClassInfo *GenerateInitInstanceLocal(const ::BXVector<l1t::EtSum>*)
   {
      ::BXVector<l1t::EtSum> *ptr = 0;
      static ::TVirtualIsAProxy* isa_proxy = new ::TIsAProxy(typeid(::BXVector<l1t::EtSum>));
      static ::ROOT::TGenericClassInfo 
         instance("BXVector<l1t::EtSum>", "DataFormats/L1Trigger/interface/BXVector.h", 15,
                  typeid(::BXVector<l1t::EtSum>), ::ROOT::Internal::DefineBehavior(ptr, ptr),
                  &BXVectorlEl1tcLcLEtSumgR_Dictionary, isa_proxy, 0,
                  sizeof(::BXVector<l1t::EtSum>) );
      instance.SetNew(&new_BXVectorlEl1tcLcLEtSumgR);
      instance.SetNewArray(&newArray_BXVectorlEl1tcLcLEtSumgR);
      instance.SetDelete(&delete_BXVectorlEl1tcLcLEtSumgR);
      instance.SetDeleteArray(&deleteArray_BXVectorlEl1tcLcLEtSumgR);
      instance.SetDestructor(&destruct_BXVectorlEl1tcLcLEtSumgR);

      ::ROOT::AddClassAlternate("BXVector<l1t::EtSum>","l1t::EtSumBxCollection");
      return &instance;
   }
   TGenericClassInfo *GenerateInitInstance(const ::BXVector<l1t::EtSum>*)
   {
      return GenerateInitInstanceLocal((::BXVector<l1t::EtSum>*)0);
   }
   // Static variable to force the class initialization
   static ::ROOT::TGenericClassInfo *_R__UNIQUE_(Init) = GenerateInitInstanceLocal((const ::BXVector<l1t::EtSum>*)0x0); R__UseDummy(_R__UNIQUE_(Init));

   // Dictionary for non-ClassDef classes
   static TClass *BXVectorlEl1tcLcLEtSumgR_Dictionary() {
      TClass* theClass =::ROOT::GenerateInitInstanceLocal((const ::BXVector<l1t::EtSum>*)0x0)->GetClass();
      BXVectorlEl1tcLcLEtSumgR_TClassManip(theClass);
   return theClass;
   }

   static void BXVectorlEl1tcLcLEtSumgR_TClassManip(TClass* ){
   }

} // end of namespace ROOT

namespace ROOT {
   static TClass *edmcLcLWrapperlEBXVectorlEl1tcLcLEtSumgRsPgR_Dictionary();
   static void edmcLcLWrapperlEBXVectorlEl1tcLcLEtSumgRsPgR_TClassManip(TClass*);
   static void *new_edmcLcLWrapperlEBXVectorlEl1tcLcLEtSumgRsPgR(void *p = 0);
   static void *newArray_edmcLcLWrapperlEBXVectorlEl1tcLcLEtSumgRsPgR(Long_t size, void *p);
   static void delete_edmcLcLWrapperlEBXVectorlEl1tcLcLEtSumgRsPgR(void *p);
   static void deleteArray_edmcLcLWrapperlEBXVectorlEl1tcLcLEtSumgRsPgR(void *p);
   static void destruct_edmcLcLWrapperlEBXVectorlEl1tcLcLEtSumgRsPgR(void *p);

   // Function generating the singleton type initializer
   static TGenericClassInfo *GenerateInitInstanceLocal(const ::edm::Wrapper<BXVector<l1t::EtSum> >*)
   {
      ::edm::Wrapper<BXVector<l1t::EtSum> > *ptr = 0;
      static ::TVirtualIsAProxy* isa_proxy = new ::TIsAProxy(typeid(::edm::Wrapper<BXVector<l1t::EtSum> >));
      static ::ROOT::TGenericClassInfo 
         instance("edm::Wrapper<BXVector<l1t::EtSum> >", ::edm::Wrapper<BXVector<l1t::EtSum> >::Class_Version(), "DataFormats/Common/interface/Wrapper.h", 25,
                  typeid(::edm::Wrapper<BXVector<l1t::EtSum> >), ::ROOT::Internal::DefineBehavior(ptr, ptr),
                  &edmcLcLWrapperlEBXVectorlEl1tcLcLEtSumgRsPgR_Dictionary, isa_proxy, 0,
                  sizeof(::edm::Wrapper<BXVector<l1t::EtSum> >) );
      instance.SetNew(&new_edmcLcLWrapperlEBXVectorlEl1tcLcLEtSumgRsPgR);
      instance.SetNewArray(&newArray_edmcLcLWrapperlEBXVectorlEl1tcLcLEtSumgRsPgR);
      instance.SetDelete(&delete_edmcLcLWrapperlEBXVectorlEl1tcLcLEtSumgRsPgR);
      instance.SetDeleteArray(&deleteArray_edmcLcLWrapperlEBXVectorlEl1tcLcLEtSumgRsPgR);
      instance.SetDestructor(&destruct_edmcLcLWrapperlEBXVectorlEl1tcLcLEtSumgRsPgR);

      ::ROOT::AddClassAlternate("edm::Wrapper<BXVector<l1t::EtSum> >","edm::Wrapper<l1t::EtSumBxCollection>");
      return &instance;
   }
   TGenericClassInfo *GenerateInitInstance(const ::edm::Wrapper<BXVector<l1t::EtSum> >*)
   {
      return GenerateInitInstanceLocal((::edm::Wrapper<BXVector<l1t::EtSum> >*)0);
   }
   // Static variable to force the class initialization
   static ::ROOT::TGenericClassInfo *_R__UNIQUE_(Init) = GenerateInitInstanceLocal((const ::edm::Wrapper<BXVector<l1t::EtSum> >*)0x0); R__UseDummy(_R__UNIQUE_(Init));

   // Dictionary for non-ClassDef classes
   static TClass *edmcLcLWrapperlEBXVectorlEl1tcLcLEtSumgRsPgR_Dictionary() {
      TClass* theClass =::ROOT::GenerateInitInstanceLocal((const ::edm::Wrapper<BXVector<l1t::EtSum> >*)0x0)->GetClass();
      edmcLcLWrapperlEBXVectorlEl1tcLcLEtSumgRsPgR_TClassManip(theClass);
   return theClass;
   }

   static void edmcLcLWrapperlEBXVectorlEl1tcLcLEtSumgRsPgR_TClassManip(TClass* ){
   }

} // end of namespace ROOT

namespace ROOT {
   static TClass *edmcLcLReflEBXVectorlEl1tcLcLEtSumgRcOl1tcLcLEtSumcOedmcLcLrefhelpercLcLFindUsingAdvancelEBXVectorlEl1tcLcLEtSumgRcOl1tcLcLEtSumgRsPgR_Dictionary();
   static void edmcLcLReflEBXVectorlEl1tcLcLEtSumgRcOl1tcLcLEtSumcOedmcLcLrefhelpercLcLFindUsingAdvancelEBXVectorlEl1tcLcLEtSumgRcOl1tcLcLEtSumgRsPgR_TClassManip(TClass*);
   static void *new_edmcLcLReflEBXVectorlEl1tcLcLEtSumgRcOl1tcLcLEtSumcOedmcLcLrefhelpercLcLFindUsingAdvancelEBXVectorlEl1tcLcLEtSumgRcOl1tcLcLEtSumgRsPgR(void *p = 0);
   static void *newArray_edmcLcLReflEBXVectorlEl1tcLcLEtSumgRcOl1tcLcLEtSumcOedmcLcLrefhelpercLcLFindUsingAdvancelEBXVectorlEl1tcLcLEtSumgRcOl1tcLcLEtSumgRsPgR(Long_t size, void *p);
   static void delete_edmcLcLReflEBXVectorlEl1tcLcLEtSumgRcOl1tcLcLEtSumcOedmcLcLrefhelpercLcLFindUsingAdvancelEBXVectorlEl1tcLcLEtSumgRcOl1tcLcLEtSumgRsPgR(void *p);
   static void deleteArray_edmcLcLReflEBXVectorlEl1tcLcLEtSumgRcOl1tcLcLEtSumcOedmcLcLrefhelpercLcLFindUsingAdvancelEBXVectorlEl1tcLcLEtSumgRcOl1tcLcLEtSumgRsPgR(void *p);
   static void destruct_edmcLcLReflEBXVectorlEl1tcLcLEtSumgRcOl1tcLcLEtSumcOedmcLcLrefhelpercLcLFindUsingAdvancelEBXVectorlEl1tcLcLEtSumgRcOl1tcLcLEtSumgRsPgR(void *p);

   // Function generating the singleton type initializer
   static TGenericClassInfo *GenerateInitInstanceLocal(const ::edm::Ref<BXVector<l1t::EtSum>,l1t::EtSum,edm::refhelper::FindUsingAdvance<BXVector<l1t::EtSum>,l1t::EtSum> >*)
   {
      ::edm::Ref<BXVector<l1t::EtSum>,l1t::EtSum,edm::refhelper::FindUsingAdvance<BXVector<l1t::EtSum>,l1t::EtSum> > *ptr = 0;
      static ::TVirtualIsAProxy* isa_proxy = new ::TIsAProxy(typeid(::edm::Ref<BXVector<l1t::EtSum>,l1t::EtSum,edm::refhelper::FindUsingAdvance<BXVector<l1t::EtSum>,l1t::EtSum> >));
      static ::ROOT::TGenericClassInfo 
         instance("edm::Ref<BXVector<l1t::EtSum>,l1t::EtSum,edm::refhelper::FindUsingAdvance<BXVector<l1t::EtSum>,l1t::EtSum> >", ::edm::Ref<BXVector<l1t::EtSum>,l1t::EtSum,edm::refhelper::FindUsingAdvance<BXVector<l1t::EtSum>,l1t::EtSum> >::Class_Version(), "DataFormats/Common/interface/Ref.h", 152,
                  typeid(::edm::Ref<BXVector<l1t::EtSum>,l1t::EtSum,edm::refhelper::FindUsingAdvance<BXVector<l1t::EtSum>,l1t::EtSum> >), ::ROOT::Internal::DefineBehavior(ptr, ptr),
                  &edmcLcLReflEBXVectorlEl1tcLcLEtSumgRcOl1tcLcLEtSumcOedmcLcLrefhelpercLcLFindUsingAdvancelEBXVectorlEl1tcLcLEtSumgRcOl1tcLcLEtSumgRsPgR_Dictionary, isa_proxy, 0,
                  sizeof(::edm::Ref<BXVector<l1t::EtSum>,l1t::EtSum,edm::refhelper::FindUsingAdvance<BXVector<l1t::EtSum>,l1t::EtSum> >) );
      instance.SetNew(&new_edmcLcLReflEBXVectorlEl1tcLcLEtSumgRcOl1tcLcLEtSumcOedmcLcLrefhelpercLcLFindUsingAdvancelEBXVectorlEl1tcLcLEtSumgRcOl1tcLcLEtSumgRsPgR);
      instance.SetNewArray(&newArray_edmcLcLReflEBXVectorlEl1tcLcLEtSumgRcOl1tcLcLEtSumcOedmcLcLrefhelpercLcLFindUsingAdvancelEBXVectorlEl1tcLcLEtSumgRcOl1tcLcLEtSumgRsPgR);
      instance.SetDelete(&delete_edmcLcLReflEBXVectorlEl1tcLcLEtSumgRcOl1tcLcLEtSumcOedmcLcLrefhelpercLcLFindUsingAdvancelEBXVectorlEl1tcLcLEtSumgRcOl1tcLcLEtSumgRsPgR);
      instance.SetDeleteArray(&deleteArray_edmcLcLReflEBXVectorlEl1tcLcLEtSumgRcOl1tcLcLEtSumcOedmcLcLrefhelpercLcLFindUsingAdvancelEBXVectorlEl1tcLcLEtSumgRcOl1tcLcLEtSumgRsPgR);
      instance.SetDestructor(&destruct_edmcLcLReflEBXVectorlEl1tcLcLEtSumgRcOl1tcLcLEtSumcOedmcLcLrefhelpercLcLFindUsingAdvancelEBXVectorlEl1tcLcLEtSumgRcOl1tcLcLEtSumgRsPgR);

      ::ROOT::AddClassAlternate("edm::Ref<BXVector<l1t::EtSum>,l1t::EtSum,edm::refhelper::FindUsingAdvance<BXVector<l1t::EtSum>,l1t::EtSum> >","l1t::EtSumRef");
      return &instance;
   }
   TGenericClassInfo *GenerateInitInstance(const ::edm::Ref<BXVector<l1t::EtSum>,l1t::EtSum,edm::refhelper::FindUsingAdvance<BXVector<l1t::EtSum>,l1t::EtSum> >*)
   {
      return GenerateInitInstanceLocal((::edm::Ref<BXVector<l1t::EtSum>,l1t::EtSum,edm::refhelper::FindUsingAdvance<BXVector<l1t::EtSum>,l1t::EtSum> >*)0);
   }
   // Static variable to force the class initialization
   static ::ROOT::TGenericClassInfo *_R__UNIQUE_(Init) = GenerateInitInstanceLocal((const ::edm::Ref<BXVector<l1t::EtSum>,l1t::EtSum,edm::refhelper::FindUsingAdvance<BXVector<l1t::EtSum>,l1t::EtSum> >*)0x0); R__UseDummy(_R__UNIQUE_(Init));

   // Dictionary for non-ClassDef classes
   static TClass *edmcLcLReflEBXVectorlEl1tcLcLEtSumgRcOl1tcLcLEtSumcOedmcLcLrefhelpercLcLFindUsingAdvancelEBXVectorlEl1tcLcLEtSumgRcOl1tcLcLEtSumgRsPgR_Dictionary() {
      TClass* theClass =::ROOT::GenerateInitInstanceLocal((const ::edm::Ref<BXVector<l1t::EtSum>,l1t::EtSum,edm::refhelper::FindUsingAdvance<BXVector<l1t::EtSum>,l1t::EtSum> >*)0x0)->GetClass();
      edmcLcLReflEBXVectorlEl1tcLcLEtSumgRcOl1tcLcLEtSumcOedmcLcLrefhelpercLcLFindUsingAdvancelEBXVectorlEl1tcLcLEtSumgRcOl1tcLcLEtSumgRsPgR_TClassManip(theClass);
   return theClass;
   }

   static void edmcLcLReflEBXVectorlEl1tcLcLEtSumgRcOl1tcLcLEtSumcOedmcLcLrefhelpercLcLFindUsingAdvancelEBXVectorlEl1tcLcLEtSumgRcOl1tcLcLEtSumgRsPgR_TClassManip(TClass* ){
   }

} // end of namespace ROOT

namespace ROOT {
   static TClass *edmcLcLWrapperlEedmcLcLReflEBXVectorlEl1tcLcLEtSumgRcOl1tcLcLEtSumcOedmcLcLrefhelpercLcLFindUsingAdvancelEBXVectorlEl1tcLcLEtSumgRcOl1tcLcLEtSumgRsPgRsPgR_Dictionary();
   static void edmcLcLWrapperlEedmcLcLReflEBXVectorlEl1tcLcLEtSumgRcOl1tcLcLEtSumcOedmcLcLrefhelpercLcLFindUsingAdvancelEBXVectorlEl1tcLcLEtSumgRcOl1tcLcLEtSumgRsPgRsPgR_TClassManip(TClass*);
   static void *new_edmcLcLWrapperlEedmcLcLReflEBXVectorlEl1tcLcLEtSumgRcOl1tcLcLEtSumcOedmcLcLrefhelpercLcLFindUsingAdvancelEBXVectorlEl1tcLcLEtSumgRcOl1tcLcLEtSumgRsPgRsPgR(void *p = 0);
   static void *newArray_edmcLcLWrapperlEedmcLcLReflEBXVectorlEl1tcLcLEtSumgRcOl1tcLcLEtSumcOedmcLcLrefhelpercLcLFindUsingAdvancelEBXVectorlEl1tcLcLEtSumgRcOl1tcLcLEtSumgRsPgRsPgR(Long_t size, void *p);
   static void delete_edmcLcLWrapperlEedmcLcLReflEBXVectorlEl1tcLcLEtSumgRcOl1tcLcLEtSumcOedmcLcLrefhelpercLcLFindUsingAdvancelEBXVectorlEl1tcLcLEtSumgRcOl1tcLcLEtSumgRsPgRsPgR(void *p);
   static void deleteArray_edmcLcLWrapperlEedmcLcLReflEBXVectorlEl1tcLcLEtSumgRcOl1tcLcLEtSumcOedmcLcLrefhelpercLcLFindUsingAdvancelEBXVectorlEl1tcLcLEtSumgRcOl1tcLcLEtSumgRsPgRsPgR(void *p);
   static void destruct_edmcLcLWrapperlEedmcLcLReflEBXVectorlEl1tcLcLEtSumgRcOl1tcLcLEtSumcOedmcLcLrefhelpercLcLFindUsingAdvancelEBXVectorlEl1tcLcLEtSumgRcOl1tcLcLEtSumgRsPgRsPgR(void *p);

   // Function generating the singleton type initializer
   static TGenericClassInfo *GenerateInitInstanceLocal(const ::edm::Wrapper<edm::Ref<BXVector<l1t::EtSum>,l1t::EtSum,edm::refhelper::FindUsingAdvance<BXVector<l1t::EtSum>,l1t::EtSum> > >*)
   {
      ::edm::Wrapper<edm::Ref<BXVector<l1t::EtSum>,l1t::EtSum,edm::refhelper::FindUsingAdvance<BXVector<l1t::EtSum>,l1t::EtSum> > > *ptr = 0;
      static ::TVirtualIsAProxy* isa_proxy = new ::TIsAProxy(typeid(::edm::Wrapper<edm::Ref<BXVector<l1t::EtSum>,l1t::EtSum,edm::refhelper::FindUsingAdvance<BXVector<l1t::EtSum>,l1t::EtSum> > >));
      static ::ROOT::TGenericClassInfo 
         instance("edm::Wrapper<edm::Ref<BXVector<l1t::EtSum>,l1t::EtSum,edm::refhelper::FindUsingAdvance<BXVector<l1t::EtSum>,l1t::EtSum> > >", ::edm::Wrapper<edm::Ref<BXVector<l1t::EtSum>,l1t::EtSum,edm::refhelper::FindUsingAdvance<BXVector<l1t::EtSum>,l1t::EtSum> > >::Class_Version(), "DataFormats/Common/interface/Wrapper.h", 25,
                  typeid(::edm::Wrapper<edm::Ref<BXVector<l1t::EtSum>,l1t::EtSum,edm::refhelper::FindUsingAdvance<BXVector<l1t::EtSum>,l1t::EtSum> > >), ::ROOT::Internal::DefineBehavior(ptr, ptr),
                  &edmcLcLWrapperlEedmcLcLReflEBXVectorlEl1tcLcLEtSumgRcOl1tcLcLEtSumcOedmcLcLrefhelpercLcLFindUsingAdvancelEBXVectorlEl1tcLcLEtSumgRcOl1tcLcLEtSumgRsPgRsPgR_Dictionary, isa_proxy, 0,
                  sizeof(::edm::Wrapper<edm::Ref<BXVector<l1t::EtSum>,l1t::EtSum,edm::refhelper::FindUsingAdvance<BXVector<l1t::EtSum>,l1t::EtSum> > >) );
      instance.SetNew(&new_edmcLcLWrapperlEedmcLcLReflEBXVectorlEl1tcLcLEtSumgRcOl1tcLcLEtSumcOedmcLcLrefhelpercLcLFindUsingAdvancelEBXVectorlEl1tcLcLEtSumgRcOl1tcLcLEtSumgRsPgRsPgR);
      instance.SetNewArray(&newArray_edmcLcLWrapperlEedmcLcLReflEBXVectorlEl1tcLcLEtSumgRcOl1tcLcLEtSumcOedmcLcLrefhelpercLcLFindUsingAdvancelEBXVectorlEl1tcLcLEtSumgRcOl1tcLcLEtSumgRsPgRsPgR);
      instance.SetDelete(&delete_edmcLcLWrapperlEedmcLcLReflEBXVectorlEl1tcLcLEtSumgRcOl1tcLcLEtSumcOedmcLcLrefhelpercLcLFindUsingAdvancelEBXVectorlEl1tcLcLEtSumgRcOl1tcLcLEtSumgRsPgRsPgR);
      instance.SetDeleteArray(&deleteArray_edmcLcLWrapperlEedmcLcLReflEBXVectorlEl1tcLcLEtSumgRcOl1tcLcLEtSumcOedmcLcLrefhelpercLcLFindUsingAdvancelEBXVectorlEl1tcLcLEtSumgRcOl1tcLcLEtSumgRsPgRsPgR);
      instance.SetDestructor(&destruct_edmcLcLWrapperlEedmcLcLReflEBXVectorlEl1tcLcLEtSumgRcOl1tcLcLEtSumcOedmcLcLrefhelpercLcLFindUsingAdvancelEBXVectorlEl1tcLcLEtSumgRcOl1tcLcLEtSumgRsPgRsPgR);

      ::ROOT::AddClassAlternate("edm::Wrapper<edm::Ref<BXVector<l1t::EtSum>,l1t::EtSum,edm::refhelper::FindUsingAdvance<BXVector<l1t::EtSum>,l1t::EtSum> > >","edm::Wrapper<l1t::EtSumRef>");
      return &instance;
   }
   TGenericClassInfo *GenerateInitInstance(const ::edm::Wrapper<edm::Ref<BXVector<l1t::EtSum>,l1t::EtSum,edm::refhelper::FindUsingAdvance<BXVector<l1t::EtSum>,l1t::EtSum> > >*)
   {
      return GenerateInitInstanceLocal((::edm::Wrapper<edm::Ref<BXVector<l1t::EtSum>,l1t::EtSum,edm::refhelper::FindUsingAdvance<BXVector<l1t::EtSum>,l1t::EtSum> > >*)0);
   }
   // Static variable to force the class initialization
   static ::ROOT::TGenericClassInfo *_R__UNIQUE_(Init) = GenerateInitInstanceLocal((const ::edm::Wrapper<edm::Ref<BXVector<l1t::EtSum>,l1t::EtSum,edm::refhelper::FindUsingAdvance<BXVector<l1t::EtSum>,l1t::EtSum> > >*)0x0); R__UseDummy(_R__UNIQUE_(Init));

   // Dictionary for non-ClassDef classes
   static TClass *edmcLcLWrapperlEedmcLcLReflEBXVectorlEl1tcLcLEtSumgRcOl1tcLcLEtSumcOedmcLcLrefhelpercLcLFindUsingAdvancelEBXVectorlEl1tcLcLEtSumgRcOl1tcLcLEtSumgRsPgRsPgR_Dictionary() {
      TClass* theClass =::ROOT::GenerateInitInstanceLocal((const ::edm::Wrapper<edm::Ref<BXVector<l1t::EtSum>,l1t::EtSum,edm::refhelper::FindUsingAdvance<BXVector<l1t::EtSum>,l1t::EtSum> > >*)0x0)->GetClass();
      edmcLcLWrapperlEedmcLcLReflEBXVectorlEl1tcLcLEtSumgRcOl1tcLcLEtSumcOedmcLcLrefhelpercLcLFindUsingAdvancelEBXVectorlEl1tcLcLEtSumgRcOl1tcLcLEtSumgRsPgRsPgR_TClassManip(theClass);
   return theClass;
   }

   static void edmcLcLWrapperlEedmcLcLReflEBXVectorlEl1tcLcLEtSumgRcOl1tcLcLEtSumcOedmcLcLrefhelpercLcLFindUsingAdvancelEBXVectorlEl1tcLcLEtSumgRcOl1tcLcLEtSumgRsPgRsPgR_TClassManip(TClass* ){
   }

} // end of namespace ROOT

namespace ROOT {
   static TClass *edmcLcLRefVectorlEBXVectorlEl1tcLcLEtSumgRcOl1tcLcLEtSumcOedmcLcLrefhelpercLcLFindUsingAdvancelEBXVectorlEl1tcLcLEtSumgRcOl1tcLcLEtSumgRsPgR_Dictionary();
   static void edmcLcLRefVectorlEBXVectorlEl1tcLcLEtSumgRcOl1tcLcLEtSumcOedmcLcLrefhelpercLcLFindUsingAdvancelEBXVectorlEl1tcLcLEtSumgRcOl1tcLcLEtSumgRsPgR_TClassManip(TClass*);
   static void *new_edmcLcLRefVectorlEBXVectorlEl1tcLcLEtSumgRcOl1tcLcLEtSumcOedmcLcLrefhelpercLcLFindUsingAdvancelEBXVectorlEl1tcLcLEtSumgRcOl1tcLcLEtSumgRsPgR(void *p = 0);
   static void *newArray_edmcLcLRefVectorlEBXVectorlEl1tcLcLEtSumgRcOl1tcLcLEtSumcOedmcLcLrefhelpercLcLFindUsingAdvancelEBXVectorlEl1tcLcLEtSumgRcOl1tcLcLEtSumgRsPgR(Long_t size, void *p);
   static void delete_edmcLcLRefVectorlEBXVectorlEl1tcLcLEtSumgRcOl1tcLcLEtSumcOedmcLcLrefhelpercLcLFindUsingAdvancelEBXVectorlEl1tcLcLEtSumgRcOl1tcLcLEtSumgRsPgR(void *p);
   static void deleteArray_edmcLcLRefVectorlEBXVectorlEl1tcLcLEtSumgRcOl1tcLcLEtSumcOedmcLcLrefhelpercLcLFindUsingAdvancelEBXVectorlEl1tcLcLEtSumgRcOl1tcLcLEtSumgRsPgR(void *p);
   static void destruct_edmcLcLRefVectorlEBXVectorlEl1tcLcLEtSumgRcOl1tcLcLEtSumcOedmcLcLrefhelpercLcLFindUsingAdvancelEBXVectorlEl1tcLcLEtSumgRcOl1tcLcLEtSumgRsPgR(void *p);

   // Function generating the singleton type initializer
   static TGenericClassInfo *GenerateInitInstanceLocal(const ::edm::RefVector<BXVector<l1t::EtSum>,l1t::EtSum,edm::refhelper::FindUsingAdvance<BXVector<l1t::EtSum>,l1t::EtSum> >*)
   {
      ::edm::RefVector<BXVector<l1t::EtSum>,l1t::EtSum,edm::refhelper::FindUsingAdvance<BXVector<l1t::EtSum>,l1t::EtSum> > *ptr = 0;
      static ::TVirtualIsAProxy* isa_proxy = new ::TIsAProxy(typeid(::edm::RefVector<BXVector<l1t::EtSum>,l1t::EtSum,edm::refhelper::FindUsingAdvance<BXVector<l1t::EtSum>,l1t::EtSum> >));
      static ::ROOT::TGenericClassInfo 
         instance("edm::RefVector<BXVector<l1t::EtSum>,l1t::EtSum,edm::refhelper::FindUsingAdvance<BXVector<l1t::EtSum>,l1t::EtSum> >", ::edm::RefVector<BXVector<l1t::EtSum>,l1t::EtSum,edm::refhelper::FindUsingAdvance<BXVector<l1t::EtSum>,l1t::EtSum> >::Class_Version(), "DataFormats/Common/interface/RefVector.h", 33,
                  typeid(::edm::RefVector<BXVector<l1t::EtSum>,l1t::EtSum,edm::refhelper::FindUsingAdvance<BXVector<l1t::EtSum>,l1t::EtSum> >), ::ROOT::Internal::DefineBehavior(ptr, ptr),
                  &edmcLcLRefVectorlEBXVectorlEl1tcLcLEtSumgRcOl1tcLcLEtSumcOedmcLcLrefhelpercLcLFindUsingAdvancelEBXVectorlEl1tcLcLEtSumgRcOl1tcLcLEtSumgRsPgR_Dictionary, isa_proxy, 0,
                  sizeof(::edm::RefVector<BXVector<l1t::EtSum>,l1t::EtSum,edm::refhelper::FindUsingAdvance<BXVector<l1t::EtSum>,l1t::EtSum> >) );
      instance.SetNew(&new_edmcLcLRefVectorlEBXVectorlEl1tcLcLEtSumgRcOl1tcLcLEtSumcOedmcLcLrefhelpercLcLFindUsingAdvancelEBXVectorlEl1tcLcLEtSumgRcOl1tcLcLEtSumgRsPgR);
      instance.SetNewArray(&newArray_edmcLcLRefVectorlEBXVectorlEl1tcLcLEtSumgRcOl1tcLcLEtSumcOedmcLcLrefhelpercLcLFindUsingAdvancelEBXVectorlEl1tcLcLEtSumgRcOl1tcLcLEtSumgRsPgR);
      instance.SetDelete(&delete_edmcLcLRefVectorlEBXVectorlEl1tcLcLEtSumgRcOl1tcLcLEtSumcOedmcLcLrefhelpercLcLFindUsingAdvancelEBXVectorlEl1tcLcLEtSumgRcOl1tcLcLEtSumgRsPgR);
      instance.SetDeleteArray(&deleteArray_edmcLcLRefVectorlEBXVectorlEl1tcLcLEtSumgRcOl1tcLcLEtSumcOedmcLcLrefhelpercLcLFindUsingAdvancelEBXVectorlEl1tcLcLEtSumgRcOl1tcLcLEtSumgRsPgR);
      instance.SetDestructor(&destruct_edmcLcLRefVectorlEBXVectorlEl1tcLcLEtSumgRcOl1tcLcLEtSumcOedmcLcLrefhelpercLcLFindUsingAdvancelEBXVectorlEl1tcLcLEtSumgRcOl1tcLcLEtSumgRsPgR);

      ::ROOT::AddClassAlternate("edm::RefVector<BXVector<l1t::EtSum>,l1t::EtSum,edm::refhelper::FindUsingAdvance<BXVector<l1t::EtSum>,l1t::EtSum> >","l1t::EtSumRefVector");
      return &instance;
   }
   TGenericClassInfo *GenerateInitInstance(const ::edm::RefVector<BXVector<l1t::EtSum>,l1t::EtSum,edm::refhelper::FindUsingAdvance<BXVector<l1t::EtSum>,l1t::EtSum> >*)
   {
      return GenerateInitInstanceLocal((::edm::RefVector<BXVector<l1t::EtSum>,l1t::EtSum,edm::refhelper::FindUsingAdvance<BXVector<l1t::EtSum>,l1t::EtSum> >*)0);
   }
   // Static variable to force the class initialization
   static ::ROOT::TGenericClassInfo *_R__UNIQUE_(Init) = GenerateInitInstanceLocal((const ::edm::RefVector<BXVector<l1t::EtSum>,l1t::EtSum,edm::refhelper::FindUsingAdvance<BXVector<l1t::EtSum>,l1t::EtSum> >*)0x0); R__UseDummy(_R__UNIQUE_(Init));

   // Dictionary for non-ClassDef classes
   static TClass *edmcLcLRefVectorlEBXVectorlEl1tcLcLEtSumgRcOl1tcLcLEtSumcOedmcLcLrefhelpercLcLFindUsingAdvancelEBXVectorlEl1tcLcLEtSumgRcOl1tcLcLEtSumgRsPgR_Dictionary() {
      TClass* theClass =::ROOT::GenerateInitInstanceLocal((const ::edm::RefVector<BXVector<l1t::EtSum>,l1t::EtSum,edm::refhelper::FindUsingAdvance<BXVector<l1t::EtSum>,l1t::EtSum> >*)0x0)->GetClass();
      edmcLcLRefVectorlEBXVectorlEl1tcLcLEtSumgRcOl1tcLcLEtSumcOedmcLcLrefhelpercLcLFindUsingAdvancelEBXVectorlEl1tcLcLEtSumgRcOl1tcLcLEtSumgRsPgR_TClassManip(theClass);
   return theClass;
   }

   static void edmcLcLRefVectorlEBXVectorlEl1tcLcLEtSumgRcOl1tcLcLEtSumcOedmcLcLrefhelpercLcLFindUsingAdvancelEBXVectorlEl1tcLcLEtSumgRcOl1tcLcLEtSumgRsPgR_TClassManip(TClass* ){
   }

} // end of namespace ROOT

namespace ROOT {
   static TClass *edmcLcLWrapperlEedmcLcLRefVectorlEBXVectorlEl1tcLcLEtSumgRcOl1tcLcLEtSumcOedmcLcLrefhelpercLcLFindUsingAdvancelEBXVectorlEl1tcLcLEtSumgRcOl1tcLcLEtSumgRsPgRsPgR_Dictionary();
   static void edmcLcLWrapperlEedmcLcLRefVectorlEBXVectorlEl1tcLcLEtSumgRcOl1tcLcLEtSumcOedmcLcLrefhelpercLcLFindUsingAdvancelEBXVectorlEl1tcLcLEtSumgRcOl1tcLcLEtSumgRsPgRsPgR_TClassManip(TClass*);
   static void *new_edmcLcLWrapperlEedmcLcLRefVectorlEBXVectorlEl1tcLcLEtSumgRcOl1tcLcLEtSumcOedmcLcLrefhelpercLcLFindUsingAdvancelEBXVectorlEl1tcLcLEtSumgRcOl1tcLcLEtSumgRsPgRsPgR(void *p = 0);
   static void *newArray_edmcLcLWrapperlEedmcLcLRefVectorlEBXVectorlEl1tcLcLEtSumgRcOl1tcLcLEtSumcOedmcLcLrefhelpercLcLFindUsingAdvancelEBXVectorlEl1tcLcLEtSumgRcOl1tcLcLEtSumgRsPgRsPgR(Long_t size, void *p);
   static void delete_edmcLcLWrapperlEedmcLcLRefVectorlEBXVectorlEl1tcLcLEtSumgRcOl1tcLcLEtSumcOedmcLcLrefhelpercLcLFindUsingAdvancelEBXVectorlEl1tcLcLEtSumgRcOl1tcLcLEtSumgRsPgRsPgR(void *p);
   static void deleteArray_edmcLcLWrapperlEedmcLcLRefVectorlEBXVectorlEl1tcLcLEtSumgRcOl1tcLcLEtSumcOedmcLcLrefhelpercLcLFindUsingAdvancelEBXVectorlEl1tcLcLEtSumgRcOl1tcLcLEtSumgRsPgRsPgR(void *p);
   static void destruct_edmcLcLWrapperlEedmcLcLRefVectorlEBXVectorlEl1tcLcLEtSumgRcOl1tcLcLEtSumcOedmcLcLrefhelpercLcLFindUsingAdvancelEBXVectorlEl1tcLcLEtSumgRcOl1tcLcLEtSumgRsPgRsPgR(void *p);

   // Function generating the singleton type initializer
   static TGenericClassInfo *GenerateInitInstanceLocal(const ::edm::Wrapper<edm::RefVector<BXVector<l1t::EtSum>,l1t::EtSum,edm::refhelper::FindUsingAdvance<BXVector<l1t::EtSum>,l1t::EtSum> > >*)
   {
      ::edm::Wrapper<edm::RefVector<BXVector<l1t::EtSum>,l1t::EtSum,edm::refhelper::FindUsingAdvance<BXVector<l1t::EtSum>,l1t::EtSum> > > *ptr = 0;
      static ::TVirtualIsAProxy* isa_proxy = new ::TIsAProxy(typeid(::edm::Wrapper<edm::RefVector<BXVector<l1t::EtSum>,l1t::EtSum,edm::refhelper::FindUsingAdvance<BXVector<l1t::EtSum>,l1t::EtSum> > >));
      static ::ROOT::TGenericClassInfo 
         instance("edm::Wrapper<edm::RefVector<BXVector<l1t::EtSum>,l1t::EtSum,edm::refhelper::FindUsingAdvance<BXVector<l1t::EtSum>,l1t::EtSum> > >", ::edm::Wrapper<edm::RefVector<BXVector<l1t::EtSum>,l1t::EtSum,edm::refhelper::FindUsingAdvance<BXVector<l1t::EtSum>,l1t::EtSum> > >::Class_Version(), "DataFormats/Common/interface/Wrapper.h", 25,
                  typeid(::edm::Wrapper<edm::RefVector<BXVector<l1t::EtSum>,l1t::EtSum,edm::refhelper::FindUsingAdvance<BXVector<l1t::EtSum>,l1t::EtSum> > >), ::ROOT::Internal::DefineBehavior(ptr, ptr),
                  &edmcLcLWrapperlEedmcLcLRefVectorlEBXVectorlEl1tcLcLEtSumgRcOl1tcLcLEtSumcOedmcLcLrefhelpercLcLFindUsingAdvancelEBXVectorlEl1tcLcLEtSumgRcOl1tcLcLEtSumgRsPgRsPgR_Dictionary, isa_proxy, 0,
                  sizeof(::edm::Wrapper<edm::RefVector<BXVector<l1t::EtSum>,l1t::EtSum,edm::refhelper::FindUsingAdvance<BXVector<l1t::EtSum>,l1t::EtSum> > >) );
      instance.SetNew(&new_edmcLcLWrapperlEedmcLcLRefVectorlEBXVectorlEl1tcLcLEtSumgRcOl1tcLcLEtSumcOedmcLcLrefhelpercLcLFindUsingAdvancelEBXVectorlEl1tcLcLEtSumgRcOl1tcLcLEtSumgRsPgRsPgR);
      instance.SetNewArray(&newArray_edmcLcLWrapperlEedmcLcLRefVectorlEBXVectorlEl1tcLcLEtSumgRcOl1tcLcLEtSumcOedmcLcLrefhelpercLcLFindUsingAdvancelEBXVectorlEl1tcLcLEtSumgRcOl1tcLcLEtSumgRsPgRsPgR);
      instance.SetDelete(&delete_edmcLcLWrapperlEedmcLcLRefVectorlEBXVectorlEl1tcLcLEtSumgRcOl1tcLcLEtSumcOedmcLcLrefhelpercLcLFindUsingAdvancelEBXVectorlEl1tcLcLEtSumgRcOl1tcLcLEtSumgRsPgRsPgR);
      instance.SetDeleteArray(&deleteArray_edmcLcLWrapperlEedmcLcLRefVectorlEBXVectorlEl1tcLcLEtSumgRcOl1tcLcLEtSumcOedmcLcLrefhelpercLcLFindUsingAdvancelEBXVectorlEl1tcLcLEtSumgRcOl1tcLcLEtSumgRsPgRsPgR);
      instance.SetDestructor(&destruct_edmcLcLWrapperlEedmcLcLRefVectorlEBXVectorlEl1tcLcLEtSumgRcOl1tcLcLEtSumcOedmcLcLrefhelpercLcLFindUsingAdvancelEBXVectorlEl1tcLcLEtSumgRcOl1tcLcLEtSumgRsPgRsPgR);

      ::ROOT::AddClassAlternate("edm::Wrapper<edm::RefVector<BXVector<l1t::EtSum>,l1t::EtSum,edm::refhelper::FindUsingAdvance<BXVector<l1t::EtSum>,l1t::EtSum> > >","edm::Wrapper<l1t::EtSumRefVector>");
      return &instance;
   }
   TGenericClassInfo *GenerateInitInstance(const ::edm::Wrapper<edm::RefVector<BXVector<l1t::EtSum>,l1t::EtSum,edm::refhelper::FindUsingAdvance<BXVector<l1t::EtSum>,l1t::EtSum> > >*)
   {
      return GenerateInitInstanceLocal((::edm::Wrapper<edm::RefVector<BXVector<l1t::EtSum>,l1t::EtSum,edm::refhelper::FindUsingAdvance<BXVector<l1t::EtSum>,l1t::EtSum> > >*)0);
   }
   // Static variable to force the class initialization
   static ::ROOT::TGenericClassInfo *_R__UNIQUE_(Init) = GenerateInitInstanceLocal((const ::edm::Wrapper<edm::RefVector<BXVector<l1t::EtSum>,l1t::EtSum,edm::refhelper::FindUsingAdvance<BXVector<l1t::EtSum>,l1t::EtSum> > >*)0x0); R__UseDummy(_R__UNIQUE_(Init));

   // Dictionary for non-ClassDef classes
   static TClass *edmcLcLWrapperlEedmcLcLRefVectorlEBXVectorlEl1tcLcLEtSumgRcOl1tcLcLEtSumcOedmcLcLrefhelpercLcLFindUsingAdvancelEBXVectorlEl1tcLcLEtSumgRcOl1tcLcLEtSumgRsPgRsPgR_Dictionary() {
      TClass* theClass =::ROOT::GenerateInitInstanceLocal((const ::edm::Wrapper<edm::RefVector<BXVector<l1t::EtSum>,l1t::EtSum,edm::refhelper::FindUsingAdvance<BXVector<l1t::EtSum>,l1t::EtSum> > >*)0x0)->GetClass();
      edmcLcLWrapperlEedmcLcLRefVectorlEBXVectorlEl1tcLcLEtSumgRcOl1tcLcLEtSumcOedmcLcLrefhelpercLcLFindUsingAdvancelEBXVectorlEl1tcLcLEtSumgRcOl1tcLcLEtSumgRsPgRsPgR_TClassManip(theClass);
   return theClass;
   }

   static void edmcLcLWrapperlEedmcLcLRefVectorlEBXVectorlEl1tcLcLEtSumgRcOl1tcLcLEtSumcOedmcLcLrefhelpercLcLFindUsingAdvancelEBXVectorlEl1tcLcLEtSumgRcOl1tcLcLEtSumgRsPgRsPgR_TClassManip(TClass* ){
   }

} // end of namespace ROOT

namespace ROOT {
   static TClass *edmcLcLWrapperlEvectorlEedmcLcLReflEBXVectorlEl1tcLcLEtSumgRcOl1tcLcLEtSumcOedmcLcLrefhelpercLcLFindUsingAdvancelEBXVectorlEl1tcLcLEtSumgRcOl1tcLcLEtSumgRsPgRsPgRsPgR_Dictionary();
   static void edmcLcLWrapperlEvectorlEedmcLcLReflEBXVectorlEl1tcLcLEtSumgRcOl1tcLcLEtSumcOedmcLcLrefhelpercLcLFindUsingAdvancelEBXVectorlEl1tcLcLEtSumgRcOl1tcLcLEtSumgRsPgRsPgRsPgR_TClassManip(TClass*);
   static void *new_edmcLcLWrapperlEvectorlEedmcLcLReflEBXVectorlEl1tcLcLEtSumgRcOl1tcLcLEtSumcOedmcLcLrefhelpercLcLFindUsingAdvancelEBXVectorlEl1tcLcLEtSumgRcOl1tcLcLEtSumgRsPgRsPgRsPgR(void *p = 0);
   static void *newArray_edmcLcLWrapperlEvectorlEedmcLcLReflEBXVectorlEl1tcLcLEtSumgRcOl1tcLcLEtSumcOedmcLcLrefhelpercLcLFindUsingAdvancelEBXVectorlEl1tcLcLEtSumgRcOl1tcLcLEtSumgRsPgRsPgRsPgR(Long_t size, void *p);
   static void delete_edmcLcLWrapperlEvectorlEedmcLcLReflEBXVectorlEl1tcLcLEtSumgRcOl1tcLcLEtSumcOedmcLcLrefhelpercLcLFindUsingAdvancelEBXVectorlEl1tcLcLEtSumgRcOl1tcLcLEtSumgRsPgRsPgRsPgR(void *p);
   static void deleteArray_edmcLcLWrapperlEvectorlEedmcLcLReflEBXVectorlEl1tcLcLEtSumgRcOl1tcLcLEtSumcOedmcLcLrefhelpercLcLFindUsingAdvancelEBXVectorlEl1tcLcLEtSumgRcOl1tcLcLEtSumgRsPgRsPgRsPgR(void *p);
   static void destruct_edmcLcLWrapperlEvectorlEedmcLcLReflEBXVectorlEl1tcLcLEtSumgRcOl1tcLcLEtSumcOedmcLcLrefhelpercLcLFindUsingAdvancelEBXVectorlEl1tcLcLEtSumgRcOl1tcLcLEtSumgRsPgRsPgRsPgR(void *p);

   // Function generating the singleton type initializer
   static TGenericClassInfo *GenerateInitInstanceLocal(const ::edm::Wrapper<vector<edm::Ref<BXVector<l1t::EtSum>,l1t::EtSum,edm::refhelper::FindUsingAdvance<BXVector<l1t::EtSum>,l1t::EtSum> > > >*)
   {
      ::edm::Wrapper<vector<edm::Ref<BXVector<l1t::EtSum>,l1t::EtSum,edm::refhelper::FindUsingAdvance<BXVector<l1t::EtSum>,l1t::EtSum> > > > *ptr = 0;
      static ::TVirtualIsAProxy* isa_proxy = new ::TIsAProxy(typeid(::edm::Wrapper<vector<edm::Ref<BXVector<l1t::EtSum>,l1t::EtSum,edm::refhelper::FindUsingAdvance<BXVector<l1t::EtSum>,l1t::EtSum> > > >));
      static ::ROOT::TGenericClassInfo 
         instance("edm::Wrapper<vector<edm::Ref<BXVector<l1t::EtSum>,l1t::EtSum,edm::refhelper::FindUsingAdvance<BXVector<l1t::EtSum>,l1t::EtSum> > > >", ::edm::Wrapper<vector<edm::Ref<BXVector<l1t::EtSum>,l1t::EtSum,edm::refhelper::FindUsingAdvance<BXVector<l1t::EtSum>,l1t::EtSum> > > >::Class_Version(), "DataFormats/Common/interface/Wrapper.h", 25,
                  typeid(::edm::Wrapper<vector<edm::Ref<BXVector<l1t::EtSum>,l1t::EtSum,edm::refhelper::FindUsingAdvance<BXVector<l1t::EtSum>,l1t::EtSum> > > >), ::ROOT::Internal::DefineBehavior(ptr, ptr),
                  &edmcLcLWrapperlEvectorlEedmcLcLReflEBXVectorlEl1tcLcLEtSumgRcOl1tcLcLEtSumcOedmcLcLrefhelpercLcLFindUsingAdvancelEBXVectorlEl1tcLcLEtSumgRcOl1tcLcLEtSumgRsPgRsPgRsPgR_Dictionary, isa_proxy, 0,
                  sizeof(::edm::Wrapper<vector<edm::Ref<BXVector<l1t::EtSum>,l1t::EtSum,edm::refhelper::FindUsingAdvance<BXVector<l1t::EtSum>,l1t::EtSum> > > >) );
      instance.SetNew(&new_edmcLcLWrapperlEvectorlEedmcLcLReflEBXVectorlEl1tcLcLEtSumgRcOl1tcLcLEtSumcOedmcLcLrefhelpercLcLFindUsingAdvancelEBXVectorlEl1tcLcLEtSumgRcOl1tcLcLEtSumgRsPgRsPgRsPgR);
      instance.SetNewArray(&newArray_edmcLcLWrapperlEvectorlEedmcLcLReflEBXVectorlEl1tcLcLEtSumgRcOl1tcLcLEtSumcOedmcLcLrefhelpercLcLFindUsingAdvancelEBXVectorlEl1tcLcLEtSumgRcOl1tcLcLEtSumgRsPgRsPgRsPgR);
      instance.SetDelete(&delete_edmcLcLWrapperlEvectorlEedmcLcLReflEBXVectorlEl1tcLcLEtSumgRcOl1tcLcLEtSumcOedmcLcLrefhelpercLcLFindUsingAdvancelEBXVectorlEl1tcLcLEtSumgRcOl1tcLcLEtSumgRsPgRsPgRsPgR);
      instance.SetDeleteArray(&deleteArray_edmcLcLWrapperlEvectorlEedmcLcLReflEBXVectorlEl1tcLcLEtSumgRcOl1tcLcLEtSumcOedmcLcLrefhelpercLcLFindUsingAdvancelEBXVectorlEl1tcLcLEtSumgRcOl1tcLcLEtSumgRsPgRsPgRsPgR);
      instance.SetDestructor(&destruct_edmcLcLWrapperlEvectorlEedmcLcLReflEBXVectorlEl1tcLcLEtSumgRcOl1tcLcLEtSumcOedmcLcLrefhelpercLcLFindUsingAdvancelEBXVectorlEl1tcLcLEtSumgRcOl1tcLcLEtSumgRsPgRsPgRsPgR);

      ::ROOT::AddClassAlternate("edm::Wrapper<vector<edm::Ref<BXVector<l1t::EtSum>,l1t::EtSum,edm::refhelper::FindUsingAdvance<BXVector<l1t::EtSum>,l1t::EtSum> > > >","edm::Wrapper<l1t::EtSumVectorRef>");
      return &instance;
   }
   TGenericClassInfo *GenerateInitInstance(const ::edm::Wrapper<vector<edm::Ref<BXVector<l1t::EtSum>,l1t::EtSum,edm::refhelper::FindUsingAdvance<BXVector<l1t::EtSum>,l1t::EtSum> > > >*)
   {
      return GenerateInitInstanceLocal((::edm::Wrapper<vector<edm::Ref<BXVector<l1t::EtSum>,l1t::EtSum,edm::refhelper::FindUsingAdvance<BXVector<l1t::EtSum>,l1t::EtSum> > > >*)0);
   }
   // Static variable to force the class initialization
   static ::ROOT::TGenericClassInfo *_R__UNIQUE_(Init) = GenerateInitInstanceLocal((const ::edm::Wrapper<vector<edm::Ref<BXVector<l1t::EtSum>,l1t::EtSum,edm::refhelper::FindUsingAdvance<BXVector<l1t::EtSum>,l1t::EtSum> > > >*)0x0); R__UseDummy(_R__UNIQUE_(Init));

   // Dictionary for non-ClassDef classes
   static TClass *edmcLcLWrapperlEvectorlEedmcLcLReflEBXVectorlEl1tcLcLEtSumgRcOl1tcLcLEtSumcOedmcLcLrefhelpercLcLFindUsingAdvancelEBXVectorlEl1tcLcLEtSumgRcOl1tcLcLEtSumgRsPgRsPgRsPgR_Dictionary() {
      TClass* theClass =::ROOT::GenerateInitInstanceLocal((const ::edm::Wrapper<vector<edm::Ref<BXVector<l1t::EtSum>,l1t::EtSum,edm::refhelper::FindUsingAdvance<BXVector<l1t::EtSum>,l1t::EtSum> > > >*)0x0)->GetClass();
      edmcLcLWrapperlEvectorlEedmcLcLReflEBXVectorlEl1tcLcLEtSumgRcOl1tcLcLEtSumcOedmcLcLrefhelpercLcLFindUsingAdvancelEBXVectorlEl1tcLcLEtSumgRcOl1tcLcLEtSumgRsPgRsPgRsPgR_TClassManip(theClass);
   return theClass;
   }

   static void edmcLcLWrapperlEvectorlEedmcLcLReflEBXVectorlEl1tcLcLEtSumgRcOl1tcLcLEtSumcOedmcLcLrefhelpercLcLFindUsingAdvancelEBXVectorlEl1tcLcLEtSumgRcOl1tcLcLEtSumgRsPgRsPgRsPgR_TClassManip(TClass* ){
   }

} // end of namespace ROOT

namespace ROOT {
   static TClass *l1tcLcLTau_Dictionary();
   static void l1tcLcLTau_TClassManip(TClass*);
   static void *new_l1tcLcLTau(void *p = 0);
   static void *newArray_l1tcLcLTau(Long_t size, void *p);
   static void delete_l1tcLcLTau(void *p);
   static void deleteArray_l1tcLcLTau(void *p);
   static void destruct_l1tcLcLTau(void *p);

   // Function generating the singleton type initializer
   static TGenericClassInfo *GenerateInitInstanceLocal(const ::l1t::Tau*)
   {
      ::l1t::Tau *ptr = 0;
      static ::TVirtualIsAProxy* isa_proxy = new ::TIsAProxy(typeid(::l1t::Tau));
      static ::ROOT::TGenericClassInfo 
         instance("l1t::Tau", 13, "DataFormats/L1Trigger/interface/Tau.h", 16,
                  typeid(::l1t::Tau), ::ROOT::Internal::DefineBehavior(ptr, ptr),
                  &l1tcLcLTau_Dictionary, isa_proxy, 8,
                  sizeof(::l1t::Tau) );
      instance.SetNew(&new_l1tcLcLTau);
      instance.SetNewArray(&newArray_l1tcLcLTau);
      instance.SetDelete(&delete_l1tcLcLTau);
      instance.SetDeleteArray(&deleteArray_l1tcLcLTau);
      instance.SetDestructor(&destruct_l1tcLcLTau);
      return &instance;
   }
   TGenericClassInfo *GenerateInitInstance(const ::l1t::Tau*)
   {
      return GenerateInitInstanceLocal((::l1t::Tau*)0);
   }
   // Static variable to force the class initialization
   static ::ROOT::TGenericClassInfo *_R__UNIQUE_(Init) = GenerateInitInstanceLocal((const ::l1t::Tau*)0x0); R__UseDummy(_R__UNIQUE_(Init));

   // Dictionary for non-ClassDef classes
   static TClass *l1tcLcLTau_Dictionary() {
      TClass* theClass =::ROOT::GenerateInitInstanceLocal((const ::l1t::Tau*)0x0)->GetClass();
      l1tcLcLTau_TClassManip(theClass);
   return theClass;
   }

   static void l1tcLcLTau_TClassManip(TClass* ){
   }

} // end of namespace ROOT

namespace ROOT {
   static TClass *BXVectorlEl1tcLcLTaugR_Dictionary();
   static void BXVectorlEl1tcLcLTaugR_TClassManip(TClass*);
   static void *new_BXVectorlEl1tcLcLTaugR(void *p = 0);
   static void *newArray_BXVectorlEl1tcLcLTaugR(Long_t size, void *p);
   static void delete_BXVectorlEl1tcLcLTaugR(void *p);
   static void deleteArray_BXVectorlEl1tcLcLTaugR(void *p);
   static void destruct_BXVectorlEl1tcLcLTaugR(void *p);

   // Function generating the singleton type initializer
   static TGenericClassInfo *GenerateInitInstanceLocal(const ::BXVector<l1t::Tau>*)
   {
      ::BXVector<l1t::Tau> *ptr = 0;
      static ::TVirtualIsAProxy* isa_proxy = new ::TIsAProxy(typeid(::BXVector<l1t::Tau>));
      static ::ROOT::TGenericClassInfo 
         instance("BXVector<l1t::Tau>", "DataFormats/L1Trigger/interface/BXVector.h", 15,
                  typeid(::BXVector<l1t::Tau>), ::ROOT::Internal::DefineBehavior(ptr, ptr),
                  &BXVectorlEl1tcLcLTaugR_Dictionary, isa_proxy, 0,
                  sizeof(::BXVector<l1t::Tau>) );
      instance.SetNew(&new_BXVectorlEl1tcLcLTaugR);
      instance.SetNewArray(&newArray_BXVectorlEl1tcLcLTaugR);
      instance.SetDelete(&delete_BXVectorlEl1tcLcLTaugR);
      instance.SetDeleteArray(&deleteArray_BXVectorlEl1tcLcLTaugR);
      instance.SetDestructor(&destruct_BXVectorlEl1tcLcLTaugR);

      ::ROOT::AddClassAlternate("BXVector<l1t::Tau>","l1t::TauBxCollection");
      return &instance;
   }
   TGenericClassInfo *GenerateInitInstance(const ::BXVector<l1t::Tau>*)
   {
      return GenerateInitInstanceLocal((::BXVector<l1t::Tau>*)0);
   }
   // Static variable to force the class initialization
   static ::ROOT::TGenericClassInfo *_R__UNIQUE_(Init) = GenerateInitInstanceLocal((const ::BXVector<l1t::Tau>*)0x0); R__UseDummy(_R__UNIQUE_(Init));

   // Dictionary for non-ClassDef classes
   static TClass *BXVectorlEl1tcLcLTaugR_Dictionary() {
      TClass* theClass =::ROOT::GenerateInitInstanceLocal((const ::BXVector<l1t::Tau>*)0x0)->GetClass();
      BXVectorlEl1tcLcLTaugR_TClassManip(theClass);
   return theClass;
   }

   static void BXVectorlEl1tcLcLTaugR_TClassManip(TClass* ){
   }

} // end of namespace ROOT

namespace ROOT {
   static TClass *edmcLcLWrapperlEBXVectorlEl1tcLcLTaugRsPgR_Dictionary();
   static void edmcLcLWrapperlEBXVectorlEl1tcLcLTaugRsPgR_TClassManip(TClass*);
   static void *new_edmcLcLWrapperlEBXVectorlEl1tcLcLTaugRsPgR(void *p = 0);
   static void *newArray_edmcLcLWrapperlEBXVectorlEl1tcLcLTaugRsPgR(Long_t size, void *p);
   static void delete_edmcLcLWrapperlEBXVectorlEl1tcLcLTaugRsPgR(void *p);
   static void deleteArray_edmcLcLWrapperlEBXVectorlEl1tcLcLTaugRsPgR(void *p);
   static void destruct_edmcLcLWrapperlEBXVectorlEl1tcLcLTaugRsPgR(void *p);

   // Function generating the singleton type initializer
   static TGenericClassInfo *GenerateInitInstanceLocal(const ::edm::Wrapper<BXVector<l1t::Tau> >*)
   {
      ::edm::Wrapper<BXVector<l1t::Tau> > *ptr = 0;
      static ::TVirtualIsAProxy* isa_proxy = new ::TIsAProxy(typeid(::edm::Wrapper<BXVector<l1t::Tau> >));
      static ::ROOT::TGenericClassInfo 
         instance("edm::Wrapper<BXVector<l1t::Tau> >", ::edm::Wrapper<BXVector<l1t::Tau> >::Class_Version(), "DataFormats/Common/interface/Wrapper.h", 25,
                  typeid(::edm::Wrapper<BXVector<l1t::Tau> >), ::ROOT::Internal::DefineBehavior(ptr, ptr),
                  &edmcLcLWrapperlEBXVectorlEl1tcLcLTaugRsPgR_Dictionary, isa_proxy, 0,
                  sizeof(::edm::Wrapper<BXVector<l1t::Tau> >) );
      instance.SetNew(&new_edmcLcLWrapperlEBXVectorlEl1tcLcLTaugRsPgR);
      instance.SetNewArray(&newArray_edmcLcLWrapperlEBXVectorlEl1tcLcLTaugRsPgR);
      instance.SetDelete(&delete_edmcLcLWrapperlEBXVectorlEl1tcLcLTaugRsPgR);
      instance.SetDeleteArray(&deleteArray_edmcLcLWrapperlEBXVectorlEl1tcLcLTaugRsPgR);
      instance.SetDestructor(&destruct_edmcLcLWrapperlEBXVectorlEl1tcLcLTaugRsPgR);

      ::ROOT::AddClassAlternate("edm::Wrapper<BXVector<l1t::Tau> >","edm::Wrapper<l1t::TauBxCollection>");
      return &instance;
   }
   TGenericClassInfo *GenerateInitInstance(const ::edm::Wrapper<BXVector<l1t::Tau> >*)
   {
      return GenerateInitInstanceLocal((::edm::Wrapper<BXVector<l1t::Tau> >*)0);
   }
   // Static variable to force the class initialization
   static ::ROOT::TGenericClassInfo *_R__UNIQUE_(Init) = GenerateInitInstanceLocal((const ::edm::Wrapper<BXVector<l1t::Tau> >*)0x0); R__UseDummy(_R__UNIQUE_(Init));

   // Dictionary for non-ClassDef classes
   static TClass *edmcLcLWrapperlEBXVectorlEl1tcLcLTaugRsPgR_Dictionary() {
      TClass* theClass =::ROOT::GenerateInitInstanceLocal((const ::edm::Wrapper<BXVector<l1t::Tau> >*)0x0)->GetClass();
      edmcLcLWrapperlEBXVectorlEl1tcLcLTaugRsPgR_TClassManip(theClass);
   return theClass;
   }

   static void edmcLcLWrapperlEBXVectorlEl1tcLcLTaugRsPgR_TClassManip(TClass* ){
   }

} // end of namespace ROOT

namespace ROOT {
   static TClass *edmcLcLReflEBXVectorlEl1tcLcLTaugRcOl1tcLcLTaucOedmcLcLrefhelpercLcLFindUsingAdvancelEBXVectorlEl1tcLcLTaugRcOl1tcLcLTaugRsPgR_Dictionary();
   static void edmcLcLReflEBXVectorlEl1tcLcLTaugRcOl1tcLcLTaucOedmcLcLrefhelpercLcLFindUsingAdvancelEBXVectorlEl1tcLcLTaugRcOl1tcLcLTaugRsPgR_TClassManip(TClass*);
   static void *new_edmcLcLReflEBXVectorlEl1tcLcLTaugRcOl1tcLcLTaucOedmcLcLrefhelpercLcLFindUsingAdvancelEBXVectorlEl1tcLcLTaugRcOl1tcLcLTaugRsPgR(void *p = 0);
   static void *newArray_edmcLcLReflEBXVectorlEl1tcLcLTaugRcOl1tcLcLTaucOedmcLcLrefhelpercLcLFindUsingAdvancelEBXVectorlEl1tcLcLTaugRcOl1tcLcLTaugRsPgR(Long_t size, void *p);
   static void delete_edmcLcLReflEBXVectorlEl1tcLcLTaugRcOl1tcLcLTaucOedmcLcLrefhelpercLcLFindUsingAdvancelEBXVectorlEl1tcLcLTaugRcOl1tcLcLTaugRsPgR(void *p);
   static void deleteArray_edmcLcLReflEBXVectorlEl1tcLcLTaugRcOl1tcLcLTaucOedmcLcLrefhelpercLcLFindUsingAdvancelEBXVectorlEl1tcLcLTaugRcOl1tcLcLTaugRsPgR(void *p);
   static void destruct_edmcLcLReflEBXVectorlEl1tcLcLTaugRcOl1tcLcLTaucOedmcLcLrefhelpercLcLFindUsingAdvancelEBXVectorlEl1tcLcLTaugRcOl1tcLcLTaugRsPgR(void *p);

   // Function generating the singleton type initializer
   static TGenericClassInfo *GenerateInitInstanceLocal(const ::edm::Ref<BXVector<l1t::Tau>,l1t::Tau,edm::refhelper::FindUsingAdvance<BXVector<l1t::Tau>,l1t::Tau> >*)
   {
      ::edm::Ref<BXVector<l1t::Tau>,l1t::Tau,edm::refhelper::FindUsingAdvance<BXVector<l1t::Tau>,l1t::Tau> > *ptr = 0;
      static ::TVirtualIsAProxy* isa_proxy = new ::TIsAProxy(typeid(::edm::Ref<BXVector<l1t::Tau>,l1t::Tau,edm::refhelper::FindUsingAdvance<BXVector<l1t::Tau>,l1t::Tau> >));
      static ::ROOT::TGenericClassInfo 
         instance("edm::Ref<BXVector<l1t::Tau>,l1t::Tau,edm::refhelper::FindUsingAdvance<BXVector<l1t::Tau>,l1t::Tau> >", ::edm::Ref<BXVector<l1t::Tau>,l1t::Tau,edm::refhelper::FindUsingAdvance<BXVector<l1t::Tau>,l1t::Tau> >::Class_Version(), "DataFormats/Common/interface/Ref.h", 152,
                  typeid(::edm::Ref<BXVector<l1t::Tau>,l1t::Tau,edm::refhelper::FindUsingAdvance<BXVector<l1t::Tau>,l1t::Tau> >), ::ROOT::Internal::DefineBehavior(ptr, ptr),
                  &edmcLcLReflEBXVectorlEl1tcLcLTaugRcOl1tcLcLTaucOedmcLcLrefhelpercLcLFindUsingAdvancelEBXVectorlEl1tcLcLTaugRcOl1tcLcLTaugRsPgR_Dictionary, isa_proxy, 0,
                  sizeof(::edm::Ref<BXVector<l1t::Tau>,l1t::Tau,edm::refhelper::FindUsingAdvance<BXVector<l1t::Tau>,l1t::Tau> >) );
      instance.SetNew(&new_edmcLcLReflEBXVectorlEl1tcLcLTaugRcOl1tcLcLTaucOedmcLcLrefhelpercLcLFindUsingAdvancelEBXVectorlEl1tcLcLTaugRcOl1tcLcLTaugRsPgR);
      instance.SetNewArray(&newArray_edmcLcLReflEBXVectorlEl1tcLcLTaugRcOl1tcLcLTaucOedmcLcLrefhelpercLcLFindUsingAdvancelEBXVectorlEl1tcLcLTaugRcOl1tcLcLTaugRsPgR);
      instance.SetDelete(&delete_edmcLcLReflEBXVectorlEl1tcLcLTaugRcOl1tcLcLTaucOedmcLcLrefhelpercLcLFindUsingAdvancelEBXVectorlEl1tcLcLTaugRcOl1tcLcLTaugRsPgR);
      instance.SetDeleteArray(&deleteArray_edmcLcLReflEBXVectorlEl1tcLcLTaugRcOl1tcLcLTaucOedmcLcLrefhelpercLcLFindUsingAdvancelEBXVectorlEl1tcLcLTaugRcOl1tcLcLTaugRsPgR);
      instance.SetDestructor(&destruct_edmcLcLReflEBXVectorlEl1tcLcLTaugRcOl1tcLcLTaucOedmcLcLrefhelpercLcLFindUsingAdvancelEBXVectorlEl1tcLcLTaugRcOl1tcLcLTaugRsPgR);

      ::ROOT::AddClassAlternate("edm::Ref<BXVector<l1t::Tau>,l1t::Tau,edm::refhelper::FindUsingAdvance<BXVector<l1t::Tau>,l1t::Tau> >","l1t::TauRef");
      return &instance;
   }
   TGenericClassInfo *GenerateInitInstance(const ::edm::Ref<BXVector<l1t::Tau>,l1t::Tau,edm::refhelper::FindUsingAdvance<BXVector<l1t::Tau>,l1t::Tau> >*)
   {
      return GenerateInitInstanceLocal((::edm::Ref<BXVector<l1t::Tau>,l1t::Tau,edm::refhelper::FindUsingAdvance<BXVector<l1t::Tau>,l1t::Tau> >*)0);
   }
   // Static variable to force the class initialization
   static ::ROOT::TGenericClassInfo *_R__UNIQUE_(Init) = GenerateInitInstanceLocal((const ::edm::Ref<BXVector<l1t::Tau>,l1t::Tau,edm::refhelper::FindUsingAdvance<BXVector<l1t::Tau>,l1t::Tau> >*)0x0); R__UseDummy(_R__UNIQUE_(Init));

   // Dictionary for non-ClassDef classes
   static TClass *edmcLcLReflEBXVectorlEl1tcLcLTaugRcOl1tcLcLTaucOedmcLcLrefhelpercLcLFindUsingAdvancelEBXVectorlEl1tcLcLTaugRcOl1tcLcLTaugRsPgR_Dictionary() {
      TClass* theClass =::ROOT::GenerateInitInstanceLocal((const ::edm::Ref<BXVector<l1t::Tau>,l1t::Tau,edm::refhelper::FindUsingAdvance<BXVector<l1t::Tau>,l1t::Tau> >*)0x0)->GetClass();
      edmcLcLReflEBXVectorlEl1tcLcLTaugRcOl1tcLcLTaucOedmcLcLrefhelpercLcLFindUsingAdvancelEBXVectorlEl1tcLcLTaugRcOl1tcLcLTaugRsPgR_TClassManip(theClass);
   return theClass;
   }

   static void edmcLcLReflEBXVectorlEl1tcLcLTaugRcOl1tcLcLTaucOedmcLcLrefhelpercLcLFindUsingAdvancelEBXVectorlEl1tcLcLTaugRcOl1tcLcLTaugRsPgR_TClassManip(TClass* ){
   }

} // end of namespace ROOT

namespace ROOT {
   static TClass *edmcLcLWrapperlEedmcLcLReflEBXVectorlEl1tcLcLTaugRcOl1tcLcLTaucOedmcLcLrefhelpercLcLFindUsingAdvancelEBXVectorlEl1tcLcLTaugRcOl1tcLcLTaugRsPgRsPgR_Dictionary();
   static void edmcLcLWrapperlEedmcLcLReflEBXVectorlEl1tcLcLTaugRcOl1tcLcLTaucOedmcLcLrefhelpercLcLFindUsingAdvancelEBXVectorlEl1tcLcLTaugRcOl1tcLcLTaugRsPgRsPgR_TClassManip(TClass*);
   static void *new_edmcLcLWrapperlEedmcLcLReflEBXVectorlEl1tcLcLTaugRcOl1tcLcLTaucOedmcLcLrefhelpercLcLFindUsingAdvancelEBXVectorlEl1tcLcLTaugRcOl1tcLcLTaugRsPgRsPgR(void *p = 0);
   static void *newArray_edmcLcLWrapperlEedmcLcLReflEBXVectorlEl1tcLcLTaugRcOl1tcLcLTaucOedmcLcLrefhelpercLcLFindUsingAdvancelEBXVectorlEl1tcLcLTaugRcOl1tcLcLTaugRsPgRsPgR(Long_t size, void *p);
   static void delete_edmcLcLWrapperlEedmcLcLReflEBXVectorlEl1tcLcLTaugRcOl1tcLcLTaucOedmcLcLrefhelpercLcLFindUsingAdvancelEBXVectorlEl1tcLcLTaugRcOl1tcLcLTaugRsPgRsPgR(void *p);
   static void deleteArray_edmcLcLWrapperlEedmcLcLReflEBXVectorlEl1tcLcLTaugRcOl1tcLcLTaucOedmcLcLrefhelpercLcLFindUsingAdvancelEBXVectorlEl1tcLcLTaugRcOl1tcLcLTaugRsPgRsPgR(void *p);
   static void destruct_edmcLcLWrapperlEedmcLcLReflEBXVectorlEl1tcLcLTaugRcOl1tcLcLTaucOedmcLcLrefhelpercLcLFindUsingAdvancelEBXVectorlEl1tcLcLTaugRcOl1tcLcLTaugRsPgRsPgR(void *p);

   // Function generating the singleton type initializer
   static TGenericClassInfo *GenerateInitInstanceLocal(const ::edm::Wrapper<edm::Ref<BXVector<l1t::Tau>,l1t::Tau,edm::refhelper::FindUsingAdvance<BXVector<l1t::Tau>,l1t::Tau> > >*)
   {
      ::edm::Wrapper<edm::Ref<BXVector<l1t::Tau>,l1t::Tau,edm::refhelper::FindUsingAdvance<BXVector<l1t::Tau>,l1t::Tau> > > *ptr = 0;
      static ::TVirtualIsAProxy* isa_proxy = new ::TIsAProxy(typeid(::edm::Wrapper<edm::Ref<BXVector<l1t::Tau>,l1t::Tau,edm::refhelper::FindUsingAdvance<BXVector<l1t::Tau>,l1t::Tau> > >));
      static ::ROOT::TGenericClassInfo 
         instance("edm::Wrapper<edm::Ref<BXVector<l1t::Tau>,l1t::Tau,edm::refhelper::FindUsingAdvance<BXVector<l1t::Tau>,l1t::Tau> > >", ::edm::Wrapper<edm::Ref<BXVector<l1t::Tau>,l1t::Tau,edm::refhelper::FindUsingAdvance<BXVector<l1t::Tau>,l1t::Tau> > >::Class_Version(), "DataFormats/Common/interface/Wrapper.h", 25,
                  typeid(::edm::Wrapper<edm::Ref<BXVector<l1t::Tau>,l1t::Tau,edm::refhelper::FindUsingAdvance<BXVector<l1t::Tau>,l1t::Tau> > >), ::ROOT::Internal::DefineBehavior(ptr, ptr),
                  &edmcLcLWrapperlEedmcLcLReflEBXVectorlEl1tcLcLTaugRcOl1tcLcLTaucOedmcLcLrefhelpercLcLFindUsingAdvancelEBXVectorlEl1tcLcLTaugRcOl1tcLcLTaugRsPgRsPgR_Dictionary, isa_proxy, 0,
                  sizeof(::edm::Wrapper<edm::Ref<BXVector<l1t::Tau>,l1t::Tau,edm::refhelper::FindUsingAdvance<BXVector<l1t::Tau>,l1t::Tau> > >) );
      instance.SetNew(&new_edmcLcLWrapperlEedmcLcLReflEBXVectorlEl1tcLcLTaugRcOl1tcLcLTaucOedmcLcLrefhelpercLcLFindUsingAdvancelEBXVectorlEl1tcLcLTaugRcOl1tcLcLTaugRsPgRsPgR);
      instance.SetNewArray(&newArray_edmcLcLWrapperlEedmcLcLReflEBXVectorlEl1tcLcLTaugRcOl1tcLcLTaucOedmcLcLrefhelpercLcLFindUsingAdvancelEBXVectorlEl1tcLcLTaugRcOl1tcLcLTaugRsPgRsPgR);
      instance.SetDelete(&delete_edmcLcLWrapperlEedmcLcLReflEBXVectorlEl1tcLcLTaugRcOl1tcLcLTaucOedmcLcLrefhelpercLcLFindUsingAdvancelEBXVectorlEl1tcLcLTaugRcOl1tcLcLTaugRsPgRsPgR);
      instance.SetDeleteArray(&deleteArray_edmcLcLWrapperlEedmcLcLReflEBXVectorlEl1tcLcLTaugRcOl1tcLcLTaucOedmcLcLrefhelpercLcLFindUsingAdvancelEBXVectorlEl1tcLcLTaugRcOl1tcLcLTaugRsPgRsPgR);
      instance.SetDestructor(&destruct_edmcLcLWrapperlEedmcLcLReflEBXVectorlEl1tcLcLTaugRcOl1tcLcLTaucOedmcLcLrefhelpercLcLFindUsingAdvancelEBXVectorlEl1tcLcLTaugRcOl1tcLcLTaugRsPgRsPgR);

      ::ROOT::AddClassAlternate("edm::Wrapper<edm::Ref<BXVector<l1t::Tau>,l1t::Tau,edm::refhelper::FindUsingAdvance<BXVector<l1t::Tau>,l1t::Tau> > >","edm::Wrapper<l1t::TauRef>");
      return &instance;
   }
   TGenericClassInfo *GenerateInitInstance(const ::edm::Wrapper<edm::Ref<BXVector<l1t::Tau>,l1t::Tau,edm::refhelper::FindUsingAdvance<BXVector<l1t::Tau>,l1t::Tau> > >*)
   {
      return GenerateInitInstanceLocal((::edm::Wrapper<edm::Ref<BXVector<l1t::Tau>,l1t::Tau,edm::refhelper::FindUsingAdvance<BXVector<l1t::Tau>,l1t::Tau> > >*)0);
   }
   // Static variable to force the class initialization
   static ::ROOT::TGenericClassInfo *_R__UNIQUE_(Init) = GenerateInitInstanceLocal((const ::edm::Wrapper<edm::Ref<BXVector<l1t::Tau>,l1t::Tau,edm::refhelper::FindUsingAdvance<BXVector<l1t::Tau>,l1t::Tau> > >*)0x0); R__UseDummy(_R__UNIQUE_(Init));

   // Dictionary for non-ClassDef classes
   static TClass *edmcLcLWrapperlEedmcLcLReflEBXVectorlEl1tcLcLTaugRcOl1tcLcLTaucOedmcLcLrefhelpercLcLFindUsingAdvancelEBXVectorlEl1tcLcLTaugRcOl1tcLcLTaugRsPgRsPgR_Dictionary() {
      TClass* theClass =::ROOT::GenerateInitInstanceLocal((const ::edm::Wrapper<edm::Ref<BXVector<l1t::Tau>,l1t::Tau,edm::refhelper::FindUsingAdvance<BXVector<l1t::Tau>,l1t::Tau> > >*)0x0)->GetClass();
      edmcLcLWrapperlEedmcLcLReflEBXVectorlEl1tcLcLTaugRcOl1tcLcLTaucOedmcLcLrefhelpercLcLFindUsingAdvancelEBXVectorlEl1tcLcLTaugRcOl1tcLcLTaugRsPgRsPgR_TClassManip(theClass);
   return theClass;
   }

   static void edmcLcLWrapperlEedmcLcLReflEBXVectorlEl1tcLcLTaugRcOl1tcLcLTaucOedmcLcLrefhelpercLcLFindUsingAdvancelEBXVectorlEl1tcLcLTaugRcOl1tcLcLTaugRsPgRsPgR_TClassManip(TClass* ){
   }

} // end of namespace ROOT

namespace ROOT {
   static TClass *edmcLcLRefVectorlEBXVectorlEl1tcLcLTaugRcOl1tcLcLTaucOedmcLcLrefhelpercLcLFindUsingAdvancelEBXVectorlEl1tcLcLTaugRcOl1tcLcLTaugRsPgR_Dictionary();
   static void edmcLcLRefVectorlEBXVectorlEl1tcLcLTaugRcOl1tcLcLTaucOedmcLcLrefhelpercLcLFindUsingAdvancelEBXVectorlEl1tcLcLTaugRcOl1tcLcLTaugRsPgR_TClassManip(TClass*);
   static void *new_edmcLcLRefVectorlEBXVectorlEl1tcLcLTaugRcOl1tcLcLTaucOedmcLcLrefhelpercLcLFindUsingAdvancelEBXVectorlEl1tcLcLTaugRcOl1tcLcLTaugRsPgR(void *p = 0);
   static void *newArray_edmcLcLRefVectorlEBXVectorlEl1tcLcLTaugRcOl1tcLcLTaucOedmcLcLrefhelpercLcLFindUsingAdvancelEBXVectorlEl1tcLcLTaugRcOl1tcLcLTaugRsPgR(Long_t size, void *p);
   static void delete_edmcLcLRefVectorlEBXVectorlEl1tcLcLTaugRcOl1tcLcLTaucOedmcLcLrefhelpercLcLFindUsingAdvancelEBXVectorlEl1tcLcLTaugRcOl1tcLcLTaugRsPgR(void *p);
   static void deleteArray_edmcLcLRefVectorlEBXVectorlEl1tcLcLTaugRcOl1tcLcLTaucOedmcLcLrefhelpercLcLFindUsingAdvancelEBXVectorlEl1tcLcLTaugRcOl1tcLcLTaugRsPgR(void *p);
   static void destruct_edmcLcLRefVectorlEBXVectorlEl1tcLcLTaugRcOl1tcLcLTaucOedmcLcLrefhelpercLcLFindUsingAdvancelEBXVectorlEl1tcLcLTaugRcOl1tcLcLTaugRsPgR(void *p);

   // Function generating the singleton type initializer
   static TGenericClassInfo *GenerateInitInstanceLocal(const ::edm::RefVector<BXVector<l1t::Tau>,l1t::Tau,edm::refhelper::FindUsingAdvance<BXVector<l1t::Tau>,l1t::Tau> >*)
   {
      ::edm::RefVector<BXVector<l1t::Tau>,l1t::Tau,edm::refhelper::FindUsingAdvance<BXVector<l1t::Tau>,l1t::Tau> > *ptr = 0;
      static ::TVirtualIsAProxy* isa_proxy = new ::TIsAProxy(typeid(::edm::RefVector<BXVector<l1t::Tau>,l1t::Tau,edm::refhelper::FindUsingAdvance<BXVector<l1t::Tau>,l1t::Tau> >));
      static ::ROOT::TGenericClassInfo 
         instance("edm::RefVector<BXVector<l1t::Tau>,l1t::Tau,edm::refhelper::FindUsingAdvance<BXVector<l1t::Tau>,l1t::Tau> >", ::edm::RefVector<BXVector<l1t::Tau>,l1t::Tau,edm::refhelper::FindUsingAdvance<BXVector<l1t::Tau>,l1t::Tau> >::Class_Version(), "DataFormats/Common/interface/RefVector.h", 33,
                  typeid(::edm::RefVector<BXVector<l1t::Tau>,l1t::Tau,edm::refhelper::FindUsingAdvance<BXVector<l1t::Tau>,l1t::Tau> >), ::ROOT::Internal::DefineBehavior(ptr, ptr),
                  &edmcLcLRefVectorlEBXVectorlEl1tcLcLTaugRcOl1tcLcLTaucOedmcLcLrefhelpercLcLFindUsingAdvancelEBXVectorlEl1tcLcLTaugRcOl1tcLcLTaugRsPgR_Dictionary, isa_proxy, 0,
                  sizeof(::edm::RefVector<BXVector<l1t::Tau>,l1t::Tau,edm::refhelper::FindUsingAdvance<BXVector<l1t::Tau>,l1t::Tau> >) );
      instance.SetNew(&new_edmcLcLRefVectorlEBXVectorlEl1tcLcLTaugRcOl1tcLcLTaucOedmcLcLrefhelpercLcLFindUsingAdvancelEBXVectorlEl1tcLcLTaugRcOl1tcLcLTaugRsPgR);
      instance.SetNewArray(&newArray_edmcLcLRefVectorlEBXVectorlEl1tcLcLTaugRcOl1tcLcLTaucOedmcLcLrefhelpercLcLFindUsingAdvancelEBXVectorlEl1tcLcLTaugRcOl1tcLcLTaugRsPgR);
      instance.SetDelete(&delete_edmcLcLRefVectorlEBXVectorlEl1tcLcLTaugRcOl1tcLcLTaucOedmcLcLrefhelpercLcLFindUsingAdvancelEBXVectorlEl1tcLcLTaugRcOl1tcLcLTaugRsPgR);
      instance.SetDeleteArray(&deleteArray_edmcLcLRefVectorlEBXVectorlEl1tcLcLTaugRcOl1tcLcLTaucOedmcLcLrefhelpercLcLFindUsingAdvancelEBXVectorlEl1tcLcLTaugRcOl1tcLcLTaugRsPgR);
      instance.SetDestructor(&destruct_edmcLcLRefVectorlEBXVectorlEl1tcLcLTaugRcOl1tcLcLTaucOedmcLcLrefhelpercLcLFindUsingAdvancelEBXVectorlEl1tcLcLTaugRcOl1tcLcLTaugRsPgR);

      ::ROOT::AddClassAlternate("edm::RefVector<BXVector<l1t::Tau>,l1t::Tau,edm::refhelper::FindUsingAdvance<BXVector<l1t::Tau>,l1t::Tau> >","l1t::TauRefVector");
      return &instance;
   }
   TGenericClassInfo *GenerateInitInstance(const ::edm::RefVector<BXVector<l1t::Tau>,l1t::Tau,edm::refhelper::FindUsingAdvance<BXVector<l1t::Tau>,l1t::Tau> >*)
   {
      return GenerateInitInstanceLocal((::edm::RefVector<BXVector<l1t::Tau>,l1t::Tau,edm::refhelper::FindUsingAdvance<BXVector<l1t::Tau>,l1t::Tau> >*)0);
   }
   // Static variable to force the class initialization
   static ::ROOT::TGenericClassInfo *_R__UNIQUE_(Init) = GenerateInitInstanceLocal((const ::edm::RefVector<BXVector<l1t::Tau>,l1t::Tau,edm::refhelper::FindUsingAdvance<BXVector<l1t::Tau>,l1t::Tau> >*)0x0); R__UseDummy(_R__UNIQUE_(Init));

   // Dictionary for non-ClassDef classes
   static TClass *edmcLcLRefVectorlEBXVectorlEl1tcLcLTaugRcOl1tcLcLTaucOedmcLcLrefhelpercLcLFindUsingAdvancelEBXVectorlEl1tcLcLTaugRcOl1tcLcLTaugRsPgR_Dictionary() {
      TClass* theClass =::ROOT::GenerateInitInstanceLocal((const ::edm::RefVector<BXVector<l1t::Tau>,l1t::Tau,edm::refhelper::FindUsingAdvance<BXVector<l1t::Tau>,l1t::Tau> >*)0x0)->GetClass();
      edmcLcLRefVectorlEBXVectorlEl1tcLcLTaugRcOl1tcLcLTaucOedmcLcLrefhelpercLcLFindUsingAdvancelEBXVectorlEl1tcLcLTaugRcOl1tcLcLTaugRsPgR_TClassManip(theClass);
   return theClass;
   }

   static void edmcLcLRefVectorlEBXVectorlEl1tcLcLTaugRcOl1tcLcLTaucOedmcLcLrefhelpercLcLFindUsingAdvancelEBXVectorlEl1tcLcLTaugRcOl1tcLcLTaugRsPgR_TClassManip(TClass* ){
   }

} // end of namespace ROOT

namespace ROOT {
   static TClass *edmcLcLWrapperlEedmcLcLRefVectorlEBXVectorlEl1tcLcLTaugRcOl1tcLcLTaucOedmcLcLrefhelpercLcLFindUsingAdvancelEBXVectorlEl1tcLcLTaugRcOl1tcLcLTaugRsPgRsPgR_Dictionary();
   static void edmcLcLWrapperlEedmcLcLRefVectorlEBXVectorlEl1tcLcLTaugRcOl1tcLcLTaucOedmcLcLrefhelpercLcLFindUsingAdvancelEBXVectorlEl1tcLcLTaugRcOl1tcLcLTaugRsPgRsPgR_TClassManip(TClass*);
   static void *new_edmcLcLWrapperlEedmcLcLRefVectorlEBXVectorlEl1tcLcLTaugRcOl1tcLcLTaucOedmcLcLrefhelpercLcLFindUsingAdvancelEBXVectorlEl1tcLcLTaugRcOl1tcLcLTaugRsPgRsPgR(void *p = 0);
   static void *newArray_edmcLcLWrapperlEedmcLcLRefVectorlEBXVectorlEl1tcLcLTaugRcOl1tcLcLTaucOedmcLcLrefhelpercLcLFindUsingAdvancelEBXVectorlEl1tcLcLTaugRcOl1tcLcLTaugRsPgRsPgR(Long_t size, void *p);
   static void delete_edmcLcLWrapperlEedmcLcLRefVectorlEBXVectorlEl1tcLcLTaugRcOl1tcLcLTaucOedmcLcLrefhelpercLcLFindUsingAdvancelEBXVectorlEl1tcLcLTaugRcOl1tcLcLTaugRsPgRsPgR(void *p);
   static void deleteArray_edmcLcLWrapperlEedmcLcLRefVectorlEBXVectorlEl1tcLcLTaugRcOl1tcLcLTaucOedmcLcLrefhelpercLcLFindUsingAdvancelEBXVectorlEl1tcLcLTaugRcOl1tcLcLTaugRsPgRsPgR(void *p);
   static void destruct_edmcLcLWrapperlEedmcLcLRefVectorlEBXVectorlEl1tcLcLTaugRcOl1tcLcLTaucOedmcLcLrefhelpercLcLFindUsingAdvancelEBXVectorlEl1tcLcLTaugRcOl1tcLcLTaugRsPgRsPgR(void *p);

   // Function generating the singleton type initializer
   static TGenericClassInfo *GenerateInitInstanceLocal(const ::edm::Wrapper<edm::RefVector<BXVector<l1t::Tau>,l1t::Tau,edm::refhelper::FindUsingAdvance<BXVector<l1t::Tau>,l1t::Tau> > >*)
   {
      ::edm::Wrapper<edm::RefVector<BXVector<l1t::Tau>,l1t::Tau,edm::refhelper::FindUsingAdvance<BXVector<l1t::Tau>,l1t::Tau> > > *ptr = 0;
      static ::TVirtualIsAProxy* isa_proxy = new ::TIsAProxy(typeid(::edm::Wrapper<edm::RefVector<BXVector<l1t::Tau>,l1t::Tau,edm::refhelper::FindUsingAdvance<BXVector<l1t::Tau>,l1t::Tau> > >));
      static ::ROOT::TGenericClassInfo 
         instance("edm::Wrapper<edm::RefVector<BXVector<l1t::Tau>,l1t::Tau,edm::refhelper::FindUsingAdvance<BXVector<l1t::Tau>,l1t::Tau> > >", ::edm::Wrapper<edm::RefVector<BXVector<l1t::Tau>,l1t::Tau,edm::refhelper::FindUsingAdvance<BXVector<l1t::Tau>,l1t::Tau> > >::Class_Version(), "DataFormats/Common/interface/Wrapper.h", 25,
                  typeid(::edm::Wrapper<edm::RefVector<BXVector<l1t::Tau>,l1t::Tau,edm::refhelper::FindUsingAdvance<BXVector<l1t::Tau>,l1t::Tau> > >), ::ROOT::Internal::DefineBehavior(ptr, ptr),
                  &edmcLcLWrapperlEedmcLcLRefVectorlEBXVectorlEl1tcLcLTaugRcOl1tcLcLTaucOedmcLcLrefhelpercLcLFindUsingAdvancelEBXVectorlEl1tcLcLTaugRcOl1tcLcLTaugRsPgRsPgR_Dictionary, isa_proxy, 0,
                  sizeof(::edm::Wrapper<edm::RefVector<BXVector<l1t::Tau>,l1t::Tau,edm::refhelper::FindUsingAdvance<BXVector<l1t::Tau>,l1t::Tau> > >) );
      instance.SetNew(&new_edmcLcLWrapperlEedmcLcLRefVectorlEBXVectorlEl1tcLcLTaugRcOl1tcLcLTaucOedmcLcLrefhelpercLcLFindUsingAdvancelEBXVectorlEl1tcLcLTaugRcOl1tcLcLTaugRsPgRsPgR);
      instance.SetNewArray(&newArray_edmcLcLWrapperlEedmcLcLRefVectorlEBXVectorlEl1tcLcLTaugRcOl1tcLcLTaucOedmcLcLrefhelpercLcLFindUsingAdvancelEBXVectorlEl1tcLcLTaugRcOl1tcLcLTaugRsPgRsPgR);
      instance.SetDelete(&delete_edmcLcLWrapperlEedmcLcLRefVectorlEBXVectorlEl1tcLcLTaugRcOl1tcLcLTaucOedmcLcLrefhelpercLcLFindUsingAdvancelEBXVectorlEl1tcLcLTaugRcOl1tcLcLTaugRsPgRsPgR);
      instance.SetDeleteArray(&deleteArray_edmcLcLWrapperlEedmcLcLRefVectorlEBXVectorlEl1tcLcLTaugRcOl1tcLcLTaucOedmcLcLrefhelpercLcLFindUsingAdvancelEBXVectorlEl1tcLcLTaugRcOl1tcLcLTaugRsPgRsPgR);
      instance.SetDestructor(&destruct_edmcLcLWrapperlEedmcLcLRefVectorlEBXVectorlEl1tcLcLTaugRcOl1tcLcLTaucOedmcLcLrefhelpercLcLFindUsingAdvancelEBXVectorlEl1tcLcLTaugRcOl1tcLcLTaugRsPgRsPgR);

      ::ROOT::AddClassAlternate("edm::Wrapper<edm::RefVector<BXVector<l1t::Tau>,l1t::Tau,edm::refhelper::FindUsingAdvance<BXVector<l1t::Tau>,l1t::Tau> > >","edm::Wrapper<l1t::TauRefVector>");
      return &instance;
   }
   TGenericClassInfo *GenerateInitInstance(const ::edm::Wrapper<edm::RefVector<BXVector<l1t::Tau>,l1t::Tau,edm::refhelper::FindUsingAdvance<BXVector<l1t::Tau>,l1t::Tau> > >*)
   {
      return GenerateInitInstanceLocal((::edm::Wrapper<edm::RefVector<BXVector<l1t::Tau>,l1t::Tau,edm::refhelper::FindUsingAdvance<BXVector<l1t::Tau>,l1t::Tau> > >*)0);
   }
   // Static variable to force the class initialization
   static ::ROOT::TGenericClassInfo *_R__UNIQUE_(Init) = GenerateInitInstanceLocal((const ::edm::Wrapper<edm::RefVector<BXVector<l1t::Tau>,l1t::Tau,edm::refhelper::FindUsingAdvance<BXVector<l1t::Tau>,l1t::Tau> > >*)0x0); R__UseDummy(_R__UNIQUE_(Init));

   // Dictionary for non-ClassDef classes
   static TClass *edmcLcLWrapperlEedmcLcLRefVectorlEBXVectorlEl1tcLcLTaugRcOl1tcLcLTaucOedmcLcLrefhelpercLcLFindUsingAdvancelEBXVectorlEl1tcLcLTaugRcOl1tcLcLTaugRsPgRsPgR_Dictionary() {
      TClass* theClass =::ROOT::GenerateInitInstanceLocal((const ::edm::Wrapper<edm::RefVector<BXVector<l1t::Tau>,l1t::Tau,edm::refhelper::FindUsingAdvance<BXVector<l1t::Tau>,l1t::Tau> > >*)0x0)->GetClass();
      edmcLcLWrapperlEedmcLcLRefVectorlEBXVectorlEl1tcLcLTaugRcOl1tcLcLTaucOedmcLcLrefhelpercLcLFindUsingAdvancelEBXVectorlEl1tcLcLTaugRcOl1tcLcLTaugRsPgRsPgR_TClassManip(theClass);
   return theClass;
   }

   static void edmcLcLWrapperlEedmcLcLRefVectorlEBXVectorlEl1tcLcLTaugRcOl1tcLcLTaucOedmcLcLrefhelpercLcLFindUsingAdvancelEBXVectorlEl1tcLcLTaugRcOl1tcLcLTaugRsPgRsPgR_TClassManip(TClass* ){
   }

} // end of namespace ROOT

namespace ROOT {
   static TClass *edmcLcLWrapperlEvectorlEedmcLcLReflEBXVectorlEl1tcLcLTaugRcOl1tcLcLTaucOedmcLcLrefhelpercLcLFindUsingAdvancelEBXVectorlEl1tcLcLTaugRcOl1tcLcLTaugRsPgRsPgRsPgR_Dictionary();
   static void edmcLcLWrapperlEvectorlEedmcLcLReflEBXVectorlEl1tcLcLTaugRcOl1tcLcLTaucOedmcLcLrefhelpercLcLFindUsingAdvancelEBXVectorlEl1tcLcLTaugRcOl1tcLcLTaugRsPgRsPgRsPgR_TClassManip(TClass*);
   static void *new_edmcLcLWrapperlEvectorlEedmcLcLReflEBXVectorlEl1tcLcLTaugRcOl1tcLcLTaucOedmcLcLrefhelpercLcLFindUsingAdvancelEBXVectorlEl1tcLcLTaugRcOl1tcLcLTaugRsPgRsPgRsPgR(void *p = 0);
   static void *newArray_edmcLcLWrapperlEvectorlEedmcLcLReflEBXVectorlEl1tcLcLTaugRcOl1tcLcLTaucOedmcLcLrefhelpercLcLFindUsingAdvancelEBXVectorlEl1tcLcLTaugRcOl1tcLcLTaugRsPgRsPgRsPgR(Long_t size, void *p);
   static void delete_edmcLcLWrapperlEvectorlEedmcLcLReflEBXVectorlEl1tcLcLTaugRcOl1tcLcLTaucOedmcLcLrefhelpercLcLFindUsingAdvancelEBXVectorlEl1tcLcLTaugRcOl1tcLcLTaugRsPgRsPgRsPgR(void *p);
   static void deleteArray_edmcLcLWrapperlEvectorlEedmcLcLReflEBXVectorlEl1tcLcLTaugRcOl1tcLcLTaucOedmcLcLrefhelpercLcLFindUsingAdvancelEBXVectorlEl1tcLcLTaugRcOl1tcLcLTaugRsPgRsPgRsPgR(void *p);
   static void destruct_edmcLcLWrapperlEvectorlEedmcLcLReflEBXVectorlEl1tcLcLTaugRcOl1tcLcLTaucOedmcLcLrefhelpercLcLFindUsingAdvancelEBXVectorlEl1tcLcLTaugRcOl1tcLcLTaugRsPgRsPgRsPgR(void *p);

   // Function generating the singleton type initializer
   static TGenericClassInfo *GenerateInitInstanceLocal(const ::edm::Wrapper<vector<edm::Ref<BXVector<l1t::Tau>,l1t::Tau,edm::refhelper::FindUsingAdvance<BXVector<l1t::Tau>,l1t::Tau> > > >*)
   {
      ::edm::Wrapper<vector<edm::Ref<BXVector<l1t::Tau>,l1t::Tau,edm::refhelper::FindUsingAdvance<BXVector<l1t::Tau>,l1t::Tau> > > > *ptr = 0;
      static ::TVirtualIsAProxy* isa_proxy = new ::TIsAProxy(typeid(::edm::Wrapper<vector<edm::Ref<BXVector<l1t::Tau>,l1t::Tau,edm::refhelper::FindUsingAdvance<BXVector<l1t::Tau>,l1t::Tau> > > >));
      static ::ROOT::TGenericClassInfo 
         instance("edm::Wrapper<vector<edm::Ref<BXVector<l1t::Tau>,l1t::Tau,edm::refhelper::FindUsingAdvance<BXVector<l1t::Tau>,l1t::Tau> > > >", ::edm::Wrapper<vector<edm::Ref<BXVector<l1t::Tau>,l1t::Tau,edm::refhelper::FindUsingAdvance<BXVector<l1t::Tau>,l1t::Tau> > > >::Class_Version(), "DataFormats/Common/interface/Wrapper.h", 25,
                  typeid(::edm::Wrapper<vector<edm::Ref<BXVector<l1t::Tau>,l1t::Tau,edm::refhelper::FindUsingAdvance<BXVector<l1t::Tau>,l1t::Tau> > > >), ::ROOT::Internal::DefineBehavior(ptr, ptr),
                  &edmcLcLWrapperlEvectorlEedmcLcLReflEBXVectorlEl1tcLcLTaugRcOl1tcLcLTaucOedmcLcLrefhelpercLcLFindUsingAdvancelEBXVectorlEl1tcLcLTaugRcOl1tcLcLTaugRsPgRsPgRsPgR_Dictionary, isa_proxy, 0,
                  sizeof(::edm::Wrapper<vector<edm::Ref<BXVector<l1t::Tau>,l1t::Tau,edm::refhelper::FindUsingAdvance<BXVector<l1t::Tau>,l1t::Tau> > > >) );
      instance.SetNew(&new_edmcLcLWrapperlEvectorlEedmcLcLReflEBXVectorlEl1tcLcLTaugRcOl1tcLcLTaucOedmcLcLrefhelpercLcLFindUsingAdvancelEBXVectorlEl1tcLcLTaugRcOl1tcLcLTaugRsPgRsPgRsPgR);
      instance.SetNewArray(&newArray_edmcLcLWrapperlEvectorlEedmcLcLReflEBXVectorlEl1tcLcLTaugRcOl1tcLcLTaucOedmcLcLrefhelpercLcLFindUsingAdvancelEBXVectorlEl1tcLcLTaugRcOl1tcLcLTaugRsPgRsPgRsPgR);
      instance.SetDelete(&delete_edmcLcLWrapperlEvectorlEedmcLcLReflEBXVectorlEl1tcLcLTaugRcOl1tcLcLTaucOedmcLcLrefhelpercLcLFindUsingAdvancelEBXVectorlEl1tcLcLTaugRcOl1tcLcLTaugRsPgRsPgRsPgR);
      instance.SetDeleteArray(&deleteArray_edmcLcLWrapperlEvectorlEedmcLcLReflEBXVectorlEl1tcLcLTaugRcOl1tcLcLTaucOedmcLcLrefhelpercLcLFindUsingAdvancelEBXVectorlEl1tcLcLTaugRcOl1tcLcLTaugRsPgRsPgRsPgR);
      instance.SetDestructor(&destruct_edmcLcLWrapperlEvectorlEedmcLcLReflEBXVectorlEl1tcLcLTaugRcOl1tcLcLTaucOedmcLcLrefhelpercLcLFindUsingAdvancelEBXVectorlEl1tcLcLTaugRcOl1tcLcLTaugRsPgRsPgRsPgR);

      ::ROOT::AddClassAlternate("edm::Wrapper<vector<edm::Ref<BXVector<l1t::Tau>,l1t::Tau,edm::refhelper::FindUsingAdvance<BXVector<l1t::Tau>,l1t::Tau> > > >","edm::Wrapper<l1t::TauVectorRef>");
      return &instance;
   }
   TGenericClassInfo *GenerateInitInstance(const ::edm::Wrapper<vector<edm::Ref<BXVector<l1t::Tau>,l1t::Tau,edm::refhelper::FindUsingAdvance<BXVector<l1t::Tau>,l1t::Tau> > > >*)
   {
      return GenerateInitInstanceLocal((::edm::Wrapper<vector<edm::Ref<BXVector<l1t::Tau>,l1t::Tau,edm::refhelper::FindUsingAdvance<BXVector<l1t::Tau>,l1t::Tau> > > >*)0);
   }
   // Static variable to force the class initialization
   static ::ROOT::TGenericClassInfo *_R__UNIQUE_(Init) = GenerateInitInstanceLocal((const ::edm::Wrapper<vector<edm::Ref<BXVector<l1t::Tau>,l1t::Tau,edm::refhelper::FindUsingAdvance<BXVector<l1t::Tau>,l1t::Tau> > > >*)0x0); R__UseDummy(_R__UNIQUE_(Init));

   // Dictionary for non-ClassDef classes
   static TClass *edmcLcLWrapperlEvectorlEedmcLcLReflEBXVectorlEl1tcLcLTaugRcOl1tcLcLTaucOedmcLcLrefhelpercLcLFindUsingAdvancelEBXVectorlEl1tcLcLTaugRcOl1tcLcLTaugRsPgRsPgRsPgR_Dictionary() {
      TClass* theClass =::ROOT::GenerateInitInstanceLocal((const ::edm::Wrapper<vector<edm::Ref<BXVector<l1t::Tau>,l1t::Tau,edm::refhelper::FindUsingAdvance<BXVector<l1t::Tau>,l1t::Tau> > > >*)0x0)->GetClass();
      edmcLcLWrapperlEvectorlEedmcLcLReflEBXVectorlEl1tcLcLTaugRcOl1tcLcLTaucOedmcLcLrefhelpercLcLFindUsingAdvancelEBXVectorlEl1tcLcLTaugRcOl1tcLcLTaugRsPgRsPgRsPgR_TClassManip(theClass);
   return theClass;
   }

   static void edmcLcLWrapperlEvectorlEedmcLcLReflEBXVectorlEl1tcLcLTaugRcOl1tcLcLTaucOedmcLcLrefhelpercLcLFindUsingAdvancelEBXVectorlEl1tcLcLTaugRcOl1tcLcLTaugRsPgRsPgRsPgR_TClassManip(TClass* ){
   }

} // end of namespace ROOT

namespace ROOT {
   static TClass *l1tcLcLMuon_Dictionary();
   static void l1tcLcLMuon_TClassManip(TClass*);
   static void *new_l1tcLcLMuon(void *p = 0);
   static void *newArray_l1tcLcLMuon(Long_t size, void *p);
   static void delete_l1tcLcLMuon(void *p);
   static void deleteArray_l1tcLcLMuon(void *p);
   static void destruct_l1tcLcLMuon(void *p);

   // Function generating the singleton type initializer
   static TGenericClassInfo *GenerateInitInstanceLocal(const ::l1t::Muon*)
   {
      ::l1t::Muon *ptr = 0;
      static ::TVirtualIsAProxy* isa_proxy = new ::TIsAProxy(typeid(::l1t::Muon));
      static ::ROOT::TGenericClassInfo 
         instance("l1t::Muon", 16, "DataFormats/L1Trigger/interface/Muon.h", 16,
                  typeid(::l1t::Muon), ::ROOT::Internal::DefineBehavior(ptr, ptr),
                  &l1tcLcLMuon_Dictionary, isa_proxy, 8,
                  sizeof(::l1t::Muon) );
      instance.SetNew(&new_l1tcLcLMuon);
      instance.SetNewArray(&newArray_l1tcLcLMuon);
      instance.SetDelete(&delete_l1tcLcLMuon);
      instance.SetDeleteArray(&deleteArray_l1tcLcLMuon);
      instance.SetDestructor(&destruct_l1tcLcLMuon);
      return &instance;
   }
   TGenericClassInfo *GenerateInitInstance(const ::l1t::Muon*)
   {
      return GenerateInitInstanceLocal((::l1t::Muon*)0);
   }
   // Static variable to force the class initialization
   static ::ROOT::TGenericClassInfo *_R__UNIQUE_(Init) = GenerateInitInstanceLocal((const ::l1t::Muon*)0x0); R__UseDummy(_R__UNIQUE_(Init));

   // Dictionary for non-ClassDef classes
   static TClass *l1tcLcLMuon_Dictionary() {
      TClass* theClass =::ROOT::GenerateInitInstanceLocal((const ::l1t::Muon*)0x0)->GetClass();
      l1tcLcLMuon_TClassManip(theClass);
   return theClass;
   }

   static void l1tcLcLMuon_TClassManip(TClass* ){
   }

} // end of namespace ROOT

namespace ROOT {
   static TClass *BXVectorlEl1tcLcLMuongR_Dictionary();
   static void BXVectorlEl1tcLcLMuongR_TClassManip(TClass*);
   static void *new_BXVectorlEl1tcLcLMuongR(void *p = 0);
   static void *newArray_BXVectorlEl1tcLcLMuongR(Long_t size, void *p);
   static void delete_BXVectorlEl1tcLcLMuongR(void *p);
   static void deleteArray_BXVectorlEl1tcLcLMuongR(void *p);
   static void destruct_BXVectorlEl1tcLcLMuongR(void *p);

   // Function generating the singleton type initializer
   static TGenericClassInfo *GenerateInitInstanceLocal(const ::BXVector<l1t::Muon>*)
   {
      ::BXVector<l1t::Muon> *ptr = 0;
      static ::TVirtualIsAProxy* isa_proxy = new ::TIsAProxy(typeid(::BXVector<l1t::Muon>));
      static ::ROOT::TGenericClassInfo 
         instance("BXVector<l1t::Muon>", "DataFormats/L1Trigger/interface/BXVector.h", 15,
                  typeid(::BXVector<l1t::Muon>), ::ROOT::Internal::DefineBehavior(ptr, ptr),
                  &BXVectorlEl1tcLcLMuongR_Dictionary, isa_proxy, 0,
                  sizeof(::BXVector<l1t::Muon>) );
      instance.SetNew(&new_BXVectorlEl1tcLcLMuongR);
      instance.SetNewArray(&newArray_BXVectorlEl1tcLcLMuongR);
      instance.SetDelete(&delete_BXVectorlEl1tcLcLMuongR);
      instance.SetDeleteArray(&deleteArray_BXVectorlEl1tcLcLMuongR);
      instance.SetDestructor(&destruct_BXVectorlEl1tcLcLMuongR);

      ::ROOT::AddClassAlternate("BXVector<l1t::Muon>","l1t::MuonBxCollection");
      return &instance;
   }
   TGenericClassInfo *GenerateInitInstance(const ::BXVector<l1t::Muon>*)
   {
      return GenerateInitInstanceLocal((::BXVector<l1t::Muon>*)0);
   }
   // Static variable to force the class initialization
   static ::ROOT::TGenericClassInfo *_R__UNIQUE_(Init) = GenerateInitInstanceLocal((const ::BXVector<l1t::Muon>*)0x0); R__UseDummy(_R__UNIQUE_(Init));

   // Dictionary for non-ClassDef classes
   static TClass *BXVectorlEl1tcLcLMuongR_Dictionary() {
      TClass* theClass =::ROOT::GenerateInitInstanceLocal((const ::BXVector<l1t::Muon>*)0x0)->GetClass();
      BXVectorlEl1tcLcLMuongR_TClassManip(theClass);
   return theClass;
   }

   static void BXVectorlEl1tcLcLMuongR_TClassManip(TClass* ){
   }

} // end of namespace ROOT

namespace ROOT {
   static TClass *edmcLcLWrapperlEBXVectorlEl1tcLcLMuongRsPgR_Dictionary();
   static void edmcLcLWrapperlEBXVectorlEl1tcLcLMuongRsPgR_TClassManip(TClass*);
   static void *new_edmcLcLWrapperlEBXVectorlEl1tcLcLMuongRsPgR(void *p = 0);
   static void *newArray_edmcLcLWrapperlEBXVectorlEl1tcLcLMuongRsPgR(Long_t size, void *p);
   static void delete_edmcLcLWrapperlEBXVectorlEl1tcLcLMuongRsPgR(void *p);
   static void deleteArray_edmcLcLWrapperlEBXVectorlEl1tcLcLMuongRsPgR(void *p);
   static void destruct_edmcLcLWrapperlEBXVectorlEl1tcLcLMuongRsPgR(void *p);

   // Function generating the singleton type initializer
   static TGenericClassInfo *GenerateInitInstanceLocal(const ::edm::Wrapper<BXVector<l1t::Muon> >*)
   {
      ::edm::Wrapper<BXVector<l1t::Muon> > *ptr = 0;
      static ::TVirtualIsAProxy* isa_proxy = new ::TIsAProxy(typeid(::edm::Wrapper<BXVector<l1t::Muon> >));
      static ::ROOT::TGenericClassInfo 
         instance("edm::Wrapper<BXVector<l1t::Muon> >", ::edm::Wrapper<BXVector<l1t::Muon> >::Class_Version(), "DataFormats/Common/interface/Wrapper.h", 25,
                  typeid(::edm::Wrapper<BXVector<l1t::Muon> >), ::ROOT::Internal::DefineBehavior(ptr, ptr),
                  &edmcLcLWrapperlEBXVectorlEl1tcLcLMuongRsPgR_Dictionary, isa_proxy, 0,
                  sizeof(::edm::Wrapper<BXVector<l1t::Muon> >) );
      instance.SetNew(&new_edmcLcLWrapperlEBXVectorlEl1tcLcLMuongRsPgR);
      instance.SetNewArray(&newArray_edmcLcLWrapperlEBXVectorlEl1tcLcLMuongRsPgR);
      instance.SetDelete(&delete_edmcLcLWrapperlEBXVectorlEl1tcLcLMuongRsPgR);
      instance.SetDeleteArray(&deleteArray_edmcLcLWrapperlEBXVectorlEl1tcLcLMuongRsPgR);
      instance.SetDestructor(&destruct_edmcLcLWrapperlEBXVectorlEl1tcLcLMuongRsPgR);

      ::ROOT::AddClassAlternate("edm::Wrapper<BXVector<l1t::Muon> >","edm::Wrapper<l1t::MuonBxCollection>");
      return &instance;
   }
   TGenericClassInfo *GenerateInitInstance(const ::edm::Wrapper<BXVector<l1t::Muon> >*)
   {
      return GenerateInitInstanceLocal((::edm::Wrapper<BXVector<l1t::Muon> >*)0);
   }
   // Static variable to force the class initialization
   static ::ROOT::TGenericClassInfo *_R__UNIQUE_(Init) = GenerateInitInstanceLocal((const ::edm::Wrapper<BXVector<l1t::Muon> >*)0x0); R__UseDummy(_R__UNIQUE_(Init));

   // Dictionary for non-ClassDef classes
   static TClass *edmcLcLWrapperlEBXVectorlEl1tcLcLMuongRsPgR_Dictionary() {
      TClass* theClass =::ROOT::GenerateInitInstanceLocal((const ::edm::Wrapper<BXVector<l1t::Muon> >*)0x0)->GetClass();
      edmcLcLWrapperlEBXVectorlEl1tcLcLMuongRsPgR_TClassManip(theClass);
   return theClass;
   }

   static void edmcLcLWrapperlEBXVectorlEl1tcLcLMuongRsPgR_TClassManip(TClass* ){
   }

} // end of namespace ROOT

namespace ROOT {
   static TClass *edmcLcLReflEBXVectorlEl1tcLcLMuongRcOl1tcLcLMuoncOedmcLcLrefhelpercLcLFindUsingAdvancelEBXVectorlEl1tcLcLMuongRcOl1tcLcLMuongRsPgR_Dictionary();
   static void edmcLcLReflEBXVectorlEl1tcLcLMuongRcOl1tcLcLMuoncOedmcLcLrefhelpercLcLFindUsingAdvancelEBXVectorlEl1tcLcLMuongRcOl1tcLcLMuongRsPgR_TClassManip(TClass*);
   static void *new_edmcLcLReflEBXVectorlEl1tcLcLMuongRcOl1tcLcLMuoncOedmcLcLrefhelpercLcLFindUsingAdvancelEBXVectorlEl1tcLcLMuongRcOl1tcLcLMuongRsPgR(void *p = 0);
   static void *newArray_edmcLcLReflEBXVectorlEl1tcLcLMuongRcOl1tcLcLMuoncOedmcLcLrefhelpercLcLFindUsingAdvancelEBXVectorlEl1tcLcLMuongRcOl1tcLcLMuongRsPgR(Long_t size, void *p);
   static void delete_edmcLcLReflEBXVectorlEl1tcLcLMuongRcOl1tcLcLMuoncOedmcLcLrefhelpercLcLFindUsingAdvancelEBXVectorlEl1tcLcLMuongRcOl1tcLcLMuongRsPgR(void *p);
   static void deleteArray_edmcLcLReflEBXVectorlEl1tcLcLMuongRcOl1tcLcLMuoncOedmcLcLrefhelpercLcLFindUsingAdvancelEBXVectorlEl1tcLcLMuongRcOl1tcLcLMuongRsPgR(void *p);
   static void destruct_edmcLcLReflEBXVectorlEl1tcLcLMuongRcOl1tcLcLMuoncOedmcLcLrefhelpercLcLFindUsingAdvancelEBXVectorlEl1tcLcLMuongRcOl1tcLcLMuongRsPgR(void *p);

   // Function generating the singleton type initializer
   static TGenericClassInfo *GenerateInitInstanceLocal(const ::edm::Ref<BXVector<l1t::Muon>,l1t::Muon,edm::refhelper::FindUsingAdvance<BXVector<l1t::Muon>,l1t::Muon> >*)
   {
      ::edm::Ref<BXVector<l1t::Muon>,l1t::Muon,edm::refhelper::FindUsingAdvance<BXVector<l1t::Muon>,l1t::Muon> > *ptr = 0;
      static ::TVirtualIsAProxy* isa_proxy = new ::TIsAProxy(typeid(::edm::Ref<BXVector<l1t::Muon>,l1t::Muon,edm::refhelper::FindUsingAdvance<BXVector<l1t::Muon>,l1t::Muon> >));
      static ::ROOT::TGenericClassInfo 
         instance("edm::Ref<BXVector<l1t::Muon>,l1t::Muon,edm::refhelper::FindUsingAdvance<BXVector<l1t::Muon>,l1t::Muon> >", ::edm::Ref<BXVector<l1t::Muon>,l1t::Muon,edm::refhelper::FindUsingAdvance<BXVector<l1t::Muon>,l1t::Muon> >::Class_Version(), "DataFormats/Common/interface/Ref.h", 152,
                  typeid(::edm::Ref<BXVector<l1t::Muon>,l1t::Muon,edm::refhelper::FindUsingAdvance<BXVector<l1t::Muon>,l1t::Muon> >), ::ROOT::Internal::DefineBehavior(ptr, ptr),
                  &edmcLcLReflEBXVectorlEl1tcLcLMuongRcOl1tcLcLMuoncOedmcLcLrefhelpercLcLFindUsingAdvancelEBXVectorlEl1tcLcLMuongRcOl1tcLcLMuongRsPgR_Dictionary, isa_proxy, 0,
                  sizeof(::edm::Ref<BXVector<l1t::Muon>,l1t::Muon,edm::refhelper::FindUsingAdvance<BXVector<l1t::Muon>,l1t::Muon> >) );
      instance.SetNew(&new_edmcLcLReflEBXVectorlEl1tcLcLMuongRcOl1tcLcLMuoncOedmcLcLrefhelpercLcLFindUsingAdvancelEBXVectorlEl1tcLcLMuongRcOl1tcLcLMuongRsPgR);
      instance.SetNewArray(&newArray_edmcLcLReflEBXVectorlEl1tcLcLMuongRcOl1tcLcLMuoncOedmcLcLrefhelpercLcLFindUsingAdvancelEBXVectorlEl1tcLcLMuongRcOl1tcLcLMuongRsPgR);
      instance.SetDelete(&delete_edmcLcLReflEBXVectorlEl1tcLcLMuongRcOl1tcLcLMuoncOedmcLcLrefhelpercLcLFindUsingAdvancelEBXVectorlEl1tcLcLMuongRcOl1tcLcLMuongRsPgR);
      instance.SetDeleteArray(&deleteArray_edmcLcLReflEBXVectorlEl1tcLcLMuongRcOl1tcLcLMuoncOedmcLcLrefhelpercLcLFindUsingAdvancelEBXVectorlEl1tcLcLMuongRcOl1tcLcLMuongRsPgR);
      instance.SetDestructor(&destruct_edmcLcLReflEBXVectorlEl1tcLcLMuongRcOl1tcLcLMuoncOedmcLcLrefhelpercLcLFindUsingAdvancelEBXVectorlEl1tcLcLMuongRcOl1tcLcLMuongRsPgR);

      ::ROOT::AddClassAlternate("edm::Ref<BXVector<l1t::Muon>,l1t::Muon,edm::refhelper::FindUsingAdvance<BXVector<l1t::Muon>,l1t::Muon> >","l1t::MuonRef");
      return &instance;
   }
   TGenericClassInfo *GenerateInitInstance(const ::edm::Ref<BXVector<l1t::Muon>,l1t::Muon,edm::refhelper::FindUsingAdvance<BXVector<l1t::Muon>,l1t::Muon> >*)
   {
      return GenerateInitInstanceLocal((::edm::Ref<BXVector<l1t::Muon>,l1t::Muon,edm::refhelper::FindUsingAdvance<BXVector<l1t::Muon>,l1t::Muon> >*)0);
   }
   // Static variable to force the class initialization
   static ::ROOT::TGenericClassInfo *_R__UNIQUE_(Init) = GenerateInitInstanceLocal((const ::edm::Ref<BXVector<l1t::Muon>,l1t::Muon,edm::refhelper::FindUsingAdvance<BXVector<l1t::Muon>,l1t::Muon> >*)0x0); R__UseDummy(_R__UNIQUE_(Init));

   // Dictionary for non-ClassDef classes
   static TClass *edmcLcLReflEBXVectorlEl1tcLcLMuongRcOl1tcLcLMuoncOedmcLcLrefhelpercLcLFindUsingAdvancelEBXVectorlEl1tcLcLMuongRcOl1tcLcLMuongRsPgR_Dictionary() {
      TClass* theClass =::ROOT::GenerateInitInstanceLocal((const ::edm::Ref<BXVector<l1t::Muon>,l1t::Muon,edm::refhelper::FindUsingAdvance<BXVector<l1t::Muon>,l1t::Muon> >*)0x0)->GetClass();
      edmcLcLReflEBXVectorlEl1tcLcLMuongRcOl1tcLcLMuoncOedmcLcLrefhelpercLcLFindUsingAdvancelEBXVectorlEl1tcLcLMuongRcOl1tcLcLMuongRsPgR_TClassManip(theClass);
   return theClass;
   }

   static void edmcLcLReflEBXVectorlEl1tcLcLMuongRcOl1tcLcLMuoncOedmcLcLrefhelpercLcLFindUsingAdvancelEBXVectorlEl1tcLcLMuongRcOl1tcLcLMuongRsPgR_TClassManip(TClass* ){
   }

} // end of namespace ROOT

namespace ROOT {
   static TClass *edmcLcLWrapperlEedmcLcLReflEBXVectorlEl1tcLcLMuongRcOl1tcLcLMuoncOedmcLcLrefhelpercLcLFindUsingAdvancelEBXVectorlEl1tcLcLMuongRcOl1tcLcLMuongRsPgRsPgR_Dictionary();
   static void edmcLcLWrapperlEedmcLcLReflEBXVectorlEl1tcLcLMuongRcOl1tcLcLMuoncOedmcLcLrefhelpercLcLFindUsingAdvancelEBXVectorlEl1tcLcLMuongRcOl1tcLcLMuongRsPgRsPgR_TClassManip(TClass*);
   static void *new_edmcLcLWrapperlEedmcLcLReflEBXVectorlEl1tcLcLMuongRcOl1tcLcLMuoncOedmcLcLrefhelpercLcLFindUsingAdvancelEBXVectorlEl1tcLcLMuongRcOl1tcLcLMuongRsPgRsPgR(void *p = 0);
   static void *newArray_edmcLcLWrapperlEedmcLcLReflEBXVectorlEl1tcLcLMuongRcOl1tcLcLMuoncOedmcLcLrefhelpercLcLFindUsingAdvancelEBXVectorlEl1tcLcLMuongRcOl1tcLcLMuongRsPgRsPgR(Long_t size, void *p);
   static void delete_edmcLcLWrapperlEedmcLcLReflEBXVectorlEl1tcLcLMuongRcOl1tcLcLMuoncOedmcLcLrefhelpercLcLFindUsingAdvancelEBXVectorlEl1tcLcLMuongRcOl1tcLcLMuongRsPgRsPgR(void *p);
   static void deleteArray_edmcLcLWrapperlEedmcLcLReflEBXVectorlEl1tcLcLMuongRcOl1tcLcLMuoncOedmcLcLrefhelpercLcLFindUsingAdvancelEBXVectorlEl1tcLcLMuongRcOl1tcLcLMuongRsPgRsPgR(void *p);
   static void destruct_edmcLcLWrapperlEedmcLcLReflEBXVectorlEl1tcLcLMuongRcOl1tcLcLMuoncOedmcLcLrefhelpercLcLFindUsingAdvancelEBXVectorlEl1tcLcLMuongRcOl1tcLcLMuongRsPgRsPgR(void *p);

   // Function generating the singleton type initializer
   static TGenericClassInfo *GenerateInitInstanceLocal(const ::edm::Wrapper<edm::Ref<BXVector<l1t::Muon>,l1t::Muon,edm::refhelper::FindUsingAdvance<BXVector<l1t::Muon>,l1t::Muon> > >*)
   {
      ::edm::Wrapper<edm::Ref<BXVector<l1t::Muon>,l1t::Muon,edm::refhelper::FindUsingAdvance<BXVector<l1t::Muon>,l1t::Muon> > > *ptr = 0;
      static ::TVirtualIsAProxy* isa_proxy = new ::TIsAProxy(typeid(::edm::Wrapper<edm::Ref<BXVector<l1t::Muon>,l1t::Muon,edm::refhelper::FindUsingAdvance<BXVector<l1t::Muon>,l1t::Muon> > >));
      static ::ROOT::TGenericClassInfo 
         instance("edm::Wrapper<edm::Ref<BXVector<l1t::Muon>,l1t::Muon,edm::refhelper::FindUsingAdvance<BXVector<l1t::Muon>,l1t::Muon> > >", ::edm::Wrapper<edm::Ref<BXVector<l1t::Muon>,l1t::Muon,edm::refhelper::FindUsingAdvance<BXVector<l1t::Muon>,l1t::Muon> > >::Class_Version(), "DataFormats/Common/interface/Wrapper.h", 25,
                  typeid(::edm::Wrapper<edm::Ref<BXVector<l1t::Muon>,l1t::Muon,edm::refhelper::FindUsingAdvance<BXVector<l1t::Muon>,l1t::Muon> > >), ::ROOT::Internal::DefineBehavior(ptr, ptr),
                  &edmcLcLWrapperlEedmcLcLReflEBXVectorlEl1tcLcLMuongRcOl1tcLcLMuoncOedmcLcLrefhelpercLcLFindUsingAdvancelEBXVectorlEl1tcLcLMuongRcOl1tcLcLMuongRsPgRsPgR_Dictionary, isa_proxy, 0,
                  sizeof(::edm::Wrapper<edm::Ref<BXVector<l1t::Muon>,l1t::Muon,edm::refhelper::FindUsingAdvance<BXVector<l1t::Muon>,l1t::Muon> > >) );
      instance.SetNew(&new_edmcLcLWrapperlEedmcLcLReflEBXVectorlEl1tcLcLMuongRcOl1tcLcLMuoncOedmcLcLrefhelpercLcLFindUsingAdvancelEBXVectorlEl1tcLcLMuongRcOl1tcLcLMuongRsPgRsPgR);
      instance.SetNewArray(&newArray_edmcLcLWrapperlEedmcLcLReflEBXVectorlEl1tcLcLMuongRcOl1tcLcLMuoncOedmcLcLrefhelpercLcLFindUsingAdvancelEBXVectorlEl1tcLcLMuongRcOl1tcLcLMuongRsPgRsPgR);
      instance.SetDelete(&delete_edmcLcLWrapperlEedmcLcLReflEBXVectorlEl1tcLcLMuongRcOl1tcLcLMuoncOedmcLcLrefhelpercLcLFindUsingAdvancelEBXVectorlEl1tcLcLMuongRcOl1tcLcLMuongRsPgRsPgR);
      instance.SetDeleteArray(&deleteArray_edmcLcLWrapperlEedmcLcLReflEBXVectorlEl1tcLcLMuongRcOl1tcLcLMuoncOedmcLcLrefhelpercLcLFindUsingAdvancelEBXVectorlEl1tcLcLMuongRcOl1tcLcLMuongRsPgRsPgR);
      instance.SetDestructor(&destruct_edmcLcLWrapperlEedmcLcLReflEBXVectorlEl1tcLcLMuongRcOl1tcLcLMuoncOedmcLcLrefhelpercLcLFindUsingAdvancelEBXVectorlEl1tcLcLMuongRcOl1tcLcLMuongRsPgRsPgR);

      ::ROOT::AddClassAlternate("edm::Wrapper<edm::Ref<BXVector<l1t::Muon>,l1t::Muon,edm::refhelper::FindUsingAdvance<BXVector<l1t::Muon>,l1t::Muon> > >","edm::Wrapper<l1t::MuonRef>");
      return &instance;
   }
   TGenericClassInfo *GenerateInitInstance(const ::edm::Wrapper<edm::Ref<BXVector<l1t::Muon>,l1t::Muon,edm::refhelper::FindUsingAdvance<BXVector<l1t::Muon>,l1t::Muon> > >*)
   {
      return GenerateInitInstanceLocal((::edm::Wrapper<edm::Ref<BXVector<l1t::Muon>,l1t::Muon,edm::refhelper::FindUsingAdvance<BXVector<l1t::Muon>,l1t::Muon> > >*)0);
   }
   // Static variable to force the class initialization
   static ::ROOT::TGenericClassInfo *_R__UNIQUE_(Init) = GenerateInitInstanceLocal((const ::edm::Wrapper<edm::Ref<BXVector<l1t::Muon>,l1t::Muon,edm::refhelper::FindUsingAdvance<BXVector<l1t::Muon>,l1t::Muon> > >*)0x0); R__UseDummy(_R__UNIQUE_(Init));

   // Dictionary for non-ClassDef classes
   static TClass *edmcLcLWrapperlEedmcLcLReflEBXVectorlEl1tcLcLMuongRcOl1tcLcLMuoncOedmcLcLrefhelpercLcLFindUsingAdvancelEBXVectorlEl1tcLcLMuongRcOl1tcLcLMuongRsPgRsPgR_Dictionary() {
      TClass* theClass =::ROOT::GenerateInitInstanceLocal((const ::edm::Wrapper<edm::Ref<BXVector<l1t::Muon>,l1t::Muon,edm::refhelper::FindUsingAdvance<BXVector<l1t::Muon>,l1t::Muon> > >*)0x0)->GetClass();
      edmcLcLWrapperlEedmcLcLReflEBXVectorlEl1tcLcLMuongRcOl1tcLcLMuoncOedmcLcLrefhelpercLcLFindUsingAdvancelEBXVectorlEl1tcLcLMuongRcOl1tcLcLMuongRsPgRsPgR_TClassManip(theClass);
   return theClass;
   }

   static void edmcLcLWrapperlEedmcLcLReflEBXVectorlEl1tcLcLMuongRcOl1tcLcLMuoncOedmcLcLrefhelpercLcLFindUsingAdvancelEBXVectorlEl1tcLcLMuongRcOl1tcLcLMuongRsPgRsPgR_TClassManip(TClass* ){
   }

} // end of namespace ROOT

namespace ROOT {
   static TClass *edmcLcLRefVectorlEBXVectorlEl1tcLcLMuongRcOl1tcLcLMuoncOedmcLcLrefhelpercLcLFindUsingAdvancelEBXVectorlEl1tcLcLMuongRcOl1tcLcLMuongRsPgR_Dictionary();
   static void edmcLcLRefVectorlEBXVectorlEl1tcLcLMuongRcOl1tcLcLMuoncOedmcLcLrefhelpercLcLFindUsingAdvancelEBXVectorlEl1tcLcLMuongRcOl1tcLcLMuongRsPgR_TClassManip(TClass*);
   static void *new_edmcLcLRefVectorlEBXVectorlEl1tcLcLMuongRcOl1tcLcLMuoncOedmcLcLrefhelpercLcLFindUsingAdvancelEBXVectorlEl1tcLcLMuongRcOl1tcLcLMuongRsPgR(void *p = 0);
   static void *newArray_edmcLcLRefVectorlEBXVectorlEl1tcLcLMuongRcOl1tcLcLMuoncOedmcLcLrefhelpercLcLFindUsingAdvancelEBXVectorlEl1tcLcLMuongRcOl1tcLcLMuongRsPgR(Long_t size, void *p);
   static void delete_edmcLcLRefVectorlEBXVectorlEl1tcLcLMuongRcOl1tcLcLMuoncOedmcLcLrefhelpercLcLFindUsingAdvancelEBXVectorlEl1tcLcLMuongRcOl1tcLcLMuongRsPgR(void *p);
   static void deleteArray_edmcLcLRefVectorlEBXVectorlEl1tcLcLMuongRcOl1tcLcLMuoncOedmcLcLrefhelpercLcLFindUsingAdvancelEBXVectorlEl1tcLcLMuongRcOl1tcLcLMuongRsPgR(void *p);
   static void destruct_edmcLcLRefVectorlEBXVectorlEl1tcLcLMuongRcOl1tcLcLMuoncOedmcLcLrefhelpercLcLFindUsingAdvancelEBXVectorlEl1tcLcLMuongRcOl1tcLcLMuongRsPgR(void *p);

   // Function generating the singleton type initializer
   static TGenericClassInfo *GenerateInitInstanceLocal(const ::edm::RefVector<BXVector<l1t::Muon>,l1t::Muon,edm::refhelper::FindUsingAdvance<BXVector<l1t::Muon>,l1t::Muon> >*)
   {
      ::edm::RefVector<BXVector<l1t::Muon>,l1t::Muon,edm::refhelper::FindUsingAdvance<BXVector<l1t::Muon>,l1t::Muon> > *ptr = 0;
      static ::TVirtualIsAProxy* isa_proxy = new ::TIsAProxy(typeid(::edm::RefVector<BXVector<l1t::Muon>,l1t::Muon,edm::refhelper::FindUsingAdvance<BXVector<l1t::Muon>,l1t::Muon> >));
      static ::ROOT::TGenericClassInfo 
         instance("edm::RefVector<BXVector<l1t::Muon>,l1t::Muon,edm::refhelper::FindUsingAdvance<BXVector<l1t::Muon>,l1t::Muon> >", ::edm::RefVector<BXVector<l1t::Muon>,l1t::Muon,edm::refhelper::FindUsingAdvance<BXVector<l1t::Muon>,l1t::Muon> >::Class_Version(), "DataFormats/Common/interface/RefVector.h", 33,
                  typeid(::edm::RefVector<BXVector<l1t::Muon>,l1t::Muon,edm::refhelper::FindUsingAdvance<BXVector<l1t::Muon>,l1t::Muon> >), ::ROOT::Internal::DefineBehavior(ptr, ptr),
                  &edmcLcLRefVectorlEBXVectorlEl1tcLcLMuongRcOl1tcLcLMuoncOedmcLcLrefhelpercLcLFindUsingAdvancelEBXVectorlEl1tcLcLMuongRcOl1tcLcLMuongRsPgR_Dictionary, isa_proxy, 0,
                  sizeof(::edm::RefVector<BXVector<l1t::Muon>,l1t::Muon,edm::refhelper::FindUsingAdvance<BXVector<l1t::Muon>,l1t::Muon> >) );
      instance.SetNew(&new_edmcLcLRefVectorlEBXVectorlEl1tcLcLMuongRcOl1tcLcLMuoncOedmcLcLrefhelpercLcLFindUsingAdvancelEBXVectorlEl1tcLcLMuongRcOl1tcLcLMuongRsPgR);
      instance.SetNewArray(&newArray_edmcLcLRefVectorlEBXVectorlEl1tcLcLMuongRcOl1tcLcLMuoncOedmcLcLrefhelpercLcLFindUsingAdvancelEBXVectorlEl1tcLcLMuongRcOl1tcLcLMuongRsPgR);
      instance.SetDelete(&delete_edmcLcLRefVectorlEBXVectorlEl1tcLcLMuongRcOl1tcLcLMuoncOedmcLcLrefhelpercLcLFindUsingAdvancelEBXVectorlEl1tcLcLMuongRcOl1tcLcLMuongRsPgR);
      instance.SetDeleteArray(&deleteArray_edmcLcLRefVectorlEBXVectorlEl1tcLcLMuongRcOl1tcLcLMuoncOedmcLcLrefhelpercLcLFindUsingAdvancelEBXVectorlEl1tcLcLMuongRcOl1tcLcLMuongRsPgR);
      instance.SetDestructor(&destruct_edmcLcLRefVectorlEBXVectorlEl1tcLcLMuongRcOl1tcLcLMuoncOedmcLcLrefhelpercLcLFindUsingAdvancelEBXVectorlEl1tcLcLMuongRcOl1tcLcLMuongRsPgR);

      ::ROOT::AddClassAlternate("edm::RefVector<BXVector<l1t::Muon>,l1t::Muon,edm::refhelper::FindUsingAdvance<BXVector<l1t::Muon>,l1t::Muon> >","l1t::MuonRefVector");
      return &instance;
   }
   TGenericClassInfo *GenerateInitInstance(const ::edm::RefVector<BXVector<l1t::Muon>,l1t::Muon,edm::refhelper::FindUsingAdvance<BXVector<l1t::Muon>,l1t::Muon> >*)
   {
      return GenerateInitInstanceLocal((::edm::RefVector<BXVector<l1t::Muon>,l1t::Muon,edm::refhelper::FindUsingAdvance<BXVector<l1t::Muon>,l1t::Muon> >*)0);
   }
   // Static variable to force the class initialization
   static ::ROOT::TGenericClassInfo *_R__UNIQUE_(Init) = GenerateInitInstanceLocal((const ::edm::RefVector<BXVector<l1t::Muon>,l1t::Muon,edm::refhelper::FindUsingAdvance<BXVector<l1t::Muon>,l1t::Muon> >*)0x0); R__UseDummy(_R__UNIQUE_(Init));

   // Dictionary for non-ClassDef classes
   static TClass *edmcLcLRefVectorlEBXVectorlEl1tcLcLMuongRcOl1tcLcLMuoncOedmcLcLrefhelpercLcLFindUsingAdvancelEBXVectorlEl1tcLcLMuongRcOl1tcLcLMuongRsPgR_Dictionary() {
      TClass* theClass =::ROOT::GenerateInitInstanceLocal((const ::edm::RefVector<BXVector<l1t::Muon>,l1t::Muon,edm::refhelper::FindUsingAdvance<BXVector<l1t::Muon>,l1t::Muon> >*)0x0)->GetClass();
      edmcLcLRefVectorlEBXVectorlEl1tcLcLMuongRcOl1tcLcLMuoncOedmcLcLrefhelpercLcLFindUsingAdvancelEBXVectorlEl1tcLcLMuongRcOl1tcLcLMuongRsPgR_TClassManip(theClass);
   return theClass;
   }

   static void edmcLcLRefVectorlEBXVectorlEl1tcLcLMuongRcOl1tcLcLMuoncOedmcLcLrefhelpercLcLFindUsingAdvancelEBXVectorlEl1tcLcLMuongRcOl1tcLcLMuongRsPgR_TClassManip(TClass* ){
   }

} // end of namespace ROOT

namespace ROOT {
   static TClass *edmcLcLWrapperlEedmcLcLRefVectorlEBXVectorlEl1tcLcLMuongRcOl1tcLcLMuoncOedmcLcLrefhelpercLcLFindUsingAdvancelEBXVectorlEl1tcLcLMuongRcOl1tcLcLMuongRsPgRsPgR_Dictionary();
   static void edmcLcLWrapperlEedmcLcLRefVectorlEBXVectorlEl1tcLcLMuongRcOl1tcLcLMuoncOedmcLcLrefhelpercLcLFindUsingAdvancelEBXVectorlEl1tcLcLMuongRcOl1tcLcLMuongRsPgRsPgR_TClassManip(TClass*);
   static void *new_edmcLcLWrapperlEedmcLcLRefVectorlEBXVectorlEl1tcLcLMuongRcOl1tcLcLMuoncOedmcLcLrefhelpercLcLFindUsingAdvancelEBXVectorlEl1tcLcLMuongRcOl1tcLcLMuongRsPgRsPgR(void *p = 0);
   static void *newArray_edmcLcLWrapperlEedmcLcLRefVectorlEBXVectorlEl1tcLcLMuongRcOl1tcLcLMuoncOedmcLcLrefhelpercLcLFindUsingAdvancelEBXVectorlEl1tcLcLMuongRcOl1tcLcLMuongRsPgRsPgR(Long_t size, void *p);
   static void delete_edmcLcLWrapperlEedmcLcLRefVectorlEBXVectorlEl1tcLcLMuongRcOl1tcLcLMuoncOedmcLcLrefhelpercLcLFindUsingAdvancelEBXVectorlEl1tcLcLMuongRcOl1tcLcLMuongRsPgRsPgR(void *p);
   static void deleteArray_edmcLcLWrapperlEedmcLcLRefVectorlEBXVectorlEl1tcLcLMuongRcOl1tcLcLMuoncOedmcLcLrefhelpercLcLFindUsingAdvancelEBXVectorlEl1tcLcLMuongRcOl1tcLcLMuongRsPgRsPgR(void *p);
   static void destruct_edmcLcLWrapperlEedmcLcLRefVectorlEBXVectorlEl1tcLcLMuongRcOl1tcLcLMuoncOedmcLcLrefhelpercLcLFindUsingAdvancelEBXVectorlEl1tcLcLMuongRcOl1tcLcLMuongRsPgRsPgR(void *p);

   // Function generating the singleton type initializer
   static TGenericClassInfo *GenerateInitInstanceLocal(const ::edm::Wrapper<edm::RefVector<BXVector<l1t::Muon>,l1t::Muon,edm::refhelper::FindUsingAdvance<BXVector<l1t::Muon>,l1t::Muon> > >*)
   {
      ::edm::Wrapper<edm::RefVector<BXVector<l1t::Muon>,l1t::Muon,edm::refhelper::FindUsingAdvance<BXVector<l1t::Muon>,l1t::Muon> > > *ptr = 0;
      static ::TVirtualIsAProxy* isa_proxy = new ::TIsAProxy(typeid(::edm::Wrapper<edm::RefVector<BXVector<l1t::Muon>,l1t::Muon,edm::refhelper::FindUsingAdvance<BXVector<l1t::Muon>,l1t::Muon> > >));
      static ::ROOT::TGenericClassInfo 
         instance("edm::Wrapper<edm::RefVector<BXVector<l1t::Muon>,l1t::Muon,edm::refhelper::FindUsingAdvance<BXVector<l1t::Muon>,l1t::Muon> > >", ::edm::Wrapper<edm::RefVector<BXVector<l1t::Muon>,l1t::Muon,edm::refhelper::FindUsingAdvance<BXVector<l1t::Muon>,l1t::Muon> > >::Class_Version(), "DataFormats/Common/interface/Wrapper.h", 25,
                  typeid(::edm::Wrapper<edm::RefVector<BXVector<l1t::Muon>,l1t::Muon,edm::refhelper::FindUsingAdvance<BXVector<l1t::Muon>,l1t::Muon> > >), ::ROOT::Internal::DefineBehavior(ptr, ptr),
                  &edmcLcLWrapperlEedmcLcLRefVectorlEBXVectorlEl1tcLcLMuongRcOl1tcLcLMuoncOedmcLcLrefhelpercLcLFindUsingAdvancelEBXVectorlEl1tcLcLMuongRcOl1tcLcLMuongRsPgRsPgR_Dictionary, isa_proxy, 0,
                  sizeof(::edm::Wrapper<edm::RefVector<BXVector<l1t::Muon>,l1t::Muon,edm::refhelper::FindUsingAdvance<BXVector<l1t::Muon>,l1t::Muon> > >) );
      instance.SetNew(&new_edmcLcLWrapperlEedmcLcLRefVectorlEBXVectorlEl1tcLcLMuongRcOl1tcLcLMuoncOedmcLcLrefhelpercLcLFindUsingAdvancelEBXVectorlEl1tcLcLMuongRcOl1tcLcLMuongRsPgRsPgR);
      instance.SetNewArray(&newArray_edmcLcLWrapperlEedmcLcLRefVectorlEBXVectorlEl1tcLcLMuongRcOl1tcLcLMuoncOedmcLcLrefhelpercLcLFindUsingAdvancelEBXVectorlEl1tcLcLMuongRcOl1tcLcLMuongRsPgRsPgR);
      instance.SetDelete(&delete_edmcLcLWrapperlEedmcLcLRefVectorlEBXVectorlEl1tcLcLMuongRcOl1tcLcLMuoncOedmcLcLrefhelpercLcLFindUsingAdvancelEBXVectorlEl1tcLcLMuongRcOl1tcLcLMuongRsPgRsPgR);
      instance.SetDeleteArray(&deleteArray_edmcLcLWrapperlEedmcLcLRefVectorlEBXVectorlEl1tcLcLMuongRcOl1tcLcLMuoncOedmcLcLrefhelpercLcLFindUsingAdvancelEBXVectorlEl1tcLcLMuongRcOl1tcLcLMuongRsPgRsPgR);
      instance.SetDestructor(&destruct_edmcLcLWrapperlEedmcLcLRefVectorlEBXVectorlEl1tcLcLMuongRcOl1tcLcLMuoncOedmcLcLrefhelpercLcLFindUsingAdvancelEBXVectorlEl1tcLcLMuongRcOl1tcLcLMuongRsPgRsPgR);

      ::ROOT::AddClassAlternate("edm::Wrapper<edm::RefVector<BXVector<l1t::Muon>,l1t::Muon,edm::refhelper::FindUsingAdvance<BXVector<l1t::Muon>,l1t::Muon> > >","edm::Wrapper<l1t::MuonRefVector>");
      return &instance;
   }
   TGenericClassInfo *GenerateInitInstance(const ::edm::Wrapper<edm::RefVector<BXVector<l1t::Muon>,l1t::Muon,edm::refhelper::FindUsingAdvance<BXVector<l1t::Muon>,l1t::Muon> > >*)
   {
      return GenerateInitInstanceLocal((::edm::Wrapper<edm::RefVector<BXVector<l1t::Muon>,l1t::Muon,edm::refhelper::FindUsingAdvance<BXVector<l1t::Muon>,l1t::Muon> > >*)0);
   }
   // Static variable to force the class initialization
   static ::ROOT::TGenericClassInfo *_R__UNIQUE_(Init) = GenerateInitInstanceLocal((const ::edm::Wrapper<edm::RefVector<BXVector<l1t::Muon>,l1t::Muon,edm::refhelper::FindUsingAdvance<BXVector<l1t::Muon>,l1t::Muon> > >*)0x0); R__UseDummy(_R__UNIQUE_(Init));

   // Dictionary for non-ClassDef classes
   static TClass *edmcLcLWrapperlEedmcLcLRefVectorlEBXVectorlEl1tcLcLMuongRcOl1tcLcLMuoncOedmcLcLrefhelpercLcLFindUsingAdvancelEBXVectorlEl1tcLcLMuongRcOl1tcLcLMuongRsPgRsPgR_Dictionary() {
      TClass* theClass =::ROOT::GenerateInitInstanceLocal((const ::edm::Wrapper<edm::RefVector<BXVector<l1t::Muon>,l1t::Muon,edm::refhelper::FindUsingAdvance<BXVector<l1t::Muon>,l1t::Muon> > >*)0x0)->GetClass();
      edmcLcLWrapperlEedmcLcLRefVectorlEBXVectorlEl1tcLcLMuongRcOl1tcLcLMuoncOedmcLcLrefhelpercLcLFindUsingAdvancelEBXVectorlEl1tcLcLMuongRcOl1tcLcLMuongRsPgRsPgR_TClassManip(theClass);
   return theClass;
   }

   static void edmcLcLWrapperlEedmcLcLRefVectorlEBXVectorlEl1tcLcLMuongRcOl1tcLcLMuoncOedmcLcLrefhelpercLcLFindUsingAdvancelEBXVectorlEl1tcLcLMuongRcOl1tcLcLMuongRsPgRsPgR_TClassManip(TClass* ){
   }

} // end of namespace ROOT

namespace ROOT {
   static TClass *edmcLcLWrapperlEvectorlEedmcLcLReflEBXVectorlEl1tcLcLMuongRcOl1tcLcLMuoncOedmcLcLrefhelpercLcLFindUsingAdvancelEBXVectorlEl1tcLcLMuongRcOl1tcLcLMuongRsPgRsPgRsPgR_Dictionary();
   static void edmcLcLWrapperlEvectorlEedmcLcLReflEBXVectorlEl1tcLcLMuongRcOl1tcLcLMuoncOedmcLcLrefhelpercLcLFindUsingAdvancelEBXVectorlEl1tcLcLMuongRcOl1tcLcLMuongRsPgRsPgRsPgR_TClassManip(TClass*);
   static void *new_edmcLcLWrapperlEvectorlEedmcLcLReflEBXVectorlEl1tcLcLMuongRcOl1tcLcLMuoncOedmcLcLrefhelpercLcLFindUsingAdvancelEBXVectorlEl1tcLcLMuongRcOl1tcLcLMuongRsPgRsPgRsPgR(void *p = 0);
   static void *newArray_edmcLcLWrapperlEvectorlEedmcLcLReflEBXVectorlEl1tcLcLMuongRcOl1tcLcLMuoncOedmcLcLrefhelpercLcLFindUsingAdvancelEBXVectorlEl1tcLcLMuongRcOl1tcLcLMuongRsPgRsPgRsPgR(Long_t size, void *p);
   static void delete_edmcLcLWrapperlEvectorlEedmcLcLReflEBXVectorlEl1tcLcLMuongRcOl1tcLcLMuoncOedmcLcLrefhelpercLcLFindUsingAdvancelEBXVectorlEl1tcLcLMuongRcOl1tcLcLMuongRsPgRsPgRsPgR(void *p);
   static void deleteArray_edmcLcLWrapperlEvectorlEedmcLcLReflEBXVectorlEl1tcLcLMuongRcOl1tcLcLMuoncOedmcLcLrefhelpercLcLFindUsingAdvancelEBXVectorlEl1tcLcLMuongRcOl1tcLcLMuongRsPgRsPgRsPgR(void *p);
   static void destruct_edmcLcLWrapperlEvectorlEedmcLcLReflEBXVectorlEl1tcLcLMuongRcOl1tcLcLMuoncOedmcLcLrefhelpercLcLFindUsingAdvancelEBXVectorlEl1tcLcLMuongRcOl1tcLcLMuongRsPgRsPgRsPgR(void *p);

   // Function generating the singleton type initializer
   static TGenericClassInfo *GenerateInitInstanceLocal(const ::edm::Wrapper<vector<edm::Ref<BXVector<l1t::Muon>,l1t::Muon,edm::refhelper::FindUsingAdvance<BXVector<l1t::Muon>,l1t::Muon> > > >*)
   {
      ::edm::Wrapper<vector<edm::Ref<BXVector<l1t::Muon>,l1t::Muon,edm::refhelper::FindUsingAdvance<BXVector<l1t::Muon>,l1t::Muon> > > > *ptr = 0;
      static ::TVirtualIsAProxy* isa_proxy = new ::TIsAProxy(typeid(::edm::Wrapper<vector<edm::Ref<BXVector<l1t::Muon>,l1t::Muon,edm::refhelper::FindUsingAdvance<BXVector<l1t::Muon>,l1t::Muon> > > >));
      static ::ROOT::TGenericClassInfo 
         instance("edm::Wrapper<vector<edm::Ref<BXVector<l1t::Muon>,l1t::Muon,edm::refhelper::FindUsingAdvance<BXVector<l1t::Muon>,l1t::Muon> > > >", ::edm::Wrapper<vector<edm::Ref<BXVector<l1t::Muon>,l1t::Muon,edm::refhelper::FindUsingAdvance<BXVector<l1t::Muon>,l1t::Muon> > > >::Class_Version(), "DataFormats/Common/interface/Wrapper.h", 25,
                  typeid(::edm::Wrapper<vector<edm::Ref<BXVector<l1t::Muon>,l1t::Muon,edm::refhelper::FindUsingAdvance<BXVector<l1t::Muon>,l1t::Muon> > > >), ::ROOT::Internal::DefineBehavior(ptr, ptr),
                  &edmcLcLWrapperlEvectorlEedmcLcLReflEBXVectorlEl1tcLcLMuongRcOl1tcLcLMuoncOedmcLcLrefhelpercLcLFindUsingAdvancelEBXVectorlEl1tcLcLMuongRcOl1tcLcLMuongRsPgRsPgRsPgR_Dictionary, isa_proxy, 0,
                  sizeof(::edm::Wrapper<vector<edm::Ref<BXVector<l1t::Muon>,l1t::Muon,edm::refhelper::FindUsingAdvance<BXVector<l1t::Muon>,l1t::Muon> > > >) );
      instance.SetNew(&new_edmcLcLWrapperlEvectorlEedmcLcLReflEBXVectorlEl1tcLcLMuongRcOl1tcLcLMuoncOedmcLcLrefhelpercLcLFindUsingAdvancelEBXVectorlEl1tcLcLMuongRcOl1tcLcLMuongRsPgRsPgRsPgR);
      instance.SetNewArray(&newArray_edmcLcLWrapperlEvectorlEedmcLcLReflEBXVectorlEl1tcLcLMuongRcOl1tcLcLMuoncOedmcLcLrefhelpercLcLFindUsingAdvancelEBXVectorlEl1tcLcLMuongRcOl1tcLcLMuongRsPgRsPgRsPgR);
      instance.SetDelete(&delete_edmcLcLWrapperlEvectorlEedmcLcLReflEBXVectorlEl1tcLcLMuongRcOl1tcLcLMuoncOedmcLcLrefhelpercLcLFindUsingAdvancelEBXVectorlEl1tcLcLMuongRcOl1tcLcLMuongRsPgRsPgRsPgR);
      instance.SetDeleteArray(&deleteArray_edmcLcLWrapperlEvectorlEedmcLcLReflEBXVectorlEl1tcLcLMuongRcOl1tcLcLMuoncOedmcLcLrefhelpercLcLFindUsingAdvancelEBXVectorlEl1tcLcLMuongRcOl1tcLcLMuongRsPgRsPgRsPgR);
      instance.SetDestructor(&destruct_edmcLcLWrapperlEvectorlEedmcLcLReflEBXVectorlEl1tcLcLMuongRcOl1tcLcLMuoncOedmcLcLrefhelpercLcLFindUsingAdvancelEBXVectorlEl1tcLcLMuongRcOl1tcLcLMuongRsPgRsPgRsPgR);

      ::ROOT::AddClassAlternate("edm::Wrapper<vector<edm::Ref<BXVector<l1t::Muon>,l1t::Muon,edm::refhelper::FindUsingAdvance<BXVector<l1t::Muon>,l1t::Muon> > > >","edm::Wrapper<l1t::MuonVectorRef>");
      return &instance;
   }
   TGenericClassInfo *GenerateInitInstance(const ::edm::Wrapper<vector<edm::Ref<BXVector<l1t::Muon>,l1t::Muon,edm::refhelper::FindUsingAdvance<BXVector<l1t::Muon>,l1t::Muon> > > >*)
   {
      return GenerateInitInstanceLocal((::edm::Wrapper<vector<edm::Ref<BXVector<l1t::Muon>,l1t::Muon,edm::refhelper::FindUsingAdvance<BXVector<l1t::Muon>,l1t::Muon> > > >*)0);
   }
   // Static variable to force the class initialization
   static ::ROOT::TGenericClassInfo *_R__UNIQUE_(Init) = GenerateInitInstanceLocal((const ::edm::Wrapper<vector<edm::Ref<BXVector<l1t::Muon>,l1t::Muon,edm::refhelper::FindUsingAdvance<BXVector<l1t::Muon>,l1t::Muon> > > >*)0x0); R__UseDummy(_R__UNIQUE_(Init));

   // Dictionary for non-ClassDef classes
   static TClass *edmcLcLWrapperlEvectorlEedmcLcLReflEBXVectorlEl1tcLcLMuongRcOl1tcLcLMuoncOedmcLcLrefhelpercLcLFindUsingAdvancelEBXVectorlEl1tcLcLMuongRcOl1tcLcLMuongRsPgRsPgRsPgR_Dictionary() {
      TClass* theClass =::ROOT::GenerateInitInstanceLocal((const ::edm::Wrapper<vector<edm::Ref<BXVector<l1t::Muon>,l1t::Muon,edm::refhelper::FindUsingAdvance<BXVector<l1t::Muon>,l1t::Muon> > > >*)0x0)->GetClass();
      edmcLcLWrapperlEvectorlEedmcLcLReflEBXVectorlEl1tcLcLMuongRcOl1tcLcLMuoncOedmcLcLrefhelpercLcLFindUsingAdvancelEBXVectorlEl1tcLcLMuongRcOl1tcLcLMuongRsPgRsPgRsPgR_TClassManip(theClass);
   return theClass;
   }

   static void edmcLcLWrapperlEvectorlEedmcLcLReflEBXVectorlEl1tcLcLMuongRcOl1tcLcLMuoncOedmcLcLrefhelpercLcLFindUsingAdvancelEBXVectorlEl1tcLcLMuongRcOl1tcLcLMuongRsPgRsPgRsPgR_TClassManip(TClass* ){
   }

} // end of namespace ROOT

namespace ROOT {
   static TClass *l1tcLcLCaloSpare_Dictionary();
   static void l1tcLcLCaloSpare_TClassManip(TClass*);
   static void *new_l1tcLcLCaloSpare(void *p = 0);
   static void *newArray_l1tcLcLCaloSpare(Long_t size, void *p);
   static void delete_l1tcLcLCaloSpare(void *p);
   static void deleteArray_l1tcLcLCaloSpare(void *p);
   static void destruct_l1tcLcLCaloSpare(void *p);

   // Function generating the singleton type initializer
   static TGenericClassInfo *GenerateInitInstanceLocal(const ::l1t::CaloSpare*)
   {
      ::l1t::CaloSpare *ptr = 0;
      static ::TVirtualIsAProxy* isa_proxy = new ::TIsAProxy(typeid(::l1t::CaloSpare));
      static ::ROOT::TGenericClassInfo 
         instance("l1t::CaloSpare", 13, "DataFormats/L1Trigger/interface/CaloSpare.h", 13,
                  typeid(::l1t::CaloSpare), ::ROOT::Internal::DefineBehavior(ptr, ptr),
                  &l1tcLcLCaloSpare_Dictionary, isa_proxy, 8,
                  sizeof(::l1t::CaloSpare) );
      instance.SetNew(&new_l1tcLcLCaloSpare);
      instance.SetNewArray(&newArray_l1tcLcLCaloSpare);
      instance.SetDelete(&delete_l1tcLcLCaloSpare);
      instance.SetDeleteArray(&deleteArray_l1tcLcLCaloSpare);
      instance.SetDestructor(&destruct_l1tcLcLCaloSpare);
      return &instance;
   }
   TGenericClassInfo *GenerateInitInstance(const ::l1t::CaloSpare*)
   {
      return GenerateInitInstanceLocal((::l1t::CaloSpare*)0);
   }
   // Static variable to force the class initialization
   static ::ROOT::TGenericClassInfo *_R__UNIQUE_(Init) = GenerateInitInstanceLocal((const ::l1t::CaloSpare*)0x0); R__UseDummy(_R__UNIQUE_(Init));

   // Dictionary for non-ClassDef classes
   static TClass *l1tcLcLCaloSpare_Dictionary() {
      TClass* theClass =::ROOT::GenerateInitInstanceLocal((const ::l1t::CaloSpare*)0x0)->GetClass();
      l1tcLcLCaloSpare_TClassManip(theClass);
   return theClass;
   }

   static void l1tcLcLCaloSpare_TClassManip(TClass* ){
   }

} // end of namespace ROOT

namespace ROOT {
   static TClass *BXVectorlEl1tcLcLCaloSparegR_Dictionary();
   static void BXVectorlEl1tcLcLCaloSparegR_TClassManip(TClass*);
   static void *new_BXVectorlEl1tcLcLCaloSparegR(void *p = 0);
   static void *newArray_BXVectorlEl1tcLcLCaloSparegR(Long_t size, void *p);
   static void delete_BXVectorlEl1tcLcLCaloSparegR(void *p);
   static void deleteArray_BXVectorlEl1tcLcLCaloSparegR(void *p);
   static void destruct_BXVectorlEl1tcLcLCaloSparegR(void *p);

   // Function generating the singleton type initializer
   static TGenericClassInfo *GenerateInitInstanceLocal(const ::BXVector<l1t::CaloSpare>*)
   {
      ::BXVector<l1t::CaloSpare> *ptr = 0;
      static ::TVirtualIsAProxy* isa_proxy = new ::TIsAProxy(typeid(::BXVector<l1t::CaloSpare>));
      static ::ROOT::TGenericClassInfo 
         instance("BXVector<l1t::CaloSpare>", "DataFormats/L1Trigger/interface/BXVector.h", 15,
                  typeid(::BXVector<l1t::CaloSpare>), ::ROOT::Internal::DefineBehavior(ptr, ptr),
                  &BXVectorlEl1tcLcLCaloSparegR_Dictionary, isa_proxy, 0,
                  sizeof(::BXVector<l1t::CaloSpare>) );
      instance.SetNew(&new_BXVectorlEl1tcLcLCaloSparegR);
      instance.SetNewArray(&newArray_BXVectorlEl1tcLcLCaloSparegR);
      instance.SetDelete(&delete_BXVectorlEl1tcLcLCaloSparegR);
      instance.SetDeleteArray(&deleteArray_BXVectorlEl1tcLcLCaloSparegR);
      instance.SetDestructor(&destruct_BXVectorlEl1tcLcLCaloSparegR);

      ::ROOT::AddClassAlternate("BXVector<l1t::CaloSpare>","l1t::CaloSpareBxCollection");
      return &instance;
   }
   TGenericClassInfo *GenerateInitInstance(const ::BXVector<l1t::CaloSpare>*)
   {
      return GenerateInitInstanceLocal((::BXVector<l1t::CaloSpare>*)0);
   }
   // Static variable to force the class initialization
   static ::ROOT::TGenericClassInfo *_R__UNIQUE_(Init) = GenerateInitInstanceLocal((const ::BXVector<l1t::CaloSpare>*)0x0); R__UseDummy(_R__UNIQUE_(Init));

   // Dictionary for non-ClassDef classes
   static TClass *BXVectorlEl1tcLcLCaloSparegR_Dictionary() {
      TClass* theClass =::ROOT::GenerateInitInstanceLocal((const ::BXVector<l1t::CaloSpare>*)0x0)->GetClass();
      BXVectorlEl1tcLcLCaloSparegR_TClassManip(theClass);
   return theClass;
   }

   static void BXVectorlEl1tcLcLCaloSparegR_TClassManip(TClass* ){
   }

} // end of namespace ROOT

namespace ROOT {
   static TClass *edmcLcLWrapperlEBXVectorlEl1tcLcLCaloSparegRsPgR_Dictionary();
   static void edmcLcLWrapperlEBXVectorlEl1tcLcLCaloSparegRsPgR_TClassManip(TClass*);
   static void *new_edmcLcLWrapperlEBXVectorlEl1tcLcLCaloSparegRsPgR(void *p = 0);
   static void *newArray_edmcLcLWrapperlEBXVectorlEl1tcLcLCaloSparegRsPgR(Long_t size, void *p);
   static void delete_edmcLcLWrapperlEBXVectorlEl1tcLcLCaloSparegRsPgR(void *p);
   static void deleteArray_edmcLcLWrapperlEBXVectorlEl1tcLcLCaloSparegRsPgR(void *p);
   static void destruct_edmcLcLWrapperlEBXVectorlEl1tcLcLCaloSparegRsPgR(void *p);

   // Function generating the singleton type initializer
   static TGenericClassInfo *GenerateInitInstanceLocal(const ::edm::Wrapper<BXVector<l1t::CaloSpare> >*)
   {
      ::edm::Wrapper<BXVector<l1t::CaloSpare> > *ptr = 0;
      static ::TVirtualIsAProxy* isa_proxy = new ::TIsAProxy(typeid(::edm::Wrapper<BXVector<l1t::CaloSpare> >));
      static ::ROOT::TGenericClassInfo 
         instance("edm::Wrapper<BXVector<l1t::CaloSpare> >", ::edm::Wrapper<BXVector<l1t::CaloSpare> >::Class_Version(), "DataFormats/Common/interface/Wrapper.h", 25,
                  typeid(::edm::Wrapper<BXVector<l1t::CaloSpare> >), ::ROOT::Internal::DefineBehavior(ptr, ptr),
                  &edmcLcLWrapperlEBXVectorlEl1tcLcLCaloSparegRsPgR_Dictionary, isa_proxy, 0,
                  sizeof(::edm::Wrapper<BXVector<l1t::CaloSpare> >) );
      instance.SetNew(&new_edmcLcLWrapperlEBXVectorlEl1tcLcLCaloSparegRsPgR);
      instance.SetNewArray(&newArray_edmcLcLWrapperlEBXVectorlEl1tcLcLCaloSparegRsPgR);
      instance.SetDelete(&delete_edmcLcLWrapperlEBXVectorlEl1tcLcLCaloSparegRsPgR);
      instance.SetDeleteArray(&deleteArray_edmcLcLWrapperlEBXVectorlEl1tcLcLCaloSparegRsPgR);
      instance.SetDestructor(&destruct_edmcLcLWrapperlEBXVectorlEl1tcLcLCaloSparegRsPgR);

      ::ROOT::AddClassAlternate("edm::Wrapper<BXVector<l1t::CaloSpare> >","edm::Wrapper<l1t::CaloSpareBxCollection>");
      return &instance;
   }
   TGenericClassInfo *GenerateInitInstance(const ::edm::Wrapper<BXVector<l1t::CaloSpare> >*)
   {
      return GenerateInitInstanceLocal((::edm::Wrapper<BXVector<l1t::CaloSpare> >*)0);
   }
   // Static variable to force the class initialization
   static ::ROOT::TGenericClassInfo *_R__UNIQUE_(Init) = GenerateInitInstanceLocal((const ::edm::Wrapper<BXVector<l1t::CaloSpare> >*)0x0); R__UseDummy(_R__UNIQUE_(Init));

   // Dictionary for non-ClassDef classes
   static TClass *edmcLcLWrapperlEBXVectorlEl1tcLcLCaloSparegRsPgR_Dictionary() {
      TClass* theClass =::ROOT::GenerateInitInstanceLocal((const ::edm::Wrapper<BXVector<l1t::CaloSpare> >*)0x0)->GetClass();
      edmcLcLWrapperlEBXVectorlEl1tcLcLCaloSparegRsPgR_TClassManip(theClass);
   return theClass;
   }

   static void edmcLcLWrapperlEBXVectorlEl1tcLcLCaloSparegRsPgR_TClassManip(TClass* ){
   }

} // end of namespace ROOT

namespace ROOT {
   static TClass *l1extracLcLL1EmParticle_Dictionary();
   static void l1extracLcLL1EmParticle_TClassManip(TClass*);
   static void *new_l1extracLcLL1EmParticle(void *p = 0);
   static void *newArray_l1extracLcLL1EmParticle(Long_t size, void *p);
   static void delete_l1extracLcLL1EmParticle(void *p);
   static void deleteArray_l1extracLcLL1EmParticle(void *p);
   static void destruct_l1extracLcLL1EmParticle(void *p);

   // Function generating the singleton type initializer
   static TGenericClassInfo *GenerateInitInstanceLocal(const ::l1extra::L1EmParticle*)
   {
      ::l1extra::L1EmParticle *ptr = 0;
      static ::TVirtualIsAProxy* isa_proxy = new ::TIsAProxy(typeid(::l1extra::L1EmParticle));
      static ::ROOT::TGenericClassInfo 
         instance("l1extra::L1EmParticle", 13, "DataFormats/L1Trigger/interface/L1EmParticle.h", 28,
                  typeid(::l1extra::L1EmParticle), ::ROOT::Internal::DefineBehavior(ptr, ptr),
                  &l1extracLcLL1EmParticle_Dictionary, isa_proxy, 8,
                  sizeof(::l1extra::L1EmParticle) );
      instance.SetNew(&new_l1extracLcLL1EmParticle);
      instance.SetNewArray(&newArray_l1extracLcLL1EmParticle);
      instance.SetDelete(&delete_l1extracLcLL1EmParticle);
      instance.SetDeleteArray(&deleteArray_l1extracLcLL1EmParticle);
      instance.SetDestructor(&destruct_l1extracLcLL1EmParticle);
      return &instance;
   }
   TGenericClassInfo *GenerateInitInstance(const ::l1extra::L1EmParticle*)
   {
      return GenerateInitInstanceLocal((::l1extra::L1EmParticle*)0);
   }
   // Static variable to force the class initialization
   static ::ROOT::TGenericClassInfo *_R__UNIQUE_(Init) = GenerateInitInstanceLocal((const ::l1extra::L1EmParticle*)0x0); R__UseDummy(_R__UNIQUE_(Init));

   // Dictionary for non-ClassDef classes
   static TClass *l1extracLcLL1EmParticle_Dictionary() {
      TClass* theClass =::ROOT::GenerateInitInstanceLocal((const ::l1extra::L1EmParticle*)0x0)->GetClass();
      l1extracLcLL1EmParticle_TClassManip(theClass);
   return theClass;
   }

   static void l1extracLcLL1EmParticle_TClassManip(TClass* ){
   }

} // end of namespace ROOT

namespace ROOT {
   static TClass *l1extracLcLL1JetParticle_Dictionary();
   static void l1extracLcLL1JetParticle_TClassManip(TClass*);
   static void *new_l1extracLcLL1JetParticle(void *p = 0);
   static void *newArray_l1extracLcLL1JetParticle(Long_t size, void *p);
   static void delete_l1extracLcLL1JetParticle(void *p);
   static void deleteArray_l1extracLcLL1JetParticle(void *p);
   static void destruct_l1extracLcLL1JetParticle(void *p);

   // Function generating the singleton type initializer
   static TGenericClassInfo *GenerateInitInstanceLocal(const ::l1extra::L1JetParticle*)
   {
      ::l1extra::L1JetParticle *ptr = 0;
      static ::TVirtualIsAProxy* isa_proxy = new ::TIsAProxy(typeid(::l1extra::L1JetParticle));
      static ::ROOT::TGenericClassInfo 
         instance("l1extra::L1JetParticle", 13, "DataFormats/L1Trigger/interface/L1JetParticle.h", 28,
                  typeid(::l1extra::L1JetParticle), ::ROOT::Internal::DefineBehavior(ptr, ptr),
                  &l1extracLcLL1JetParticle_Dictionary, isa_proxy, 8,
                  sizeof(::l1extra::L1JetParticle) );
      instance.SetNew(&new_l1extracLcLL1JetParticle);
      instance.SetNewArray(&newArray_l1extracLcLL1JetParticle);
      instance.SetDelete(&delete_l1extracLcLL1JetParticle);
      instance.SetDeleteArray(&deleteArray_l1extracLcLL1JetParticle);
      instance.SetDestructor(&destruct_l1extracLcLL1JetParticle);
      return &instance;
   }
   TGenericClassInfo *GenerateInitInstance(const ::l1extra::L1JetParticle*)
   {
      return GenerateInitInstanceLocal((::l1extra::L1JetParticle*)0);
   }
   // Static variable to force the class initialization
   static ::ROOT::TGenericClassInfo *_R__UNIQUE_(Init) = GenerateInitInstanceLocal((const ::l1extra::L1JetParticle*)0x0); R__UseDummy(_R__UNIQUE_(Init));

   // Dictionary for non-ClassDef classes
   static TClass *l1extracLcLL1JetParticle_Dictionary() {
      TClass* theClass =::ROOT::GenerateInitInstanceLocal((const ::l1extra::L1JetParticle*)0x0)->GetClass();
      l1extracLcLL1JetParticle_TClassManip(theClass);
   return theClass;
   }

   static void l1extracLcLL1JetParticle_TClassManip(TClass* ){
   }

} // end of namespace ROOT

namespace ROOT {
   static TClass *l1extracLcLL1MuonParticle_Dictionary();
   static void l1extracLcLL1MuonParticle_TClassManip(TClass*);
   static void *new_l1extracLcLL1MuonParticle(void *p = 0);
   static void *newArray_l1extracLcLL1MuonParticle(Long_t size, void *p);
   static void delete_l1extracLcLL1MuonParticle(void *p);
   static void deleteArray_l1extracLcLL1MuonParticle(void *p);
   static void destruct_l1extracLcLL1MuonParticle(void *p);

   // Function generating the singleton type initializer
   static TGenericClassInfo *GenerateInitInstanceLocal(const ::l1extra::L1MuonParticle*)
   {
      ::l1extra::L1MuonParticle *ptr = 0;
      static ::TVirtualIsAProxy* isa_proxy = new ::TIsAProxy(typeid(::l1extra::L1MuonParticle));
      static ::ROOT::TGenericClassInfo 
         instance("l1extra::L1MuonParticle", 12, "DataFormats/L1Trigger/interface/L1MuonParticle.h", 27,
                  typeid(::l1extra::L1MuonParticle), ::ROOT::Internal::DefineBehavior(ptr, ptr),
                  &l1extracLcLL1MuonParticle_Dictionary, isa_proxy, 8,
                  sizeof(::l1extra::L1MuonParticle) );
      instance.SetNew(&new_l1extracLcLL1MuonParticle);
      instance.SetNewArray(&newArray_l1extracLcLL1MuonParticle);
      instance.SetDelete(&delete_l1extracLcLL1MuonParticle);
      instance.SetDeleteArray(&deleteArray_l1extracLcLL1MuonParticle);
      instance.SetDestructor(&destruct_l1extracLcLL1MuonParticle);
      return &instance;
   }
   TGenericClassInfo *GenerateInitInstance(const ::l1extra::L1MuonParticle*)
   {
      return GenerateInitInstanceLocal((::l1extra::L1MuonParticle*)0);
   }
   // Static variable to force the class initialization
   static ::ROOT::TGenericClassInfo *_R__UNIQUE_(Init) = GenerateInitInstanceLocal((const ::l1extra::L1MuonParticle*)0x0); R__UseDummy(_R__UNIQUE_(Init));

   // Dictionary for non-ClassDef classes
   static TClass *l1extracLcLL1MuonParticle_Dictionary() {
      TClass* theClass =::ROOT::GenerateInitInstanceLocal((const ::l1extra::L1MuonParticle*)0x0)->GetClass();
      l1extracLcLL1MuonParticle_TClassManip(theClass);
   return theClass;
   }

   static void l1extracLcLL1MuonParticle_TClassManip(TClass* ){
   }

} // end of namespace ROOT

namespace ROOT {
   static TClass *l1extracLcLL1EtMissParticle_Dictionary();
   static void l1extracLcLL1EtMissParticle_TClassManip(TClass*);
   static void *new_l1extracLcLL1EtMissParticle(void *p = 0);
   static void *newArray_l1extracLcLL1EtMissParticle(Long_t size, void *p);
   static void delete_l1extracLcLL1EtMissParticle(void *p);
   static void deleteArray_l1extracLcLL1EtMissParticle(void *p);
   static void destruct_l1extracLcLL1EtMissParticle(void *p);

   // Function generating the singleton type initializer
   static TGenericClassInfo *GenerateInitInstanceLocal(const ::l1extra::L1EtMissParticle*)
   {
      ::l1extra::L1EtMissParticle *ptr = 0;
      static ::TVirtualIsAProxy* isa_proxy = new ::TIsAProxy(typeid(::l1extra::L1EtMissParticle));
      static ::ROOT::TGenericClassInfo 
         instance("l1extra::L1EtMissParticle", 13, "DataFormats/L1Trigger/interface/L1EtMissParticle.h", 27,
                  typeid(::l1extra::L1EtMissParticle), ::ROOT::Internal::DefineBehavior(ptr, ptr),
                  &l1extracLcLL1EtMissParticle_Dictionary, isa_proxy, 8,
                  sizeof(::l1extra::L1EtMissParticle) );
      instance.SetNew(&new_l1extracLcLL1EtMissParticle);
      instance.SetNewArray(&newArray_l1extracLcLL1EtMissParticle);
      instance.SetDelete(&delete_l1extracLcLL1EtMissParticle);
      instance.SetDeleteArray(&deleteArray_l1extracLcLL1EtMissParticle);
      instance.SetDestructor(&destruct_l1extracLcLL1EtMissParticle);
      return &instance;
   }
   TGenericClassInfo *GenerateInitInstance(const ::l1extra::L1EtMissParticle*)
   {
      return GenerateInitInstanceLocal((::l1extra::L1EtMissParticle*)0);
   }
   // Static variable to force the class initialization
   static ::ROOT::TGenericClassInfo *_R__UNIQUE_(Init) = GenerateInitInstanceLocal((const ::l1extra::L1EtMissParticle*)0x0); R__UseDummy(_R__UNIQUE_(Init));

   // Dictionary for non-ClassDef classes
   static TClass *l1extracLcLL1EtMissParticle_Dictionary() {
      TClass* theClass =::ROOT::GenerateInitInstanceLocal((const ::l1extra::L1EtMissParticle*)0x0)->GetClass();
      l1extracLcLL1EtMissParticle_TClassManip(theClass);
   return theClass;
   }

   static void l1extracLcLL1EtMissParticle_TClassManip(TClass* ){
   }

} // end of namespace ROOT

namespace ROOT {
   static TClass *l1extracLcLL1ParticleMap_Dictionary();
   static void l1extracLcLL1ParticleMap_TClassManip(TClass*);
   static void *new_l1extracLcLL1ParticleMap(void *p = 0);
   static void *newArray_l1extracLcLL1ParticleMap(Long_t size, void *p);
   static void delete_l1extracLcLL1ParticleMap(void *p);
   static void deleteArray_l1extracLcLL1ParticleMap(void *p);
   static void destruct_l1extracLcLL1ParticleMap(void *p);

   // Function generating the singleton type initializer
   static TGenericClassInfo *GenerateInitInstanceLocal(const ::l1extra::L1ParticleMap*)
   {
      ::l1extra::L1ParticleMap *ptr = 0;
      static ::TVirtualIsAProxy* isa_proxy = new ::TIsAProxy(typeid(::l1extra::L1ParticleMap));
      static ::ROOT::TGenericClassInfo 
         instance("l1extra::L1ParticleMap", 11, "DataFormats/L1Trigger/interface/L1ParticleMap.h", 117,
                  typeid(::l1extra::L1ParticleMap), ::ROOT::Internal::DefineBehavior(ptr, ptr),
                  &l1extracLcLL1ParticleMap_Dictionary, isa_proxy, 8,
                  sizeof(::l1extra::L1ParticleMap) );
      instance.SetNew(&new_l1extracLcLL1ParticleMap);
      instance.SetNewArray(&newArray_l1extracLcLL1ParticleMap);
      instance.SetDelete(&delete_l1extracLcLL1ParticleMap);
      instance.SetDeleteArray(&deleteArray_l1extracLcLL1ParticleMap);
      instance.SetDestructor(&destruct_l1extracLcLL1ParticleMap);
      return &instance;
   }
   TGenericClassInfo *GenerateInitInstance(const ::l1extra::L1ParticleMap*)
   {
      return GenerateInitInstanceLocal((::l1extra::L1ParticleMap*)0);
   }
   // Static variable to force the class initialization
   static ::ROOT::TGenericClassInfo *_R__UNIQUE_(Init) = GenerateInitInstanceLocal((const ::l1extra::L1ParticleMap*)0x0); R__UseDummy(_R__UNIQUE_(Init));

   // Dictionary for non-ClassDef classes
   static TClass *l1extracLcLL1ParticleMap_Dictionary() {
      TClass* theClass =::ROOT::GenerateInitInstanceLocal((const ::l1extra::L1ParticleMap*)0x0)->GetClass();
      l1extracLcLL1ParticleMap_TClassManip(theClass);
   return theClass;
   }

   static void l1extracLcLL1ParticleMap_TClassManip(TClass* ){
   }

} // end of namespace ROOT

namespace ROOT {
   static TClass *l1extracLcLL1HFRings_Dictionary();
   static void l1extracLcLL1HFRings_TClassManip(TClass*);
   static void *new_l1extracLcLL1HFRings(void *p = 0);
   static void *newArray_l1extracLcLL1HFRings(Long_t size, void *p);
   static void delete_l1extracLcLL1HFRings(void *p);
   static void deleteArray_l1extracLcLL1HFRings(void *p);
   static void destruct_l1extracLcLL1HFRings(void *p);

   // Function generating the singleton type initializer
   static TGenericClassInfo *GenerateInitInstanceLocal(const ::l1extra::L1HFRings*)
   {
      ::l1extra::L1HFRings *ptr = 0;
      static ::TVirtualIsAProxy* isa_proxy = new ::TIsAProxy(typeid(::l1extra::L1HFRings));
      static ::ROOT::TGenericClassInfo 
         instance("l1extra::L1HFRings", 10, "DataFormats/L1Trigger/interface/L1HFRings.h", 31,
                  typeid(::l1extra::L1HFRings), ::ROOT::Internal::DefineBehavior(ptr, ptr),
                  &l1extracLcLL1HFRings_Dictionary, isa_proxy, 8,
                  sizeof(::l1extra::L1HFRings) );
      instance.SetNew(&new_l1extracLcLL1HFRings);
      instance.SetNewArray(&newArray_l1extracLcLL1HFRings);
      instance.SetDelete(&delete_l1extracLcLL1HFRings);
      instance.SetDeleteArray(&deleteArray_l1extracLcLL1HFRings);
      instance.SetDestructor(&destruct_l1extracLcLL1HFRings);
      return &instance;
   }
   TGenericClassInfo *GenerateInitInstance(const ::l1extra::L1HFRings*)
   {
      return GenerateInitInstanceLocal((::l1extra::L1HFRings*)0);
   }
   // Static variable to force the class initialization
   static ::ROOT::TGenericClassInfo *_R__UNIQUE_(Init) = GenerateInitInstanceLocal((const ::l1extra::L1HFRings*)0x0); R__UseDummy(_R__UNIQUE_(Init));

   // Dictionary for non-ClassDef classes
   static TClass *l1extracLcLL1HFRings_Dictionary() {
      TClass* theClass =::ROOT::GenerateInitInstanceLocal((const ::l1extra::L1HFRings*)0x0)->GetClass();
      l1extracLcLL1HFRings_TClassManip(theClass);
   return theClass;
   }

   static void l1extracLcLL1HFRings_TClassManip(TClass* ){
   }

} // end of namespace ROOT

namespace ROOT {
   static TClass *edmcLcLWrapperlEvectorlEl1extracLcLL1EmParticlegRsPgR_Dictionary();
   static void edmcLcLWrapperlEvectorlEl1extracLcLL1EmParticlegRsPgR_TClassManip(TClass*);
   static void *new_edmcLcLWrapperlEvectorlEl1extracLcLL1EmParticlegRsPgR(void *p = 0);
   static void *newArray_edmcLcLWrapperlEvectorlEl1extracLcLL1EmParticlegRsPgR(Long_t size, void *p);
   static void delete_edmcLcLWrapperlEvectorlEl1extracLcLL1EmParticlegRsPgR(void *p);
   static void deleteArray_edmcLcLWrapperlEvectorlEl1extracLcLL1EmParticlegRsPgR(void *p);
   static void destruct_edmcLcLWrapperlEvectorlEl1extracLcLL1EmParticlegRsPgR(void *p);

   // Function generating the singleton type initializer
   static TGenericClassInfo *GenerateInitInstanceLocal(const ::edm::Wrapper<vector<l1extra::L1EmParticle> >*)
   {
      ::edm::Wrapper<vector<l1extra::L1EmParticle> > *ptr = 0;
      static ::TVirtualIsAProxy* isa_proxy = new ::TIsAProxy(typeid(::edm::Wrapper<vector<l1extra::L1EmParticle> >));
      static ::ROOT::TGenericClassInfo 
         instance("edm::Wrapper<vector<l1extra::L1EmParticle> >", ::edm::Wrapper<vector<l1extra::L1EmParticle> >::Class_Version(), "DataFormats/Common/interface/Wrapper.h", 25,
                  typeid(::edm::Wrapper<vector<l1extra::L1EmParticle> >), ::ROOT::Internal::DefineBehavior(ptr, ptr),
                  &edmcLcLWrapperlEvectorlEl1extracLcLL1EmParticlegRsPgR_Dictionary, isa_proxy, 0,
                  sizeof(::edm::Wrapper<vector<l1extra::L1EmParticle> >) );
      instance.SetNew(&new_edmcLcLWrapperlEvectorlEl1extracLcLL1EmParticlegRsPgR);
      instance.SetNewArray(&newArray_edmcLcLWrapperlEvectorlEl1extracLcLL1EmParticlegRsPgR);
      instance.SetDelete(&delete_edmcLcLWrapperlEvectorlEl1extracLcLL1EmParticlegRsPgR);
      instance.SetDeleteArray(&deleteArray_edmcLcLWrapperlEvectorlEl1extracLcLL1EmParticlegRsPgR);
      instance.SetDestructor(&destruct_edmcLcLWrapperlEvectorlEl1extracLcLL1EmParticlegRsPgR);

      ::ROOT::AddClassAlternate("edm::Wrapper<vector<l1extra::L1EmParticle> >","edm::Wrapper<std::vector<l1extra::L1EmParticle> >");
      return &instance;
   }
   TGenericClassInfo *GenerateInitInstance(const ::edm::Wrapper<vector<l1extra::L1EmParticle> >*)
   {
      return GenerateInitInstanceLocal((::edm::Wrapper<vector<l1extra::L1EmParticle> >*)0);
   }
   // Static variable to force the class initialization
   static ::ROOT::TGenericClassInfo *_R__UNIQUE_(Init) = GenerateInitInstanceLocal((const ::edm::Wrapper<vector<l1extra::L1EmParticle> >*)0x0); R__UseDummy(_R__UNIQUE_(Init));

   // Dictionary for non-ClassDef classes
   static TClass *edmcLcLWrapperlEvectorlEl1extracLcLL1EmParticlegRsPgR_Dictionary() {
      TClass* theClass =::ROOT::GenerateInitInstanceLocal((const ::edm::Wrapper<vector<l1extra::L1EmParticle> >*)0x0)->GetClass();
      edmcLcLWrapperlEvectorlEl1extracLcLL1EmParticlegRsPgR_TClassManip(theClass);
   return theClass;
   }

   static void edmcLcLWrapperlEvectorlEl1extracLcLL1EmParticlegRsPgR_TClassManip(TClass* ){
   }

} // end of namespace ROOT

namespace ROOT {
   static TClass *edmcLcLWrapperlEvectorlEl1extracLcLL1JetParticlegRsPgR_Dictionary();
   static void edmcLcLWrapperlEvectorlEl1extracLcLL1JetParticlegRsPgR_TClassManip(TClass*);
   static void *new_edmcLcLWrapperlEvectorlEl1extracLcLL1JetParticlegRsPgR(void *p = 0);
   static void *newArray_edmcLcLWrapperlEvectorlEl1extracLcLL1JetParticlegRsPgR(Long_t size, void *p);
   static void delete_edmcLcLWrapperlEvectorlEl1extracLcLL1JetParticlegRsPgR(void *p);
   static void deleteArray_edmcLcLWrapperlEvectorlEl1extracLcLL1JetParticlegRsPgR(void *p);
   static void destruct_edmcLcLWrapperlEvectorlEl1extracLcLL1JetParticlegRsPgR(void *p);

   // Function generating the singleton type initializer
   static TGenericClassInfo *GenerateInitInstanceLocal(const ::edm::Wrapper<vector<l1extra::L1JetParticle> >*)
   {
      ::edm::Wrapper<vector<l1extra::L1JetParticle> > *ptr = 0;
      static ::TVirtualIsAProxy* isa_proxy = new ::TIsAProxy(typeid(::edm::Wrapper<vector<l1extra::L1JetParticle> >));
      static ::ROOT::TGenericClassInfo 
         instance("edm::Wrapper<vector<l1extra::L1JetParticle> >", ::edm::Wrapper<vector<l1extra::L1JetParticle> >::Class_Version(), "DataFormats/Common/interface/Wrapper.h", 25,
                  typeid(::edm::Wrapper<vector<l1extra::L1JetParticle> >), ::ROOT::Internal::DefineBehavior(ptr, ptr),
                  &edmcLcLWrapperlEvectorlEl1extracLcLL1JetParticlegRsPgR_Dictionary, isa_proxy, 0,
                  sizeof(::edm::Wrapper<vector<l1extra::L1JetParticle> >) );
      instance.SetNew(&new_edmcLcLWrapperlEvectorlEl1extracLcLL1JetParticlegRsPgR);
      instance.SetNewArray(&newArray_edmcLcLWrapperlEvectorlEl1extracLcLL1JetParticlegRsPgR);
      instance.SetDelete(&delete_edmcLcLWrapperlEvectorlEl1extracLcLL1JetParticlegRsPgR);
      instance.SetDeleteArray(&deleteArray_edmcLcLWrapperlEvectorlEl1extracLcLL1JetParticlegRsPgR);
      instance.SetDestructor(&destruct_edmcLcLWrapperlEvectorlEl1extracLcLL1JetParticlegRsPgR);

      ::ROOT::AddClassAlternate("edm::Wrapper<vector<l1extra::L1JetParticle> >","edm::Wrapper<std::vector<l1extra::L1JetParticle> >");
      return &instance;
   }
   TGenericClassInfo *GenerateInitInstance(const ::edm::Wrapper<vector<l1extra::L1JetParticle> >*)
   {
      return GenerateInitInstanceLocal((::edm::Wrapper<vector<l1extra::L1JetParticle> >*)0);
   }
   // Static variable to force the class initialization
   static ::ROOT::TGenericClassInfo *_R__UNIQUE_(Init) = GenerateInitInstanceLocal((const ::edm::Wrapper<vector<l1extra::L1JetParticle> >*)0x0); R__UseDummy(_R__UNIQUE_(Init));

   // Dictionary for non-ClassDef classes
   static TClass *edmcLcLWrapperlEvectorlEl1extracLcLL1JetParticlegRsPgR_Dictionary() {
      TClass* theClass =::ROOT::GenerateInitInstanceLocal((const ::edm::Wrapper<vector<l1extra::L1JetParticle> >*)0x0)->GetClass();
      edmcLcLWrapperlEvectorlEl1extracLcLL1JetParticlegRsPgR_TClassManip(theClass);
   return theClass;
   }

   static void edmcLcLWrapperlEvectorlEl1extracLcLL1JetParticlegRsPgR_TClassManip(TClass* ){
   }

} // end of namespace ROOT

namespace ROOT {
   static TClass *edmcLcLWrapperlEvectorlEl1extracLcLL1MuonParticlegRsPgR_Dictionary();
   static void edmcLcLWrapperlEvectorlEl1extracLcLL1MuonParticlegRsPgR_TClassManip(TClass*);
   static void *new_edmcLcLWrapperlEvectorlEl1extracLcLL1MuonParticlegRsPgR(void *p = 0);
   static void *newArray_edmcLcLWrapperlEvectorlEl1extracLcLL1MuonParticlegRsPgR(Long_t size, void *p);
   static void delete_edmcLcLWrapperlEvectorlEl1extracLcLL1MuonParticlegRsPgR(void *p);
   static void deleteArray_edmcLcLWrapperlEvectorlEl1extracLcLL1MuonParticlegRsPgR(void *p);
   static void destruct_edmcLcLWrapperlEvectorlEl1extracLcLL1MuonParticlegRsPgR(void *p);

   // Function generating the singleton type initializer
   static TGenericClassInfo *GenerateInitInstanceLocal(const ::edm::Wrapper<vector<l1extra::L1MuonParticle> >*)
   {
      ::edm::Wrapper<vector<l1extra::L1MuonParticle> > *ptr = 0;
      static ::TVirtualIsAProxy* isa_proxy = new ::TIsAProxy(typeid(::edm::Wrapper<vector<l1extra::L1MuonParticle> >));
      static ::ROOT::TGenericClassInfo 
         instance("edm::Wrapper<vector<l1extra::L1MuonParticle> >", ::edm::Wrapper<vector<l1extra::L1MuonParticle> >::Class_Version(), "DataFormats/Common/interface/Wrapper.h", 25,
                  typeid(::edm::Wrapper<vector<l1extra::L1MuonParticle> >), ::ROOT::Internal::DefineBehavior(ptr, ptr),
                  &edmcLcLWrapperlEvectorlEl1extracLcLL1MuonParticlegRsPgR_Dictionary, isa_proxy, 0,
                  sizeof(::edm::Wrapper<vector<l1extra::L1MuonParticle> >) );
      instance.SetNew(&new_edmcLcLWrapperlEvectorlEl1extracLcLL1MuonParticlegRsPgR);
      instance.SetNewArray(&newArray_edmcLcLWrapperlEvectorlEl1extracLcLL1MuonParticlegRsPgR);
      instance.SetDelete(&delete_edmcLcLWrapperlEvectorlEl1extracLcLL1MuonParticlegRsPgR);
      instance.SetDeleteArray(&deleteArray_edmcLcLWrapperlEvectorlEl1extracLcLL1MuonParticlegRsPgR);
      instance.SetDestructor(&destruct_edmcLcLWrapperlEvectorlEl1extracLcLL1MuonParticlegRsPgR);

      ::ROOT::AddClassAlternate("edm::Wrapper<vector<l1extra::L1MuonParticle> >","edm::Wrapper<std::vector<l1extra::L1MuonParticle> >");
      return &instance;
   }
   TGenericClassInfo *GenerateInitInstance(const ::edm::Wrapper<vector<l1extra::L1MuonParticle> >*)
   {
      return GenerateInitInstanceLocal((::edm::Wrapper<vector<l1extra::L1MuonParticle> >*)0);
   }
   // Static variable to force the class initialization
   static ::ROOT::TGenericClassInfo *_R__UNIQUE_(Init) = GenerateInitInstanceLocal((const ::edm::Wrapper<vector<l1extra::L1MuonParticle> >*)0x0); R__UseDummy(_R__UNIQUE_(Init));

   // Dictionary for non-ClassDef classes
   static TClass *edmcLcLWrapperlEvectorlEl1extracLcLL1MuonParticlegRsPgR_Dictionary() {
      TClass* theClass =::ROOT::GenerateInitInstanceLocal((const ::edm::Wrapper<vector<l1extra::L1MuonParticle> >*)0x0)->GetClass();
      edmcLcLWrapperlEvectorlEl1extracLcLL1MuonParticlegRsPgR_TClassManip(theClass);
   return theClass;
   }

   static void edmcLcLWrapperlEvectorlEl1extracLcLL1MuonParticlegRsPgR_TClassManip(TClass* ){
   }

} // end of namespace ROOT

namespace ROOT {
   static TClass *edmcLcLWrapperlEl1extracLcLL1EtMissParticlegR_Dictionary();
   static void edmcLcLWrapperlEl1extracLcLL1EtMissParticlegR_TClassManip(TClass*);
   static void *new_edmcLcLWrapperlEl1extracLcLL1EtMissParticlegR(void *p = 0);
   static void *newArray_edmcLcLWrapperlEl1extracLcLL1EtMissParticlegR(Long_t size, void *p);
   static void delete_edmcLcLWrapperlEl1extracLcLL1EtMissParticlegR(void *p);
   static void deleteArray_edmcLcLWrapperlEl1extracLcLL1EtMissParticlegR(void *p);
   static void destruct_edmcLcLWrapperlEl1extracLcLL1EtMissParticlegR(void *p);

   // Function generating the singleton type initializer
   static TGenericClassInfo *GenerateInitInstanceLocal(const ::edm::Wrapper<l1extra::L1EtMissParticle>*)
   {
      ::edm::Wrapper<l1extra::L1EtMissParticle> *ptr = 0;
      static ::TVirtualIsAProxy* isa_proxy = new ::TIsAProxy(typeid(::edm::Wrapper<l1extra::L1EtMissParticle>));
      static ::ROOT::TGenericClassInfo 
         instance("edm::Wrapper<l1extra::L1EtMissParticle>", ::edm::Wrapper<l1extra::L1EtMissParticle>::Class_Version(), "DataFormats/Common/interface/Wrapper.h", 25,
                  typeid(::edm::Wrapper<l1extra::L1EtMissParticle>), ::ROOT::Internal::DefineBehavior(ptr, ptr),
                  &edmcLcLWrapperlEl1extracLcLL1EtMissParticlegR_Dictionary, isa_proxy, 0,
                  sizeof(::edm::Wrapper<l1extra::L1EtMissParticle>) );
      instance.SetNew(&new_edmcLcLWrapperlEl1extracLcLL1EtMissParticlegR);
      instance.SetNewArray(&newArray_edmcLcLWrapperlEl1extracLcLL1EtMissParticlegR);
      instance.SetDelete(&delete_edmcLcLWrapperlEl1extracLcLL1EtMissParticlegR);
      instance.SetDeleteArray(&deleteArray_edmcLcLWrapperlEl1extracLcLL1EtMissParticlegR);
      instance.SetDestructor(&destruct_edmcLcLWrapperlEl1extracLcLL1EtMissParticlegR);
      return &instance;
   }
   TGenericClassInfo *GenerateInitInstance(const ::edm::Wrapper<l1extra::L1EtMissParticle>*)
   {
      return GenerateInitInstanceLocal((::edm::Wrapper<l1extra::L1EtMissParticle>*)0);
   }
   // Static variable to force the class initialization
   static ::ROOT::TGenericClassInfo *_R__UNIQUE_(Init) = GenerateInitInstanceLocal((const ::edm::Wrapper<l1extra::L1EtMissParticle>*)0x0); R__UseDummy(_R__UNIQUE_(Init));

   // Dictionary for non-ClassDef classes
   static TClass *edmcLcLWrapperlEl1extracLcLL1EtMissParticlegR_Dictionary() {
      TClass* theClass =::ROOT::GenerateInitInstanceLocal((const ::edm::Wrapper<l1extra::L1EtMissParticle>*)0x0)->GetClass();
      edmcLcLWrapperlEl1extracLcLL1EtMissParticlegR_TClassManip(theClass);
   return theClass;
   }

   static void edmcLcLWrapperlEl1extracLcLL1EtMissParticlegR_TClassManip(TClass* ){
   }

} // end of namespace ROOT

namespace ROOT {
   static TClass *edmcLcLWrapperlEvectorlEl1extracLcLL1EtMissParticlegRsPgR_Dictionary();
   static void edmcLcLWrapperlEvectorlEl1extracLcLL1EtMissParticlegRsPgR_TClassManip(TClass*);
   static void *new_edmcLcLWrapperlEvectorlEl1extracLcLL1EtMissParticlegRsPgR(void *p = 0);
   static void *newArray_edmcLcLWrapperlEvectorlEl1extracLcLL1EtMissParticlegRsPgR(Long_t size, void *p);
   static void delete_edmcLcLWrapperlEvectorlEl1extracLcLL1EtMissParticlegRsPgR(void *p);
   static void deleteArray_edmcLcLWrapperlEvectorlEl1extracLcLL1EtMissParticlegRsPgR(void *p);
   static void destruct_edmcLcLWrapperlEvectorlEl1extracLcLL1EtMissParticlegRsPgR(void *p);

   // Function generating the singleton type initializer
   static TGenericClassInfo *GenerateInitInstanceLocal(const ::edm::Wrapper<vector<l1extra::L1EtMissParticle> >*)
   {
      ::edm::Wrapper<vector<l1extra::L1EtMissParticle> > *ptr = 0;
      static ::TVirtualIsAProxy* isa_proxy = new ::TIsAProxy(typeid(::edm::Wrapper<vector<l1extra::L1EtMissParticle> >));
      static ::ROOT::TGenericClassInfo 
         instance("edm::Wrapper<vector<l1extra::L1EtMissParticle> >", ::edm::Wrapper<vector<l1extra::L1EtMissParticle> >::Class_Version(), "DataFormats/Common/interface/Wrapper.h", 25,
                  typeid(::edm::Wrapper<vector<l1extra::L1EtMissParticle> >), ::ROOT::Internal::DefineBehavior(ptr, ptr),
                  &edmcLcLWrapperlEvectorlEl1extracLcLL1EtMissParticlegRsPgR_Dictionary, isa_proxy, 0,
                  sizeof(::edm::Wrapper<vector<l1extra::L1EtMissParticle> >) );
      instance.SetNew(&new_edmcLcLWrapperlEvectorlEl1extracLcLL1EtMissParticlegRsPgR);
      instance.SetNewArray(&newArray_edmcLcLWrapperlEvectorlEl1extracLcLL1EtMissParticlegRsPgR);
      instance.SetDelete(&delete_edmcLcLWrapperlEvectorlEl1extracLcLL1EtMissParticlegRsPgR);
      instance.SetDeleteArray(&deleteArray_edmcLcLWrapperlEvectorlEl1extracLcLL1EtMissParticlegRsPgR);
      instance.SetDestructor(&destruct_edmcLcLWrapperlEvectorlEl1extracLcLL1EtMissParticlegRsPgR);

      ::ROOT::AddClassAlternate("edm::Wrapper<vector<l1extra::L1EtMissParticle> >","edm::Wrapper<std::vector<l1extra::L1EtMissParticle> >");
      return &instance;
   }
   TGenericClassInfo *GenerateInitInstance(const ::edm::Wrapper<vector<l1extra::L1EtMissParticle> >*)
   {
      return GenerateInitInstanceLocal((::edm::Wrapper<vector<l1extra::L1EtMissParticle> >*)0);
   }
   // Static variable to force the class initialization
   static ::ROOT::TGenericClassInfo *_R__UNIQUE_(Init) = GenerateInitInstanceLocal((const ::edm::Wrapper<vector<l1extra::L1EtMissParticle> >*)0x0); R__UseDummy(_R__UNIQUE_(Init));

   // Dictionary for non-ClassDef classes
   static TClass *edmcLcLWrapperlEvectorlEl1extracLcLL1EtMissParticlegRsPgR_Dictionary() {
      TClass* theClass =::ROOT::GenerateInitInstanceLocal((const ::edm::Wrapper<vector<l1extra::L1EtMissParticle> >*)0x0)->GetClass();
      edmcLcLWrapperlEvectorlEl1extracLcLL1EtMissParticlegRsPgR_TClassManip(theClass);
   return theClass;
   }

   static void edmcLcLWrapperlEvectorlEl1extracLcLL1EtMissParticlegRsPgR_TClassManip(TClass* ){
   }

} // end of namespace ROOT

namespace ROOT {
   static TClass *edmcLcLWrapperlEvectorlEl1extracLcLL1ParticleMapgRsPgR_Dictionary();
   static void edmcLcLWrapperlEvectorlEl1extracLcLL1ParticleMapgRsPgR_TClassManip(TClass*);
   static void *new_edmcLcLWrapperlEvectorlEl1extracLcLL1ParticleMapgRsPgR(void *p = 0);
   static void *newArray_edmcLcLWrapperlEvectorlEl1extracLcLL1ParticleMapgRsPgR(Long_t size, void *p);
   static void delete_edmcLcLWrapperlEvectorlEl1extracLcLL1ParticleMapgRsPgR(void *p);
   static void deleteArray_edmcLcLWrapperlEvectorlEl1extracLcLL1ParticleMapgRsPgR(void *p);
   static void destruct_edmcLcLWrapperlEvectorlEl1extracLcLL1ParticleMapgRsPgR(void *p);

   // Function generating the singleton type initializer
   static TGenericClassInfo *GenerateInitInstanceLocal(const ::edm::Wrapper<vector<l1extra::L1ParticleMap> >*)
   {
      ::edm::Wrapper<vector<l1extra::L1ParticleMap> > *ptr = 0;
      static ::TVirtualIsAProxy* isa_proxy = new ::TIsAProxy(typeid(::edm::Wrapper<vector<l1extra::L1ParticleMap> >));
      static ::ROOT::TGenericClassInfo 
         instance("edm::Wrapper<vector<l1extra::L1ParticleMap> >", ::edm::Wrapper<vector<l1extra::L1ParticleMap> >::Class_Version(), "DataFormats/Common/interface/Wrapper.h", 25,
                  typeid(::edm::Wrapper<vector<l1extra::L1ParticleMap> >), ::ROOT::Internal::DefineBehavior(ptr, ptr),
                  &edmcLcLWrapperlEvectorlEl1extracLcLL1ParticleMapgRsPgR_Dictionary, isa_proxy, 0,
                  sizeof(::edm::Wrapper<vector<l1extra::L1ParticleMap> >) );
      instance.SetNew(&new_edmcLcLWrapperlEvectorlEl1extracLcLL1ParticleMapgRsPgR);
      instance.SetNewArray(&newArray_edmcLcLWrapperlEvectorlEl1extracLcLL1ParticleMapgRsPgR);
      instance.SetDelete(&delete_edmcLcLWrapperlEvectorlEl1extracLcLL1ParticleMapgRsPgR);
      instance.SetDeleteArray(&deleteArray_edmcLcLWrapperlEvectorlEl1extracLcLL1ParticleMapgRsPgR);
      instance.SetDestructor(&destruct_edmcLcLWrapperlEvectorlEl1extracLcLL1ParticleMapgRsPgR);

      ::ROOT::AddClassAlternate("edm::Wrapper<vector<l1extra::L1ParticleMap> >","edm::Wrapper<std::vector<l1extra::L1ParticleMap> >");
      return &instance;
   }
   TGenericClassInfo *GenerateInitInstance(const ::edm::Wrapper<vector<l1extra::L1ParticleMap> >*)
   {
      return GenerateInitInstanceLocal((::edm::Wrapper<vector<l1extra::L1ParticleMap> >*)0);
   }
   // Static variable to force the class initialization
   static ::ROOT::TGenericClassInfo *_R__UNIQUE_(Init) = GenerateInitInstanceLocal((const ::edm::Wrapper<vector<l1extra::L1ParticleMap> >*)0x0); R__UseDummy(_R__UNIQUE_(Init));

   // Dictionary for non-ClassDef classes
   static TClass *edmcLcLWrapperlEvectorlEl1extracLcLL1ParticleMapgRsPgR_Dictionary() {
      TClass* theClass =::ROOT::GenerateInitInstanceLocal((const ::edm::Wrapper<vector<l1extra::L1ParticleMap> >*)0x0)->GetClass();
      edmcLcLWrapperlEvectorlEl1extracLcLL1ParticleMapgRsPgR_TClassManip(theClass);
   return theClass;
   }

   static void edmcLcLWrapperlEvectorlEl1extracLcLL1ParticleMapgRsPgR_TClassManip(TClass* ){
   }

} // end of namespace ROOT

namespace ROOT {
   static TClass *edmcLcLWrapperlEvectorlEl1extracLcLL1HFRingsgRsPgR_Dictionary();
   static void edmcLcLWrapperlEvectorlEl1extracLcLL1HFRingsgRsPgR_TClassManip(TClass*);
   static void *new_edmcLcLWrapperlEvectorlEl1extracLcLL1HFRingsgRsPgR(void *p = 0);
   static void *newArray_edmcLcLWrapperlEvectorlEl1extracLcLL1HFRingsgRsPgR(Long_t size, void *p);
   static void delete_edmcLcLWrapperlEvectorlEl1extracLcLL1HFRingsgRsPgR(void *p);
   static void deleteArray_edmcLcLWrapperlEvectorlEl1extracLcLL1HFRingsgRsPgR(void *p);
   static void destruct_edmcLcLWrapperlEvectorlEl1extracLcLL1HFRingsgRsPgR(void *p);

   // Function generating the singleton type initializer
   static TGenericClassInfo *GenerateInitInstanceLocal(const ::edm::Wrapper<vector<l1extra::L1HFRings> >*)
   {
      ::edm::Wrapper<vector<l1extra::L1HFRings> > *ptr = 0;
      static ::TVirtualIsAProxy* isa_proxy = new ::TIsAProxy(typeid(::edm::Wrapper<vector<l1extra::L1HFRings> >));
      static ::ROOT::TGenericClassInfo 
         instance("edm::Wrapper<vector<l1extra::L1HFRings> >", ::edm::Wrapper<vector<l1extra::L1HFRings> >::Class_Version(), "DataFormats/Common/interface/Wrapper.h", 25,
                  typeid(::edm::Wrapper<vector<l1extra::L1HFRings> >), ::ROOT::Internal::DefineBehavior(ptr, ptr),
                  &edmcLcLWrapperlEvectorlEl1extracLcLL1HFRingsgRsPgR_Dictionary, isa_proxy, 0,
                  sizeof(::edm::Wrapper<vector<l1extra::L1HFRings> >) );
      instance.SetNew(&new_edmcLcLWrapperlEvectorlEl1extracLcLL1HFRingsgRsPgR);
      instance.SetNewArray(&newArray_edmcLcLWrapperlEvectorlEl1extracLcLL1HFRingsgRsPgR);
      instance.SetDelete(&delete_edmcLcLWrapperlEvectorlEl1extracLcLL1HFRingsgRsPgR);
      instance.SetDeleteArray(&deleteArray_edmcLcLWrapperlEvectorlEl1extracLcLL1HFRingsgRsPgR);
      instance.SetDestructor(&destruct_edmcLcLWrapperlEvectorlEl1extracLcLL1HFRingsgRsPgR);

      ::ROOT::AddClassAlternate("edm::Wrapper<vector<l1extra::L1HFRings> >","edm::Wrapper<std::vector<l1extra::L1HFRings> >");
      return &instance;
   }
   TGenericClassInfo *GenerateInitInstance(const ::edm::Wrapper<vector<l1extra::L1HFRings> >*)
   {
      return GenerateInitInstanceLocal((::edm::Wrapper<vector<l1extra::L1HFRings> >*)0);
   }
   // Static variable to force the class initialization
   static ::ROOT::TGenericClassInfo *_R__UNIQUE_(Init) = GenerateInitInstanceLocal((const ::edm::Wrapper<vector<l1extra::L1HFRings> >*)0x0); R__UseDummy(_R__UNIQUE_(Init));

   // Dictionary for non-ClassDef classes
   static TClass *edmcLcLWrapperlEvectorlEl1extracLcLL1HFRingsgRsPgR_Dictionary() {
      TClass* theClass =::ROOT::GenerateInitInstanceLocal((const ::edm::Wrapper<vector<l1extra::L1HFRings> >*)0x0)->GetClass();
      edmcLcLWrapperlEvectorlEl1extracLcLL1HFRingsgRsPgR_TClassManip(theClass);
   return theClass;
   }

   static void edmcLcLWrapperlEvectorlEl1extracLcLL1HFRingsgRsPgR_TClassManip(TClass* ){
   }

} // end of namespace ROOT

namespace ROOT {
   static TClass *edmcLcLReflEvectorlEl1extracLcLL1EmParticlegRcOl1extracLcLL1EmParticlecOedmcLcLrefhelpercLcLFindUsingAdvancelEvectorlEl1extracLcLL1EmParticlegRcOl1extracLcLL1EmParticlegRsPgR_Dictionary();
   static void edmcLcLReflEvectorlEl1extracLcLL1EmParticlegRcOl1extracLcLL1EmParticlecOedmcLcLrefhelpercLcLFindUsingAdvancelEvectorlEl1extracLcLL1EmParticlegRcOl1extracLcLL1EmParticlegRsPgR_TClassManip(TClass*);
   static void *new_edmcLcLReflEvectorlEl1extracLcLL1EmParticlegRcOl1extracLcLL1EmParticlecOedmcLcLrefhelpercLcLFindUsingAdvancelEvectorlEl1extracLcLL1EmParticlegRcOl1extracLcLL1EmParticlegRsPgR(void *p = 0);
   static void *newArray_edmcLcLReflEvectorlEl1extracLcLL1EmParticlegRcOl1extracLcLL1EmParticlecOedmcLcLrefhelpercLcLFindUsingAdvancelEvectorlEl1extracLcLL1EmParticlegRcOl1extracLcLL1EmParticlegRsPgR(Long_t size, void *p);
   static void delete_edmcLcLReflEvectorlEl1extracLcLL1EmParticlegRcOl1extracLcLL1EmParticlecOedmcLcLrefhelpercLcLFindUsingAdvancelEvectorlEl1extracLcLL1EmParticlegRcOl1extracLcLL1EmParticlegRsPgR(void *p);
   static void deleteArray_edmcLcLReflEvectorlEl1extracLcLL1EmParticlegRcOl1extracLcLL1EmParticlecOedmcLcLrefhelpercLcLFindUsingAdvancelEvectorlEl1extracLcLL1EmParticlegRcOl1extracLcLL1EmParticlegRsPgR(void *p);
   static void destruct_edmcLcLReflEvectorlEl1extracLcLL1EmParticlegRcOl1extracLcLL1EmParticlecOedmcLcLrefhelpercLcLFindUsingAdvancelEvectorlEl1extracLcLL1EmParticlegRcOl1extracLcLL1EmParticlegRsPgR(void *p);

   // Function generating the singleton type initializer
   static TGenericClassInfo *GenerateInitInstanceLocal(const ::edm::Ref<vector<l1extra::L1EmParticle>,l1extra::L1EmParticle,edm::refhelper::FindUsingAdvance<vector<l1extra::L1EmParticle>,l1extra::L1EmParticle> >*)
   {
      ::edm::Ref<vector<l1extra::L1EmParticle>,l1extra::L1EmParticle,edm::refhelper::FindUsingAdvance<vector<l1extra::L1EmParticle>,l1extra::L1EmParticle> > *ptr = 0;
      static ::TVirtualIsAProxy* isa_proxy = new ::TIsAProxy(typeid(::edm::Ref<vector<l1extra::L1EmParticle>,l1extra::L1EmParticle,edm::refhelper::FindUsingAdvance<vector<l1extra::L1EmParticle>,l1extra::L1EmParticle> >));
      static ::ROOT::TGenericClassInfo 
         instance("edm::Ref<vector<l1extra::L1EmParticle>,l1extra::L1EmParticle,edm::refhelper::FindUsingAdvance<vector<l1extra::L1EmParticle>,l1extra::L1EmParticle> >", ::edm::Ref<vector<l1extra::L1EmParticle>,l1extra::L1EmParticle,edm::refhelper::FindUsingAdvance<vector<l1extra::L1EmParticle>,l1extra::L1EmParticle> >::Class_Version(), "DataFormats/Common/interface/Ref.h", 305,
                  typeid(::edm::Ref<vector<l1extra::L1EmParticle>,l1extra::L1EmParticle,edm::refhelper::FindUsingAdvance<vector<l1extra::L1EmParticle>,l1extra::L1EmParticle> >), ::ROOT::Internal::DefineBehavior(ptr, ptr),
                  &edmcLcLReflEvectorlEl1extracLcLL1EmParticlegRcOl1extracLcLL1EmParticlecOedmcLcLrefhelpercLcLFindUsingAdvancelEvectorlEl1extracLcLL1EmParticlegRcOl1extracLcLL1EmParticlegRsPgR_Dictionary, isa_proxy, 0,
                  sizeof(::edm::Ref<vector<l1extra::L1EmParticle>,l1extra::L1EmParticle,edm::refhelper::FindUsingAdvance<vector<l1extra::L1EmParticle>,l1extra::L1EmParticle> >) );
      instance.SetNew(&new_edmcLcLReflEvectorlEl1extracLcLL1EmParticlegRcOl1extracLcLL1EmParticlecOedmcLcLrefhelpercLcLFindUsingAdvancelEvectorlEl1extracLcLL1EmParticlegRcOl1extracLcLL1EmParticlegRsPgR);
      instance.SetNewArray(&newArray_edmcLcLReflEvectorlEl1extracLcLL1EmParticlegRcOl1extracLcLL1EmParticlecOedmcLcLrefhelpercLcLFindUsingAdvancelEvectorlEl1extracLcLL1EmParticlegRcOl1extracLcLL1EmParticlegRsPgR);
      instance.SetDelete(&delete_edmcLcLReflEvectorlEl1extracLcLL1EmParticlegRcOl1extracLcLL1EmParticlecOedmcLcLrefhelpercLcLFindUsingAdvancelEvectorlEl1extracLcLL1EmParticlegRcOl1extracLcLL1EmParticlegRsPgR);
      instance.SetDeleteArray(&deleteArray_edmcLcLReflEvectorlEl1extracLcLL1EmParticlegRcOl1extracLcLL1EmParticlecOedmcLcLrefhelpercLcLFindUsingAdvancelEvectorlEl1extracLcLL1EmParticlegRcOl1extracLcLL1EmParticlegRsPgR);
      instance.SetDestructor(&destruct_edmcLcLReflEvectorlEl1extracLcLL1EmParticlegRcOl1extracLcLL1EmParticlecOedmcLcLrefhelpercLcLFindUsingAdvancelEvectorlEl1extracLcLL1EmParticlegRcOl1extracLcLL1EmParticlegRsPgR);

      ::ROOT::AddClassAlternate("edm::Ref<vector<l1extra::L1EmParticle>,l1extra::L1EmParticle,edm::refhelper::FindUsingAdvance<vector<l1extra::L1EmParticle>,l1extra::L1EmParticle> >","edm::Ref<std::vector<l1extra::L1EmParticle>,l1extra::L1EmParticle,edm::refhelper::FindUsingAdvance<std::vector<l1extra::L1EmParticle>,l1extra::L1EmParticle> >");
      return &instance;
   }
   TGenericClassInfo *GenerateInitInstance(const ::edm::Ref<vector<l1extra::L1EmParticle>,l1extra::L1EmParticle,edm::refhelper::FindUsingAdvance<vector<l1extra::L1EmParticle>,l1extra::L1EmParticle> >*)
   {
      return GenerateInitInstanceLocal((::edm::Ref<vector<l1extra::L1EmParticle>,l1extra::L1EmParticle,edm::refhelper::FindUsingAdvance<vector<l1extra::L1EmParticle>,l1extra::L1EmParticle> >*)0);
   }
   // Static variable to force the class initialization
   static ::ROOT::TGenericClassInfo *_R__UNIQUE_(Init) = GenerateInitInstanceLocal((const ::edm::Ref<vector<l1extra::L1EmParticle>,l1extra::L1EmParticle,edm::refhelper::FindUsingAdvance<vector<l1extra::L1EmParticle>,l1extra::L1EmParticle> >*)0x0); R__UseDummy(_R__UNIQUE_(Init));

   // Dictionary for non-ClassDef classes
   static TClass *edmcLcLReflEvectorlEl1extracLcLL1EmParticlegRcOl1extracLcLL1EmParticlecOedmcLcLrefhelpercLcLFindUsingAdvancelEvectorlEl1extracLcLL1EmParticlegRcOl1extracLcLL1EmParticlegRsPgR_Dictionary() {
      TClass* theClass =::ROOT::GenerateInitInstanceLocal((const ::edm::Ref<vector<l1extra::L1EmParticle>,l1extra::L1EmParticle,edm::refhelper::FindUsingAdvance<vector<l1extra::L1EmParticle>,l1extra::L1EmParticle> >*)0x0)->GetClass();
      edmcLcLReflEvectorlEl1extracLcLL1EmParticlegRcOl1extracLcLL1EmParticlecOedmcLcLrefhelpercLcLFindUsingAdvancelEvectorlEl1extracLcLL1EmParticlegRcOl1extracLcLL1EmParticlegRsPgR_TClassManip(theClass);
   return theClass;
   }

   static void edmcLcLReflEvectorlEl1extracLcLL1EmParticlegRcOl1extracLcLL1EmParticlecOedmcLcLrefhelpercLcLFindUsingAdvancelEvectorlEl1extracLcLL1EmParticlegRcOl1extracLcLL1EmParticlegRsPgR_TClassManip(TClass* ){
   }

} // end of namespace ROOT

namespace ROOT {
   static TClass *edmcLcLReflEvectorlEl1extracLcLL1JetParticlegRcOl1extracLcLL1JetParticlecOedmcLcLrefhelpercLcLFindUsingAdvancelEvectorlEl1extracLcLL1JetParticlegRcOl1extracLcLL1JetParticlegRsPgR_Dictionary();
   static void edmcLcLReflEvectorlEl1extracLcLL1JetParticlegRcOl1extracLcLL1JetParticlecOedmcLcLrefhelpercLcLFindUsingAdvancelEvectorlEl1extracLcLL1JetParticlegRcOl1extracLcLL1JetParticlegRsPgR_TClassManip(TClass*);
   static void *new_edmcLcLReflEvectorlEl1extracLcLL1JetParticlegRcOl1extracLcLL1JetParticlecOedmcLcLrefhelpercLcLFindUsingAdvancelEvectorlEl1extracLcLL1JetParticlegRcOl1extracLcLL1JetParticlegRsPgR(void *p = 0);
   static void *newArray_edmcLcLReflEvectorlEl1extracLcLL1JetParticlegRcOl1extracLcLL1JetParticlecOedmcLcLrefhelpercLcLFindUsingAdvancelEvectorlEl1extracLcLL1JetParticlegRcOl1extracLcLL1JetParticlegRsPgR(Long_t size, void *p);
   static void delete_edmcLcLReflEvectorlEl1extracLcLL1JetParticlegRcOl1extracLcLL1JetParticlecOedmcLcLrefhelpercLcLFindUsingAdvancelEvectorlEl1extracLcLL1JetParticlegRcOl1extracLcLL1JetParticlegRsPgR(void *p);
   static void deleteArray_edmcLcLReflEvectorlEl1extracLcLL1JetParticlegRcOl1extracLcLL1JetParticlecOedmcLcLrefhelpercLcLFindUsingAdvancelEvectorlEl1extracLcLL1JetParticlegRcOl1extracLcLL1JetParticlegRsPgR(void *p);
   static void destruct_edmcLcLReflEvectorlEl1extracLcLL1JetParticlegRcOl1extracLcLL1JetParticlecOedmcLcLrefhelpercLcLFindUsingAdvancelEvectorlEl1extracLcLL1JetParticlegRcOl1extracLcLL1JetParticlegRsPgR(void *p);

   // Function generating the singleton type initializer
   static TGenericClassInfo *GenerateInitInstanceLocal(const ::edm::Ref<vector<l1extra::L1JetParticle>,l1extra::L1JetParticle,edm::refhelper::FindUsingAdvance<vector<l1extra::L1JetParticle>,l1extra::L1JetParticle> >*)
   {
      ::edm::Ref<vector<l1extra::L1JetParticle>,l1extra::L1JetParticle,edm::refhelper::FindUsingAdvance<vector<l1extra::L1JetParticle>,l1extra::L1JetParticle> > *ptr = 0;
      static ::TVirtualIsAProxy* isa_proxy = new ::TIsAProxy(typeid(::edm::Ref<vector<l1extra::L1JetParticle>,l1extra::L1JetParticle,edm::refhelper::FindUsingAdvance<vector<l1extra::L1JetParticle>,l1extra::L1JetParticle> >));
      static ::ROOT::TGenericClassInfo 
         instance("edm::Ref<vector<l1extra::L1JetParticle>,l1extra::L1JetParticle,edm::refhelper::FindUsingAdvance<vector<l1extra::L1JetParticle>,l1extra::L1JetParticle> >", ::edm::Ref<vector<l1extra::L1JetParticle>,l1extra::L1JetParticle,edm::refhelper::FindUsingAdvance<vector<l1extra::L1JetParticle>,l1extra::L1JetParticle> >::Class_Version(), "DataFormats/Common/interface/Ref.h", 305,
                  typeid(::edm::Ref<vector<l1extra::L1JetParticle>,l1extra::L1JetParticle,edm::refhelper::FindUsingAdvance<vector<l1extra::L1JetParticle>,l1extra::L1JetParticle> >), ::ROOT::Internal::DefineBehavior(ptr, ptr),
                  &edmcLcLReflEvectorlEl1extracLcLL1JetParticlegRcOl1extracLcLL1JetParticlecOedmcLcLrefhelpercLcLFindUsingAdvancelEvectorlEl1extracLcLL1JetParticlegRcOl1extracLcLL1JetParticlegRsPgR_Dictionary, isa_proxy, 0,
                  sizeof(::edm::Ref<vector<l1extra::L1JetParticle>,l1extra::L1JetParticle,edm::refhelper::FindUsingAdvance<vector<l1extra::L1JetParticle>,l1extra::L1JetParticle> >) );
      instance.SetNew(&new_edmcLcLReflEvectorlEl1extracLcLL1JetParticlegRcOl1extracLcLL1JetParticlecOedmcLcLrefhelpercLcLFindUsingAdvancelEvectorlEl1extracLcLL1JetParticlegRcOl1extracLcLL1JetParticlegRsPgR);
      instance.SetNewArray(&newArray_edmcLcLReflEvectorlEl1extracLcLL1JetParticlegRcOl1extracLcLL1JetParticlecOedmcLcLrefhelpercLcLFindUsingAdvancelEvectorlEl1extracLcLL1JetParticlegRcOl1extracLcLL1JetParticlegRsPgR);
      instance.SetDelete(&delete_edmcLcLReflEvectorlEl1extracLcLL1JetParticlegRcOl1extracLcLL1JetParticlecOedmcLcLrefhelpercLcLFindUsingAdvancelEvectorlEl1extracLcLL1JetParticlegRcOl1extracLcLL1JetParticlegRsPgR);
      instance.SetDeleteArray(&deleteArray_edmcLcLReflEvectorlEl1extracLcLL1JetParticlegRcOl1extracLcLL1JetParticlecOedmcLcLrefhelpercLcLFindUsingAdvancelEvectorlEl1extracLcLL1JetParticlegRcOl1extracLcLL1JetParticlegRsPgR);
      instance.SetDestructor(&destruct_edmcLcLReflEvectorlEl1extracLcLL1JetParticlegRcOl1extracLcLL1JetParticlecOedmcLcLrefhelpercLcLFindUsingAdvancelEvectorlEl1extracLcLL1JetParticlegRcOl1extracLcLL1JetParticlegRsPgR);

      ::ROOT::AddClassAlternate("edm::Ref<vector<l1extra::L1JetParticle>,l1extra::L1JetParticle,edm::refhelper::FindUsingAdvance<vector<l1extra::L1JetParticle>,l1extra::L1JetParticle> >","edm::Ref<std::vector<l1extra::L1JetParticle>,l1extra::L1JetParticle,edm::refhelper::FindUsingAdvance<std::vector<l1extra::L1JetParticle>,l1extra::L1JetParticle> >");
      return &instance;
   }
   TGenericClassInfo *GenerateInitInstance(const ::edm::Ref<vector<l1extra::L1JetParticle>,l1extra::L1JetParticle,edm::refhelper::FindUsingAdvance<vector<l1extra::L1JetParticle>,l1extra::L1JetParticle> >*)
   {
      return GenerateInitInstanceLocal((::edm::Ref<vector<l1extra::L1JetParticle>,l1extra::L1JetParticle,edm::refhelper::FindUsingAdvance<vector<l1extra::L1JetParticle>,l1extra::L1JetParticle> >*)0);
   }
   // Static variable to force the class initialization
   static ::ROOT::TGenericClassInfo *_R__UNIQUE_(Init) = GenerateInitInstanceLocal((const ::edm::Ref<vector<l1extra::L1JetParticle>,l1extra::L1JetParticle,edm::refhelper::FindUsingAdvance<vector<l1extra::L1JetParticle>,l1extra::L1JetParticle> >*)0x0); R__UseDummy(_R__UNIQUE_(Init));

   // Dictionary for non-ClassDef classes
   static TClass *edmcLcLReflEvectorlEl1extracLcLL1JetParticlegRcOl1extracLcLL1JetParticlecOedmcLcLrefhelpercLcLFindUsingAdvancelEvectorlEl1extracLcLL1JetParticlegRcOl1extracLcLL1JetParticlegRsPgR_Dictionary() {
      TClass* theClass =::ROOT::GenerateInitInstanceLocal((const ::edm::Ref<vector<l1extra::L1JetParticle>,l1extra::L1JetParticle,edm::refhelper::FindUsingAdvance<vector<l1extra::L1JetParticle>,l1extra::L1JetParticle> >*)0x0)->GetClass();
      edmcLcLReflEvectorlEl1extracLcLL1JetParticlegRcOl1extracLcLL1JetParticlecOedmcLcLrefhelpercLcLFindUsingAdvancelEvectorlEl1extracLcLL1JetParticlegRcOl1extracLcLL1JetParticlegRsPgR_TClassManip(theClass);
   return theClass;
   }

   static void edmcLcLReflEvectorlEl1extracLcLL1JetParticlegRcOl1extracLcLL1JetParticlecOedmcLcLrefhelpercLcLFindUsingAdvancelEvectorlEl1extracLcLL1JetParticlegRcOl1extracLcLL1JetParticlegRsPgR_TClassManip(TClass* ){
   }

} // end of namespace ROOT

namespace ROOT {
   static TClass *edmcLcLReflEvectorlEl1extracLcLL1MuonParticlegRcOl1extracLcLL1MuonParticlecOedmcLcLrefhelpercLcLFindUsingAdvancelEvectorlEl1extracLcLL1MuonParticlegRcOl1extracLcLL1MuonParticlegRsPgR_Dictionary();
   static void edmcLcLReflEvectorlEl1extracLcLL1MuonParticlegRcOl1extracLcLL1MuonParticlecOedmcLcLrefhelpercLcLFindUsingAdvancelEvectorlEl1extracLcLL1MuonParticlegRcOl1extracLcLL1MuonParticlegRsPgR_TClassManip(TClass*);
   static void *new_edmcLcLReflEvectorlEl1extracLcLL1MuonParticlegRcOl1extracLcLL1MuonParticlecOedmcLcLrefhelpercLcLFindUsingAdvancelEvectorlEl1extracLcLL1MuonParticlegRcOl1extracLcLL1MuonParticlegRsPgR(void *p = 0);
   static void *newArray_edmcLcLReflEvectorlEl1extracLcLL1MuonParticlegRcOl1extracLcLL1MuonParticlecOedmcLcLrefhelpercLcLFindUsingAdvancelEvectorlEl1extracLcLL1MuonParticlegRcOl1extracLcLL1MuonParticlegRsPgR(Long_t size, void *p);
   static void delete_edmcLcLReflEvectorlEl1extracLcLL1MuonParticlegRcOl1extracLcLL1MuonParticlecOedmcLcLrefhelpercLcLFindUsingAdvancelEvectorlEl1extracLcLL1MuonParticlegRcOl1extracLcLL1MuonParticlegRsPgR(void *p);
   static void deleteArray_edmcLcLReflEvectorlEl1extracLcLL1MuonParticlegRcOl1extracLcLL1MuonParticlecOedmcLcLrefhelpercLcLFindUsingAdvancelEvectorlEl1extracLcLL1MuonParticlegRcOl1extracLcLL1MuonParticlegRsPgR(void *p);
   static void destruct_edmcLcLReflEvectorlEl1extracLcLL1MuonParticlegRcOl1extracLcLL1MuonParticlecOedmcLcLrefhelpercLcLFindUsingAdvancelEvectorlEl1extracLcLL1MuonParticlegRcOl1extracLcLL1MuonParticlegRsPgR(void *p);

   // Function generating the singleton type initializer
   static TGenericClassInfo *GenerateInitInstanceLocal(const ::edm::Ref<vector<l1extra::L1MuonParticle>,l1extra::L1MuonParticle,edm::refhelper::FindUsingAdvance<vector<l1extra::L1MuonParticle>,l1extra::L1MuonParticle> >*)
   {
      ::edm::Ref<vector<l1extra::L1MuonParticle>,l1extra::L1MuonParticle,edm::refhelper::FindUsingAdvance<vector<l1extra::L1MuonParticle>,l1extra::L1MuonParticle> > *ptr = 0;
      static ::TVirtualIsAProxy* isa_proxy = new ::TIsAProxy(typeid(::edm::Ref<vector<l1extra::L1MuonParticle>,l1extra::L1MuonParticle,edm::refhelper::FindUsingAdvance<vector<l1extra::L1MuonParticle>,l1extra::L1MuonParticle> >));
      static ::ROOT::TGenericClassInfo 
         instance("edm::Ref<vector<l1extra::L1MuonParticle>,l1extra::L1MuonParticle,edm::refhelper::FindUsingAdvance<vector<l1extra::L1MuonParticle>,l1extra::L1MuonParticle> >", ::edm::Ref<vector<l1extra::L1MuonParticle>,l1extra::L1MuonParticle,edm::refhelper::FindUsingAdvance<vector<l1extra::L1MuonParticle>,l1extra::L1MuonParticle> >::Class_Version(), "DataFormats/Common/interface/Ref.h", 305,
                  typeid(::edm::Ref<vector<l1extra::L1MuonParticle>,l1extra::L1MuonParticle,edm::refhelper::FindUsingAdvance<vector<l1extra::L1MuonParticle>,l1extra::L1MuonParticle> >), ::ROOT::Internal::DefineBehavior(ptr, ptr),
                  &edmcLcLReflEvectorlEl1extracLcLL1MuonParticlegRcOl1extracLcLL1MuonParticlecOedmcLcLrefhelpercLcLFindUsingAdvancelEvectorlEl1extracLcLL1MuonParticlegRcOl1extracLcLL1MuonParticlegRsPgR_Dictionary, isa_proxy, 0,
                  sizeof(::edm::Ref<vector<l1extra::L1MuonParticle>,l1extra::L1MuonParticle,edm::refhelper::FindUsingAdvance<vector<l1extra::L1MuonParticle>,l1extra::L1MuonParticle> >) );
      instance.SetNew(&new_edmcLcLReflEvectorlEl1extracLcLL1MuonParticlegRcOl1extracLcLL1MuonParticlecOedmcLcLrefhelpercLcLFindUsingAdvancelEvectorlEl1extracLcLL1MuonParticlegRcOl1extracLcLL1MuonParticlegRsPgR);
      instance.SetNewArray(&newArray_edmcLcLReflEvectorlEl1extracLcLL1MuonParticlegRcOl1extracLcLL1MuonParticlecOedmcLcLrefhelpercLcLFindUsingAdvancelEvectorlEl1extracLcLL1MuonParticlegRcOl1extracLcLL1MuonParticlegRsPgR);
      instance.SetDelete(&delete_edmcLcLReflEvectorlEl1extracLcLL1MuonParticlegRcOl1extracLcLL1MuonParticlecOedmcLcLrefhelpercLcLFindUsingAdvancelEvectorlEl1extracLcLL1MuonParticlegRcOl1extracLcLL1MuonParticlegRsPgR);
      instance.SetDeleteArray(&deleteArray_edmcLcLReflEvectorlEl1extracLcLL1MuonParticlegRcOl1extracLcLL1MuonParticlecOedmcLcLrefhelpercLcLFindUsingAdvancelEvectorlEl1extracLcLL1MuonParticlegRcOl1extracLcLL1MuonParticlegRsPgR);
      instance.SetDestructor(&destruct_edmcLcLReflEvectorlEl1extracLcLL1MuonParticlegRcOl1extracLcLL1MuonParticlecOedmcLcLrefhelpercLcLFindUsingAdvancelEvectorlEl1extracLcLL1MuonParticlegRcOl1extracLcLL1MuonParticlegRsPgR);

      ::ROOT::AddClassAlternate("edm::Ref<vector<l1extra::L1MuonParticle>,l1extra::L1MuonParticle,edm::refhelper::FindUsingAdvance<vector<l1extra::L1MuonParticle>,l1extra::L1MuonParticle> >","edm::Ref<std::vector<l1extra::L1MuonParticle>,l1extra::L1MuonParticle,edm::refhelper::FindUsingAdvance<std::vector<l1extra::L1MuonParticle>,l1extra::L1MuonParticle> >");
      return &instance;
   }
   TGenericClassInfo *GenerateInitInstance(const ::edm::Ref<vector<l1extra::L1MuonParticle>,l1extra::L1MuonParticle,edm::refhelper::FindUsingAdvance<vector<l1extra::L1MuonParticle>,l1extra::L1MuonParticle> >*)
   {
      return GenerateInitInstanceLocal((::edm::Ref<vector<l1extra::L1MuonParticle>,l1extra::L1MuonParticle,edm::refhelper::FindUsingAdvance<vector<l1extra::L1MuonParticle>,l1extra::L1MuonParticle> >*)0);
   }
   // Static variable to force the class initialization
   static ::ROOT::TGenericClassInfo *_R__UNIQUE_(Init) = GenerateInitInstanceLocal((const ::edm::Ref<vector<l1extra::L1MuonParticle>,l1extra::L1MuonParticle,edm::refhelper::FindUsingAdvance<vector<l1extra::L1MuonParticle>,l1extra::L1MuonParticle> >*)0x0); R__UseDummy(_R__UNIQUE_(Init));

   // Dictionary for non-ClassDef classes
   static TClass *edmcLcLReflEvectorlEl1extracLcLL1MuonParticlegRcOl1extracLcLL1MuonParticlecOedmcLcLrefhelpercLcLFindUsingAdvancelEvectorlEl1extracLcLL1MuonParticlegRcOl1extracLcLL1MuonParticlegRsPgR_Dictionary() {
      TClass* theClass =::ROOT::GenerateInitInstanceLocal((const ::edm::Ref<vector<l1extra::L1MuonParticle>,l1extra::L1MuonParticle,edm::refhelper::FindUsingAdvance<vector<l1extra::L1MuonParticle>,l1extra::L1MuonParticle> >*)0x0)->GetClass();
      edmcLcLReflEvectorlEl1extracLcLL1MuonParticlegRcOl1extracLcLL1MuonParticlecOedmcLcLrefhelpercLcLFindUsingAdvancelEvectorlEl1extracLcLL1MuonParticlegRcOl1extracLcLL1MuonParticlegRsPgR_TClassManip(theClass);
   return theClass;
   }

   static void edmcLcLReflEvectorlEl1extracLcLL1MuonParticlegRcOl1extracLcLL1MuonParticlecOedmcLcLrefhelpercLcLFindUsingAdvancelEvectorlEl1extracLcLL1MuonParticlegRcOl1extracLcLL1MuonParticlegRsPgR_TClassManip(TClass* ){
   }

} // end of namespace ROOT

namespace ROOT {
   static TClass *edmcLcLReflEvectorlEl1extracLcLL1EtMissParticlegRcOl1extracLcLL1EtMissParticlecOedmcLcLrefhelpercLcLFindUsingAdvancelEvectorlEl1extracLcLL1EtMissParticlegRcOl1extracLcLL1EtMissParticlegRsPgR_Dictionary();
   static void edmcLcLReflEvectorlEl1extracLcLL1EtMissParticlegRcOl1extracLcLL1EtMissParticlecOedmcLcLrefhelpercLcLFindUsingAdvancelEvectorlEl1extracLcLL1EtMissParticlegRcOl1extracLcLL1EtMissParticlegRsPgR_TClassManip(TClass*);
   static void *new_edmcLcLReflEvectorlEl1extracLcLL1EtMissParticlegRcOl1extracLcLL1EtMissParticlecOedmcLcLrefhelpercLcLFindUsingAdvancelEvectorlEl1extracLcLL1EtMissParticlegRcOl1extracLcLL1EtMissParticlegRsPgR(void *p = 0);
   static void *newArray_edmcLcLReflEvectorlEl1extracLcLL1EtMissParticlegRcOl1extracLcLL1EtMissParticlecOedmcLcLrefhelpercLcLFindUsingAdvancelEvectorlEl1extracLcLL1EtMissParticlegRcOl1extracLcLL1EtMissParticlegRsPgR(Long_t size, void *p);
   static void delete_edmcLcLReflEvectorlEl1extracLcLL1EtMissParticlegRcOl1extracLcLL1EtMissParticlecOedmcLcLrefhelpercLcLFindUsingAdvancelEvectorlEl1extracLcLL1EtMissParticlegRcOl1extracLcLL1EtMissParticlegRsPgR(void *p);
   static void deleteArray_edmcLcLReflEvectorlEl1extracLcLL1EtMissParticlegRcOl1extracLcLL1EtMissParticlecOedmcLcLrefhelpercLcLFindUsingAdvancelEvectorlEl1extracLcLL1EtMissParticlegRcOl1extracLcLL1EtMissParticlegRsPgR(void *p);
   static void destruct_edmcLcLReflEvectorlEl1extracLcLL1EtMissParticlegRcOl1extracLcLL1EtMissParticlecOedmcLcLrefhelpercLcLFindUsingAdvancelEvectorlEl1extracLcLL1EtMissParticlegRcOl1extracLcLL1EtMissParticlegRsPgR(void *p);

   // Function generating the singleton type initializer
   static TGenericClassInfo *GenerateInitInstanceLocal(const ::edm::Ref<vector<l1extra::L1EtMissParticle>,l1extra::L1EtMissParticle,edm::refhelper::FindUsingAdvance<vector<l1extra::L1EtMissParticle>,l1extra::L1EtMissParticle> >*)
   {
      ::edm::Ref<vector<l1extra::L1EtMissParticle>,l1extra::L1EtMissParticle,edm::refhelper::FindUsingAdvance<vector<l1extra::L1EtMissParticle>,l1extra::L1EtMissParticle> > *ptr = 0;
      static ::TVirtualIsAProxy* isa_proxy = new ::TIsAProxy(typeid(::edm::Ref<vector<l1extra::L1EtMissParticle>,l1extra::L1EtMissParticle,edm::refhelper::FindUsingAdvance<vector<l1extra::L1EtMissParticle>,l1extra::L1EtMissParticle> >));
      static ::ROOT::TGenericClassInfo 
         instance("edm::Ref<vector<l1extra::L1EtMissParticle>,l1extra::L1EtMissParticle,edm::refhelper::FindUsingAdvance<vector<l1extra::L1EtMissParticle>,l1extra::L1EtMissParticle> >", ::edm::Ref<vector<l1extra::L1EtMissParticle>,l1extra::L1EtMissParticle,edm::refhelper::FindUsingAdvance<vector<l1extra::L1EtMissParticle>,l1extra::L1EtMissParticle> >::Class_Version(), "DataFormats/Common/interface/Ref.h", 305,
                  typeid(::edm::Ref<vector<l1extra::L1EtMissParticle>,l1extra::L1EtMissParticle,edm::refhelper::FindUsingAdvance<vector<l1extra::L1EtMissParticle>,l1extra::L1EtMissParticle> >), ::ROOT::Internal::DefineBehavior(ptr, ptr),
                  &edmcLcLReflEvectorlEl1extracLcLL1EtMissParticlegRcOl1extracLcLL1EtMissParticlecOedmcLcLrefhelpercLcLFindUsingAdvancelEvectorlEl1extracLcLL1EtMissParticlegRcOl1extracLcLL1EtMissParticlegRsPgR_Dictionary, isa_proxy, 0,
                  sizeof(::edm::Ref<vector<l1extra::L1EtMissParticle>,l1extra::L1EtMissParticle,edm::refhelper::FindUsingAdvance<vector<l1extra::L1EtMissParticle>,l1extra::L1EtMissParticle> >) );
      instance.SetNew(&new_edmcLcLReflEvectorlEl1extracLcLL1EtMissParticlegRcOl1extracLcLL1EtMissParticlecOedmcLcLrefhelpercLcLFindUsingAdvancelEvectorlEl1extracLcLL1EtMissParticlegRcOl1extracLcLL1EtMissParticlegRsPgR);
      instance.SetNewArray(&newArray_edmcLcLReflEvectorlEl1extracLcLL1EtMissParticlegRcOl1extracLcLL1EtMissParticlecOedmcLcLrefhelpercLcLFindUsingAdvancelEvectorlEl1extracLcLL1EtMissParticlegRcOl1extracLcLL1EtMissParticlegRsPgR);
      instance.SetDelete(&delete_edmcLcLReflEvectorlEl1extracLcLL1EtMissParticlegRcOl1extracLcLL1EtMissParticlecOedmcLcLrefhelpercLcLFindUsingAdvancelEvectorlEl1extracLcLL1EtMissParticlegRcOl1extracLcLL1EtMissParticlegRsPgR);
      instance.SetDeleteArray(&deleteArray_edmcLcLReflEvectorlEl1extracLcLL1EtMissParticlegRcOl1extracLcLL1EtMissParticlecOedmcLcLrefhelpercLcLFindUsingAdvancelEvectorlEl1extracLcLL1EtMissParticlegRcOl1extracLcLL1EtMissParticlegRsPgR);
      instance.SetDestructor(&destruct_edmcLcLReflEvectorlEl1extracLcLL1EtMissParticlegRcOl1extracLcLL1EtMissParticlecOedmcLcLrefhelpercLcLFindUsingAdvancelEvectorlEl1extracLcLL1EtMissParticlegRcOl1extracLcLL1EtMissParticlegRsPgR);

      ::ROOT::AddClassAlternate("edm::Ref<vector<l1extra::L1EtMissParticle>,l1extra::L1EtMissParticle,edm::refhelper::FindUsingAdvance<vector<l1extra::L1EtMissParticle>,l1extra::L1EtMissParticle> >","edm::Ref<std::vector<l1extra::L1EtMissParticle>,l1extra::L1EtMissParticle,edm::refhelper::FindUsingAdvance<std::vector<l1extra::L1EtMissParticle>,l1extra::L1EtMissParticle> >");
      return &instance;
   }
   TGenericClassInfo *GenerateInitInstance(const ::edm::Ref<vector<l1extra::L1EtMissParticle>,l1extra::L1EtMissParticle,edm::refhelper::FindUsingAdvance<vector<l1extra::L1EtMissParticle>,l1extra::L1EtMissParticle> >*)
   {
      return GenerateInitInstanceLocal((::edm::Ref<vector<l1extra::L1EtMissParticle>,l1extra::L1EtMissParticle,edm::refhelper::FindUsingAdvance<vector<l1extra::L1EtMissParticle>,l1extra::L1EtMissParticle> >*)0);
   }
   // Static variable to force the class initialization
   static ::ROOT::TGenericClassInfo *_R__UNIQUE_(Init) = GenerateInitInstanceLocal((const ::edm::Ref<vector<l1extra::L1EtMissParticle>,l1extra::L1EtMissParticle,edm::refhelper::FindUsingAdvance<vector<l1extra::L1EtMissParticle>,l1extra::L1EtMissParticle> >*)0x0); R__UseDummy(_R__UNIQUE_(Init));

   // Dictionary for non-ClassDef classes
   static TClass *edmcLcLReflEvectorlEl1extracLcLL1EtMissParticlegRcOl1extracLcLL1EtMissParticlecOedmcLcLrefhelpercLcLFindUsingAdvancelEvectorlEl1extracLcLL1EtMissParticlegRcOl1extracLcLL1EtMissParticlegRsPgR_Dictionary() {
      TClass* theClass =::ROOT::GenerateInitInstanceLocal((const ::edm::Ref<vector<l1extra::L1EtMissParticle>,l1extra::L1EtMissParticle,edm::refhelper::FindUsingAdvance<vector<l1extra::L1EtMissParticle>,l1extra::L1EtMissParticle> >*)0x0)->GetClass();
      edmcLcLReflEvectorlEl1extracLcLL1EtMissParticlegRcOl1extracLcLL1EtMissParticlecOedmcLcLrefhelpercLcLFindUsingAdvancelEvectorlEl1extracLcLL1EtMissParticlegRcOl1extracLcLL1EtMissParticlegRsPgR_TClassManip(theClass);
   return theClass;
   }

   static void edmcLcLReflEvectorlEl1extracLcLL1EtMissParticlegRcOl1extracLcLL1EtMissParticlecOedmcLcLrefhelpercLcLFindUsingAdvancelEvectorlEl1extracLcLL1EtMissParticlegRcOl1extracLcLL1EtMissParticlegRsPgR_TClassManip(TClass* ){
   }

} // end of namespace ROOT

namespace ROOT {
   static TClass *edmcLcLReflEvectorlEl1extracLcLL1HFRingsgRcOl1extracLcLL1HFRingscOedmcLcLrefhelpercLcLFindUsingAdvancelEvectorlEl1extracLcLL1HFRingsgRcOl1extracLcLL1HFRingsgRsPgR_Dictionary();
   static void edmcLcLReflEvectorlEl1extracLcLL1HFRingsgRcOl1extracLcLL1HFRingscOedmcLcLrefhelpercLcLFindUsingAdvancelEvectorlEl1extracLcLL1HFRingsgRcOl1extracLcLL1HFRingsgRsPgR_TClassManip(TClass*);
   static void *new_edmcLcLReflEvectorlEl1extracLcLL1HFRingsgRcOl1extracLcLL1HFRingscOedmcLcLrefhelpercLcLFindUsingAdvancelEvectorlEl1extracLcLL1HFRingsgRcOl1extracLcLL1HFRingsgRsPgR(void *p = 0);
   static void *newArray_edmcLcLReflEvectorlEl1extracLcLL1HFRingsgRcOl1extracLcLL1HFRingscOedmcLcLrefhelpercLcLFindUsingAdvancelEvectorlEl1extracLcLL1HFRingsgRcOl1extracLcLL1HFRingsgRsPgR(Long_t size, void *p);
   static void delete_edmcLcLReflEvectorlEl1extracLcLL1HFRingsgRcOl1extracLcLL1HFRingscOedmcLcLrefhelpercLcLFindUsingAdvancelEvectorlEl1extracLcLL1HFRingsgRcOl1extracLcLL1HFRingsgRsPgR(void *p);
   static void deleteArray_edmcLcLReflEvectorlEl1extracLcLL1HFRingsgRcOl1extracLcLL1HFRingscOedmcLcLrefhelpercLcLFindUsingAdvancelEvectorlEl1extracLcLL1HFRingsgRcOl1extracLcLL1HFRingsgRsPgR(void *p);
   static void destruct_edmcLcLReflEvectorlEl1extracLcLL1HFRingsgRcOl1extracLcLL1HFRingscOedmcLcLrefhelpercLcLFindUsingAdvancelEvectorlEl1extracLcLL1HFRingsgRcOl1extracLcLL1HFRingsgRsPgR(void *p);

   // Function generating the singleton type initializer
   static TGenericClassInfo *GenerateInitInstanceLocal(const ::edm::Ref<vector<l1extra::L1HFRings>,l1extra::L1HFRings,edm::refhelper::FindUsingAdvance<vector<l1extra::L1HFRings>,l1extra::L1HFRings> >*)
   {
      ::edm::Ref<vector<l1extra::L1HFRings>,l1extra::L1HFRings,edm::refhelper::FindUsingAdvance<vector<l1extra::L1HFRings>,l1extra::L1HFRings> > *ptr = 0;
      static ::TVirtualIsAProxy* isa_proxy = new ::TIsAProxy(typeid(::edm::Ref<vector<l1extra::L1HFRings>,l1extra::L1HFRings,edm::refhelper::FindUsingAdvance<vector<l1extra::L1HFRings>,l1extra::L1HFRings> >));
      static ::ROOT::TGenericClassInfo 
         instance("edm::Ref<vector<l1extra::L1HFRings>,l1extra::L1HFRings,edm::refhelper::FindUsingAdvance<vector<l1extra::L1HFRings>,l1extra::L1HFRings> >", ::edm::Ref<vector<l1extra::L1HFRings>,l1extra::L1HFRings,edm::refhelper::FindUsingAdvance<vector<l1extra::L1HFRings>,l1extra::L1HFRings> >::Class_Version(), "DataFormats/Common/interface/Ref.h", 305,
                  typeid(::edm::Ref<vector<l1extra::L1HFRings>,l1extra::L1HFRings,edm::refhelper::FindUsingAdvance<vector<l1extra::L1HFRings>,l1extra::L1HFRings> >), ::ROOT::Internal::DefineBehavior(ptr, ptr),
                  &edmcLcLReflEvectorlEl1extracLcLL1HFRingsgRcOl1extracLcLL1HFRingscOedmcLcLrefhelpercLcLFindUsingAdvancelEvectorlEl1extracLcLL1HFRingsgRcOl1extracLcLL1HFRingsgRsPgR_Dictionary, isa_proxy, 0,
                  sizeof(::edm::Ref<vector<l1extra::L1HFRings>,l1extra::L1HFRings,edm::refhelper::FindUsingAdvance<vector<l1extra::L1HFRings>,l1extra::L1HFRings> >) );
      instance.SetNew(&new_edmcLcLReflEvectorlEl1extracLcLL1HFRingsgRcOl1extracLcLL1HFRingscOedmcLcLrefhelpercLcLFindUsingAdvancelEvectorlEl1extracLcLL1HFRingsgRcOl1extracLcLL1HFRingsgRsPgR);
      instance.SetNewArray(&newArray_edmcLcLReflEvectorlEl1extracLcLL1HFRingsgRcOl1extracLcLL1HFRingscOedmcLcLrefhelpercLcLFindUsingAdvancelEvectorlEl1extracLcLL1HFRingsgRcOl1extracLcLL1HFRingsgRsPgR);
      instance.SetDelete(&delete_edmcLcLReflEvectorlEl1extracLcLL1HFRingsgRcOl1extracLcLL1HFRingscOedmcLcLrefhelpercLcLFindUsingAdvancelEvectorlEl1extracLcLL1HFRingsgRcOl1extracLcLL1HFRingsgRsPgR);
      instance.SetDeleteArray(&deleteArray_edmcLcLReflEvectorlEl1extracLcLL1HFRingsgRcOl1extracLcLL1HFRingscOedmcLcLrefhelpercLcLFindUsingAdvancelEvectorlEl1extracLcLL1HFRingsgRcOl1extracLcLL1HFRingsgRsPgR);
      instance.SetDestructor(&destruct_edmcLcLReflEvectorlEl1extracLcLL1HFRingsgRcOl1extracLcLL1HFRingscOedmcLcLrefhelpercLcLFindUsingAdvancelEvectorlEl1extracLcLL1HFRingsgRcOl1extracLcLL1HFRingsgRsPgR);

      ::ROOT::AddClassAlternate("edm::Ref<vector<l1extra::L1HFRings>,l1extra::L1HFRings,edm::refhelper::FindUsingAdvance<vector<l1extra::L1HFRings>,l1extra::L1HFRings> >","edm::Ref<std::vector<l1extra::L1HFRings>,l1extra::L1HFRings,edm::refhelper::FindUsingAdvance<std::vector<l1extra::L1HFRings>,l1extra::L1HFRings> >");
      return &instance;
   }
   TGenericClassInfo *GenerateInitInstance(const ::edm::Ref<vector<l1extra::L1HFRings>,l1extra::L1HFRings,edm::refhelper::FindUsingAdvance<vector<l1extra::L1HFRings>,l1extra::L1HFRings> >*)
   {
      return GenerateInitInstanceLocal((::edm::Ref<vector<l1extra::L1HFRings>,l1extra::L1HFRings,edm::refhelper::FindUsingAdvance<vector<l1extra::L1HFRings>,l1extra::L1HFRings> >*)0);
   }
   // Static variable to force the class initialization
   static ::ROOT::TGenericClassInfo *_R__UNIQUE_(Init) = GenerateInitInstanceLocal((const ::edm::Ref<vector<l1extra::L1HFRings>,l1extra::L1HFRings,edm::refhelper::FindUsingAdvance<vector<l1extra::L1HFRings>,l1extra::L1HFRings> >*)0x0); R__UseDummy(_R__UNIQUE_(Init));

   // Dictionary for non-ClassDef classes
   static TClass *edmcLcLReflEvectorlEl1extracLcLL1HFRingsgRcOl1extracLcLL1HFRingscOedmcLcLrefhelpercLcLFindUsingAdvancelEvectorlEl1extracLcLL1HFRingsgRcOl1extracLcLL1HFRingsgRsPgR_Dictionary() {
      TClass* theClass =::ROOT::GenerateInitInstanceLocal((const ::edm::Ref<vector<l1extra::L1HFRings>,l1extra::L1HFRings,edm::refhelper::FindUsingAdvance<vector<l1extra::L1HFRings>,l1extra::L1HFRings> >*)0x0)->GetClass();
      edmcLcLReflEvectorlEl1extracLcLL1HFRingsgRcOl1extracLcLL1HFRingscOedmcLcLrefhelpercLcLFindUsingAdvancelEvectorlEl1extracLcLL1HFRingsgRcOl1extracLcLL1HFRingsgRsPgR_TClassManip(theClass);
   return theClass;
   }

   static void edmcLcLReflEvectorlEl1extracLcLL1HFRingsgRcOl1extracLcLL1HFRingscOedmcLcLrefhelpercLcLFindUsingAdvancelEvectorlEl1extracLcLL1HFRingsgRcOl1extracLcLL1HFRingsgRsPgR_TClassManip(TClass* ){
   }

} // end of namespace ROOT

namespace ROOT {
   static TClass *edmcLcLRefVectorlEvectorlEl1extracLcLL1EmParticlegRcOl1extracLcLL1EmParticlecOedmcLcLrefhelpercLcLFindUsingAdvancelEvectorlEl1extracLcLL1EmParticlegRcOl1extracLcLL1EmParticlegRsPgR_Dictionary();
   static void edmcLcLRefVectorlEvectorlEl1extracLcLL1EmParticlegRcOl1extracLcLL1EmParticlecOedmcLcLrefhelpercLcLFindUsingAdvancelEvectorlEl1extracLcLL1EmParticlegRcOl1extracLcLL1EmParticlegRsPgR_TClassManip(TClass*);
   static void *new_edmcLcLRefVectorlEvectorlEl1extracLcLL1EmParticlegRcOl1extracLcLL1EmParticlecOedmcLcLrefhelpercLcLFindUsingAdvancelEvectorlEl1extracLcLL1EmParticlegRcOl1extracLcLL1EmParticlegRsPgR(void *p = 0);
   static void *newArray_edmcLcLRefVectorlEvectorlEl1extracLcLL1EmParticlegRcOl1extracLcLL1EmParticlecOedmcLcLrefhelpercLcLFindUsingAdvancelEvectorlEl1extracLcLL1EmParticlegRcOl1extracLcLL1EmParticlegRsPgR(Long_t size, void *p);
   static void delete_edmcLcLRefVectorlEvectorlEl1extracLcLL1EmParticlegRcOl1extracLcLL1EmParticlecOedmcLcLrefhelpercLcLFindUsingAdvancelEvectorlEl1extracLcLL1EmParticlegRcOl1extracLcLL1EmParticlegRsPgR(void *p);
   static void deleteArray_edmcLcLRefVectorlEvectorlEl1extracLcLL1EmParticlegRcOl1extracLcLL1EmParticlecOedmcLcLrefhelpercLcLFindUsingAdvancelEvectorlEl1extracLcLL1EmParticlegRcOl1extracLcLL1EmParticlegRsPgR(void *p);
   static void destruct_edmcLcLRefVectorlEvectorlEl1extracLcLL1EmParticlegRcOl1extracLcLL1EmParticlecOedmcLcLrefhelpercLcLFindUsingAdvancelEvectorlEl1extracLcLL1EmParticlegRcOl1extracLcLL1EmParticlegRsPgR(void *p);

   // Function generating the singleton type initializer
   static TGenericClassInfo *GenerateInitInstanceLocal(const ::edm::RefVector<vector<l1extra::L1EmParticle>,l1extra::L1EmParticle,edm::refhelper::FindUsingAdvance<vector<l1extra::L1EmParticle>,l1extra::L1EmParticle> >*)
   {
      ::edm::RefVector<vector<l1extra::L1EmParticle>,l1extra::L1EmParticle,edm::refhelper::FindUsingAdvance<vector<l1extra::L1EmParticle>,l1extra::L1EmParticle> > *ptr = 0;
      static ::TVirtualIsAProxy* isa_proxy = new ::TIsAProxy(typeid(::edm::RefVector<vector<l1extra::L1EmParticle>,l1extra::L1EmParticle,edm::refhelper::FindUsingAdvance<vector<l1extra::L1EmParticle>,l1extra::L1EmParticle> >));
      static ::ROOT::TGenericClassInfo 
         instance("edm::RefVector<vector<l1extra::L1EmParticle>,l1extra::L1EmParticle,edm::refhelper::FindUsingAdvance<vector<l1extra::L1EmParticle>,l1extra::L1EmParticle> >", ::edm::RefVector<vector<l1extra::L1EmParticle>,l1extra::L1EmParticle,edm::refhelper::FindUsingAdvance<vector<l1extra::L1EmParticle>,l1extra::L1EmParticle> >::Class_Version(), "DataFormats/Common/interface/RefVector.h", 33,
                  typeid(::edm::RefVector<vector<l1extra::L1EmParticle>,l1extra::L1EmParticle,edm::refhelper::FindUsingAdvance<vector<l1extra::L1EmParticle>,l1extra::L1EmParticle> >), ::ROOT::Internal::DefineBehavior(ptr, ptr),
                  &edmcLcLRefVectorlEvectorlEl1extracLcLL1EmParticlegRcOl1extracLcLL1EmParticlecOedmcLcLrefhelpercLcLFindUsingAdvancelEvectorlEl1extracLcLL1EmParticlegRcOl1extracLcLL1EmParticlegRsPgR_Dictionary, isa_proxy, 0,
                  sizeof(::edm::RefVector<vector<l1extra::L1EmParticle>,l1extra::L1EmParticle,edm::refhelper::FindUsingAdvance<vector<l1extra::L1EmParticle>,l1extra::L1EmParticle> >) );
      instance.SetNew(&new_edmcLcLRefVectorlEvectorlEl1extracLcLL1EmParticlegRcOl1extracLcLL1EmParticlecOedmcLcLrefhelpercLcLFindUsingAdvancelEvectorlEl1extracLcLL1EmParticlegRcOl1extracLcLL1EmParticlegRsPgR);
      instance.SetNewArray(&newArray_edmcLcLRefVectorlEvectorlEl1extracLcLL1EmParticlegRcOl1extracLcLL1EmParticlecOedmcLcLrefhelpercLcLFindUsingAdvancelEvectorlEl1extracLcLL1EmParticlegRcOl1extracLcLL1EmParticlegRsPgR);
      instance.SetDelete(&delete_edmcLcLRefVectorlEvectorlEl1extracLcLL1EmParticlegRcOl1extracLcLL1EmParticlecOedmcLcLrefhelpercLcLFindUsingAdvancelEvectorlEl1extracLcLL1EmParticlegRcOl1extracLcLL1EmParticlegRsPgR);
      instance.SetDeleteArray(&deleteArray_edmcLcLRefVectorlEvectorlEl1extracLcLL1EmParticlegRcOl1extracLcLL1EmParticlecOedmcLcLrefhelpercLcLFindUsingAdvancelEvectorlEl1extracLcLL1EmParticlegRcOl1extracLcLL1EmParticlegRsPgR);
      instance.SetDestructor(&destruct_edmcLcLRefVectorlEvectorlEl1extracLcLL1EmParticlegRcOl1extracLcLL1EmParticlecOedmcLcLrefhelpercLcLFindUsingAdvancelEvectorlEl1extracLcLL1EmParticlegRcOl1extracLcLL1EmParticlegRsPgR);

      ::ROOT::AddClassAlternate("edm::RefVector<vector<l1extra::L1EmParticle>,l1extra::L1EmParticle,edm::refhelper::FindUsingAdvance<vector<l1extra::L1EmParticle>,l1extra::L1EmParticle> >","edm::RefVector<std::vector<l1extra::L1EmParticle>,l1extra::L1EmParticle,edm::refhelper::FindUsingAdvance<std::vector<l1extra::L1EmParticle>,l1extra::L1EmParticle> >");
      return &instance;
   }
   TGenericClassInfo *GenerateInitInstance(const ::edm::RefVector<vector<l1extra::L1EmParticle>,l1extra::L1EmParticle,edm::refhelper::FindUsingAdvance<vector<l1extra::L1EmParticle>,l1extra::L1EmParticle> >*)
   {
      return GenerateInitInstanceLocal((::edm::RefVector<vector<l1extra::L1EmParticle>,l1extra::L1EmParticle,edm::refhelper::FindUsingAdvance<vector<l1extra::L1EmParticle>,l1extra::L1EmParticle> >*)0);
   }
   // Static variable to force the class initialization
   static ::ROOT::TGenericClassInfo *_R__UNIQUE_(Init) = GenerateInitInstanceLocal((const ::edm::RefVector<vector<l1extra::L1EmParticle>,l1extra::L1EmParticle,edm::refhelper::FindUsingAdvance<vector<l1extra::L1EmParticle>,l1extra::L1EmParticle> >*)0x0); R__UseDummy(_R__UNIQUE_(Init));

   // Dictionary for non-ClassDef classes
   static TClass *edmcLcLRefVectorlEvectorlEl1extracLcLL1EmParticlegRcOl1extracLcLL1EmParticlecOedmcLcLrefhelpercLcLFindUsingAdvancelEvectorlEl1extracLcLL1EmParticlegRcOl1extracLcLL1EmParticlegRsPgR_Dictionary() {
      TClass* theClass =::ROOT::GenerateInitInstanceLocal((const ::edm::RefVector<vector<l1extra::L1EmParticle>,l1extra::L1EmParticle,edm::refhelper::FindUsingAdvance<vector<l1extra::L1EmParticle>,l1extra::L1EmParticle> >*)0x0)->GetClass();
      edmcLcLRefVectorlEvectorlEl1extracLcLL1EmParticlegRcOl1extracLcLL1EmParticlecOedmcLcLrefhelpercLcLFindUsingAdvancelEvectorlEl1extracLcLL1EmParticlegRcOl1extracLcLL1EmParticlegRsPgR_TClassManip(theClass);
   return theClass;
   }

   static void edmcLcLRefVectorlEvectorlEl1extracLcLL1EmParticlegRcOl1extracLcLL1EmParticlecOedmcLcLrefhelpercLcLFindUsingAdvancelEvectorlEl1extracLcLL1EmParticlegRcOl1extracLcLL1EmParticlegRsPgR_TClassManip(TClass* ){
   }

} // end of namespace ROOT

namespace ROOT {
   static TClass *edmcLcLRefVectorlEvectorlEl1extracLcLL1JetParticlegRcOl1extracLcLL1JetParticlecOedmcLcLrefhelpercLcLFindUsingAdvancelEvectorlEl1extracLcLL1JetParticlegRcOl1extracLcLL1JetParticlegRsPgR_Dictionary();
   static void edmcLcLRefVectorlEvectorlEl1extracLcLL1JetParticlegRcOl1extracLcLL1JetParticlecOedmcLcLrefhelpercLcLFindUsingAdvancelEvectorlEl1extracLcLL1JetParticlegRcOl1extracLcLL1JetParticlegRsPgR_TClassManip(TClass*);
   static void *new_edmcLcLRefVectorlEvectorlEl1extracLcLL1JetParticlegRcOl1extracLcLL1JetParticlecOedmcLcLrefhelpercLcLFindUsingAdvancelEvectorlEl1extracLcLL1JetParticlegRcOl1extracLcLL1JetParticlegRsPgR(void *p = 0);
   static void *newArray_edmcLcLRefVectorlEvectorlEl1extracLcLL1JetParticlegRcOl1extracLcLL1JetParticlecOedmcLcLrefhelpercLcLFindUsingAdvancelEvectorlEl1extracLcLL1JetParticlegRcOl1extracLcLL1JetParticlegRsPgR(Long_t size, void *p);
   static void delete_edmcLcLRefVectorlEvectorlEl1extracLcLL1JetParticlegRcOl1extracLcLL1JetParticlecOedmcLcLrefhelpercLcLFindUsingAdvancelEvectorlEl1extracLcLL1JetParticlegRcOl1extracLcLL1JetParticlegRsPgR(void *p);
   static void deleteArray_edmcLcLRefVectorlEvectorlEl1extracLcLL1JetParticlegRcOl1extracLcLL1JetParticlecOedmcLcLrefhelpercLcLFindUsingAdvancelEvectorlEl1extracLcLL1JetParticlegRcOl1extracLcLL1JetParticlegRsPgR(void *p);
   static void destruct_edmcLcLRefVectorlEvectorlEl1extracLcLL1JetParticlegRcOl1extracLcLL1JetParticlecOedmcLcLrefhelpercLcLFindUsingAdvancelEvectorlEl1extracLcLL1JetParticlegRcOl1extracLcLL1JetParticlegRsPgR(void *p);

   // Function generating the singleton type initializer
   static TGenericClassInfo *GenerateInitInstanceLocal(const ::edm::RefVector<vector<l1extra::L1JetParticle>,l1extra::L1JetParticle,edm::refhelper::FindUsingAdvance<vector<l1extra::L1JetParticle>,l1extra::L1JetParticle> >*)
   {
      ::edm::RefVector<vector<l1extra::L1JetParticle>,l1extra::L1JetParticle,edm::refhelper::FindUsingAdvance<vector<l1extra::L1JetParticle>,l1extra::L1JetParticle> > *ptr = 0;
      static ::TVirtualIsAProxy* isa_proxy = new ::TIsAProxy(typeid(::edm::RefVector<vector<l1extra::L1JetParticle>,l1extra::L1JetParticle,edm::refhelper::FindUsingAdvance<vector<l1extra::L1JetParticle>,l1extra::L1JetParticle> >));
      static ::ROOT::TGenericClassInfo 
         instance("edm::RefVector<vector<l1extra::L1JetParticle>,l1extra::L1JetParticle,edm::refhelper::FindUsingAdvance<vector<l1extra::L1JetParticle>,l1extra::L1JetParticle> >", ::edm::RefVector<vector<l1extra::L1JetParticle>,l1extra::L1JetParticle,edm::refhelper::FindUsingAdvance<vector<l1extra::L1JetParticle>,l1extra::L1JetParticle> >::Class_Version(), "DataFormats/Common/interface/RefVector.h", 33,
                  typeid(::edm::RefVector<vector<l1extra::L1JetParticle>,l1extra::L1JetParticle,edm::refhelper::FindUsingAdvance<vector<l1extra::L1JetParticle>,l1extra::L1JetParticle> >), ::ROOT::Internal::DefineBehavior(ptr, ptr),
                  &edmcLcLRefVectorlEvectorlEl1extracLcLL1JetParticlegRcOl1extracLcLL1JetParticlecOedmcLcLrefhelpercLcLFindUsingAdvancelEvectorlEl1extracLcLL1JetParticlegRcOl1extracLcLL1JetParticlegRsPgR_Dictionary, isa_proxy, 0,
                  sizeof(::edm::RefVector<vector<l1extra::L1JetParticle>,l1extra::L1JetParticle,edm::refhelper::FindUsingAdvance<vector<l1extra::L1JetParticle>,l1extra::L1JetParticle> >) );
      instance.SetNew(&new_edmcLcLRefVectorlEvectorlEl1extracLcLL1JetParticlegRcOl1extracLcLL1JetParticlecOedmcLcLrefhelpercLcLFindUsingAdvancelEvectorlEl1extracLcLL1JetParticlegRcOl1extracLcLL1JetParticlegRsPgR);
      instance.SetNewArray(&newArray_edmcLcLRefVectorlEvectorlEl1extracLcLL1JetParticlegRcOl1extracLcLL1JetParticlecOedmcLcLrefhelpercLcLFindUsingAdvancelEvectorlEl1extracLcLL1JetParticlegRcOl1extracLcLL1JetParticlegRsPgR);
      instance.SetDelete(&delete_edmcLcLRefVectorlEvectorlEl1extracLcLL1JetParticlegRcOl1extracLcLL1JetParticlecOedmcLcLrefhelpercLcLFindUsingAdvancelEvectorlEl1extracLcLL1JetParticlegRcOl1extracLcLL1JetParticlegRsPgR);
      instance.SetDeleteArray(&deleteArray_edmcLcLRefVectorlEvectorlEl1extracLcLL1JetParticlegRcOl1extracLcLL1JetParticlecOedmcLcLrefhelpercLcLFindUsingAdvancelEvectorlEl1extracLcLL1JetParticlegRcOl1extracLcLL1JetParticlegRsPgR);
      instance.SetDestructor(&destruct_edmcLcLRefVectorlEvectorlEl1extracLcLL1JetParticlegRcOl1extracLcLL1JetParticlecOedmcLcLrefhelpercLcLFindUsingAdvancelEvectorlEl1extracLcLL1JetParticlegRcOl1extracLcLL1JetParticlegRsPgR);

      ::ROOT::AddClassAlternate("edm::RefVector<vector<l1extra::L1JetParticle>,l1extra::L1JetParticle,edm::refhelper::FindUsingAdvance<vector<l1extra::L1JetParticle>,l1extra::L1JetParticle> >","edm::RefVector<std::vector<l1extra::L1JetParticle>,l1extra::L1JetParticle,edm::refhelper::FindUsingAdvance<std::vector<l1extra::L1JetParticle>,l1extra::L1JetParticle> >");
      return &instance;
   }
   TGenericClassInfo *GenerateInitInstance(const ::edm::RefVector<vector<l1extra::L1JetParticle>,l1extra::L1JetParticle,edm::refhelper::FindUsingAdvance<vector<l1extra::L1JetParticle>,l1extra::L1JetParticle> >*)
   {
      return GenerateInitInstanceLocal((::edm::RefVector<vector<l1extra::L1JetParticle>,l1extra::L1JetParticle,edm::refhelper::FindUsingAdvance<vector<l1extra::L1JetParticle>,l1extra::L1JetParticle> >*)0);
   }
   // Static variable to force the class initialization
   static ::ROOT::TGenericClassInfo *_R__UNIQUE_(Init) = GenerateInitInstanceLocal((const ::edm::RefVector<vector<l1extra::L1JetParticle>,l1extra::L1JetParticle,edm::refhelper::FindUsingAdvance<vector<l1extra::L1JetParticle>,l1extra::L1JetParticle> >*)0x0); R__UseDummy(_R__UNIQUE_(Init));

   // Dictionary for non-ClassDef classes
   static TClass *edmcLcLRefVectorlEvectorlEl1extracLcLL1JetParticlegRcOl1extracLcLL1JetParticlecOedmcLcLrefhelpercLcLFindUsingAdvancelEvectorlEl1extracLcLL1JetParticlegRcOl1extracLcLL1JetParticlegRsPgR_Dictionary() {
      TClass* theClass =::ROOT::GenerateInitInstanceLocal((const ::edm::RefVector<vector<l1extra::L1JetParticle>,l1extra::L1JetParticle,edm::refhelper::FindUsingAdvance<vector<l1extra::L1JetParticle>,l1extra::L1JetParticle> >*)0x0)->GetClass();
      edmcLcLRefVectorlEvectorlEl1extracLcLL1JetParticlegRcOl1extracLcLL1JetParticlecOedmcLcLrefhelpercLcLFindUsingAdvancelEvectorlEl1extracLcLL1JetParticlegRcOl1extracLcLL1JetParticlegRsPgR_TClassManip(theClass);
   return theClass;
   }

   static void edmcLcLRefVectorlEvectorlEl1extracLcLL1JetParticlegRcOl1extracLcLL1JetParticlecOedmcLcLrefhelpercLcLFindUsingAdvancelEvectorlEl1extracLcLL1JetParticlegRcOl1extracLcLL1JetParticlegRsPgR_TClassManip(TClass* ){
   }

} // end of namespace ROOT

namespace ROOT {
   static TClass *edmcLcLRefVectorlEvectorlEl1extracLcLL1MuonParticlegRcOl1extracLcLL1MuonParticlecOedmcLcLrefhelpercLcLFindUsingAdvancelEvectorlEl1extracLcLL1MuonParticlegRcOl1extracLcLL1MuonParticlegRsPgR_Dictionary();
   static void edmcLcLRefVectorlEvectorlEl1extracLcLL1MuonParticlegRcOl1extracLcLL1MuonParticlecOedmcLcLrefhelpercLcLFindUsingAdvancelEvectorlEl1extracLcLL1MuonParticlegRcOl1extracLcLL1MuonParticlegRsPgR_TClassManip(TClass*);
   static void *new_edmcLcLRefVectorlEvectorlEl1extracLcLL1MuonParticlegRcOl1extracLcLL1MuonParticlecOedmcLcLrefhelpercLcLFindUsingAdvancelEvectorlEl1extracLcLL1MuonParticlegRcOl1extracLcLL1MuonParticlegRsPgR(void *p = 0);
   static void *newArray_edmcLcLRefVectorlEvectorlEl1extracLcLL1MuonParticlegRcOl1extracLcLL1MuonParticlecOedmcLcLrefhelpercLcLFindUsingAdvancelEvectorlEl1extracLcLL1MuonParticlegRcOl1extracLcLL1MuonParticlegRsPgR(Long_t size, void *p);
   static void delete_edmcLcLRefVectorlEvectorlEl1extracLcLL1MuonParticlegRcOl1extracLcLL1MuonParticlecOedmcLcLrefhelpercLcLFindUsingAdvancelEvectorlEl1extracLcLL1MuonParticlegRcOl1extracLcLL1MuonParticlegRsPgR(void *p);
   static void deleteArray_edmcLcLRefVectorlEvectorlEl1extracLcLL1MuonParticlegRcOl1extracLcLL1MuonParticlecOedmcLcLrefhelpercLcLFindUsingAdvancelEvectorlEl1extracLcLL1MuonParticlegRcOl1extracLcLL1MuonParticlegRsPgR(void *p);
   static void destruct_edmcLcLRefVectorlEvectorlEl1extracLcLL1MuonParticlegRcOl1extracLcLL1MuonParticlecOedmcLcLrefhelpercLcLFindUsingAdvancelEvectorlEl1extracLcLL1MuonParticlegRcOl1extracLcLL1MuonParticlegRsPgR(void *p);

   // Function generating the singleton type initializer
   static TGenericClassInfo *GenerateInitInstanceLocal(const ::edm::RefVector<vector<l1extra::L1MuonParticle>,l1extra::L1MuonParticle,edm::refhelper::FindUsingAdvance<vector<l1extra::L1MuonParticle>,l1extra::L1MuonParticle> >*)
   {
      ::edm::RefVector<vector<l1extra::L1MuonParticle>,l1extra::L1MuonParticle,edm::refhelper::FindUsingAdvance<vector<l1extra::L1MuonParticle>,l1extra::L1MuonParticle> > *ptr = 0;
      static ::TVirtualIsAProxy* isa_proxy = new ::TIsAProxy(typeid(::edm::RefVector<vector<l1extra::L1MuonParticle>,l1extra::L1MuonParticle,edm::refhelper::FindUsingAdvance<vector<l1extra::L1MuonParticle>,l1extra::L1MuonParticle> >));
      static ::ROOT::TGenericClassInfo 
         instance("edm::RefVector<vector<l1extra::L1MuonParticle>,l1extra::L1MuonParticle,edm::refhelper::FindUsingAdvance<vector<l1extra::L1MuonParticle>,l1extra::L1MuonParticle> >", ::edm::RefVector<vector<l1extra::L1MuonParticle>,l1extra::L1MuonParticle,edm::refhelper::FindUsingAdvance<vector<l1extra::L1MuonParticle>,l1extra::L1MuonParticle> >::Class_Version(), "DataFormats/Common/interface/RefVector.h", 33,
                  typeid(::edm::RefVector<vector<l1extra::L1MuonParticle>,l1extra::L1MuonParticle,edm::refhelper::FindUsingAdvance<vector<l1extra::L1MuonParticle>,l1extra::L1MuonParticle> >), ::ROOT::Internal::DefineBehavior(ptr, ptr),
                  &edmcLcLRefVectorlEvectorlEl1extracLcLL1MuonParticlegRcOl1extracLcLL1MuonParticlecOedmcLcLrefhelpercLcLFindUsingAdvancelEvectorlEl1extracLcLL1MuonParticlegRcOl1extracLcLL1MuonParticlegRsPgR_Dictionary, isa_proxy, 0,
                  sizeof(::edm::RefVector<vector<l1extra::L1MuonParticle>,l1extra::L1MuonParticle,edm::refhelper::FindUsingAdvance<vector<l1extra::L1MuonParticle>,l1extra::L1MuonParticle> >) );
      instance.SetNew(&new_edmcLcLRefVectorlEvectorlEl1extracLcLL1MuonParticlegRcOl1extracLcLL1MuonParticlecOedmcLcLrefhelpercLcLFindUsingAdvancelEvectorlEl1extracLcLL1MuonParticlegRcOl1extracLcLL1MuonParticlegRsPgR);
      instance.SetNewArray(&newArray_edmcLcLRefVectorlEvectorlEl1extracLcLL1MuonParticlegRcOl1extracLcLL1MuonParticlecOedmcLcLrefhelpercLcLFindUsingAdvancelEvectorlEl1extracLcLL1MuonParticlegRcOl1extracLcLL1MuonParticlegRsPgR);
      instance.SetDelete(&delete_edmcLcLRefVectorlEvectorlEl1extracLcLL1MuonParticlegRcOl1extracLcLL1MuonParticlecOedmcLcLrefhelpercLcLFindUsingAdvancelEvectorlEl1extracLcLL1MuonParticlegRcOl1extracLcLL1MuonParticlegRsPgR);
      instance.SetDeleteArray(&deleteArray_edmcLcLRefVectorlEvectorlEl1extracLcLL1MuonParticlegRcOl1extracLcLL1MuonParticlecOedmcLcLrefhelpercLcLFindUsingAdvancelEvectorlEl1extracLcLL1MuonParticlegRcOl1extracLcLL1MuonParticlegRsPgR);
      instance.SetDestructor(&destruct_edmcLcLRefVectorlEvectorlEl1extracLcLL1MuonParticlegRcOl1extracLcLL1MuonParticlecOedmcLcLrefhelpercLcLFindUsingAdvancelEvectorlEl1extracLcLL1MuonParticlegRcOl1extracLcLL1MuonParticlegRsPgR);

      ::ROOT::AddClassAlternate("edm::RefVector<vector<l1extra::L1MuonParticle>,l1extra::L1MuonParticle,edm::refhelper::FindUsingAdvance<vector<l1extra::L1MuonParticle>,l1extra::L1MuonParticle> >","edm::RefVector<std::vector<l1extra::L1MuonParticle>,l1extra::L1MuonParticle,edm::refhelper::FindUsingAdvance<std::vector<l1extra::L1MuonParticle>,l1extra::L1MuonParticle> >");
      return &instance;
   }
   TGenericClassInfo *GenerateInitInstance(const ::edm::RefVector<vector<l1extra::L1MuonParticle>,l1extra::L1MuonParticle,edm::refhelper::FindUsingAdvance<vector<l1extra::L1MuonParticle>,l1extra::L1MuonParticle> >*)
   {
      return GenerateInitInstanceLocal((::edm::RefVector<vector<l1extra::L1MuonParticle>,l1extra::L1MuonParticle,edm::refhelper::FindUsingAdvance<vector<l1extra::L1MuonParticle>,l1extra::L1MuonParticle> >*)0);
   }
   // Static variable to force the class initialization
   static ::ROOT::TGenericClassInfo *_R__UNIQUE_(Init) = GenerateInitInstanceLocal((const ::edm::RefVector<vector<l1extra::L1MuonParticle>,l1extra::L1MuonParticle,edm::refhelper::FindUsingAdvance<vector<l1extra::L1MuonParticle>,l1extra::L1MuonParticle> >*)0x0); R__UseDummy(_R__UNIQUE_(Init));

   // Dictionary for non-ClassDef classes
   static TClass *edmcLcLRefVectorlEvectorlEl1extracLcLL1MuonParticlegRcOl1extracLcLL1MuonParticlecOedmcLcLrefhelpercLcLFindUsingAdvancelEvectorlEl1extracLcLL1MuonParticlegRcOl1extracLcLL1MuonParticlegRsPgR_Dictionary() {
      TClass* theClass =::ROOT::GenerateInitInstanceLocal((const ::edm::RefVector<vector<l1extra::L1MuonParticle>,l1extra::L1MuonParticle,edm::refhelper::FindUsingAdvance<vector<l1extra::L1MuonParticle>,l1extra::L1MuonParticle> >*)0x0)->GetClass();
      edmcLcLRefVectorlEvectorlEl1extracLcLL1MuonParticlegRcOl1extracLcLL1MuonParticlecOedmcLcLrefhelpercLcLFindUsingAdvancelEvectorlEl1extracLcLL1MuonParticlegRcOl1extracLcLL1MuonParticlegRsPgR_TClassManip(theClass);
   return theClass;
   }

   static void edmcLcLRefVectorlEvectorlEl1extracLcLL1MuonParticlegRcOl1extracLcLL1MuonParticlecOedmcLcLrefhelpercLcLFindUsingAdvancelEvectorlEl1extracLcLL1MuonParticlegRcOl1extracLcLL1MuonParticlegRsPgR_TClassManip(TClass* ){
   }

} // end of namespace ROOT

namespace ROOT {
   static TClass *edmcLcLRefVectorlEvectorlEl1extracLcLL1EtMissParticlegRcOl1extracLcLL1EtMissParticlecOedmcLcLrefhelpercLcLFindUsingAdvancelEvectorlEl1extracLcLL1EtMissParticlegRcOl1extracLcLL1EtMissParticlegRsPgR_Dictionary();
   static void edmcLcLRefVectorlEvectorlEl1extracLcLL1EtMissParticlegRcOl1extracLcLL1EtMissParticlecOedmcLcLrefhelpercLcLFindUsingAdvancelEvectorlEl1extracLcLL1EtMissParticlegRcOl1extracLcLL1EtMissParticlegRsPgR_TClassManip(TClass*);
   static void *new_edmcLcLRefVectorlEvectorlEl1extracLcLL1EtMissParticlegRcOl1extracLcLL1EtMissParticlecOedmcLcLrefhelpercLcLFindUsingAdvancelEvectorlEl1extracLcLL1EtMissParticlegRcOl1extracLcLL1EtMissParticlegRsPgR(void *p = 0);
   static void *newArray_edmcLcLRefVectorlEvectorlEl1extracLcLL1EtMissParticlegRcOl1extracLcLL1EtMissParticlecOedmcLcLrefhelpercLcLFindUsingAdvancelEvectorlEl1extracLcLL1EtMissParticlegRcOl1extracLcLL1EtMissParticlegRsPgR(Long_t size, void *p);
   static void delete_edmcLcLRefVectorlEvectorlEl1extracLcLL1EtMissParticlegRcOl1extracLcLL1EtMissParticlecOedmcLcLrefhelpercLcLFindUsingAdvancelEvectorlEl1extracLcLL1EtMissParticlegRcOl1extracLcLL1EtMissParticlegRsPgR(void *p);
   static void deleteArray_edmcLcLRefVectorlEvectorlEl1extracLcLL1EtMissParticlegRcOl1extracLcLL1EtMissParticlecOedmcLcLrefhelpercLcLFindUsingAdvancelEvectorlEl1extracLcLL1EtMissParticlegRcOl1extracLcLL1EtMissParticlegRsPgR(void *p);
   static void destruct_edmcLcLRefVectorlEvectorlEl1extracLcLL1EtMissParticlegRcOl1extracLcLL1EtMissParticlecOedmcLcLrefhelpercLcLFindUsingAdvancelEvectorlEl1extracLcLL1EtMissParticlegRcOl1extracLcLL1EtMissParticlegRsPgR(void *p);

   // Function generating the singleton type initializer
   static TGenericClassInfo *GenerateInitInstanceLocal(const ::edm::RefVector<vector<l1extra::L1EtMissParticle>,l1extra::L1EtMissParticle,edm::refhelper::FindUsingAdvance<vector<l1extra::L1EtMissParticle>,l1extra::L1EtMissParticle> >*)
   {
      ::edm::RefVector<vector<l1extra::L1EtMissParticle>,l1extra::L1EtMissParticle,edm::refhelper::FindUsingAdvance<vector<l1extra::L1EtMissParticle>,l1extra::L1EtMissParticle> > *ptr = 0;
      static ::TVirtualIsAProxy* isa_proxy = new ::TIsAProxy(typeid(::edm::RefVector<vector<l1extra::L1EtMissParticle>,l1extra::L1EtMissParticle,edm::refhelper::FindUsingAdvance<vector<l1extra::L1EtMissParticle>,l1extra::L1EtMissParticle> >));
      static ::ROOT::TGenericClassInfo 
         instance("edm::RefVector<vector<l1extra::L1EtMissParticle>,l1extra::L1EtMissParticle,edm::refhelper::FindUsingAdvance<vector<l1extra::L1EtMissParticle>,l1extra::L1EtMissParticle> >", ::edm::RefVector<vector<l1extra::L1EtMissParticle>,l1extra::L1EtMissParticle,edm::refhelper::FindUsingAdvance<vector<l1extra::L1EtMissParticle>,l1extra::L1EtMissParticle> >::Class_Version(), "DataFormats/Common/interface/RefVector.h", 33,
                  typeid(::edm::RefVector<vector<l1extra::L1EtMissParticle>,l1extra::L1EtMissParticle,edm::refhelper::FindUsingAdvance<vector<l1extra::L1EtMissParticle>,l1extra::L1EtMissParticle> >), ::ROOT::Internal::DefineBehavior(ptr, ptr),
                  &edmcLcLRefVectorlEvectorlEl1extracLcLL1EtMissParticlegRcOl1extracLcLL1EtMissParticlecOedmcLcLrefhelpercLcLFindUsingAdvancelEvectorlEl1extracLcLL1EtMissParticlegRcOl1extracLcLL1EtMissParticlegRsPgR_Dictionary, isa_proxy, 0,
                  sizeof(::edm::RefVector<vector<l1extra::L1EtMissParticle>,l1extra::L1EtMissParticle,edm::refhelper::FindUsingAdvance<vector<l1extra::L1EtMissParticle>,l1extra::L1EtMissParticle> >) );
      instance.SetNew(&new_edmcLcLRefVectorlEvectorlEl1extracLcLL1EtMissParticlegRcOl1extracLcLL1EtMissParticlecOedmcLcLrefhelpercLcLFindUsingAdvancelEvectorlEl1extracLcLL1EtMissParticlegRcOl1extracLcLL1EtMissParticlegRsPgR);
      instance.SetNewArray(&newArray_edmcLcLRefVectorlEvectorlEl1extracLcLL1EtMissParticlegRcOl1extracLcLL1EtMissParticlecOedmcLcLrefhelpercLcLFindUsingAdvancelEvectorlEl1extracLcLL1EtMissParticlegRcOl1extracLcLL1EtMissParticlegRsPgR);
      instance.SetDelete(&delete_edmcLcLRefVectorlEvectorlEl1extracLcLL1EtMissParticlegRcOl1extracLcLL1EtMissParticlecOedmcLcLrefhelpercLcLFindUsingAdvancelEvectorlEl1extracLcLL1EtMissParticlegRcOl1extracLcLL1EtMissParticlegRsPgR);
      instance.SetDeleteArray(&deleteArray_edmcLcLRefVectorlEvectorlEl1extracLcLL1EtMissParticlegRcOl1extracLcLL1EtMissParticlecOedmcLcLrefhelpercLcLFindUsingAdvancelEvectorlEl1extracLcLL1EtMissParticlegRcOl1extracLcLL1EtMissParticlegRsPgR);
      instance.SetDestructor(&destruct_edmcLcLRefVectorlEvectorlEl1extracLcLL1EtMissParticlegRcOl1extracLcLL1EtMissParticlecOedmcLcLrefhelpercLcLFindUsingAdvancelEvectorlEl1extracLcLL1EtMissParticlegRcOl1extracLcLL1EtMissParticlegRsPgR);

      ::ROOT::AddClassAlternate("edm::RefVector<vector<l1extra::L1EtMissParticle>,l1extra::L1EtMissParticle,edm::refhelper::FindUsingAdvance<vector<l1extra::L1EtMissParticle>,l1extra::L1EtMissParticle> >","edm::RefVector<std::vector<l1extra::L1EtMissParticle>,l1extra::L1EtMissParticle,edm::refhelper::FindUsingAdvance<std::vector<l1extra::L1EtMissParticle>,l1extra::L1EtMissParticle> >");
      return &instance;
   }
   TGenericClassInfo *GenerateInitInstance(const ::edm::RefVector<vector<l1extra::L1EtMissParticle>,l1extra::L1EtMissParticle,edm::refhelper::FindUsingAdvance<vector<l1extra::L1EtMissParticle>,l1extra::L1EtMissParticle> >*)
   {
      return GenerateInitInstanceLocal((::edm::RefVector<vector<l1extra::L1EtMissParticle>,l1extra::L1EtMissParticle,edm::refhelper::FindUsingAdvance<vector<l1extra::L1EtMissParticle>,l1extra::L1EtMissParticle> >*)0);
   }
   // Static variable to force the class initialization
   static ::ROOT::TGenericClassInfo *_R__UNIQUE_(Init) = GenerateInitInstanceLocal((const ::edm::RefVector<vector<l1extra::L1EtMissParticle>,l1extra::L1EtMissParticle,edm::refhelper::FindUsingAdvance<vector<l1extra::L1EtMissParticle>,l1extra::L1EtMissParticle> >*)0x0); R__UseDummy(_R__UNIQUE_(Init));

   // Dictionary for non-ClassDef classes
   static TClass *edmcLcLRefVectorlEvectorlEl1extracLcLL1EtMissParticlegRcOl1extracLcLL1EtMissParticlecOedmcLcLrefhelpercLcLFindUsingAdvancelEvectorlEl1extracLcLL1EtMissParticlegRcOl1extracLcLL1EtMissParticlegRsPgR_Dictionary() {
      TClass* theClass =::ROOT::GenerateInitInstanceLocal((const ::edm::RefVector<vector<l1extra::L1EtMissParticle>,l1extra::L1EtMissParticle,edm::refhelper::FindUsingAdvance<vector<l1extra::L1EtMissParticle>,l1extra::L1EtMissParticle> >*)0x0)->GetClass();
      edmcLcLRefVectorlEvectorlEl1extracLcLL1EtMissParticlegRcOl1extracLcLL1EtMissParticlecOedmcLcLrefhelpercLcLFindUsingAdvancelEvectorlEl1extracLcLL1EtMissParticlegRcOl1extracLcLL1EtMissParticlegRsPgR_TClassManip(theClass);
   return theClass;
   }

   static void edmcLcLRefVectorlEvectorlEl1extracLcLL1EtMissParticlegRcOl1extracLcLL1EtMissParticlecOedmcLcLrefhelpercLcLFindUsingAdvancelEvectorlEl1extracLcLL1EtMissParticlegRcOl1extracLcLL1EtMissParticlegRsPgR_TClassManip(TClass* ){
   }

} // end of namespace ROOT

namespace ROOT {
   static TClass *edmcLcLRefVectorlEvectorlEl1extracLcLL1HFRingsgRcOl1extracLcLL1HFRingscOedmcLcLrefhelpercLcLFindUsingAdvancelEvectorlEl1extracLcLL1HFRingsgRcOl1extracLcLL1HFRingsgRsPgR_Dictionary();
   static void edmcLcLRefVectorlEvectorlEl1extracLcLL1HFRingsgRcOl1extracLcLL1HFRingscOedmcLcLrefhelpercLcLFindUsingAdvancelEvectorlEl1extracLcLL1HFRingsgRcOl1extracLcLL1HFRingsgRsPgR_TClassManip(TClass*);
   static void *new_edmcLcLRefVectorlEvectorlEl1extracLcLL1HFRingsgRcOl1extracLcLL1HFRingscOedmcLcLrefhelpercLcLFindUsingAdvancelEvectorlEl1extracLcLL1HFRingsgRcOl1extracLcLL1HFRingsgRsPgR(void *p = 0);
   static void *newArray_edmcLcLRefVectorlEvectorlEl1extracLcLL1HFRingsgRcOl1extracLcLL1HFRingscOedmcLcLrefhelpercLcLFindUsingAdvancelEvectorlEl1extracLcLL1HFRingsgRcOl1extracLcLL1HFRingsgRsPgR(Long_t size, void *p);
   static void delete_edmcLcLRefVectorlEvectorlEl1extracLcLL1HFRingsgRcOl1extracLcLL1HFRingscOedmcLcLrefhelpercLcLFindUsingAdvancelEvectorlEl1extracLcLL1HFRingsgRcOl1extracLcLL1HFRingsgRsPgR(void *p);
   static void deleteArray_edmcLcLRefVectorlEvectorlEl1extracLcLL1HFRingsgRcOl1extracLcLL1HFRingscOedmcLcLrefhelpercLcLFindUsingAdvancelEvectorlEl1extracLcLL1HFRingsgRcOl1extracLcLL1HFRingsgRsPgR(void *p);
   static void destruct_edmcLcLRefVectorlEvectorlEl1extracLcLL1HFRingsgRcOl1extracLcLL1HFRingscOedmcLcLrefhelpercLcLFindUsingAdvancelEvectorlEl1extracLcLL1HFRingsgRcOl1extracLcLL1HFRingsgRsPgR(void *p);

   // Function generating the singleton type initializer
   static TGenericClassInfo *GenerateInitInstanceLocal(const ::edm::RefVector<vector<l1extra::L1HFRings>,l1extra::L1HFRings,edm::refhelper::FindUsingAdvance<vector<l1extra::L1HFRings>,l1extra::L1HFRings> >*)
   {
      ::edm::RefVector<vector<l1extra::L1HFRings>,l1extra::L1HFRings,edm::refhelper::FindUsingAdvance<vector<l1extra::L1HFRings>,l1extra::L1HFRings> > *ptr = 0;
      static ::TVirtualIsAProxy* isa_proxy = new ::TIsAProxy(typeid(::edm::RefVector<vector<l1extra::L1HFRings>,l1extra::L1HFRings,edm::refhelper::FindUsingAdvance<vector<l1extra::L1HFRings>,l1extra::L1HFRings> >));
      static ::ROOT::TGenericClassInfo 
         instance("edm::RefVector<vector<l1extra::L1HFRings>,l1extra::L1HFRings,edm::refhelper::FindUsingAdvance<vector<l1extra::L1HFRings>,l1extra::L1HFRings> >", ::edm::RefVector<vector<l1extra::L1HFRings>,l1extra::L1HFRings,edm::refhelper::FindUsingAdvance<vector<l1extra::L1HFRings>,l1extra::L1HFRings> >::Class_Version(), "DataFormats/Common/interface/RefVector.h", 33,
                  typeid(::edm::RefVector<vector<l1extra::L1HFRings>,l1extra::L1HFRings,edm::refhelper::FindUsingAdvance<vector<l1extra::L1HFRings>,l1extra::L1HFRings> >), ::ROOT::Internal::DefineBehavior(ptr, ptr),
                  &edmcLcLRefVectorlEvectorlEl1extracLcLL1HFRingsgRcOl1extracLcLL1HFRingscOedmcLcLrefhelpercLcLFindUsingAdvancelEvectorlEl1extracLcLL1HFRingsgRcOl1extracLcLL1HFRingsgRsPgR_Dictionary, isa_proxy, 0,
                  sizeof(::edm::RefVector<vector<l1extra::L1HFRings>,l1extra::L1HFRings,edm::refhelper::FindUsingAdvance<vector<l1extra::L1HFRings>,l1extra::L1HFRings> >) );
      instance.SetNew(&new_edmcLcLRefVectorlEvectorlEl1extracLcLL1HFRingsgRcOl1extracLcLL1HFRingscOedmcLcLrefhelpercLcLFindUsingAdvancelEvectorlEl1extracLcLL1HFRingsgRcOl1extracLcLL1HFRingsgRsPgR);
      instance.SetNewArray(&newArray_edmcLcLRefVectorlEvectorlEl1extracLcLL1HFRingsgRcOl1extracLcLL1HFRingscOedmcLcLrefhelpercLcLFindUsingAdvancelEvectorlEl1extracLcLL1HFRingsgRcOl1extracLcLL1HFRingsgRsPgR);
      instance.SetDelete(&delete_edmcLcLRefVectorlEvectorlEl1extracLcLL1HFRingsgRcOl1extracLcLL1HFRingscOedmcLcLrefhelpercLcLFindUsingAdvancelEvectorlEl1extracLcLL1HFRingsgRcOl1extracLcLL1HFRingsgRsPgR);
      instance.SetDeleteArray(&deleteArray_edmcLcLRefVectorlEvectorlEl1extracLcLL1HFRingsgRcOl1extracLcLL1HFRingscOedmcLcLrefhelpercLcLFindUsingAdvancelEvectorlEl1extracLcLL1HFRingsgRcOl1extracLcLL1HFRingsgRsPgR);
      instance.SetDestructor(&destruct_edmcLcLRefVectorlEvectorlEl1extracLcLL1HFRingsgRcOl1extracLcLL1HFRingscOedmcLcLrefhelpercLcLFindUsingAdvancelEvectorlEl1extracLcLL1HFRingsgRcOl1extracLcLL1HFRingsgRsPgR);

      ::ROOT::AddClassAlternate("edm::RefVector<vector<l1extra::L1HFRings>,l1extra::L1HFRings,edm::refhelper::FindUsingAdvance<vector<l1extra::L1HFRings>,l1extra::L1HFRings> >","edm::RefVector<std::vector<l1extra::L1HFRings>,l1extra::L1HFRings,edm::refhelper::FindUsingAdvance<std::vector<l1extra::L1HFRings>,l1extra::L1HFRings> >");
      return &instance;
   }
   TGenericClassInfo *GenerateInitInstance(const ::edm::RefVector<vector<l1extra::L1HFRings>,l1extra::L1HFRings,edm::refhelper::FindUsingAdvance<vector<l1extra::L1HFRings>,l1extra::L1HFRings> >*)
   {
      return GenerateInitInstanceLocal((::edm::RefVector<vector<l1extra::L1HFRings>,l1extra::L1HFRings,edm::refhelper::FindUsingAdvance<vector<l1extra::L1HFRings>,l1extra::L1HFRings> >*)0);
   }
   // Static variable to force the class initialization
   static ::ROOT::TGenericClassInfo *_R__UNIQUE_(Init) = GenerateInitInstanceLocal((const ::edm::RefVector<vector<l1extra::L1HFRings>,l1extra::L1HFRings,edm::refhelper::FindUsingAdvance<vector<l1extra::L1HFRings>,l1extra::L1HFRings> >*)0x0); R__UseDummy(_R__UNIQUE_(Init));

   // Dictionary for non-ClassDef classes
   static TClass *edmcLcLRefVectorlEvectorlEl1extracLcLL1HFRingsgRcOl1extracLcLL1HFRingscOedmcLcLrefhelpercLcLFindUsingAdvancelEvectorlEl1extracLcLL1HFRingsgRcOl1extracLcLL1HFRingsgRsPgR_Dictionary() {
      TClass* theClass =::ROOT::GenerateInitInstanceLocal((const ::edm::RefVector<vector<l1extra::L1HFRings>,l1extra::L1HFRings,edm::refhelper::FindUsingAdvance<vector<l1extra::L1HFRings>,l1extra::L1HFRings> >*)0x0)->GetClass();
      edmcLcLRefVectorlEvectorlEl1extracLcLL1HFRingsgRcOl1extracLcLL1HFRingscOedmcLcLrefhelpercLcLFindUsingAdvancelEvectorlEl1extracLcLL1HFRingsgRcOl1extracLcLL1HFRingsgRsPgR_TClassManip(theClass);
   return theClass;
   }

   static void edmcLcLRefVectorlEvectorlEl1extracLcLL1HFRingsgRcOl1extracLcLL1HFRingscOedmcLcLrefhelpercLcLFindUsingAdvancelEvectorlEl1extracLcLL1HFRingsgRcOl1extracLcLL1HFRingsgRsPgR_TClassManip(TClass* ){
   }

} // end of namespace ROOT

namespace ROOT {
   static TClass *edmcLcLRefProdlEl1extracLcLL1EtMissParticlegR_Dictionary();
   static void edmcLcLRefProdlEl1extracLcLL1EtMissParticlegR_TClassManip(TClass*);
   static void *new_edmcLcLRefProdlEl1extracLcLL1EtMissParticlegR(void *p = 0);
   static void *newArray_edmcLcLRefProdlEl1extracLcLL1EtMissParticlegR(Long_t size, void *p);
   static void delete_edmcLcLRefProdlEl1extracLcLL1EtMissParticlegR(void *p);
   static void deleteArray_edmcLcLRefProdlEl1extracLcLL1EtMissParticlegR(void *p);
   static void destruct_edmcLcLRefProdlEl1extracLcLL1EtMissParticlegR(void *p);

   // Function generating the singleton type initializer
   static TGenericClassInfo *GenerateInitInstanceLocal(const ::edm::RefProd<l1extra::L1EtMissParticle>*)
   {
      ::edm::RefProd<l1extra::L1EtMissParticle> *ptr = 0;
      static ::TVirtualIsAProxy* isa_proxy = new ::TIsAProxy(typeid(::edm::RefProd<l1extra::L1EtMissParticle>));
      static ::ROOT::TGenericClassInfo 
         instance("edm::RefProd<l1extra::L1EtMissParticle>", ::edm::RefProd<l1extra::L1EtMissParticle>::Class_Version(), "DataFormats/Common/interface/RefProd.h", 55,
                  typeid(::edm::RefProd<l1extra::L1EtMissParticle>), ::ROOT::Internal::DefineBehavior(ptr, ptr),
                  &edmcLcLRefProdlEl1extracLcLL1EtMissParticlegR_Dictionary, isa_proxy, 0,
                  sizeof(::edm::RefProd<l1extra::L1EtMissParticle>) );
      instance.SetNew(&new_edmcLcLRefProdlEl1extracLcLL1EtMissParticlegR);
      instance.SetNewArray(&newArray_edmcLcLRefProdlEl1extracLcLL1EtMissParticlegR);
      instance.SetDelete(&delete_edmcLcLRefProdlEl1extracLcLL1EtMissParticlegR);
      instance.SetDeleteArray(&deleteArray_edmcLcLRefProdlEl1extracLcLL1EtMissParticlegR);
      instance.SetDestructor(&destruct_edmcLcLRefProdlEl1extracLcLL1EtMissParticlegR);
      return &instance;
   }
   TGenericClassInfo *GenerateInitInstance(const ::edm::RefProd<l1extra::L1EtMissParticle>*)
   {
      return GenerateInitInstanceLocal((::edm::RefProd<l1extra::L1EtMissParticle>*)0);
   }
   // Static variable to force the class initialization
   static ::ROOT::TGenericClassInfo *_R__UNIQUE_(Init) = GenerateInitInstanceLocal((const ::edm::RefProd<l1extra::L1EtMissParticle>*)0x0); R__UseDummy(_R__UNIQUE_(Init));

   // Dictionary for non-ClassDef classes
   static TClass *edmcLcLRefProdlEl1extracLcLL1EtMissParticlegR_Dictionary() {
      TClass* theClass =::ROOT::GenerateInitInstanceLocal((const ::edm::RefProd<l1extra::L1EtMissParticle>*)0x0)->GetClass();
      edmcLcLRefProdlEl1extracLcLL1EtMissParticlegR_TClassManip(theClass);
   return theClass;
   }

   static void edmcLcLRefProdlEl1extracLcLL1EtMissParticlegR_TClassManip(TClass* ){
   }

} // end of namespace ROOT

namespace ROOT {
   static TClass *edmcLcLreftobasecLcLHolderlErecocLcLCandidatecOedmcLcLReflEvectorlEl1extracLcLL1EmParticlegRcOl1extracLcLL1EmParticlecOedmcLcLrefhelpercLcLFindUsingAdvancelEvectorlEl1extracLcLL1EmParticlegRcOl1extracLcLL1EmParticlegRsPgRsPgR_Dictionary();
   static void edmcLcLreftobasecLcLHolderlErecocLcLCandidatecOedmcLcLReflEvectorlEl1extracLcLL1EmParticlegRcOl1extracLcLL1EmParticlecOedmcLcLrefhelpercLcLFindUsingAdvancelEvectorlEl1extracLcLL1EmParticlegRcOl1extracLcLL1EmParticlegRsPgRsPgR_TClassManip(TClass*);
   static void *new_edmcLcLreftobasecLcLHolderlErecocLcLCandidatecOedmcLcLReflEvectorlEl1extracLcLL1EmParticlegRcOl1extracLcLL1EmParticlecOedmcLcLrefhelpercLcLFindUsingAdvancelEvectorlEl1extracLcLL1EmParticlegRcOl1extracLcLL1EmParticlegRsPgRsPgR(void *p = 0);
   static void *newArray_edmcLcLreftobasecLcLHolderlErecocLcLCandidatecOedmcLcLReflEvectorlEl1extracLcLL1EmParticlegRcOl1extracLcLL1EmParticlecOedmcLcLrefhelpercLcLFindUsingAdvancelEvectorlEl1extracLcLL1EmParticlegRcOl1extracLcLL1EmParticlegRsPgRsPgR(Long_t size, void *p);
   static void delete_edmcLcLreftobasecLcLHolderlErecocLcLCandidatecOedmcLcLReflEvectorlEl1extracLcLL1EmParticlegRcOl1extracLcLL1EmParticlecOedmcLcLrefhelpercLcLFindUsingAdvancelEvectorlEl1extracLcLL1EmParticlegRcOl1extracLcLL1EmParticlegRsPgRsPgR(void *p);
   static void deleteArray_edmcLcLreftobasecLcLHolderlErecocLcLCandidatecOedmcLcLReflEvectorlEl1extracLcLL1EmParticlegRcOl1extracLcLL1EmParticlecOedmcLcLrefhelpercLcLFindUsingAdvancelEvectorlEl1extracLcLL1EmParticlegRcOl1extracLcLL1EmParticlegRsPgRsPgR(void *p);
   static void destruct_edmcLcLreftobasecLcLHolderlErecocLcLCandidatecOedmcLcLReflEvectorlEl1extracLcLL1EmParticlegRcOl1extracLcLL1EmParticlecOedmcLcLrefhelpercLcLFindUsingAdvancelEvectorlEl1extracLcLL1EmParticlegRcOl1extracLcLL1EmParticlegRsPgRsPgR(void *p);

   // Function generating the singleton type initializer
   static TGenericClassInfo *GenerateInitInstanceLocal(const ::edm::reftobase::Holder<reco::Candidate,edm::Ref<vector<l1extra::L1EmParticle>,l1extra::L1EmParticle,edm::refhelper::FindUsingAdvance<vector<l1extra::L1EmParticle>,l1extra::L1EmParticle> > >*)
   {
      ::edm::reftobase::Holder<reco::Candidate,edm::Ref<vector<l1extra::L1EmParticle>,l1extra::L1EmParticle,edm::refhelper::FindUsingAdvance<vector<l1extra::L1EmParticle>,l1extra::L1EmParticle> > > *ptr = 0;
      static ::TVirtualIsAProxy* isa_proxy = new ::TIsAProxy(typeid(::edm::reftobase::Holder<reco::Candidate,edm::Ref<vector<l1extra::L1EmParticle>,l1extra::L1EmParticle,edm::refhelper::FindUsingAdvance<vector<l1extra::L1EmParticle>,l1extra::L1EmParticle> > >));
      static ::ROOT::TGenericClassInfo 
         instance("edm::reftobase::Holder<reco::Candidate,edm::Ref<vector<l1extra::L1EmParticle>,l1extra::L1EmParticle,edm::refhelper::FindUsingAdvance<vector<l1extra::L1EmParticle>,l1extra::L1EmParticle> > >", ::edm::reftobase::Holder<reco::Candidate,edm::Ref<vector<l1extra::L1EmParticle>,l1extra::L1EmParticle,edm::refhelper::FindUsingAdvance<vector<l1extra::L1EmParticle>,l1extra::L1EmParticle> > >::Class_Version(), "DataFormats/Common/interface/Holder.h", 17,
                  typeid(::edm::reftobase::Holder<reco::Candidate,edm::Ref<vector<l1extra::L1EmParticle>,l1extra::L1EmParticle,edm::refhelper::FindUsingAdvance<vector<l1extra::L1EmParticle>,l1extra::L1EmParticle> > >), ::ROOT::Internal::DefineBehavior(ptr, ptr),
                  &edmcLcLreftobasecLcLHolderlErecocLcLCandidatecOedmcLcLReflEvectorlEl1extracLcLL1EmParticlegRcOl1extracLcLL1EmParticlecOedmcLcLrefhelpercLcLFindUsingAdvancelEvectorlEl1extracLcLL1EmParticlegRcOl1extracLcLL1EmParticlegRsPgRsPgR_Dictionary, isa_proxy, 0,
                  sizeof(::edm::reftobase::Holder<reco::Candidate,edm::Ref<vector<l1extra::L1EmParticle>,l1extra::L1EmParticle,edm::refhelper::FindUsingAdvance<vector<l1extra::L1EmParticle>,l1extra::L1EmParticle> > >) );
      instance.SetNew(&new_edmcLcLreftobasecLcLHolderlErecocLcLCandidatecOedmcLcLReflEvectorlEl1extracLcLL1EmParticlegRcOl1extracLcLL1EmParticlecOedmcLcLrefhelpercLcLFindUsingAdvancelEvectorlEl1extracLcLL1EmParticlegRcOl1extracLcLL1EmParticlegRsPgRsPgR);
      instance.SetNewArray(&newArray_edmcLcLreftobasecLcLHolderlErecocLcLCandidatecOedmcLcLReflEvectorlEl1extracLcLL1EmParticlegRcOl1extracLcLL1EmParticlecOedmcLcLrefhelpercLcLFindUsingAdvancelEvectorlEl1extracLcLL1EmParticlegRcOl1extracLcLL1EmParticlegRsPgRsPgR);
      instance.SetDelete(&delete_edmcLcLreftobasecLcLHolderlErecocLcLCandidatecOedmcLcLReflEvectorlEl1extracLcLL1EmParticlegRcOl1extracLcLL1EmParticlecOedmcLcLrefhelpercLcLFindUsingAdvancelEvectorlEl1extracLcLL1EmParticlegRcOl1extracLcLL1EmParticlegRsPgRsPgR);
      instance.SetDeleteArray(&deleteArray_edmcLcLreftobasecLcLHolderlErecocLcLCandidatecOedmcLcLReflEvectorlEl1extracLcLL1EmParticlegRcOl1extracLcLL1EmParticlecOedmcLcLrefhelpercLcLFindUsingAdvancelEvectorlEl1extracLcLL1EmParticlegRcOl1extracLcLL1EmParticlegRsPgRsPgR);
      instance.SetDestructor(&destruct_edmcLcLreftobasecLcLHolderlErecocLcLCandidatecOedmcLcLReflEvectorlEl1extracLcLL1EmParticlegRcOl1extracLcLL1EmParticlecOedmcLcLrefhelpercLcLFindUsingAdvancelEvectorlEl1extracLcLL1EmParticlegRcOl1extracLcLL1EmParticlegRsPgRsPgR);

      ::ROOT::AddClassAlternate("edm::reftobase::Holder<reco::Candidate,edm::Ref<vector<l1extra::L1EmParticle>,l1extra::L1EmParticle,edm::refhelper::FindUsingAdvance<vector<l1extra::L1EmParticle>,l1extra::L1EmParticle> > >","edm::reftobase::Holder<reco::Candidate,edm::Ref<std::vector<l1extra::L1EmParticle>,l1extra::L1EmParticle,edm::refhelper::FindUsingAdvance<std::vector<l1extra::L1EmParticle>,l1extra::L1EmParticle> > >");
      return &instance;
   }
   TGenericClassInfo *GenerateInitInstance(const ::edm::reftobase::Holder<reco::Candidate,edm::Ref<vector<l1extra::L1EmParticle>,l1extra::L1EmParticle,edm::refhelper::FindUsingAdvance<vector<l1extra::L1EmParticle>,l1extra::L1EmParticle> > >*)
   {
      return GenerateInitInstanceLocal((::edm::reftobase::Holder<reco::Candidate,edm::Ref<vector<l1extra::L1EmParticle>,l1extra::L1EmParticle,edm::refhelper::FindUsingAdvance<vector<l1extra::L1EmParticle>,l1extra::L1EmParticle> > >*)0);
   }
   // Static variable to force the class initialization
   static ::ROOT::TGenericClassInfo *_R__UNIQUE_(Init) = GenerateInitInstanceLocal((const ::edm::reftobase::Holder<reco::Candidate,edm::Ref<vector<l1extra::L1EmParticle>,l1extra::L1EmParticle,edm::refhelper::FindUsingAdvance<vector<l1extra::L1EmParticle>,l1extra::L1EmParticle> > >*)0x0); R__UseDummy(_R__UNIQUE_(Init));

   // Dictionary for non-ClassDef classes
   static TClass *edmcLcLreftobasecLcLHolderlErecocLcLCandidatecOedmcLcLReflEvectorlEl1extracLcLL1EmParticlegRcOl1extracLcLL1EmParticlecOedmcLcLrefhelpercLcLFindUsingAdvancelEvectorlEl1extracLcLL1EmParticlegRcOl1extracLcLL1EmParticlegRsPgRsPgR_Dictionary() {
      TClass* theClass =::ROOT::GenerateInitInstanceLocal((const ::edm::reftobase::Holder<reco::Candidate,edm::Ref<vector<l1extra::L1EmParticle>,l1extra::L1EmParticle,edm::refhelper::FindUsingAdvance<vector<l1extra::L1EmParticle>,l1extra::L1EmParticle> > >*)0x0)->GetClass();
      edmcLcLreftobasecLcLHolderlErecocLcLCandidatecOedmcLcLReflEvectorlEl1extracLcLL1EmParticlegRcOl1extracLcLL1EmParticlecOedmcLcLrefhelpercLcLFindUsingAdvancelEvectorlEl1extracLcLL1EmParticlegRcOl1extracLcLL1EmParticlegRsPgRsPgR_TClassManip(theClass);
   return theClass;
   }

   static void edmcLcLreftobasecLcLHolderlErecocLcLCandidatecOedmcLcLReflEvectorlEl1extracLcLL1EmParticlegRcOl1extracLcLL1EmParticlecOedmcLcLrefhelpercLcLFindUsingAdvancelEvectorlEl1extracLcLL1EmParticlegRcOl1extracLcLL1EmParticlegRsPgRsPgR_TClassManip(TClass* ){
   }

} // end of namespace ROOT

namespace ROOT {
   static TClass *edmcLcLreftobasecLcLHolderlErecocLcLCandidatecOedmcLcLReflEvectorlEl1extracLcLL1MuonParticlegRcOl1extracLcLL1MuonParticlecOedmcLcLrefhelpercLcLFindUsingAdvancelEvectorlEl1extracLcLL1MuonParticlegRcOl1extracLcLL1MuonParticlegRsPgRsPgR_Dictionary();
   static void edmcLcLreftobasecLcLHolderlErecocLcLCandidatecOedmcLcLReflEvectorlEl1extracLcLL1MuonParticlegRcOl1extracLcLL1MuonParticlecOedmcLcLrefhelpercLcLFindUsingAdvancelEvectorlEl1extracLcLL1MuonParticlegRcOl1extracLcLL1MuonParticlegRsPgRsPgR_TClassManip(TClass*);
   static void *new_edmcLcLreftobasecLcLHolderlErecocLcLCandidatecOedmcLcLReflEvectorlEl1extracLcLL1MuonParticlegRcOl1extracLcLL1MuonParticlecOedmcLcLrefhelpercLcLFindUsingAdvancelEvectorlEl1extracLcLL1MuonParticlegRcOl1extracLcLL1MuonParticlegRsPgRsPgR(void *p = 0);
   static void *newArray_edmcLcLreftobasecLcLHolderlErecocLcLCandidatecOedmcLcLReflEvectorlEl1extracLcLL1MuonParticlegRcOl1extracLcLL1MuonParticlecOedmcLcLrefhelpercLcLFindUsingAdvancelEvectorlEl1extracLcLL1MuonParticlegRcOl1extracLcLL1MuonParticlegRsPgRsPgR(Long_t size, void *p);
   static void delete_edmcLcLreftobasecLcLHolderlErecocLcLCandidatecOedmcLcLReflEvectorlEl1extracLcLL1MuonParticlegRcOl1extracLcLL1MuonParticlecOedmcLcLrefhelpercLcLFindUsingAdvancelEvectorlEl1extracLcLL1MuonParticlegRcOl1extracLcLL1MuonParticlegRsPgRsPgR(void *p);
   static void deleteArray_edmcLcLreftobasecLcLHolderlErecocLcLCandidatecOedmcLcLReflEvectorlEl1extracLcLL1MuonParticlegRcOl1extracLcLL1MuonParticlecOedmcLcLrefhelpercLcLFindUsingAdvancelEvectorlEl1extracLcLL1MuonParticlegRcOl1extracLcLL1MuonParticlegRsPgRsPgR(void *p);
   static void destruct_edmcLcLreftobasecLcLHolderlErecocLcLCandidatecOedmcLcLReflEvectorlEl1extracLcLL1MuonParticlegRcOl1extracLcLL1MuonParticlecOedmcLcLrefhelpercLcLFindUsingAdvancelEvectorlEl1extracLcLL1MuonParticlegRcOl1extracLcLL1MuonParticlegRsPgRsPgR(void *p);

   // Function generating the singleton type initializer
   static TGenericClassInfo *GenerateInitInstanceLocal(const ::edm::reftobase::Holder<reco::Candidate,edm::Ref<vector<l1extra::L1MuonParticle>,l1extra::L1MuonParticle,edm::refhelper::FindUsingAdvance<vector<l1extra::L1MuonParticle>,l1extra::L1MuonParticle> > >*)
   {
      ::edm::reftobase::Holder<reco::Candidate,edm::Ref<vector<l1extra::L1MuonParticle>,l1extra::L1MuonParticle,edm::refhelper::FindUsingAdvance<vector<l1extra::L1MuonParticle>,l1extra::L1MuonParticle> > > *ptr = 0;
      static ::TVirtualIsAProxy* isa_proxy = new ::TIsAProxy(typeid(::edm::reftobase::Holder<reco::Candidate,edm::Ref<vector<l1extra::L1MuonParticle>,l1extra::L1MuonParticle,edm::refhelper::FindUsingAdvance<vector<l1extra::L1MuonParticle>,l1extra::L1MuonParticle> > >));
      static ::ROOT::TGenericClassInfo 
         instance("edm::reftobase::Holder<reco::Candidate,edm::Ref<vector<l1extra::L1MuonParticle>,l1extra::L1MuonParticle,edm::refhelper::FindUsingAdvance<vector<l1extra::L1MuonParticle>,l1extra::L1MuonParticle> > >", ::edm::reftobase::Holder<reco::Candidate,edm::Ref<vector<l1extra::L1MuonParticle>,l1extra::L1MuonParticle,edm::refhelper::FindUsingAdvance<vector<l1extra::L1MuonParticle>,l1extra::L1MuonParticle> > >::Class_Version(), "DataFormats/Common/interface/Holder.h", 17,
                  typeid(::edm::reftobase::Holder<reco::Candidate,edm::Ref<vector<l1extra::L1MuonParticle>,l1extra::L1MuonParticle,edm::refhelper::FindUsingAdvance<vector<l1extra::L1MuonParticle>,l1extra::L1MuonParticle> > >), ::ROOT::Internal::DefineBehavior(ptr, ptr),
                  &edmcLcLreftobasecLcLHolderlErecocLcLCandidatecOedmcLcLReflEvectorlEl1extracLcLL1MuonParticlegRcOl1extracLcLL1MuonParticlecOedmcLcLrefhelpercLcLFindUsingAdvancelEvectorlEl1extracLcLL1MuonParticlegRcOl1extracLcLL1MuonParticlegRsPgRsPgR_Dictionary, isa_proxy, 0,
                  sizeof(::edm::reftobase::Holder<reco::Candidate,edm::Ref<vector<l1extra::L1MuonParticle>,l1extra::L1MuonParticle,edm::refhelper::FindUsingAdvance<vector<l1extra::L1MuonParticle>,l1extra::L1MuonParticle> > >) );
      instance.SetNew(&new_edmcLcLreftobasecLcLHolderlErecocLcLCandidatecOedmcLcLReflEvectorlEl1extracLcLL1MuonParticlegRcOl1extracLcLL1MuonParticlecOedmcLcLrefhelpercLcLFindUsingAdvancelEvectorlEl1extracLcLL1MuonParticlegRcOl1extracLcLL1MuonParticlegRsPgRsPgR);
      instance.SetNewArray(&newArray_edmcLcLreftobasecLcLHolderlErecocLcLCandidatecOedmcLcLReflEvectorlEl1extracLcLL1MuonParticlegRcOl1extracLcLL1MuonParticlecOedmcLcLrefhelpercLcLFindUsingAdvancelEvectorlEl1extracLcLL1MuonParticlegRcOl1extracLcLL1MuonParticlegRsPgRsPgR);
      instance.SetDelete(&delete_edmcLcLreftobasecLcLHolderlErecocLcLCandidatecOedmcLcLReflEvectorlEl1extracLcLL1MuonParticlegRcOl1extracLcLL1MuonParticlecOedmcLcLrefhelpercLcLFindUsingAdvancelEvectorlEl1extracLcLL1MuonParticlegRcOl1extracLcLL1MuonParticlegRsPgRsPgR);
      instance.SetDeleteArray(&deleteArray_edmcLcLreftobasecLcLHolderlErecocLcLCandidatecOedmcLcLReflEvectorlEl1extracLcLL1MuonParticlegRcOl1extracLcLL1MuonParticlecOedmcLcLrefhelpercLcLFindUsingAdvancelEvectorlEl1extracLcLL1MuonParticlegRcOl1extracLcLL1MuonParticlegRsPgRsPgR);
      instance.SetDestructor(&destruct_edmcLcLreftobasecLcLHolderlErecocLcLCandidatecOedmcLcLReflEvectorlEl1extracLcLL1MuonParticlegRcOl1extracLcLL1MuonParticlecOedmcLcLrefhelpercLcLFindUsingAdvancelEvectorlEl1extracLcLL1MuonParticlegRcOl1extracLcLL1MuonParticlegRsPgRsPgR);

      ::ROOT::AddClassAlternate("edm::reftobase::Holder<reco::Candidate,edm::Ref<vector<l1extra::L1MuonParticle>,l1extra::L1MuonParticle,edm::refhelper::FindUsingAdvance<vector<l1extra::L1MuonParticle>,l1extra::L1MuonParticle> > >","edm::reftobase::Holder<reco::Candidate,edm::Ref<std::vector<l1extra::L1MuonParticle>,l1extra::L1MuonParticle,edm::refhelper::FindUsingAdvance<std::vector<l1extra::L1MuonParticle>,l1extra::L1MuonParticle> > >");
      return &instance;
   }
   TGenericClassInfo *GenerateInitInstance(const ::edm::reftobase::Holder<reco::Candidate,edm::Ref<vector<l1extra::L1MuonParticle>,l1extra::L1MuonParticle,edm::refhelper::FindUsingAdvance<vector<l1extra::L1MuonParticle>,l1extra::L1MuonParticle> > >*)
   {
      return GenerateInitInstanceLocal((::edm::reftobase::Holder<reco::Candidate,edm::Ref<vector<l1extra::L1MuonParticle>,l1extra::L1MuonParticle,edm::refhelper::FindUsingAdvance<vector<l1extra::L1MuonParticle>,l1extra::L1MuonParticle> > >*)0);
   }
   // Static variable to force the class initialization
   static ::ROOT::TGenericClassInfo *_R__UNIQUE_(Init) = GenerateInitInstanceLocal((const ::edm::reftobase::Holder<reco::Candidate,edm::Ref<vector<l1extra::L1MuonParticle>,l1extra::L1MuonParticle,edm::refhelper::FindUsingAdvance<vector<l1extra::L1MuonParticle>,l1extra::L1MuonParticle> > >*)0x0); R__UseDummy(_R__UNIQUE_(Init));

   // Dictionary for non-ClassDef classes
   static TClass *edmcLcLreftobasecLcLHolderlErecocLcLCandidatecOedmcLcLReflEvectorlEl1extracLcLL1MuonParticlegRcOl1extracLcLL1MuonParticlecOedmcLcLrefhelpercLcLFindUsingAdvancelEvectorlEl1extracLcLL1MuonParticlegRcOl1extracLcLL1MuonParticlegRsPgRsPgR_Dictionary() {
      TClass* theClass =::ROOT::GenerateInitInstanceLocal((const ::edm::reftobase::Holder<reco::Candidate,edm::Ref<vector<l1extra::L1MuonParticle>,l1extra::L1MuonParticle,edm::refhelper::FindUsingAdvance<vector<l1extra::L1MuonParticle>,l1extra::L1MuonParticle> > >*)0x0)->GetClass();
      edmcLcLreftobasecLcLHolderlErecocLcLCandidatecOedmcLcLReflEvectorlEl1extracLcLL1MuonParticlegRcOl1extracLcLL1MuonParticlecOedmcLcLrefhelpercLcLFindUsingAdvancelEvectorlEl1extracLcLL1MuonParticlegRcOl1extracLcLL1MuonParticlegRsPgRsPgR_TClassManip(theClass);
   return theClass;
   }

   static void edmcLcLreftobasecLcLHolderlErecocLcLCandidatecOedmcLcLReflEvectorlEl1extracLcLL1MuonParticlegRcOl1extracLcLL1MuonParticlecOedmcLcLrefhelpercLcLFindUsingAdvancelEvectorlEl1extracLcLL1MuonParticlegRcOl1extracLcLL1MuonParticlegRsPgRsPgR_TClassManip(TClass* ){
   }

} // end of namespace ROOT

namespace ROOT {
   static TClass *edmcLcLreftobasecLcLHolderlErecocLcLCandidatecOedmcLcLReflEvectorlEl1extracLcLL1JetParticlegRcOl1extracLcLL1JetParticlecOedmcLcLrefhelpercLcLFindUsingAdvancelEvectorlEl1extracLcLL1JetParticlegRcOl1extracLcLL1JetParticlegRsPgRsPgR_Dictionary();
   static void edmcLcLreftobasecLcLHolderlErecocLcLCandidatecOedmcLcLReflEvectorlEl1extracLcLL1JetParticlegRcOl1extracLcLL1JetParticlecOedmcLcLrefhelpercLcLFindUsingAdvancelEvectorlEl1extracLcLL1JetParticlegRcOl1extracLcLL1JetParticlegRsPgRsPgR_TClassManip(TClass*);
   static void *new_edmcLcLreftobasecLcLHolderlErecocLcLCandidatecOedmcLcLReflEvectorlEl1extracLcLL1JetParticlegRcOl1extracLcLL1JetParticlecOedmcLcLrefhelpercLcLFindUsingAdvancelEvectorlEl1extracLcLL1JetParticlegRcOl1extracLcLL1JetParticlegRsPgRsPgR(void *p = 0);
   static void *newArray_edmcLcLreftobasecLcLHolderlErecocLcLCandidatecOedmcLcLReflEvectorlEl1extracLcLL1JetParticlegRcOl1extracLcLL1JetParticlecOedmcLcLrefhelpercLcLFindUsingAdvancelEvectorlEl1extracLcLL1JetParticlegRcOl1extracLcLL1JetParticlegRsPgRsPgR(Long_t size, void *p);
   static void delete_edmcLcLreftobasecLcLHolderlErecocLcLCandidatecOedmcLcLReflEvectorlEl1extracLcLL1JetParticlegRcOl1extracLcLL1JetParticlecOedmcLcLrefhelpercLcLFindUsingAdvancelEvectorlEl1extracLcLL1JetParticlegRcOl1extracLcLL1JetParticlegRsPgRsPgR(void *p);
   static void deleteArray_edmcLcLreftobasecLcLHolderlErecocLcLCandidatecOedmcLcLReflEvectorlEl1extracLcLL1JetParticlegRcOl1extracLcLL1JetParticlecOedmcLcLrefhelpercLcLFindUsingAdvancelEvectorlEl1extracLcLL1JetParticlegRcOl1extracLcLL1JetParticlegRsPgRsPgR(void *p);
   static void destruct_edmcLcLreftobasecLcLHolderlErecocLcLCandidatecOedmcLcLReflEvectorlEl1extracLcLL1JetParticlegRcOl1extracLcLL1JetParticlecOedmcLcLrefhelpercLcLFindUsingAdvancelEvectorlEl1extracLcLL1JetParticlegRcOl1extracLcLL1JetParticlegRsPgRsPgR(void *p);

   // Function generating the singleton type initializer
   static TGenericClassInfo *GenerateInitInstanceLocal(const ::edm::reftobase::Holder<reco::Candidate,edm::Ref<vector<l1extra::L1JetParticle>,l1extra::L1JetParticle,edm::refhelper::FindUsingAdvance<vector<l1extra::L1JetParticle>,l1extra::L1JetParticle> > >*)
   {
      ::edm::reftobase::Holder<reco::Candidate,edm::Ref<vector<l1extra::L1JetParticle>,l1extra::L1JetParticle,edm::refhelper::FindUsingAdvance<vector<l1extra::L1JetParticle>,l1extra::L1JetParticle> > > *ptr = 0;
      static ::TVirtualIsAProxy* isa_proxy = new ::TIsAProxy(typeid(::edm::reftobase::Holder<reco::Candidate,edm::Ref<vector<l1extra::L1JetParticle>,l1extra::L1JetParticle,edm::refhelper::FindUsingAdvance<vector<l1extra::L1JetParticle>,l1extra::L1JetParticle> > >));
      static ::ROOT::TGenericClassInfo 
         instance("edm::reftobase::Holder<reco::Candidate,edm::Ref<vector<l1extra::L1JetParticle>,l1extra::L1JetParticle,edm::refhelper::FindUsingAdvance<vector<l1extra::L1JetParticle>,l1extra::L1JetParticle> > >", ::edm::reftobase::Holder<reco::Candidate,edm::Ref<vector<l1extra::L1JetParticle>,l1extra::L1JetParticle,edm::refhelper::FindUsingAdvance<vector<l1extra::L1JetParticle>,l1extra::L1JetParticle> > >::Class_Version(), "DataFormats/Common/interface/Holder.h", 17,
                  typeid(::edm::reftobase::Holder<reco::Candidate,edm::Ref<vector<l1extra::L1JetParticle>,l1extra::L1JetParticle,edm::refhelper::FindUsingAdvance<vector<l1extra::L1JetParticle>,l1extra::L1JetParticle> > >), ::ROOT::Internal::DefineBehavior(ptr, ptr),
                  &edmcLcLreftobasecLcLHolderlErecocLcLCandidatecOedmcLcLReflEvectorlEl1extracLcLL1JetParticlegRcOl1extracLcLL1JetParticlecOedmcLcLrefhelpercLcLFindUsingAdvancelEvectorlEl1extracLcLL1JetParticlegRcOl1extracLcLL1JetParticlegRsPgRsPgR_Dictionary, isa_proxy, 0,
                  sizeof(::edm::reftobase::Holder<reco::Candidate,edm::Ref<vector<l1extra::L1JetParticle>,l1extra::L1JetParticle,edm::refhelper::FindUsingAdvance<vector<l1extra::L1JetParticle>,l1extra::L1JetParticle> > >) );
      instance.SetNew(&new_edmcLcLreftobasecLcLHolderlErecocLcLCandidatecOedmcLcLReflEvectorlEl1extracLcLL1JetParticlegRcOl1extracLcLL1JetParticlecOedmcLcLrefhelpercLcLFindUsingAdvancelEvectorlEl1extracLcLL1JetParticlegRcOl1extracLcLL1JetParticlegRsPgRsPgR);
      instance.SetNewArray(&newArray_edmcLcLreftobasecLcLHolderlErecocLcLCandidatecOedmcLcLReflEvectorlEl1extracLcLL1JetParticlegRcOl1extracLcLL1JetParticlecOedmcLcLrefhelpercLcLFindUsingAdvancelEvectorlEl1extracLcLL1JetParticlegRcOl1extracLcLL1JetParticlegRsPgRsPgR);
      instance.SetDelete(&delete_edmcLcLreftobasecLcLHolderlErecocLcLCandidatecOedmcLcLReflEvectorlEl1extracLcLL1JetParticlegRcOl1extracLcLL1JetParticlecOedmcLcLrefhelpercLcLFindUsingAdvancelEvectorlEl1extracLcLL1JetParticlegRcOl1extracLcLL1JetParticlegRsPgRsPgR);
      instance.SetDeleteArray(&deleteArray_edmcLcLreftobasecLcLHolderlErecocLcLCandidatecOedmcLcLReflEvectorlEl1extracLcLL1JetParticlegRcOl1extracLcLL1JetParticlecOedmcLcLrefhelpercLcLFindUsingAdvancelEvectorlEl1extracLcLL1JetParticlegRcOl1extracLcLL1JetParticlegRsPgRsPgR);
      instance.SetDestructor(&destruct_edmcLcLreftobasecLcLHolderlErecocLcLCandidatecOedmcLcLReflEvectorlEl1extracLcLL1JetParticlegRcOl1extracLcLL1JetParticlecOedmcLcLrefhelpercLcLFindUsingAdvancelEvectorlEl1extracLcLL1JetParticlegRcOl1extracLcLL1JetParticlegRsPgRsPgR);

      ::ROOT::AddClassAlternate("edm::reftobase::Holder<reco::Candidate,edm::Ref<vector<l1extra::L1JetParticle>,l1extra::L1JetParticle,edm::refhelper::FindUsingAdvance<vector<l1extra::L1JetParticle>,l1extra::L1JetParticle> > >","edm::reftobase::Holder<reco::Candidate,edm::Ref<std::vector<l1extra::L1JetParticle>,l1extra::L1JetParticle,edm::refhelper::FindUsingAdvance<std::vector<l1extra::L1JetParticle>,l1extra::L1JetParticle> > >");
      return &instance;
   }
   TGenericClassInfo *GenerateInitInstance(const ::edm::reftobase::Holder<reco::Candidate,edm::Ref<vector<l1extra::L1JetParticle>,l1extra::L1JetParticle,edm::refhelper::FindUsingAdvance<vector<l1extra::L1JetParticle>,l1extra::L1JetParticle> > >*)
   {
      return GenerateInitInstanceLocal((::edm::reftobase::Holder<reco::Candidate,edm::Ref<vector<l1extra::L1JetParticle>,l1extra::L1JetParticle,edm::refhelper::FindUsingAdvance<vector<l1extra::L1JetParticle>,l1extra::L1JetParticle> > >*)0);
   }
   // Static variable to force the class initialization
   static ::ROOT::TGenericClassInfo *_R__UNIQUE_(Init) = GenerateInitInstanceLocal((const ::edm::reftobase::Holder<reco::Candidate,edm::Ref<vector<l1extra::L1JetParticle>,l1extra::L1JetParticle,edm::refhelper::FindUsingAdvance<vector<l1extra::L1JetParticle>,l1extra::L1JetParticle> > >*)0x0); R__UseDummy(_R__UNIQUE_(Init));

   // Dictionary for non-ClassDef classes
   static TClass *edmcLcLreftobasecLcLHolderlErecocLcLCandidatecOedmcLcLReflEvectorlEl1extracLcLL1JetParticlegRcOl1extracLcLL1JetParticlecOedmcLcLrefhelpercLcLFindUsingAdvancelEvectorlEl1extracLcLL1JetParticlegRcOl1extracLcLL1JetParticlegRsPgRsPgR_Dictionary() {
      TClass* theClass =::ROOT::GenerateInitInstanceLocal((const ::edm::reftobase::Holder<reco::Candidate,edm::Ref<vector<l1extra::L1JetParticle>,l1extra::L1JetParticle,edm::refhelper::FindUsingAdvance<vector<l1extra::L1JetParticle>,l1extra::L1JetParticle> > >*)0x0)->GetClass();
      edmcLcLreftobasecLcLHolderlErecocLcLCandidatecOedmcLcLReflEvectorlEl1extracLcLL1JetParticlegRcOl1extracLcLL1JetParticlecOedmcLcLrefhelpercLcLFindUsingAdvancelEvectorlEl1extracLcLL1JetParticlegRcOl1extracLcLL1JetParticlegRsPgRsPgR_TClassManip(theClass);
   return theClass;
   }

   static void edmcLcLreftobasecLcLHolderlErecocLcLCandidatecOedmcLcLReflEvectorlEl1extracLcLL1JetParticlegRcOl1extracLcLL1JetParticlecOedmcLcLrefhelpercLcLFindUsingAdvancelEvectorlEl1extracLcLL1JetParticlegRcOl1extracLcLL1JetParticlegRsPgRsPgR_TClassManip(TClass* ){
   }

} // end of namespace ROOT

namespace ROOT {
   static TClass *edmcLcLreftobasecLcLHolderlErecocLcLCandidatecOedmcLcLReflEvectorlEl1extracLcLL1EtMissParticlegRcOl1extracLcLL1EtMissParticlecOedmcLcLrefhelpercLcLFindUsingAdvancelEvectorlEl1extracLcLL1EtMissParticlegRcOl1extracLcLL1EtMissParticlegRsPgRsPgR_Dictionary();
   static void edmcLcLreftobasecLcLHolderlErecocLcLCandidatecOedmcLcLReflEvectorlEl1extracLcLL1EtMissParticlegRcOl1extracLcLL1EtMissParticlecOedmcLcLrefhelpercLcLFindUsingAdvancelEvectorlEl1extracLcLL1EtMissParticlegRcOl1extracLcLL1EtMissParticlegRsPgRsPgR_TClassManip(TClass*);
   static void *new_edmcLcLreftobasecLcLHolderlErecocLcLCandidatecOedmcLcLReflEvectorlEl1extracLcLL1EtMissParticlegRcOl1extracLcLL1EtMissParticlecOedmcLcLrefhelpercLcLFindUsingAdvancelEvectorlEl1extracLcLL1EtMissParticlegRcOl1extracLcLL1EtMissParticlegRsPgRsPgR(void *p = 0);
   static void *newArray_edmcLcLreftobasecLcLHolderlErecocLcLCandidatecOedmcLcLReflEvectorlEl1extracLcLL1EtMissParticlegRcOl1extracLcLL1EtMissParticlecOedmcLcLrefhelpercLcLFindUsingAdvancelEvectorlEl1extracLcLL1EtMissParticlegRcOl1extracLcLL1EtMissParticlegRsPgRsPgR(Long_t size, void *p);
   static void delete_edmcLcLreftobasecLcLHolderlErecocLcLCandidatecOedmcLcLReflEvectorlEl1extracLcLL1EtMissParticlegRcOl1extracLcLL1EtMissParticlecOedmcLcLrefhelpercLcLFindUsingAdvancelEvectorlEl1extracLcLL1EtMissParticlegRcOl1extracLcLL1EtMissParticlegRsPgRsPgR(void *p);
   static void deleteArray_edmcLcLreftobasecLcLHolderlErecocLcLCandidatecOedmcLcLReflEvectorlEl1extracLcLL1EtMissParticlegRcOl1extracLcLL1EtMissParticlecOedmcLcLrefhelpercLcLFindUsingAdvancelEvectorlEl1extracLcLL1EtMissParticlegRcOl1extracLcLL1EtMissParticlegRsPgRsPgR(void *p);
   static void destruct_edmcLcLreftobasecLcLHolderlErecocLcLCandidatecOedmcLcLReflEvectorlEl1extracLcLL1EtMissParticlegRcOl1extracLcLL1EtMissParticlecOedmcLcLrefhelpercLcLFindUsingAdvancelEvectorlEl1extracLcLL1EtMissParticlegRcOl1extracLcLL1EtMissParticlegRsPgRsPgR(void *p);

   // Function generating the singleton type initializer
   static TGenericClassInfo *GenerateInitInstanceLocal(const ::edm::reftobase::Holder<reco::Candidate,edm::Ref<vector<l1extra::L1EtMissParticle>,l1extra::L1EtMissParticle,edm::refhelper::FindUsingAdvance<vector<l1extra::L1EtMissParticle>,l1extra::L1EtMissParticle> > >*)
   {
      ::edm::reftobase::Holder<reco::Candidate,edm::Ref<vector<l1extra::L1EtMissParticle>,l1extra::L1EtMissParticle,edm::refhelper::FindUsingAdvance<vector<l1extra::L1EtMissParticle>,l1extra::L1EtMissParticle> > > *ptr = 0;
      static ::TVirtualIsAProxy* isa_proxy = new ::TIsAProxy(typeid(::edm::reftobase::Holder<reco::Candidate,edm::Ref<vector<l1extra::L1EtMissParticle>,l1extra::L1EtMissParticle,edm::refhelper::FindUsingAdvance<vector<l1extra::L1EtMissParticle>,l1extra::L1EtMissParticle> > >));
      static ::ROOT::TGenericClassInfo 
         instance("edm::reftobase::Holder<reco::Candidate,edm::Ref<vector<l1extra::L1EtMissParticle>,l1extra::L1EtMissParticle,edm::refhelper::FindUsingAdvance<vector<l1extra::L1EtMissParticle>,l1extra::L1EtMissParticle> > >", ::edm::reftobase::Holder<reco::Candidate,edm::Ref<vector<l1extra::L1EtMissParticle>,l1extra::L1EtMissParticle,edm::refhelper::FindUsingAdvance<vector<l1extra::L1EtMissParticle>,l1extra::L1EtMissParticle> > >::Class_Version(), "DataFormats/Common/interface/Holder.h", 17,
                  typeid(::edm::reftobase::Holder<reco::Candidate,edm::Ref<vector<l1extra::L1EtMissParticle>,l1extra::L1EtMissParticle,edm::refhelper::FindUsingAdvance<vector<l1extra::L1EtMissParticle>,l1extra::L1EtMissParticle> > >), ::ROOT::Internal::DefineBehavior(ptr, ptr),
                  &edmcLcLreftobasecLcLHolderlErecocLcLCandidatecOedmcLcLReflEvectorlEl1extracLcLL1EtMissParticlegRcOl1extracLcLL1EtMissParticlecOedmcLcLrefhelpercLcLFindUsingAdvancelEvectorlEl1extracLcLL1EtMissParticlegRcOl1extracLcLL1EtMissParticlegRsPgRsPgR_Dictionary, isa_proxy, 0,
                  sizeof(::edm::reftobase::Holder<reco::Candidate,edm::Ref<vector<l1extra::L1EtMissParticle>,l1extra::L1EtMissParticle,edm::refhelper::FindUsingAdvance<vector<l1extra::L1EtMissParticle>,l1extra::L1EtMissParticle> > >) );
      instance.SetNew(&new_edmcLcLreftobasecLcLHolderlErecocLcLCandidatecOedmcLcLReflEvectorlEl1extracLcLL1EtMissParticlegRcOl1extracLcLL1EtMissParticlecOedmcLcLrefhelpercLcLFindUsingAdvancelEvectorlEl1extracLcLL1EtMissParticlegRcOl1extracLcLL1EtMissParticlegRsPgRsPgR);
      instance.SetNewArray(&newArray_edmcLcLreftobasecLcLHolderlErecocLcLCandidatecOedmcLcLReflEvectorlEl1extracLcLL1EtMissParticlegRcOl1extracLcLL1EtMissParticlecOedmcLcLrefhelpercLcLFindUsingAdvancelEvectorlEl1extracLcLL1EtMissParticlegRcOl1extracLcLL1EtMissParticlegRsPgRsPgR);
      instance.SetDelete(&delete_edmcLcLreftobasecLcLHolderlErecocLcLCandidatecOedmcLcLReflEvectorlEl1extracLcLL1EtMissParticlegRcOl1extracLcLL1EtMissParticlecOedmcLcLrefhelpercLcLFindUsingAdvancelEvectorlEl1extracLcLL1EtMissParticlegRcOl1extracLcLL1EtMissParticlegRsPgRsPgR);
      instance.SetDeleteArray(&deleteArray_edmcLcLreftobasecLcLHolderlErecocLcLCandidatecOedmcLcLReflEvectorlEl1extracLcLL1EtMissParticlegRcOl1extracLcLL1EtMissParticlecOedmcLcLrefhelpercLcLFindUsingAdvancelEvectorlEl1extracLcLL1EtMissParticlegRcOl1extracLcLL1EtMissParticlegRsPgRsPgR);
      instance.SetDestructor(&destruct_edmcLcLreftobasecLcLHolderlErecocLcLCandidatecOedmcLcLReflEvectorlEl1extracLcLL1EtMissParticlegRcOl1extracLcLL1EtMissParticlecOedmcLcLrefhelpercLcLFindUsingAdvancelEvectorlEl1extracLcLL1EtMissParticlegRcOl1extracLcLL1EtMissParticlegRsPgRsPgR);

      ::ROOT::AddClassAlternate("edm::reftobase::Holder<reco::Candidate,edm::Ref<vector<l1extra::L1EtMissParticle>,l1extra::L1EtMissParticle,edm::refhelper::FindUsingAdvance<vector<l1extra::L1EtMissParticle>,l1extra::L1EtMissParticle> > >","edm::reftobase::Holder<reco::Candidate,edm::Ref<std::vector<l1extra::L1EtMissParticle>,l1extra::L1EtMissParticle,edm::refhelper::FindUsingAdvance<std::vector<l1extra::L1EtMissParticle>,l1extra::L1EtMissParticle> > >");
      return &instance;
   }
   TGenericClassInfo *GenerateInitInstance(const ::edm::reftobase::Holder<reco::Candidate,edm::Ref<vector<l1extra::L1EtMissParticle>,l1extra::L1EtMissParticle,edm::refhelper::FindUsingAdvance<vector<l1extra::L1EtMissParticle>,l1extra::L1EtMissParticle> > >*)
   {
      return GenerateInitInstanceLocal((::edm::reftobase::Holder<reco::Candidate,edm::Ref<vector<l1extra::L1EtMissParticle>,l1extra::L1EtMissParticle,edm::refhelper::FindUsingAdvance<vector<l1extra::L1EtMissParticle>,l1extra::L1EtMissParticle> > >*)0);
   }
   // Static variable to force the class initialization
   static ::ROOT::TGenericClassInfo *_R__UNIQUE_(Init) = GenerateInitInstanceLocal((const ::edm::reftobase::Holder<reco::Candidate,edm::Ref<vector<l1extra::L1EtMissParticle>,l1extra::L1EtMissParticle,edm::refhelper::FindUsingAdvance<vector<l1extra::L1EtMissParticle>,l1extra::L1EtMissParticle> > >*)0x0); R__UseDummy(_R__UNIQUE_(Init));

   // Dictionary for non-ClassDef classes
   static TClass *edmcLcLreftobasecLcLHolderlErecocLcLCandidatecOedmcLcLReflEvectorlEl1extracLcLL1EtMissParticlegRcOl1extracLcLL1EtMissParticlecOedmcLcLrefhelpercLcLFindUsingAdvancelEvectorlEl1extracLcLL1EtMissParticlegRcOl1extracLcLL1EtMissParticlegRsPgRsPgR_Dictionary() {
      TClass* theClass =::ROOT::GenerateInitInstanceLocal((const ::edm::reftobase::Holder<reco::Candidate,edm::Ref<vector<l1extra::L1EtMissParticle>,l1extra::L1EtMissParticle,edm::refhelper::FindUsingAdvance<vector<l1extra::L1EtMissParticle>,l1extra::L1EtMissParticle> > >*)0x0)->GetClass();
      edmcLcLreftobasecLcLHolderlErecocLcLCandidatecOedmcLcLReflEvectorlEl1extracLcLL1EtMissParticlegRcOl1extracLcLL1EtMissParticlecOedmcLcLrefhelpercLcLFindUsingAdvancelEvectorlEl1extracLcLL1EtMissParticlegRcOl1extracLcLL1EtMissParticlegRsPgRsPgR_TClassManip(theClass);
   return theClass;
   }

   static void edmcLcLreftobasecLcLHolderlErecocLcLCandidatecOedmcLcLReflEvectorlEl1extracLcLL1EtMissParticlegRcOl1extracLcLL1EtMissParticlecOedmcLcLrefhelpercLcLFindUsingAdvancelEvectorlEl1extracLcLL1EtMissParticlegRcOl1extracLcLL1EtMissParticlegRsPgRsPgR_TClassManip(TClass* ){
   }

} // end of namespace ROOT

namespace ROOT {
   static TClass *edmcLcLreftobasecLcLHolderlErecocLcLCandidatecOedmcLcLRefProdlEl1extracLcLL1EtMissParticlegRsPgR_Dictionary();
   static void edmcLcLreftobasecLcLHolderlErecocLcLCandidatecOedmcLcLRefProdlEl1extracLcLL1EtMissParticlegRsPgR_TClassManip(TClass*);
   static void *new_edmcLcLreftobasecLcLHolderlErecocLcLCandidatecOedmcLcLRefProdlEl1extracLcLL1EtMissParticlegRsPgR(void *p = 0);
   static void *newArray_edmcLcLreftobasecLcLHolderlErecocLcLCandidatecOedmcLcLRefProdlEl1extracLcLL1EtMissParticlegRsPgR(Long_t size, void *p);
   static void delete_edmcLcLreftobasecLcLHolderlErecocLcLCandidatecOedmcLcLRefProdlEl1extracLcLL1EtMissParticlegRsPgR(void *p);
   static void deleteArray_edmcLcLreftobasecLcLHolderlErecocLcLCandidatecOedmcLcLRefProdlEl1extracLcLL1EtMissParticlegRsPgR(void *p);
   static void destruct_edmcLcLreftobasecLcLHolderlErecocLcLCandidatecOedmcLcLRefProdlEl1extracLcLL1EtMissParticlegRsPgR(void *p);

   // Function generating the singleton type initializer
   static TGenericClassInfo *GenerateInitInstanceLocal(const ::edm::reftobase::Holder<reco::Candidate,edm::RefProd<l1extra::L1EtMissParticle> >*)
   {
      ::edm::reftobase::Holder<reco::Candidate,edm::RefProd<l1extra::L1EtMissParticle> > *ptr = 0;
      static ::TVirtualIsAProxy* isa_proxy = new ::TIsAProxy(typeid(::edm::reftobase::Holder<reco::Candidate,edm::RefProd<l1extra::L1EtMissParticle> >));
      static ::ROOT::TGenericClassInfo 
         instance("edm::reftobase::Holder<reco::Candidate,edm::RefProd<l1extra::L1EtMissParticle> >", ::edm::reftobase::Holder<reco::Candidate,edm::RefProd<l1extra::L1EtMissParticle> >::Class_Version(), "DataFormats/Common/interface/Holder.h", 17,
                  typeid(::edm::reftobase::Holder<reco::Candidate,edm::RefProd<l1extra::L1EtMissParticle> >), ::ROOT::Internal::DefineBehavior(ptr, ptr),
                  &edmcLcLreftobasecLcLHolderlErecocLcLCandidatecOedmcLcLRefProdlEl1extracLcLL1EtMissParticlegRsPgR_Dictionary, isa_proxy, 0,
                  sizeof(::edm::reftobase::Holder<reco::Candidate,edm::RefProd<l1extra::L1EtMissParticle> >) );
      instance.SetNew(&new_edmcLcLreftobasecLcLHolderlErecocLcLCandidatecOedmcLcLRefProdlEl1extracLcLL1EtMissParticlegRsPgR);
      instance.SetNewArray(&newArray_edmcLcLreftobasecLcLHolderlErecocLcLCandidatecOedmcLcLRefProdlEl1extracLcLL1EtMissParticlegRsPgR);
      instance.SetDelete(&delete_edmcLcLreftobasecLcLHolderlErecocLcLCandidatecOedmcLcLRefProdlEl1extracLcLL1EtMissParticlegRsPgR);
      instance.SetDeleteArray(&deleteArray_edmcLcLreftobasecLcLHolderlErecocLcLCandidatecOedmcLcLRefProdlEl1extracLcLL1EtMissParticlegRsPgR);
      instance.SetDestructor(&destruct_edmcLcLreftobasecLcLHolderlErecocLcLCandidatecOedmcLcLRefProdlEl1extracLcLL1EtMissParticlegRsPgR);
      return &instance;
   }
   TGenericClassInfo *GenerateInitInstance(const ::edm::reftobase::Holder<reco::Candidate,edm::RefProd<l1extra::L1EtMissParticle> >*)
   {
      return GenerateInitInstanceLocal((::edm::reftobase::Holder<reco::Candidate,edm::RefProd<l1extra::L1EtMissParticle> >*)0);
   }
   // Static variable to force the class initialization
   static ::ROOT::TGenericClassInfo *_R__UNIQUE_(Init) = GenerateInitInstanceLocal((const ::edm::reftobase::Holder<reco::Candidate,edm::RefProd<l1extra::L1EtMissParticle> >*)0x0); R__UseDummy(_R__UNIQUE_(Init));

   // Dictionary for non-ClassDef classes
   static TClass *edmcLcLreftobasecLcLHolderlErecocLcLCandidatecOedmcLcLRefProdlEl1extracLcLL1EtMissParticlegRsPgR_Dictionary() {
      TClass* theClass =::ROOT::GenerateInitInstanceLocal((const ::edm::reftobase::Holder<reco::Candidate,edm::RefProd<l1extra::L1EtMissParticle> >*)0x0)->GetClass();
      edmcLcLreftobasecLcLHolderlErecocLcLCandidatecOedmcLcLRefProdlEl1extracLcLL1EtMissParticlegRsPgR_TClassManip(theClass);
   return theClass;
   }

   static void edmcLcLreftobasecLcLHolderlErecocLcLCandidatecOedmcLcLRefProdlEl1extracLcLL1EtMissParticlegRsPgR_TClassManip(TClass* ){
   }

} // end of namespace ROOT

namespace ROOT {
   static TClass *GltDEDigi_Dictionary();
   static void GltDEDigi_TClassManip(TClass*);
   static void *new_GltDEDigi(void *p = 0);
   static void *newArray_GltDEDigi(Long_t size, void *p);
   static void delete_GltDEDigi(void *p);
   static void deleteArray_GltDEDigi(void *p);
   static void destruct_GltDEDigi(void *p);

   // Function generating the singleton type initializer
   static TGenericClassInfo *GenerateInitInstanceLocal(const ::GltDEDigi*)
   {
      ::GltDEDigi *ptr = 0;
      static ::TVirtualIsAProxy* isa_proxy = new ::TIsAProxy(typeid(::GltDEDigi));
      static ::ROOT::TGenericClassInfo 
         instance("GltDEDigi", 10, "DataFormats/L1Trigger/interface/L1DataEmulDigi.h", 67,
                  typeid(::GltDEDigi), ::ROOT::Internal::DefineBehavior(ptr, ptr),
                  &GltDEDigi_Dictionary, isa_proxy, 8,
                  sizeof(::GltDEDigi) );
      instance.SetNew(&new_GltDEDigi);
      instance.SetNewArray(&newArray_GltDEDigi);
      instance.SetDelete(&delete_GltDEDigi);
      instance.SetDeleteArray(&deleteArray_GltDEDigi);
      instance.SetDestructor(&destruct_GltDEDigi);
      return &instance;
   }
   TGenericClassInfo *GenerateInitInstance(const ::GltDEDigi*)
   {
      return GenerateInitInstanceLocal((::GltDEDigi*)0);
   }
   // Static variable to force the class initialization
   static ::ROOT::TGenericClassInfo *_R__UNIQUE_(Init) = GenerateInitInstanceLocal((const ::GltDEDigi*)0x0); R__UseDummy(_R__UNIQUE_(Init));

   // Dictionary for non-ClassDef classes
   static TClass *GltDEDigi_Dictionary() {
      TClass* theClass =::ROOT::GenerateInitInstanceLocal((const ::GltDEDigi*)0x0)->GetClass();
      GltDEDigi_TClassManip(theClass);
   return theClass;
   }

   static void GltDEDigi_TClassManip(TClass* ){
   }

} // end of namespace ROOT

namespace ROOT {
   static TClass *L1MonitorDigi_Dictionary();
   static void L1MonitorDigi_TClassManip(TClass*);
   static void *new_L1MonitorDigi(void *p = 0);
   static void *newArray_L1MonitorDigi(Long_t size, void *p);
   static void delete_L1MonitorDigi(void *p);
   static void deleteArray_L1MonitorDigi(void *p);
   static void destruct_L1MonitorDigi(void *p);

   // Function generating the singleton type initializer
   static TGenericClassInfo *GenerateInitInstanceLocal(const ::L1MonitorDigi*)
   {
      ::L1MonitorDigi *ptr = 0;
      static ::TVirtualIsAProxy* isa_proxy = new ::TIsAProxy(typeid(::L1MonitorDigi));
      static ::ROOT::TGenericClassInfo 
         instance("L1MonitorDigi", 10, "DataFormats/L1Trigger/interface/L1MonitorDigi.h", 14,
                  typeid(::L1MonitorDigi), ::ROOT::Internal::DefineBehavior(ptr, ptr),
                  &L1MonitorDigi_Dictionary, isa_proxy, 8,
                  sizeof(::L1MonitorDigi) );
      instance.SetNew(&new_L1MonitorDigi);
      instance.SetNewArray(&newArray_L1MonitorDigi);
      instance.SetDelete(&delete_L1MonitorDigi);
      instance.SetDeleteArray(&deleteArray_L1MonitorDigi);
      instance.SetDestructor(&destruct_L1MonitorDigi);
      return &instance;
   }
   TGenericClassInfo *GenerateInitInstance(const ::L1MonitorDigi*)
   {
      return GenerateInitInstanceLocal((::L1MonitorDigi*)0);
   }
   // Static variable to force the class initialization
   static ::ROOT::TGenericClassInfo *_R__UNIQUE_(Init) = GenerateInitInstanceLocal((const ::L1MonitorDigi*)0x0); R__UseDummy(_R__UNIQUE_(Init));

   // Dictionary for non-ClassDef classes
   static TClass *L1MonitorDigi_Dictionary() {
      TClass* theClass =::ROOT::GenerateInitInstanceLocal((const ::L1MonitorDigi*)0x0)->GetClass();
      L1MonitorDigi_TClassManip(theClass);
   return theClass;
   }

   static void L1MonitorDigi_TClassManip(TClass* ){
   }

} // end of namespace ROOT

namespace ROOT {
   static TClass *L1DataEmulDigi_Dictionary();
   static void L1DataEmulDigi_TClassManip(TClass*);
   static void *new_L1DataEmulDigi(void *p = 0);
   static void *newArray_L1DataEmulDigi(Long_t size, void *p);
   static void delete_L1DataEmulDigi(void *p);
   static void deleteArray_L1DataEmulDigi(void *p);
   static void destruct_L1DataEmulDigi(void *p);

   // Function generating the singleton type initializer
   static TGenericClassInfo *GenerateInitInstanceLocal(const ::L1DataEmulDigi*)
   {
      ::L1DataEmulDigi *ptr = 0;
      static ::TVirtualIsAProxy* isa_proxy = new ::TIsAProxy(typeid(::L1DataEmulDigi));
      static ::ROOT::TGenericClassInfo 
         instance("L1DataEmulDigi", 10, "DataFormats/L1Trigger/interface/L1DataEmulDigi.h", 17,
                  typeid(::L1DataEmulDigi), ::ROOT::Internal::DefineBehavior(ptr, ptr),
                  &L1DataEmulDigi_Dictionary, isa_proxy, 8,
                  sizeof(::L1DataEmulDigi) );
      instance.SetNew(&new_L1DataEmulDigi);
      instance.SetNewArray(&newArray_L1DataEmulDigi);
      instance.SetDelete(&delete_L1DataEmulDigi);
      instance.SetDeleteArray(&deleteArray_L1DataEmulDigi);
      instance.SetDestructor(&destruct_L1DataEmulDigi);
      return &instance;
   }
   TGenericClassInfo *GenerateInitInstance(const ::L1DataEmulDigi*)
   {
      return GenerateInitInstanceLocal((::L1DataEmulDigi*)0);
   }
   // Static variable to force the class initialization
   static ::ROOT::TGenericClassInfo *_R__UNIQUE_(Init) = GenerateInitInstanceLocal((const ::L1DataEmulDigi*)0x0); R__UseDummy(_R__UNIQUE_(Init));

   // Dictionary for non-ClassDef classes
   static TClass *L1DataEmulDigi_Dictionary() {
      TClass* theClass =::ROOT::GenerateInitInstanceLocal((const ::L1DataEmulDigi*)0x0)->GetClass();
      L1DataEmulDigi_TClassManip(theClass);
   return theClass;
   }

   static void L1DataEmulDigi_TClassManip(TClass* ){
   }

} // end of namespace ROOT

namespace ROOT {
   static TClass *L1DataEmulRecord_Dictionary();
   static void L1DataEmulRecord_TClassManip(TClass*);
   static void *new_L1DataEmulRecord(void *p = 0);
   static void *newArray_L1DataEmulRecord(Long_t size, void *p);
   static void delete_L1DataEmulRecord(void *p);
   static void deleteArray_L1DataEmulRecord(void *p);
   static void destruct_L1DataEmulRecord(void *p);

   // Function generating the singleton type initializer
   static TGenericClassInfo *GenerateInitInstanceLocal(const ::L1DataEmulRecord*)
   {
      ::L1DataEmulRecord *ptr = 0;
      static ::TVirtualIsAProxy* isa_proxy = new ::TIsAProxy(typeid(::L1DataEmulRecord));
      static ::ROOT::TGenericClassInfo 
         instance("L1DataEmulRecord", 12, "DataFormats/L1Trigger/interface/L1DataEmulRecord.h", 15,
                  typeid(::L1DataEmulRecord), ::ROOT::Internal::DefineBehavior(ptr, ptr),
                  &L1DataEmulRecord_Dictionary, isa_proxy, 8,
                  sizeof(::L1DataEmulRecord) );
      instance.SetNew(&new_L1DataEmulRecord);
      instance.SetNewArray(&newArray_L1DataEmulRecord);
      instance.SetDelete(&delete_L1DataEmulRecord);
      instance.SetDeleteArray(&deleteArray_L1DataEmulRecord);
      instance.SetDestructor(&destruct_L1DataEmulRecord);
      return &instance;
   }
   TGenericClassInfo *GenerateInitInstance(const ::L1DataEmulRecord*)
   {
      return GenerateInitInstanceLocal((::L1DataEmulRecord*)0);
   }
   // Static variable to force the class initialization
   static ::ROOT::TGenericClassInfo *_R__UNIQUE_(Init) = GenerateInitInstanceLocal((const ::L1DataEmulRecord*)0x0); R__UseDummy(_R__UNIQUE_(Init));

   // Dictionary for non-ClassDef classes
   static TClass *L1DataEmulRecord_Dictionary() {
      TClass* theClass =::ROOT::GenerateInitInstanceLocal((const ::L1DataEmulRecord*)0x0)->GetClass();
      L1DataEmulRecord_TClassManip(theClass);
   return theClass;
   }

   static void L1DataEmulRecord_TClassManip(TClass* ){
   }

} // end of namespace ROOT

namespace ROOT {
   static TClass *edmcLcLWrapperlEL1DataEmulRecordgR_Dictionary();
   static void edmcLcLWrapperlEL1DataEmulRecordgR_TClassManip(TClass*);
   static void *new_edmcLcLWrapperlEL1DataEmulRecordgR(void *p = 0);
   static void *newArray_edmcLcLWrapperlEL1DataEmulRecordgR(Long_t size, void *p);
   static void delete_edmcLcLWrapperlEL1DataEmulRecordgR(void *p);
   static void deleteArray_edmcLcLWrapperlEL1DataEmulRecordgR(void *p);
   static void destruct_edmcLcLWrapperlEL1DataEmulRecordgR(void *p);

   // Function generating the singleton type initializer
   static TGenericClassInfo *GenerateInitInstanceLocal(const ::edm::Wrapper<L1DataEmulRecord>*)
   {
      ::edm::Wrapper<L1DataEmulRecord> *ptr = 0;
      static ::TVirtualIsAProxy* isa_proxy = new ::TIsAProxy(typeid(::edm::Wrapper<L1DataEmulRecord>));
      static ::ROOT::TGenericClassInfo 
         instance("edm::Wrapper<L1DataEmulRecord>", ::edm::Wrapper<L1DataEmulRecord>::Class_Version(), "DataFormats/Common/interface/Wrapper.h", 25,
                  typeid(::edm::Wrapper<L1DataEmulRecord>), ::ROOT::Internal::DefineBehavior(ptr, ptr),
                  &edmcLcLWrapperlEL1DataEmulRecordgR_Dictionary, isa_proxy, 0,
                  sizeof(::edm::Wrapper<L1DataEmulRecord>) );
      instance.SetNew(&new_edmcLcLWrapperlEL1DataEmulRecordgR);
      instance.SetNewArray(&newArray_edmcLcLWrapperlEL1DataEmulRecordgR);
      instance.SetDelete(&delete_edmcLcLWrapperlEL1DataEmulRecordgR);
      instance.SetDeleteArray(&deleteArray_edmcLcLWrapperlEL1DataEmulRecordgR);
      instance.SetDestructor(&destruct_edmcLcLWrapperlEL1DataEmulRecordgR);
      return &instance;
   }
   TGenericClassInfo *GenerateInitInstance(const ::edm::Wrapper<L1DataEmulRecord>*)
   {
      return GenerateInitInstanceLocal((::edm::Wrapper<L1DataEmulRecord>*)0);
   }
   // Static variable to force the class initialization
   static ::ROOT::TGenericClassInfo *_R__UNIQUE_(Init) = GenerateInitInstanceLocal((const ::edm::Wrapper<L1DataEmulRecord>*)0x0); R__UseDummy(_R__UNIQUE_(Init));

   // Dictionary for non-ClassDef classes
   static TClass *edmcLcLWrapperlEL1DataEmulRecordgR_Dictionary() {
      TClass* theClass =::ROOT::GenerateInitInstanceLocal((const ::edm::Wrapper<L1DataEmulRecord>*)0x0)->GetClass();
      edmcLcLWrapperlEL1DataEmulRecordgR_TClassManip(theClass);
   return theClass;
   }

   static void edmcLcLWrapperlEL1DataEmulRecordgR_TClassManip(TClass* ){
   }

} // end of namespace ROOT

namespace ROOT {
   static TClass *L1TriggerError_Dictionary();
   static void L1TriggerError_TClassManip(TClass*);
   static void *new_L1TriggerError(void *p = 0);
   static void *newArray_L1TriggerError(Long_t size, void *p);
   static void delete_L1TriggerError(void *p);
   static void deleteArray_L1TriggerError(void *p);
   static void destruct_L1TriggerError(void *p);

   // Function generating the singleton type initializer
   static TGenericClassInfo *GenerateInitInstanceLocal(const ::L1TriggerError*)
   {
      ::L1TriggerError *ptr = 0;
      static ::TVirtualIsAProxy* isa_proxy = new ::TIsAProxy(typeid(::L1TriggerError));
      static ::ROOT::TGenericClassInfo 
         instance("L1TriggerError", 10, "DataFormats/L1Trigger/interface/L1TriggerError.h", 20,
                  typeid(::L1TriggerError), ::ROOT::Internal::DefineBehavior(ptr, ptr),
                  &L1TriggerError_Dictionary, isa_proxy, 8,
                  sizeof(::L1TriggerError) );
      instance.SetNew(&new_L1TriggerError);
      instance.SetNewArray(&newArray_L1TriggerError);
      instance.SetDelete(&delete_L1TriggerError);
      instance.SetDeleteArray(&deleteArray_L1TriggerError);
      instance.SetDestructor(&destruct_L1TriggerError);
      return &instance;
   }
   TGenericClassInfo *GenerateInitInstance(const ::L1TriggerError*)
   {
      return GenerateInitInstanceLocal((::L1TriggerError*)0);
   }
   // Static variable to force the class initialization
   static ::ROOT::TGenericClassInfo *_R__UNIQUE_(Init) = GenerateInitInstanceLocal((const ::L1TriggerError*)0x0); R__UseDummy(_R__UNIQUE_(Init));

   // Dictionary for non-ClassDef classes
   static TClass *L1TriggerError_Dictionary() {
      TClass* theClass =::ROOT::GenerateInitInstanceLocal((const ::L1TriggerError*)0x0)->GetClass();
      L1TriggerError_TClassManip(theClass);
   return theClass;
   }

   static void L1TriggerError_TClassManip(TClass* ){
   }

} // end of namespace ROOT

namespace ROOT {
   static TClass *edmcLcLWrapperlEvectorlEL1TriggerErrorgRsPgR_Dictionary();
   static void edmcLcLWrapperlEvectorlEL1TriggerErrorgRsPgR_TClassManip(TClass*);
   static void *new_edmcLcLWrapperlEvectorlEL1TriggerErrorgRsPgR(void *p = 0);
   static void *newArray_edmcLcLWrapperlEvectorlEL1TriggerErrorgRsPgR(Long_t size, void *p);
   static void delete_edmcLcLWrapperlEvectorlEL1TriggerErrorgRsPgR(void *p);
   static void deleteArray_edmcLcLWrapperlEvectorlEL1TriggerErrorgRsPgR(void *p);
   static void destruct_edmcLcLWrapperlEvectorlEL1TriggerErrorgRsPgR(void *p);

   // Function generating the singleton type initializer
   static TGenericClassInfo *GenerateInitInstanceLocal(const ::edm::Wrapper<vector<L1TriggerError> >*)
   {
      ::edm::Wrapper<vector<L1TriggerError> > *ptr = 0;
      static ::TVirtualIsAProxy* isa_proxy = new ::TIsAProxy(typeid(::edm::Wrapper<vector<L1TriggerError> >));
      static ::ROOT::TGenericClassInfo 
         instance("edm::Wrapper<vector<L1TriggerError> >", ::edm::Wrapper<vector<L1TriggerError> >::Class_Version(), "DataFormats/Common/interface/Wrapper.h", 25,
                  typeid(::edm::Wrapper<vector<L1TriggerError> >), ::ROOT::Internal::DefineBehavior(ptr, ptr),
                  &edmcLcLWrapperlEvectorlEL1TriggerErrorgRsPgR_Dictionary, isa_proxy, 0,
                  sizeof(::edm::Wrapper<vector<L1TriggerError> >) );
      instance.SetNew(&new_edmcLcLWrapperlEvectorlEL1TriggerErrorgRsPgR);
      instance.SetNewArray(&newArray_edmcLcLWrapperlEvectorlEL1TriggerErrorgRsPgR);
      instance.SetDelete(&delete_edmcLcLWrapperlEvectorlEL1TriggerErrorgRsPgR);
      instance.SetDeleteArray(&deleteArray_edmcLcLWrapperlEvectorlEL1TriggerErrorgRsPgR);
      instance.SetDestructor(&destruct_edmcLcLWrapperlEvectorlEL1TriggerErrorgRsPgR);

      ::ROOT::AddClassAlternate("edm::Wrapper<vector<L1TriggerError> >","edm::Wrapper<std::vector<L1TriggerError> >");
      return &instance;
   }
   TGenericClassInfo *GenerateInitInstance(const ::edm::Wrapper<vector<L1TriggerError> >*)
   {
      return GenerateInitInstanceLocal((::edm::Wrapper<vector<L1TriggerError> >*)0);
   }
   // Static variable to force the class initialization
   static ::ROOT::TGenericClassInfo *_R__UNIQUE_(Init) = GenerateInitInstanceLocal((const ::edm::Wrapper<vector<L1TriggerError> >*)0x0); R__UseDummy(_R__UNIQUE_(Init));

   // Dictionary for non-ClassDef classes
   static TClass *edmcLcLWrapperlEvectorlEL1TriggerErrorgRsPgR_Dictionary() {
      TClass* theClass =::ROOT::GenerateInitInstanceLocal((const ::edm::Wrapper<vector<L1TriggerError> >*)0x0)->GetClass();
      edmcLcLWrapperlEvectorlEL1TriggerErrorgRsPgR_TClassManip(theClass);
   return theClass;
   }

   static void edmcLcLWrapperlEvectorlEL1TriggerErrorgRsPgR_TClassManip(TClass* ){
   }

} // end of namespace ROOT

namespace ROOT {
   static TClass *l1tcLcLL1DataEmulResult_Dictionary();
   static void l1tcLcLL1DataEmulResult_TClassManip(TClass*);
   static void *new_l1tcLcLL1DataEmulResult(void *p = 0);
   static void *newArray_l1tcLcLL1DataEmulResult(Long_t size, void *p);
   static void delete_l1tcLcLL1DataEmulResult(void *p);
   static void deleteArray_l1tcLcLL1DataEmulResult(void *p);
   static void destruct_l1tcLcLL1DataEmulResult(void *p);

   // Function generating the singleton type initializer
   static TGenericClassInfo *GenerateInitInstanceLocal(const ::l1t::L1DataEmulResult*)
   {
      ::l1t::L1DataEmulResult *ptr = 0;
      static ::TVirtualIsAProxy* isa_proxy = new ::TIsAProxy(typeid(::l1t::L1DataEmulResult));
      static ::ROOT::TGenericClassInfo 
         instance("l1t::L1DataEmulResult", 10, "DataFormats/L1Trigger/interface/L1DataEmulResult.h", 10,
                  typeid(::l1t::L1DataEmulResult), ::ROOT::Internal::DefineBehavior(ptr, ptr),
                  &l1tcLcLL1DataEmulResult_Dictionary, isa_proxy, 8,
                  sizeof(::l1t::L1DataEmulResult) );
      instance.SetNew(&new_l1tcLcLL1DataEmulResult);
      instance.SetNewArray(&newArray_l1tcLcLL1DataEmulResult);
      instance.SetDelete(&delete_l1tcLcLL1DataEmulResult);
      instance.SetDeleteArray(&deleteArray_l1tcLcLL1DataEmulResult);
      instance.SetDestructor(&destruct_l1tcLcLL1DataEmulResult);
      return &instance;
   }
   TGenericClassInfo *GenerateInitInstance(const ::l1t::L1DataEmulResult*)
   {
      return GenerateInitInstanceLocal((::l1t::L1DataEmulResult*)0);
   }
   // Static variable to force the class initialization
   static ::ROOT::TGenericClassInfo *_R__UNIQUE_(Init) = GenerateInitInstanceLocal((const ::l1t::L1DataEmulResult*)0x0); R__UseDummy(_R__UNIQUE_(Init));

   // Dictionary for non-ClassDef classes
   static TClass *l1tcLcLL1DataEmulResult_Dictionary() {
      TClass* theClass =::ROOT::GenerateInitInstanceLocal((const ::l1t::L1DataEmulResult*)0x0)->GetClass();
      l1tcLcLL1DataEmulResult_TClassManip(theClass);
   return theClass;
   }

   static void l1tcLcLL1DataEmulResult_TClassManip(TClass* ){
   }

} // end of namespace ROOT

namespace ROOT {
   static TClass *BXVectorlEl1tcLcLL1DataEmulResultgR_Dictionary();
   static void BXVectorlEl1tcLcLL1DataEmulResultgR_TClassManip(TClass*);
   static void *new_BXVectorlEl1tcLcLL1DataEmulResultgR(void *p = 0);
   static void *newArray_BXVectorlEl1tcLcLL1DataEmulResultgR(Long_t size, void *p);
   static void delete_BXVectorlEl1tcLcLL1DataEmulResultgR(void *p);
   static void deleteArray_BXVectorlEl1tcLcLL1DataEmulResultgR(void *p);
   static void destruct_BXVectorlEl1tcLcLL1DataEmulResultgR(void *p);

   // Function generating the singleton type initializer
   static TGenericClassInfo *GenerateInitInstanceLocal(const ::BXVector<l1t::L1DataEmulResult>*)
   {
      ::BXVector<l1t::L1DataEmulResult> *ptr = 0;
      static ::TVirtualIsAProxy* isa_proxy = new ::TIsAProxy(typeid(::BXVector<l1t::L1DataEmulResult>));
      static ::ROOT::TGenericClassInfo 
         instance("BXVector<l1t::L1DataEmulResult>", "DataFormats/L1Trigger/interface/BXVector.h", 15,
                  typeid(::BXVector<l1t::L1DataEmulResult>), ::ROOT::Internal::DefineBehavior(ptr, ptr),
                  &BXVectorlEl1tcLcLL1DataEmulResultgR_Dictionary, isa_proxy, 0,
                  sizeof(::BXVector<l1t::L1DataEmulResult>) );
      instance.SetNew(&new_BXVectorlEl1tcLcLL1DataEmulResultgR);
      instance.SetNewArray(&newArray_BXVectorlEl1tcLcLL1DataEmulResultgR);
      instance.SetDelete(&delete_BXVectorlEl1tcLcLL1DataEmulResultgR);
      instance.SetDeleteArray(&deleteArray_BXVectorlEl1tcLcLL1DataEmulResultgR);
      instance.SetDestructor(&destruct_BXVectorlEl1tcLcLL1DataEmulResultgR);

      ::ROOT::AddClassAlternate("BXVector<l1t::L1DataEmulResult>","l1t::L1DataEmulResultBxCollection");
      return &instance;
   }
   TGenericClassInfo *GenerateInitInstance(const ::BXVector<l1t::L1DataEmulResult>*)
   {
      return GenerateInitInstanceLocal((::BXVector<l1t::L1DataEmulResult>*)0);
   }
   // Static variable to force the class initialization
   static ::ROOT::TGenericClassInfo *_R__UNIQUE_(Init) = GenerateInitInstanceLocal((const ::BXVector<l1t::L1DataEmulResult>*)0x0); R__UseDummy(_R__UNIQUE_(Init));

   // Dictionary for non-ClassDef classes
   static TClass *BXVectorlEl1tcLcLL1DataEmulResultgR_Dictionary() {
      TClass* theClass =::ROOT::GenerateInitInstanceLocal((const ::BXVector<l1t::L1DataEmulResult>*)0x0)->GetClass();
      BXVectorlEl1tcLcLL1DataEmulResultgR_TClassManip(theClass);
   return theClass;
   }

   static void BXVectorlEl1tcLcLL1DataEmulResultgR_TClassManip(TClass* ){
   }

} // end of namespace ROOT

namespace ROOT {
   static TClass *edmcLcLWrapperlEBXVectorlEl1tcLcLL1DataEmulResultgRsPgR_Dictionary();
   static void edmcLcLWrapperlEBXVectorlEl1tcLcLL1DataEmulResultgRsPgR_TClassManip(TClass*);
   static void *new_edmcLcLWrapperlEBXVectorlEl1tcLcLL1DataEmulResultgRsPgR(void *p = 0);
   static void *newArray_edmcLcLWrapperlEBXVectorlEl1tcLcLL1DataEmulResultgRsPgR(Long_t size, void *p);
   static void delete_edmcLcLWrapperlEBXVectorlEl1tcLcLL1DataEmulResultgRsPgR(void *p);
   static void deleteArray_edmcLcLWrapperlEBXVectorlEl1tcLcLL1DataEmulResultgRsPgR(void *p);
   static void destruct_edmcLcLWrapperlEBXVectorlEl1tcLcLL1DataEmulResultgRsPgR(void *p);

   // Function generating the singleton type initializer
   static TGenericClassInfo *GenerateInitInstanceLocal(const ::edm::Wrapper<BXVector<l1t::L1DataEmulResult> >*)
   {
      ::edm::Wrapper<BXVector<l1t::L1DataEmulResult> > *ptr = 0;
      static ::TVirtualIsAProxy* isa_proxy = new ::TIsAProxy(typeid(::edm::Wrapper<BXVector<l1t::L1DataEmulResult> >));
      static ::ROOT::TGenericClassInfo 
         instance("edm::Wrapper<BXVector<l1t::L1DataEmulResult> >", ::edm::Wrapper<BXVector<l1t::L1DataEmulResult> >::Class_Version(), "DataFormats/Common/interface/Wrapper.h", 25,
                  typeid(::edm::Wrapper<BXVector<l1t::L1DataEmulResult> >), ::ROOT::Internal::DefineBehavior(ptr, ptr),
                  &edmcLcLWrapperlEBXVectorlEl1tcLcLL1DataEmulResultgRsPgR_Dictionary, isa_proxy, 0,
                  sizeof(::edm::Wrapper<BXVector<l1t::L1DataEmulResult> >) );
      instance.SetNew(&new_edmcLcLWrapperlEBXVectorlEl1tcLcLL1DataEmulResultgRsPgR);
      instance.SetNewArray(&newArray_edmcLcLWrapperlEBXVectorlEl1tcLcLL1DataEmulResultgRsPgR);
      instance.SetDelete(&delete_edmcLcLWrapperlEBXVectorlEl1tcLcLL1DataEmulResultgRsPgR);
      instance.SetDeleteArray(&deleteArray_edmcLcLWrapperlEBXVectorlEl1tcLcLL1DataEmulResultgRsPgR);
      instance.SetDestructor(&destruct_edmcLcLWrapperlEBXVectorlEl1tcLcLL1DataEmulResultgRsPgR);

      ::ROOT::AddClassAlternate("edm::Wrapper<BXVector<l1t::L1DataEmulResult> >","edm::Wrapper<l1t::L1DataEmulResultBxCollection>");
      return &instance;
   }
   TGenericClassInfo *GenerateInitInstance(const ::edm::Wrapper<BXVector<l1t::L1DataEmulResult> >*)
   {
      return GenerateInitInstanceLocal((::edm::Wrapper<BXVector<l1t::L1DataEmulResult> >*)0);
   }
   // Static variable to force the class initialization
   static ::ROOT::TGenericClassInfo *_R__UNIQUE_(Init) = GenerateInitInstanceLocal((const ::edm::Wrapper<BXVector<l1t::L1DataEmulResult> >*)0x0); R__UseDummy(_R__UNIQUE_(Init));

   // Dictionary for non-ClassDef classes
   static TClass *edmcLcLWrapperlEBXVectorlEl1tcLcLL1DataEmulResultgRsPgR_Dictionary() {
      TClass* theClass =::ROOT::GenerateInitInstanceLocal((const ::edm::Wrapper<BXVector<l1t::L1DataEmulResult> >*)0x0)->GetClass();
      edmcLcLWrapperlEBXVectorlEl1tcLcLL1DataEmulResultgRsPgR_TClassManip(theClass);
   return theClass;
   }

   static void edmcLcLWrapperlEBXVectorlEl1tcLcLL1DataEmulResultgRsPgR_TClassManip(TClass* ){
   }

} // end of namespace ROOT

namespace ROOT {
   // Wrappers around operator new
   static void *new_l1tcLcLL1Candidate(void *p) {
      return  p ? ::new((::ROOT::Internal::TOperatorNewHelper*)p) ::l1t::L1Candidate : new ::l1t::L1Candidate;
   }
   static void *newArray_l1tcLcLL1Candidate(Long_t nElements, void *p) {
      return p ? ::new((::ROOT::Internal::TOperatorNewHelper*)p) ::l1t::L1Candidate[nElements] : new ::l1t::L1Candidate[nElements];
   }
   // Wrapper around operator delete
   static void delete_l1tcLcLL1Candidate(void *p) {
      delete ((::l1t::L1Candidate*)p);
   }
   static void deleteArray_l1tcLcLL1Candidate(void *p) {
      delete [] ((::l1t::L1Candidate*)p);
   }
   static void destruct_l1tcLcLL1Candidate(void *p) {
      typedef ::l1t::L1Candidate current_t;
      ((current_t*)p)->~current_t();
   }
} // end of namespace ROOT for class ::l1t::L1Candidate

namespace ROOT {
   // Wrappers around operator new
   static void *new_BXVectorlEl1tcLcLL1CandidategR(void *p) {
      return  p ? new(p) ::BXVector<l1t::L1Candidate> : new ::BXVector<l1t::L1Candidate>;
   }
   static void *newArray_BXVectorlEl1tcLcLL1CandidategR(Long_t nElements, void *p) {
      return p ? new(p) ::BXVector<l1t::L1Candidate>[nElements] : new ::BXVector<l1t::L1Candidate>[nElements];
   }
   // Wrapper around operator delete
   static void delete_BXVectorlEl1tcLcLL1CandidategR(void *p) {
      delete ((::BXVector<l1t::L1Candidate>*)p);
   }
   static void deleteArray_BXVectorlEl1tcLcLL1CandidategR(void *p) {
      delete [] ((::BXVector<l1t::L1Candidate>*)p);
   }
   static void destruct_BXVectorlEl1tcLcLL1CandidategR(void *p) {
      typedef ::BXVector<l1t::L1Candidate> current_t;
      ((current_t*)p)->~current_t();
   }
} // end of namespace ROOT for class ::BXVector<l1t::L1Candidate>

namespace ROOT {
   // Wrappers around operator new
   static void *new_edmcLcLWrapperlEBXVectorlEl1tcLcLL1CandidategRsPgR(void *p) {
      return  p ? ::new((::ROOT::Internal::TOperatorNewHelper*)p) ::edm::Wrapper<BXVector<l1t::L1Candidate> > : new ::edm::Wrapper<BXVector<l1t::L1Candidate> >;
   }
   static void *newArray_edmcLcLWrapperlEBXVectorlEl1tcLcLL1CandidategRsPgR(Long_t nElements, void *p) {
      return p ? ::new((::ROOT::Internal::TOperatorNewHelper*)p) ::edm::Wrapper<BXVector<l1t::L1Candidate> >[nElements] : new ::edm::Wrapper<BXVector<l1t::L1Candidate> >[nElements];
   }
   // Wrapper around operator delete
   static void delete_edmcLcLWrapperlEBXVectorlEl1tcLcLL1CandidategRsPgR(void *p) {
      delete ((::edm::Wrapper<BXVector<l1t::L1Candidate> >*)p);
   }
   static void deleteArray_edmcLcLWrapperlEBXVectorlEl1tcLcLL1CandidategRsPgR(void *p) {
      delete [] ((::edm::Wrapper<BXVector<l1t::L1Candidate> >*)p);
   }
   static void destruct_edmcLcLWrapperlEBXVectorlEl1tcLcLL1CandidategRsPgR(void *p) {
      typedef ::edm::Wrapper<BXVector<l1t::L1Candidate> > current_t;
      ((current_t*)p)->~current_t();
   }
} // end of namespace ROOT for class ::edm::Wrapper<BXVector<l1t::L1Candidate> >

namespace ROOT {
   // Wrappers around operator new
   static void *new_edmcLcLReflEBXVectorlEl1tcLcLL1CandidategRcOl1tcLcLL1CandidatecOedmcLcLrefhelpercLcLFindUsingAdvancelEBXVectorlEl1tcLcLL1CandidategRcOl1tcLcLL1CandidategRsPgR(void *p) {
      return  p ? ::new((::ROOT::Internal::TOperatorNewHelper*)p) ::edm::Ref<BXVector<l1t::L1Candidate>,l1t::L1Candidate,edm::refhelper::FindUsingAdvance<BXVector<l1t::L1Candidate>,l1t::L1Candidate> > : new ::edm::Ref<BXVector<l1t::L1Candidate>,l1t::L1Candidate,edm::refhelper::FindUsingAdvance<BXVector<l1t::L1Candidate>,l1t::L1Candidate> >;
   }
   static void *newArray_edmcLcLReflEBXVectorlEl1tcLcLL1CandidategRcOl1tcLcLL1CandidatecOedmcLcLrefhelpercLcLFindUsingAdvancelEBXVectorlEl1tcLcLL1CandidategRcOl1tcLcLL1CandidategRsPgR(Long_t nElements, void *p) {
      return p ? ::new((::ROOT::Internal::TOperatorNewHelper*)p) ::edm::Ref<BXVector<l1t::L1Candidate>,l1t::L1Candidate,edm::refhelper::FindUsingAdvance<BXVector<l1t::L1Candidate>,l1t::L1Candidate> >[nElements] : new ::edm::Ref<BXVector<l1t::L1Candidate>,l1t::L1Candidate,edm::refhelper::FindUsingAdvance<BXVector<l1t::L1Candidate>,l1t::L1Candidate> >[nElements];
   }
   // Wrapper around operator delete
   static void delete_edmcLcLReflEBXVectorlEl1tcLcLL1CandidategRcOl1tcLcLL1CandidatecOedmcLcLrefhelpercLcLFindUsingAdvancelEBXVectorlEl1tcLcLL1CandidategRcOl1tcLcLL1CandidategRsPgR(void *p) {
      delete ((::edm::Ref<BXVector<l1t::L1Candidate>,l1t::L1Candidate,edm::refhelper::FindUsingAdvance<BXVector<l1t::L1Candidate>,l1t::L1Candidate> >*)p);
   }
   static void deleteArray_edmcLcLReflEBXVectorlEl1tcLcLL1CandidategRcOl1tcLcLL1CandidatecOedmcLcLrefhelpercLcLFindUsingAdvancelEBXVectorlEl1tcLcLL1CandidategRcOl1tcLcLL1CandidategRsPgR(void *p) {
      delete [] ((::edm::Ref<BXVector<l1t::L1Candidate>,l1t::L1Candidate,edm::refhelper::FindUsingAdvance<BXVector<l1t::L1Candidate>,l1t::L1Candidate> >*)p);
   }
   static void destruct_edmcLcLReflEBXVectorlEl1tcLcLL1CandidategRcOl1tcLcLL1CandidatecOedmcLcLrefhelpercLcLFindUsingAdvancelEBXVectorlEl1tcLcLL1CandidategRcOl1tcLcLL1CandidategRsPgR(void *p) {
      typedef ::edm::Ref<BXVector<l1t::L1Candidate>,l1t::L1Candidate,edm::refhelper::FindUsingAdvance<BXVector<l1t::L1Candidate>,l1t::L1Candidate> > current_t;
      ((current_t*)p)->~current_t();
   }
} // end of namespace ROOT for class ::edm::Ref<BXVector<l1t::L1Candidate>,l1t::L1Candidate,edm::refhelper::FindUsingAdvance<BXVector<l1t::L1Candidate>,l1t::L1Candidate> >

namespace ROOT {
   // Wrappers around operator new
   static void *new_edmcLcLWrapperlEedmcLcLReflEBXVectorlEl1tcLcLL1CandidategRcOl1tcLcLL1CandidatecOedmcLcLrefhelpercLcLFindUsingAdvancelEBXVectorlEl1tcLcLL1CandidategRcOl1tcLcLL1CandidategRsPgRsPgR(void *p) {
      return  p ? ::new((::ROOT::Internal::TOperatorNewHelper*)p) ::edm::Wrapper<edm::Ref<BXVector<l1t::L1Candidate>,l1t::L1Candidate,edm::refhelper::FindUsingAdvance<BXVector<l1t::L1Candidate>,l1t::L1Candidate> > > : new ::edm::Wrapper<edm::Ref<BXVector<l1t::L1Candidate>,l1t::L1Candidate,edm::refhelper::FindUsingAdvance<BXVector<l1t::L1Candidate>,l1t::L1Candidate> > >;
   }
   static void *newArray_edmcLcLWrapperlEedmcLcLReflEBXVectorlEl1tcLcLL1CandidategRcOl1tcLcLL1CandidatecOedmcLcLrefhelpercLcLFindUsingAdvancelEBXVectorlEl1tcLcLL1CandidategRcOl1tcLcLL1CandidategRsPgRsPgR(Long_t nElements, void *p) {
      return p ? ::new((::ROOT::Internal::TOperatorNewHelper*)p) ::edm::Wrapper<edm::Ref<BXVector<l1t::L1Candidate>,l1t::L1Candidate,edm::refhelper::FindUsingAdvance<BXVector<l1t::L1Candidate>,l1t::L1Candidate> > >[nElements] : new ::edm::Wrapper<edm::Ref<BXVector<l1t::L1Candidate>,l1t::L1Candidate,edm::refhelper::FindUsingAdvance<BXVector<l1t::L1Candidate>,l1t::L1Candidate> > >[nElements];
   }
   // Wrapper around operator delete
   static void delete_edmcLcLWrapperlEedmcLcLReflEBXVectorlEl1tcLcLL1CandidategRcOl1tcLcLL1CandidatecOedmcLcLrefhelpercLcLFindUsingAdvancelEBXVectorlEl1tcLcLL1CandidategRcOl1tcLcLL1CandidategRsPgRsPgR(void *p) {
      delete ((::edm::Wrapper<edm::Ref<BXVector<l1t::L1Candidate>,l1t::L1Candidate,edm::refhelper::FindUsingAdvance<BXVector<l1t::L1Candidate>,l1t::L1Candidate> > >*)p);
   }
   static void deleteArray_edmcLcLWrapperlEedmcLcLReflEBXVectorlEl1tcLcLL1CandidategRcOl1tcLcLL1CandidatecOedmcLcLrefhelpercLcLFindUsingAdvancelEBXVectorlEl1tcLcLL1CandidategRcOl1tcLcLL1CandidategRsPgRsPgR(void *p) {
      delete [] ((::edm::Wrapper<edm::Ref<BXVector<l1t::L1Candidate>,l1t::L1Candidate,edm::refhelper::FindUsingAdvance<BXVector<l1t::L1Candidate>,l1t::L1Candidate> > >*)p);
   }
   static void destruct_edmcLcLWrapperlEedmcLcLReflEBXVectorlEl1tcLcLL1CandidategRcOl1tcLcLL1CandidatecOedmcLcLrefhelpercLcLFindUsingAdvancelEBXVectorlEl1tcLcLL1CandidategRcOl1tcLcLL1CandidategRsPgRsPgR(void *p) {
      typedef ::edm::Wrapper<edm::Ref<BXVector<l1t::L1Candidate>,l1t::L1Candidate,edm::refhelper::FindUsingAdvance<BXVector<l1t::L1Candidate>,l1t::L1Candidate> > > current_t;
      ((current_t*)p)->~current_t();
   }
} // end of namespace ROOT for class ::edm::Wrapper<edm::Ref<BXVector<l1t::L1Candidate>,l1t::L1Candidate,edm::refhelper::FindUsingAdvance<BXVector<l1t::L1Candidate>,l1t::L1Candidate> > >

namespace ROOT {
   // Wrappers around operator new
   static void *new_edmcLcLRefVectorlEBXVectorlEl1tcLcLL1CandidategRcOl1tcLcLL1CandidatecOedmcLcLrefhelpercLcLFindUsingAdvancelEBXVectorlEl1tcLcLL1CandidategRcOl1tcLcLL1CandidategRsPgR(void *p) {
      return  p ? ::new((::ROOT::Internal::TOperatorNewHelper*)p) ::edm::RefVector<BXVector<l1t::L1Candidate>,l1t::L1Candidate,edm::refhelper::FindUsingAdvance<BXVector<l1t::L1Candidate>,l1t::L1Candidate> > : new ::edm::RefVector<BXVector<l1t::L1Candidate>,l1t::L1Candidate,edm::refhelper::FindUsingAdvance<BXVector<l1t::L1Candidate>,l1t::L1Candidate> >;
   }
   static void *newArray_edmcLcLRefVectorlEBXVectorlEl1tcLcLL1CandidategRcOl1tcLcLL1CandidatecOedmcLcLrefhelpercLcLFindUsingAdvancelEBXVectorlEl1tcLcLL1CandidategRcOl1tcLcLL1CandidategRsPgR(Long_t nElements, void *p) {
      return p ? ::new((::ROOT::Internal::TOperatorNewHelper*)p) ::edm::RefVector<BXVector<l1t::L1Candidate>,l1t::L1Candidate,edm::refhelper::FindUsingAdvance<BXVector<l1t::L1Candidate>,l1t::L1Candidate> >[nElements] : new ::edm::RefVector<BXVector<l1t::L1Candidate>,l1t::L1Candidate,edm::refhelper::FindUsingAdvance<BXVector<l1t::L1Candidate>,l1t::L1Candidate> >[nElements];
   }
   // Wrapper around operator delete
   static void delete_edmcLcLRefVectorlEBXVectorlEl1tcLcLL1CandidategRcOl1tcLcLL1CandidatecOedmcLcLrefhelpercLcLFindUsingAdvancelEBXVectorlEl1tcLcLL1CandidategRcOl1tcLcLL1CandidategRsPgR(void *p) {
      delete ((::edm::RefVector<BXVector<l1t::L1Candidate>,l1t::L1Candidate,edm::refhelper::FindUsingAdvance<BXVector<l1t::L1Candidate>,l1t::L1Candidate> >*)p);
   }
   static void deleteArray_edmcLcLRefVectorlEBXVectorlEl1tcLcLL1CandidategRcOl1tcLcLL1CandidatecOedmcLcLrefhelpercLcLFindUsingAdvancelEBXVectorlEl1tcLcLL1CandidategRcOl1tcLcLL1CandidategRsPgR(void *p) {
      delete [] ((::edm::RefVector<BXVector<l1t::L1Candidate>,l1t::L1Candidate,edm::refhelper::FindUsingAdvance<BXVector<l1t::L1Candidate>,l1t::L1Candidate> >*)p);
   }
   static void destruct_edmcLcLRefVectorlEBXVectorlEl1tcLcLL1CandidategRcOl1tcLcLL1CandidatecOedmcLcLrefhelpercLcLFindUsingAdvancelEBXVectorlEl1tcLcLL1CandidategRcOl1tcLcLL1CandidategRsPgR(void *p) {
      typedef ::edm::RefVector<BXVector<l1t::L1Candidate>,l1t::L1Candidate,edm::refhelper::FindUsingAdvance<BXVector<l1t::L1Candidate>,l1t::L1Candidate> > current_t;
      ((current_t*)p)->~current_t();
   }
} // end of namespace ROOT for class ::edm::RefVector<BXVector<l1t::L1Candidate>,l1t::L1Candidate,edm::refhelper::FindUsingAdvance<BXVector<l1t::L1Candidate>,l1t::L1Candidate> >

namespace ROOT {
   // Wrappers around operator new
   static void *new_edmcLcLWrapperlEedmcLcLRefVectorlEBXVectorlEl1tcLcLL1CandidategRcOl1tcLcLL1CandidatecOedmcLcLrefhelpercLcLFindUsingAdvancelEBXVectorlEl1tcLcLL1CandidategRcOl1tcLcLL1CandidategRsPgRsPgR(void *p) {
      return  p ? ::new((::ROOT::Internal::TOperatorNewHelper*)p) ::edm::Wrapper<edm::RefVector<BXVector<l1t::L1Candidate>,l1t::L1Candidate,edm::refhelper::FindUsingAdvance<BXVector<l1t::L1Candidate>,l1t::L1Candidate> > > : new ::edm::Wrapper<edm::RefVector<BXVector<l1t::L1Candidate>,l1t::L1Candidate,edm::refhelper::FindUsingAdvance<BXVector<l1t::L1Candidate>,l1t::L1Candidate> > >;
   }
   static void *newArray_edmcLcLWrapperlEedmcLcLRefVectorlEBXVectorlEl1tcLcLL1CandidategRcOl1tcLcLL1CandidatecOedmcLcLrefhelpercLcLFindUsingAdvancelEBXVectorlEl1tcLcLL1CandidategRcOl1tcLcLL1CandidategRsPgRsPgR(Long_t nElements, void *p) {
      return p ? ::new((::ROOT::Internal::TOperatorNewHelper*)p) ::edm::Wrapper<edm::RefVector<BXVector<l1t::L1Candidate>,l1t::L1Candidate,edm::refhelper::FindUsingAdvance<BXVector<l1t::L1Candidate>,l1t::L1Candidate> > >[nElements] : new ::edm::Wrapper<edm::RefVector<BXVector<l1t::L1Candidate>,l1t::L1Candidate,edm::refhelper::FindUsingAdvance<BXVector<l1t::L1Candidate>,l1t::L1Candidate> > >[nElements];
   }
   // Wrapper around operator delete
   static void delete_edmcLcLWrapperlEedmcLcLRefVectorlEBXVectorlEl1tcLcLL1CandidategRcOl1tcLcLL1CandidatecOedmcLcLrefhelpercLcLFindUsingAdvancelEBXVectorlEl1tcLcLL1CandidategRcOl1tcLcLL1CandidategRsPgRsPgR(void *p) {
      delete ((::edm::Wrapper<edm::RefVector<BXVector<l1t::L1Candidate>,l1t::L1Candidate,edm::refhelper::FindUsingAdvance<BXVector<l1t::L1Candidate>,l1t::L1Candidate> > >*)p);
   }
   static void deleteArray_edmcLcLWrapperlEedmcLcLRefVectorlEBXVectorlEl1tcLcLL1CandidategRcOl1tcLcLL1CandidatecOedmcLcLrefhelpercLcLFindUsingAdvancelEBXVectorlEl1tcLcLL1CandidategRcOl1tcLcLL1CandidategRsPgRsPgR(void *p) {
      delete [] ((::edm::Wrapper<edm::RefVector<BXVector<l1t::L1Candidate>,l1t::L1Candidate,edm::refhelper::FindUsingAdvance<BXVector<l1t::L1Candidate>,l1t::L1Candidate> > >*)p);
   }
   static void destruct_edmcLcLWrapperlEedmcLcLRefVectorlEBXVectorlEl1tcLcLL1CandidategRcOl1tcLcLL1CandidatecOedmcLcLrefhelpercLcLFindUsingAdvancelEBXVectorlEl1tcLcLL1CandidategRcOl1tcLcLL1CandidategRsPgRsPgR(void *p) {
      typedef ::edm::Wrapper<edm::RefVector<BXVector<l1t::L1Candidate>,l1t::L1Candidate,edm::refhelper::FindUsingAdvance<BXVector<l1t::L1Candidate>,l1t::L1Candidate> > > current_t;
      ((current_t*)p)->~current_t();
   }
} // end of namespace ROOT for class ::edm::Wrapper<edm::RefVector<BXVector<l1t::L1Candidate>,l1t::L1Candidate,edm::refhelper::FindUsingAdvance<BXVector<l1t::L1Candidate>,l1t::L1Candidate> > >

namespace ROOT {
   // Wrappers around operator new
   static void *new_edmcLcLWrapperlEvectorlEedmcLcLReflEBXVectorlEl1tcLcLL1CandidategRcOl1tcLcLL1CandidatecOedmcLcLrefhelpercLcLFindUsingAdvancelEBXVectorlEl1tcLcLL1CandidategRcOl1tcLcLL1CandidategRsPgRsPgRsPgR(void *p) {
      return  p ? ::new((::ROOT::Internal::TOperatorNewHelper*)p) ::edm::Wrapper<vector<edm::Ref<BXVector<l1t::L1Candidate>,l1t::L1Candidate,edm::refhelper::FindUsingAdvance<BXVector<l1t::L1Candidate>,l1t::L1Candidate> > > > : new ::edm::Wrapper<vector<edm::Ref<BXVector<l1t::L1Candidate>,l1t::L1Candidate,edm::refhelper::FindUsingAdvance<BXVector<l1t::L1Candidate>,l1t::L1Candidate> > > >;
   }
   static void *newArray_edmcLcLWrapperlEvectorlEedmcLcLReflEBXVectorlEl1tcLcLL1CandidategRcOl1tcLcLL1CandidatecOedmcLcLrefhelpercLcLFindUsingAdvancelEBXVectorlEl1tcLcLL1CandidategRcOl1tcLcLL1CandidategRsPgRsPgRsPgR(Long_t nElements, void *p) {
      return p ? ::new((::ROOT::Internal::TOperatorNewHelper*)p) ::edm::Wrapper<vector<edm::Ref<BXVector<l1t::L1Candidate>,l1t::L1Candidate,edm::refhelper::FindUsingAdvance<BXVector<l1t::L1Candidate>,l1t::L1Candidate> > > >[nElements] : new ::edm::Wrapper<vector<edm::Ref<BXVector<l1t::L1Candidate>,l1t::L1Candidate,edm::refhelper::FindUsingAdvance<BXVector<l1t::L1Candidate>,l1t::L1Candidate> > > >[nElements];
   }
   // Wrapper around operator delete
   static void delete_edmcLcLWrapperlEvectorlEedmcLcLReflEBXVectorlEl1tcLcLL1CandidategRcOl1tcLcLL1CandidatecOedmcLcLrefhelpercLcLFindUsingAdvancelEBXVectorlEl1tcLcLL1CandidategRcOl1tcLcLL1CandidategRsPgRsPgRsPgR(void *p) {
      delete ((::edm::Wrapper<vector<edm::Ref<BXVector<l1t::L1Candidate>,l1t::L1Candidate,edm::refhelper::FindUsingAdvance<BXVector<l1t::L1Candidate>,l1t::L1Candidate> > > >*)p);
   }
   static void deleteArray_edmcLcLWrapperlEvectorlEedmcLcLReflEBXVectorlEl1tcLcLL1CandidategRcOl1tcLcLL1CandidatecOedmcLcLrefhelpercLcLFindUsingAdvancelEBXVectorlEl1tcLcLL1CandidategRcOl1tcLcLL1CandidategRsPgRsPgRsPgR(void *p) {
      delete [] ((::edm::Wrapper<vector<edm::Ref<BXVector<l1t::L1Candidate>,l1t::L1Candidate,edm::refhelper::FindUsingAdvance<BXVector<l1t::L1Candidate>,l1t::L1Candidate> > > >*)p);
   }
   static void destruct_edmcLcLWrapperlEvectorlEedmcLcLReflEBXVectorlEl1tcLcLL1CandidategRcOl1tcLcLL1CandidatecOedmcLcLrefhelpercLcLFindUsingAdvancelEBXVectorlEl1tcLcLL1CandidategRcOl1tcLcLL1CandidategRsPgRsPgRsPgR(void *p) {
      typedef ::edm::Wrapper<vector<edm::Ref<BXVector<l1t::L1Candidate>,l1t::L1Candidate,edm::refhelper::FindUsingAdvance<BXVector<l1t::L1Candidate>,l1t::L1Candidate> > > > current_t;
      ((current_t*)p)->~current_t();
   }
} // end of namespace ROOT for class ::edm::Wrapper<vector<edm::Ref<BXVector<l1t::L1Candidate>,l1t::L1Candidate,edm::refhelper::FindUsingAdvance<BXVector<l1t::L1Candidate>,l1t::L1Candidate> > > >

namespace ROOT {
   // Wrappers around operator new
   static void *new_l1tcLcLJet(void *p) {
      return  p ? ::new((::ROOT::Internal::TOperatorNewHelper*)p) ::l1t::Jet : new ::l1t::Jet;
   }
   static void *newArray_l1tcLcLJet(Long_t nElements, void *p) {
      return p ? ::new((::ROOT::Internal::TOperatorNewHelper*)p) ::l1t::Jet[nElements] : new ::l1t::Jet[nElements];
   }
   // Wrapper around operator delete
   static void delete_l1tcLcLJet(void *p) {
      delete ((::l1t::Jet*)p);
   }
   static void deleteArray_l1tcLcLJet(void *p) {
      delete [] ((::l1t::Jet*)p);
   }
   static void destruct_l1tcLcLJet(void *p) {
      typedef ::l1t::Jet current_t;
      ((current_t*)p)->~current_t();
   }
} // end of namespace ROOT for class ::l1t::Jet

namespace ROOT {
   // Wrappers around operator new
   static void *new_BXVectorlEl1tcLcLJetgR(void *p) {
      return  p ? new(p) ::BXVector<l1t::Jet> : new ::BXVector<l1t::Jet>;
   }
   static void *newArray_BXVectorlEl1tcLcLJetgR(Long_t nElements, void *p) {
      return p ? new(p) ::BXVector<l1t::Jet>[nElements] : new ::BXVector<l1t::Jet>[nElements];
   }
   // Wrapper around operator delete
   static void delete_BXVectorlEl1tcLcLJetgR(void *p) {
      delete ((::BXVector<l1t::Jet>*)p);
   }
   static void deleteArray_BXVectorlEl1tcLcLJetgR(void *p) {
      delete [] ((::BXVector<l1t::Jet>*)p);
   }
   static void destruct_BXVectorlEl1tcLcLJetgR(void *p) {
      typedef ::BXVector<l1t::Jet> current_t;
      ((current_t*)p)->~current_t();
   }
} // end of namespace ROOT for class ::BXVector<l1t::Jet>

namespace ROOT {
   // Wrappers around operator new
   static void *new_edmcLcLWrapperlEBXVectorlEl1tcLcLJetgRsPgR(void *p) {
      return  p ? ::new((::ROOT::Internal::TOperatorNewHelper*)p) ::edm::Wrapper<BXVector<l1t::Jet> > : new ::edm::Wrapper<BXVector<l1t::Jet> >;
   }
   static void *newArray_edmcLcLWrapperlEBXVectorlEl1tcLcLJetgRsPgR(Long_t nElements, void *p) {
      return p ? ::new((::ROOT::Internal::TOperatorNewHelper*)p) ::edm::Wrapper<BXVector<l1t::Jet> >[nElements] : new ::edm::Wrapper<BXVector<l1t::Jet> >[nElements];
   }
   // Wrapper around operator delete
   static void delete_edmcLcLWrapperlEBXVectorlEl1tcLcLJetgRsPgR(void *p) {
      delete ((::edm::Wrapper<BXVector<l1t::Jet> >*)p);
   }
   static void deleteArray_edmcLcLWrapperlEBXVectorlEl1tcLcLJetgRsPgR(void *p) {
      delete [] ((::edm::Wrapper<BXVector<l1t::Jet> >*)p);
   }
   static void destruct_edmcLcLWrapperlEBXVectorlEl1tcLcLJetgRsPgR(void *p) {
      typedef ::edm::Wrapper<BXVector<l1t::Jet> > current_t;
      ((current_t*)p)->~current_t();
   }
} // end of namespace ROOT for class ::edm::Wrapper<BXVector<l1t::Jet> >

namespace ROOT {
   // Wrappers around operator new
   static void *new_edmcLcLReflEBXVectorlEl1tcLcLJetgRcOl1tcLcLJetcOedmcLcLrefhelpercLcLFindUsingAdvancelEBXVectorlEl1tcLcLJetgRcOl1tcLcLJetgRsPgR(void *p) {
      return  p ? ::new((::ROOT::Internal::TOperatorNewHelper*)p) ::edm::Ref<BXVector<l1t::Jet>,l1t::Jet,edm::refhelper::FindUsingAdvance<BXVector<l1t::Jet>,l1t::Jet> > : new ::edm::Ref<BXVector<l1t::Jet>,l1t::Jet,edm::refhelper::FindUsingAdvance<BXVector<l1t::Jet>,l1t::Jet> >;
   }
   static void *newArray_edmcLcLReflEBXVectorlEl1tcLcLJetgRcOl1tcLcLJetcOedmcLcLrefhelpercLcLFindUsingAdvancelEBXVectorlEl1tcLcLJetgRcOl1tcLcLJetgRsPgR(Long_t nElements, void *p) {
      return p ? ::new((::ROOT::Internal::TOperatorNewHelper*)p) ::edm::Ref<BXVector<l1t::Jet>,l1t::Jet,edm::refhelper::FindUsingAdvance<BXVector<l1t::Jet>,l1t::Jet> >[nElements] : new ::edm::Ref<BXVector<l1t::Jet>,l1t::Jet,edm::refhelper::FindUsingAdvance<BXVector<l1t::Jet>,l1t::Jet> >[nElements];
   }
   // Wrapper around operator delete
   static void delete_edmcLcLReflEBXVectorlEl1tcLcLJetgRcOl1tcLcLJetcOedmcLcLrefhelpercLcLFindUsingAdvancelEBXVectorlEl1tcLcLJetgRcOl1tcLcLJetgRsPgR(void *p) {
      delete ((::edm::Ref<BXVector<l1t::Jet>,l1t::Jet,edm::refhelper::FindUsingAdvance<BXVector<l1t::Jet>,l1t::Jet> >*)p);
   }
   static void deleteArray_edmcLcLReflEBXVectorlEl1tcLcLJetgRcOl1tcLcLJetcOedmcLcLrefhelpercLcLFindUsingAdvancelEBXVectorlEl1tcLcLJetgRcOl1tcLcLJetgRsPgR(void *p) {
      delete [] ((::edm::Ref<BXVector<l1t::Jet>,l1t::Jet,edm::refhelper::FindUsingAdvance<BXVector<l1t::Jet>,l1t::Jet> >*)p);
   }
   static void destruct_edmcLcLReflEBXVectorlEl1tcLcLJetgRcOl1tcLcLJetcOedmcLcLrefhelpercLcLFindUsingAdvancelEBXVectorlEl1tcLcLJetgRcOl1tcLcLJetgRsPgR(void *p) {
      typedef ::edm::Ref<BXVector<l1t::Jet>,l1t::Jet,edm::refhelper::FindUsingAdvance<BXVector<l1t::Jet>,l1t::Jet> > current_t;
      ((current_t*)p)->~current_t();
   }
} // end of namespace ROOT for class ::edm::Ref<BXVector<l1t::Jet>,l1t::Jet,edm::refhelper::FindUsingAdvance<BXVector<l1t::Jet>,l1t::Jet> >

namespace ROOT {
   // Wrappers around operator new
   static void *new_edmcLcLWrapperlEedmcLcLReflEBXVectorlEl1tcLcLJetgRcOl1tcLcLJetcOedmcLcLrefhelpercLcLFindUsingAdvancelEBXVectorlEl1tcLcLJetgRcOl1tcLcLJetgRsPgRsPgR(void *p) {
      return  p ? ::new((::ROOT::Internal::TOperatorNewHelper*)p) ::edm::Wrapper<edm::Ref<BXVector<l1t::Jet>,l1t::Jet,edm::refhelper::FindUsingAdvance<BXVector<l1t::Jet>,l1t::Jet> > > : new ::edm::Wrapper<edm::Ref<BXVector<l1t::Jet>,l1t::Jet,edm::refhelper::FindUsingAdvance<BXVector<l1t::Jet>,l1t::Jet> > >;
   }
   static void *newArray_edmcLcLWrapperlEedmcLcLReflEBXVectorlEl1tcLcLJetgRcOl1tcLcLJetcOedmcLcLrefhelpercLcLFindUsingAdvancelEBXVectorlEl1tcLcLJetgRcOl1tcLcLJetgRsPgRsPgR(Long_t nElements, void *p) {
      return p ? ::new((::ROOT::Internal::TOperatorNewHelper*)p) ::edm::Wrapper<edm::Ref<BXVector<l1t::Jet>,l1t::Jet,edm::refhelper::FindUsingAdvance<BXVector<l1t::Jet>,l1t::Jet> > >[nElements] : new ::edm::Wrapper<edm::Ref<BXVector<l1t::Jet>,l1t::Jet,edm::refhelper::FindUsingAdvance<BXVector<l1t::Jet>,l1t::Jet> > >[nElements];
   }
   // Wrapper around operator delete
   static void delete_edmcLcLWrapperlEedmcLcLReflEBXVectorlEl1tcLcLJetgRcOl1tcLcLJetcOedmcLcLrefhelpercLcLFindUsingAdvancelEBXVectorlEl1tcLcLJetgRcOl1tcLcLJetgRsPgRsPgR(void *p) {
      delete ((::edm::Wrapper<edm::Ref<BXVector<l1t::Jet>,l1t::Jet,edm::refhelper::FindUsingAdvance<BXVector<l1t::Jet>,l1t::Jet> > >*)p);
   }
   static void deleteArray_edmcLcLWrapperlEedmcLcLReflEBXVectorlEl1tcLcLJetgRcOl1tcLcLJetcOedmcLcLrefhelpercLcLFindUsingAdvancelEBXVectorlEl1tcLcLJetgRcOl1tcLcLJetgRsPgRsPgR(void *p) {
      delete [] ((::edm::Wrapper<edm::Ref<BXVector<l1t::Jet>,l1t::Jet,edm::refhelper::FindUsingAdvance<BXVector<l1t::Jet>,l1t::Jet> > >*)p);
   }
   static void destruct_edmcLcLWrapperlEedmcLcLReflEBXVectorlEl1tcLcLJetgRcOl1tcLcLJetcOedmcLcLrefhelpercLcLFindUsingAdvancelEBXVectorlEl1tcLcLJetgRcOl1tcLcLJetgRsPgRsPgR(void *p) {
      typedef ::edm::Wrapper<edm::Ref<BXVector<l1t::Jet>,l1t::Jet,edm::refhelper::FindUsingAdvance<BXVector<l1t::Jet>,l1t::Jet> > > current_t;
      ((current_t*)p)->~current_t();
   }
} // end of namespace ROOT for class ::edm::Wrapper<edm::Ref<BXVector<l1t::Jet>,l1t::Jet,edm::refhelper::FindUsingAdvance<BXVector<l1t::Jet>,l1t::Jet> > >

namespace ROOT {
   // Wrappers around operator new
   static void *new_edmcLcLRefVectorlEBXVectorlEl1tcLcLJetgRcOl1tcLcLJetcOedmcLcLrefhelpercLcLFindUsingAdvancelEBXVectorlEl1tcLcLJetgRcOl1tcLcLJetgRsPgR(void *p) {
      return  p ? ::new((::ROOT::Internal::TOperatorNewHelper*)p) ::edm::RefVector<BXVector<l1t::Jet>,l1t::Jet,edm::refhelper::FindUsingAdvance<BXVector<l1t::Jet>,l1t::Jet> > : new ::edm::RefVector<BXVector<l1t::Jet>,l1t::Jet,edm::refhelper::FindUsingAdvance<BXVector<l1t::Jet>,l1t::Jet> >;
   }
   static void *newArray_edmcLcLRefVectorlEBXVectorlEl1tcLcLJetgRcOl1tcLcLJetcOedmcLcLrefhelpercLcLFindUsingAdvancelEBXVectorlEl1tcLcLJetgRcOl1tcLcLJetgRsPgR(Long_t nElements, void *p) {
      return p ? ::new((::ROOT::Internal::TOperatorNewHelper*)p) ::edm::RefVector<BXVector<l1t::Jet>,l1t::Jet,edm::refhelper::FindUsingAdvance<BXVector<l1t::Jet>,l1t::Jet> >[nElements] : new ::edm::RefVector<BXVector<l1t::Jet>,l1t::Jet,edm::refhelper::FindUsingAdvance<BXVector<l1t::Jet>,l1t::Jet> >[nElements];
   }
   // Wrapper around operator delete
   static void delete_edmcLcLRefVectorlEBXVectorlEl1tcLcLJetgRcOl1tcLcLJetcOedmcLcLrefhelpercLcLFindUsingAdvancelEBXVectorlEl1tcLcLJetgRcOl1tcLcLJetgRsPgR(void *p) {
      delete ((::edm::RefVector<BXVector<l1t::Jet>,l1t::Jet,edm::refhelper::FindUsingAdvance<BXVector<l1t::Jet>,l1t::Jet> >*)p);
   }
   static void deleteArray_edmcLcLRefVectorlEBXVectorlEl1tcLcLJetgRcOl1tcLcLJetcOedmcLcLrefhelpercLcLFindUsingAdvancelEBXVectorlEl1tcLcLJetgRcOl1tcLcLJetgRsPgR(void *p) {
      delete [] ((::edm::RefVector<BXVector<l1t::Jet>,l1t::Jet,edm::refhelper::FindUsingAdvance<BXVector<l1t::Jet>,l1t::Jet> >*)p);
   }
   static void destruct_edmcLcLRefVectorlEBXVectorlEl1tcLcLJetgRcOl1tcLcLJetcOedmcLcLrefhelpercLcLFindUsingAdvancelEBXVectorlEl1tcLcLJetgRcOl1tcLcLJetgRsPgR(void *p) {
      typedef ::edm::RefVector<BXVector<l1t::Jet>,l1t::Jet,edm::refhelper::FindUsingAdvance<BXVector<l1t::Jet>,l1t::Jet> > current_t;
      ((current_t*)p)->~current_t();
   }
} // end of namespace ROOT for class ::edm::RefVector<BXVector<l1t::Jet>,l1t::Jet,edm::refhelper::FindUsingAdvance<BXVector<l1t::Jet>,l1t::Jet> >

namespace ROOT {
   // Wrappers around operator new
   static void *new_edmcLcLWrapperlEedmcLcLRefVectorlEBXVectorlEl1tcLcLJetgRcOl1tcLcLJetcOedmcLcLrefhelpercLcLFindUsingAdvancelEBXVectorlEl1tcLcLJetgRcOl1tcLcLJetgRsPgRsPgR(void *p) {
      return  p ? ::new((::ROOT::Internal::TOperatorNewHelper*)p) ::edm::Wrapper<edm::RefVector<BXVector<l1t::Jet>,l1t::Jet,edm::refhelper::FindUsingAdvance<BXVector<l1t::Jet>,l1t::Jet> > > : new ::edm::Wrapper<edm::RefVector<BXVector<l1t::Jet>,l1t::Jet,edm::refhelper::FindUsingAdvance<BXVector<l1t::Jet>,l1t::Jet> > >;
   }
   static void *newArray_edmcLcLWrapperlEedmcLcLRefVectorlEBXVectorlEl1tcLcLJetgRcOl1tcLcLJetcOedmcLcLrefhelpercLcLFindUsingAdvancelEBXVectorlEl1tcLcLJetgRcOl1tcLcLJetgRsPgRsPgR(Long_t nElements, void *p) {
      return p ? ::new((::ROOT::Internal::TOperatorNewHelper*)p) ::edm::Wrapper<edm::RefVector<BXVector<l1t::Jet>,l1t::Jet,edm::refhelper::FindUsingAdvance<BXVector<l1t::Jet>,l1t::Jet> > >[nElements] : new ::edm::Wrapper<edm::RefVector<BXVector<l1t::Jet>,l1t::Jet,edm::refhelper::FindUsingAdvance<BXVector<l1t::Jet>,l1t::Jet> > >[nElements];
   }
   // Wrapper around operator delete
   static void delete_edmcLcLWrapperlEedmcLcLRefVectorlEBXVectorlEl1tcLcLJetgRcOl1tcLcLJetcOedmcLcLrefhelpercLcLFindUsingAdvancelEBXVectorlEl1tcLcLJetgRcOl1tcLcLJetgRsPgRsPgR(void *p) {
      delete ((::edm::Wrapper<edm::RefVector<BXVector<l1t::Jet>,l1t::Jet,edm::refhelper::FindUsingAdvance<BXVector<l1t::Jet>,l1t::Jet> > >*)p);
   }
   static void deleteArray_edmcLcLWrapperlEedmcLcLRefVectorlEBXVectorlEl1tcLcLJetgRcOl1tcLcLJetcOedmcLcLrefhelpercLcLFindUsingAdvancelEBXVectorlEl1tcLcLJetgRcOl1tcLcLJetgRsPgRsPgR(void *p) {
      delete [] ((::edm::Wrapper<edm::RefVector<BXVector<l1t::Jet>,l1t::Jet,edm::refhelper::FindUsingAdvance<BXVector<l1t::Jet>,l1t::Jet> > >*)p);
   }
   static void destruct_edmcLcLWrapperlEedmcLcLRefVectorlEBXVectorlEl1tcLcLJetgRcOl1tcLcLJetcOedmcLcLrefhelpercLcLFindUsingAdvancelEBXVectorlEl1tcLcLJetgRcOl1tcLcLJetgRsPgRsPgR(void *p) {
      typedef ::edm::Wrapper<edm::RefVector<BXVector<l1t::Jet>,l1t::Jet,edm::refhelper::FindUsingAdvance<BXVector<l1t::Jet>,l1t::Jet> > > current_t;
      ((current_t*)p)->~current_t();
   }
} // end of namespace ROOT for class ::edm::Wrapper<edm::RefVector<BXVector<l1t::Jet>,l1t::Jet,edm::refhelper::FindUsingAdvance<BXVector<l1t::Jet>,l1t::Jet> > >

namespace ROOT {
   // Wrappers around operator new
   static void *new_edmcLcLWrapperlEvectorlEedmcLcLReflEBXVectorlEl1tcLcLJetgRcOl1tcLcLJetcOedmcLcLrefhelpercLcLFindUsingAdvancelEBXVectorlEl1tcLcLJetgRcOl1tcLcLJetgRsPgRsPgRsPgR(void *p) {
      return  p ? ::new((::ROOT::Internal::TOperatorNewHelper*)p) ::edm::Wrapper<vector<edm::Ref<BXVector<l1t::Jet>,l1t::Jet,edm::refhelper::FindUsingAdvance<BXVector<l1t::Jet>,l1t::Jet> > > > : new ::edm::Wrapper<vector<edm::Ref<BXVector<l1t::Jet>,l1t::Jet,edm::refhelper::FindUsingAdvance<BXVector<l1t::Jet>,l1t::Jet> > > >;
   }
   static void *newArray_edmcLcLWrapperlEvectorlEedmcLcLReflEBXVectorlEl1tcLcLJetgRcOl1tcLcLJetcOedmcLcLrefhelpercLcLFindUsingAdvancelEBXVectorlEl1tcLcLJetgRcOl1tcLcLJetgRsPgRsPgRsPgR(Long_t nElements, void *p) {
      return p ? ::new((::ROOT::Internal::TOperatorNewHelper*)p) ::edm::Wrapper<vector<edm::Ref<BXVector<l1t::Jet>,l1t::Jet,edm::refhelper::FindUsingAdvance<BXVector<l1t::Jet>,l1t::Jet> > > >[nElements] : new ::edm::Wrapper<vector<edm::Ref<BXVector<l1t::Jet>,l1t::Jet,edm::refhelper::FindUsingAdvance<BXVector<l1t::Jet>,l1t::Jet> > > >[nElements];
   }
   // Wrapper around operator delete
   static void delete_edmcLcLWrapperlEvectorlEedmcLcLReflEBXVectorlEl1tcLcLJetgRcOl1tcLcLJetcOedmcLcLrefhelpercLcLFindUsingAdvancelEBXVectorlEl1tcLcLJetgRcOl1tcLcLJetgRsPgRsPgRsPgR(void *p) {
      delete ((::edm::Wrapper<vector<edm::Ref<BXVector<l1t::Jet>,l1t::Jet,edm::refhelper::FindUsingAdvance<BXVector<l1t::Jet>,l1t::Jet> > > >*)p);
   }
   static void deleteArray_edmcLcLWrapperlEvectorlEedmcLcLReflEBXVectorlEl1tcLcLJetgRcOl1tcLcLJetcOedmcLcLrefhelpercLcLFindUsingAdvancelEBXVectorlEl1tcLcLJetgRcOl1tcLcLJetgRsPgRsPgRsPgR(void *p) {
      delete [] ((::edm::Wrapper<vector<edm::Ref<BXVector<l1t::Jet>,l1t::Jet,edm::refhelper::FindUsingAdvance<BXVector<l1t::Jet>,l1t::Jet> > > >*)p);
   }
   static void destruct_edmcLcLWrapperlEvectorlEedmcLcLReflEBXVectorlEl1tcLcLJetgRcOl1tcLcLJetcOedmcLcLrefhelpercLcLFindUsingAdvancelEBXVectorlEl1tcLcLJetgRcOl1tcLcLJetgRsPgRsPgRsPgR(void *p) {
      typedef ::edm::Wrapper<vector<edm::Ref<BXVector<l1t::Jet>,l1t::Jet,edm::refhelper::FindUsingAdvance<BXVector<l1t::Jet>,l1t::Jet> > > > current_t;
      ((current_t*)p)->~current_t();
   }
} // end of namespace ROOT for class ::edm::Wrapper<vector<edm::Ref<BXVector<l1t::Jet>,l1t::Jet,edm::refhelper::FindUsingAdvance<BXVector<l1t::Jet>,l1t::Jet> > > >

namespace ROOT {
   // Wrappers around operator new
   static void *new_l1tcLcLEGamma(void *p) {
      return  p ? ::new((::ROOT::Internal::TOperatorNewHelper*)p) ::l1t::EGamma : new ::l1t::EGamma;
   }
   static void *newArray_l1tcLcLEGamma(Long_t nElements, void *p) {
      return p ? ::new((::ROOT::Internal::TOperatorNewHelper*)p) ::l1t::EGamma[nElements] : new ::l1t::EGamma[nElements];
   }
   // Wrapper around operator delete
   static void delete_l1tcLcLEGamma(void *p) {
      delete ((::l1t::EGamma*)p);
   }
   static void deleteArray_l1tcLcLEGamma(void *p) {
      delete [] ((::l1t::EGamma*)p);
   }
   static void destruct_l1tcLcLEGamma(void *p) {
      typedef ::l1t::EGamma current_t;
      ((current_t*)p)->~current_t();
   }
} // end of namespace ROOT for class ::l1t::EGamma

namespace ROOT {
   // Wrappers around operator new
   static void *new_BXVectorlEl1tcLcLEGammagR(void *p) {
      return  p ? new(p) ::BXVector<l1t::EGamma> : new ::BXVector<l1t::EGamma>;
   }
   static void *newArray_BXVectorlEl1tcLcLEGammagR(Long_t nElements, void *p) {
      return p ? new(p) ::BXVector<l1t::EGamma>[nElements] : new ::BXVector<l1t::EGamma>[nElements];
   }
   // Wrapper around operator delete
   static void delete_BXVectorlEl1tcLcLEGammagR(void *p) {
      delete ((::BXVector<l1t::EGamma>*)p);
   }
   static void deleteArray_BXVectorlEl1tcLcLEGammagR(void *p) {
      delete [] ((::BXVector<l1t::EGamma>*)p);
   }
   static void destruct_BXVectorlEl1tcLcLEGammagR(void *p) {
      typedef ::BXVector<l1t::EGamma> current_t;
      ((current_t*)p)->~current_t();
   }
} // end of namespace ROOT for class ::BXVector<l1t::EGamma>

namespace ROOT {
   // Wrappers around operator new
   static void *new_edmcLcLWrapperlEBXVectorlEl1tcLcLEGammagRsPgR(void *p) {
      return  p ? ::new((::ROOT::Internal::TOperatorNewHelper*)p) ::edm::Wrapper<BXVector<l1t::EGamma> > : new ::edm::Wrapper<BXVector<l1t::EGamma> >;
   }
   static void *newArray_edmcLcLWrapperlEBXVectorlEl1tcLcLEGammagRsPgR(Long_t nElements, void *p) {
      return p ? ::new((::ROOT::Internal::TOperatorNewHelper*)p) ::edm::Wrapper<BXVector<l1t::EGamma> >[nElements] : new ::edm::Wrapper<BXVector<l1t::EGamma> >[nElements];
   }
   // Wrapper around operator delete
   static void delete_edmcLcLWrapperlEBXVectorlEl1tcLcLEGammagRsPgR(void *p) {
      delete ((::edm::Wrapper<BXVector<l1t::EGamma> >*)p);
   }
   static void deleteArray_edmcLcLWrapperlEBXVectorlEl1tcLcLEGammagRsPgR(void *p) {
      delete [] ((::edm::Wrapper<BXVector<l1t::EGamma> >*)p);
   }
   static void destruct_edmcLcLWrapperlEBXVectorlEl1tcLcLEGammagRsPgR(void *p) {
      typedef ::edm::Wrapper<BXVector<l1t::EGamma> > current_t;
      ((current_t*)p)->~current_t();
   }
} // end of namespace ROOT for class ::edm::Wrapper<BXVector<l1t::EGamma> >

namespace ROOT {
   // Wrappers around operator new
   static void *new_edmcLcLReflEBXVectorlEl1tcLcLEGammagRcOl1tcLcLEGammacOedmcLcLrefhelpercLcLFindUsingAdvancelEBXVectorlEl1tcLcLEGammagRcOl1tcLcLEGammagRsPgR(void *p) {
      return  p ? ::new((::ROOT::Internal::TOperatorNewHelper*)p) ::edm::Ref<BXVector<l1t::EGamma>,l1t::EGamma,edm::refhelper::FindUsingAdvance<BXVector<l1t::EGamma>,l1t::EGamma> > : new ::edm::Ref<BXVector<l1t::EGamma>,l1t::EGamma,edm::refhelper::FindUsingAdvance<BXVector<l1t::EGamma>,l1t::EGamma> >;
   }
   static void *newArray_edmcLcLReflEBXVectorlEl1tcLcLEGammagRcOl1tcLcLEGammacOedmcLcLrefhelpercLcLFindUsingAdvancelEBXVectorlEl1tcLcLEGammagRcOl1tcLcLEGammagRsPgR(Long_t nElements, void *p) {
      return p ? ::new((::ROOT::Internal::TOperatorNewHelper*)p) ::edm::Ref<BXVector<l1t::EGamma>,l1t::EGamma,edm::refhelper::FindUsingAdvance<BXVector<l1t::EGamma>,l1t::EGamma> >[nElements] : new ::edm::Ref<BXVector<l1t::EGamma>,l1t::EGamma,edm::refhelper::FindUsingAdvance<BXVector<l1t::EGamma>,l1t::EGamma> >[nElements];
   }
   // Wrapper around operator delete
   static void delete_edmcLcLReflEBXVectorlEl1tcLcLEGammagRcOl1tcLcLEGammacOedmcLcLrefhelpercLcLFindUsingAdvancelEBXVectorlEl1tcLcLEGammagRcOl1tcLcLEGammagRsPgR(void *p) {
      delete ((::edm::Ref<BXVector<l1t::EGamma>,l1t::EGamma,edm::refhelper::FindUsingAdvance<BXVector<l1t::EGamma>,l1t::EGamma> >*)p);
   }
   static void deleteArray_edmcLcLReflEBXVectorlEl1tcLcLEGammagRcOl1tcLcLEGammacOedmcLcLrefhelpercLcLFindUsingAdvancelEBXVectorlEl1tcLcLEGammagRcOl1tcLcLEGammagRsPgR(void *p) {
      delete [] ((::edm::Ref<BXVector<l1t::EGamma>,l1t::EGamma,edm::refhelper::FindUsingAdvance<BXVector<l1t::EGamma>,l1t::EGamma> >*)p);
   }
   static void destruct_edmcLcLReflEBXVectorlEl1tcLcLEGammagRcOl1tcLcLEGammacOedmcLcLrefhelpercLcLFindUsingAdvancelEBXVectorlEl1tcLcLEGammagRcOl1tcLcLEGammagRsPgR(void *p) {
      typedef ::edm::Ref<BXVector<l1t::EGamma>,l1t::EGamma,edm::refhelper::FindUsingAdvance<BXVector<l1t::EGamma>,l1t::EGamma> > current_t;
      ((current_t*)p)->~current_t();
   }
} // end of namespace ROOT for class ::edm::Ref<BXVector<l1t::EGamma>,l1t::EGamma,edm::refhelper::FindUsingAdvance<BXVector<l1t::EGamma>,l1t::EGamma> >

namespace ROOT {
   // Wrappers around operator new
   static void *new_edmcLcLWrapperlEedmcLcLReflEBXVectorlEl1tcLcLEGammagRcOl1tcLcLEGammacOedmcLcLrefhelpercLcLFindUsingAdvancelEBXVectorlEl1tcLcLEGammagRcOl1tcLcLEGammagRsPgRsPgR(void *p) {
      return  p ? ::new((::ROOT::Internal::TOperatorNewHelper*)p) ::edm::Wrapper<edm::Ref<BXVector<l1t::EGamma>,l1t::EGamma,edm::refhelper::FindUsingAdvance<BXVector<l1t::EGamma>,l1t::EGamma> > > : new ::edm::Wrapper<edm::Ref<BXVector<l1t::EGamma>,l1t::EGamma,edm::refhelper::FindUsingAdvance<BXVector<l1t::EGamma>,l1t::EGamma> > >;
   }
   static void *newArray_edmcLcLWrapperlEedmcLcLReflEBXVectorlEl1tcLcLEGammagRcOl1tcLcLEGammacOedmcLcLrefhelpercLcLFindUsingAdvancelEBXVectorlEl1tcLcLEGammagRcOl1tcLcLEGammagRsPgRsPgR(Long_t nElements, void *p) {
      return p ? ::new((::ROOT::Internal::TOperatorNewHelper*)p) ::edm::Wrapper<edm::Ref<BXVector<l1t::EGamma>,l1t::EGamma,edm::refhelper::FindUsingAdvance<BXVector<l1t::EGamma>,l1t::EGamma> > >[nElements] : new ::edm::Wrapper<edm::Ref<BXVector<l1t::EGamma>,l1t::EGamma,edm::refhelper::FindUsingAdvance<BXVector<l1t::EGamma>,l1t::EGamma> > >[nElements];
   }
   // Wrapper around operator delete
   static void delete_edmcLcLWrapperlEedmcLcLReflEBXVectorlEl1tcLcLEGammagRcOl1tcLcLEGammacOedmcLcLrefhelpercLcLFindUsingAdvancelEBXVectorlEl1tcLcLEGammagRcOl1tcLcLEGammagRsPgRsPgR(void *p) {
      delete ((::edm::Wrapper<edm::Ref<BXVector<l1t::EGamma>,l1t::EGamma,edm::refhelper::FindUsingAdvance<BXVector<l1t::EGamma>,l1t::EGamma> > >*)p);
   }
   static void deleteArray_edmcLcLWrapperlEedmcLcLReflEBXVectorlEl1tcLcLEGammagRcOl1tcLcLEGammacOedmcLcLrefhelpercLcLFindUsingAdvancelEBXVectorlEl1tcLcLEGammagRcOl1tcLcLEGammagRsPgRsPgR(void *p) {
      delete [] ((::edm::Wrapper<edm::Ref<BXVector<l1t::EGamma>,l1t::EGamma,edm::refhelper::FindUsingAdvance<BXVector<l1t::EGamma>,l1t::EGamma> > >*)p);
   }
   static void destruct_edmcLcLWrapperlEedmcLcLReflEBXVectorlEl1tcLcLEGammagRcOl1tcLcLEGammacOedmcLcLrefhelpercLcLFindUsingAdvancelEBXVectorlEl1tcLcLEGammagRcOl1tcLcLEGammagRsPgRsPgR(void *p) {
      typedef ::edm::Wrapper<edm::Ref<BXVector<l1t::EGamma>,l1t::EGamma,edm::refhelper::FindUsingAdvance<BXVector<l1t::EGamma>,l1t::EGamma> > > current_t;
      ((current_t*)p)->~current_t();
   }
} // end of namespace ROOT for class ::edm::Wrapper<edm::Ref<BXVector<l1t::EGamma>,l1t::EGamma,edm::refhelper::FindUsingAdvance<BXVector<l1t::EGamma>,l1t::EGamma> > >

namespace ROOT {
   // Wrappers around operator new
   static void *new_edmcLcLRefVectorlEBXVectorlEl1tcLcLEGammagRcOl1tcLcLEGammacOedmcLcLrefhelpercLcLFindUsingAdvancelEBXVectorlEl1tcLcLEGammagRcOl1tcLcLEGammagRsPgR(void *p) {
      return  p ? ::new((::ROOT::Internal::TOperatorNewHelper*)p) ::edm::RefVector<BXVector<l1t::EGamma>,l1t::EGamma,edm::refhelper::FindUsingAdvance<BXVector<l1t::EGamma>,l1t::EGamma> > : new ::edm::RefVector<BXVector<l1t::EGamma>,l1t::EGamma,edm::refhelper::FindUsingAdvance<BXVector<l1t::EGamma>,l1t::EGamma> >;
   }
   static void *newArray_edmcLcLRefVectorlEBXVectorlEl1tcLcLEGammagRcOl1tcLcLEGammacOedmcLcLrefhelpercLcLFindUsingAdvancelEBXVectorlEl1tcLcLEGammagRcOl1tcLcLEGammagRsPgR(Long_t nElements, void *p) {
      return p ? ::new((::ROOT::Internal::TOperatorNewHelper*)p) ::edm::RefVector<BXVector<l1t::EGamma>,l1t::EGamma,edm::refhelper::FindUsingAdvance<BXVector<l1t::EGamma>,l1t::EGamma> >[nElements] : new ::edm::RefVector<BXVector<l1t::EGamma>,l1t::EGamma,edm::refhelper::FindUsingAdvance<BXVector<l1t::EGamma>,l1t::EGamma> >[nElements];
   }
   // Wrapper around operator delete
   static void delete_edmcLcLRefVectorlEBXVectorlEl1tcLcLEGammagRcOl1tcLcLEGammacOedmcLcLrefhelpercLcLFindUsingAdvancelEBXVectorlEl1tcLcLEGammagRcOl1tcLcLEGammagRsPgR(void *p) {
      delete ((::edm::RefVector<BXVector<l1t::EGamma>,l1t::EGamma,edm::refhelper::FindUsingAdvance<BXVector<l1t::EGamma>,l1t::EGamma> >*)p);
   }
   static void deleteArray_edmcLcLRefVectorlEBXVectorlEl1tcLcLEGammagRcOl1tcLcLEGammacOedmcLcLrefhelpercLcLFindUsingAdvancelEBXVectorlEl1tcLcLEGammagRcOl1tcLcLEGammagRsPgR(void *p) {
      delete [] ((::edm::RefVector<BXVector<l1t::EGamma>,l1t::EGamma,edm::refhelper::FindUsingAdvance<BXVector<l1t::EGamma>,l1t::EGamma> >*)p);
   }
   static void destruct_edmcLcLRefVectorlEBXVectorlEl1tcLcLEGammagRcOl1tcLcLEGammacOedmcLcLrefhelpercLcLFindUsingAdvancelEBXVectorlEl1tcLcLEGammagRcOl1tcLcLEGammagRsPgR(void *p) {
      typedef ::edm::RefVector<BXVector<l1t::EGamma>,l1t::EGamma,edm::refhelper::FindUsingAdvance<BXVector<l1t::EGamma>,l1t::EGamma> > current_t;
      ((current_t*)p)->~current_t();
   }
} // end of namespace ROOT for class ::edm::RefVector<BXVector<l1t::EGamma>,l1t::EGamma,edm::refhelper::FindUsingAdvance<BXVector<l1t::EGamma>,l1t::EGamma> >

namespace ROOT {
   // Wrappers around operator new
   static void *new_edmcLcLWrapperlEedmcLcLRefVectorlEBXVectorlEl1tcLcLEGammagRcOl1tcLcLEGammacOedmcLcLrefhelpercLcLFindUsingAdvancelEBXVectorlEl1tcLcLEGammagRcOl1tcLcLEGammagRsPgRsPgR(void *p) {
      return  p ? ::new((::ROOT::Internal::TOperatorNewHelper*)p) ::edm::Wrapper<edm::RefVector<BXVector<l1t::EGamma>,l1t::EGamma,edm::refhelper::FindUsingAdvance<BXVector<l1t::EGamma>,l1t::EGamma> > > : new ::edm::Wrapper<edm::RefVector<BXVector<l1t::EGamma>,l1t::EGamma,edm::refhelper::FindUsingAdvance<BXVector<l1t::EGamma>,l1t::EGamma> > >;
   }
   static void *newArray_edmcLcLWrapperlEedmcLcLRefVectorlEBXVectorlEl1tcLcLEGammagRcOl1tcLcLEGammacOedmcLcLrefhelpercLcLFindUsingAdvancelEBXVectorlEl1tcLcLEGammagRcOl1tcLcLEGammagRsPgRsPgR(Long_t nElements, void *p) {
      return p ? ::new((::ROOT::Internal::TOperatorNewHelper*)p) ::edm::Wrapper<edm::RefVector<BXVector<l1t::EGamma>,l1t::EGamma,edm::refhelper::FindUsingAdvance<BXVector<l1t::EGamma>,l1t::EGamma> > >[nElements] : new ::edm::Wrapper<edm::RefVector<BXVector<l1t::EGamma>,l1t::EGamma,edm::refhelper::FindUsingAdvance<BXVector<l1t::EGamma>,l1t::EGamma> > >[nElements];
   }
   // Wrapper around operator delete
   static void delete_edmcLcLWrapperlEedmcLcLRefVectorlEBXVectorlEl1tcLcLEGammagRcOl1tcLcLEGammacOedmcLcLrefhelpercLcLFindUsingAdvancelEBXVectorlEl1tcLcLEGammagRcOl1tcLcLEGammagRsPgRsPgR(void *p) {
      delete ((::edm::Wrapper<edm::RefVector<BXVector<l1t::EGamma>,l1t::EGamma,edm::refhelper::FindUsingAdvance<BXVector<l1t::EGamma>,l1t::EGamma> > >*)p);
   }
   static void deleteArray_edmcLcLWrapperlEedmcLcLRefVectorlEBXVectorlEl1tcLcLEGammagRcOl1tcLcLEGammacOedmcLcLrefhelpercLcLFindUsingAdvancelEBXVectorlEl1tcLcLEGammagRcOl1tcLcLEGammagRsPgRsPgR(void *p) {
      delete [] ((::edm::Wrapper<edm::RefVector<BXVector<l1t::EGamma>,l1t::EGamma,edm::refhelper::FindUsingAdvance<BXVector<l1t::EGamma>,l1t::EGamma> > >*)p);
   }
   static void destruct_edmcLcLWrapperlEedmcLcLRefVectorlEBXVectorlEl1tcLcLEGammagRcOl1tcLcLEGammacOedmcLcLrefhelpercLcLFindUsingAdvancelEBXVectorlEl1tcLcLEGammagRcOl1tcLcLEGammagRsPgRsPgR(void *p) {
      typedef ::edm::Wrapper<edm::RefVector<BXVector<l1t::EGamma>,l1t::EGamma,edm::refhelper::FindUsingAdvance<BXVector<l1t::EGamma>,l1t::EGamma> > > current_t;
      ((current_t*)p)->~current_t();
   }
} // end of namespace ROOT for class ::edm::Wrapper<edm::RefVector<BXVector<l1t::EGamma>,l1t::EGamma,edm::refhelper::FindUsingAdvance<BXVector<l1t::EGamma>,l1t::EGamma> > >

namespace ROOT {
   // Wrappers around operator new
   static void *new_edmcLcLWrapperlEvectorlEedmcLcLReflEBXVectorlEl1tcLcLEGammagRcOl1tcLcLEGammacOedmcLcLrefhelpercLcLFindUsingAdvancelEBXVectorlEl1tcLcLEGammagRcOl1tcLcLEGammagRsPgRsPgRsPgR(void *p) {
      return  p ? ::new((::ROOT::Internal::TOperatorNewHelper*)p) ::edm::Wrapper<vector<edm::Ref<BXVector<l1t::EGamma>,l1t::EGamma,edm::refhelper::FindUsingAdvance<BXVector<l1t::EGamma>,l1t::EGamma> > > > : new ::edm::Wrapper<vector<edm::Ref<BXVector<l1t::EGamma>,l1t::EGamma,edm::refhelper::FindUsingAdvance<BXVector<l1t::EGamma>,l1t::EGamma> > > >;
   }
   static void *newArray_edmcLcLWrapperlEvectorlEedmcLcLReflEBXVectorlEl1tcLcLEGammagRcOl1tcLcLEGammacOedmcLcLrefhelpercLcLFindUsingAdvancelEBXVectorlEl1tcLcLEGammagRcOl1tcLcLEGammagRsPgRsPgRsPgR(Long_t nElements, void *p) {
      return p ? ::new((::ROOT::Internal::TOperatorNewHelper*)p) ::edm::Wrapper<vector<edm::Ref<BXVector<l1t::EGamma>,l1t::EGamma,edm::refhelper::FindUsingAdvance<BXVector<l1t::EGamma>,l1t::EGamma> > > >[nElements] : new ::edm::Wrapper<vector<edm::Ref<BXVector<l1t::EGamma>,l1t::EGamma,edm::refhelper::FindUsingAdvance<BXVector<l1t::EGamma>,l1t::EGamma> > > >[nElements];
   }
   // Wrapper around operator delete
   static void delete_edmcLcLWrapperlEvectorlEedmcLcLReflEBXVectorlEl1tcLcLEGammagRcOl1tcLcLEGammacOedmcLcLrefhelpercLcLFindUsingAdvancelEBXVectorlEl1tcLcLEGammagRcOl1tcLcLEGammagRsPgRsPgRsPgR(void *p) {
      delete ((::edm::Wrapper<vector<edm::Ref<BXVector<l1t::EGamma>,l1t::EGamma,edm::refhelper::FindUsingAdvance<BXVector<l1t::EGamma>,l1t::EGamma> > > >*)p);
   }
   static void deleteArray_edmcLcLWrapperlEvectorlEedmcLcLReflEBXVectorlEl1tcLcLEGammagRcOl1tcLcLEGammacOedmcLcLrefhelpercLcLFindUsingAdvancelEBXVectorlEl1tcLcLEGammagRcOl1tcLcLEGammagRsPgRsPgRsPgR(void *p) {
      delete [] ((::edm::Wrapper<vector<edm::Ref<BXVector<l1t::EGamma>,l1t::EGamma,edm::refhelper::FindUsingAdvance<BXVector<l1t::EGamma>,l1t::EGamma> > > >*)p);
   }
   static void destruct_edmcLcLWrapperlEvectorlEedmcLcLReflEBXVectorlEl1tcLcLEGammagRcOl1tcLcLEGammacOedmcLcLrefhelpercLcLFindUsingAdvancelEBXVectorlEl1tcLcLEGammagRcOl1tcLcLEGammagRsPgRsPgRsPgR(void *p) {
      typedef ::edm::Wrapper<vector<edm::Ref<BXVector<l1t::EGamma>,l1t::EGamma,edm::refhelper::FindUsingAdvance<BXVector<l1t::EGamma>,l1t::EGamma> > > > current_t;
      ((current_t*)p)->~current_t();
   }
} // end of namespace ROOT for class ::edm::Wrapper<vector<edm::Ref<BXVector<l1t::EGamma>,l1t::EGamma,edm::refhelper::FindUsingAdvance<BXVector<l1t::EGamma>,l1t::EGamma> > > >

namespace ROOT {
   // Wrappers around operator new
   static void *new_l1tcLcLEtSum(void *p) {
      return  p ? ::new((::ROOT::Internal::TOperatorNewHelper*)p) ::l1t::EtSum : new ::l1t::EtSum;
   }
   static void *newArray_l1tcLcLEtSum(Long_t nElements, void *p) {
      return p ? ::new((::ROOT::Internal::TOperatorNewHelper*)p) ::l1t::EtSum[nElements] : new ::l1t::EtSum[nElements];
   }
   // Wrapper around operator delete
   static void delete_l1tcLcLEtSum(void *p) {
      delete ((::l1t::EtSum*)p);
   }
   static void deleteArray_l1tcLcLEtSum(void *p) {
      delete [] ((::l1t::EtSum*)p);
   }
   static void destruct_l1tcLcLEtSum(void *p) {
      typedef ::l1t::EtSum current_t;
      ((current_t*)p)->~current_t();
   }
} // end of namespace ROOT for class ::l1t::EtSum

namespace ROOT {
   // Wrappers around operator new
   static void *new_BXVectorlEl1tcLcLEtSumgR(void *p) {
      return  p ? new(p) ::BXVector<l1t::EtSum> : new ::BXVector<l1t::EtSum>;
   }
   static void *newArray_BXVectorlEl1tcLcLEtSumgR(Long_t nElements, void *p) {
      return p ? new(p) ::BXVector<l1t::EtSum>[nElements] : new ::BXVector<l1t::EtSum>[nElements];
   }
   // Wrapper around operator delete
   static void delete_BXVectorlEl1tcLcLEtSumgR(void *p) {
      delete ((::BXVector<l1t::EtSum>*)p);
   }
   static void deleteArray_BXVectorlEl1tcLcLEtSumgR(void *p) {
      delete [] ((::BXVector<l1t::EtSum>*)p);
   }
   static void destruct_BXVectorlEl1tcLcLEtSumgR(void *p) {
      typedef ::BXVector<l1t::EtSum> current_t;
      ((current_t*)p)->~current_t();
   }
} // end of namespace ROOT for class ::BXVector<l1t::EtSum>

namespace ROOT {
   // Wrappers around operator new
   static void *new_edmcLcLWrapperlEBXVectorlEl1tcLcLEtSumgRsPgR(void *p) {
      return  p ? ::new((::ROOT::Internal::TOperatorNewHelper*)p) ::edm::Wrapper<BXVector<l1t::EtSum> > : new ::edm::Wrapper<BXVector<l1t::EtSum> >;
   }
   static void *newArray_edmcLcLWrapperlEBXVectorlEl1tcLcLEtSumgRsPgR(Long_t nElements, void *p) {
      return p ? ::new((::ROOT::Internal::TOperatorNewHelper*)p) ::edm::Wrapper<BXVector<l1t::EtSum> >[nElements] : new ::edm::Wrapper<BXVector<l1t::EtSum> >[nElements];
   }
   // Wrapper around operator delete
   static void delete_edmcLcLWrapperlEBXVectorlEl1tcLcLEtSumgRsPgR(void *p) {
      delete ((::edm::Wrapper<BXVector<l1t::EtSum> >*)p);
   }
   static void deleteArray_edmcLcLWrapperlEBXVectorlEl1tcLcLEtSumgRsPgR(void *p) {
      delete [] ((::edm::Wrapper<BXVector<l1t::EtSum> >*)p);
   }
   static void destruct_edmcLcLWrapperlEBXVectorlEl1tcLcLEtSumgRsPgR(void *p) {
      typedef ::edm::Wrapper<BXVector<l1t::EtSum> > current_t;
      ((current_t*)p)->~current_t();
   }
} // end of namespace ROOT for class ::edm::Wrapper<BXVector<l1t::EtSum> >

namespace ROOT {
   // Wrappers around operator new
   static void *new_edmcLcLReflEBXVectorlEl1tcLcLEtSumgRcOl1tcLcLEtSumcOedmcLcLrefhelpercLcLFindUsingAdvancelEBXVectorlEl1tcLcLEtSumgRcOl1tcLcLEtSumgRsPgR(void *p) {
      return  p ? ::new((::ROOT::Internal::TOperatorNewHelper*)p) ::edm::Ref<BXVector<l1t::EtSum>,l1t::EtSum,edm::refhelper::FindUsingAdvance<BXVector<l1t::EtSum>,l1t::EtSum> > : new ::edm::Ref<BXVector<l1t::EtSum>,l1t::EtSum,edm::refhelper::FindUsingAdvance<BXVector<l1t::EtSum>,l1t::EtSum> >;
   }
   static void *newArray_edmcLcLReflEBXVectorlEl1tcLcLEtSumgRcOl1tcLcLEtSumcOedmcLcLrefhelpercLcLFindUsingAdvancelEBXVectorlEl1tcLcLEtSumgRcOl1tcLcLEtSumgRsPgR(Long_t nElements, void *p) {
      return p ? ::new((::ROOT::Internal::TOperatorNewHelper*)p) ::edm::Ref<BXVector<l1t::EtSum>,l1t::EtSum,edm::refhelper::FindUsingAdvance<BXVector<l1t::EtSum>,l1t::EtSum> >[nElements] : new ::edm::Ref<BXVector<l1t::EtSum>,l1t::EtSum,edm::refhelper::FindUsingAdvance<BXVector<l1t::EtSum>,l1t::EtSum> >[nElements];
   }
   // Wrapper around operator delete
   static void delete_edmcLcLReflEBXVectorlEl1tcLcLEtSumgRcOl1tcLcLEtSumcOedmcLcLrefhelpercLcLFindUsingAdvancelEBXVectorlEl1tcLcLEtSumgRcOl1tcLcLEtSumgRsPgR(void *p) {
      delete ((::edm::Ref<BXVector<l1t::EtSum>,l1t::EtSum,edm::refhelper::FindUsingAdvance<BXVector<l1t::EtSum>,l1t::EtSum> >*)p);
   }
   static void deleteArray_edmcLcLReflEBXVectorlEl1tcLcLEtSumgRcOl1tcLcLEtSumcOedmcLcLrefhelpercLcLFindUsingAdvancelEBXVectorlEl1tcLcLEtSumgRcOl1tcLcLEtSumgRsPgR(void *p) {
      delete [] ((::edm::Ref<BXVector<l1t::EtSum>,l1t::EtSum,edm::refhelper::FindUsingAdvance<BXVector<l1t::EtSum>,l1t::EtSum> >*)p);
   }
   static void destruct_edmcLcLReflEBXVectorlEl1tcLcLEtSumgRcOl1tcLcLEtSumcOedmcLcLrefhelpercLcLFindUsingAdvancelEBXVectorlEl1tcLcLEtSumgRcOl1tcLcLEtSumgRsPgR(void *p) {
      typedef ::edm::Ref<BXVector<l1t::EtSum>,l1t::EtSum,edm::refhelper::FindUsingAdvance<BXVector<l1t::EtSum>,l1t::EtSum> > current_t;
      ((current_t*)p)->~current_t();
   }
} // end of namespace ROOT for class ::edm::Ref<BXVector<l1t::EtSum>,l1t::EtSum,edm::refhelper::FindUsingAdvance<BXVector<l1t::EtSum>,l1t::EtSum> >

namespace ROOT {
   // Wrappers around operator new
   static void *new_edmcLcLWrapperlEedmcLcLReflEBXVectorlEl1tcLcLEtSumgRcOl1tcLcLEtSumcOedmcLcLrefhelpercLcLFindUsingAdvancelEBXVectorlEl1tcLcLEtSumgRcOl1tcLcLEtSumgRsPgRsPgR(void *p) {
      return  p ? ::new((::ROOT::Internal::TOperatorNewHelper*)p) ::edm::Wrapper<edm::Ref<BXVector<l1t::EtSum>,l1t::EtSum,edm::refhelper::FindUsingAdvance<BXVector<l1t::EtSum>,l1t::EtSum> > > : new ::edm::Wrapper<edm::Ref<BXVector<l1t::EtSum>,l1t::EtSum,edm::refhelper::FindUsingAdvance<BXVector<l1t::EtSum>,l1t::EtSum> > >;
   }
   static void *newArray_edmcLcLWrapperlEedmcLcLReflEBXVectorlEl1tcLcLEtSumgRcOl1tcLcLEtSumcOedmcLcLrefhelpercLcLFindUsingAdvancelEBXVectorlEl1tcLcLEtSumgRcOl1tcLcLEtSumgRsPgRsPgR(Long_t nElements, void *p) {
      return p ? ::new((::ROOT::Internal::TOperatorNewHelper*)p) ::edm::Wrapper<edm::Ref<BXVector<l1t::EtSum>,l1t::EtSum,edm::refhelper::FindUsingAdvance<BXVector<l1t::EtSum>,l1t::EtSum> > >[nElements] : new ::edm::Wrapper<edm::Ref<BXVector<l1t::EtSum>,l1t::EtSum,edm::refhelper::FindUsingAdvance<BXVector<l1t::EtSum>,l1t::EtSum> > >[nElements];
   }
   // Wrapper around operator delete
   static void delete_edmcLcLWrapperlEedmcLcLReflEBXVectorlEl1tcLcLEtSumgRcOl1tcLcLEtSumcOedmcLcLrefhelpercLcLFindUsingAdvancelEBXVectorlEl1tcLcLEtSumgRcOl1tcLcLEtSumgRsPgRsPgR(void *p) {
      delete ((::edm::Wrapper<edm::Ref<BXVector<l1t::EtSum>,l1t::EtSum,edm::refhelper::FindUsingAdvance<BXVector<l1t::EtSum>,l1t::EtSum> > >*)p);
   }
   static void deleteArray_edmcLcLWrapperlEedmcLcLReflEBXVectorlEl1tcLcLEtSumgRcOl1tcLcLEtSumcOedmcLcLrefhelpercLcLFindUsingAdvancelEBXVectorlEl1tcLcLEtSumgRcOl1tcLcLEtSumgRsPgRsPgR(void *p) {
      delete [] ((::edm::Wrapper<edm::Ref<BXVector<l1t::EtSum>,l1t::EtSum,edm::refhelper::FindUsingAdvance<BXVector<l1t::EtSum>,l1t::EtSum> > >*)p);
   }
   static void destruct_edmcLcLWrapperlEedmcLcLReflEBXVectorlEl1tcLcLEtSumgRcOl1tcLcLEtSumcOedmcLcLrefhelpercLcLFindUsingAdvancelEBXVectorlEl1tcLcLEtSumgRcOl1tcLcLEtSumgRsPgRsPgR(void *p) {
      typedef ::edm::Wrapper<edm::Ref<BXVector<l1t::EtSum>,l1t::EtSum,edm::refhelper::FindUsingAdvance<BXVector<l1t::EtSum>,l1t::EtSum> > > current_t;
      ((current_t*)p)->~current_t();
   }
} // end of namespace ROOT for class ::edm::Wrapper<edm::Ref<BXVector<l1t::EtSum>,l1t::EtSum,edm::refhelper::FindUsingAdvance<BXVector<l1t::EtSum>,l1t::EtSum> > >

namespace ROOT {
   // Wrappers around operator new
   static void *new_edmcLcLRefVectorlEBXVectorlEl1tcLcLEtSumgRcOl1tcLcLEtSumcOedmcLcLrefhelpercLcLFindUsingAdvancelEBXVectorlEl1tcLcLEtSumgRcOl1tcLcLEtSumgRsPgR(void *p) {
      return  p ? ::new((::ROOT::Internal::TOperatorNewHelper*)p) ::edm::RefVector<BXVector<l1t::EtSum>,l1t::EtSum,edm::refhelper::FindUsingAdvance<BXVector<l1t::EtSum>,l1t::EtSum> > : new ::edm::RefVector<BXVector<l1t::EtSum>,l1t::EtSum,edm::refhelper::FindUsingAdvance<BXVector<l1t::EtSum>,l1t::EtSum> >;
   }
   static void *newArray_edmcLcLRefVectorlEBXVectorlEl1tcLcLEtSumgRcOl1tcLcLEtSumcOedmcLcLrefhelpercLcLFindUsingAdvancelEBXVectorlEl1tcLcLEtSumgRcOl1tcLcLEtSumgRsPgR(Long_t nElements, void *p) {
      return p ? ::new((::ROOT::Internal::TOperatorNewHelper*)p) ::edm::RefVector<BXVector<l1t::EtSum>,l1t::EtSum,edm::refhelper::FindUsingAdvance<BXVector<l1t::EtSum>,l1t::EtSum> >[nElements] : new ::edm::RefVector<BXVector<l1t::EtSum>,l1t::EtSum,edm::refhelper::FindUsingAdvance<BXVector<l1t::EtSum>,l1t::EtSum> >[nElements];
   }
   // Wrapper around operator delete
   static void delete_edmcLcLRefVectorlEBXVectorlEl1tcLcLEtSumgRcOl1tcLcLEtSumcOedmcLcLrefhelpercLcLFindUsingAdvancelEBXVectorlEl1tcLcLEtSumgRcOl1tcLcLEtSumgRsPgR(void *p) {
      delete ((::edm::RefVector<BXVector<l1t::EtSum>,l1t::EtSum,edm::refhelper::FindUsingAdvance<BXVector<l1t::EtSum>,l1t::EtSum> >*)p);
   }
   static void deleteArray_edmcLcLRefVectorlEBXVectorlEl1tcLcLEtSumgRcOl1tcLcLEtSumcOedmcLcLrefhelpercLcLFindUsingAdvancelEBXVectorlEl1tcLcLEtSumgRcOl1tcLcLEtSumgRsPgR(void *p) {
      delete [] ((::edm::RefVector<BXVector<l1t::EtSum>,l1t::EtSum,edm::refhelper::FindUsingAdvance<BXVector<l1t::EtSum>,l1t::EtSum> >*)p);
   }
   static void destruct_edmcLcLRefVectorlEBXVectorlEl1tcLcLEtSumgRcOl1tcLcLEtSumcOedmcLcLrefhelpercLcLFindUsingAdvancelEBXVectorlEl1tcLcLEtSumgRcOl1tcLcLEtSumgRsPgR(void *p) {
      typedef ::edm::RefVector<BXVector<l1t::EtSum>,l1t::EtSum,edm::refhelper::FindUsingAdvance<BXVector<l1t::EtSum>,l1t::EtSum> > current_t;
      ((current_t*)p)->~current_t();
   }
} // end of namespace ROOT for class ::edm::RefVector<BXVector<l1t::EtSum>,l1t::EtSum,edm::refhelper::FindUsingAdvance<BXVector<l1t::EtSum>,l1t::EtSum> >

namespace ROOT {
   // Wrappers around operator new
   static void *new_edmcLcLWrapperlEedmcLcLRefVectorlEBXVectorlEl1tcLcLEtSumgRcOl1tcLcLEtSumcOedmcLcLrefhelpercLcLFindUsingAdvancelEBXVectorlEl1tcLcLEtSumgRcOl1tcLcLEtSumgRsPgRsPgR(void *p) {
      return  p ? ::new((::ROOT::Internal::TOperatorNewHelper*)p) ::edm::Wrapper<edm::RefVector<BXVector<l1t::EtSum>,l1t::EtSum,edm::refhelper::FindUsingAdvance<BXVector<l1t::EtSum>,l1t::EtSum> > > : new ::edm::Wrapper<edm::RefVector<BXVector<l1t::EtSum>,l1t::EtSum,edm::refhelper::FindUsingAdvance<BXVector<l1t::EtSum>,l1t::EtSum> > >;
   }
   static void *newArray_edmcLcLWrapperlEedmcLcLRefVectorlEBXVectorlEl1tcLcLEtSumgRcOl1tcLcLEtSumcOedmcLcLrefhelpercLcLFindUsingAdvancelEBXVectorlEl1tcLcLEtSumgRcOl1tcLcLEtSumgRsPgRsPgR(Long_t nElements, void *p) {
      return p ? ::new((::ROOT::Internal::TOperatorNewHelper*)p) ::edm::Wrapper<edm::RefVector<BXVector<l1t::EtSum>,l1t::EtSum,edm::refhelper::FindUsingAdvance<BXVector<l1t::EtSum>,l1t::EtSum> > >[nElements] : new ::edm::Wrapper<edm::RefVector<BXVector<l1t::EtSum>,l1t::EtSum,edm::refhelper::FindUsingAdvance<BXVector<l1t::EtSum>,l1t::EtSum> > >[nElements];
   }
   // Wrapper around operator delete
   static void delete_edmcLcLWrapperlEedmcLcLRefVectorlEBXVectorlEl1tcLcLEtSumgRcOl1tcLcLEtSumcOedmcLcLrefhelpercLcLFindUsingAdvancelEBXVectorlEl1tcLcLEtSumgRcOl1tcLcLEtSumgRsPgRsPgR(void *p) {
      delete ((::edm::Wrapper<edm::RefVector<BXVector<l1t::EtSum>,l1t::EtSum,edm::refhelper::FindUsingAdvance<BXVector<l1t::EtSum>,l1t::EtSum> > >*)p);
   }
   static void deleteArray_edmcLcLWrapperlEedmcLcLRefVectorlEBXVectorlEl1tcLcLEtSumgRcOl1tcLcLEtSumcOedmcLcLrefhelpercLcLFindUsingAdvancelEBXVectorlEl1tcLcLEtSumgRcOl1tcLcLEtSumgRsPgRsPgR(void *p) {
      delete [] ((::edm::Wrapper<edm::RefVector<BXVector<l1t::EtSum>,l1t::EtSum,edm::refhelper::FindUsingAdvance<BXVector<l1t::EtSum>,l1t::EtSum> > >*)p);
   }
   static void destruct_edmcLcLWrapperlEedmcLcLRefVectorlEBXVectorlEl1tcLcLEtSumgRcOl1tcLcLEtSumcOedmcLcLrefhelpercLcLFindUsingAdvancelEBXVectorlEl1tcLcLEtSumgRcOl1tcLcLEtSumgRsPgRsPgR(void *p) {
      typedef ::edm::Wrapper<edm::RefVector<BXVector<l1t::EtSum>,l1t::EtSum,edm::refhelper::FindUsingAdvance<BXVector<l1t::EtSum>,l1t::EtSum> > > current_t;
      ((current_t*)p)->~current_t();
   }
} // end of namespace ROOT for class ::edm::Wrapper<edm::RefVector<BXVector<l1t::EtSum>,l1t::EtSum,edm::refhelper::FindUsingAdvance<BXVector<l1t::EtSum>,l1t::EtSum> > >

namespace ROOT {
   // Wrappers around operator new
   static void *new_edmcLcLWrapperlEvectorlEedmcLcLReflEBXVectorlEl1tcLcLEtSumgRcOl1tcLcLEtSumcOedmcLcLrefhelpercLcLFindUsingAdvancelEBXVectorlEl1tcLcLEtSumgRcOl1tcLcLEtSumgRsPgRsPgRsPgR(void *p) {
      return  p ? ::new((::ROOT::Internal::TOperatorNewHelper*)p) ::edm::Wrapper<vector<edm::Ref<BXVector<l1t::EtSum>,l1t::EtSum,edm::refhelper::FindUsingAdvance<BXVector<l1t::EtSum>,l1t::EtSum> > > > : new ::edm::Wrapper<vector<edm::Ref<BXVector<l1t::EtSum>,l1t::EtSum,edm::refhelper::FindUsingAdvance<BXVector<l1t::EtSum>,l1t::EtSum> > > >;
   }
   static void *newArray_edmcLcLWrapperlEvectorlEedmcLcLReflEBXVectorlEl1tcLcLEtSumgRcOl1tcLcLEtSumcOedmcLcLrefhelpercLcLFindUsingAdvancelEBXVectorlEl1tcLcLEtSumgRcOl1tcLcLEtSumgRsPgRsPgRsPgR(Long_t nElements, void *p) {
      return p ? ::new((::ROOT::Internal::TOperatorNewHelper*)p) ::edm::Wrapper<vector<edm::Ref<BXVector<l1t::EtSum>,l1t::EtSum,edm::refhelper::FindUsingAdvance<BXVector<l1t::EtSum>,l1t::EtSum> > > >[nElements] : new ::edm::Wrapper<vector<edm::Ref<BXVector<l1t::EtSum>,l1t::EtSum,edm::refhelper::FindUsingAdvance<BXVector<l1t::EtSum>,l1t::EtSum> > > >[nElements];
   }
   // Wrapper around operator delete
   static void delete_edmcLcLWrapperlEvectorlEedmcLcLReflEBXVectorlEl1tcLcLEtSumgRcOl1tcLcLEtSumcOedmcLcLrefhelpercLcLFindUsingAdvancelEBXVectorlEl1tcLcLEtSumgRcOl1tcLcLEtSumgRsPgRsPgRsPgR(void *p) {
      delete ((::edm::Wrapper<vector<edm::Ref<BXVector<l1t::EtSum>,l1t::EtSum,edm::refhelper::FindUsingAdvance<BXVector<l1t::EtSum>,l1t::EtSum> > > >*)p);
   }
   static void deleteArray_edmcLcLWrapperlEvectorlEedmcLcLReflEBXVectorlEl1tcLcLEtSumgRcOl1tcLcLEtSumcOedmcLcLrefhelpercLcLFindUsingAdvancelEBXVectorlEl1tcLcLEtSumgRcOl1tcLcLEtSumgRsPgRsPgRsPgR(void *p) {
      delete [] ((::edm::Wrapper<vector<edm::Ref<BXVector<l1t::EtSum>,l1t::EtSum,edm::refhelper::FindUsingAdvance<BXVector<l1t::EtSum>,l1t::EtSum> > > >*)p);
   }
   static void destruct_edmcLcLWrapperlEvectorlEedmcLcLReflEBXVectorlEl1tcLcLEtSumgRcOl1tcLcLEtSumcOedmcLcLrefhelpercLcLFindUsingAdvancelEBXVectorlEl1tcLcLEtSumgRcOl1tcLcLEtSumgRsPgRsPgRsPgR(void *p) {
      typedef ::edm::Wrapper<vector<edm::Ref<BXVector<l1t::EtSum>,l1t::EtSum,edm::refhelper::FindUsingAdvance<BXVector<l1t::EtSum>,l1t::EtSum> > > > current_t;
      ((current_t*)p)->~current_t();
   }
} // end of namespace ROOT for class ::edm::Wrapper<vector<edm::Ref<BXVector<l1t::EtSum>,l1t::EtSum,edm::refhelper::FindUsingAdvance<BXVector<l1t::EtSum>,l1t::EtSum> > > >

namespace ROOT {
   // Wrappers around operator new
   static void *new_l1tcLcLTau(void *p) {
      return  p ? ::new((::ROOT::Internal::TOperatorNewHelper*)p) ::l1t::Tau : new ::l1t::Tau;
   }
   static void *newArray_l1tcLcLTau(Long_t nElements, void *p) {
      return p ? ::new((::ROOT::Internal::TOperatorNewHelper*)p) ::l1t::Tau[nElements] : new ::l1t::Tau[nElements];
   }
   // Wrapper around operator delete
   static void delete_l1tcLcLTau(void *p) {
      delete ((::l1t::Tau*)p);
   }
   static void deleteArray_l1tcLcLTau(void *p) {
      delete [] ((::l1t::Tau*)p);
   }
   static void destruct_l1tcLcLTau(void *p) {
      typedef ::l1t::Tau current_t;
      ((current_t*)p)->~current_t();
   }
} // end of namespace ROOT for class ::l1t::Tau

namespace ROOT {
   // Wrappers around operator new
   static void *new_BXVectorlEl1tcLcLTaugR(void *p) {
      return  p ? new(p) ::BXVector<l1t::Tau> : new ::BXVector<l1t::Tau>;
   }
   static void *newArray_BXVectorlEl1tcLcLTaugR(Long_t nElements, void *p) {
      return p ? new(p) ::BXVector<l1t::Tau>[nElements] : new ::BXVector<l1t::Tau>[nElements];
   }
   // Wrapper around operator delete
   static void delete_BXVectorlEl1tcLcLTaugR(void *p) {
      delete ((::BXVector<l1t::Tau>*)p);
   }
   static void deleteArray_BXVectorlEl1tcLcLTaugR(void *p) {
      delete [] ((::BXVector<l1t::Tau>*)p);
   }
   static void destruct_BXVectorlEl1tcLcLTaugR(void *p) {
      typedef ::BXVector<l1t::Tau> current_t;
      ((current_t*)p)->~current_t();
   }
} // end of namespace ROOT for class ::BXVector<l1t::Tau>

namespace ROOT {
   // Wrappers around operator new
   static void *new_edmcLcLWrapperlEBXVectorlEl1tcLcLTaugRsPgR(void *p) {
      return  p ? ::new((::ROOT::Internal::TOperatorNewHelper*)p) ::edm::Wrapper<BXVector<l1t::Tau> > : new ::edm::Wrapper<BXVector<l1t::Tau> >;
   }
   static void *newArray_edmcLcLWrapperlEBXVectorlEl1tcLcLTaugRsPgR(Long_t nElements, void *p) {
      return p ? ::new((::ROOT::Internal::TOperatorNewHelper*)p) ::edm::Wrapper<BXVector<l1t::Tau> >[nElements] : new ::edm::Wrapper<BXVector<l1t::Tau> >[nElements];
   }
   // Wrapper around operator delete
   static void delete_edmcLcLWrapperlEBXVectorlEl1tcLcLTaugRsPgR(void *p) {
      delete ((::edm::Wrapper<BXVector<l1t::Tau> >*)p);
   }
   static void deleteArray_edmcLcLWrapperlEBXVectorlEl1tcLcLTaugRsPgR(void *p) {
      delete [] ((::edm::Wrapper<BXVector<l1t::Tau> >*)p);
   }
   static void destruct_edmcLcLWrapperlEBXVectorlEl1tcLcLTaugRsPgR(void *p) {
      typedef ::edm::Wrapper<BXVector<l1t::Tau> > current_t;
      ((current_t*)p)->~current_t();
   }
} // end of namespace ROOT for class ::edm::Wrapper<BXVector<l1t::Tau> >

namespace ROOT {
   // Wrappers around operator new
   static void *new_edmcLcLReflEBXVectorlEl1tcLcLTaugRcOl1tcLcLTaucOedmcLcLrefhelpercLcLFindUsingAdvancelEBXVectorlEl1tcLcLTaugRcOl1tcLcLTaugRsPgR(void *p) {
      return  p ? ::new((::ROOT::Internal::TOperatorNewHelper*)p) ::edm::Ref<BXVector<l1t::Tau>,l1t::Tau,edm::refhelper::FindUsingAdvance<BXVector<l1t::Tau>,l1t::Tau> > : new ::edm::Ref<BXVector<l1t::Tau>,l1t::Tau,edm::refhelper::FindUsingAdvance<BXVector<l1t::Tau>,l1t::Tau> >;
   }
   static void *newArray_edmcLcLReflEBXVectorlEl1tcLcLTaugRcOl1tcLcLTaucOedmcLcLrefhelpercLcLFindUsingAdvancelEBXVectorlEl1tcLcLTaugRcOl1tcLcLTaugRsPgR(Long_t nElements, void *p) {
      return p ? ::new((::ROOT::Internal::TOperatorNewHelper*)p) ::edm::Ref<BXVector<l1t::Tau>,l1t::Tau,edm::refhelper::FindUsingAdvance<BXVector<l1t::Tau>,l1t::Tau> >[nElements] : new ::edm::Ref<BXVector<l1t::Tau>,l1t::Tau,edm::refhelper::FindUsingAdvance<BXVector<l1t::Tau>,l1t::Tau> >[nElements];
   }
   // Wrapper around operator delete
   static void delete_edmcLcLReflEBXVectorlEl1tcLcLTaugRcOl1tcLcLTaucOedmcLcLrefhelpercLcLFindUsingAdvancelEBXVectorlEl1tcLcLTaugRcOl1tcLcLTaugRsPgR(void *p) {
      delete ((::edm::Ref<BXVector<l1t::Tau>,l1t::Tau,edm::refhelper::FindUsingAdvance<BXVector<l1t::Tau>,l1t::Tau> >*)p);
   }
   static void deleteArray_edmcLcLReflEBXVectorlEl1tcLcLTaugRcOl1tcLcLTaucOedmcLcLrefhelpercLcLFindUsingAdvancelEBXVectorlEl1tcLcLTaugRcOl1tcLcLTaugRsPgR(void *p) {
      delete [] ((::edm::Ref<BXVector<l1t::Tau>,l1t::Tau,edm::refhelper::FindUsingAdvance<BXVector<l1t::Tau>,l1t::Tau> >*)p);
   }
   static void destruct_edmcLcLReflEBXVectorlEl1tcLcLTaugRcOl1tcLcLTaucOedmcLcLrefhelpercLcLFindUsingAdvancelEBXVectorlEl1tcLcLTaugRcOl1tcLcLTaugRsPgR(void *p) {
      typedef ::edm::Ref<BXVector<l1t::Tau>,l1t::Tau,edm::refhelper::FindUsingAdvance<BXVector<l1t::Tau>,l1t::Tau> > current_t;
      ((current_t*)p)->~current_t();
   }
} // end of namespace ROOT for class ::edm::Ref<BXVector<l1t::Tau>,l1t::Tau,edm::refhelper::FindUsingAdvance<BXVector<l1t::Tau>,l1t::Tau> >

namespace ROOT {
   // Wrappers around operator new
   static void *new_edmcLcLWrapperlEedmcLcLReflEBXVectorlEl1tcLcLTaugRcOl1tcLcLTaucOedmcLcLrefhelpercLcLFindUsingAdvancelEBXVectorlEl1tcLcLTaugRcOl1tcLcLTaugRsPgRsPgR(void *p) {
      return  p ? ::new((::ROOT::Internal::TOperatorNewHelper*)p) ::edm::Wrapper<edm::Ref<BXVector<l1t::Tau>,l1t::Tau,edm::refhelper::FindUsingAdvance<BXVector<l1t::Tau>,l1t::Tau> > > : new ::edm::Wrapper<edm::Ref<BXVector<l1t::Tau>,l1t::Tau,edm::refhelper::FindUsingAdvance<BXVector<l1t::Tau>,l1t::Tau> > >;
   }
   static void *newArray_edmcLcLWrapperlEedmcLcLReflEBXVectorlEl1tcLcLTaugRcOl1tcLcLTaucOedmcLcLrefhelpercLcLFindUsingAdvancelEBXVectorlEl1tcLcLTaugRcOl1tcLcLTaugRsPgRsPgR(Long_t nElements, void *p) {
      return p ? ::new((::ROOT::Internal::TOperatorNewHelper*)p) ::edm::Wrapper<edm::Ref<BXVector<l1t::Tau>,l1t::Tau,edm::refhelper::FindUsingAdvance<BXVector<l1t::Tau>,l1t::Tau> > >[nElements] : new ::edm::Wrapper<edm::Ref<BXVector<l1t::Tau>,l1t::Tau,edm::refhelper::FindUsingAdvance<BXVector<l1t::Tau>,l1t::Tau> > >[nElements];
   }
   // Wrapper around operator delete
   static void delete_edmcLcLWrapperlEedmcLcLReflEBXVectorlEl1tcLcLTaugRcOl1tcLcLTaucOedmcLcLrefhelpercLcLFindUsingAdvancelEBXVectorlEl1tcLcLTaugRcOl1tcLcLTaugRsPgRsPgR(void *p) {
      delete ((::edm::Wrapper<edm::Ref<BXVector<l1t::Tau>,l1t::Tau,edm::refhelper::FindUsingAdvance<BXVector<l1t::Tau>,l1t::Tau> > >*)p);
   }
   static void deleteArray_edmcLcLWrapperlEedmcLcLReflEBXVectorlEl1tcLcLTaugRcOl1tcLcLTaucOedmcLcLrefhelpercLcLFindUsingAdvancelEBXVectorlEl1tcLcLTaugRcOl1tcLcLTaugRsPgRsPgR(void *p) {
      delete [] ((::edm::Wrapper<edm::Ref<BXVector<l1t::Tau>,l1t::Tau,edm::refhelper::FindUsingAdvance<BXVector<l1t::Tau>,l1t::Tau> > >*)p);
   }
   static void destruct_edmcLcLWrapperlEedmcLcLReflEBXVectorlEl1tcLcLTaugRcOl1tcLcLTaucOedmcLcLrefhelpercLcLFindUsingAdvancelEBXVectorlEl1tcLcLTaugRcOl1tcLcLTaugRsPgRsPgR(void *p) {
      typedef ::edm::Wrapper<edm::Ref<BXVector<l1t::Tau>,l1t::Tau,edm::refhelper::FindUsingAdvance<BXVector<l1t::Tau>,l1t::Tau> > > current_t;
      ((current_t*)p)->~current_t();
   }
} // end of namespace ROOT for class ::edm::Wrapper<edm::Ref<BXVector<l1t::Tau>,l1t::Tau,edm::refhelper::FindUsingAdvance<BXVector<l1t::Tau>,l1t::Tau> > >

namespace ROOT {
   // Wrappers around operator new
   static void *new_edmcLcLRefVectorlEBXVectorlEl1tcLcLTaugRcOl1tcLcLTaucOedmcLcLrefhelpercLcLFindUsingAdvancelEBXVectorlEl1tcLcLTaugRcOl1tcLcLTaugRsPgR(void *p) {
      return  p ? ::new((::ROOT::Internal::TOperatorNewHelper*)p) ::edm::RefVector<BXVector<l1t::Tau>,l1t::Tau,edm::refhelper::FindUsingAdvance<BXVector<l1t::Tau>,l1t::Tau> > : new ::edm::RefVector<BXVector<l1t::Tau>,l1t::Tau,edm::refhelper::FindUsingAdvance<BXVector<l1t::Tau>,l1t::Tau> >;
   }
   static void *newArray_edmcLcLRefVectorlEBXVectorlEl1tcLcLTaugRcOl1tcLcLTaucOedmcLcLrefhelpercLcLFindUsingAdvancelEBXVectorlEl1tcLcLTaugRcOl1tcLcLTaugRsPgR(Long_t nElements, void *p) {
      return p ? ::new((::ROOT::Internal::TOperatorNewHelper*)p) ::edm::RefVector<BXVector<l1t::Tau>,l1t::Tau,edm::refhelper::FindUsingAdvance<BXVector<l1t::Tau>,l1t::Tau> >[nElements] : new ::edm::RefVector<BXVector<l1t::Tau>,l1t::Tau,edm::refhelper::FindUsingAdvance<BXVector<l1t::Tau>,l1t::Tau> >[nElements];
   }
   // Wrapper around operator delete
   static void delete_edmcLcLRefVectorlEBXVectorlEl1tcLcLTaugRcOl1tcLcLTaucOedmcLcLrefhelpercLcLFindUsingAdvancelEBXVectorlEl1tcLcLTaugRcOl1tcLcLTaugRsPgR(void *p) {
      delete ((::edm::RefVector<BXVector<l1t::Tau>,l1t::Tau,edm::refhelper::FindUsingAdvance<BXVector<l1t::Tau>,l1t::Tau> >*)p);
   }
   static void deleteArray_edmcLcLRefVectorlEBXVectorlEl1tcLcLTaugRcOl1tcLcLTaucOedmcLcLrefhelpercLcLFindUsingAdvancelEBXVectorlEl1tcLcLTaugRcOl1tcLcLTaugRsPgR(void *p) {
      delete [] ((::edm::RefVector<BXVector<l1t::Tau>,l1t::Tau,edm::refhelper::FindUsingAdvance<BXVector<l1t::Tau>,l1t::Tau> >*)p);
   }
   static void destruct_edmcLcLRefVectorlEBXVectorlEl1tcLcLTaugRcOl1tcLcLTaucOedmcLcLrefhelpercLcLFindUsingAdvancelEBXVectorlEl1tcLcLTaugRcOl1tcLcLTaugRsPgR(void *p) {
      typedef ::edm::RefVector<BXVector<l1t::Tau>,l1t::Tau,edm::refhelper::FindUsingAdvance<BXVector<l1t::Tau>,l1t::Tau> > current_t;
      ((current_t*)p)->~current_t();
   }
} // end of namespace ROOT for class ::edm::RefVector<BXVector<l1t::Tau>,l1t::Tau,edm::refhelper::FindUsingAdvance<BXVector<l1t::Tau>,l1t::Tau> >

namespace ROOT {
   // Wrappers around operator new
   static void *new_edmcLcLWrapperlEedmcLcLRefVectorlEBXVectorlEl1tcLcLTaugRcOl1tcLcLTaucOedmcLcLrefhelpercLcLFindUsingAdvancelEBXVectorlEl1tcLcLTaugRcOl1tcLcLTaugRsPgRsPgR(void *p) {
      return  p ? ::new((::ROOT::Internal::TOperatorNewHelper*)p) ::edm::Wrapper<edm::RefVector<BXVector<l1t::Tau>,l1t::Tau,edm::refhelper::FindUsingAdvance<BXVector<l1t::Tau>,l1t::Tau> > > : new ::edm::Wrapper<edm::RefVector<BXVector<l1t::Tau>,l1t::Tau,edm::refhelper::FindUsingAdvance<BXVector<l1t::Tau>,l1t::Tau> > >;
   }
   static void *newArray_edmcLcLWrapperlEedmcLcLRefVectorlEBXVectorlEl1tcLcLTaugRcOl1tcLcLTaucOedmcLcLrefhelpercLcLFindUsingAdvancelEBXVectorlEl1tcLcLTaugRcOl1tcLcLTaugRsPgRsPgR(Long_t nElements, void *p) {
      return p ? ::new((::ROOT::Internal::TOperatorNewHelper*)p) ::edm::Wrapper<edm::RefVector<BXVector<l1t::Tau>,l1t::Tau,edm::refhelper::FindUsingAdvance<BXVector<l1t::Tau>,l1t::Tau> > >[nElements] : new ::edm::Wrapper<edm::RefVector<BXVector<l1t::Tau>,l1t::Tau,edm::refhelper::FindUsingAdvance<BXVector<l1t::Tau>,l1t::Tau> > >[nElements];
   }
   // Wrapper around operator delete
   static void delete_edmcLcLWrapperlEedmcLcLRefVectorlEBXVectorlEl1tcLcLTaugRcOl1tcLcLTaucOedmcLcLrefhelpercLcLFindUsingAdvancelEBXVectorlEl1tcLcLTaugRcOl1tcLcLTaugRsPgRsPgR(void *p) {
      delete ((::edm::Wrapper<edm::RefVector<BXVector<l1t::Tau>,l1t::Tau,edm::refhelper::FindUsingAdvance<BXVector<l1t::Tau>,l1t::Tau> > >*)p);
   }
   static void deleteArray_edmcLcLWrapperlEedmcLcLRefVectorlEBXVectorlEl1tcLcLTaugRcOl1tcLcLTaucOedmcLcLrefhelpercLcLFindUsingAdvancelEBXVectorlEl1tcLcLTaugRcOl1tcLcLTaugRsPgRsPgR(void *p) {
      delete [] ((::edm::Wrapper<edm::RefVector<BXVector<l1t::Tau>,l1t::Tau,edm::refhelper::FindUsingAdvance<BXVector<l1t::Tau>,l1t::Tau> > >*)p);
   }
   static void destruct_edmcLcLWrapperlEedmcLcLRefVectorlEBXVectorlEl1tcLcLTaugRcOl1tcLcLTaucOedmcLcLrefhelpercLcLFindUsingAdvancelEBXVectorlEl1tcLcLTaugRcOl1tcLcLTaugRsPgRsPgR(void *p) {
      typedef ::edm::Wrapper<edm::RefVector<BXVector<l1t::Tau>,l1t::Tau,edm::refhelper::FindUsingAdvance<BXVector<l1t::Tau>,l1t::Tau> > > current_t;
      ((current_t*)p)->~current_t();
   }
} // end of namespace ROOT for class ::edm::Wrapper<edm::RefVector<BXVector<l1t::Tau>,l1t::Tau,edm::refhelper::FindUsingAdvance<BXVector<l1t::Tau>,l1t::Tau> > >

namespace ROOT {
   // Wrappers around operator new
   static void *new_edmcLcLWrapperlEvectorlEedmcLcLReflEBXVectorlEl1tcLcLTaugRcOl1tcLcLTaucOedmcLcLrefhelpercLcLFindUsingAdvancelEBXVectorlEl1tcLcLTaugRcOl1tcLcLTaugRsPgRsPgRsPgR(void *p) {
      return  p ? ::new((::ROOT::Internal::TOperatorNewHelper*)p) ::edm::Wrapper<vector<edm::Ref<BXVector<l1t::Tau>,l1t::Tau,edm::refhelper::FindUsingAdvance<BXVector<l1t::Tau>,l1t::Tau> > > > : new ::edm::Wrapper<vector<edm::Ref<BXVector<l1t::Tau>,l1t::Tau,edm::refhelper::FindUsingAdvance<BXVector<l1t::Tau>,l1t::Tau> > > >;
   }
   static void *newArray_edmcLcLWrapperlEvectorlEedmcLcLReflEBXVectorlEl1tcLcLTaugRcOl1tcLcLTaucOedmcLcLrefhelpercLcLFindUsingAdvancelEBXVectorlEl1tcLcLTaugRcOl1tcLcLTaugRsPgRsPgRsPgR(Long_t nElements, void *p) {
      return p ? ::new((::ROOT::Internal::TOperatorNewHelper*)p) ::edm::Wrapper<vector<edm::Ref<BXVector<l1t::Tau>,l1t::Tau,edm::refhelper::FindUsingAdvance<BXVector<l1t::Tau>,l1t::Tau> > > >[nElements] : new ::edm::Wrapper<vector<edm::Ref<BXVector<l1t::Tau>,l1t::Tau,edm::refhelper::FindUsingAdvance<BXVector<l1t::Tau>,l1t::Tau> > > >[nElements];
   }
   // Wrapper around operator delete
   static void delete_edmcLcLWrapperlEvectorlEedmcLcLReflEBXVectorlEl1tcLcLTaugRcOl1tcLcLTaucOedmcLcLrefhelpercLcLFindUsingAdvancelEBXVectorlEl1tcLcLTaugRcOl1tcLcLTaugRsPgRsPgRsPgR(void *p) {
      delete ((::edm::Wrapper<vector<edm::Ref<BXVector<l1t::Tau>,l1t::Tau,edm::refhelper::FindUsingAdvance<BXVector<l1t::Tau>,l1t::Tau> > > >*)p);
   }
   static void deleteArray_edmcLcLWrapperlEvectorlEedmcLcLReflEBXVectorlEl1tcLcLTaugRcOl1tcLcLTaucOedmcLcLrefhelpercLcLFindUsingAdvancelEBXVectorlEl1tcLcLTaugRcOl1tcLcLTaugRsPgRsPgRsPgR(void *p) {
      delete [] ((::edm::Wrapper<vector<edm::Ref<BXVector<l1t::Tau>,l1t::Tau,edm::refhelper::FindUsingAdvance<BXVector<l1t::Tau>,l1t::Tau> > > >*)p);
   }
   static void destruct_edmcLcLWrapperlEvectorlEedmcLcLReflEBXVectorlEl1tcLcLTaugRcOl1tcLcLTaucOedmcLcLrefhelpercLcLFindUsingAdvancelEBXVectorlEl1tcLcLTaugRcOl1tcLcLTaugRsPgRsPgRsPgR(void *p) {
      typedef ::edm::Wrapper<vector<edm::Ref<BXVector<l1t::Tau>,l1t::Tau,edm::refhelper::FindUsingAdvance<BXVector<l1t::Tau>,l1t::Tau> > > > current_t;
      ((current_t*)p)->~current_t();
   }
} // end of namespace ROOT for class ::edm::Wrapper<vector<edm::Ref<BXVector<l1t::Tau>,l1t::Tau,edm::refhelper::FindUsingAdvance<BXVector<l1t::Tau>,l1t::Tau> > > >

namespace ROOT {
   // Wrappers around operator new
   static void *new_l1tcLcLMuon(void *p) {
      return  p ? ::new((::ROOT::Internal::TOperatorNewHelper*)p) ::l1t::Muon : new ::l1t::Muon;
   }
   static void *newArray_l1tcLcLMuon(Long_t nElements, void *p) {
      return p ? ::new((::ROOT::Internal::TOperatorNewHelper*)p) ::l1t::Muon[nElements] : new ::l1t::Muon[nElements];
   }
   // Wrapper around operator delete
   static void delete_l1tcLcLMuon(void *p) {
      delete ((::l1t::Muon*)p);
   }
   static void deleteArray_l1tcLcLMuon(void *p) {
      delete [] ((::l1t::Muon*)p);
   }
   static void destruct_l1tcLcLMuon(void *p) {
      typedef ::l1t::Muon current_t;
      ((current_t*)p)->~current_t();
   }
} // end of namespace ROOT for class ::l1t::Muon

namespace ROOT {
   // Wrappers around operator new
   static void *new_BXVectorlEl1tcLcLMuongR(void *p) {
      return  p ? new(p) ::BXVector<l1t::Muon> : new ::BXVector<l1t::Muon>;
   }
   static void *newArray_BXVectorlEl1tcLcLMuongR(Long_t nElements, void *p) {
      return p ? new(p) ::BXVector<l1t::Muon>[nElements] : new ::BXVector<l1t::Muon>[nElements];
   }
   // Wrapper around operator delete
   static void delete_BXVectorlEl1tcLcLMuongR(void *p) {
      delete ((::BXVector<l1t::Muon>*)p);
   }
   static void deleteArray_BXVectorlEl1tcLcLMuongR(void *p) {
      delete [] ((::BXVector<l1t::Muon>*)p);
   }
   static void destruct_BXVectorlEl1tcLcLMuongR(void *p) {
      typedef ::BXVector<l1t::Muon> current_t;
      ((current_t*)p)->~current_t();
   }
} // end of namespace ROOT for class ::BXVector<l1t::Muon>

namespace ROOT {
   // Wrappers around operator new
   static void *new_edmcLcLWrapperlEBXVectorlEl1tcLcLMuongRsPgR(void *p) {
      return  p ? ::new((::ROOT::Internal::TOperatorNewHelper*)p) ::edm::Wrapper<BXVector<l1t::Muon> > : new ::edm::Wrapper<BXVector<l1t::Muon> >;
   }
   static void *newArray_edmcLcLWrapperlEBXVectorlEl1tcLcLMuongRsPgR(Long_t nElements, void *p) {
      return p ? ::new((::ROOT::Internal::TOperatorNewHelper*)p) ::edm::Wrapper<BXVector<l1t::Muon> >[nElements] : new ::edm::Wrapper<BXVector<l1t::Muon> >[nElements];
   }
   // Wrapper around operator delete
   static void delete_edmcLcLWrapperlEBXVectorlEl1tcLcLMuongRsPgR(void *p) {
      delete ((::edm::Wrapper<BXVector<l1t::Muon> >*)p);
   }
   static void deleteArray_edmcLcLWrapperlEBXVectorlEl1tcLcLMuongRsPgR(void *p) {
      delete [] ((::edm::Wrapper<BXVector<l1t::Muon> >*)p);
   }
   static void destruct_edmcLcLWrapperlEBXVectorlEl1tcLcLMuongRsPgR(void *p) {
      typedef ::edm::Wrapper<BXVector<l1t::Muon> > current_t;
      ((current_t*)p)->~current_t();
   }
} // end of namespace ROOT for class ::edm::Wrapper<BXVector<l1t::Muon> >

namespace ROOT {
   // Wrappers around operator new
   static void *new_edmcLcLReflEBXVectorlEl1tcLcLMuongRcOl1tcLcLMuoncOedmcLcLrefhelpercLcLFindUsingAdvancelEBXVectorlEl1tcLcLMuongRcOl1tcLcLMuongRsPgR(void *p) {
      return  p ? ::new((::ROOT::Internal::TOperatorNewHelper*)p) ::edm::Ref<BXVector<l1t::Muon>,l1t::Muon,edm::refhelper::FindUsingAdvance<BXVector<l1t::Muon>,l1t::Muon> > : new ::edm::Ref<BXVector<l1t::Muon>,l1t::Muon,edm::refhelper::FindUsingAdvance<BXVector<l1t::Muon>,l1t::Muon> >;
   }
   static void *newArray_edmcLcLReflEBXVectorlEl1tcLcLMuongRcOl1tcLcLMuoncOedmcLcLrefhelpercLcLFindUsingAdvancelEBXVectorlEl1tcLcLMuongRcOl1tcLcLMuongRsPgR(Long_t nElements, void *p) {
      return p ? ::new((::ROOT::Internal::TOperatorNewHelper*)p) ::edm::Ref<BXVector<l1t::Muon>,l1t::Muon,edm::refhelper::FindUsingAdvance<BXVector<l1t::Muon>,l1t::Muon> >[nElements] : new ::edm::Ref<BXVector<l1t::Muon>,l1t::Muon,edm::refhelper::FindUsingAdvance<BXVector<l1t::Muon>,l1t::Muon> >[nElements];
   }
   // Wrapper around operator delete
   static void delete_edmcLcLReflEBXVectorlEl1tcLcLMuongRcOl1tcLcLMuoncOedmcLcLrefhelpercLcLFindUsingAdvancelEBXVectorlEl1tcLcLMuongRcOl1tcLcLMuongRsPgR(void *p) {
      delete ((::edm::Ref<BXVector<l1t::Muon>,l1t::Muon,edm::refhelper::FindUsingAdvance<BXVector<l1t::Muon>,l1t::Muon> >*)p);
   }
   static void deleteArray_edmcLcLReflEBXVectorlEl1tcLcLMuongRcOl1tcLcLMuoncOedmcLcLrefhelpercLcLFindUsingAdvancelEBXVectorlEl1tcLcLMuongRcOl1tcLcLMuongRsPgR(void *p) {
      delete [] ((::edm::Ref<BXVector<l1t::Muon>,l1t::Muon,edm::refhelper::FindUsingAdvance<BXVector<l1t::Muon>,l1t::Muon> >*)p);
   }
   static void destruct_edmcLcLReflEBXVectorlEl1tcLcLMuongRcOl1tcLcLMuoncOedmcLcLrefhelpercLcLFindUsingAdvancelEBXVectorlEl1tcLcLMuongRcOl1tcLcLMuongRsPgR(void *p) {
      typedef ::edm::Ref<BXVector<l1t::Muon>,l1t::Muon,edm::refhelper::FindUsingAdvance<BXVector<l1t::Muon>,l1t::Muon> > current_t;
      ((current_t*)p)->~current_t();
   }
} // end of namespace ROOT for class ::edm::Ref<BXVector<l1t::Muon>,l1t::Muon,edm::refhelper::FindUsingAdvance<BXVector<l1t::Muon>,l1t::Muon> >

namespace ROOT {
   // Wrappers around operator new
   static void *new_edmcLcLWrapperlEedmcLcLReflEBXVectorlEl1tcLcLMuongRcOl1tcLcLMuoncOedmcLcLrefhelpercLcLFindUsingAdvancelEBXVectorlEl1tcLcLMuongRcOl1tcLcLMuongRsPgRsPgR(void *p) {
      return  p ? ::new((::ROOT::Internal::TOperatorNewHelper*)p) ::edm::Wrapper<edm::Ref<BXVector<l1t::Muon>,l1t::Muon,edm::refhelper::FindUsingAdvance<BXVector<l1t::Muon>,l1t::Muon> > > : new ::edm::Wrapper<edm::Ref<BXVector<l1t::Muon>,l1t::Muon,edm::refhelper::FindUsingAdvance<BXVector<l1t::Muon>,l1t::Muon> > >;
   }
   static void *newArray_edmcLcLWrapperlEedmcLcLReflEBXVectorlEl1tcLcLMuongRcOl1tcLcLMuoncOedmcLcLrefhelpercLcLFindUsingAdvancelEBXVectorlEl1tcLcLMuongRcOl1tcLcLMuongRsPgRsPgR(Long_t nElements, void *p) {
      return p ? ::new((::ROOT::Internal::TOperatorNewHelper*)p) ::edm::Wrapper<edm::Ref<BXVector<l1t::Muon>,l1t::Muon,edm::refhelper::FindUsingAdvance<BXVector<l1t::Muon>,l1t::Muon> > >[nElements] : new ::edm::Wrapper<edm::Ref<BXVector<l1t::Muon>,l1t::Muon,edm::refhelper::FindUsingAdvance<BXVector<l1t::Muon>,l1t::Muon> > >[nElements];
   }
   // Wrapper around operator delete
   static void delete_edmcLcLWrapperlEedmcLcLReflEBXVectorlEl1tcLcLMuongRcOl1tcLcLMuoncOedmcLcLrefhelpercLcLFindUsingAdvancelEBXVectorlEl1tcLcLMuongRcOl1tcLcLMuongRsPgRsPgR(void *p) {
      delete ((::edm::Wrapper<edm::Ref<BXVector<l1t::Muon>,l1t::Muon,edm::refhelper::FindUsingAdvance<BXVector<l1t::Muon>,l1t::Muon> > >*)p);
   }
   static void deleteArray_edmcLcLWrapperlEedmcLcLReflEBXVectorlEl1tcLcLMuongRcOl1tcLcLMuoncOedmcLcLrefhelpercLcLFindUsingAdvancelEBXVectorlEl1tcLcLMuongRcOl1tcLcLMuongRsPgRsPgR(void *p) {
      delete [] ((::edm::Wrapper<edm::Ref<BXVector<l1t::Muon>,l1t::Muon,edm::refhelper::FindUsingAdvance<BXVector<l1t::Muon>,l1t::Muon> > >*)p);
   }
   static void destruct_edmcLcLWrapperlEedmcLcLReflEBXVectorlEl1tcLcLMuongRcOl1tcLcLMuoncOedmcLcLrefhelpercLcLFindUsingAdvancelEBXVectorlEl1tcLcLMuongRcOl1tcLcLMuongRsPgRsPgR(void *p) {
      typedef ::edm::Wrapper<edm::Ref<BXVector<l1t::Muon>,l1t::Muon,edm::refhelper::FindUsingAdvance<BXVector<l1t::Muon>,l1t::Muon> > > current_t;
      ((current_t*)p)->~current_t();
   }
} // end of namespace ROOT for class ::edm::Wrapper<edm::Ref<BXVector<l1t::Muon>,l1t::Muon,edm::refhelper::FindUsingAdvance<BXVector<l1t::Muon>,l1t::Muon> > >

namespace ROOT {
   // Wrappers around operator new
   static void *new_edmcLcLRefVectorlEBXVectorlEl1tcLcLMuongRcOl1tcLcLMuoncOedmcLcLrefhelpercLcLFindUsingAdvancelEBXVectorlEl1tcLcLMuongRcOl1tcLcLMuongRsPgR(void *p) {
      return  p ? ::new((::ROOT::Internal::TOperatorNewHelper*)p) ::edm::RefVector<BXVector<l1t::Muon>,l1t::Muon,edm::refhelper::FindUsingAdvance<BXVector<l1t::Muon>,l1t::Muon> > : new ::edm::RefVector<BXVector<l1t::Muon>,l1t::Muon,edm::refhelper::FindUsingAdvance<BXVector<l1t::Muon>,l1t::Muon> >;
   }
   static void *newArray_edmcLcLRefVectorlEBXVectorlEl1tcLcLMuongRcOl1tcLcLMuoncOedmcLcLrefhelpercLcLFindUsingAdvancelEBXVectorlEl1tcLcLMuongRcOl1tcLcLMuongRsPgR(Long_t nElements, void *p) {
      return p ? ::new((::ROOT::Internal::TOperatorNewHelper*)p) ::edm::RefVector<BXVector<l1t::Muon>,l1t::Muon,edm::refhelper::FindUsingAdvance<BXVector<l1t::Muon>,l1t::Muon> >[nElements] : new ::edm::RefVector<BXVector<l1t::Muon>,l1t::Muon,edm::refhelper::FindUsingAdvance<BXVector<l1t::Muon>,l1t::Muon> >[nElements];
   }
   // Wrapper around operator delete
   static void delete_edmcLcLRefVectorlEBXVectorlEl1tcLcLMuongRcOl1tcLcLMuoncOedmcLcLrefhelpercLcLFindUsingAdvancelEBXVectorlEl1tcLcLMuongRcOl1tcLcLMuongRsPgR(void *p) {
      delete ((::edm::RefVector<BXVector<l1t::Muon>,l1t::Muon,edm::refhelper::FindUsingAdvance<BXVector<l1t::Muon>,l1t::Muon> >*)p);
   }
   static void deleteArray_edmcLcLRefVectorlEBXVectorlEl1tcLcLMuongRcOl1tcLcLMuoncOedmcLcLrefhelpercLcLFindUsingAdvancelEBXVectorlEl1tcLcLMuongRcOl1tcLcLMuongRsPgR(void *p) {
      delete [] ((::edm::RefVector<BXVector<l1t::Muon>,l1t::Muon,edm::refhelper::FindUsingAdvance<BXVector<l1t::Muon>,l1t::Muon> >*)p);
   }
   static void destruct_edmcLcLRefVectorlEBXVectorlEl1tcLcLMuongRcOl1tcLcLMuoncOedmcLcLrefhelpercLcLFindUsingAdvancelEBXVectorlEl1tcLcLMuongRcOl1tcLcLMuongRsPgR(void *p) {
      typedef ::edm::RefVector<BXVector<l1t::Muon>,l1t::Muon,edm::refhelper::FindUsingAdvance<BXVector<l1t::Muon>,l1t::Muon> > current_t;
      ((current_t*)p)->~current_t();
   }
} // end of namespace ROOT for class ::edm::RefVector<BXVector<l1t::Muon>,l1t::Muon,edm::refhelper::FindUsingAdvance<BXVector<l1t::Muon>,l1t::Muon> >

namespace ROOT {
   // Wrappers around operator new
   static void *new_edmcLcLWrapperlEedmcLcLRefVectorlEBXVectorlEl1tcLcLMuongRcOl1tcLcLMuoncOedmcLcLrefhelpercLcLFindUsingAdvancelEBXVectorlEl1tcLcLMuongRcOl1tcLcLMuongRsPgRsPgR(void *p) {
      return  p ? ::new((::ROOT::Internal::TOperatorNewHelper*)p) ::edm::Wrapper<edm::RefVector<BXVector<l1t::Muon>,l1t::Muon,edm::refhelper::FindUsingAdvance<BXVector<l1t::Muon>,l1t::Muon> > > : new ::edm::Wrapper<edm::RefVector<BXVector<l1t::Muon>,l1t::Muon,edm::refhelper::FindUsingAdvance<BXVector<l1t::Muon>,l1t::Muon> > >;
   }
   static void *newArray_edmcLcLWrapperlEedmcLcLRefVectorlEBXVectorlEl1tcLcLMuongRcOl1tcLcLMuoncOedmcLcLrefhelpercLcLFindUsingAdvancelEBXVectorlEl1tcLcLMuongRcOl1tcLcLMuongRsPgRsPgR(Long_t nElements, void *p) {
      return p ? ::new((::ROOT::Internal::TOperatorNewHelper*)p) ::edm::Wrapper<edm::RefVector<BXVector<l1t::Muon>,l1t::Muon,edm::refhelper::FindUsingAdvance<BXVector<l1t::Muon>,l1t::Muon> > >[nElements] : new ::edm::Wrapper<edm::RefVector<BXVector<l1t::Muon>,l1t::Muon,edm::refhelper::FindUsingAdvance<BXVector<l1t::Muon>,l1t::Muon> > >[nElements];
   }
   // Wrapper around operator delete
   static void delete_edmcLcLWrapperlEedmcLcLRefVectorlEBXVectorlEl1tcLcLMuongRcOl1tcLcLMuoncOedmcLcLrefhelpercLcLFindUsingAdvancelEBXVectorlEl1tcLcLMuongRcOl1tcLcLMuongRsPgRsPgR(void *p) {
      delete ((::edm::Wrapper<edm::RefVector<BXVector<l1t::Muon>,l1t::Muon,edm::refhelper::FindUsingAdvance<BXVector<l1t::Muon>,l1t::Muon> > >*)p);
   }
   static void deleteArray_edmcLcLWrapperlEedmcLcLRefVectorlEBXVectorlEl1tcLcLMuongRcOl1tcLcLMuoncOedmcLcLrefhelpercLcLFindUsingAdvancelEBXVectorlEl1tcLcLMuongRcOl1tcLcLMuongRsPgRsPgR(void *p) {
      delete [] ((::edm::Wrapper<edm::RefVector<BXVector<l1t::Muon>,l1t::Muon,edm::refhelper::FindUsingAdvance<BXVector<l1t::Muon>,l1t::Muon> > >*)p);
   }
   static void destruct_edmcLcLWrapperlEedmcLcLRefVectorlEBXVectorlEl1tcLcLMuongRcOl1tcLcLMuoncOedmcLcLrefhelpercLcLFindUsingAdvancelEBXVectorlEl1tcLcLMuongRcOl1tcLcLMuongRsPgRsPgR(void *p) {
      typedef ::edm::Wrapper<edm::RefVector<BXVector<l1t::Muon>,l1t::Muon,edm::refhelper::FindUsingAdvance<BXVector<l1t::Muon>,l1t::Muon> > > current_t;
      ((current_t*)p)->~current_t();
   }
} // end of namespace ROOT for class ::edm::Wrapper<edm::RefVector<BXVector<l1t::Muon>,l1t::Muon,edm::refhelper::FindUsingAdvance<BXVector<l1t::Muon>,l1t::Muon> > >

namespace ROOT {
   // Wrappers around operator new
   static void *new_edmcLcLWrapperlEvectorlEedmcLcLReflEBXVectorlEl1tcLcLMuongRcOl1tcLcLMuoncOedmcLcLrefhelpercLcLFindUsingAdvancelEBXVectorlEl1tcLcLMuongRcOl1tcLcLMuongRsPgRsPgRsPgR(void *p) {
      return  p ? ::new((::ROOT::Internal::TOperatorNewHelper*)p) ::edm::Wrapper<vector<edm::Ref<BXVector<l1t::Muon>,l1t::Muon,edm::refhelper::FindUsingAdvance<BXVector<l1t::Muon>,l1t::Muon> > > > : new ::edm::Wrapper<vector<edm::Ref<BXVector<l1t::Muon>,l1t::Muon,edm::refhelper::FindUsingAdvance<BXVector<l1t::Muon>,l1t::Muon> > > >;
   }
   static void *newArray_edmcLcLWrapperlEvectorlEedmcLcLReflEBXVectorlEl1tcLcLMuongRcOl1tcLcLMuoncOedmcLcLrefhelpercLcLFindUsingAdvancelEBXVectorlEl1tcLcLMuongRcOl1tcLcLMuongRsPgRsPgRsPgR(Long_t nElements, void *p) {
      return p ? ::new((::ROOT::Internal::TOperatorNewHelper*)p) ::edm::Wrapper<vector<edm::Ref<BXVector<l1t::Muon>,l1t::Muon,edm::refhelper::FindUsingAdvance<BXVector<l1t::Muon>,l1t::Muon> > > >[nElements] : new ::edm::Wrapper<vector<edm::Ref<BXVector<l1t::Muon>,l1t::Muon,edm::refhelper::FindUsingAdvance<BXVector<l1t::Muon>,l1t::Muon> > > >[nElements];
   }
   // Wrapper around operator delete
   static void delete_edmcLcLWrapperlEvectorlEedmcLcLReflEBXVectorlEl1tcLcLMuongRcOl1tcLcLMuoncOedmcLcLrefhelpercLcLFindUsingAdvancelEBXVectorlEl1tcLcLMuongRcOl1tcLcLMuongRsPgRsPgRsPgR(void *p) {
      delete ((::edm::Wrapper<vector<edm::Ref<BXVector<l1t::Muon>,l1t::Muon,edm::refhelper::FindUsingAdvance<BXVector<l1t::Muon>,l1t::Muon> > > >*)p);
   }
   static void deleteArray_edmcLcLWrapperlEvectorlEedmcLcLReflEBXVectorlEl1tcLcLMuongRcOl1tcLcLMuoncOedmcLcLrefhelpercLcLFindUsingAdvancelEBXVectorlEl1tcLcLMuongRcOl1tcLcLMuongRsPgRsPgRsPgR(void *p) {
      delete [] ((::edm::Wrapper<vector<edm::Ref<BXVector<l1t::Muon>,l1t::Muon,edm::refhelper::FindUsingAdvance<BXVector<l1t::Muon>,l1t::Muon> > > >*)p);
   }
   static void destruct_edmcLcLWrapperlEvectorlEedmcLcLReflEBXVectorlEl1tcLcLMuongRcOl1tcLcLMuoncOedmcLcLrefhelpercLcLFindUsingAdvancelEBXVectorlEl1tcLcLMuongRcOl1tcLcLMuongRsPgRsPgRsPgR(void *p) {
      typedef ::edm::Wrapper<vector<edm::Ref<BXVector<l1t::Muon>,l1t::Muon,edm::refhelper::FindUsingAdvance<BXVector<l1t::Muon>,l1t::Muon> > > > current_t;
      ((current_t*)p)->~current_t();
   }
} // end of namespace ROOT for class ::edm::Wrapper<vector<edm::Ref<BXVector<l1t::Muon>,l1t::Muon,edm::refhelper::FindUsingAdvance<BXVector<l1t::Muon>,l1t::Muon> > > >

namespace ROOT {
   // Wrappers around operator new
   static void *new_l1tcLcLCaloSpare(void *p) {
      return  p ? ::new((::ROOT::Internal::TOperatorNewHelper*)p) ::l1t::CaloSpare : new ::l1t::CaloSpare;
   }
   static void *newArray_l1tcLcLCaloSpare(Long_t nElements, void *p) {
      return p ? ::new((::ROOT::Internal::TOperatorNewHelper*)p) ::l1t::CaloSpare[nElements] : new ::l1t::CaloSpare[nElements];
   }
   // Wrapper around operator delete
   static void delete_l1tcLcLCaloSpare(void *p) {
      delete ((::l1t::CaloSpare*)p);
   }
   static void deleteArray_l1tcLcLCaloSpare(void *p) {
      delete [] ((::l1t::CaloSpare*)p);
   }
   static void destruct_l1tcLcLCaloSpare(void *p) {
      typedef ::l1t::CaloSpare current_t;
      ((current_t*)p)->~current_t();
   }
} // end of namespace ROOT for class ::l1t::CaloSpare

namespace ROOT {
   // Wrappers around operator new
   static void *new_BXVectorlEl1tcLcLCaloSparegR(void *p) {
      return  p ? new(p) ::BXVector<l1t::CaloSpare> : new ::BXVector<l1t::CaloSpare>;
   }
   static void *newArray_BXVectorlEl1tcLcLCaloSparegR(Long_t nElements, void *p) {
      return p ? new(p) ::BXVector<l1t::CaloSpare>[nElements] : new ::BXVector<l1t::CaloSpare>[nElements];
   }
   // Wrapper around operator delete
   static void delete_BXVectorlEl1tcLcLCaloSparegR(void *p) {
      delete ((::BXVector<l1t::CaloSpare>*)p);
   }
   static void deleteArray_BXVectorlEl1tcLcLCaloSparegR(void *p) {
      delete [] ((::BXVector<l1t::CaloSpare>*)p);
   }
   static void destruct_BXVectorlEl1tcLcLCaloSparegR(void *p) {
      typedef ::BXVector<l1t::CaloSpare> current_t;
      ((current_t*)p)->~current_t();
   }
} // end of namespace ROOT for class ::BXVector<l1t::CaloSpare>

namespace ROOT {
   // Wrappers around operator new
   static void *new_edmcLcLWrapperlEBXVectorlEl1tcLcLCaloSparegRsPgR(void *p) {
      return  p ? ::new((::ROOT::Internal::TOperatorNewHelper*)p) ::edm::Wrapper<BXVector<l1t::CaloSpare> > : new ::edm::Wrapper<BXVector<l1t::CaloSpare> >;
   }
   static void *newArray_edmcLcLWrapperlEBXVectorlEl1tcLcLCaloSparegRsPgR(Long_t nElements, void *p) {
      return p ? ::new((::ROOT::Internal::TOperatorNewHelper*)p) ::edm::Wrapper<BXVector<l1t::CaloSpare> >[nElements] : new ::edm::Wrapper<BXVector<l1t::CaloSpare> >[nElements];
   }
   // Wrapper around operator delete
   static void delete_edmcLcLWrapperlEBXVectorlEl1tcLcLCaloSparegRsPgR(void *p) {
      delete ((::edm::Wrapper<BXVector<l1t::CaloSpare> >*)p);
   }
   static void deleteArray_edmcLcLWrapperlEBXVectorlEl1tcLcLCaloSparegRsPgR(void *p) {
      delete [] ((::edm::Wrapper<BXVector<l1t::CaloSpare> >*)p);
   }
   static void destruct_edmcLcLWrapperlEBXVectorlEl1tcLcLCaloSparegRsPgR(void *p) {
      typedef ::edm::Wrapper<BXVector<l1t::CaloSpare> > current_t;
      ((current_t*)p)->~current_t();
   }
} // end of namespace ROOT for class ::edm::Wrapper<BXVector<l1t::CaloSpare> >

namespace ROOT {
   // Wrappers around operator new
   static void *new_l1extracLcLL1EmParticle(void *p) {
      return  p ? ::new((::ROOT::Internal::TOperatorNewHelper*)p) ::l1extra::L1EmParticle : new ::l1extra::L1EmParticle;
   }
   static void *newArray_l1extracLcLL1EmParticle(Long_t nElements, void *p) {
      return p ? ::new((::ROOT::Internal::TOperatorNewHelper*)p) ::l1extra::L1EmParticle[nElements] : new ::l1extra::L1EmParticle[nElements];
   }
   // Wrapper around operator delete
   static void delete_l1extracLcLL1EmParticle(void *p) {
      delete ((::l1extra::L1EmParticle*)p);
   }
   static void deleteArray_l1extracLcLL1EmParticle(void *p) {
      delete [] ((::l1extra::L1EmParticle*)p);
   }
   static void destruct_l1extracLcLL1EmParticle(void *p) {
      typedef ::l1extra::L1EmParticle current_t;
      ((current_t*)p)->~current_t();
   }
} // end of namespace ROOT for class ::l1extra::L1EmParticle

namespace ROOT {
   // Wrappers around operator new
   static void *new_l1extracLcLL1JetParticle(void *p) {
      return  p ? ::new((::ROOT::Internal::TOperatorNewHelper*)p) ::l1extra::L1JetParticle : new ::l1extra::L1JetParticle;
   }
   static void *newArray_l1extracLcLL1JetParticle(Long_t nElements, void *p) {
      return p ? ::new((::ROOT::Internal::TOperatorNewHelper*)p) ::l1extra::L1JetParticle[nElements] : new ::l1extra::L1JetParticle[nElements];
   }
   // Wrapper around operator delete
   static void delete_l1extracLcLL1JetParticle(void *p) {
      delete ((::l1extra::L1JetParticle*)p);
   }
   static void deleteArray_l1extracLcLL1JetParticle(void *p) {
      delete [] ((::l1extra::L1JetParticle*)p);
   }
   static void destruct_l1extracLcLL1JetParticle(void *p) {
      typedef ::l1extra::L1JetParticle current_t;
      ((current_t*)p)->~current_t();
   }
} // end of namespace ROOT for class ::l1extra::L1JetParticle

namespace ROOT {
   // Wrappers around operator new
   static void *new_l1extracLcLL1MuonParticle(void *p) {
      return  p ? ::new((::ROOT::Internal::TOperatorNewHelper*)p) ::l1extra::L1MuonParticle : new ::l1extra::L1MuonParticle;
   }
   static void *newArray_l1extracLcLL1MuonParticle(Long_t nElements, void *p) {
      return p ? ::new((::ROOT::Internal::TOperatorNewHelper*)p) ::l1extra::L1MuonParticle[nElements] : new ::l1extra::L1MuonParticle[nElements];
   }
   // Wrapper around operator delete
   static void delete_l1extracLcLL1MuonParticle(void *p) {
      delete ((::l1extra::L1MuonParticle*)p);
   }
   static void deleteArray_l1extracLcLL1MuonParticle(void *p) {
      delete [] ((::l1extra::L1MuonParticle*)p);
   }
   static void destruct_l1extracLcLL1MuonParticle(void *p) {
      typedef ::l1extra::L1MuonParticle current_t;
      ((current_t*)p)->~current_t();
   }
} // end of namespace ROOT for class ::l1extra::L1MuonParticle

namespace ROOT {
   // Wrappers around operator new
   static void *new_l1extracLcLL1EtMissParticle(void *p) {
      return  p ? ::new((::ROOT::Internal::TOperatorNewHelper*)p) ::l1extra::L1EtMissParticle : new ::l1extra::L1EtMissParticle;
   }
   static void *newArray_l1extracLcLL1EtMissParticle(Long_t nElements, void *p) {
      return p ? ::new((::ROOT::Internal::TOperatorNewHelper*)p) ::l1extra::L1EtMissParticle[nElements] : new ::l1extra::L1EtMissParticle[nElements];
   }
   // Wrapper around operator delete
   static void delete_l1extracLcLL1EtMissParticle(void *p) {
      delete ((::l1extra::L1EtMissParticle*)p);
   }
   static void deleteArray_l1extracLcLL1EtMissParticle(void *p) {
      delete [] ((::l1extra::L1EtMissParticle*)p);
   }
   static void destruct_l1extracLcLL1EtMissParticle(void *p) {
      typedef ::l1extra::L1EtMissParticle current_t;
      ((current_t*)p)->~current_t();
   }
} // end of namespace ROOT for class ::l1extra::L1EtMissParticle

namespace ROOT {
   // Wrappers around operator new
   static void *new_l1extracLcLL1ParticleMap(void *p) {
      return  p ? ::new((::ROOT::Internal::TOperatorNewHelper*)p) ::l1extra::L1ParticleMap : new ::l1extra::L1ParticleMap;
   }
   static void *newArray_l1extracLcLL1ParticleMap(Long_t nElements, void *p) {
      return p ? ::new((::ROOT::Internal::TOperatorNewHelper*)p) ::l1extra::L1ParticleMap[nElements] : new ::l1extra::L1ParticleMap[nElements];
   }
   // Wrapper around operator delete
   static void delete_l1extracLcLL1ParticleMap(void *p) {
      delete ((::l1extra::L1ParticleMap*)p);
   }
   static void deleteArray_l1extracLcLL1ParticleMap(void *p) {
      delete [] ((::l1extra::L1ParticleMap*)p);
   }
   static void destruct_l1extracLcLL1ParticleMap(void *p) {
      typedef ::l1extra::L1ParticleMap current_t;
      ((current_t*)p)->~current_t();
   }
} // end of namespace ROOT for class ::l1extra::L1ParticleMap

namespace ROOT {
   // Wrappers around operator new
   static void *new_l1extracLcLL1HFRings(void *p) {
      return  p ? ::new((::ROOT::Internal::TOperatorNewHelper*)p) ::l1extra::L1HFRings : new ::l1extra::L1HFRings;
   }
   static void *newArray_l1extracLcLL1HFRings(Long_t nElements, void *p) {
      return p ? ::new((::ROOT::Internal::TOperatorNewHelper*)p) ::l1extra::L1HFRings[nElements] : new ::l1extra::L1HFRings[nElements];
   }
   // Wrapper around operator delete
   static void delete_l1extracLcLL1HFRings(void *p) {
      delete ((::l1extra::L1HFRings*)p);
   }
   static void deleteArray_l1extracLcLL1HFRings(void *p) {
      delete [] ((::l1extra::L1HFRings*)p);
   }
   static void destruct_l1extracLcLL1HFRings(void *p) {
      typedef ::l1extra::L1HFRings current_t;
      ((current_t*)p)->~current_t();
   }
} // end of namespace ROOT for class ::l1extra::L1HFRings

namespace ROOT {
   // Wrappers around operator new
   static void *new_edmcLcLWrapperlEvectorlEl1extracLcLL1EmParticlegRsPgR(void *p) {
      return  p ? ::new((::ROOT::Internal::TOperatorNewHelper*)p) ::edm::Wrapper<vector<l1extra::L1EmParticle> > : new ::edm::Wrapper<vector<l1extra::L1EmParticle> >;
   }
   static void *newArray_edmcLcLWrapperlEvectorlEl1extracLcLL1EmParticlegRsPgR(Long_t nElements, void *p) {
      return p ? ::new((::ROOT::Internal::TOperatorNewHelper*)p) ::edm::Wrapper<vector<l1extra::L1EmParticle> >[nElements] : new ::edm::Wrapper<vector<l1extra::L1EmParticle> >[nElements];
   }
   // Wrapper around operator delete
   static void delete_edmcLcLWrapperlEvectorlEl1extracLcLL1EmParticlegRsPgR(void *p) {
      delete ((::edm::Wrapper<vector<l1extra::L1EmParticle> >*)p);
   }
   static void deleteArray_edmcLcLWrapperlEvectorlEl1extracLcLL1EmParticlegRsPgR(void *p) {
      delete [] ((::edm::Wrapper<vector<l1extra::L1EmParticle> >*)p);
   }
   static void destruct_edmcLcLWrapperlEvectorlEl1extracLcLL1EmParticlegRsPgR(void *p) {
      typedef ::edm::Wrapper<vector<l1extra::L1EmParticle> > current_t;
      ((current_t*)p)->~current_t();
   }
} // end of namespace ROOT for class ::edm::Wrapper<vector<l1extra::L1EmParticle> >

namespace ROOT {
   // Wrappers around operator new
   static void *new_edmcLcLWrapperlEvectorlEl1extracLcLL1JetParticlegRsPgR(void *p) {
      return  p ? ::new((::ROOT::Internal::TOperatorNewHelper*)p) ::edm::Wrapper<vector<l1extra::L1JetParticle> > : new ::edm::Wrapper<vector<l1extra::L1JetParticle> >;
   }
   static void *newArray_edmcLcLWrapperlEvectorlEl1extracLcLL1JetParticlegRsPgR(Long_t nElements, void *p) {
      return p ? ::new((::ROOT::Internal::TOperatorNewHelper*)p) ::edm::Wrapper<vector<l1extra::L1JetParticle> >[nElements] : new ::edm::Wrapper<vector<l1extra::L1JetParticle> >[nElements];
   }
   // Wrapper around operator delete
   static void delete_edmcLcLWrapperlEvectorlEl1extracLcLL1JetParticlegRsPgR(void *p) {
      delete ((::edm::Wrapper<vector<l1extra::L1JetParticle> >*)p);
   }
   static void deleteArray_edmcLcLWrapperlEvectorlEl1extracLcLL1JetParticlegRsPgR(void *p) {
      delete [] ((::edm::Wrapper<vector<l1extra::L1JetParticle> >*)p);
   }
   static void destruct_edmcLcLWrapperlEvectorlEl1extracLcLL1JetParticlegRsPgR(void *p) {
      typedef ::edm::Wrapper<vector<l1extra::L1JetParticle> > current_t;
      ((current_t*)p)->~current_t();
   }
} // end of namespace ROOT for class ::edm::Wrapper<vector<l1extra::L1JetParticle> >

namespace ROOT {
   // Wrappers around operator new
   static void *new_edmcLcLWrapperlEvectorlEl1extracLcLL1MuonParticlegRsPgR(void *p) {
      return  p ? ::new((::ROOT::Internal::TOperatorNewHelper*)p) ::edm::Wrapper<vector<l1extra::L1MuonParticle> > : new ::edm::Wrapper<vector<l1extra::L1MuonParticle> >;
   }
   static void *newArray_edmcLcLWrapperlEvectorlEl1extracLcLL1MuonParticlegRsPgR(Long_t nElements, void *p) {
      return p ? ::new((::ROOT::Internal::TOperatorNewHelper*)p) ::edm::Wrapper<vector<l1extra::L1MuonParticle> >[nElements] : new ::edm::Wrapper<vector<l1extra::L1MuonParticle> >[nElements];
   }
   // Wrapper around operator delete
   static void delete_edmcLcLWrapperlEvectorlEl1extracLcLL1MuonParticlegRsPgR(void *p) {
      delete ((::edm::Wrapper<vector<l1extra::L1MuonParticle> >*)p);
   }
   static void deleteArray_edmcLcLWrapperlEvectorlEl1extracLcLL1MuonParticlegRsPgR(void *p) {
      delete [] ((::edm::Wrapper<vector<l1extra::L1MuonParticle> >*)p);
   }
   static void destruct_edmcLcLWrapperlEvectorlEl1extracLcLL1MuonParticlegRsPgR(void *p) {
      typedef ::edm::Wrapper<vector<l1extra::L1MuonParticle> > current_t;
      ((current_t*)p)->~current_t();
   }
} // end of namespace ROOT for class ::edm::Wrapper<vector<l1extra::L1MuonParticle> >

namespace ROOT {
   // Wrappers around operator new
   static void *new_edmcLcLWrapperlEl1extracLcLL1EtMissParticlegR(void *p) {
      return  p ? ::new((::ROOT::Internal::TOperatorNewHelper*)p) ::edm::Wrapper<l1extra::L1EtMissParticle> : new ::edm::Wrapper<l1extra::L1EtMissParticle>;
   }
   static void *newArray_edmcLcLWrapperlEl1extracLcLL1EtMissParticlegR(Long_t nElements, void *p) {
      return p ? ::new((::ROOT::Internal::TOperatorNewHelper*)p) ::edm::Wrapper<l1extra::L1EtMissParticle>[nElements] : new ::edm::Wrapper<l1extra::L1EtMissParticle>[nElements];
   }
   // Wrapper around operator delete
   static void delete_edmcLcLWrapperlEl1extracLcLL1EtMissParticlegR(void *p) {
      delete ((::edm::Wrapper<l1extra::L1EtMissParticle>*)p);
   }
   static void deleteArray_edmcLcLWrapperlEl1extracLcLL1EtMissParticlegR(void *p) {
      delete [] ((::edm::Wrapper<l1extra::L1EtMissParticle>*)p);
   }
   static void destruct_edmcLcLWrapperlEl1extracLcLL1EtMissParticlegR(void *p) {
      typedef ::edm::Wrapper<l1extra::L1EtMissParticle> current_t;
      ((current_t*)p)->~current_t();
   }
} // end of namespace ROOT for class ::edm::Wrapper<l1extra::L1EtMissParticle>

namespace ROOT {
   // Wrappers around operator new
   static void *new_edmcLcLWrapperlEvectorlEl1extracLcLL1EtMissParticlegRsPgR(void *p) {
      return  p ? ::new((::ROOT::Internal::TOperatorNewHelper*)p) ::edm::Wrapper<vector<l1extra::L1EtMissParticle> > : new ::edm::Wrapper<vector<l1extra::L1EtMissParticle> >;
   }
   static void *newArray_edmcLcLWrapperlEvectorlEl1extracLcLL1EtMissParticlegRsPgR(Long_t nElements, void *p) {
      return p ? ::new((::ROOT::Internal::TOperatorNewHelper*)p) ::edm::Wrapper<vector<l1extra::L1EtMissParticle> >[nElements] : new ::edm::Wrapper<vector<l1extra::L1EtMissParticle> >[nElements];
   }
   // Wrapper around operator delete
   static void delete_edmcLcLWrapperlEvectorlEl1extracLcLL1EtMissParticlegRsPgR(void *p) {
      delete ((::edm::Wrapper<vector<l1extra::L1EtMissParticle> >*)p);
   }
   static void deleteArray_edmcLcLWrapperlEvectorlEl1extracLcLL1EtMissParticlegRsPgR(void *p) {
      delete [] ((::edm::Wrapper<vector<l1extra::L1EtMissParticle> >*)p);
   }
   static void destruct_edmcLcLWrapperlEvectorlEl1extracLcLL1EtMissParticlegRsPgR(void *p) {
      typedef ::edm::Wrapper<vector<l1extra::L1EtMissParticle> > current_t;
      ((current_t*)p)->~current_t();
   }
} // end of namespace ROOT for class ::edm::Wrapper<vector<l1extra::L1EtMissParticle> >

namespace ROOT {
   // Wrappers around operator new
   static void *new_edmcLcLWrapperlEvectorlEl1extracLcLL1ParticleMapgRsPgR(void *p) {
      return  p ? ::new((::ROOT::Internal::TOperatorNewHelper*)p) ::edm::Wrapper<vector<l1extra::L1ParticleMap> > : new ::edm::Wrapper<vector<l1extra::L1ParticleMap> >;
   }
   static void *newArray_edmcLcLWrapperlEvectorlEl1extracLcLL1ParticleMapgRsPgR(Long_t nElements, void *p) {
      return p ? ::new((::ROOT::Internal::TOperatorNewHelper*)p) ::edm::Wrapper<vector<l1extra::L1ParticleMap> >[nElements] : new ::edm::Wrapper<vector<l1extra::L1ParticleMap> >[nElements];
   }
   // Wrapper around operator delete
   static void delete_edmcLcLWrapperlEvectorlEl1extracLcLL1ParticleMapgRsPgR(void *p) {
      delete ((::edm::Wrapper<vector<l1extra::L1ParticleMap> >*)p);
   }
   static void deleteArray_edmcLcLWrapperlEvectorlEl1extracLcLL1ParticleMapgRsPgR(void *p) {
      delete [] ((::edm::Wrapper<vector<l1extra::L1ParticleMap> >*)p);
   }
   static void destruct_edmcLcLWrapperlEvectorlEl1extracLcLL1ParticleMapgRsPgR(void *p) {
      typedef ::edm::Wrapper<vector<l1extra::L1ParticleMap> > current_t;
      ((current_t*)p)->~current_t();
   }
} // end of namespace ROOT for class ::edm::Wrapper<vector<l1extra::L1ParticleMap> >

namespace ROOT {
   // Wrappers around operator new
   static void *new_edmcLcLWrapperlEvectorlEl1extracLcLL1HFRingsgRsPgR(void *p) {
      return  p ? ::new((::ROOT::Internal::TOperatorNewHelper*)p) ::edm::Wrapper<vector<l1extra::L1HFRings> > : new ::edm::Wrapper<vector<l1extra::L1HFRings> >;
   }
   static void *newArray_edmcLcLWrapperlEvectorlEl1extracLcLL1HFRingsgRsPgR(Long_t nElements, void *p) {
      return p ? ::new((::ROOT::Internal::TOperatorNewHelper*)p) ::edm::Wrapper<vector<l1extra::L1HFRings> >[nElements] : new ::edm::Wrapper<vector<l1extra::L1HFRings> >[nElements];
   }
   // Wrapper around operator delete
   static void delete_edmcLcLWrapperlEvectorlEl1extracLcLL1HFRingsgRsPgR(void *p) {
      delete ((::edm::Wrapper<vector<l1extra::L1HFRings> >*)p);
   }
   static void deleteArray_edmcLcLWrapperlEvectorlEl1extracLcLL1HFRingsgRsPgR(void *p) {
      delete [] ((::edm::Wrapper<vector<l1extra::L1HFRings> >*)p);
   }
   static void destruct_edmcLcLWrapperlEvectorlEl1extracLcLL1HFRingsgRsPgR(void *p) {
      typedef ::edm::Wrapper<vector<l1extra::L1HFRings> > current_t;
      ((current_t*)p)->~current_t();
   }
} // end of namespace ROOT for class ::edm::Wrapper<vector<l1extra::L1HFRings> >

namespace ROOT {
   // Wrappers around operator new
   static void *new_edmcLcLReflEvectorlEl1extracLcLL1EmParticlegRcOl1extracLcLL1EmParticlecOedmcLcLrefhelpercLcLFindUsingAdvancelEvectorlEl1extracLcLL1EmParticlegRcOl1extracLcLL1EmParticlegRsPgR(void *p) {
      return  p ? ::new((::ROOT::Internal::TOperatorNewHelper*)p) ::edm::Ref<vector<l1extra::L1EmParticle>,l1extra::L1EmParticle,edm::refhelper::FindUsingAdvance<vector<l1extra::L1EmParticle>,l1extra::L1EmParticle> > : new ::edm::Ref<vector<l1extra::L1EmParticle>,l1extra::L1EmParticle,edm::refhelper::FindUsingAdvance<vector<l1extra::L1EmParticle>,l1extra::L1EmParticle> >;
   }
   static void *newArray_edmcLcLReflEvectorlEl1extracLcLL1EmParticlegRcOl1extracLcLL1EmParticlecOedmcLcLrefhelpercLcLFindUsingAdvancelEvectorlEl1extracLcLL1EmParticlegRcOl1extracLcLL1EmParticlegRsPgR(Long_t nElements, void *p) {
      return p ? ::new((::ROOT::Internal::TOperatorNewHelper*)p) ::edm::Ref<vector<l1extra::L1EmParticle>,l1extra::L1EmParticle,edm::refhelper::FindUsingAdvance<vector<l1extra::L1EmParticle>,l1extra::L1EmParticle> >[nElements] : new ::edm::Ref<vector<l1extra::L1EmParticle>,l1extra::L1EmParticle,edm::refhelper::FindUsingAdvance<vector<l1extra::L1EmParticle>,l1extra::L1EmParticle> >[nElements];
   }
   // Wrapper around operator delete
   static void delete_edmcLcLReflEvectorlEl1extracLcLL1EmParticlegRcOl1extracLcLL1EmParticlecOedmcLcLrefhelpercLcLFindUsingAdvancelEvectorlEl1extracLcLL1EmParticlegRcOl1extracLcLL1EmParticlegRsPgR(void *p) {
      delete ((::edm::Ref<vector<l1extra::L1EmParticle>,l1extra::L1EmParticle,edm::refhelper::FindUsingAdvance<vector<l1extra::L1EmParticle>,l1extra::L1EmParticle> >*)p);
   }
   static void deleteArray_edmcLcLReflEvectorlEl1extracLcLL1EmParticlegRcOl1extracLcLL1EmParticlecOedmcLcLrefhelpercLcLFindUsingAdvancelEvectorlEl1extracLcLL1EmParticlegRcOl1extracLcLL1EmParticlegRsPgR(void *p) {
      delete [] ((::edm::Ref<vector<l1extra::L1EmParticle>,l1extra::L1EmParticle,edm::refhelper::FindUsingAdvance<vector<l1extra::L1EmParticle>,l1extra::L1EmParticle> >*)p);
   }
   static void destruct_edmcLcLReflEvectorlEl1extracLcLL1EmParticlegRcOl1extracLcLL1EmParticlecOedmcLcLrefhelpercLcLFindUsingAdvancelEvectorlEl1extracLcLL1EmParticlegRcOl1extracLcLL1EmParticlegRsPgR(void *p) {
      typedef ::edm::Ref<vector<l1extra::L1EmParticle>,l1extra::L1EmParticle,edm::refhelper::FindUsingAdvance<vector<l1extra::L1EmParticle>,l1extra::L1EmParticle> > current_t;
      ((current_t*)p)->~current_t();
   }
} // end of namespace ROOT for class ::edm::Ref<vector<l1extra::L1EmParticle>,l1extra::L1EmParticle,edm::refhelper::FindUsingAdvance<vector<l1extra::L1EmParticle>,l1extra::L1EmParticle> >

namespace ROOT {
   // Wrappers around operator new
   static void *new_edmcLcLReflEvectorlEl1extracLcLL1JetParticlegRcOl1extracLcLL1JetParticlecOedmcLcLrefhelpercLcLFindUsingAdvancelEvectorlEl1extracLcLL1JetParticlegRcOl1extracLcLL1JetParticlegRsPgR(void *p) {
      return  p ? ::new((::ROOT::Internal::TOperatorNewHelper*)p) ::edm::Ref<vector<l1extra::L1JetParticle>,l1extra::L1JetParticle,edm::refhelper::FindUsingAdvance<vector<l1extra::L1JetParticle>,l1extra::L1JetParticle> > : new ::edm::Ref<vector<l1extra::L1JetParticle>,l1extra::L1JetParticle,edm::refhelper::FindUsingAdvance<vector<l1extra::L1JetParticle>,l1extra::L1JetParticle> >;
   }
   static void *newArray_edmcLcLReflEvectorlEl1extracLcLL1JetParticlegRcOl1extracLcLL1JetParticlecOedmcLcLrefhelpercLcLFindUsingAdvancelEvectorlEl1extracLcLL1JetParticlegRcOl1extracLcLL1JetParticlegRsPgR(Long_t nElements, void *p) {
      return p ? ::new((::ROOT::Internal::TOperatorNewHelper*)p) ::edm::Ref<vector<l1extra::L1JetParticle>,l1extra::L1JetParticle,edm::refhelper::FindUsingAdvance<vector<l1extra::L1JetParticle>,l1extra::L1JetParticle> >[nElements] : new ::edm::Ref<vector<l1extra::L1JetParticle>,l1extra::L1JetParticle,edm::refhelper::FindUsingAdvance<vector<l1extra::L1JetParticle>,l1extra::L1JetParticle> >[nElements];
   }
   // Wrapper around operator delete
   static void delete_edmcLcLReflEvectorlEl1extracLcLL1JetParticlegRcOl1extracLcLL1JetParticlecOedmcLcLrefhelpercLcLFindUsingAdvancelEvectorlEl1extracLcLL1JetParticlegRcOl1extracLcLL1JetParticlegRsPgR(void *p) {
      delete ((::edm::Ref<vector<l1extra::L1JetParticle>,l1extra::L1JetParticle,edm::refhelper::FindUsingAdvance<vector<l1extra::L1JetParticle>,l1extra::L1JetParticle> >*)p);
   }
   static void deleteArray_edmcLcLReflEvectorlEl1extracLcLL1JetParticlegRcOl1extracLcLL1JetParticlecOedmcLcLrefhelpercLcLFindUsingAdvancelEvectorlEl1extracLcLL1JetParticlegRcOl1extracLcLL1JetParticlegRsPgR(void *p) {
      delete [] ((::edm::Ref<vector<l1extra::L1JetParticle>,l1extra::L1JetParticle,edm::refhelper::FindUsingAdvance<vector<l1extra::L1JetParticle>,l1extra::L1JetParticle> >*)p);
   }
   static void destruct_edmcLcLReflEvectorlEl1extracLcLL1JetParticlegRcOl1extracLcLL1JetParticlecOedmcLcLrefhelpercLcLFindUsingAdvancelEvectorlEl1extracLcLL1JetParticlegRcOl1extracLcLL1JetParticlegRsPgR(void *p) {
      typedef ::edm::Ref<vector<l1extra::L1JetParticle>,l1extra::L1JetParticle,edm::refhelper::FindUsingAdvance<vector<l1extra::L1JetParticle>,l1extra::L1JetParticle> > current_t;
      ((current_t*)p)->~current_t();
   }
} // end of namespace ROOT for class ::edm::Ref<vector<l1extra::L1JetParticle>,l1extra::L1JetParticle,edm::refhelper::FindUsingAdvance<vector<l1extra::L1JetParticle>,l1extra::L1JetParticle> >

namespace ROOT {
   // Wrappers around operator new
   static void *new_edmcLcLReflEvectorlEl1extracLcLL1MuonParticlegRcOl1extracLcLL1MuonParticlecOedmcLcLrefhelpercLcLFindUsingAdvancelEvectorlEl1extracLcLL1MuonParticlegRcOl1extracLcLL1MuonParticlegRsPgR(void *p) {
      return  p ? ::new((::ROOT::Internal::TOperatorNewHelper*)p) ::edm::Ref<vector<l1extra::L1MuonParticle>,l1extra::L1MuonParticle,edm::refhelper::FindUsingAdvance<vector<l1extra::L1MuonParticle>,l1extra::L1MuonParticle> > : new ::edm::Ref<vector<l1extra::L1MuonParticle>,l1extra::L1MuonParticle,edm::refhelper::FindUsingAdvance<vector<l1extra::L1MuonParticle>,l1extra::L1MuonParticle> >;
   }
   static void *newArray_edmcLcLReflEvectorlEl1extracLcLL1MuonParticlegRcOl1extracLcLL1MuonParticlecOedmcLcLrefhelpercLcLFindUsingAdvancelEvectorlEl1extracLcLL1MuonParticlegRcOl1extracLcLL1MuonParticlegRsPgR(Long_t nElements, void *p) {
      return p ? ::new((::ROOT::Internal::TOperatorNewHelper*)p) ::edm::Ref<vector<l1extra::L1MuonParticle>,l1extra::L1MuonParticle,edm::refhelper::FindUsingAdvance<vector<l1extra::L1MuonParticle>,l1extra::L1MuonParticle> >[nElements] : new ::edm::Ref<vector<l1extra::L1MuonParticle>,l1extra::L1MuonParticle,edm::refhelper::FindUsingAdvance<vector<l1extra::L1MuonParticle>,l1extra::L1MuonParticle> >[nElements];
   }
   // Wrapper around operator delete
   static void delete_edmcLcLReflEvectorlEl1extracLcLL1MuonParticlegRcOl1extracLcLL1MuonParticlecOedmcLcLrefhelpercLcLFindUsingAdvancelEvectorlEl1extracLcLL1MuonParticlegRcOl1extracLcLL1MuonParticlegRsPgR(void *p) {
      delete ((::edm::Ref<vector<l1extra::L1MuonParticle>,l1extra::L1MuonParticle,edm::refhelper::FindUsingAdvance<vector<l1extra::L1MuonParticle>,l1extra::L1MuonParticle> >*)p);
   }
   static void deleteArray_edmcLcLReflEvectorlEl1extracLcLL1MuonParticlegRcOl1extracLcLL1MuonParticlecOedmcLcLrefhelpercLcLFindUsingAdvancelEvectorlEl1extracLcLL1MuonParticlegRcOl1extracLcLL1MuonParticlegRsPgR(void *p) {
      delete [] ((::edm::Ref<vector<l1extra::L1MuonParticle>,l1extra::L1MuonParticle,edm::refhelper::FindUsingAdvance<vector<l1extra::L1MuonParticle>,l1extra::L1MuonParticle> >*)p);
   }
   static void destruct_edmcLcLReflEvectorlEl1extracLcLL1MuonParticlegRcOl1extracLcLL1MuonParticlecOedmcLcLrefhelpercLcLFindUsingAdvancelEvectorlEl1extracLcLL1MuonParticlegRcOl1extracLcLL1MuonParticlegRsPgR(void *p) {
      typedef ::edm::Ref<vector<l1extra::L1MuonParticle>,l1extra::L1MuonParticle,edm::refhelper::FindUsingAdvance<vector<l1extra::L1MuonParticle>,l1extra::L1MuonParticle> > current_t;
      ((current_t*)p)->~current_t();
   }
} // end of namespace ROOT for class ::edm::Ref<vector<l1extra::L1MuonParticle>,l1extra::L1MuonParticle,edm::refhelper::FindUsingAdvance<vector<l1extra::L1MuonParticle>,l1extra::L1MuonParticle> >

namespace ROOT {
   // Wrappers around operator new
   static void *new_edmcLcLReflEvectorlEl1extracLcLL1EtMissParticlegRcOl1extracLcLL1EtMissParticlecOedmcLcLrefhelpercLcLFindUsingAdvancelEvectorlEl1extracLcLL1EtMissParticlegRcOl1extracLcLL1EtMissParticlegRsPgR(void *p) {
      return  p ? ::new((::ROOT::Internal::TOperatorNewHelper*)p) ::edm::Ref<vector<l1extra::L1EtMissParticle>,l1extra::L1EtMissParticle,edm::refhelper::FindUsingAdvance<vector<l1extra::L1EtMissParticle>,l1extra::L1EtMissParticle> > : new ::edm::Ref<vector<l1extra::L1EtMissParticle>,l1extra::L1EtMissParticle,edm::refhelper::FindUsingAdvance<vector<l1extra::L1EtMissParticle>,l1extra::L1EtMissParticle> >;
   }
   static void *newArray_edmcLcLReflEvectorlEl1extracLcLL1EtMissParticlegRcOl1extracLcLL1EtMissParticlecOedmcLcLrefhelpercLcLFindUsingAdvancelEvectorlEl1extracLcLL1EtMissParticlegRcOl1extracLcLL1EtMissParticlegRsPgR(Long_t nElements, void *p) {
      return p ? ::new((::ROOT::Internal::TOperatorNewHelper*)p) ::edm::Ref<vector<l1extra::L1EtMissParticle>,l1extra::L1EtMissParticle,edm::refhelper::FindUsingAdvance<vector<l1extra::L1EtMissParticle>,l1extra::L1EtMissParticle> >[nElements] : new ::edm::Ref<vector<l1extra::L1EtMissParticle>,l1extra::L1EtMissParticle,edm::refhelper::FindUsingAdvance<vector<l1extra::L1EtMissParticle>,l1extra::L1EtMissParticle> >[nElements];
   }
   // Wrapper around operator delete
   static void delete_edmcLcLReflEvectorlEl1extracLcLL1EtMissParticlegRcOl1extracLcLL1EtMissParticlecOedmcLcLrefhelpercLcLFindUsingAdvancelEvectorlEl1extracLcLL1EtMissParticlegRcOl1extracLcLL1EtMissParticlegRsPgR(void *p) {
      delete ((::edm::Ref<vector<l1extra::L1EtMissParticle>,l1extra::L1EtMissParticle,edm::refhelper::FindUsingAdvance<vector<l1extra::L1EtMissParticle>,l1extra::L1EtMissParticle> >*)p);
   }
   static void deleteArray_edmcLcLReflEvectorlEl1extracLcLL1EtMissParticlegRcOl1extracLcLL1EtMissParticlecOedmcLcLrefhelpercLcLFindUsingAdvancelEvectorlEl1extracLcLL1EtMissParticlegRcOl1extracLcLL1EtMissParticlegRsPgR(void *p) {
      delete [] ((::edm::Ref<vector<l1extra::L1EtMissParticle>,l1extra::L1EtMissParticle,edm::refhelper::FindUsingAdvance<vector<l1extra::L1EtMissParticle>,l1extra::L1EtMissParticle> >*)p);
   }
   static void destruct_edmcLcLReflEvectorlEl1extracLcLL1EtMissParticlegRcOl1extracLcLL1EtMissParticlecOedmcLcLrefhelpercLcLFindUsingAdvancelEvectorlEl1extracLcLL1EtMissParticlegRcOl1extracLcLL1EtMissParticlegRsPgR(void *p) {
      typedef ::edm::Ref<vector<l1extra::L1EtMissParticle>,l1extra::L1EtMissParticle,edm::refhelper::FindUsingAdvance<vector<l1extra::L1EtMissParticle>,l1extra::L1EtMissParticle> > current_t;
      ((current_t*)p)->~current_t();
   }
} // end of namespace ROOT for class ::edm::Ref<vector<l1extra::L1EtMissParticle>,l1extra::L1EtMissParticle,edm::refhelper::FindUsingAdvance<vector<l1extra::L1EtMissParticle>,l1extra::L1EtMissParticle> >

namespace ROOT {
   // Wrappers around operator new
   static void *new_edmcLcLReflEvectorlEl1extracLcLL1HFRingsgRcOl1extracLcLL1HFRingscOedmcLcLrefhelpercLcLFindUsingAdvancelEvectorlEl1extracLcLL1HFRingsgRcOl1extracLcLL1HFRingsgRsPgR(void *p) {
      return  p ? ::new((::ROOT::Internal::TOperatorNewHelper*)p) ::edm::Ref<vector<l1extra::L1HFRings>,l1extra::L1HFRings,edm::refhelper::FindUsingAdvance<vector<l1extra::L1HFRings>,l1extra::L1HFRings> > : new ::edm::Ref<vector<l1extra::L1HFRings>,l1extra::L1HFRings,edm::refhelper::FindUsingAdvance<vector<l1extra::L1HFRings>,l1extra::L1HFRings> >;
   }
   static void *newArray_edmcLcLReflEvectorlEl1extracLcLL1HFRingsgRcOl1extracLcLL1HFRingscOedmcLcLrefhelpercLcLFindUsingAdvancelEvectorlEl1extracLcLL1HFRingsgRcOl1extracLcLL1HFRingsgRsPgR(Long_t nElements, void *p) {
      return p ? ::new((::ROOT::Internal::TOperatorNewHelper*)p) ::edm::Ref<vector<l1extra::L1HFRings>,l1extra::L1HFRings,edm::refhelper::FindUsingAdvance<vector<l1extra::L1HFRings>,l1extra::L1HFRings> >[nElements] : new ::edm::Ref<vector<l1extra::L1HFRings>,l1extra::L1HFRings,edm::refhelper::FindUsingAdvance<vector<l1extra::L1HFRings>,l1extra::L1HFRings> >[nElements];
   }
   // Wrapper around operator delete
   static void delete_edmcLcLReflEvectorlEl1extracLcLL1HFRingsgRcOl1extracLcLL1HFRingscOedmcLcLrefhelpercLcLFindUsingAdvancelEvectorlEl1extracLcLL1HFRingsgRcOl1extracLcLL1HFRingsgRsPgR(void *p) {
      delete ((::edm::Ref<vector<l1extra::L1HFRings>,l1extra::L1HFRings,edm::refhelper::FindUsingAdvance<vector<l1extra::L1HFRings>,l1extra::L1HFRings> >*)p);
   }
   static void deleteArray_edmcLcLReflEvectorlEl1extracLcLL1HFRingsgRcOl1extracLcLL1HFRingscOedmcLcLrefhelpercLcLFindUsingAdvancelEvectorlEl1extracLcLL1HFRingsgRcOl1extracLcLL1HFRingsgRsPgR(void *p) {
      delete [] ((::edm::Ref<vector<l1extra::L1HFRings>,l1extra::L1HFRings,edm::refhelper::FindUsingAdvance<vector<l1extra::L1HFRings>,l1extra::L1HFRings> >*)p);
   }
   static void destruct_edmcLcLReflEvectorlEl1extracLcLL1HFRingsgRcOl1extracLcLL1HFRingscOedmcLcLrefhelpercLcLFindUsingAdvancelEvectorlEl1extracLcLL1HFRingsgRcOl1extracLcLL1HFRingsgRsPgR(void *p) {
      typedef ::edm::Ref<vector<l1extra::L1HFRings>,l1extra::L1HFRings,edm::refhelper::FindUsingAdvance<vector<l1extra::L1HFRings>,l1extra::L1HFRings> > current_t;
      ((current_t*)p)->~current_t();
   }
} // end of namespace ROOT for class ::edm::Ref<vector<l1extra::L1HFRings>,l1extra::L1HFRings,edm::refhelper::FindUsingAdvance<vector<l1extra::L1HFRings>,l1extra::L1HFRings> >

namespace ROOT {
   // Wrappers around operator new
   static void *new_edmcLcLRefVectorlEvectorlEl1extracLcLL1EmParticlegRcOl1extracLcLL1EmParticlecOedmcLcLrefhelpercLcLFindUsingAdvancelEvectorlEl1extracLcLL1EmParticlegRcOl1extracLcLL1EmParticlegRsPgR(void *p) {
      return  p ? ::new((::ROOT::Internal::TOperatorNewHelper*)p) ::edm::RefVector<vector<l1extra::L1EmParticle>,l1extra::L1EmParticle,edm::refhelper::FindUsingAdvance<vector<l1extra::L1EmParticle>,l1extra::L1EmParticle> > : new ::edm::RefVector<vector<l1extra::L1EmParticle>,l1extra::L1EmParticle,edm::refhelper::FindUsingAdvance<vector<l1extra::L1EmParticle>,l1extra::L1EmParticle> >;
   }
   static void *newArray_edmcLcLRefVectorlEvectorlEl1extracLcLL1EmParticlegRcOl1extracLcLL1EmParticlecOedmcLcLrefhelpercLcLFindUsingAdvancelEvectorlEl1extracLcLL1EmParticlegRcOl1extracLcLL1EmParticlegRsPgR(Long_t nElements, void *p) {
      return p ? ::new((::ROOT::Internal::TOperatorNewHelper*)p) ::edm::RefVector<vector<l1extra::L1EmParticle>,l1extra::L1EmParticle,edm::refhelper::FindUsingAdvance<vector<l1extra::L1EmParticle>,l1extra::L1EmParticle> >[nElements] : new ::edm::RefVector<vector<l1extra::L1EmParticle>,l1extra::L1EmParticle,edm::refhelper::FindUsingAdvance<vector<l1extra::L1EmParticle>,l1extra::L1EmParticle> >[nElements];
   }
   // Wrapper around operator delete
   static void delete_edmcLcLRefVectorlEvectorlEl1extracLcLL1EmParticlegRcOl1extracLcLL1EmParticlecOedmcLcLrefhelpercLcLFindUsingAdvancelEvectorlEl1extracLcLL1EmParticlegRcOl1extracLcLL1EmParticlegRsPgR(void *p) {
      delete ((::edm::RefVector<vector<l1extra::L1EmParticle>,l1extra::L1EmParticle,edm::refhelper::FindUsingAdvance<vector<l1extra::L1EmParticle>,l1extra::L1EmParticle> >*)p);
   }
   static void deleteArray_edmcLcLRefVectorlEvectorlEl1extracLcLL1EmParticlegRcOl1extracLcLL1EmParticlecOedmcLcLrefhelpercLcLFindUsingAdvancelEvectorlEl1extracLcLL1EmParticlegRcOl1extracLcLL1EmParticlegRsPgR(void *p) {
      delete [] ((::edm::RefVector<vector<l1extra::L1EmParticle>,l1extra::L1EmParticle,edm::refhelper::FindUsingAdvance<vector<l1extra::L1EmParticle>,l1extra::L1EmParticle> >*)p);
   }
   static void destruct_edmcLcLRefVectorlEvectorlEl1extracLcLL1EmParticlegRcOl1extracLcLL1EmParticlecOedmcLcLrefhelpercLcLFindUsingAdvancelEvectorlEl1extracLcLL1EmParticlegRcOl1extracLcLL1EmParticlegRsPgR(void *p) {
      typedef ::edm::RefVector<vector<l1extra::L1EmParticle>,l1extra::L1EmParticle,edm::refhelper::FindUsingAdvance<vector<l1extra::L1EmParticle>,l1extra::L1EmParticle> > current_t;
      ((current_t*)p)->~current_t();
   }
} // end of namespace ROOT for class ::edm::RefVector<vector<l1extra::L1EmParticle>,l1extra::L1EmParticle,edm::refhelper::FindUsingAdvance<vector<l1extra::L1EmParticle>,l1extra::L1EmParticle> >

namespace ROOT {
   // Wrappers around operator new
   static void *new_edmcLcLRefVectorlEvectorlEl1extracLcLL1JetParticlegRcOl1extracLcLL1JetParticlecOedmcLcLrefhelpercLcLFindUsingAdvancelEvectorlEl1extracLcLL1JetParticlegRcOl1extracLcLL1JetParticlegRsPgR(void *p) {
      return  p ? ::new((::ROOT::Internal::TOperatorNewHelper*)p) ::edm::RefVector<vector<l1extra::L1JetParticle>,l1extra::L1JetParticle,edm::refhelper::FindUsingAdvance<vector<l1extra::L1JetParticle>,l1extra::L1JetParticle> > : new ::edm::RefVector<vector<l1extra::L1JetParticle>,l1extra::L1JetParticle,edm::refhelper::FindUsingAdvance<vector<l1extra::L1JetParticle>,l1extra::L1JetParticle> >;
   }
   static void *newArray_edmcLcLRefVectorlEvectorlEl1extracLcLL1JetParticlegRcOl1extracLcLL1JetParticlecOedmcLcLrefhelpercLcLFindUsingAdvancelEvectorlEl1extracLcLL1JetParticlegRcOl1extracLcLL1JetParticlegRsPgR(Long_t nElements, void *p) {
      return p ? ::new((::ROOT::Internal::TOperatorNewHelper*)p) ::edm::RefVector<vector<l1extra::L1JetParticle>,l1extra::L1JetParticle,edm::refhelper::FindUsingAdvance<vector<l1extra::L1JetParticle>,l1extra::L1JetParticle> >[nElements] : new ::edm::RefVector<vector<l1extra::L1JetParticle>,l1extra::L1JetParticle,edm::refhelper::FindUsingAdvance<vector<l1extra::L1JetParticle>,l1extra::L1JetParticle> >[nElements];
   }
   // Wrapper around operator delete
   static void delete_edmcLcLRefVectorlEvectorlEl1extracLcLL1JetParticlegRcOl1extracLcLL1JetParticlecOedmcLcLrefhelpercLcLFindUsingAdvancelEvectorlEl1extracLcLL1JetParticlegRcOl1extracLcLL1JetParticlegRsPgR(void *p) {
      delete ((::edm::RefVector<vector<l1extra::L1JetParticle>,l1extra::L1JetParticle,edm::refhelper::FindUsingAdvance<vector<l1extra::L1JetParticle>,l1extra::L1JetParticle> >*)p);
   }
   static void deleteArray_edmcLcLRefVectorlEvectorlEl1extracLcLL1JetParticlegRcOl1extracLcLL1JetParticlecOedmcLcLrefhelpercLcLFindUsingAdvancelEvectorlEl1extracLcLL1JetParticlegRcOl1extracLcLL1JetParticlegRsPgR(void *p) {
      delete [] ((::edm::RefVector<vector<l1extra::L1JetParticle>,l1extra::L1JetParticle,edm::refhelper::FindUsingAdvance<vector<l1extra::L1JetParticle>,l1extra::L1JetParticle> >*)p);
   }
   static void destruct_edmcLcLRefVectorlEvectorlEl1extracLcLL1JetParticlegRcOl1extracLcLL1JetParticlecOedmcLcLrefhelpercLcLFindUsingAdvancelEvectorlEl1extracLcLL1JetParticlegRcOl1extracLcLL1JetParticlegRsPgR(void *p) {
      typedef ::edm::RefVector<vector<l1extra::L1JetParticle>,l1extra::L1JetParticle,edm::refhelper::FindUsingAdvance<vector<l1extra::L1JetParticle>,l1extra::L1JetParticle> > current_t;
      ((current_t*)p)->~current_t();
   }
} // end of namespace ROOT for class ::edm::RefVector<vector<l1extra::L1JetParticle>,l1extra::L1JetParticle,edm::refhelper::FindUsingAdvance<vector<l1extra::L1JetParticle>,l1extra::L1JetParticle> >

namespace ROOT {
   // Wrappers around operator new
   static void *new_edmcLcLRefVectorlEvectorlEl1extracLcLL1MuonParticlegRcOl1extracLcLL1MuonParticlecOedmcLcLrefhelpercLcLFindUsingAdvancelEvectorlEl1extracLcLL1MuonParticlegRcOl1extracLcLL1MuonParticlegRsPgR(void *p) {
      return  p ? ::new((::ROOT::Internal::TOperatorNewHelper*)p) ::edm::RefVector<vector<l1extra::L1MuonParticle>,l1extra::L1MuonParticle,edm::refhelper::FindUsingAdvance<vector<l1extra::L1MuonParticle>,l1extra::L1MuonParticle> > : new ::edm::RefVector<vector<l1extra::L1MuonParticle>,l1extra::L1MuonParticle,edm::refhelper::FindUsingAdvance<vector<l1extra::L1MuonParticle>,l1extra::L1MuonParticle> >;
   }
   static void *newArray_edmcLcLRefVectorlEvectorlEl1extracLcLL1MuonParticlegRcOl1extracLcLL1MuonParticlecOedmcLcLrefhelpercLcLFindUsingAdvancelEvectorlEl1extracLcLL1MuonParticlegRcOl1extracLcLL1MuonParticlegRsPgR(Long_t nElements, void *p) {
      return p ? ::new((::ROOT::Internal::TOperatorNewHelper*)p) ::edm::RefVector<vector<l1extra::L1MuonParticle>,l1extra::L1MuonParticle,edm::refhelper::FindUsingAdvance<vector<l1extra::L1MuonParticle>,l1extra::L1MuonParticle> >[nElements] : new ::edm::RefVector<vector<l1extra::L1MuonParticle>,l1extra::L1MuonParticle,edm::refhelper::FindUsingAdvance<vector<l1extra::L1MuonParticle>,l1extra::L1MuonParticle> >[nElements];
   }
   // Wrapper around operator delete
   static void delete_edmcLcLRefVectorlEvectorlEl1extracLcLL1MuonParticlegRcOl1extracLcLL1MuonParticlecOedmcLcLrefhelpercLcLFindUsingAdvancelEvectorlEl1extracLcLL1MuonParticlegRcOl1extracLcLL1MuonParticlegRsPgR(void *p) {
      delete ((::edm::RefVector<vector<l1extra::L1MuonParticle>,l1extra::L1MuonParticle,edm::refhelper::FindUsingAdvance<vector<l1extra::L1MuonParticle>,l1extra::L1MuonParticle> >*)p);
   }
   static void deleteArray_edmcLcLRefVectorlEvectorlEl1extracLcLL1MuonParticlegRcOl1extracLcLL1MuonParticlecOedmcLcLrefhelpercLcLFindUsingAdvancelEvectorlEl1extracLcLL1MuonParticlegRcOl1extracLcLL1MuonParticlegRsPgR(void *p) {
      delete [] ((::edm::RefVector<vector<l1extra::L1MuonParticle>,l1extra::L1MuonParticle,edm::refhelper::FindUsingAdvance<vector<l1extra::L1MuonParticle>,l1extra::L1MuonParticle> >*)p);
   }
   static void destruct_edmcLcLRefVectorlEvectorlEl1extracLcLL1MuonParticlegRcOl1extracLcLL1MuonParticlecOedmcLcLrefhelpercLcLFindUsingAdvancelEvectorlEl1extracLcLL1MuonParticlegRcOl1extracLcLL1MuonParticlegRsPgR(void *p) {
      typedef ::edm::RefVector<vector<l1extra::L1MuonParticle>,l1extra::L1MuonParticle,edm::refhelper::FindUsingAdvance<vector<l1extra::L1MuonParticle>,l1extra::L1MuonParticle> > current_t;
      ((current_t*)p)->~current_t();
   }
} // end of namespace ROOT for class ::edm::RefVector<vector<l1extra::L1MuonParticle>,l1extra::L1MuonParticle,edm::refhelper::FindUsingAdvance<vector<l1extra::L1MuonParticle>,l1extra::L1MuonParticle> >

namespace ROOT {
   // Wrappers around operator new
   static void *new_edmcLcLRefVectorlEvectorlEl1extracLcLL1EtMissParticlegRcOl1extracLcLL1EtMissParticlecOedmcLcLrefhelpercLcLFindUsingAdvancelEvectorlEl1extracLcLL1EtMissParticlegRcOl1extracLcLL1EtMissParticlegRsPgR(void *p) {
      return  p ? ::new((::ROOT::Internal::TOperatorNewHelper*)p) ::edm::RefVector<vector<l1extra::L1EtMissParticle>,l1extra::L1EtMissParticle,edm::refhelper::FindUsingAdvance<vector<l1extra::L1EtMissParticle>,l1extra::L1EtMissParticle> > : new ::edm::RefVector<vector<l1extra::L1EtMissParticle>,l1extra::L1EtMissParticle,edm::refhelper::FindUsingAdvance<vector<l1extra::L1EtMissParticle>,l1extra::L1EtMissParticle> >;
   }
   static void *newArray_edmcLcLRefVectorlEvectorlEl1extracLcLL1EtMissParticlegRcOl1extracLcLL1EtMissParticlecOedmcLcLrefhelpercLcLFindUsingAdvancelEvectorlEl1extracLcLL1EtMissParticlegRcOl1extracLcLL1EtMissParticlegRsPgR(Long_t nElements, void *p) {
      return p ? ::new((::ROOT::Internal::TOperatorNewHelper*)p) ::edm::RefVector<vector<l1extra::L1EtMissParticle>,l1extra::L1EtMissParticle,edm::refhelper::FindUsingAdvance<vector<l1extra::L1EtMissParticle>,l1extra::L1EtMissParticle> >[nElements] : new ::edm::RefVector<vector<l1extra::L1EtMissParticle>,l1extra::L1EtMissParticle,edm::refhelper::FindUsingAdvance<vector<l1extra::L1EtMissParticle>,l1extra::L1EtMissParticle> >[nElements];
   }
   // Wrapper around operator delete
   static void delete_edmcLcLRefVectorlEvectorlEl1extracLcLL1EtMissParticlegRcOl1extracLcLL1EtMissParticlecOedmcLcLrefhelpercLcLFindUsingAdvancelEvectorlEl1extracLcLL1EtMissParticlegRcOl1extracLcLL1EtMissParticlegRsPgR(void *p) {
      delete ((::edm::RefVector<vector<l1extra::L1EtMissParticle>,l1extra::L1EtMissParticle,edm::refhelper::FindUsingAdvance<vector<l1extra::L1EtMissParticle>,l1extra::L1EtMissParticle> >*)p);
   }
   static void deleteArray_edmcLcLRefVectorlEvectorlEl1extracLcLL1EtMissParticlegRcOl1extracLcLL1EtMissParticlecOedmcLcLrefhelpercLcLFindUsingAdvancelEvectorlEl1extracLcLL1EtMissParticlegRcOl1extracLcLL1EtMissParticlegRsPgR(void *p) {
      delete [] ((::edm::RefVector<vector<l1extra::L1EtMissParticle>,l1extra::L1EtMissParticle,edm::refhelper::FindUsingAdvance<vector<l1extra::L1EtMissParticle>,l1extra::L1EtMissParticle> >*)p);
   }
   static void destruct_edmcLcLRefVectorlEvectorlEl1extracLcLL1EtMissParticlegRcOl1extracLcLL1EtMissParticlecOedmcLcLrefhelpercLcLFindUsingAdvancelEvectorlEl1extracLcLL1EtMissParticlegRcOl1extracLcLL1EtMissParticlegRsPgR(void *p) {
      typedef ::edm::RefVector<vector<l1extra::L1EtMissParticle>,l1extra::L1EtMissParticle,edm::refhelper::FindUsingAdvance<vector<l1extra::L1EtMissParticle>,l1extra::L1EtMissParticle> > current_t;
      ((current_t*)p)->~current_t();
   }
} // end of namespace ROOT for class ::edm::RefVector<vector<l1extra::L1EtMissParticle>,l1extra::L1EtMissParticle,edm::refhelper::FindUsingAdvance<vector<l1extra::L1EtMissParticle>,l1extra::L1EtMissParticle> >

namespace ROOT {
   // Wrappers around operator new
   static void *new_edmcLcLRefVectorlEvectorlEl1extracLcLL1HFRingsgRcOl1extracLcLL1HFRingscOedmcLcLrefhelpercLcLFindUsingAdvancelEvectorlEl1extracLcLL1HFRingsgRcOl1extracLcLL1HFRingsgRsPgR(void *p) {
      return  p ? ::new((::ROOT::Internal::TOperatorNewHelper*)p) ::edm::RefVector<vector<l1extra::L1HFRings>,l1extra::L1HFRings,edm::refhelper::FindUsingAdvance<vector<l1extra::L1HFRings>,l1extra::L1HFRings> > : new ::edm::RefVector<vector<l1extra::L1HFRings>,l1extra::L1HFRings,edm::refhelper::FindUsingAdvance<vector<l1extra::L1HFRings>,l1extra::L1HFRings> >;
   }
   static void *newArray_edmcLcLRefVectorlEvectorlEl1extracLcLL1HFRingsgRcOl1extracLcLL1HFRingscOedmcLcLrefhelpercLcLFindUsingAdvancelEvectorlEl1extracLcLL1HFRingsgRcOl1extracLcLL1HFRingsgRsPgR(Long_t nElements, void *p) {
      return p ? ::new((::ROOT::Internal::TOperatorNewHelper*)p) ::edm::RefVector<vector<l1extra::L1HFRings>,l1extra::L1HFRings,edm::refhelper::FindUsingAdvance<vector<l1extra::L1HFRings>,l1extra::L1HFRings> >[nElements] : new ::edm::RefVector<vector<l1extra::L1HFRings>,l1extra::L1HFRings,edm::refhelper::FindUsingAdvance<vector<l1extra::L1HFRings>,l1extra::L1HFRings> >[nElements];
   }
   // Wrapper around operator delete
   static void delete_edmcLcLRefVectorlEvectorlEl1extracLcLL1HFRingsgRcOl1extracLcLL1HFRingscOedmcLcLrefhelpercLcLFindUsingAdvancelEvectorlEl1extracLcLL1HFRingsgRcOl1extracLcLL1HFRingsgRsPgR(void *p) {
      delete ((::edm::RefVector<vector<l1extra::L1HFRings>,l1extra::L1HFRings,edm::refhelper::FindUsingAdvance<vector<l1extra::L1HFRings>,l1extra::L1HFRings> >*)p);
   }
   static void deleteArray_edmcLcLRefVectorlEvectorlEl1extracLcLL1HFRingsgRcOl1extracLcLL1HFRingscOedmcLcLrefhelpercLcLFindUsingAdvancelEvectorlEl1extracLcLL1HFRingsgRcOl1extracLcLL1HFRingsgRsPgR(void *p) {
      delete [] ((::edm::RefVector<vector<l1extra::L1HFRings>,l1extra::L1HFRings,edm::refhelper::FindUsingAdvance<vector<l1extra::L1HFRings>,l1extra::L1HFRings> >*)p);
   }
   static void destruct_edmcLcLRefVectorlEvectorlEl1extracLcLL1HFRingsgRcOl1extracLcLL1HFRingscOedmcLcLrefhelpercLcLFindUsingAdvancelEvectorlEl1extracLcLL1HFRingsgRcOl1extracLcLL1HFRingsgRsPgR(void *p) {
      typedef ::edm::RefVector<vector<l1extra::L1HFRings>,l1extra::L1HFRings,edm::refhelper::FindUsingAdvance<vector<l1extra::L1HFRings>,l1extra::L1HFRings> > current_t;
      ((current_t*)p)->~current_t();
   }
} // end of namespace ROOT for class ::edm::RefVector<vector<l1extra::L1HFRings>,l1extra::L1HFRings,edm::refhelper::FindUsingAdvance<vector<l1extra::L1HFRings>,l1extra::L1HFRings> >

namespace ROOT {
   // Wrappers around operator new
   static void *new_edmcLcLRefProdlEl1extracLcLL1EtMissParticlegR(void *p) {
      return  p ? ::new((::ROOT::Internal::TOperatorNewHelper*)p) ::edm::RefProd<l1extra::L1EtMissParticle> : new ::edm::RefProd<l1extra::L1EtMissParticle>;
   }
   static void *newArray_edmcLcLRefProdlEl1extracLcLL1EtMissParticlegR(Long_t nElements, void *p) {
      return p ? ::new((::ROOT::Internal::TOperatorNewHelper*)p) ::edm::RefProd<l1extra::L1EtMissParticle>[nElements] : new ::edm::RefProd<l1extra::L1EtMissParticle>[nElements];
   }
   // Wrapper around operator delete
   static void delete_edmcLcLRefProdlEl1extracLcLL1EtMissParticlegR(void *p) {
      delete ((::edm::RefProd<l1extra::L1EtMissParticle>*)p);
   }
   static void deleteArray_edmcLcLRefProdlEl1extracLcLL1EtMissParticlegR(void *p) {
      delete [] ((::edm::RefProd<l1extra::L1EtMissParticle>*)p);
   }
   static void destruct_edmcLcLRefProdlEl1extracLcLL1EtMissParticlegR(void *p) {
      typedef ::edm::RefProd<l1extra::L1EtMissParticle> current_t;
      ((current_t*)p)->~current_t();
   }
} // end of namespace ROOT for class ::edm::RefProd<l1extra::L1EtMissParticle>

namespace ROOT {
   // Wrappers around operator new
   static void *new_edmcLcLreftobasecLcLHolderlErecocLcLCandidatecOedmcLcLReflEvectorlEl1extracLcLL1EmParticlegRcOl1extracLcLL1EmParticlecOedmcLcLrefhelpercLcLFindUsingAdvancelEvectorlEl1extracLcLL1EmParticlegRcOl1extracLcLL1EmParticlegRsPgRsPgR(void *p) {
      return  p ? ::new((::ROOT::Internal::TOperatorNewHelper*)p) ::edm::reftobase::Holder<reco::Candidate,edm::Ref<vector<l1extra::L1EmParticle>,l1extra::L1EmParticle,edm::refhelper::FindUsingAdvance<vector<l1extra::L1EmParticle>,l1extra::L1EmParticle> > > : new ::edm::reftobase::Holder<reco::Candidate,edm::Ref<vector<l1extra::L1EmParticle>,l1extra::L1EmParticle,edm::refhelper::FindUsingAdvance<vector<l1extra::L1EmParticle>,l1extra::L1EmParticle> > >;
   }
   static void *newArray_edmcLcLreftobasecLcLHolderlErecocLcLCandidatecOedmcLcLReflEvectorlEl1extracLcLL1EmParticlegRcOl1extracLcLL1EmParticlecOedmcLcLrefhelpercLcLFindUsingAdvancelEvectorlEl1extracLcLL1EmParticlegRcOl1extracLcLL1EmParticlegRsPgRsPgR(Long_t nElements, void *p) {
      return p ? ::new((::ROOT::Internal::TOperatorNewHelper*)p) ::edm::reftobase::Holder<reco::Candidate,edm::Ref<vector<l1extra::L1EmParticle>,l1extra::L1EmParticle,edm::refhelper::FindUsingAdvance<vector<l1extra::L1EmParticle>,l1extra::L1EmParticle> > >[nElements] : new ::edm::reftobase::Holder<reco::Candidate,edm::Ref<vector<l1extra::L1EmParticle>,l1extra::L1EmParticle,edm::refhelper::FindUsingAdvance<vector<l1extra::L1EmParticle>,l1extra::L1EmParticle> > >[nElements];
   }
   // Wrapper around operator delete
   static void delete_edmcLcLreftobasecLcLHolderlErecocLcLCandidatecOedmcLcLReflEvectorlEl1extracLcLL1EmParticlegRcOl1extracLcLL1EmParticlecOedmcLcLrefhelpercLcLFindUsingAdvancelEvectorlEl1extracLcLL1EmParticlegRcOl1extracLcLL1EmParticlegRsPgRsPgR(void *p) {
      delete ((::edm::reftobase::Holder<reco::Candidate,edm::Ref<vector<l1extra::L1EmParticle>,l1extra::L1EmParticle,edm::refhelper::FindUsingAdvance<vector<l1extra::L1EmParticle>,l1extra::L1EmParticle> > >*)p);
   }
   static void deleteArray_edmcLcLreftobasecLcLHolderlErecocLcLCandidatecOedmcLcLReflEvectorlEl1extracLcLL1EmParticlegRcOl1extracLcLL1EmParticlecOedmcLcLrefhelpercLcLFindUsingAdvancelEvectorlEl1extracLcLL1EmParticlegRcOl1extracLcLL1EmParticlegRsPgRsPgR(void *p) {
      delete [] ((::edm::reftobase::Holder<reco::Candidate,edm::Ref<vector<l1extra::L1EmParticle>,l1extra::L1EmParticle,edm::refhelper::FindUsingAdvance<vector<l1extra::L1EmParticle>,l1extra::L1EmParticle> > >*)p);
   }
   static void destruct_edmcLcLreftobasecLcLHolderlErecocLcLCandidatecOedmcLcLReflEvectorlEl1extracLcLL1EmParticlegRcOl1extracLcLL1EmParticlecOedmcLcLrefhelpercLcLFindUsingAdvancelEvectorlEl1extracLcLL1EmParticlegRcOl1extracLcLL1EmParticlegRsPgRsPgR(void *p) {
      typedef ::edm::reftobase::Holder<reco::Candidate,edm::Ref<vector<l1extra::L1EmParticle>,l1extra::L1EmParticle,edm::refhelper::FindUsingAdvance<vector<l1extra::L1EmParticle>,l1extra::L1EmParticle> > > current_t;
      ((current_t*)p)->~current_t();
   }
} // end of namespace ROOT for class ::edm::reftobase::Holder<reco::Candidate,edm::Ref<vector<l1extra::L1EmParticle>,l1extra::L1EmParticle,edm::refhelper::FindUsingAdvance<vector<l1extra::L1EmParticle>,l1extra::L1EmParticle> > >

namespace ROOT {
   // Wrappers around operator new
   static void *new_edmcLcLreftobasecLcLHolderlErecocLcLCandidatecOedmcLcLReflEvectorlEl1extracLcLL1MuonParticlegRcOl1extracLcLL1MuonParticlecOedmcLcLrefhelpercLcLFindUsingAdvancelEvectorlEl1extracLcLL1MuonParticlegRcOl1extracLcLL1MuonParticlegRsPgRsPgR(void *p) {
      return  p ? ::new((::ROOT::Internal::TOperatorNewHelper*)p) ::edm::reftobase::Holder<reco::Candidate,edm::Ref<vector<l1extra::L1MuonParticle>,l1extra::L1MuonParticle,edm::refhelper::FindUsingAdvance<vector<l1extra::L1MuonParticle>,l1extra::L1MuonParticle> > > : new ::edm::reftobase::Holder<reco::Candidate,edm::Ref<vector<l1extra::L1MuonParticle>,l1extra::L1MuonParticle,edm::refhelper::FindUsingAdvance<vector<l1extra::L1MuonParticle>,l1extra::L1MuonParticle> > >;
   }
   static void *newArray_edmcLcLreftobasecLcLHolderlErecocLcLCandidatecOedmcLcLReflEvectorlEl1extracLcLL1MuonParticlegRcOl1extracLcLL1MuonParticlecOedmcLcLrefhelpercLcLFindUsingAdvancelEvectorlEl1extracLcLL1MuonParticlegRcOl1extracLcLL1MuonParticlegRsPgRsPgR(Long_t nElements, void *p) {
      return p ? ::new((::ROOT::Internal::TOperatorNewHelper*)p) ::edm::reftobase::Holder<reco::Candidate,edm::Ref<vector<l1extra::L1MuonParticle>,l1extra::L1MuonParticle,edm::refhelper::FindUsingAdvance<vector<l1extra::L1MuonParticle>,l1extra::L1MuonParticle> > >[nElements] : new ::edm::reftobase::Holder<reco::Candidate,edm::Ref<vector<l1extra::L1MuonParticle>,l1extra::L1MuonParticle,edm::refhelper::FindUsingAdvance<vector<l1extra::L1MuonParticle>,l1extra::L1MuonParticle> > >[nElements];
   }
   // Wrapper around operator delete
   static void delete_edmcLcLreftobasecLcLHolderlErecocLcLCandidatecOedmcLcLReflEvectorlEl1extracLcLL1MuonParticlegRcOl1extracLcLL1MuonParticlecOedmcLcLrefhelpercLcLFindUsingAdvancelEvectorlEl1extracLcLL1MuonParticlegRcOl1extracLcLL1MuonParticlegRsPgRsPgR(void *p) {
      delete ((::edm::reftobase::Holder<reco::Candidate,edm::Ref<vector<l1extra::L1MuonParticle>,l1extra::L1MuonParticle,edm::refhelper::FindUsingAdvance<vector<l1extra::L1MuonParticle>,l1extra::L1MuonParticle> > >*)p);
   }
   static void deleteArray_edmcLcLreftobasecLcLHolderlErecocLcLCandidatecOedmcLcLReflEvectorlEl1extracLcLL1MuonParticlegRcOl1extracLcLL1MuonParticlecOedmcLcLrefhelpercLcLFindUsingAdvancelEvectorlEl1extracLcLL1MuonParticlegRcOl1extracLcLL1MuonParticlegRsPgRsPgR(void *p) {
      delete [] ((::edm::reftobase::Holder<reco::Candidate,edm::Ref<vector<l1extra::L1MuonParticle>,l1extra::L1MuonParticle,edm::refhelper::FindUsingAdvance<vector<l1extra::L1MuonParticle>,l1extra::L1MuonParticle> > >*)p);
   }
   static void destruct_edmcLcLreftobasecLcLHolderlErecocLcLCandidatecOedmcLcLReflEvectorlEl1extracLcLL1MuonParticlegRcOl1extracLcLL1MuonParticlecOedmcLcLrefhelpercLcLFindUsingAdvancelEvectorlEl1extracLcLL1MuonParticlegRcOl1extracLcLL1MuonParticlegRsPgRsPgR(void *p) {
      typedef ::edm::reftobase::Holder<reco::Candidate,edm::Ref<vector<l1extra::L1MuonParticle>,l1extra::L1MuonParticle,edm::refhelper::FindUsingAdvance<vector<l1extra::L1MuonParticle>,l1extra::L1MuonParticle> > > current_t;
      ((current_t*)p)->~current_t();
   }
} // end of namespace ROOT for class ::edm::reftobase::Holder<reco::Candidate,edm::Ref<vector<l1extra::L1MuonParticle>,l1extra::L1MuonParticle,edm::refhelper::FindUsingAdvance<vector<l1extra::L1MuonParticle>,l1extra::L1MuonParticle> > >

namespace ROOT {
   // Wrappers around operator new
   static void *new_edmcLcLreftobasecLcLHolderlErecocLcLCandidatecOedmcLcLReflEvectorlEl1extracLcLL1JetParticlegRcOl1extracLcLL1JetParticlecOedmcLcLrefhelpercLcLFindUsingAdvancelEvectorlEl1extracLcLL1JetParticlegRcOl1extracLcLL1JetParticlegRsPgRsPgR(void *p) {
      return  p ? ::new((::ROOT::Internal::TOperatorNewHelper*)p) ::edm::reftobase::Holder<reco::Candidate,edm::Ref<vector<l1extra::L1JetParticle>,l1extra::L1JetParticle,edm::refhelper::FindUsingAdvance<vector<l1extra::L1JetParticle>,l1extra::L1JetParticle> > > : new ::edm::reftobase::Holder<reco::Candidate,edm::Ref<vector<l1extra::L1JetParticle>,l1extra::L1JetParticle,edm::refhelper::FindUsingAdvance<vector<l1extra::L1JetParticle>,l1extra::L1JetParticle> > >;
   }
   static void *newArray_edmcLcLreftobasecLcLHolderlErecocLcLCandidatecOedmcLcLReflEvectorlEl1extracLcLL1JetParticlegRcOl1extracLcLL1JetParticlecOedmcLcLrefhelpercLcLFindUsingAdvancelEvectorlEl1extracLcLL1JetParticlegRcOl1extracLcLL1JetParticlegRsPgRsPgR(Long_t nElements, void *p) {
      return p ? ::new((::ROOT::Internal::TOperatorNewHelper*)p) ::edm::reftobase::Holder<reco::Candidate,edm::Ref<vector<l1extra::L1JetParticle>,l1extra::L1JetParticle,edm::refhelper::FindUsingAdvance<vector<l1extra::L1JetParticle>,l1extra::L1JetParticle> > >[nElements] : new ::edm::reftobase::Holder<reco::Candidate,edm::Ref<vector<l1extra::L1JetParticle>,l1extra::L1JetParticle,edm::refhelper::FindUsingAdvance<vector<l1extra::L1JetParticle>,l1extra::L1JetParticle> > >[nElements];
   }
   // Wrapper around operator delete
   static void delete_edmcLcLreftobasecLcLHolderlErecocLcLCandidatecOedmcLcLReflEvectorlEl1extracLcLL1JetParticlegRcOl1extracLcLL1JetParticlecOedmcLcLrefhelpercLcLFindUsingAdvancelEvectorlEl1extracLcLL1JetParticlegRcOl1extracLcLL1JetParticlegRsPgRsPgR(void *p) {
      delete ((::edm::reftobase::Holder<reco::Candidate,edm::Ref<vector<l1extra::L1JetParticle>,l1extra::L1JetParticle,edm::refhelper::FindUsingAdvance<vector<l1extra::L1JetParticle>,l1extra::L1JetParticle> > >*)p);
   }
   static void deleteArray_edmcLcLreftobasecLcLHolderlErecocLcLCandidatecOedmcLcLReflEvectorlEl1extracLcLL1JetParticlegRcOl1extracLcLL1JetParticlecOedmcLcLrefhelpercLcLFindUsingAdvancelEvectorlEl1extracLcLL1JetParticlegRcOl1extracLcLL1JetParticlegRsPgRsPgR(void *p) {
      delete [] ((::edm::reftobase::Holder<reco::Candidate,edm::Ref<vector<l1extra::L1JetParticle>,l1extra::L1JetParticle,edm::refhelper::FindUsingAdvance<vector<l1extra::L1JetParticle>,l1extra::L1JetParticle> > >*)p);
   }
   static void destruct_edmcLcLreftobasecLcLHolderlErecocLcLCandidatecOedmcLcLReflEvectorlEl1extracLcLL1JetParticlegRcOl1extracLcLL1JetParticlecOedmcLcLrefhelpercLcLFindUsingAdvancelEvectorlEl1extracLcLL1JetParticlegRcOl1extracLcLL1JetParticlegRsPgRsPgR(void *p) {
      typedef ::edm::reftobase::Holder<reco::Candidate,edm::Ref<vector<l1extra::L1JetParticle>,l1extra::L1JetParticle,edm::refhelper::FindUsingAdvance<vector<l1extra::L1JetParticle>,l1extra::L1JetParticle> > > current_t;
      ((current_t*)p)->~current_t();
   }
} // end of namespace ROOT for class ::edm::reftobase::Holder<reco::Candidate,edm::Ref<vector<l1extra::L1JetParticle>,l1extra::L1JetParticle,edm::refhelper::FindUsingAdvance<vector<l1extra::L1JetParticle>,l1extra::L1JetParticle> > >

namespace ROOT {
   // Wrappers around operator new
   static void *new_edmcLcLreftobasecLcLHolderlErecocLcLCandidatecOedmcLcLReflEvectorlEl1extracLcLL1EtMissParticlegRcOl1extracLcLL1EtMissParticlecOedmcLcLrefhelpercLcLFindUsingAdvancelEvectorlEl1extracLcLL1EtMissParticlegRcOl1extracLcLL1EtMissParticlegRsPgRsPgR(void *p) {
      return  p ? ::new((::ROOT::Internal::TOperatorNewHelper*)p) ::edm::reftobase::Holder<reco::Candidate,edm::Ref<vector<l1extra::L1EtMissParticle>,l1extra::L1EtMissParticle,edm::refhelper::FindUsingAdvance<vector<l1extra::L1EtMissParticle>,l1extra::L1EtMissParticle> > > : new ::edm::reftobase::Holder<reco::Candidate,edm::Ref<vector<l1extra::L1EtMissParticle>,l1extra::L1EtMissParticle,edm::refhelper::FindUsingAdvance<vector<l1extra::L1EtMissParticle>,l1extra::L1EtMissParticle> > >;
   }
   static void *newArray_edmcLcLreftobasecLcLHolderlErecocLcLCandidatecOedmcLcLReflEvectorlEl1extracLcLL1EtMissParticlegRcOl1extracLcLL1EtMissParticlecOedmcLcLrefhelpercLcLFindUsingAdvancelEvectorlEl1extracLcLL1EtMissParticlegRcOl1extracLcLL1EtMissParticlegRsPgRsPgR(Long_t nElements, void *p) {
      return p ? ::new((::ROOT::Internal::TOperatorNewHelper*)p) ::edm::reftobase::Holder<reco::Candidate,edm::Ref<vector<l1extra::L1EtMissParticle>,l1extra::L1EtMissParticle,edm::refhelper::FindUsingAdvance<vector<l1extra::L1EtMissParticle>,l1extra::L1EtMissParticle> > >[nElements] : new ::edm::reftobase::Holder<reco::Candidate,edm::Ref<vector<l1extra::L1EtMissParticle>,l1extra::L1EtMissParticle,edm::refhelper::FindUsingAdvance<vector<l1extra::L1EtMissParticle>,l1extra::L1EtMissParticle> > >[nElements];
   }
   // Wrapper around operator delete
   static void delete_edmcLcLreftobasecLcLHolderlErecocLcLCandidatecOedmcLcLReflEvectorlEl1extracLcLL1EtMissParticlegRcOl1extracLcLL1EtMissParticlecOedmcLcLrefhelpercLcLFindUsingAdvancelEvectorlEl1extracLcLL1EtMissParticlegRcOl1extracLcLL1EtMissParticlegRsPgRsPgR(void *p) {
      delete ((::edm::reftobase::Holder<reco::Candidate,edm::Ref<vector<l1extra::L1EtMissParticle>,l1extra::L1EtMissParticle,edm::refhelper::FindUsingAdvance<vector<l1extra::L1EtMissParticle>,l1extra::L1EtMissParticle> > >*)p);
   }
   static void deleteArray_edmcLcLreftobasecLcLHolderlErecocLcLCandidatecOedmcLcLReflEvectorlEl1extracLcLL1EtMissParticlegRcOl1extracLcLL1EtMissParticlecOedmcLcLrefhelpercLcLFindUsingAdvancelEvectorlEl1extracLcLL1EtMissParticlegRcOl1extracLcLL1EtMissParticlegRsPgRsPgR(void *p) {
      delete [] ((::edm::reftobase::Holder<reco::Candidate,edm::Ref<vector<l1extra::L1EtMissParticle>,l1extra::L1EtMissParticle,edm::refhelper::FindUsingAdvance<vector<l1extra::L1EtMissParticle>,l1extra::L1EtMissParticle> > >*)p);
   }
   static void destruct_edmcLcLreftobasecLcLHolderlErecocLcLCandidatecOedmcLcLReflEvectorlEl1extracLcLL1EtMissParticlegRcOl1extracLcLL1EtMissParticlecOedmcLcLrefhelpercLcLFindUsingAdvancelEvectorlEl1extracLcLL1EtMissParticlegRcOl1extracLcLL1EtMissParticlegRsPgRsPgR(void *p) {
      typedef ::edm::reftobase::Holder<reco::Candidate,edm::Ref<vector<l1extra::L1EtMissParticle>,l1extra::L1EtMissParticle,edm::refhelper::FindUsingAdvance<vector<l1extra::L1EtMissParticle>,l1extra::L1EtMissParticle> > > current_t;
      ((current_t*)p)->~current_t();
   }
} // end of namespace ROOT for class ::edm::reftobase::Holder<reco::Candidate,edm::Ref<vector<l1extra::L1EtMissParticle>,l1extra::L1EtMissParticle,edm::refhelper::FindUsingAdvance<vector<l1extra::L1EtMissParticle>,l1extra::L1EtMissParticle> > >

namespace ROOT {
   // Wrappers around operator new
   static void *new_edmcLcLreftobasecLcLHolderlErecocLcLCandidatecOedmcLcLRefProdlEl1extracLcLL1EtMissParticlegRsPgR(void *p) {
      return  p ? ::new((::ROOT::Internal::TOperatorNewHelper*)p) ::edm::reftobase::Holder<reco::Candidate,edm::RefProd<l1extra::L1EtMissParticle> > : new ::edm::reftobase::Holder<reco::Candidate,edm::RefProd<l1extra::L1EtMissParticle> >;
   }
   static void *newArray_edmcLcLreftobasecLcLHolderlErecocLcLCandidatecOedmcLcLRefProdlEl1extracLcLL1EtMissParticlegRsPgR(Long_t nElements, void *p) {
      return p ? ::new((::ROOT::Internal::TOperatorNewHelper*)p) ::edm::reftobase::Holder<reco::Candidate,edm::RefProd<l1extra::L1EtMissParticle> >[nElements] : new ::edm::reftobase::Holder<reco::Candidate,edm::RefProd<l1extra::L1EtMissParticle> >[nElements];
   }
   // Wrapper around operator delete
   static void delete_edmcLcLreftobasecLcLHolderlErecocLcLCandidatecOedmcLcLRefProdlEl1extracLcLL1EtMissParticlegRsPgR(void *p) {
      delete ((::edm::reftobase::Holder<reco::Candidate,edm::RefProd<l1extra::L1EtMissParticle> >*)p);
   }
   static void deleteArray_edmcLcLreftobasecLcLHolderlErecocLcLCandidatecOedmcLcLRefProdlEl1extracLcLL1EtMissParticlegRsPgR(void *p) {
      delete [] ((::edm::reftobase::Holder<reco::Candidate,edm::RefProd<l1extra::L1EtMissParticle> >*)p);
   }
   static void destruct_edmcLcLreftobasecLcLHolderlErecocLcLCandidatecOedmcLcLRefProdlEl1extracLcLL1EtMissParticlegRsPgR(void *p) {
      typedef ::edm::reftobase::Holder<reco::Candidate,edm::RefProd<l1extra::L1EtMissParticle> > current_t;
      ((current_t*)p)->~current_t();
   }
} // end of namespace ROOT for class ::edm::reftobase::Holder<reco::Candidate,edm::RefProd<l1extra::L1EtMissParticle> >

namespace ROOT {
   // Wrappers around operator new
   static void *new_GltDEDigi(void *p) {
      return  p ? new(p) ::GltDEDigi : new ::GltDEDigi;
   }
   static void *newArray_GltDEDigi(Long_t nElements, void *p) {
      return p ? new(p) ::GltDEDigi[nElements] : new ::GltDEDigi[nElements];
   }
   // Wrapper around operator delete
   static void delete_GltDEDigi(void *p) {
      delete ((::GltDEDigi*)p);
   }
   static void deleteArray_GltDEDigi(void *p) {
      delete [] ((::GltDEDigi*)p);
   }
   static void destruct_GltDEDigi(void *p) {
      typedef ::GltDEDigi current_t;
      ((current_t*)p)->~current_t();
   }
} // end of namespace ROOT for class ::GltDEDigi

namespace ROOT {
   // Wrappers around operator new
   static void *new_L1MonitorDigi(void *p) {
      return  p ? new(p) ::L1MonitorDigi : new ::L1MonitorDigi;
   }
   static void *newArray_L1MonitorDigi(Long_t nElements, void *p) {
      return p ? new(p) ::L1MonitorDigi[nElements] : new ::L1MonitorDigi[nElements];
   }
   // Wrapper around operator delete
   static void delete_L1MonitorDigi(void *p) {
      delete ((::L1MonitorDigi*)p);
   }
   static void deleteArray_L1MonitorDigi(void *p) {
      delete [] ((::L1MonitorDigi*)p);
   }
   static void destruct_L1MonitorDigi(void *p) {
      typedef ::L1MonitorDigi current_t;
      ((current_t*)p)->~current_t();
   }
} // end of namespace ROOT for class ::L1MonitorDigi

namespace ROOT {
   // Wrappers around operator new
   static void *new_L1DataEmulDigi(void *p) {
      return  p ? new(p) ::L1DataEmulDigi : new ::L1DataEmulDigi;
   }
   static void *newArray_L1DataEmulDigi(Long_t nElements, void *p) {
      return p ? new(p) ::L1DataEmulDigi[nElements] : new ::L1DataEmulDigi[nElements];
   }
   // Wrapper around operator delete
   static void delete_L1DataEmulDigi(void *p) {
      delete ((::L1DataEmulDigi*)p);
   }
   static void deleteArray_L1DataEmulDigi(void *p) {
      delete [] ((::L1DataEmulDigi*)p);
   }
   static void destruct_L1DataEmulDigi(void *p) {
      typedef ::L1DataEmulDigi current_t;
      ((current_t*)p)->~current_t();
   }
} // end of namespace ROOT for class ::L1DataEmulDigi

namespace ROOT {
   // Wrappers around operator new
   static void *new_L1DataEmulRecord(void *p) {
      return  p ? new(p) ::L1DataEmulRecord : new ::L1DataEmulRecord;
   }
   static void *newArray_L1DataEmulRecord(Long_t nElements, void *p) {
      return p ? new(p) ::L1DataEmulRecord[nElements] : new ::L1DataEmulRecord[nElements];
   }
   // Wrapper around operator delete
   static void delete_L1DataEmulRecord(void *p) {
      delete ((::L1DataEmulRecord*)p);
   }
   static void deleteArray_L1DataEmulRecord(void *p) {
      delete [] ((::L1DataEmulRecord*)p);
   }
   static void destruct_L1DataEmulRecord(void *p) {
      typedef ::L1DataEmulRecord current_t;
      ((current_t*)p)->~current_t();
   }
} // end of namespace ROOT for class ::L1DataEmulRecord

namespace ROOT {
   // Wrappers around operator new
   static void *new_edmcLcLWrapperlEL1DataEmulRecordgR(void *p) {
      return  p ? ::new((::ROOT::Internal::TOperatorNewHelper*)p) ::edm::Wrapper<L1DataEmulRecord> : new ::edm::Wrapper<L1DataEmulRecord>;
   }
   static void *newArray_edmcLcLWrapperlEL1DataEmulRecordgR(Long_t nElements, void *p) {
      return p ? ::new((::ROOT::Internal::TOperatorNewHelper*)p) ::edm::Wrapper<L1DataEmulRecord>[nElements] : new ::edm::Wrapper<L1DataEmulRecord>[nElements];
   }
   // Wrapper around operator delete
   static void delete_edmcLcLWrapperlEL1DataEmulRecordgR(void *p) {
      delete ((::edm::Wrapper<L1DataEmulRecord>*)p);
   }
   static void deleteArray_edmcLcLWrapperlEL1DataEmulRecordgR(void *p) {
      delete [] ((::edm::Wrapper<L1DataEmulRecord>*)p);
   }
   static void destruct_edmcLcLWrapperlEL1DataEmulRecordgR(void *p) {
      typedef ::edm::Wrapper<L1DataEmulRecord> current_t;
      ((current_t*)p)->~current_t();
   }
} // end of namespace ROOT for class ::edm::Wrapper<L1DataEmulRecord>

namespace ROOT {
   // Wrappers around operator new
   static void *new_L1TriggerError(void *p) {
      return  p ? new(p) ::L1TriggerError : new ::L1TriggerError;
   }
   static void *newArray_L1TriggerError(Long_t nElements, void *p) {
      return p ? new(p) ::L1TriggerError[nElements] : new ::L1TriggerError[nElements];
   }
   // Wrapper around operator delete
   static void delete_L1TriggerError(void *p) {
      delete ((::L1TriggerError*)p);
   }
   static void deleteArray_L1TriggerError(void *p) {
      delete [] ((::L1TriggerError*)p);
   }
   static void destruct_L1TriggerError(void *p) {
      typedef ::L1TriggerError current_t;
      ((current_t*)p)->~current_t();
   }
} // end of namespace ROOT for class ::L1TriggerError

namespace ROOT {
   // Wrappers around operator new
   static void *new_edmcLcLWrapperlEvectorlEL1TriggerErrorgRsPgR(void *p) {
      return  p ? ::new((::ROOT::Internal::TOperatorNewHelper*)p) ::edm::Wrapper<vector<L1TriggerError> > : new ::edm::Wrapper<vector<L1TriggerError> >;
   }
   static void *newArray_edmcLcLWrapperlEvectorlEL1TriggerErrorgRsPgR(Long_t nElements, void *p) {
      return p ? ::new((::ROOT::Internal::TOperatorNewHelper*)p) ::edm::Wrapper<vector<L1TriggerError> >[nElements] : new ::edm::Wrapper<vector<L1TriggerError> >[nElements];
   }
   // Wrapper around operator delete
   static void delete_edmcLcLWrapperlEvectorlEL1TriggerErrorgRsPgR(void *p) {
      delete ((::edm::Wrapper<vector<L1TriggerError> >*)p);
   }
   static void deleteArray_edmcLcLWrapperlEvectorlEL1TriggerErrorgRsPgR(void *p) {
      delete [] ((::edm::Wrapper<vector<L1TriggerError> >*)p);
   }
   static void destruct_edmcLcLWrapperlEvectorlEL1TriggerErrorgRsPgR(void *p) {
      typedef ::edm::Wrapper<vector<L1TriggerError> > current_t;
      ((current_t*)p)->~current_t();
   }
} // end of namespace ROOT for class ::edm::Wrapper<vector<L1TriggerError> >

namespace ROOT {
   // Wrappers around operator new
   static void *new_l1tcLcLL1DataEmulResult(void *p) {
      return  p ? ::new((::ROOT::Internal::TOperatorNewHelper*)p) ::l1t::L1DataEmulResult : new ::l1t::L1DataEmulResult;
   }
   static void *newArray_l1tcLcLL1DataEmulResult(Long_t nElements, void *p) {
      return p ? ::new((::ROOT::Internal::TOperatorNewHelper*)p) ::l1t::L1DataEmulResult[nElements] : new ::l1t::L1DataEmulResult[nElements];
   }
   // Wrapper around operator delete
   static void delete_l1tcLcLL1DataEmulResult(void *p) {
      delete ((::l1t::L1DataEmulResult*)p);
   }
   static void deleteArray_l1tcLcLL1DataEmulResult(void *p) {
      delete [] ((::l1t::L1DataEmulResult*)p);
   }
   static void destruct_l1tcLcLL1DataEmulResult(void *p) {
      typedef ::l1t::L1DataEmulResult current_t;
      ((current_t*)p)->~current_t();
   }
} // end of namespace ROOT for class ::l1t::L1DataEmulResult

namespace ROOT {
   // Wrappers around operator new
   static void *new_BXVectorlEl1tcLcLL1DataEmulResultgR(void *p) {
      return  p ? new(p) ::BXVector<l1t::L1DataEmulResult> : new ::BXVector<l1t::L1DataEmulResult>;
   }
   static void *newArray_BXVectorlEl1tcLcLL1DataEmulResultgR(Long_t nElements, void *p) {
      return p ? new(p) ::BXVector<l1t::L1DataEmulResult>[nElements] : new ::BXVector<l1t::L1DataEmulResult>[nElements];
   }
   // Wrapper around operator delete
   static void delete_BXVectorlEl1tcLcLL1DataEmulResultgR(void *p) {
      delete ((::BXVector<l1t::L1DataEmulResult>*)p);
   }
   static void deleteArray_BXVectorlEl1tcLcLL1DataEmulResultgR(void *p) {
      delete [] ((::BXVector<l1t::L1DataEmulResult>*)p);
   }
   static void destruct_BXVectorlEl1tcLcLL1DataEmulResultgR(void *p) {
      typedef ::BXVector<l1t::L1DataEmulResult> current_t;
      ((current_t*)p)->~current_t();
   }
} // end of namespace ROOT for class ::BXVector<l1t::L1DataEmulResult>

namespace ROOT {
   // Wrappers around operator new
   static void *new_edmcLcLWrapperlEBXVectorlEl1tcLcLL1DataEmulResultgRsPgR(void *p) {
      return  p ? ::new((::ROOT::Internal::TOperatorNewHelper*)p) ::edm::Wrapper<BXVector<l1t::L1DataEmulResult> > : new ::edm::Wrapper<BXVector<l1t::L1DataEmulResult> >;
   }
   static void *newArray_edmcLcLWrapperlEBXVectorlEl1tcLcLL1DataEmulResultgRsPgR(Long_t nElements, void *p) {
      return p ? ::new((::ROOT::Internal::TOperatorNewHelper*)p) ::edm::Wrapper<BXVector<l1t::L1DataEmulResult> >[nElements] : new ::edm::Wrapper<BXVector<l1t::L1DataEmulResult> >[nElements];
   }
   // Wrapper around operator delete
   static void delete_edmcLcLWrapperlEBXVectorlEl1tcLcLL1DataEmulResultgRsPgR(void *p) {
      delete ((::edm::Wrapper<BXVector<l1t::L1DataEmulResult> >*)p);
   }
   static void deleteArray_edmcLcLWrapperlEBXVectorlEl1tcLcLL1DataEmulResultgRsPgR(void *p) {
      delete [] ((::edm::Wrapper<BXVector<l1t::L1DataEmulResult> >*)p);
   }
   static void destruct_edmcLcLWrapperlEBXVectorlEl1tcLcLL1DataEmulResultgRsPgR(void *p) {
      typedef ::edm::Wrapper<BXVector<l1t::L1DataEmulResult> > current_t;
      ((current_t*)p)->~current_t();
   }
} // end of namespace ROOT for class ::edm::Wrapper<BXVector<l1t::L1DataEmulResult> >

namespace ROOT {
   static TClass *vectorlEl1extracLcLL1ParticleMapgR_Dictionary();
   static void vectorlEl1extracLcLL1ParticleMapgR_TClassManip(TClass*);
   static void *new_vectorlEl1extracLcLL1ParticleMapgR(void *p = 0);
   static void *newArray_vectorlEl1extracLcLL1ParticleMapgR(Long_t size, void *p);
   static void delete_vectorlEl1extracLcLL1ParticleMapgR(void *p);
   static void deleteArray_vectorlEl1extracLcLL1ParticleMapgR(void *p);
   static void destruct_vectorlEl1extracLcLL1ParticleMapgR(void *p);

   // Function generating the singleton type initializer
   static TGenericClassInfo *GenerateInitInstanceLocal(const vector<l1extra::L1ParticleMap>*)
   {
      vector<l1extra::L1ParticleMap> *ptr = 0;
      static ::TVirtualIsAProxy* isa_proxy = new ::TIsAProxy(typeid(vector<l1extra::L1ParticleMap>));
      static ::ROOT::TGenericClassInfo 
         instance("vector<l1extra::L1ParticleMap>", -2, "vector", 214,
                  typeid(vector<l1extra::L1ParticleMap>), ::ROOT::Internal::DefineBehavior(ptr, ptr),
                  &vectorlEl1extracLcLL1ParticleMapgR_Dictionary, isa_proxy, 4,
                  sizeof(vector<l1extra::L1ParticleMap>) );
      instance.SetNew(&new_vectorlEl1extracLcLL1ParticleMapgR);
      instance.SetNewArray(&newArray_vectorlEl1extracLcLL1ParticleMapgR);
      instance.SetDelete(&delete_vectorlEl1extracLcLL1ParticleMapgR);
      instance.SetDeleteArray(&deleteArray_vectorlEl1extracLcLL1ParticleMapgR);
      instance.SetDestructor(&destruct_vectorlEl1extracLcLL1ParticleMapgR);
      instance.AdoptCollectionProxyInfo(TCollectionProxyInfo::Generate(TCollectionProxyInfo::Pushback< vector<l1extra::L1ParticleMap> >()));
      return &instance;
   }
   // Static variable to force the class initialization
   static ::ROOT::TGenericClassInfo *_R__UNIQUE_(Init) = GenerateInitInstanceLocal((const vector<l1extra::L1ParticleMap>*)0x0); R__UseDummy(_R__UNIQUE_(Init));

   // Dictionary for non-ClassDef classes
   static TClass *vectorlEl1extracLcLL1ParticleMapgR_Dictionary() {
      TClass* theClass =::ROOT::GenerateInitInstanceLocal((const vector<l1extra::L1ParticleMap>*)0x0)->GetClass();
      vectorlEl1extracLcLL1ParticleMapgR_TClassManip(theClass);
   return theClass;
   }

   static void vectorlEl1extracLcLL1ParticleMapgR_TClassManip(TClass* ){
   }

} // end of namespace ROOT

namespace ROOT {
   // Wrappers around operator new
   static void *new_vectorlEl1extracLcLL1ParticleMapgR(void *p) {
      return  p ? ::new((::ROOT::Internal::TOperatorNewHelper*)p) vector<l1extra::L1ParticleMap> : new vector<l1extra::L1ParticleMap>;
   }
   static void *newArray_vectorlEl1extracLcLL1ParticleMapgR(Long_t nElements, void *p) {
      return p ? ::new((::ROOT::Internal::TOperatorNewHelper*)p) vector<l1extra::L1ParticleMap>[nElements] : new vector<l1extra::L1ParticleMap>[nElements];
   }
   // Wrapper around operator delete
   static void delete_vectorlEl1extracLcLL1ParticleMapgR(void *p) {
      delete ((vector<l1extra::L1ParticleMap>*)p);
   }
   static void deleteArray_vectorlEl1extracLcLL1ParticleMapgR(void *p) {
      delete [] ((vector<l1extra::L1ParticleMap>*)p);
   }
   static void destruct_vectorlEl1extracLcLL1ParticleMapgR(void *p) {
      typedef vector<l1extra::L1ParticleMap> current_t;
      ((current_t*)p)->~current_t();
   }
} // end of namespace ROOT for class vector<l1extra::L1ParticleMap>

namespace ROOT {
   static TClass *vectorlEl1extracLcLL1ParticleMapcLcLL1ObjectTypegR_Dictionary();
   static void vectorlEl1extracLcLL1ParticleMapcLcLL1ObjectTypegR_TClassManip(TClass*);
   static void *new_vectorlEl1extracLcLL1ParticleMapcLcLL1ObjectTypegR(void *p = 0);
   static void *newArray_vectorlEl1extracLcLL1ParticleMapcLcLL1ObjectTypegR(Long_t size, void *p);
   static void delete_vectorlEl1extracLcLL1ParticleMapcLcLL1ObjectTypegR(void *p);
   static void deleteArray_vectorlEl1extracLcLL1ParticleMapcLcLL1ObjectTypegR(void *p);
   static void destruct_vectorlEl1extracLcLL1ParticleMapcLcLL1ObjectTypegR(void *p);

   // Function generating the singleton type initializer
   static TGenericClassInfo *GenerateInitInstanceLocal(const vector<l1extra::L1ParticleMap::L1ObjectType>*)
   {
      vector<l1extra::L1ParticleMap::L1ObjectType> *ptr = 0;
      static ::TVirtualIsAProxy* isa_proxy = new ::TIsAProxy(typeid(vector<l1extra::L1ParticleMap::L1ObjectType>));
      static ::ROOT::TGenericClassInfo 
         instance("vector<l1extra::L1ParticleMap::L1ObjectType>", -2, "vector", 214,
                  typeid(vector<l1extra::L1ParticleMap::L1ObjectType>), ::ROOT::Internal::DefineBehavior(ptr, ptr),
                  &vectorlEl1extracLcLL1ParticleMapcLcLL1ObjectTypegR_Dictionary, isa_proxy, 4,
                  sizeof(vector<l1extra::L1ParticleMap::L1ObjectType>) );
      instance.SetNew(&new_vectorlEl1extracLcLL1ParticleMapcLcLL1ObjectTypegR);
      instance.SetNewArray(&newArray_vectorlEl1extracLcLL1ParticleMapcLcLL1ObjectTypegR);
      instance.SetDelete(&delete_vectorlEl1extracLcLL1ParticleMapcLcLL1ObjectTypegR);
      instance.SetDeleteArray(&deleteArray_vectorlEl1extracLcLL1ParticleMapcLcLL1ObjectTypegR);
      instance.SetDestructor(&destruct_vectorlEl1extracLcLL1ParticleMapcLcLL1ObjectTypegR);
      instance.AdoptCollectionProxyInfo(TCollectionProxyInfo::Generate(TCollectionProxyInfo::Pushback< vector<l1extra::L1ParticleMap::L1ObjectType> >()));
      return &instance;
   }
   // Static variable to force the class initialization
   static ::ROOT::TGenericClassInfo *_R__UNIQUE_(Init) = GenerateInitInstanceLocal((const vector<l1extra::L1ParticleMap::L1ObjectType>*)0x0); R__UseDummy(_R__UNIQUE_(Init));

   // Dictionary for non-ClassDef classes
   static TClass *vectorlEl1extracLcLL1ParticleMapcLcLL1ObjectTypegR_Dictionary() {
      TClass* theClass =::ROOT::GenerateInitInstanceLocal((const vector<l1extra::L1ParticleMap::L1ObjectType>*)0x0)->GetClass();
      vectorlEl1extracLcLL1ParticleMapcLcLL1ObjectTypegR_TClassManip(theClass);
   return theClass;
   }

   static void vectorlEl1extracLcLL1ParticleMapcLcLL1ObjectTypegR_TClassManip(TClass* ){
   }

} // end of namespace ROOT

namespace ROOT {
   // Wrappers around operator new
   static void *new_vectorlEl1extracLcLL1ParticleMapcLcLL1ObjectTypegR(void *p) {
      return  p ? ::new((::ROOT::Internal::TOperatorNewHelper*)p) vector<l1extra::L1ParticleMap::L1ObjectType> : new vector<l1extra::L1ParticleMap::L1ObjectType>;
   }
   static void *newArray_vectorlEl1extracLcLL1ParticleMapcLcLL1ObjectTypegR(Long_t nElements, void *p) {
      return p ? ::new((::ROOT::Internal::TOperatorNewHelper*)p) vector<l1extra::L1ParticleMap::L1ObjectType>[nElements] : new vector<l1extra::L1ParticleMap::L1ObjectType>[nElements];
   }
   // Wrapper around operator delete
   static void delete_vectorlEl1extracLcLL1ParticleMapcLcLL1ObjectTypegR(void *p) {
      delete ((vector<l1extra::L1ParticleMap::L1ObjectType>*)p);
   }
   static void deleteArray_vectorlEl1extracLcLL1ParticleMapcLcLL1ObjectTypegR(void *p) {
      delete [] ((vector<l1extra::L1ParticleMap::L1ObjectType>*)p);
   }
   static void destruct_vectorlEl1extracLcLL1ParticleMapcLcLL1ObjectTypegR(void *p) {
      typedef vector<l1extra::L1ParticleMap::L1ObjectType> current_t;
      ((current_t*)p)->~current_t();
   }
} // end of namespace ROOT for class vector<l1extra::L1ParticleMap::L1ObjectType>

namespace ROOT {
   static TClass *vectorlEl1extracLcLL1MuonParticlegR_Dictionary();
   static void vectorlEl1extracLcLL1MuonParticlegR_TClassManip(TClass*);
   static void *new_vectorlEl1extracLcLL1MuonParticlegR(void *p = 0);
   static void *newArray_vectorlEl1extracLcLL1MuonParticlegR(Long_t size, void *p);
   static void delete_vectorlEl1extracLcLL1MuonParticlegR(void *p);
   static void deleteArray_vectorlEl1extracLcLL1MuonParticlegR(void *p);
   static void destruct_vectorlEl1extracLcLL1MuonParticlegR(void *p);

   // Function generating the singleton type initializer
   static TGenericClassInfo *GenerateInitInstanceLocal(const vector<l1extra::L1MuonParticle>*)
   {
      vector<l1extra::L1MuonParticle> *ptr = 0;
      static ::TVirtualIsAProxy* isa_proxy = new ::TIsAProxy(typeid(vector<l1extra::L1MuonParticle>));
      static ::ROOT::TGenericClassInfo 
         instance("vector<l1extra::L1MuonParticle>", -2, "vector", 214,
                  typeid(vector<l1extra::L1MuonParticle>), ::ROOT::Internal::DefineBehavior(ptr, ptr),
                  &vectorlEl1extracLcLL1MuonParticlegR_Dictionary, isa_proxy, 4,
                  sizeof(vector<l1extra::L1MuonParticle>) );
      instance.SetNew(&new_vectorlEl1extracLcLL1MuonParticlegR);
      instance.SetNewArray(&newArray_vectorlEl1extracLcLL1MuonParticlegR);
      instance.SetDelete(&delete_vectorlEl1extracLcLL1MuonParticlegR);
      instance.SetDeleteArray(&deleteArray_vectorlEl1extracLcLL1MuonParticlegR);
      instance.SetDestructor(&destruct_vectorlEl1extracLcLL1MuonParticlegR);
      instance.AdoptCollectionProxyInfo(TCollectionProxyInfo::Generate(TCollectionProxyInfo::Pushback< vector<l1extra::L1MuonParticle> >()));
      return &instance;
   }
   // Static variable to force the class initialization
   static ::ROOT::TGenericClassInfo *_R__UNIQUE_(Init) = GenerateInitInstanceLocal((const vector<l1extra::L1MuonParticle>*)0x0); R__UseDummy(_R__UNIQUE_(Init));

   // Dictionary for non-ClassDef classes
   static TClass *vectorlEl1extracLcLL1MuonParticlegR_Dictionary() {
      TClass* theClass =::ROOT::GenerateInitInstanceLocal((const vector<l1extra::L1MuonParticle>*)0x0)->GetClass();
      vectorlEl1extracLcLL1MuonParticlegR_TClassManip(theClass);
   return theClass;
   }

   static void vectorlEl1extracLcLL1MuonParticlegR_TClassManip(TClass* ){
   }

} // end of namespace ROOT

namespace ROOT {
   // Wrappers around operator new
   static void *new_vectorlEl1extracLcLL1MuonParticlegR(void *p) {
      return  p ? ::new((::ROOT::Internal::TOperatorNewHelper*)p) vector<l1extra::L1MuonParticle> : new vector<l1extra::L1MuonParticle>;
   }
   static void *newArray_vectorlEl1extracLcLL1MuonParticlegR(Long_t nElements, void *p) {
      return p ? ::new((::ROOT::Internal::TOperatorNewHelper*)p) vector<l1extra::L1MuonParticle>[nElements] : new vector<l1extra::L1MuonParticle>[nElements];
   }
   // Wrapper around operator delete
   static void delete_vectorlEl1extracLcLL1MuonParticlegR(void *p) {
      delete ((vector<l1extra::L1MuonParticle>*)p);
   }
   static void deleteArray_vectorlEl1extracLcLL1MuonParticlegR(void *p) {
      delete [] ((vector<l1extra::L1MuonParticle>*)p);
   }
   static void destruct_vectorlEl1extracLcLL1MuonParticlegR(void *p) {
      typedef vector<l1extra::L1MuonParticle> current_t;
      ((current_t*)p)->~current_t();
   }
} // end of namespace ROOT for class vector<l1extra::L1MuonParticle>

namespace ROOT {
   static TClass *vectorlEl1extracLcLL1JetParticlegR_Dictionary();
   static void vectorlEl1extracLcLL1JetParticlegR_TClassManip(TClass*);
   static void *new_vectorlEl1extracLcLL1JetParticlegR(void *p = 0);
   static void *newArray_vectorlEl1extracLcLL1JetParticlegR(Long_t size, void *p);
   static void delete_vectorlEl1extracLcLL1JetParticlegR(void *p);
   static void deleteArray_vectorlEl1extracLcLL1JetParticlegR(void *p);
   static void destruct_vectorlEl1extracLcLL1JetParticlegR(void *p);

   // Function generating the singleton type initializer
   static TGenericClassInfo *GenerateInitInstanceLocal(const vector<l1extra::L1JetParticle>*)
   {
      vector<l1extra::L1JetParticle> *ptr = 0;
      static ::TVirtualIsAProxy* isa_proxy = new ::TIsAProxy(typeid(vector<l1extra::L1JetParticle>));
      static ::ROOT::TGenericClassInfo 
         instance("vector<l1extra::L1JetParticle>", -2, "vector", 214,
                  typeid(vector<l1extra::L1JetParticle>), ::ROOT::Internal::DefineBehavior(ptr, ptr),
                  &vectorlEl1extracLcLL1JetParticlegR_Dictionary, isa_proxy, 4,
                  sizeof(vector<l1extra::L1JetParticle>) );
      instance.SetNew(&new_vectorlEl1extracLcLL1JetParticlegR);
      instance.SetNewArray(&newArray_vectorlEl1extracLcLL1JetParticlegR);
      instance.SetDelete(&delete_vectorlEl1extracLcLL1JetParticlegR);
      instance.SetDeleteArray(&deleteArray_vectorlEl1extracLcLL1JetParticlegR);
      instance.SetDestructor(&destruct_vectorlEl1extracLcLL1JetParticlegR);
      instance.AdoptCollectionProxyInfo(TCollectionProxyInfo::Generate(TCollectionProxyInfo::Pushback< vector<l1extra::L1JetParticle> >()));
      return &instance;
   }
   // Static variable to force the class initialization
   static ::ROOT::TGenericClassInfo *_R__UNIQUE_(Init) = GenerateInitInstanceLocal((const vector<l1extra::L1JetParticle>*)0x0); R__UseDummy(_R__UNIQUE_(Init));

   // Dictionary for non-ClassDef classes
   static TClass *vectorlEl1extracLcLL1JetParticlegR_Dictionary() {
      TClass* theClass =::ROOT::GenerateInitInstanceLocal((const vector<l1extra::L1JetParticle>*)0x0)->GetClass();
      vectorlEl1extracLcLL1JetParticlegR_TClassManip(theClass);
   return theClass;
   }

   static void vectorlEl1extracLcLL1JetParticlegR_TClassManip(TClass* ){
   }

} // end of namespace ROOT

namespace ROOT {
   // Wrappers around operator new
   static void *new_vectorlEl1extracLcLL1JetParticlegR(void *p) {
      return  p ? ::new((::ROOT::Internal::TOperatorNewHelper*)p) vector<l1extra::L1JetParticle> : new vector<l1extra::L1JetParticle>;
   }
   static void *newArray_vectorlEl1extracLcLL1JetParticlegR(Long_t nElements, void *p) {
      return p ? ::new((::ROOT::Internal::TOperatorNewHelper*)p) vector<l1extra::L1JetParticle>[nElements] : new vector<l1extra::L1JetParticle>[nElements];
   }
   // Wrapper around operator delete
   static void delete_vectorlEl1extracLcLL1JetParticlegR(void *p) {
      delete ((vector<l1extra::L1JetParticle>*)p);
   }
   static void deleteArray_vectorlEl1extracLcLL1JetParticlegR(void *p) {
      delete [] ((vector<l1extra::L1JetParticle>*)p);
   }
   static void destruct_vectorlEl1extracLcLL1JetParticlegR(void *p) {
      typedef vector<l1extra::L1JetParticle> current_t;
      ((current_t*)p)->~current_t();
   }
} // end of namespace ROOT for class vector<l1extra::L1JetParticle>

namespace ROOT {
   static TClass *vectorlEl1extracLcLL1HFRingsgR_Dictionary();
   static void vectorlEl1extracLcLL1HFRingsgR_TClassManip(TClass*);
   static void *new_vectorlEl1extracLcLL1HFRingsgR(void *p = 0);
   static void *newArray_vectorlEl1extracLcLL1HFRingsgR(Long_t size, void *p);
   static void delete_vectorlEl1extracLcLL1HFRingsgR(void *p);
   static void deleteArray_vectorlEl1extracLcLL1HFRingsgR(void *p);
   static void destruct_vectorlEl1extracLcLL1HFRingsgR(void *p);

   // Function generating the singleton type initializer
   static TGenericClassInfo *GenerateInitInstanceLocal(const vector<l1extra::L1HFRings>*)
   {
      vector<l1extra::L1HFRings> *ptr = 0;
      static ::TVirtualIsAProxy* isa_proxy = new ::TIsAProxy(typeid(vector<l1extra::L1HFRings>));
      static ::ROOT::TGenericClassInfo 
         instance("vector<l1extra::L1HFRings>", -2, "vector", 214,
                  typeid(vector<l1extra::L1HFRings>), ::ROOT::Internal::DefineBehavior(ptr, ptr),
                  &vectorlEl1extracLcLL1HFRingsgR_Dictionary, isa_proxy, 4,
                  sizeof(vector<l1extra::L1HFRings>) );
      instance.SetNew(&new_vectorlEl1extracLcLL1HFRingsgR);
      instance.SetNewArray(&newArray_vectorlEl1extracLcLL1HFRingsgR);
      instance.SetDelete(&delete_vectorlEl1extracLcLL1HFRingsgR);
      instance.SetDeleteArray(&deleteArray_vectorlEl1extracLcLL1HFRingsgR);
      instance.SetDestructor(&destruct_vectorlEl1extracLcLL1HFRingsgR);
      instance.AdoptCollectionProxyInfo(TCollectionProxyInfo::Generate(TCollectionProxyInfo::Pushback< vector<l1extra::L1HFRings> >()));
      return &instance;
   }
   // Static variable to force the class initialization
   static ::ROOT::TGenericClassInfo *_R__UNIQUE_(Init) = GenerateInitInstanceLocal((const vector<l1extra::L1HFRings>*)0x0); R__UseDummy(_R__UNIQUE_(Init));

   // Dictionary for non-ClassDef classes
   static TClass *vectorlEl1extracLcLL1HFRingsgR_Dictionary() {
      TClass* theClass =::ROOT::GenerateInitInstanceLocal((const vector<l1extra::L1HFRings>*)0x0)->GetClass();
      vectorlEl1extracLcLL1HFRingsgR_TClassManip(theClass);
   return theClass;
   }

   static void vectorlEl1extracLcLL1HFRingsgR_TClassManip(TClass* ){
   }

} // end of namespace ROOT

namespace ROOT {
   // Wrappers around operator new
   static void *new_vectorlEl1extracLcLL1HFRingsgR(void *p) {
      return  p ? ::new((::ROOT::Internal::TOperatorNewHelper*)p) vector<l1extra::L1HFRings> : new vector<l1extra::L1HFRings>;
   }
   static void *newArray_vectorlEl1extracLcLL1HFRingsgR(Long_t nElements, void *p) {
      return p ? ::new((::ROOT::Internal::TOperatorNewHelper*)p) vector<l1extra::L1HFRings>[nElements] : new vector<l1extra::L1HFRings>[nElements];
   }
   // Wrapper around operator delete
   static void delete_vectorlEl1extracLcLL1HFRingsgR(void *p) {
      delete ((vector<l1extra::L1HFRings>*)p);
   }
   static void deleteArray_vectorlEl1extracLcLL1HFRingsgR(void *p) {
      delete [] ((vector<l1extra::L1HFRings>*)p);
   }
   static void destruct_vectorlEl1extracLcLL1HFRingsgR(void *p) {
      typedef vector<l1extra::L1HFRings> current_t;
      ((current_t*)p)->~current_t();
   }
} // end of namespace ROOT for class vector<l1extra::L1HFRings>

namespace ROOT {
   static TClass *vectorlEl1extracLcLL1EtMissParticlegR_Dictionary();
   static void vectorlEl1extracLcLL1EtMissParticlegR_TClassManip(TClass*);
   static void *new_vectorlEl1extracLcLL1EtMissParticlegR(void *p = 0);
   static void *newArray_vectorlEl1extracLcLL1EtMissParticlegR(Long_t size, void *p);
   static void delete_vectorlEl1extracLcLL1EtMissParticlegR(void *p);
   static void deleteArray_vectorlEl1extracLcLL1EtMissParticlegR(void *p);
   static void destruct_vectorlEl1extracLcLL1EtMissParticlegR(void *p);

   // Function generating the singleton type initializer
   static TGenericClassInfo *GenerateInitInstanceLocal(const vector<l1extra::L1EtMissParticle>*)
   {
      vector<l1extra::L1EtMissParticle> *ptr = 0;
      static ::TVirtualIsAProxy* isa_proxy = new ::TIsAProxy(typeid(vector<l1extra::L1EtMissParticle>));
      static ::ROOT::TGenericClassInfo 
         instance("vector<l1extra::L1EtMissParticle>", -2, "vector", 214,
                  typeid(vector<l1extra::L1EtMissParticle>), ::ROOT::Internal::DefineBehavior(ptr, ptr),
                  &vectorlEl1extracLcLL1EtMissParticlegR_Dictionary, isa_proxy, 4,
                  sizeof(vector<l1extra::L1EtMissParticle>) );
      instance.SetNew(&new_vectorlEl1extracLcLL1EtMissParticlegR);
      instance.SetNewArray(&newArray_vectorlEl1extracLcLL1EtMissParticlegR);
      instance.SetDelete(&delete_vectorlEl1extracLcLL1EtMissParticlegR);
      instance.SetDeleteArray(&deleteArray_vectorlEl1extracLcLL1EtMissParticlegR);
      instance.SetDestructor(&destruct_vectorlEl1extracLcLL1EtMissParticlegR);
      instance.AdoptCollectionProxyInfo(TCollectionProxyInfo::Generate(TCollectionProxyInfo::Pushback< vector<l1extra::L1EtMissParticle> >()));
      return &instance;
   }
   // Static variable to force the class initialization
   static ::ROOT::TGenericClassInfo *_R__UNIQUE_(Init) = GenerateInitInstanceLocal((const vector<l1extra::L1EtMissParticle>*)0x0); R__UseDummy(_R__UNIQUE_(Init));

   // Dictionary for non-ClassDef classes
   static TClass *vectorlEl1extracLcLL1EtMissParticlegR_Dictionary() {
      TClass* theClass =::ROOT::GenerateInitInstanceLocal((const vector<l1extra::L1EtMissParticle>*)0x0)->GetClass();
      vectorlEl1extracLcLL1EtMissParticlegR_TClassManip(theClass);
   return theClass;
   }

   static void vectorlEl1extracLcLL1EtMissParticlegR_TClassManip(TClass* ){
   }

} // end of namespace ROOT

namespace ROOT {
   // Wrappers around operator new
   static void *new_vectorlEl1extracLcLL1EtMissParticlegR(void *p) {
      return  p ? ::new((::ROOT::Internal::TOperatorNewHelper*)p) vector<l1extra::L1EtMissParticle> : new vector<l1extra::L1EtMissParticle>;
   }
   static void *newArray_vectorlEl1extracLcLL1EtMissParticlegR(Long_t nElements, void *p) {
      return p ? ::new((::ROOT::Internal::TOperatorNewHelper*)p) vector<l1extra::L1EtMissParticle>[nElements] : new vector<l1extra::L1EtMissParticle>[nElements];
   }
   // Wrapper around operator delete
   static void delete_vectorlEl1extracLcLL1EtMissParticlegR(void *p) {
      delete ((vector<l1extra::L1EtMissParticle>*)p);
   }
   static void deleteArray_vectorlEl1extracLcLL1EtMissParticlegR(void *p) {
      delete [] ((vector<l1extra::L1EtMissParticle>*)p);
   }
   static void destruct_vectorlEl1extracLcLL1EtMissParticlegR(void *p) {
      typedef vector<l1extra::L1EtMissParticle> current_t;
      ((current_t*)p)->~current_t();
   }
} // end of namespace ROOT for class vector<l1extra::L1EtMissParticle>

namespace ROOT {
   static TClass *vectorlEl1extracLcLL1EmParticlegR_Dictionary();
   static void vectorlEl1extracLcLL1EmParticlegR_TClassManip(TClass*);
   static void *new_vectorlEl1extracLcLL1EmParticlegR(void *p = 0);
   static void *newArray_vectorlEl1extracLcLL1EmParticlegR(Long_t size, void *p);
   static void delete_vectorlEl1extracLcLL1EmParticlegR(void *p);
   static void deleteArray_vectorlEl1extracLcLL1EmParticlegR(void *p);
   static void destruct_vectorlEl1extracLcLL1EmParticlegR(void *p);

   // Function generating the singleton type initializer
   static TGenericClassInfo *GenerateInitInstanceLocal(const vector<l1extra::L1EmParticle>*)
   {
      vector<l1extra::L1EmParticle> *ptr = 0;
      static ::TVirtualIsAProxy* isa_proxy = new ::TIsAProxy(typeid(vector<l1extra::L1EmParticle>));
      static ::ROOT::TGenericClassInfo 
         instance("vector<l1extra::L1EmParticle>", -2, "vector", 214,
                  typeid(vector<l1extra::L1EmParticle>), ::ROOT::Internal::DefineBehavior(ptr, ptr),
                  &vectorlEl1extracLcLL1EmParticlegR_Dictionary, isa_proxy, 4,
                  sizeof(vector<l1extra::L1EmParticle>) );
      instance.SetNew(&new_vectorlEl1extracLcLL1EmParticlegR);
      instance.SetNewArray(&newArray_vectorlEl1extracLcLL1EmParticlegR);
      instance.SetDelete(&delete_vectorlEl1extracLcLL1EmParticlegR);
      instance.SetDeleteArray(&deleteArray_vectorlEl1extracLcLL1EmParticlegR);
      instance.SetDestructor(&destruct_vectorlEl1extracLcLL1EmParticlegR);
      instance.AdoptCollectionProxyInfo(TCollectionProxyInfo::Generate(TCollectionProxyInfo::Pushback< vector<l1extra::L1EmParticle> >()));
      return &instance;
   }
   // Static variable to force the class initialization
   static ::ROOT::TGenericClassInfo *_R__UNIQUE_(Init) = GenerateInitInstanceLocal((const vector<l1extra::L1EmParticle>*)0x0); R__UseDummy(_R__UNIQUE_(Init));

   // Dictionary for non-ClassDef classes
   static TClass *vectorlEl1extracLcLL1EmParticlegR_Dictionary() {
      TClass* theClass =::ROOT::GenerateInitInstanceLocal((const vector<l1extra::L1EmParticle>*)0x0)->GetClass();
      vectorlEl1extracLcLL1EmParticlegR_TClassManip(theClass);
   return theClass;
   }

   static void vectorlEl1extracLcLL1EmParticlegR_TClassManip(TClass* ){
   }

} // end of namespace ROOT

namespace ROOT {
   // Wrappers around operator new
   static void *new_vectorlEl1extracLcLL1EmParticlegR(void *p) {
      return  p ? ::new((::ROOT::Internal::TOperatorNewHelper*)p) vector<l1extra::L1EmParticle> : new vector<l1extra::L1EmParticle>;
   }
   static void *newArray_vectorlEl1extracLcLL1EmParticlegR(Long_t nElements, void *p) {
      return p ? ::new((::ROOT::Internal::TOperatorNewHelper*)p) vector<l1extra::L1EmParticle>[nElements] : new vector<l1extra::L1EmParticle>[nElements];
   }
   // Wrapper around operator delete
   static void delete_vectorlEl1extracLcLL1EmParticlegR(void *p) {
      delete ((vector<l1extra::L1EmParticle>*)p);
   }
   static void deleteArray_vectorlEl1extracLcLL1EmParticlegR(void *p) {
      delete [] ((vector<l1extra::L1EmParticle>*)p);
   }
   static void destruct_vectorlEl1extracLcLL1EmParticlegR(void *p) {
      typedef vector<l1extra::L1EmParticle> current_t;
      ((current_t*)p)->~current_t();
   }
} // end of namespace ROOT for class vector<l1extra::L1EmParticle>

namespace ROOT {
   static TClass *vectorlEedmcLcLReflEvectorlEl1extracLcLL1MuonParticlegRcOl1extracLcLL1MuonParticlecOedmcLcLrefhelpercLcLFindUsingAdvancelEvectorlEl1extracLcLL1MuonParticlegRcOl1extracLcLL1MuonParticlegRsPgRsPgR_Dictionary();
   static void vectorlEedmcLcLReflEvectorlEl1extracLcLL1MuonParticlegRcOl1extracLcLL1MuonParticlecOedmcLcLrefhelpercLcLFindUsingAdvancelEvectorlEl1extracLcLL1MuonParticlegRcOl1extracLcLL1MuonParticlegRsPgRsPgR_TClassManip(TClass*);
   static void *new_vectorlEedmcLcLReflEvectorlEl1extracLcLL1MuonParticlegRcOl1extracLcLL1MuonParticlecOedmcLcLrefhelpercLcLFindUsingAdvancelEvectorlEl1extracLcLL1MuonParticlegRcOl1extracLcLL1MuonParticlegRsPgRsPgR(void *p = 0);
   static void *newArray_vectorlEedmcLcLReflEvectorlEl1extracLcLL1MuonParticlegRcOl1extracLcLL1MuonParticlecOedmcLcLrefhelpercLcLFindUsingAdvancelEvectorlEl1extracLcLL1MuonParticlegRcOl1extracLcLL1MuonParticlegRsPgRsPgR(Long_t size, void *p);
   static void delete_vectorlEedmcLcLReflEvectorlEl1extracLcLL1MuonParticlegRcOl1extracLcLL1MuonParticlecOedmcLcLrefhelpercLcLFindUsingAdvancelEvectorlEl1extracLcLL1MuonParticlegRcOl1extracLcLL1MuonParticlegRsPgRsPgR(void *p);
   static void deleteArray_vectorlEedmcLcLReflEvectorlEl1extracLcLL1MuonParticlegRcOl1extracLcLL1MuonParticlecOedmcLcLrefhelpercLcLFindUsingAdvancelEvectorlEl1extracLcLL1MuonParticlegRcOl1extracLcLL1MuonParticlegRsPgRsPgR(void *p);
   static void destruct_vectorlEedmcLcLReflEvectorlEl1extracLcLL1MuonParticlegRcOl1extracLcLL1MuonParticlecOedmcLcLrefhelpercLcLFindUsingAdvancelEvectorlEl1extracLcLL1MuonParticlegRcOl1extracLcLL1MuonParticlegRsPgRsPgR(void *p);

   // Function generating the singleton type initializer
   static TGenericClassInfo *GenerateInitInstanceLocal(const vector<edm::Ref<vector<l1extra::L1MuonParticle>,l1extra::L1MuonParticle,edm::refhelper::FindUsingAdvance<vector<l1extra::L1MuonParticle>,l1extra::L1MuonParticle> > >*)
   {
      vector<edm::Ref<vector<l1extra::L1MuonParticle>,l1extra::L1MuonParticle,edm::refhelper::FindUsingAdvance<vector<l1extra::L1MuonParticle>,l1extra::L1MuonParticle> > > *ptr = 0;
      static ::TVirtualIsAProxy* isa_proxy = new ::TIsAProxy(typeid(vector<edm::Ref<vector<l1extra::L1MuonParticle>,l1extra::L1MuonParticle,edm::refhelper::FindUsingAdvance<vector<l1extra::L1MuonParticle>,l1extra::L1MuonParticle> > >));
      static ::ROOT::TGenericClassInfo 
         instance("vector<edm::Ref<vector<l1extra::L1MuonParticle>,l1extra::L1MuonParticle,edm::refhelper::FindUsingAdvance<vector<l1extra::L1MuonParticle>,l1extra::L1MuonParticle> > >", -2, "vector", 214,
                  typeid(vector<edm::Ref<vector<l1extra::L1MuonParticle>,l1extra::L1MuonParticle,edm::refhelper::FindUsingAdvance<vector<l1extra::L1MuonParticle>,l1extra::L1MuonParticle> > >), ::ROOT::Internal::DefineBehavior(ptr, ptr),
                  &vectorlEedmcLcLReflEvectorlEl1extracLcLL1MuonParticlegRcOl1extracLcLL1MuonParticlecOedmcLcLrefhelpercLcLFindUsingAdvancelEvectorlEl1extracLcLL1MuonParticlegRcOl1extracLcLL1MuonParticlegRsPgRsPgR_Dictionary, isa_proxy, 4,
                  sizeof(vector<edm::Ref<vector<l1extra::L1MuonParticle>,l1extra::L1MuonParticle,edm::refhelper::FindUsingAdvance<vector<l1extra::L1MuonParticle>,l1extra::L1MuonParticle> > >) );
      instance.SetNew(&new_vectorlEedmcLcLReflEvectorlEl1extracLcLL1MuonParticlegRcOl1extracLcLL1MuonParticlecOedmcLcLrefhelpercLcLFindUsingAdvancelEvectorlEl1extracLcLL1MuonParticlegRcOl1extracLcLL1MuonParticlegRsPgRsPgR);
      instance.SetNewArray(&newArray_vectorlEedmcLcLReflEvectorlEl1extracLcLL1MuonParticlegRcOl1extracLcLL1MuonParticlecOedmcLcLrefhelpercLcLFindUsingAdvancelEvectorlEl1extracLcLL1MuonParticlegRcOl1extracLcLL1MuonParticlegRsPgRsPgR);
      instance.SetDelete(&delete_vectorlEedmcLcLReflEvectorlEl1extracLcLL1MuonParticlegRcOl1extracLcLL1MuonParticlecOedmcLcLrefhelpercLcLFindUsingAdvancelEvectorlEl1extracLcLL1MuonParticlegRcOl1extracLcLL1MuonParticlegRsPgRsPgR);
      instance.SetDeleteArray(&deleteArray_vectorlEedmcLcLReflEvectorlEl1extracLcLL1MuonParticlegRcOl1extracLcLL1MuonParticlecOedmcLcLrefhelpercLcLFindUsingAdvancelEvectorlEl1extracLcLL1MuonParticlegRcOl1extracLcLL1MuonParticlegRsPgRsPgR);
      instance.SetDestructor(&destruct_vectorlEedmcLcLReflEvectorlEl1extracLcLL1MuonParticlegRcOl1extracLcLL1MuonParticlecOedmcLcLrefhelpercLcLFindUsingAdvancelEvectorlEl1extracLcLL1MuonParticlegRcOl1extracLcLL1MuonParticlegRsPgRsPgR);
      instance.AdoptCollectionProxyInfo(TCollectionProxyInfo::Generate(TCollectionProxyInfo::Pushback< vector<edm::Ref<vector<l1extra::L1MuonParticle>,l1extra::L1MuonParticle,edm::refhelper::FindUsingAdvance<vector<l1extra::L1MuonParticle>,l1extra::L1MuonParticle> > > >()));
      return &instance;
   }
   // Static variable to force the class initialization
   static ::ROOT::TGenericClassInfo *_R__UNIQUE_(Init) = GenerateInitInstanceLocal((const vector<edm::Ref<vector<l1extra::L1MuonParticle>,l1extra::L1MuonParticle,edm::refhelper::FindUsingAdvance<vector<l1extra::L1MuonParticle>,l1extra::L1MuonParticle> > >*)0x0); R__UseDummy(_R__UNIQUE_(Init));

   // Dictionary for non-ClassDef classes
   static TClass *vectorlEedmcLcLReflEvectorlEl1extracLcLL1MuonParticlegRcOl1extracLcLL1MuonParticlecOedmcLcLrefhelpercLcLFindUsingAdvancelEvectorlEl1extracLcLL1MuonParticlegRcOl1extracLcLL1MuonParticlegRsPgRsPgR_Dictionary() {
      TClass* theClass =::ROOT::GenerateInitInstanceLocal((const vector<edm::Ref<vector<l1extra::L1MuonParticle>,l1extra::L1MuonParticle,edm::refhelper::FindUsingAdvance<vector<l1extra::L1MuonParticle>,l1extra::L1MuonParticle> > >*)0x0)->GetClass();
      vectorlEedmcLcLReflEvectorlEl1extracLcLL1MuonParticlegRcOl1extracLcLL1MuonParticlecOedmcLcLrefhelpercLcLFindUsingAdvancelEvectorlEl1extracLcLL1MuonParticlegRcOl1extracLcLL1MuonParticlegRsPgRsPgR_TClassManip(theClass);
   return theClass;
   }

   static void vectorlEedmcLcLReflEvectorlEl1extracLcLL1MuonParticlegRcOl1extracLcLL1MuonParticlecOedmcLcLrefhelpercLcLFindUsingAdvancelEvectorlEl1extracLcLL1MuonParticlegRcOl1extracLcLL1MuonParticlegRsPgRsPgR_TClassManip(TClass* ){
   }

} // end of namespace ROOT

namespace ROOT {
   // Wrappers around operator new
   static void *new_vectorlEedmcLcLReflEvectorlEl1extracLcLL1MuonParticlegRcOl1extracLcLL1MuonParticlecOedmcLcLrefhelpercLcLFindUsingAdvancelEvectorlEl1extracLcLL1MuonParticlegRcOl1extracLcLL1MuonParticlegRsPgRsPgR(void *p) {
      return  p ? ::new((::ROOT::Internal::TOperatorNewHelper*)p) vector<edm::Ref<vector<l1extra::L1MuonParticle>,l1extra::L1MuonParticle,edm::refhelper::FindUsingAdvance<vector<l1extra::L1MuonParticle>,l1extra::L1MuonParticle> > > : new vector<edm::Ref<vector<l1extra::L1MuonParticle>,l1extra::L1MuonParticle,edm::refhelper::FindUsingAdvance<vector<l1extra::L1MuonParticle>,l1extra::L1MuonParticle> > >;
   }
   static void *newArray_vectorlEedmcLcLReflEvectorlEl1extracLcLL1MuonParticlegRcOl1extracLcLL1MuonParticlecOedmcLcLrefhelpercLcLFindUsingAdvancelEvectorlEl1extracLcLL1MuonParticlegRcOl1extracLcLL1MuonParticlegRsPgRsPgR(Long_t nElements, void *p) {
      return p ? ::new((::ROOT::Internal::TOperatorNewHelper*)p) vector<edm::Ref<vector<l1extra::L1MuonParticle>,l1extra::L1MuonParticle,edm::refhelper::FindUsingAdvance<vector<l1extra::L1MuonParticle>,l1extra::L1MuonParticle> > >[nElements] : new vector<edm::Ref<vector<l1extra::L1MuonParticle>,l1extra::L1MuonParticle,edm::refhelper::FindUsingAdvance<vector<l1extra::L1MuonParticle>,l1extra::L1MuonParticle> > >[nElements];
   }
   // Wrapper around operator delete
   static void delete_vectorlEedmcLcLReflEvectorlEl1extracLcLL1MuonParticlegRcOl1extracLcLL1MuonParticlecOedmcLcLrefhelpercLcLFindUsingAdvancelEvectorlEl1extracLcLL1MuonParticlegRcOl1extracLcLL1MuonParticlegRsPgRsPgR(void *p) {
      delete ((vector<edm::Ref<vector<l1extra::L1MuonParticle>,l1extra::L1MuonParticle,edm::refhelper::FindUsingAdvance<vector<l1extra::L1MuonParticle>,l1extra::L1MuonParticle> > >*)p);
   }
   static void deleteArray_vectorlEedmcLcLReflEvectorlEl1extracLcLL1MuonParticlegRcOl1extracLcLL1MuonParticlecOedmcLcLrefhelpercLcLFindUsingAdvancelEvectorlEl1extracLcLL1MuonParticlegRcOl1extracLcLL1MuonParticlegRsPgRsPgR(void *p) {
      delete [] ((vector<edm::Ref<vector<l1extra::L1MuonParticle>,l1extra::L1MuonParticle,edm::refhelper::FindUsingAdvance<vector<l1extra::L1MuonParticle>,l1extra::L1MuonParticle> > >*)p);
   }
   static void destruct_vectorlEedmcLcLReflEvectorlEl1extracLcLL1MuonParticlegRcOl1extracLcLL1MuonParticlecOedmcLcLrefhelpercLcLFindUsingAdvancelEvectorlEl1extracLcLL1MuonParticlegRcOl1extracLcLL1MuonParticlegRsPgRsPgR(void *p) {
      typedef vector<edm::Ref<vector<l1extra::L1MuonParticle>,l1extra::L1MuonParticle,edm::refhelper::FindUsingAdvance<vector<l1extra::L1MuonParticle>,l1extra::L1MuonParticle> > > current_t;
      ((current_t*)p)->~current_t();
   }
} // end of namespace ROOT for class vector<edm::Ref<vector<l1extra::L1MuonParticle>,l1extra::L1MuonParticle,edm::refhelper::FindUsingAdvance<vector<l1extra::L1MuonParticle>,l1extra::L1MuonParticle> > >

namespace ROOT {
   static TClass *vectorlEedmcLcLReflEvectorlEl1extracLcLL1JetParticlegRcOl1extracLcLL1JetParticlecOedmcLcLrefhelpercLcLFindUsingAdvancelEvectorlEl1extracLcLL1JetParticlegRcOl1extracLcLL1JetParticlegRsPgRsPgR_Dictionary();
   static void vectorlEedmcLcLReflEvectorlEl1extracLcLL1JetParticlegRcOl1extracLcLL1JetParticlecOedmcLcLrefhelpercLcLFindUsingAdvancelEvectorlEl1extracLcLL1JetParticlegRcOl1extracLcLL1JetParticlegRsPgRsPgR_TClassManip(TClass*);
   static void *new_vectorlEedmcLcLReflEvectorlEl1extracLcLL1JetParticlegRcOl1extracLcLL1JetParticlecOedmcLcLrefhelpercLcLFindUsingAdvancelEvectorlEl1extracLcLL1JetParticlegRcOl1extracLcLL1JetParticlegRsPgRsPgR(void *p = 0);
   static void *newArray_vectorlEedmcLcLReflEvectorlEl1extracLcLL1JetParticlegRcOl1extracLcLL1JetParticlecOedmcLcLrefhelpercLcLFindUsingAdvancelEvectorlEl1extracLcLL1JetParticlegRcOl1extracLcLL1JetParticlegRsPgRsPgR(Long_t size, void *p);
   static void delete_vectorlEedmcLcLReflEvectorlEl1extracLcLL1JetParticlegRcOl1extracLcLL1JetParticlecOedmcLcLrefhelpercLcLFindUsingAdvancelEvectorlEl1extracLcLL1JetParticlegRcOl1extracLcLL1JetParticlegRsPgRsPgR(void *p);
   static void deleteArray_vectorlEedmcLcLReflEvectorlEl1extracLcLL1JetParticlegRcOl1extracLcLL1JetParticlecOedmcLcLrefhelpercLcLFindUsingAdvancelEvectorlEl1extracLcLL1JetParticlegRcOl1extracLcLL1JetParticlegRsPgRsPgR(void *p);
   static void destruct_vectorlEedmcLcLReflEvectorlEl1extracLcLL1JetParticlegRcOl1extracLcLL1JetParticlecOedmcLcLrefhelpercLcLFindUsingAdvancelEvectorlEl1extracLcLL1JetParticlegRcOl1extracLcLL1JetParticlegRsPgRsPgR(void *p);

   // Function generating the singleton type initializer
   static TGenericClassInfo *GenerateInitInstanceLocal(const vector<edm::Ref<vector<l1extra::L1JetParticle>,l1extra::L1JetParticle,edm::refhelper::FindUsingAdvance<vector<l1extra::L1JetParticle>,l1extra::L1JetParticle> > >*)
   {
      vector<edm::Ref<vector<l1extra::L1JetParticle>,l1extra::L1JetParticle,edm::refhelper::FindUsingAdvance<vector<l1extra::L1JetParticle>,l1extra::L1JetParticle> > > *ptr = 0;
      static ::TVirtualIsAProxy* isa_proxy = new ::TIsAProxy(typeid(vector<edm::Ref<vector<l1extra::L1JetParticle>,l1extra::L1JetParticle,edm::refhelper::FindUsingAdvance<vector<l1extra::L1JetParticle>,l1extra::L1JetParticle> > >));
      static ::ROOT::TGenericClassInfo 
         instance("vector<edm::Ref<vector<l1extra::L1JetParticle>,l1extra::L1JetParticle,edm::refhelper::FindUsingAdvance<vector<l1extra::L1JetParticle>,l1extra::L1JetParticle> > >", -2, "vector", 214,
                  typeid(vector<edm::Ref<vector<l1extra::L1JetParticle>,l1extra::L1JetParticle,edm::refhelper::FindUsingAdvance<vector<l1extra::L1JetParticle>,l1extra::L1JetParticle> > >), ::ROOT::Internal::DefineBehavior(ptr, ptr),
                  &vectorlEedmcLcLReflEvectorlEl1extracLcLL1JetParticlegRcOl1extracLcLL1JetParticlecOedmcLcLrefhelpercLcLFindUsingAdvancelEvectorlEl1extracLcLL1JetParticlegRcOl1extracLcLL1JetParticlegRsPgRsPgR_Dictionary, isa_proxy, 4,
                  sizeof(vector<edm::Ref<vector<l1extra::L1JetParticle>,l1extra::L1JetParticle,edm::refhelper::FindUsingAdvance<vector<l1extra::L1JetParticle>,l1extra::L1JetParticle> > >) );
      instance.SetNew(&new_vectorlEedmcLcLReflEvectorlEl1extracLcLL1JetParticlegRcOl1extracLcLL1JetParticlecOedmcLcLrefhelpercLcLFindUsingAdvancelEvectorlEl1extracLcLL1JetParticlegRcOl1extracLcLL1JetParticlegRsPgRsPgR);
      instance.SetNewArray(&newArray_vectorlEedmcLcLReflEvectorlEl1extracLcLL1JetParticlegRcOl1extracLcLL1JetParticlecOedmcLcLrefhelpercLcLFindUsingAdvancelEvectorlEl1extracLcLL1JetParticlegRcOl1extracLcLL1JetParticlegRsPgRsPgR);
      instance.SetDelete(&delete_vectorlEedmcLcLReflEvectorlEl1extracLcLL1JetParticlegRcOl1extracLcLL1JetParticlecOedmcLcLrefhelpercLcLFindUsingAdvancelEvectorlEl1extracLcLL1JetParticlegRcOl1extracLcLL1JetParticlegRsPgRsPgR);
      instance.SetDeleteArray(&deleteArray_vectorlEedmcLcLReflEvectorlEl1extracLcLL1JetParticlegRcOl1extracLcLL1JetParticlecOedmcLcLrefhelpercLcLFindUsingAdvancelEvectorlEl1extracLcLL1JetParticlegRcOl1extracLcLL1JetParticlegRsPgRsPgR);
      instance.SetDestructor(&destruct_vectorlEedmcLcLReflEvectorlEl1extracLcLL1JetParticlegRcOl1extracLcLL1JetParticlecOedmcLcLrefhelpercLcLFindUsingAdvancelEvectorlEl1extracLcLL1JetParticlegRcOl1extracLcLL1JetParticlegRsPgRsPgR);
      instance.AdoptCollectionProxyInfo(TCollectionProxyInfo::Generate(TCollectionProxyInfo::Pushback< vector<edm::Ref<vector<l1extra::L1JetParticle>,l1extra::L1JetParticle,edm::refhelper::FindUsingAdvance<vector<l1extra::L1JetParticle>,l1extra::L1JetParticle> > > >()));
      return &instance;
   }
   // Static variable to force the class initialization
   static ::ROOT::TGenericClassInfo *_R__UNIQUE_(Init) = GenerateInitInstanceLocal((const vector<edm::Ref<vector<l1extra::L1JetParticle>,l1extra::L1JetParticle,edm::refhelper::FindUsingAdvance<vector<l1extra::L1JetParticle>,l1extra::L1JetParticle> > >*)0x0); R__UseDummy(_R__UNIQUE_(Init));

   // Dictionary for non-ClassDef classes
   static TClass *vectorlEedmcLcLReflEvectorlEl1extracLcLL1JetParticlegRcOl1extracLcLL1JetParticlecOedmcLcLrefhelpercLcLFindUsingAdvancelEvectorlEl1extracLcLL1JetParticlegRcOl1extracLcLL1JetParticlegRsPgRsPgR_Dictionary() {
      TClass* theClass =::ROOT::GenerateInitInstanceLocal((const vector<edm::Ref<vector<l1extra::L1JetParticle>,l1extra::L1JetParticle,edm::refhelper::FindUsingAdvance<vector<l1extra::L1JetParticle>,l1extra::L1JetParticle> > >*)0x0)->GetClass();
      vectorlEedmcLcLReflEvectorlEl1extracLcLL1JetParticlegRcOl1extracLcLL1JetParticlecOedmcLcLrefhelpercLcLFindUsingAdvancelEvectorlEl1extracLcLL1JetParticlegRcOl1extracLcLL1JetParticlegRsPgRsPgR_TClassManip(theClass);
   return theClass;
   }

   static void vectorlEedmcLcLReflEvectorlEl1extracLcLL1JetParticlegRcOl1extracLcLL1JetParticlecOedmcLcLrefhelpercLcLFindUsingAdvancelEvectorlEl1extracLcLL1JetParticlegRcOl1extracLcLL1JetParticlegRsPgRsPgR_TClassManip(TClass* ){
   }

} // end of namespace ROOT

namespace ROOT {
   // Wrappers around operator new
   static void *new_vectorlEedmcLcLReflEvectorlEl1extracLcLL1JetParticlegRcOl1extracLcLL1JetParticlecOedmcLcLrefhelpercLcLFindUsingAdvancelEvectorlEl1extracLcLL1JetParticlegRcOl1extracLcLL1JetParticlegRsPgRsPgR(void *p) {
      return  p ? ::new((::ROOT::Internal::TOperatorNewHelper*)p) vector<edm::Ref<vector<l1extra::L1JetParticle>,l1extra::L1JetParticle,edm::refhelper::FindUsingAdvance<vector<l1extra::L1JetParticle>,l1extra::L1JetParticle> > > : new vector<edm::Ref<vector<l1extra::L1JetParticle>,l1extra::L1JetParticle,edm::refhelper::FindUsingAdvance<vector<l1extra::L1JetParticle>,l1extra::L1JetParticle> > >;
   }
   static void *newArray_vectorlEedmcLcLReflEvectorlEl1extracLcLL1JetParticlegRcOl1extracLcLL1JetParticlecOedmcLcLrefhelpercLcLFindUsingAdvancelEvectorlEl1extracLcLL1JetParticlegRcOl1extracLcLL1JetParticlegRsPgRsPgR(Long_t nElements, void *p) {
      return p ? ::new((::ROOT::Internal::TOperatorNewHelper*)p) vector<edm::Ref<vector<l1extra::L1JetParticle>,l1extra::L1JetParticle,edm::refhelper::FindUsingAdvance<vector<l1extra::L1JetParticle>,l1extra::L1JetParticle> > >[nElements] : new vector<edm::Ref<vector<l1extra::L1JetParticle>,l1extra::L1JetParticle,edm::refhelper::FindUsingAdvance<vector<l1extra::L1JetParticle>,l1extra::L1JetParticle> > >[nElements];
   }
   // Wrapper around operator delete
   static void delete_vectorlEedmcLcLReflEvectorlEl1extracLcLL1JetParticlegRcOl1extracLcLL1JetParticlecOedmcLcLrefhelpercLcLFindUsingAdvancelEvectorlEl1extracLcLL1JetParticlegRcOl1extracLcLL1JetParticlegRsPgRsPgR(void *p) {
      delete ((vector<edm::Ref<vector<l1extra::L1JetParticle>,l1extra::L1JetParticle,edm::refhelper::FindUsingAdvance<vector<l1extra::L1JetParticle>,l1extra::L1JetParticle> > >*)p);
   }
   static void deleteArray_vectorlEedmcLcLReflEvectorlEl1extracLcLL1JetParticlegRcOl1extracLcLL1JetParticlecOedmcLcLrefhelpercLcLFindUsingAdvancelEvectorlEl1extracLcLL1JetParticlegRcOl1extracLcLL1JetParticlegRsPgRsPgR(void *p) {
      delete [] ((vector<edm::Ref<vector<l1extra::L1JetParticle>,l1extra::L1JetParticle,edm::refhelper::FindUsingAdvance<vector<l1extra::L1JetParticle>,l1extra::L1JetParticle> > >*)p);
   }
   static void destruct_vectorlEedmcLcLReflEvectorlEl1extracLcLL1JetParticlegRcOl1extracLcLL1JetParticlecOedmcLcLrefhelpercLcLFindUsingAdvancelEvectorlEl1extracLcLL1JetParticlegRcOl1extracLcLL1JetParticlegRsPgRsPgR(void *p) {
      typedef vector<edm::Ref<vector<l1extra::L1JetParticle>,l1extra::L1JetParticle,edm::refhelper::FindUsingAdvance<vector<l1extra::L1JetParticle>,l1extra::L1JetParticle> > > current_t;
      ((current_t*)p)->~current_t();
   }
} // end of namespace ROOT for class vector<edm::Ref<vector<l1extra::L1JetParticle>,l1extra::L1JetParticle,edm::refhelper::FindUsingAdvance<vector<l1extra::L1JetParticle>,l1extra::L1JetParticle> > >

namespace ROOT {
   static TClass *vectorlEedmcLcLReflEvectorlEl1extracLcLL1HFRingsgRcOl1extracLcLL1HFRingscOedmcLcLrefhelpercLcLFindUsingAdvancelEvectorlEl1extracLcLL1HFRingsgRcOl1extracLcLL1HFRingsgRsPgRsPgR_Dictionary();
   static void vectorlEedmcLcLReflEvectorlEl1extracLcLL1HFRingsgRcOl1extracLcLL1HFRingscOedmcLcLrefhelpercLcLFindUsingAdvancelEvectorlEl1extracLcLL1HFRingsgRcOl1extracLcLL1HFRingsgRsPgRsPgR_TClassManip(TClass*);
   static void *new_vectorlEedmcLcLReflEvectorlEl1extracLcLL1HFRingsgRcOl1extracLcLL1HFRingscOedmcLcLrefhelpercLcLFindUsingAdvancelEvectorlEl1extracLcLL1HFRingsgRcOl1extracLcLL1HFRingsgRsPgRsPgR(void *p = 0);
   static void *newArray_vectorlEedmcLcLReflEvectorlEl1extracLcLL1HFRingsgRcOl1extracLcLL1HFRingscOedmcLcLrefhelpercLcLFindUsingAdvancelEvectorlEl1extracLcLL1HFRingsgRcOl1extracLcLL1HFRingsgRsPgRsPgR(Long_t size, void *p);
   static void delete_vectorlEedmcLcLReflEvectorlEl1extracLcLL1HFRingsgRcOl1extracLcLL1HFRingscOedmcLcLrefhelpercLcLFindUsingAdvancelEvectorlEl1extracLcLL1HFRingsgRcOl1extracLcLL1HFRingsgRsPgRsPgR(void *p);
   static void deleteArray_vectorlEedmcLcLReflEvectorlEl1extracLcLL1HFRingsgRcOl1extracLcLL1HFRingscOedmcLcLrefhelpercLcLFindUsingAdvancelEvectorlEl1extracLcLL1HFRingsgRcOl1extracLcLL1HFRingsgRsPgRsPgR(void *p);
   static void destruct_vectorlEedmcLcLReflEvectorlEl1extracLcLL1HFRingsgRcOl1extracLcLL1HFRingscOedmcLcLrefhelpercLcLFindUsingAdvancelEvectorlEl1extracLcLL1HFRingsgRcOl1extracLcLL1HFRingsgRsPgRsPgR(void *p);

   // Function generating the singleton type initializer
   static TGenericClassInfo *GenerateInitInstanceLocal(const vector<edm::Ref<vector<l1extra::L1HFRings>,l1extra::L1HFRings,edm::refhelper::FindUsingAdvance<vector<l1extra::L1HFRings>,l1extra::L1HFRings> > >*)
   {
      vector<edm::Ref<vector<l1extra::L1HFRings>,l1extra::L1HFRings,edm::refhelper::FindUsingAdvance<vector<l1extra::L1HFRings>,l1extra::L1HFRings> > > *ptr = 0;
      static ::TVirtualIsAProxy* isa_proxy = new ::TIsAProxy(typeid(vector<edm::Ref<vector<l1extra::L1HFRings>,l1extra::L1HFRings,edm::refhelper::FindUsingAdvance<vector<l1extra::L1HFRings>,l1extra::L1HFRings> > >));
      static ::ROOT::TGenericClassInfo 
         instance("vector<edm::Ref<vector<l1extra::L1HFRings>,l1extra::L1HFRings,edm::refhelper::FindUsingAdvance<vector<l1extra::L1HFRings>,l1extra::L1HFRings> > >", -2, "vector", 214,
                  typeid(vector<edm::Ref<vector<l1extra::L1HFRings>,l1extra::L1HFRings,edm::refhelper::FindUsingAdvance<vector<l1extra::L1HFRings>,l1extra::L1HFRings> > >), ::ROOT::Internal::DefineBehavior(ptr, ptr),
                  &vectorlEedmcLcLReflEvectorlEl1extracLcLL1HFRingsgRcOl1extracLcLL1HFRingscOedmcLcLrefhelpercLcLFindUsingAdvancelEvectorlEl1extracLcLL1HFRingsgRcOl1extracLcLL1HFRingsgRsPgRsPgR_Dictionary, isa_proxy, 4,
                  sizeof(vector<edm::Ref<vector<l1extra::L1HFRings>,l1extra::L1HFRings,edm::refhelper::FindUsingAdvance<vector<l1extra::L1HFRings>,l1extra::L1HFRings> > >) );
      instance.SetNew(&new_vectorlEedmcLcLReflEvectorlEl1extracLcLL1HFRingsgRcOl1extracLcLL1HFRingscOedmcLcLrefhelpercLcLFindUsingAdvancelEvectorlEl1extracLcLL1HFRingsgRcOl1extracLcLL1HFRingsgRsPgRsPgR);
      instance.SetNewArray(&newArray_vectorlEedmcLcLReflEvectorlEl1extracLcLL1HFRingsgRcOl1extracLcLL1HFRingscOedmcLcLrefhelpercLcLFindUsingAdvancelEvectorlEl1extracLcLL1HFRingsgRcOl1extracLcLL1HFRingsgRsPgRsPgR);
      instance.SetDelete(&delete_vectorlEedmcLcLReflEvectorlEl1extracLcLL1HFRingsgRcOl1extracLcLL1HFRingscOedmcLcLrefhelpercLcLFindUsingAdvancelEvectorlEl1extracLcLL1HFRingsgRcOl1extracLcLL1HFRingsgRsPgRsPgR);
      instance.SetDeleteArray(&deleteArray_vectorlEedmcLcLReflEvectorlEl1extracLcLL1HFRingsgRcOl1extracLcLL1HFRingscOedmcLcLrefhelpercLcLFindUsingAdvancelEvectorlEl1extracLcLL1HFRingsgRcOl1extracLcLL1HFRingsgRsPgRsPgR);
      instance.SetDestructor(&destruct_vectorlEedmcLcLReflEvectorlEl1extracLcLL1HFRingsgRcOl1extracLcLL1HFRingscOedmcLcLrefhelpercLcLFindUsingAdvancelEvectorlEl1extracLcLL1HFRingsgRcOl1extracLcLL1HFRingsgRsPgRsPgR);
      instance.AdoptCollectionProxyInfo(TCollectionProxyInfo::Generate(TCollectionProxyInfo::Pushback< vector<edm::Ref<vector<l1extra::L1HFRings>,l1extra::L1HFRings,edm::refhelper::FindUsingAdvance<vector<l1extra::L1HFRings>,l1extra::L1HFRings> > > >()));
      return &instance;
   }
   // Static variable to force the class initialization
   static ::ROOT::TGenericClassInfo *_R__UNIQUE_(Init) = GenerateInitInstanceLocal((const vector<edm::Ref<vector<l1extra::L1HFRings>,l1extra::L1HFRings,edm::refhelper::FindUsingAdvance<vector<l1extra::L1HFRings>,l1extra::L1HFRings> > >*)0x0); R__UseDummy(_R__UNIQUE_(Init));

   // Dictionary for non-ClassDef classes
   static TClass *vectorlEedmcLcLReflEvectorlEl1extracLcLL1HFRingsgRcOl1extracLcLL1HFRingscOedmcLcLrefhelpercLcLFindUsingAdvancelEvectorlEl1extracLcLL1HFRingsgRcOl1extracLcLL1HFRingsgRsPgRsPgR_Dictionary() {
      TClass* theClass =::ROOT::GenerateInitInstanceLocal((const vector<edm::Ref<vector<l1extra::L1HFRings>,l1extra::L1HFRings,edm::refhelper::FindUsingAdvance<vector<l1extra::L1HFRings>,l1extra::L1HFRings> > >*)0x0)->GetClass();
      vectorlEedmcLcLReflEvectorlEl1extracLcLL1HFRingsgRcOl1extracLcLL1HFRingscOedmcLcLrefhelpercLcLFindUsingAdvancelEvectorlEl1extracLcLL1HFRingsgRcOl1extracLcLL1HFRingsgRsPgRsPgR_TClassManip(theClass);
   return theClass;
   }

   static void vectorlEedmcLcLReflEvectorlEl1extracLcLL1HFRingsgRcOl1extracLcLL1HFRingscOedmcLcLrefhelpercLcLFindUsingAdvancelEvectorlEl1extracLcLL1HFRingsgRcOl1extracLcLL1HFRingsgRsPgRsPgR_TClassManip(TClass* ){
   }

} // end of namespace ROOT

namespace ROOT {
   // Wrappers around operator new
   static void *new_vectorlEedmcLcLReflEvectorlEl1extracLcLL1HFRingsgRcOl1extracLcLL1HFRingscOedmcLcLrefhelpercLcLFindUsingAdvancelEvectorlEl1extracLcLL1HFRingsgRcOl1extracLcLL1HFRingsgRsPgRsPgR(void *p) {
      return  p ? ::new((::ROOT::Internal::TOperatorNewHelper*)p) vector<edm::Ref<vector<l1extra::L1HFRings>,l1extra::L1HFRings,edm::refhelper::FindUsingAdvance<vector<l1extra::L1HFRings>,l1extra::L1HFRings> > > : new vector<edm::Ref<vector<l1extra::L1HFRings>,l1extra::L1HFRings,edm::refhelper::FindUsingAdvance<vector<l1extra::L1HFRings>,l1extra::L1HFRings> > >;
   }
   static void *newArray_vectorlEedmcLcLReflEvectorlEl1extracLcLL1HFRingsgRcOl1extracLcLL1HFRingscOedmcLcLrefhelpercLcLFindUsingAdvancelEvectorlEl1extracLcLL1HFRingsgRcOl1extracLcLL1HFRingsgRsPgRsPgR(Long_t nElements, void *p) {
      return p ? ::new((::ROOT::Internal::TOperatorNewHelper*)p) vector<edm::Ref<vector<l1extra::L1HFRings>,l1extra::L1HFRings,edm::refhelper::FindUsingAdvance<vector<l1extra::L1HFRings>,l1extra::L1HFRings> > >[nElements] : new vector<edm::Ref<vector<l1extra::L1HFRings>,l1extra::L1HFRings,edm::refhelper::FindUsingAdvance<vector<l1extra::L1HFRings>,l1extra::L1HFRings> > >[nElements];
   }
   // Wrapper around operator delete
   static void delete_vectorlEedmcLcLReflEvectorlEl1extracLcLL1HFRingsgRcOl1extracLcLL1HFRingscOedmcLcLrefhelpercLcLFindUsingAdvancelEvectorlEl1extracLcLL1HFRingsgRcOl1extracLcLL1HFRingsgRsPgRsPgR(void *p) {
      delete ((vector<edm::Ref<vector<l1extra::L1HFRings>,l1extra::L1HFRings,edm::refhelper::FindUsingAdvance<vector<l1extra::L1HFRings>,l1extra::L1HFRings> > >*)p);
   }
   static void deleteArray_vectorlEedmcLcLReflEvectorlEl1extracLcLL1HFRingsgRcOl1extracLcLL1HFRingscOedmcLcLrefhelpercLcLFindUsingAdvancelEvectorlEl1extracLcLL1HFRingsgRcOl1extracLcLL1HFRingsgRsPgRsPgR(void *p) {
      delete [] ((vector<edm::Ref<vector<l1extra::L1HFRings>,l1extra::L1HFRings,edm::refhelper::FindUsingAdvance<vector<l1extra::L1HFRings>,l1extra::L1HFRings> > >*)p);
   }
   static void destruct_vectorlEedmcLcLReflEvectorlEl1extracLcLL1HFRingsgRcOl1extracLcLL1HFRingscOedmcLcLrefhelpercLcLFindUsingAdvancelEvectorlEl1extracLcLL1HFRingsgRcOl1extracLcLL1HFRingsgRsPgRsPgR(void *p) {
      typedef vector<edm::Ref<vector<l1extra::L1HFRings>,l1extra::L1HFRings,edm::refhelper::FindUsingAdvance<vector<l1extra::L1HFRings>,l1extra::L1HFRings> > > current_t;
      ((current_t*)p)->~current_t();
   }
} // end of namespace ROOT for class vector<edm::Ref<vector<l1extra::L1HFRings>,l1extra::L1HFRings,edm::refhelper::FindUsingAdvance<vector<l1extra::L1HFRings>,l1extra::L1HFRings> > >

namespace ROOT {
   static TClass *vectorlEedmcLcLReflEvectorlEl1extracLcLL1EtMissParticlegRcOl1extracLcLL1EtMissParticlecOedmcLcLrefhelpercLcLFindUsingAdvancelEvectorlEl1extracLcLL1EtMissParticlegRcOl1extracLcLL1EtMissParticlegRsPgRsPgR_Dictionary();
   static void vectorlEedmcLcLReflEvectorlEl1extracLcLL1EtMissParticlegRcOl1extracLcLL1EtMissParticlecOedmcLcLrefhelpercLcLFindUsingAdvancelEvectorlEl1extracLcLL1EtMissParticlegRcOl1extracLcLL1EtMissParticlegRsPgRsPgR_TClassManip(TClass*);
   static void *new_vectorlEedmcLcLReflEvectorlEl1extracLcLL1EtMissParticlegRcOl1extracLcLL1EtMissParticlecOedmcLcLrefhelpercLcLFindUsingAdvancelEvectorlEl1extracLcLL1EtMissParticlegRcOl1extracLcLL1EtMissParticlegRsPgRsPgR(void *p = 0);
   static void *newArray_vectorlEedmcLcLReflEvectorlEl1extracLcLL1EtMissParticlegRcOl1extracLcLL1EtMissParticlecOedmcLcLrefhelpercLcLFindUsingAdvancelEvectorlEl1extracLcLL1EtMissParticlegRcOl1extracLcLL1EtMissParticlegRsPgRsPgR(Long_t size, void *p);
   static void delete_vectorlEedmcLcLReflEvectorlEl1extracLcLL1EtMissParticlegRcOl1extracLcLL1EtMissParticlecOedmcLcLrefhelpercLcLFindUsingAdvancelEvectorlEl1extracLcLL1EtMissParticlegRcOl1extracLcLL1EtMissParticlegRsPgRsPgR(void *p);
   static void deleteArray_vectorlEedmcLcLReflEvectorlEl1extracLcLL1EtMissParticlegRcOl1extracLcLL1EtMissParticlecOedmcLcLrefhelpercLcLFindUsingAdvancelEvectorlEl1extracLcLL1EtMissParticlegRcOl1extracLcLL1EtMissParticlegRsPgRsPgR(void *p);
   static void destruct_vectorlEedmcLcLReflEvectorlEl1extracLcLL1EtMissParticlegRcOl1extracLcLL1EtMissParticlecOedmcLcLrefhelpercLcLFindUsingAdvancelEvectorlEl1extracLcLL1EtMissParticlegRcOl1extracLcLL1EtMissParticlegRsPgRsPgR(void *p);

   // Function generating the singleton type initializer
   static TGenericClassInfo *GenerateInitInstanceLocal(const vector<edm::Ref<vector<l1extra::L1EtMissParticle>,l1extra::L1EtMissParticle,edm::refhelper::FindUsingAdvance<vector<l1extra::L1EtMissParticle>,l1extra::L1EtMissParticle> > >*)
   {
      vector<edm::Ref<vector<l1extra::L1EtMissParticle>,l1extra::L1EtMissParticle,edm::refhelper::FindUsingAdvance<vector<l1extra::L1EtMissParticle>,l1extra::L1EtMissParticle> > > *ptr = 0;
      static ::TVirtualIsAProxy* isa_proxy = new ::TIsAProxy(typeid(vector<edm::Ref<vector<l1extra::L1EtMissParticle>,l1extra::L1EtMissParticle,edm::refhelper::FindUsingAdvance<vector<l1extra::L1EtMissParticle>,l1extra::L1EtMissParticle> > >));
      static ::ROOT::TGenericClassInfo 
         instance("vector<edm::Ref<vector<l1extra::L1EtMissParticle>,l1extra::L1EtMissParticle,edm::refhelper::FindUsingAdvance<vector<l1extra::L1EtMissParticle>,l1extra::L1EtMissParticle> > >", -2, "vector", 214,
                  typeid(vector<edm::Ref<vector<l1extra::L1EtMissParticle>,l1extra::L1EtMissParticle,edm::refhelper::FindUsingAdvance<vector<l1extra::L1EtMissParticle>,l1extra::L1EtMissParticle> > >), ::ROOT::Internal::DefineBehavior(ptr, ptr),
                  &vectorlEedmcLcLReflEvectorlEl1extracLcLL1EtMissParticlegRcOl1extracLcLL1EtMissParticlecOedmcLcLrefhelpercLcLFindUsingAdvancelEvectorlEl1extracLcLL1EtMissParticlegRcOl1extracLcLL1EtMissParticlegRsPgRsPgR_Dictionary, isa_proxy, 4,
                  sizeof(vector<edm::Ref<vector<l1extra::L1EtMissParticle>,l1extra::L1EtMissParticle,edm::refhelper::FindUsingAdvance<vector<l1extra::L1EtMissParticle>,l1extra::L1EtMissParticle> > >) );
      instance.SetNew(&new_vectorlEedmcLcLReflEvectorlEl1extracLcLL1EtMissParticlegRcOl1extracLcLL1EtMissParticlecOedmcLcLrefhelpercLcLFindUsingAdvancelEvectorlEl1extracLcLL1EtMissParticlegRcOl1extracLcLL1EtMissParticlegRsPgRsPgR);
      instance.SetNewArray(&newArray_vectorlEedmcLcLReflEvectorlEl1extracLcLL1EtMissParticlegRcOl1extracLcLL1EtMissParticlecOedmcLcLrefhelpercLcLFindUsingAdvancelEvectorlEl1extracLcLL1EtMissParticlegRcOl1extracLcLL1EtMissParticlegRsPgRsPgR);
      instance.SetDelete(&delete_vectorlEedmcLcLReflEvectorlEl1extracLcLL1EtMissParticlegRcOl1extracLcLL1EtMissParticlecOedmcLcLrefhelpercLcLFindUsingAdvancelEvectorlEl1extracLcLL1EtMissParticlegRcOl1extracLcLL1EtMissParticlegRsPgRsPgR);
      instance.SetDeleteArray(&deleteArray_vectorlEedmcLcLReflEvectorlEl1extracLcLL1EtMissParticlegRcOl1extracLcLL1EtMissParticlecOedmcLcLrefhelpercLcLFindUsingAdvancelEvectorlEl1extracLcLL1EtMissParticlegRcOl1extracLcLL1EtMissParticlegRsPgRsPgR);
      instance.SetDestructor(&destruct_vectorlEedmcLcLReflEvectorlEl1extracLcLL1EtMissParticlegRcOl1extracLcLL1EtMissParticlecOedmcLcLrefhelpercLcLFindUsingAdvancelEvectorlEl1extracLcLL1EtMissParticlegRcOl1extracLcLL1EtMissParticlegRsPgRsPgR);
      instance.AdoptCollectionProxyInfo(TCollectionProxyInfo::Generate(TCollectionProxyInfo::Pushback< vector<edm::Ref<vector<l1extra::L1EtMissParticle>,l1extra::L1EtMissParticle,edm::refhelper::FindUsingAdvance<vector<l1extra::L1EtMissParticle>,l1extra::L1EtMissParticle> > > >()));
      return &instance;
   }
   // Static variable to force the class initialization
   static ::ROOT::TGenericClassInfo *_R__UNIQUE_(Init) = GenerateInitInstanceLocal((const vector<edm::Ref<vector<l1extra::L1EtMissParticle>,l1extra::L1EtMissParticle,edm::refhelper::FindUsingAdvance<vector<l1extra::L1EtMissParticle>,l1extra::L1EtMissParticle> > >*)0x0); R__UseDummy(_R__UNIQUE_(Init));

   // Dictionary for non-ClassDef classes
   static TClass *vectorlEedmcLcLReflEvectorlEl1extracLcLL1EtMissParticlegRcOl1extracLcLL1EtMissParticlecOedmcLcLrefhelpercLcLFindUsingAdvancelEvectorlEl1extracLcLL1EtMissParticlegRcOl1extracLcLL1EtMissParticlegRsPgRsPgR_Dictionary() {
      TClass* theClass =::ROOT::GenerateInitInstanceLocal((const vector<edm::Ref<vector<l1extra::L1EtMissParticle>,l1extra::L1EtMissParticle,edm::refhelper::FindUsingAdvance<vector<l1extra::L1EtMissParticle>,l1extra::L1EtMissParticle> > >*)0x0)->GetClass();
      vectorlEedmcLcLReflEvectorlEl1extracLcLL1EtMissParticlegRcOl1extracLcLL1EtMissParticlecOedmcLcLrefhelpercLcLFindUsingAdvancelEvectorlEl1extracLcLL1EtMissParticlegRcOl1extracLcLL1EtMissParticlegRsPgRsPgR_TClassManip(theClass);
   return theClass;
   }

   static void vectorlEedmcLcLReflEvectorlEl1extracLcLL1EtMissParticlegRcOl1extracLcLL1EtMissParticlecOedmcLcLrefhelpercLcLFindUsingAdvancelEvectorlEl1extracLcLL1EtMissParticlegRcOl1extracLcLL1EtMissParticlegRsPgRsPgR_TClassManip(TClass* ){
   }

} // end of namespace ROOT

namespace ROOT {
   // Wrappers around operator new
   static void *new_vectorlEedmcLcLReflEvectorlEl1extracLcLL1EtMissParticlegRcOl1extracLcLL1EtMissParticlecOedmcLcLrefhelpercLcLFindUsingAdvancelEvectorlEl1extracLcLL1EtMissParticlegRcOl1extracLcLL1EtMissParticlegRsPgRsPgR(void *p) {
      return  p ? ::new((::ROOT::Internal::TOperatorNewHelper*)p) vector<edm::Ref<vector<l1extra::L1EtMissParticle>,l1extra::L1EtMissParticle,edm::refhelper::FindUsingAdvance<vector<l1extra::L1EtMissParticle>,l1extra::L1EtMissParticle> > > : new vector<edm::Ref<vector<l1extra::L1EtMissParticle>,l1extra::L1EtMissParticle,edm::refhelper::FindUsingAdvance<vector<l1extra::L1EtMissParticle>,l1extra::L1EtMissParticle> > >;
   }
   static void *newArray_vectorlEedmcLcLReflEvectorlEl1extracLcLL1EtMissParticlegRcOl1extracLcLL1EtMissParticlecOedmcLcLrefhelpercLcLFindUsingAdvancelEvectorlEl1extracLcLL1EtMissParticlegRcOl1extracLcLL1EtMissParticlegRsPgRsPgR(Long_t nElements, void *p) {
      return p ? ::new((::ROOT::Internal::TOperatorNewHelper*)p) vector<edm::Ref<vector<l1extra::L1EtMissParticle>,l1extra::L1EtMissParticle,edm::refhelper::FindUsingAdvance<vector<l1extra::L1EtMissParticle>,l1extra::L1EtMissParticle> > >[nElements] : new vector<edm::Ref<vector<l1extra::L1EtMissParticle>,l1extra::L1EtMissParticle,edm::refhelper::FindUsingAdvance<vector<l1extra::L1EtMissParticle>,l1extra::L1EtMissParticle> > >[nElements];
   }
   // Wrapper around operator delete
   static void delete_vectorlEedmcLcLReflEvectorlEl1extracLcLL1EtMissParticlegRcOl1extracLcLL1EtMissParticlecOedmcLcLrefhelpercLcLFindUsingAdvancelEvectorlEl1extracLcLL1EtMissParticlegRcOl1extracLcLL1EtMissParticlegRsPgRsPgR(void *p) {
      delete ((vector<edm::Ref<vector<l1extra::L1EtMissParticle>,l1extra::L1EtMissParticle,edm::refhelper::FindUsingAdvance<vector<l1extra::L1EtMissParticle>,l1extra::L1EtMissParticle> > >*)p);
   }
   static void deleteArray_vectorlEedmcLcLReflEvectorlEl1extracLcLL1EtMissParticlegRcOl1extracLcLL1EtMissParticlecOedmcLcLrefhelpercLcLFindUsingAdvancelEvectorlEl1extracLcLL1EtMissParticlegRcOl1extracLcLL1EtMissParticlegRsPgRsPgR(void *p) {
      delete [] ((vector<edm::Ref<vector<l1extra::L1EtMissParticle>,l1extra::L1EtMissParticle,edm::refhelper::FindUsingAdvance<vector<l1extra::L1EtMissParticle>,l1extra::L1EtMissParticle> > >*)p);
   }
   static void destruct_vectorlEedmcLcLReflEvectorlEl1extracLcLL1EtMissParticlegRcOl1extracLcLL1EtMissParticlecOedmcLcLrefhelpercLcLFindUsingAdvancelEvectorlEl1extracLcLL1EtMissParticlegRcOl1extracLcLL1EtMissParticlegRsPgRsPgR(void *p) {
      typedef vector<edm::Ref<vector<l1extra::L1EtMissParticle>,l1extra::L1EtMissParticle,edm::refhelper::FindUsingAdvance<vector<l1extra::L1EtMissParticle>,l1extra::L1EtMissParticle> > > current_t;
      ((current_t*)p)->~current_t();
   }
} // end of namespace ROOT for class vector<edm::Ref<vector<l1extra::L1EtMissParticle>,l1extra::L1EtMissParticle,edm::refhelper::FindUsingAdvance<vector<l1extra::L1EtMissParticle>,l1extra::L1EtMissParticle> > >

namespace ROOT {
   static TClass *vectorlEedmcLcLReflEvectorlEl1extracLcLL1EmParticlegRcOl1extracLcLL1EmParticlecOedmcLcLrefhelpercLcLFindUsingAdvancelEvectorlEl1extracLcLL1EmParticlegRcOl1extracLcLL1EmParticlegRsPgRsPgR_Dictionary();
   static void vectorlEedmcLcLReflEvectorlEl1extracLcLL1EmParticlegRcOl1extracLcLL1EmParticlecOedmcLcLrefhelpercLcLFindUsingAdvancelEvectorlEl1extracLcLL1EmParticlegRcOl1extracLcLL1EmParticlegRsPgRsPgR_TClassManip(TClass*);
   static void *new_vectorlEedmcLcLReflEvectorlEl1extracLcLL1EmParticlegRcOl1extracLcLL1EmParticlecOedmcLcLrefhelpercLcLFindUsingAdvancelEvectorlEl1extracLcLL1EmParticlegRcOl1extracLcLL1EmParticlegRsPgRsPgR(void *p = 0);
   static void *newArray_vectorlEedmcLcLReflEvectorlEl1extracLcLL1EmParticlegRcOl1extracLcLL1EmParticlecOedmcLcLrefhelpercLcLFindUsingAdvancelEvectorlEl1extracLcLL1EmParticlegRcOl1extracLcLL1EmParticlegRsPgRsPgR(Long_t size, void *p);
   static void delete_vectorlEedmcLcLReflEvectorlEl1extracLcLL1EmParticlegRcOl1extracLcLL1EmParticlecOedmcLcLrefhelpercLcLFindUsingAdvancelEvectorlEl1extracLcLL1EmParticlegRcOl1extracLcLL1EmParticlegRsPgRsPgR(void *p);
   static void deleteArray_vectorlEedmcLcLReflEvectorlEl1extracLcLL1EmParticlegRcOl1extracLcLL1EmParticlecOedmcLcLrefhelpercLcLFindUsingAdvancelEvectorlEl1extracLcLL1EmParticlegRcOl1extracLcLL1EmParticlegRsPgRsPgR(void *p);
   static void destruct_vectorlEedmcLcLReflEvectorlEl1extracLcLL1EmParticlegRcOl1extracLcLL1EmParticlecOedmcLcLrefhelpercLcLFindUsingAdvancelEvectorlEl1extracLcLL1EmParticlegRcOl1extracLcLL1EmParticlegRsPgRsPgR(void *p);

   // Function generating the singleton type initializer
   static TGenericClassInfo *GenerateInitInstanceLocal(const vector<edm::Ref<vector<l1extra::L1EmParticle>,l1extra::L1EmParticle,edm::refhelper::FindUsingAdvance<vector<l1extra::L1EmParticle>,l1extra::L1EmParticle> > >*)
   {
      vector<edm::Ref<vector<l1extra::L1EmParticle>,l1extra::L1EmParticle,edm::refhelper::FindUsingAdvance<vector<l1extra::L1EmParticle>,l1extra::L1EmParticle> > > *ptr = 0;
      static ::TVirtualIsAProxy* isa_proxy = new ::TIsAProxy(typeid(vector<edm::Ref<vector<l1extra::L1EmParticle>,l1extra::L1EmParticle,edm::refhelper::FindUsingAdvance<vector<l1extra::L1EmParticle>,l1extra::L1EmParticle> > >));
      static ::ROOT::TGenericClassInfo 
         instance("vector<edm::Ref<vector<l1extra::L1EmParticle>,l1extra::L1EmParticle,edm::refhelper::FindUsingAdvance<vector<l1extra::L1EmParticle>,l1extra::L1EmParticle> > >", -2, "vector", 214,
                  typeid(vector<edm::Ref<vector<l1extra::L1EmParticle>,l1extra::L1EmParticle,edm::refhelper::FindUsingAdvance<vector<l1extra::L1EmParticle>,l1extra::L1EmParticle> > >), ::ROOT::Internal::DefineBehavior(ptr, ptr),
                  &vectorlEedmcLcLReflEvectorlEl1extracLcLL1EmParticlegRcOl1extracLcLL1EmParticlecOedmcLcLrefhelpercLcLFindUsingAdvancelEvectorlEl1extracLcLL1EmParticlegRcOl1extracLcLL1EmParticlegRsPgRsPgR_Dictionary, isa_proxy, 4,
                  sizeof(vector<edm::Ref<vector<l1extra::L1EmParticle>,l1extra::L1EmParticle,edm::refhelper::FindUsingAdvance<vector<l1extra::L1EmParticle>,l1extra::L1EmParticle> > >) );
      instance.SetNew(&new_vectorlEedmcLcLReflEvectorlEl1extracLcLL1EmParticlegRcOl1extracLcLL1EmParticlecOedmcLcLrefhelpercLcLFindUsingAdvancelEvectorlEl1extracLcLL1EmParticlegRcOl1extracLcLL1EmParticlegRsPgRsPgR);
      instance.SetNewArray(&newArray_vectorlEedmcLcLReflEvectorlEl1extracLcLL1EmParticlegRcOl1extracLcLL1EmParticlecOedmcLcLrefhelpercLcLFindUsingAdvancelEvectorlEl1extracLcLL1EmParticlegRcOl1extracLcLL1EmParticlegRsPgRsPgR);
      instance.SetDelete(&delete_vectorlEedmcLcLReflEvectorlEl1extracLcLL1EmParticlegRcOl1extracLcLL1EmParticlecOedmcLcLrefhelpercLcLFindUsingAdvancelEvectorlEl1extracLcLL1EmParticlegRcOl1extracLcLL1EmParticlegRsPgRsPgR);
      instance.SetDeleteArray(&deleteArray_vectorlEedmcLcLReflEvectorlEl1extracLcLL1EmParticlegRcOl1extracLcLL1EmParticlecOedmcLcLrefhelpercLcLFindUsingAdvancelEvectorlEl1extracLcLL1EmParticlegRcOl1extracLcLL1EmParticlegRsPgRsPgR);
      instance.SetDestructor(&destruct_vectorlEedmcLcLReflEvectorlEl1extracLcLL1EmParticlegRcOl1extracLcLL1EmParticlecOedmcLcLrefhelpercLcLFindUsingAdvancelEvectorlEl1extracLcLL1EmParticlegRcOl1extracLcLL1EmParticlegRsPgRsPgR);
      instance.AdoptCollectionProxyInfo(TCollectionProxyInfo::Generate(TCollectionProxyInfo::Pushback< vector<edm::Ref<vector<l1extra::L1EmParticle>,l1extra::L1EmParticle,edm::refhelper::FindUsingAdvance<vector<l1extra::L1EmParticle>,l1extra::L1EmParticle> > > >()));
      return &instance;
   }
   // Static variable to force the class initialization
   static ::ROOT::TGenericClassInfo *_R__UNIQUE_(Init) = GenerateInitInstanceLocal((const vector<edm::Ref<vector<l1extra::L1EmParticle>,l1extra::L1EmParticle,edm::refhelper::FindUsingAdvance<vector<l1extra::L1EmParticle>,l1extra::L1EmParticle> > >*)0x0); R__UseDummy(_R__UNIQUE_(Init));

   // Dictionary for non-ClassDef classes
   static TClass *vectorlEedmcLcLReflEvectorlEl1extracLcLL1EmParticlegRcOl1extracLcLL1EmParticlecOedmcLcLrefhelpercLcLFindUsingAdvancelEvectorlEl1extracLcLL1EmParticlegRcOl1extracLcLL1EmParticlegRsPgRsPgR_Dictionary() {
      TClass* theClass =::ROOT::GenerateInitInstanceLocal((const vector<edm::Ref<vector<l1extra::L1EmParticle>,l1extra::L1EmParticle,edm::refhelper::FindUsingAdvance<vector<l1extra::L1EmParticle>,l1extra::L1EmParticle> > >*)0x0)->GetClass();
      vectorlEedmcLcLReflEvectorlEl1extracLcLL1EmParticlegRcOl1extracLcLL1EmParticlecOedmcLcLrefhelpercLcLFindUsingAdvancelEvectorlEl1extracLcLL1EmParticlegRcOl1extracLcLL1EmParticlegRsPgRsPgR_TClassManip(theClass);
   return theClass;
   }

   static void vectorlEedmcLcLReflEvectorlEl1extracLcLL1EmParticlegRcOl1extracLcLL1EmParticlecOedmcLcLrefhelpercLcLFindUsingAdvancelEvectorlEl1extracLcLL1EmParticlegRcOl1extracLcLL1EmParticlegRsPgRsPgR_TClassManip(TClass* ){
   }

} // end of namespace ROOT

namespace ROOT {
   // Wrappers around operator new
   static void *new_vectorlEedmcLcLReflEvectorlEl1extracLcLL1EmParticlegRcOl1extracLcLL1EmParticlecOedmcLcLrefhelpercLcLFindUsingAdvancelEvectorlEl1extracLcLL1EmParticlegRcOl1extracLcLL1EmParticlegRsPgRsPgR(void *p) {
      return  p ? ::new((::ROOT::Internal::TOperatorNewHelper*)p) vector<edm::Ref<vector<l1extra::L1EmParticle>,l1extra::L1EmParticle,edm::refhelper::FindUsingAdvance<vector<l1extra::L1EmParticle>,l1extra::L1EmParticle> > > : new vector<edm::Ref<vector<l1extra::L1EmParticle>,l1extra::L1EmParticle,edm::refhelper::FindUsingAdvance<vector<l1extra::L1EmParticle>,l1extra::L1EmParticle> > >;
   }
   static void *newArray_vectorlEedmcLcLReflEvectorlEl1extracLcLL1EmParticlegRcOl1extracLcLL1EmParticlecOedmcLcLrefhelpercLcLFindUsingAdvancelEvectorlEl1extracLcLL1EmParticlegRcOl1extracLcLL1EmParticlegRsPgRsPgR(Long_t nElements, void *p) {
      return p ? ::new((::ROOT::Internal::TOperatorNewHelper*)p) vector<edm::Ref<vector<l1extra::L1EmParticle>,l1extra::L1EmParticle,edm::refhelper::FindUsingAdvance<vector<l1extra::L1EmParticle>,l1extra::L1EmParticle> > >[nElements] : new vector<edm::Ref<vector<l1extra::L1EmParticle>,l1extra::L1EmParticle,edm::refhelper::FindUsingAdvance<vector<l1extra::L1EmParticle>,l1extra::L1EmParticle> > >[nElements];
   }
   // Wrapper around operator delete
   static void delete_vectorlEedmcLcLReflEvectorlEl1extracLcLL1EmParticlegRcOl1extracLcLL1EmParticlecOedmcLcLrefhelpercLcLFindUsingAdvancelEvectorlEl1extracLcLL1EmParticlegRcOl1extracLcLL1EmParticlegRsPgRsPgR(void *p) {
      delete ((vector<edm::Ref<vector<l1extra::L1EmParticle>,l1extra::L1EmParticle,edm::refhelper::FindUsingAdvance<vector<l1extra::L1EmParticle>,l1extra::L1EmParticle> > >*)p);
   }
   static void deleteArray_vectorlEedmcLcLReflEvectorlEl1extracLcLL1EmParticlegRcOl1extracLcLL1EmParticlecOedmcLcLrefhelpercLcLFindUsingAdvancelEvectorlEl1extracLcLL1EmParticlegRcOl1extracLcLL1EmParticlegRsPgRsPgR(void *p) {
      delete [] ((vector<edm::Ref<vector<l1extra::L1EmParticle>,l1extra::L1EmParticle,edm::refhelper::FindUsingAdvance<vector<l1extra::L1EmParticle>,l1extra::L1EmParticle> > >*)p);
   }
   static void destruct_vectorlEedmcLcLReflEvectorlEl1extracLcLL1EmParticlegRcOl1extracLcLL1EmParticlecOedmcLcLrefhelpercLcLFindUsingAdvancelEvectorlEl1extracLcLL1EmParticlegRcOl1extracLcLL1EmParticlegRsPgRsPgR(void *p) {
      typedef vector<edm::Ref<vector<l1extra::L1EmParticle>,l1extra::L1EmParticle,edm::refhelper::FindUsingAdvance<vector<l1extra::L1EmParticle>,l1extra::L1EmParticle> > > current_t;
      ((current_t*)p)->~current_t();
   }
} // end of namespace ROOT for class vector<edm::Ref<vector<l1extra::L1EmParticle>,l1extra::L1EmParticle,edm::refhelper::FindUsingAdvance<vector<l1extra::L1EmParticle>,l1extra::L1EmParticle> > >

namespace ROOT {
   static TClass *vectorlEedmcLcLReflEBXVectorlEl1tcLcLTaugRcOl1tcLcLTaucOedmcLcLrefhelpercLcLFindUsingAdvancelEBXVectorlEl1tcLcLTaugRcOl1tcLcLTaugRsPgRsPgR_Dictionary();
   static void vectorlEedmcLcLReflEBXVectorlEl1tcLcLTaugRcOl1tcLcLTaucOedmcLcLrefhelpercLcLFindUsingAdvancelEBXVectorlEl1tcLcLTaugRcOl1tcLcLTaugRsPgRsPgR_TClassManip(TClass*);
   static void *new_vectorlEedmcLcLReflEBXVectorlEl1tcLcLTaugRcOl1tcLcLTaucOedmcLcLrefhelpercLcLFindUsingAdvancelEBXVectorlEl1tcLcLTaugRcOl1tcLcLTaugRsPgRsPgR(void *p = 0);
   static void *newArray_vectorlEedmcLcLReflEBXVectorlEl1tcLcLTaugRcOl1tcLcLTaucOedmcLcLrefhelpercLcLFindUsingAdvancelEBXVectorlEl1tcLcLTaugRcOl1tcLcLTaugRsPgRsPgR(Long_t size, void *p);
   static void delete_vectorlEedmcLcLReflEBXVectorlEl1tcLcLTaugRcOl1tcLcLTaucOedmcLcLrefhelpercLcLFindUsingAdvancelEBXVectorlEl1tcLcLTaugRcOl1tcLcLTaugRsPgRsPgR(void *p);
   static void deleteArray_vectorlEedmcLcLReflEBXVectorlEl1tcLcLTaugRcOl1tcLcLTaucOedmcLcLrefhelpercLcLFindUsingAdvancelEBXVectorlEl1tcLcLTaugRcOl1tcLcLTaugRsPgRsPgR(void *p);
   static void destruct_vectorlEedmcLcLReflEBXVectorlEl1tcLcLTaugRcOl1tcLcLTaucOedmcLcLrefhelpercLcLFindUsingAdvancelEBXVectorlEl1tcLcLTaugRcOl1tcLcLTaugRsPgRsPgR(void *p);

   // Function generating the singleton type initializer
   static TGenericClassInfo *GenerateInitInstanceLocal(const vector<edm::Ref<BXVector<l1t::Tau>,l1t::Tau,edm::refhelper::FindUsingAdvance<BXVector<l1t::Tau>,l1t::Tau> > >*)
   {
      vector<edm::Ref<BXVector<l1t::Tau>,l1t::Tau,edm::refhelper::FindUsingAdvance<BXVector<l1t::Tau>,l1t::Tau> > > *ptr = 0;
      static ::TVirtualIsAProxy* isa_proxy = new ::TIsAProxy(typeid(vector<edm::Ref<BXVector<l1t::Tau>,l1t::Tau,edm::refhelper::FindUsingAdvance<BXVector<l1t::Tau>,l1t::Tau> > >));
      static ::ROOT::TGenericClassInfo 
         instance("vector<edm::Ref<BXVector<l1t::Tau>,l1t::Tau,edm::refhelper::FindUsingAdvance<BXVector<l1t::Tau>,l1t::Tau> > >", -2, "vector", 214,
                  typeid(vector<edm::Ref<BXVector<l1t::Tau>,l1t::Tau,edm::refhelper::FindUsingAdvance<BXVector<l1t::Tau>,l1t::Tau> > >), ::ROOT::Internal::DefineBehavior(ptr, ptr),
                  &vectorlEedmcLcLReflEBXVectorlEl1tcLcLTaugRcOl1tcLcLTaucOedmcLcLrefhelpercLcLFindUsingAdvancelEBXVectorlEl1tcLcLTaugRcOl1tcLcLTaugRsPgRsPgR_Dictionary, isa_proxy, 4,
                  sizeof(vector<edm::Ref<BXVector<l1t::Tau>,l1t::Tau,edm::refhelper::FindUsingAdvance<BXVector<l1t::Tau>,l1t::Tau> > >) );
      instance.SetNew(&new_vectorlEedmcLcLReflEBXVectorlEl1tcLcLTaugRcOl1tcLcLTaucOedmcLcLrefhelpercLcLFindUsingAdvancelEBXVectorlEl1tcLcLTaugRcOl1tcLcLTaugRsPgRsPgR);
      instance.SetNewArray(&newArray_vectorlEedmcLcLReflEBXVectorlEl1tcLcLTaugRcOl1tcLcLTaucOedmcLcLrefhelpercLcLFindUsingAdvancelEBXVectorlEl1tcLcLTaugRcOl1tcLcLTaugRsPgRsPgR);
      instance.SetDelete(&delete_vectorlEedmcLcLReflEBXVectorlEl1tcLcLTaugRcOl1tcLcLTaucOedmcLcLrefhelpercLcLFindUsingAdvancelEBXVectorlEl1tcLcLTaugRcOl1tcLcLTaugRsPgRsPgR);
      instance.SetDeleteArray(&deleteArray_vectorlEedmcLcLReflEBXVectorlEl1tcLcLTaugRcOl1tcLcLTaucOedmcLcLrefhelpercLcLFindUsingAdvancelEBXVectorlEl1tcLcLTaugRcOl1tcLcLTaugRsPgRsPgR);
      instance.SetDestructor(&destruct_vectorlEedmcLcLReflEBXVectorlEl1tcLcLTaugRcOl1tcLcLTaucOedmcLcLrefhelpercLcLFindUsingAdvancelEBXVectorlEl1tcLcLTaugRcOl1tcLcLTaugRsPgRsPgR);
      instance.AdoptCollectionProxyInfo(TCollectionProxyInfo::Generate(TCollectionProxyInfo::Pushback< vector<edm::Ref<BXVector<l1t::Tau>,l1t::Tau,edm::refhelper::FindUsingAdvance<BXVector<l1t::Tau>,l1t::Tau> > > >()));
      return &instance;
   }
   // Static variable to force the class initialization
   static ::ROOT::TGenericClassInfo *_R__UNIQUE_(Init) = GenerateInitInstanceLocal((const vector<edm::Ref<BXVector<l1t::Tau>,l1t::Tau,edm::refhelper::FindUsingAdvance<BXVector<l1t::Tau>,l1t::Tau> > >*)0x0); R__UseDummy(_R__UNIQUE_(Init));

   // Dictionary for non-ClassDef classes
   static TClass *vectorlEedmcLcLReflEBXVectorlEl1tcLcLTaugRcOl1tcLcLTaucOedmcLcLrefhelpercLcLFindUsingAdvancelEBXVectorlEl1tcLcLTaugRcOl1tcLcLTaugRsPgRsPgR_Dictionary() {
      TClass* theClass =::ROOT::GenerateInitInstanceLocal((const vector<edm::Ref<BXVector<l1t::Tau>,l1t::Tau,edm::refhelper::FindUsingAdvance<BXVector<l1t::Tau>,l1t::Tau> > >*)0x0)->GetClass();
      vectorlEedmcLcLReflEBXVectorlEl1tcLcLTaugRcOl1tcLcLTaucOedmcLcLrefhelpercLcLFindUsingAdvancelEBXVectorlEl1tcLcLTaugRcOl1tcLcLTaugRsPgRsPgR_TClassManip(theClass);
   return theClass;
   }

   static void vectorlEedmcLcLReflEBXVectorlEl1tcLcLTaugRcOl1tcLcLTaucOedmcLcLrefhelpercLcLFindUsingAdvancelEBXVectorlEl1tcLcLTaugRcOl1tcLcLTaugRsPgRsPgR_TClassManip(TClass* ){
   }

} // end of namespace ROOT

namespace ROOT {
   // Wrappers around operator new
   static void *new_vectorlEedmcLcLReflEBXVectorlEl1tcLcLTaugRcOl1tcLcLTaucOedmcLcLrefhelpercLcLFindUsingAdvancelEBXVectorlEl1tcLcLTaugRcOl1tcLcLTaugRsPgRsPgR(void *p) {
      return  p ? ::new((::ROOT::Internal::TOperatorNewHelper*)p) vector<edm::Ref<BXVector<l1t::Tau>,l1t::Tau,edm::refhelper::FindUsingAdvance<BXVector<l1t::Tau>,l1t::Tau> > > : new vector<edm::Ref<BXVector<l1t::Tau>,l1t::Tau,edm::refhelper::FindUsingAdvance<BXVector<l1t::Tau>,l1t::Tau> > >;
   }
   static void *newArray_vectorlEedmcLcLReflEBXVectorlEl1tcLcLTaugRcOl1tcLcLTaucOedmcLcLrefhelpercLcLFindUsingAdvancelEBXVectorlEl1tcLcLTaugRcOl1tcLcLTaugRsPgRsPgR(Long_t nElements, void *p) {
      return p ? ::new((::ROOT::Internal::TOperatorNewHelper*)p) vector<edm::Ref<BXVector<l1t::Tau>,l1t::Tau,edm::refhelper::FindUsingAdvance<BXVector<l1t::Tau>,l1t::Tau> > >[nElements] : new vector<edm::Ref<BXVector<l1t::Tau>,l1t::Tau,edm::refhelper::FindUsingAdvance<BXVector<l1t::Tau>,l1t::Tau> > >[nElements];
   }
   // Wrapper around operator delete
   static void delete_vectorlEedmcLcLReflEBXVectorlEl1tcLcLTaugRcOl1tcLcLTaucOedmcLcLrefhelpercLcLFindUsingAdvancelEBXVectorlEl1tcLcLTaugRcOl1tcLcLTaugRsPgRsPgR(void *p) {
      delete ((vector<edm::Ref<BXVector<l1t::Tau>,l1t::Tau,edm::refhelper::FindUsingAdvance<BXVector<l1t::Tau>,l1t::Tau> > >*)p);
   }
   static void deleteArray_vectorlEedmcLcLReflEBXVectorlEl1tcLcLTaugRcOl1tcLcLTaucOedmcLcLrefhelpercLcLFindUsingAdvancelEBXVectorlEl1tcLcLTaugRcOl1tcLcLTaugRsPgRsPgR(void *p) {
      delete [] ((vector<edm::Ref<BXVector<l1t::Tau>,l1t::Tau,edm::refhelper::FindUsingAdvance<BXVector<l1t::Tau>,l1t::Tau> > >*)p);
   }
   static void destruct_vectorlEedmcLcLReflEBXVectorlEl1tcLcLTaugRcOl1tcLcLTaucOedmcLcLrefhelpercLcLFindUsingAdvancelEBXVectorlEl1tcLcLTaugRcOl1tcLcLTaugRsPgRsPgR(void *p) {
      typedef vector<edm::Ref<BXVector<l1t::Tau>,l1t::Tau,edm::refhelper::FindUsingAdvance<BXVector<l1t::Tau>,l1t::Tau> > > current_t;
      ((current_t*)p)->~current_t();
   }
} // end of namespace ROOT for class vector<edm::Ref<BXVector<l1t::Tau>,l1t::Tau,edm::refhelper::FindUsingAdvance<BXVector<l1t::Tau>,l1t::Tau> > >

namespace ROOT {
   static TClass *vectorlEedmcLcLReflEBXVectorlEl1tcLcLMuongRcOl1tcLcLMuoncOedmcLcLrefhelpercLcLFindUsingAdvancelEBXVectorlEl1tcLcLMuongRcOl1tcLcLMuongRsPgRsPgR_Dictionary();
   static void vectorlEedmcLcLReflEBXVectorlEl1tcLcLMuongRcOl1tcLcLMuoncOedmcLcLrefhelpercLcLFindUsingAdvancelEBXVectorlEl1tcLcLMuongRcOl1tcLcLMuongRsPgRsPgR_TClassManip(TClass*);
   static void *new_vectorlEedmcLcLReflEBXVectorlEl1tcLcLMuongRcOl1tcLcLMuoncOedmcLcLrefhelpercLcLFindUsingAdvancelEBXVectorlEl1tcLcLMuongRcOl1tcLcLMuongRsPgRsPgR(void *p = 0);
   static void *newArray_vectorlEedmcLcLReflEBXVectorlEl1tcLcLMuongRcOl1tcLcLMuoncOedmcLcLrefhelpercLcLFindUsingAdvancelEBXVectorlEl1tcLcLMuongRcOl1tcLcLMuongRsPgRsPgR(Long_t size, void *p);
   static void delete_vectorlEedmcLcLReflEBXVectorlEl1tcLcLMuongRcOl1tcLcLMuoncOedmcLcLrefhelpercLcLFindUsingAdvancelEBXVectorlEl1tcLcLMuongRcOl1tcLcLMuongRsPgRsPgR(void *p);
   static void deleteArray_vectorlEedmcLcLReflEBXVectorlEl1tcLcLMuongRcOl1tcLcLMuoncOedmcLcLrefhelpercLcLFindUsingAdvancelEBXVectorlEl1tcLcLMuongRcOl1tcLcLMuongRsPgRsPgR(void *p);
   static void destruct_vectorlEedmcLcLReflEBXVectorlEl1tcLcLMuongRcOl1tcLcLMuoncOedmcLcLrefhelpercLcLFindUsingAdvancelEBXVectorlEl1tcLcLMuongRcOl1tcLcLMuongRsPgRsPgR(void *p);

   // Function generating the singleton type initializer
   static TGenericClassInfo *GenerateInitInstanceLocal(const vector<edm::Ref<BXVector<l1t::Muon>,l1t::Muon,edm::refhelper::FindUsingAdvance<BXVector<l1t::Muon>,l1t::Muon> > >*)
   {
      vector<edm::Ref<BXVector<l1t::Muon>,l1t::Muon,edm::refhelper::FindUsingAdvance<BXVector<l1t::Muon>,l1t::Muon> > > *ptr = 0;
      static ::TVirtualIsAProxy* isa_proxy = new ::TIsAProxy(typeid(vector<edm::Ref<BXVector<l1t::Muon>,l1t::Muon,edm::refhelper::FindUsingAdvance<BXVector<l1t::Muon>,l1t::Muon> > >));
      static ::ROOT::TGenericClassInfo 
         instance("vector<edm::Ref<BXVector<l1t::Muon>,l1t::Muon,edm::refhelper::FindUsingAdvance<BXVector<l1t::Muon>,l1t::Muon> > >", -2, "vector", 214,
                  typeid(vector<edm::Ref<BXVector<l1t::Muon>,l1t::Muon,edm::refhelper::FindUsingAdvance<BXVector<l1t::Muon>,l1t::Muon> > >), ::ROOT::Internal::DefineBehavior(ptr, ptr),
                  &vectorlEedmcLcLReflEBXVectorlEl1tcLcLMuongRcOl1tcLcLMuoncOedmcLcLrefhelpercLcLFindUsingAdvancelEBXVectorlEl1tcLcLMuongRcOl1tcLcLMuongRsPgRsPgR_Dictionary, isa_proxy, 4,
                  sizeof(vector<edm::Ref<BXVector<l1t::Muon>,l1t::Muon,edm::refhelper::FindUsingAdvance<BXVector<l1t::Muon>,l1t::Muon> > >) );
      instance.SetNew(&new_vectorlEedmcLcLReflEBXVectorlEl1tcLcLMuongRcOl1tcLcLMuoncOedmcLcLrefhelpercLcLFindUsingAdvancelEBXVectorlEl1tcLcLMuongRcOl1tcLcLMuongRsPgRsPgR);
      instance.SetNewArray(&newArray_vectorlEedmcLcLReflEBXVectorlEl1tcLcLMuongRcOl1tcLcLMuoncOedmcLcLrefhelpercLcLFindUsingAdvancelEBXVectorlEl1tcLcLMuongRcOl1tcLcLMuongRsPgRsPgR);
      instance.SetDelete(&delete_vectorlEedmcLcLReflEBXVectorlEl1tcLcLMuongRcOl1tcLcLMuoncOedmcLcLrefhelpercLcLFindUsingAdvancelEBXVectorlEl1tcLcLMuongRcOl1tcLcLMuongRsPgRsPgR);
      instance.SetDeleteArray(&deleteArray_vectorlEedmcLcLReflEBXVectorlEl1tcLcLMuongRcOl1tcLcLMuoncOedmcLcLrefhelpercLcLFindUsingAdvancelEBXVectorlEl1tcLcLMuongRcOl1tcLcLMuongRsPgRsPgR);
      instance.SetDestructor(&destruct_vectorlEedmcLcLReflEBXVectorlEl1tcLcLMuongRcOl1tcLcLMuoncOedmcLcLrefhelpercLcLFindUsingAdvancelEBXVectorlEl1tcLcLMuongRcOl1tcLcLMuongRsPgRsPgR);
      instance.AdoptCollectionProxyInfo(TCollectionProxyInfo::Generate(TCollectionProxyInfo::Pushback< vector<edm::Ref<BXVector<l1t::Muon>,l1t::Muon,edm::refhelper::FindUsingAdvance<BXVector<l1t::Muon>,l1t::Muon> > > >()));
      return &instance;
   }
   // Static variable to force the class initialization
   static ::ROOT::TGenericClassInfo *_R__UNIQUE_(Init) = GenerateInitInstanceLocal((const vector<edm::Ref<BXVector<l1t::Muon>,l1t::Muon,edm::refhelper::FindUsingAdvance<BXVector<l1t::Muon>,l1t::Muon> > >*)0x0); R__UseDummy(_R__UNIQUE_(Init));

   // Dictionary for non-ClassDef classes
   static TClass *vectorlEedmcLcLReflEBXVectorlEl1tcLcLMuongRcOl1tcLcLMuoncOedmcLcLrefhelpercLcLFindUsingAdvancelEBXVectorlEl1tcLcLMuongRcOl1tcLcLMuongRsPgRsPgR_Dictionary() {
      TClass* theClass =::ROOT::GenerateInitInstanceLocal((const vector<edm::Ref<BXVector<l1t::Muon>,l1t::Muon,edm::refhelper::FindUsingAdvance<BXVector<l1t::Muon>,l1t::Muon> > >*)0x0)->GetClass();
      vectorlEedmcLcLReflEBXVectorlEl1tcLcLMuongRcOl1tcLcLMuoncOedmcLcLrefhelpercLcLFindUsingAdvancelEBXVectorlEl1tcLcLMuongRcOl1tcLcLMuongRsPgRsPgR_TClassManip(theClass);
   return theClass;
   }

   static void vectorlEedmcLcLReflEBXVectorlEl1tcLcLMuongRcOl1tcLcLMuoncOedmcLcLrefhelpercLcLFindUsingAdvancelEBXVectorlEl1tcLcLMuongRcOl1tcLcLMuongRsPgRsPgR_TClassManip(TClass* ){
   }

} // end of namespace ROOT

namespace ROOT {
   // Wrappers around operator new
   static void *new_vectorlEedmcLcLReflEBXVectorlEl1tcLcLMuongRcOl1tcLcLMuoncOedmcLcLrefhelpercLcLFindUsingAdvancelEBXVectorlEl1tcLcLMuongRcOl1tcLcLMuongRsPgRsPgR(void *p) {
      return  p ? ::new((::ROOT::Internal::TOperatorNewHelper*)p) vector<edm::Ref<BXVector<l1t::Muon>,l1t::Muon,edm::refhelper::FindUsingAdvance<BXVector<l1t::Muon>,l1t::Muon> > > : new vector<edm::Ref<BXVector<l1t::Muon>,l1t::Muon,edm::refhelper::FindUsingAdvance<BXVector<l1t::Muon>,l1t::Muon> > >;
   }
   static void *newArray_vectorlEedmcLcLReflEBXVectorlEl1tcLcLMuongRcOl1tcLcLMuoncOedmcLcLrefhelpercLcLFindUsingAdvancelEBXVectorlEl1tcLcLMuongRcOl1tcLcLMuongRsPgRsPgR(Long_t nElements, void *p) {
      return p ? ::new((::ROOT::Internal::TOperatorNewHelper*)p) vector<edm::Ref<BXVector<l1t::Muon>,l1t::Muon,edm::refhelper::FindUsingAdvance<BXVector<l1t::Muon>,l1t::Muon> > >[nElements] : new vector<edm::Ref<BXVector<l1t::Muon>,l1t::Muon,edm::refhelper::FindUsingAdvance<BXVector<l1t::Muon>,l1t::Muon> > >[nElements];
   }
   // Wrapper around operator delete
   static void delete_vectorlEedmcLcLReflEBXVectorlEl1tcLcLMuongRcOl1tcLcLMuoncOedmcLcLrefhelpercLcLFindUsingAdvancelEBXVectorlEl1tcLcLMuongRcOl1tcLcLMuongRsPgRsPgR(void *p) {
      delete ((vector<edm::Ref<BXVector<l1t::Muon>,l1t::Muon,edm::refhelper::FindUsingAdvance<BXVector<l1t::Muon>,l1t::Muon> > >*)p);
   }
   static void deleteArray_vectorlEedmcLcLReflEBXVectorlEl1tcLcLMuongRcOl1tcLcLMuoncOedmcLcLrefhelpercLcLFindUsingAdvancelEBXVectorlEl1tcLcLMuongRcOl1tcLcLMuongRsPgRsPgR(void *p) {
      delete [] ((vector<edm::Ref<BXVector<l1t::Muon>,l1t::Muon,edm::refhelper::FindUsingAdvance<BXVector<l1t::Muon>,l1t::Muon> > >*)p);
   }
   static void destruct_vectorlEedmcLcLReflEBXVectorlEl1tcLcLMuongRcOl1tcLcLMuoncOedmcLcLrefhelpercLcLFindUsingAdvancelEBXVectorlEl1tcLcLMuongRcOl1tcLcLMuongRsPgRsPgR(void *p) {
      typedef vector<edm::Ref<BXVector<l1t::Muon>,l1t::Muon,edm::refhelper::FindUsingAdvance<BXVector<l1t::Muon>,l1t::Muon> > > current_t;
      ((current_t*)p)->~current_t();
   }
} // end of namespace ROOT for class vector<edm::Ref<BXVector<l1t::Muon>,l1t::Muon,edm::refhelper::FindUsingAdvance<BXVector<l1t::Muon>,l1t::Muon> > >

namespace ROOT {
   static TClass *vectorlEedmcLcLReflEBXVectorlEl1tcLcLL1CandidategRcOl1tcLcLL1CandidatecOedmcLcLrefhelpercLcLFindUsingAdvancelEBXVectorlEl1tcLcLL1CandidategRcOl1tcLcLL1CandidategRsPgRsPgR_Dictionary();
   static void vectorlEedmcLcLReflEBXVectorlEl1tcLcLL1CandidategRcOl1tcLcLL1CandidatecOedmcLcLrefhelpercLcLFindUsingAdvancelEBXVectorlEl1tcLcLL1CandidategRcOl1tcLcLL1CandidategRsPgRsPgR_TClassManip(TClass*);
   static void *new_vectorlEedmcLcLReflEBXVectorlEl1tcLcLL1CandidategRcOl1tcLcLL1CandidatecOedmcLcLrefhelpercLcLFindUsingAdvancelEBXVectorlEl1tcLcLL1CandidategRcOl1tcLcLL1CandidategRsPgRsPgR(void *p = 0);
   static void *newArray_vectorlEedmcLcLReflEBXVectorlEl1tcLcLL1CandidategRcOl1tcLcLL1CandidatecOedmcLcLrefhelpercLcLFindUsingAdvancelEBXVectorlEl1tcLcLL1CandidategRcOl1tcLcLL1CandidategRsPgRsPgR(Long_t size, void *p);
   static void delete_vectorlEedmcLcLReflEBXVectorlEl1tcLcLL1CandidategRcOl1tcLcLL1CandidatecOedmcLcLrefhelpercLcLFindUsingAdvancelEBXVectorlEl1tcLcLL1CandidategRcOl1tcLcLL1CandidategRsPgRsPgR(void *p);
   static void deleteArray_vectorlEedmcLcLReflEBXVectorlEl1tcLcLL1CandidategRcOl1tcLcLL1CandidatecOedmcLcLrefhelpercLcLFindUsingAdvancelEBXVectorlEl1tcLcLL1CandidategRcOl1tcLcLL1CandidategRsPgRsPgR(void *p);
   static void destruct_vectorlEedmcLcLReflEBXVectorlEl1tcLcLL1CandidategRcOl1tcLcLL1CandidatecOedmcLcLrefhelpercLcLFindUsingAdvancelEBXVectorlEl1tcLcLL1CandidategRcOl1tcLcLL1CandidategRsPgRsPgR(void *p);

   // Function generating the singleton type initializer
   static TGenericClassInfo *GenerateInitInstanceLocal(const vector<edm::Ref<BXVector<l1t::L1Candidate>,l1t::L1Candidate,edm::refhelper::FindUsingAdvance<BXVector<l1t::L1Candidate>,l1t::L1Candidate> > >*)
   {
      vector<edm::Ref<BXVector<l1t::L1Candidate>,l1t::L1Candidate,edm::refhelper::FindUsingAdvance<BXVector<l1t::L1Candidate>,l1t::L1Candidate> > > *ptr = 0;
      static ::TVirtualIsAProxy* isa_proxy = new ::TIsAProxy(typeid(vector<edm::Ref<BXVector<l1t::L1Candidate>,l1t::L1Candidate,edm::refhelper::FindUsingAdvance<BXVector<l1t::L1Candidate>,l1t::L1Candidate> > >));
      static ::ROOT::TGenericClassInfo 
         instance("vector<edm::Ref<BXVector<l1t::L1Candidate>,l1t::L1Candidate,edm::refhelper::FindUsingAdvance<BXVector<l1t::L1Candidate>,l1t::L1Candidate> > >", -2, "vector", 214,
                  typeid(vector<edm::Ref<BXVector<l1t::L1Candidate>,l1t::L1Candidate,edm::refhelper::FindUsingAdvance<BXVector<l1t::L1Candidate>,l1t::L1Candidate> > >), ::ROOT::Internal::DefineBehavior(ptr, ptr),
                  &vectorlEedmcLcLReflEBXVectorlEl1tcLcLL1CandidategRcOl1tcLcLL1CandidatecOedmcLcLrefhelpercLcLFindUsingAdvancelEBXVectorlEl1tcLcLL1CandidategRcOl1tcLcLL1CandidategRsPgRsPgR_Dictionary, isa_proxy, 4,
                  sizeof(vector<edm::Ref<BXVector<l1t::L1Candidate>,l1t::L1Candidate,edm::refhelper::FindUsingAdvance<BXVector<l1t::L1Candidate>,l1t::L1Candidate> > >) );
      instance.SetNew(&new_vectorlEedmcLcLReflEBXVectorlEl1tcLcLL1CandidategRcOl1tcLcLL1CandidatecOedmcLcLrefhelpercLcLFindUsingAdvancelEBXVectorlEl1tcLcLL1CandidategRcOl1tcLcLL1CandidategRsPgRsPgR);
      instance.SetNewArray(&newArray_vectorlEedmcLcLReflEBXVectorlEl1tcLcLL1CandidategRcOl1tcLcLL1CandidatecOedmcLcLrefhelpercLcLFindUsingAdvancelEBXVectorlEl1tcLcLL1CandidategRcOl1tcLcLL1CandidategRsPgRsPgR);
      instance.SetDelete(&delete_vectorlEedmcLcLReflEBXVectorlEl1tcLcLL1CandidategRcOl1tcLcLL1CandidatecOedmcLcLrefhelpercLcLFindUsingAdvancelEBXVectorlEl1tcLcLL1CandidategRcOl1tcLcLL1CandidategRsPgRsPgR);
      instance.SetDeleteArray(&deleteArray_vectorlEedmcLcLReflEBXVectorlEl1tcLcLL1CandidategRcOl1tcLcLL1CandidatecOedmcLcLrefhelpercLcLFindUsingAdvancelEBXVectorlEl1tcLcLL1CandidategRcOl1tcLcLL1CandidategRsPgRsPgR);
      instance.SetDestructor(&destruct_vectorlEedmcLcLReflEBXVectorlEl1tcLcLL1CandidategRcOl1tcLcLL1CandidatecOedmcLcLrefhelpercLcLFindUsingAdvancelEBXVectorlEl1tcLcLL1CandidategRcOl1tcLcLL1CandidategRsPgRsPgR);
      instance.AdoptCollectionProxyInfo(TCollectionProxyInfo::Generate(TCollectionProxyInfo::Pushback< vector<edm::Ref<BXVector<l1t::L1Candidate>,l1t::L1Candidate,edm::refhelper::FindUsingAdvance<BXVector<l1t::L1Candidate>,l1t::L1Candidate> > > >()));
      return &instance;
   }
   // Static variable to force the class initialization
   static ::ROOT::TGenericClassInfo *_R__UNIQUE_(Init) = GenerateInitInstanceLocal((const vector<edm::Ref<BXVector<l1t::L1Candidate>,l1t::L1Candidate,edm::refhelper::FindUsingAdvance<BXVector<l1t::L1Candidate>,l1t::L1Candidate> > >*)0x0); R__UseDummy(_R__UNIQUE_(Init));

   // Dictionary for non-ClassDef classes
   static TClass *vectorlEedmcLcLReflEBXVectorlEl1tcLcLL1CandidategRcOl1tcLcLL1CandidatecOedmcLcLrefhelpercLcLFindUsingAdvancelEBXVectorlEl1tcLcLL1CandidategRcOl1tcLcLL1CandidategRsPgRsPgR_Dictionary() {
      TClass* theClass =::ROOT::GenerateInitInstanceLocal((const vector<edm::Ref<BXVector<l1t::L1Candidate>,l1t::L1Candidate,edm::refhelper::FindUsingAdvance<BXVector<l1t::L1Candidate>,l1t::L1Candidate> > >*)0x0)->GetClass();
      vectorlEedmcLcLReflEBXVectorlEl1tcLcLL1CandidategRcOl1tcLcLL1CandidatecOedmcLcLrefhelpercLcLFindUsingAdvancelEBXVectorlEl1tcLcLL1CandidategRcOl1tcLcLL1CandidategRsPgRsPgR_TClassManip(theClass);
   return theClass;
   }

   static void vectorlEedmcLcLReflEBXVectorlEl1tcLcLL1CandidategRcOl1tcLcLL1CandidatecOedmcLcLrefhelpercLcLFindUsingAdvancelEBXVectorlEl1tcLcLL1CandidategRcOl1tcLcLL1CandidategRsPgRsPgR_TClassManip(TClass* ){
   }

} // end of namespace ROOT

namespace ROOT {
   // Wrappers around operator new
   static void *new_vectorlEedmcLcLReflEBXVectorlEl1tcLcLL1CandidategRcOl1tcLcLL1CandidatecOedmcLcLrefhelpercLcLFindUsingAdvancelEBXVectorlEl1tcLcLL1CandidategRcOl1tcLcLL1CandidategRsPgRsPgR(void *p) {
      return  p ? ::new((::ROOT::Internal::TOperatorNewHelper*)p) vector<edm::Ref<BXVector<l1t::L1Candidate>,l1t::L1Candidate,edm::refhelper::FindUsingAdvance<BXVector<l1t::L1Candidate>,l1t::L1Candidate> > > : new vector<edm::Ref<BXVector<l1t::L1Candidate>,l1t::L1Candidate,edm::refhelper::FindUsingAdvance<BXVector<l1t::L1Candidate>,l1t::L1Candidate> > >;
   }
   static void *newArray_vectorlEedmcLcLReflEBXVectorlEl1tcLcLL1CandidategRcOl1tcLcLL1CandidatecOedmcLcLrefhelpercLcLFindUsingAdvancelEBXVectorlEl1tcLcLL1CandidategRcOl1tcLcLL1CandidategRsPgRsPgR(Long_t nElements, void *p) {
      return p ? ::new((::ROOT::Internal::TOperatorNewHelper*)p) vector<edm::Ref<BXVector<l1t::L1Candidate>,l1t::L1Candidate,edm::refhelper::FindUsingAdvance<BXVector<l1t::L1Candidate>,l1t::L1Candidate> > >[nElements] : new vector<edm::Ref<BXVector<l1t::L1Candidate>,l1t::L1Candidate,edm::refhelper::FindUsingAdvance<BXVector<l1t::L1Candidate>,l1t::L1Candidate> > >[nElements];
   }
   // Wrapper around operator delete
   static void delete_vectorlEedmcLcLReflEBXVectorlEl1tcLcLL1CandidategRcOl1tcLcLL1CandidatecOedmcLcLrefhelpercLcLFindUsingAdvancelEBXVectorlEl1tcLcLL1CandidategRcOl1tcLcLL1CandidategRsPgRsPgR(void *p) {
      delete ((vector<edm::Ref<BXVector<l1t::L1Candidate>,l1t::L1Candidate,edm::refhelper::FindUsingAdvance<BXVector<l1t::L1Candidate>,l1t::L1Candidate> > >*)p);
   }
   static void deleteArray_vectorlEedmcLcLReflEBXVectorlEl1tcLcLL1CandidategRcOl1tcLcLL1CandidatecOedmcLcLrefhelpercLcLFindUsingAdvancelEBXVectorlEl1tcLcLL1CandidategRcOl1tcLcLL1CandidategRsPgRsPgR(void *p) {
      delete [] ((vector<edm::Ref<BXVector<l1t::L1Candidate>,l1t::L1Candidate,edm::refhelper::FindUsingAdvance<BXVector<l1t::L1Candidate>,l1t::L1Candidate> > >*)p);
   }
   static void destruct_vectorlEedmcLcLReflEBXVectorlEl1tcLcLL1CandidategRcOl1tcLcLL1CandidatecOedmcLcLrefhelpercLcLFindUsingAdvancelEBXVectorlEl1tcLcLL1CandidategRcOl1tcLcLL1CandidategRsPgRsPgR(void *p) {
      typedef vector<edm::Ref<BXVector<l1t::L1Candidate>,l1t::L1Candidate,edm::refhelper::FindUsingAdvance<BXVector<l1t::L1Candidate>,l1t::L1Candidate> > > current_t;
      ((current_t*)p)->~current_t();
   }
} // end of namespace ROOT for class vector<edm::Ref<BXVector<l1t::L1Candidate>,l1t::L1Candidate,edm::refhelper::FindUsingAdvance<BXVector<l1t::L1Candidate>,l1t::L1Candidate> > >

namespace ROOT {
   static TClass *vectorlEedmcLcLReflEBXVectorlEl1tcLcLJetgRcOl1tcLcLJetcOedmcLcLrefhelpercLcLFindUsingAdvancelEBXVectorlEl1tcLcLJetgRcOl1tcLcLJetgRsPgRsPgR_Dictionary();
   static void vectorlEedmcLcLReflEBXVectorlEl1tcLcLJetgRcOl1tcLcLJetcOedmcLcLrefhelpercLcLFindUsingAdvancelEBXVectorlEl1tcLcLJetgRcOl1tcLcLJetgRsPgRsPgR_TClassManip(TClass*);
   static void *new_vectorlEedmcLcLReflEBXVectorlEl1tcLcLJetgRcOl1tcLcLJetcOedmcLcLrefhelpercLcLFindUsingAdvancelEBXVectorlEl1tcLcLJetgRcOl1tcLcLJetgRsPgRsPgR(void *p = 0);
   static void *newArray_vectorlEedmcLcLReflEBXVectorlEl1tcLcLJetgRcOl1tcLcLJetcOedmcLcLrefhelpercLcLFindUsingAdvancelEBXVectorlEl1tcLcLJetgRcOl1tcLcLJetgRsPgRsPgR(Long_t size, void *p);
   static void delete_vectorlEedmcLcLReflEBXVectorlEl1tcLcLJetgRcOl1tcLcLJetcOedmcLcLrefhelpercLcLFindUsingAdvancelEBXVectorlEl1tcLcLJetgRcOl1tcLcLJetgRsPgRsPgR(void *p);
   static void deleteArray_vectorlEedmcLcLReflEBXVectorlEl1tcLcLJetgRcOl1tcLcLJetcOedmcLcLrefhelpercLcLFindUsingAdvancelEBXVectorlEl1tcLcLJetgRcOl1tcLcLJetgRsPgRsPgR(void *p);
   static void destruct_vectorlEedmcLcLReflEBXVectorlEl1tcLcLJetgRcOl1tcLcLJetcOedmcLcLrefhelpercLcLFindUsingAdvancelEBXVectorlEl1tcLcLJetgRcOl1tcLcLJetgRsPgRsPgR(void *p);

   // Function generating the singleton type initializer
   static TGenericClassInfo *GenerateInitInstanceLocal(const vector<edm::Ref<BXVector<l1t::Jet>,l1t::Jet,edm::refhelper::FindUsingAdvance<BXVector<l1t::Jet>,l1t::Jet> > >*)
   {
      vector<edm::Ref<BXVector<l1t::Jet>,l1t::Jet,edm::refhelper::FindUsingAdvance<BXVector<l1t::Jet>,l1t::Jet> > > *ptr = 0;
      static ::TVirtualIsAProxy* isa_proxy = new ::TIsAProxy(typeid(vector<edm::Ref<BXVector<l1t::Jet>,l1t::Jet,edm::refhelper::FindUsingAdvance<BXVector<l1t::Jet>,l1t::Jet> > >));
      static ::ROOT::TGenericClassInfo 
         instance("vector<edm::Ref<BXVector<l1t::Jet>,l1t::Jet,edm::refhelper::FindUsingAdvance<BXVector<l1t::Jet>,l1t::Jet> > >", -2, "vector", 214,
                  typeid(vector<edm::Ref<BXVector<l1t::Jet>,l1t::Jet,edm::refhelper::FindUsingAdvance<BXVector<l1t::Jet>,l1t::Jet> > >), ::ROOT::Internal::DefineBehavior(ptr, ptr),
                  &vectorlEedmcLcLReflEBXVectorlEl1tcLcLJetgRcOl1tcLcLJetcOedmcLcLrefhelpercLcLFindUsingAdvancelEBXVectorlEl1tcLcLJetgRcOl1tcLcLJetgRsPgRsPgR_Dictionary, isa_proxy, 4,
                  sizeof(vector<edm::Ref<BXVector<l1t::Jet>,l1t::Jet,edm::refhelper::FindUsingAdvance<BXVector<l1t::Jet>,l1t::Jet> > >) );
      instance.SetNew(&new_vectorlEedmcLcLReflEBXVectorlEl1tcLcLJetgRcOl1tcLcLJetcOedmcLcLrefhelpercLcLFindUsingAdvancelEBXVectorlEl1tcLcLJetgRcOl1tcLcLJetgRsPgRsPgR);
      instance.SetNewArray(&newArray_vectorlEedmcLcLReflEBXVectorlEl1tcLcLJetgRcOl1tcLcLJetcOedmcLcLrefhelpercLcLFindUsingAdvancelEBXVectorlEl1tcLcLJetgRcOl1tcLcLJetgRsPgRsPgR);
      instance.SetDelete(&delete_vectorlEedmcLcLReflEBXVectorlEl1tcLcLJetgRcOl1tcLcLJetcOedmcLcLrefhelpercLcLFindUsingAdvancelEBXVectorlEl1tcLcLJetgRcOl1tcLcLJetgRsPgRsPgR);
      instance.SetDeleteArray(&deleteArray_vectorlEedmcLcLReflEBXVectorlEl1tcLcLJetgRcOl1tcLcLJetcOedmcLcLrefhelpercLcLFindUsingAdvancelEBXVectorlEl1tcLcLJetgRcOl1tcLcLJetgRsPgRsPgR);
      instance.SetDestructor(&destruct_vectorlEedmcLcLReflEBXVectorlEl1tcLcLJetgRcOl1tcLcLJetcOedmcLcLrefhelpercLcLFindUsingAdvancelEBXVectorlEl1tcLcLJetgRcOl1tcLcLJetgRsPgRsPgR);
      instance.AdoptCollectionProxyInfo(TCollectionProxyInfo::Generate(TCollectionProxyInfo::Pushback< vector<edm::Ref<BXVector<l1t::Jet>,l1t::Jet,edm::refhelper::FindUsingAdvance<BXVector<l1t::Jet>,l1t::Jet> > > >()));
      return &instance;
   }
   // Static variable to force the class initialization
   static ::ROOT::TGenericClassInfo *_R__UNIQUE_(Init) = GenerateInitInstanceLocal((const vector<edm::Ref<BXVector<l1t::Jet>,l1t::Jet,edm::refhelper::FindUsingAdvance<BXVector<l1t::Jet>,l1t::Jet> > >*)0x0); R__UseDummy(_R__UNIQUE_(Init));

   // Dictionary for non-ClassDef classes
   static TClass *vectorlEedmcLcLReflEBXVectorlEl1tcLcLJetgRcOl1tcLcLJetcOedmcLcLrefhelpercLcLFindUsingAdvancelEBXVectorlEl1tcLcLJetgRcOl1tcLcLJetgRsPgRsPgR_Dictionary() {
      TClass* theClass =::ROOT::GenerateInitInstanceLocal((const vector<edm::Ref<BXVector<l1t::Jet>,l1t::Jet,edm::refhelper::FindUsingAdvance<BXVector<l1t::Jet>,l1t::Jet> > >*)0x0)->GetClass();
      vectorlEedmcLcLReflEBXVectorlEl1tcLcLJetgRcOl1tcLcLJetcOedmcLcLrefhelpercLcLFindUsingAdvancelEBXVectorlEl1tcLcLJetgRcOl1tcLcLJetgRsPgRsPgR_TClassManip(theClass);
   return theClass;
   }

   static void vectorlEedmcLcLReflEBXVectorlEl1tcLcLJetgRcOl1tcLcLJetcOedmcLcLrefhelpercLcLFindUsingAdvancelEBXVectorlEl1tcLcLJetgRcOl1tcLcLJetgRsPgRsPgR_TClassManip(TClass* ){
   }

} // end of namespace ROOT

namespace ROOT {
   // Wrappers around operator new
   static void *new_vectorlEedmcLcLReflEBXVectorlEl1tcLcLJetgRcOl1tcLcLJetcOedmcLcLrefhelpercLcLFindUsingAdvancelEBXVectorlEl1tcLcLJetgRcOl1tcLcLJetgRsPgRsPgR(void *p) {
      return  p ? ::new((::ROOT::Internal::TOperatorNewHelper*)p) vector<edm::Ref<BXVector<l1t::Jet>,l1t::Jet,edm::refhelper::FindUsingAdvance<BXVector<l1t::Jet>,l1t::Jet> > > : new vector<edm::Ref<BXVector<l1t::Jet>,l1t::Jet,edm::refhelper::FindUsingAdvance<BXVector<l1t::Jet>,l1t::Jet> > >;
   }
   static void *newArray_vectorlEedmcLcLReflEBXVectorlEl1tcLcLJetgRcOl1tcLcLJetcOedmcLcLrefhelpercLcLFindUsingAdvancelEBXVectorlEl1tcLcLJetgRcOl1tcLcLJetgRsPgRsPgR(Long_t nElements, void *p) {
      return p ? ::new((::ROOT::Internal::TOperatorNewHelper*)p) vector<edm::Ref<BXVector<l1t::Jet>,l1t::Jet,edm::refhelper::FindUsingAdvance<BXVector<l1t::Jet>,l1t::Jet> > >[nElements] : new vector<edm::Ref<BXVector<l1t::Jet>,l1t::Jet,edm::refhelper::FindUsingAdvance<BXVector<l1t::Jet>,l1t::Jet> > >[nElements];
   }
   // Wrapper around operator delete
   static void delete_vectorlEedmcLcLReflEBXVectorlEl1tcLcLJetgRcOl1tcLcLJetcOedmcLcLrefhelpercLcLFindUsingAdvancelEBXVectorlEl1tcLcLJetgRcOl1tcLcLJetgRsPgRsPgR(void *p) {
      delete ((vector<edm::Ref<BXVector<l1t::Jet>,l1t::Jet,edm::refhelper::FindUsingAdvance<BXVector<l1t::Jet>,l1t::Jet> > >*)p);
   }
   static void deleteArray_vectorlEedmcLcLReflEBXVectorlEl1tcLcLJetgRcOl1tcLcLJetcOedmcLcLrefhelpercLcLFindUsingAdvancelEBXVectorlEl1tcLcLJetgRcOl1tcLcLJetgRsPgRsPgR(void *p) {
      delete [] ((vector<edm::Ref<BXVector<l1t::Jet>,l1t::Jet,edm::refhelper::FindUsingAdvance<BXVector<l1t::Jet>,l1t::Jet> > >*)p);
   }
   static void destruct_vectorlEedmcLcLReflEBXVectorlEl1tcLcLJetgRcOl1tcLcLJetcOedmcLcLrefhelpercLcLFindUsingAdvancelEBXVectorlEl1tcLcLJetgRcOl1tcLcLJetgRsPgRsPgR(void *p) {
      typedef vector<edm::Ref<BXVector<l1t::Jet>,l1t::Jet,edm::refhelper::FindUsingAdvance<BXVector<l1t::Jet>,l1t::Jet> > > current_t;
      ((current_t*)p)->~current_t();
   }
} // end of namespace ROOT for class vector<edm::Ref<BXVector<l1t::Jet>,l1t::Jet,edm::refhelper::FindUsingAdvance<BXVector<l1t::Jet>,l1t::Jet> > >

namespace ROOT {
   static TClass *vectorlEedmcLcLReflEBXVectorlEl1tcLcLEtSumgRcOl1tcLcLEtSumcOedmcLcLrefhelpercLcLFindUsingAdvancelEBXVectorlEl1tcLcLEtSumgRcOl1tcLcLEtSumgRsPgRsPgR_Dictionary();
   static void vectorlEedmcLcLReflEBXVectorlEl1tcLcLEtSumgRcOl1tcLcLEtSumcOedmcLcLrefhelpercLcLFindUsingAdvancelEBXVectorlEl1tcLcLEtSumgRcOl1tcLcLEtSumgRsPgRsPgR_TClassManip(TClass*);
   static void *new_vectorlEedmcLcLReflEBXVectorlEl1tcLcLEtSumgRcOl1tcLcLEtSumcOedmcLcLrefhelpercLcLFindUsingAdvancelEBXVectorlEl1tcLcLEtSumgRcOl1tcLcLEtSumgRsPgRsPgR(void *p = 0);
   static void *newArray_vectorlEedmcLcLReflEBXVectorlEl1tcLcLEtSumgRcOl1tcLcLEtSumcOedmcLcLrefhelpercLcLFindUsingAdvancelEBXVectorlEl1tcLcLEtSumgRcOl1tcLcLEtSumgRsPgRsPgR(Long_t size, void *p);
   static void delete_vectorlEedmcLcLReflEBXVectorlEl1tcLcLEtSumgRcOl1tcLcLEtSumcOedmcLcLrefhelpercLcLFindUsingAdvancelEBXVectorlEl1tcLcLEtSumgRcOl1tcLcLEtSumgRsPgRsPgR(void *p);
   static void deleteArray_vectorlEedmcLcLReflEBXVectorlEl1tcLcLEtSumgRcOl1tcLcLEtSumcOedmcLcLrefhelpercLcLFindUsingAdvancelEBXVectorlEl1tcLcLEtSumgRcOl1tcLcLEtSumgRsPgRsPgR(void *p);
   static void destruct_vectorlEedmcLcLReflEBXVectorlEl1tcLcLEtSumgRcOl1tcLcLEtSumcOedmcLcLrefhelpercLcLFindUsingAdvancelEBXVectorlEl1tcLcLEtSumgRcOl1tcLcLEtSumgRsPgRsPgR(void *p);

   // Function generating the singleton type initializer
   static TGenericClassInfo *GenerateInitInstanceLocal(const vector<edm::Ref<BXVector<l1t::EtSum>,l1t::EtSum,edm::refhelper::FindUsingAdvance<BXVector<l1t::EtSum>,l1t::EtSum> > >*)
   {
      vector<edm::Ref<BXVector<l1t::EtSum>,l1t::EtSum,edm::refhelper::FindUsingAdvance<BXVector<l1t::EtSum>,l1t::EtSum> > > *ptr = 0;
      static ::TVirtualIsAProxy* isa_proxy = new ::TIsAProxy(typeid(vector<edm::Ref<BXVector<l1t::EtSum>,l1t::EtSum,edm::refhelper::FindUsingAdvance<BXVector<l1t::EtSum>,l1t::EtSum> > >));
      static ::ROOT::TGenericClassInfo 
         instance("vector<edm::Ref<BXVector<l1t::EtSum>,l1t::EtSum,edm::refhelper::FindUsingAdvance<BXVector<l1t::EtSum>,l1t::EtSum> > >", -2, "vector", 214,
                  typeid(vector<edm::Ref<BXVector<l1t::EtSum>,l1t::EtSum,edm::refhelper::FindUsingAdvance<BXVector<l1t::EtSum>,l1t::EtSum> > >), ::ROOT::Internal::DefineBehavior(ptr, ptr),
                  &vectorlEedmcLcLReflEBXVectorlEl1tcLcLEtSumgRcOl1tcLcLEtSumcOedmcLcLrefhelpercLcLFindUsingAdvancelEBXVectorlEl1tcLcLEtSumgRcOl1tcLcLEtSumgRsPgRsPgR_Dictionary, isa_proxy, 4,
                  sizeof(vector<edm::Ref<BXVector<l1t::EtSum>,l1t::EtSum,edm::refhelper::FindUsingAdvance<BXVector<l1t::EtSum>,l1t::EtSum> > >) );
      instance.SetNew(&new_vectorlEedmcLcLReflEBXVectorlEl1tcLcLEtSumgRcOl1tcLcLEtSumcOedmcLcLrefhelpercLcLFindUsingAdvancelEBXVectorlEl1tcLcLEtSumgRcOl1tcLcLEtSumgRsPgRsPgR);
      instance.SetNewArray(&newArray_vectorlEedmcLcLReflEBXVectorlEl1tcLcLEtSumgRcOl1tcLcLEtSumcOedmcLcLrefhelpercLcLFindUsingAdvancelEBXVectorlEl1tcLcLEtSumgRcOl1tcLcLEtSumgRsPgRsPgR);
      instance.SetDelete(&delete_vectorlEedmcLcLReflEBXVectorlEl1tcLcLEtSumgRcOl1tcLcLEtSumcOedmcLcLrefhelpercLcLFindUsingAdvancelEBXVectorlEl1tcLcLEtSumgRcOl1tcLcLEtSumgRsPgRsPgR);
      instance.SetDeleteArray(&deleteArray_vectorlEedmcLcLReflEBXVectorlEl1tcLcLEtSumgRcOl1tcLcLEtSumcOedmcLcLrefhelpercLcLFindUsingAdvancelEBXVectorlEl1tcLcLEtSumgRcOl1tcLcLEtSumgRsPgRsPgR);
      instance.SetDestructor(&destruct_vectorlEedmcLcLReflEBXVectorlEl1tcLcLEtSumgRcOl1tcLcLEtSumcOedmcLcLrefhelpercLcLFindUsingAdvancelEBXVectorlEl1tcLcLEtSumgRcOl1tcLcLEtSumgRsPgRsPgR);
      instance.AdoptCollectionProxyInfo(TCollectionProxyInfo::Generate(TCollectionProxyInfo::Pushback< vector<edm::Ref<BXVector<l1t::EtSum>,l1t::EtSum,edm::refhelper::FindUsingAdvance<BXVector<l1t::EtSum>,l1t::EtSum> > > >()));
      return &instance;
   }
   // Static variable to force the class initialization
   static ::ROOT::TGenericClassInfo *_R__UNIQUE_(Init) = GenerateInitInstanceLocal((const vector<edm::Ref<BXVector<l1t::EtSum>,l1t::EtSum,edm::refhelper::FindUsingAdvance<BXVector<l1t::EtSum>,l1t::EtSum> > >*)0x0); R__UseDummy(_R__UNIQUE_(Init));

   // Dictionary for non-ClassDef classes
   static TClass *vectorlEedmcLcLReflEBXVectorlEl1tcLcLEtSumgRcOl1tcLcLEtSumcOedmcLcLrefhelpercLcLFindUsingAdvancelEBXVectorlEl1tcLcLEtSumgRcOl1tcLcLEtSumgRsPgRsPgR_Dictionary() {
      TClass* theClass =::ROOT::GenerateInitInstanceLocal((const vector<edm::Ref<BXVector<l1t::EtSum>,l1t::EtSum,edm::refhelper::FindUsingAdvance<BXVector<l1t::EtSum>,l1t::EtSum> > >*)0x0)->GetClass();
      vectorlEedmcLcLReflEBXVectorlEl1tcLcLEtSumgRcOl1tcLcLEtSumcOedmcLcLrefhelpercLcLFindUsingAdvancelEBXVectorlEl1tcLcLEtSumgRcOl1tcLcLEtSumgRsPgRsPgR_TClassManip(theClass);
   return theClass;
   }

   static void vectorlEedmcLcLReflEBXVectorlEl1tcLcLEtSumgRcOl1tcLcLEtSumcOedmcLcLrefhelpercLcLFindUsingAdvancelEBXVectorlEl1tcLcLEtSumgRcOl1tcLcLEtSumgRsPgRsPgR_TClassManip(TClass* ){
   }

} // end of namespace ROOT

namespace ROOT {
   // Wrappers around operator new
   static void *new_vectorlEedmcLcLReflEBXVectorlEl1tcLcLEtSumgRcOl1tcLcLEtSumcOedmcLcLrefhelpercLcLFindUsingAdvancelEBXVectorlEl1tcLcLEtSumgRcOl1tcLcLEtSumgRsPgRsPgR(void *p) {
      return  p ? ::new((::ROOT::Internal::TOperatorNewHelper*)p) vector<edm::Ref<BXVector<l1t::EtSum>,l1t::EtSum,edm::refhelper::FindUsingAdvance<BXVector<l1t::EtSum>,l1t::EtSum> > > : new vector<edm::Ref<BXVector<l1t::EtSum>,l1t::EtSum,edm::refhelper::FindUsingAdvance<BXVector<l1t::EtSum>,l1t::EtSum> > >;
   }
   static void *newArray_vectorlEedmcLcLReflEBXVectorlEl1tcLcLEtSumgRcOl1tcLcLEtSumcOedmcLcLrefhelpercLcLFindUsingAdvancelEBXVectorlEl1tcLcLEtSumgRcOl1tcLcLEtSumgRsPgRsPgR(Long_t nElements, void *p) {
      return p ? ::new((::ROOT::Internal::TOperatorNewHelper*)p) vector<edm::Ref<BXVector<l1t::EtSum>,l1t::EtSum,edm::refhelper::FindUsingAdvance<BXVector<l1t::EtSum>,l1t::EtSum> > >[nElements] : new vector<edm::Ref<BXVector<l1t::EtSum>,l1t::EtSum,edm::refhelper::FindUsingAdvance<BXVector<l1t::EtSum>,l1t::EtSum> > >[nElements];
   }
   // Wrapper around operator delete
   static void delete_vectorlEedmcLcLReflEBXVectorlEl1tcLcLEtSumgRcOl1tcLcLEtSumcOedmcLcLrefhelpercLcLFindUsingAdvancelEBXVectorlEl1tcLcLEtSumgRcOl1tcLcLEtSumgRsPgRsPgR(void *p) {
      delete ((vector<edm::Ref<BXVector<l1t::EtSum>,l1t::EtSum,edm::refhelper::FindUsingAdvance<BXVector<l1t::EtSum>,l1t::EtSum> > >*)p);
   }
   static void deleteArray_vectorlEedmcLcLReflEBXVectorlEl1tcLcLEtSumgRcOl1tcLcLEtSumcOedmcLcLrefhelpercLcLFindUsingAdvancelEBXVectorlEl1tcLcLEtSumgRcOl1tcLcLEtSumgRsPgRsPgR(void *p) {
      delete [] ((vector<edm::Ref<BXVector<l1t::EtSum>,l1t::EtSum,edm::refhelper::FindUsingAdvance<BXVector<l1t::EtSum>,l1t::EtSum> > >*)p);
   }
   static void destruct_vectorlEedmcLcLReflEBXVectorlEl1tcLcLEtSumgRcOl1tcLcLEtSumcOedmcLcLrefhelpercLcLFindUsingAdvancelEBXVectorlEl1tcLcLEtSumgRcOl1tcLcLEtSumgRsPgRsPgR(void *p) {
      typedef vector<edm::Ref<BXVector<l1t::EtSum>,l1t::EtSum,edm::refhelper::FindUsingAdvance<BXVector<l1t::EtSum>,l1t::EtSum> > > current_t;
      ((current_t*)p)->~current_t();
   }
} // end of namespace ROOT for class vector<edm::Ref<BXVector<l1t::EtSum>,l1t::EtSum,edm::refhelper::FindUsingAdvance<BXVector<l1t::EtSum>,l1t::EtSum> > >

namespace ROOT {
   static TClass *vectorlEedmcLcLReflEBXVectorlEl1tcLcLEGammagRcOl1tcLcLEGammacOedmcLcLrefhelpercLcLFindUsingAdvancelEBXVectorlEl1tcLcLEGammagRcOl1tcLcLEGammagRsPgRsPgR_Dictionary();
   static void vectorlEedmcLcLReflEBXVectorlEl1tcLcLEGammagRcOl1tcLcLEGammacOedmcLcLrefhelpercLcLFindUsingAdvancelEBXVectorlEl1tcLcLEGammagRcOl1tcLcLEGammagRsPgRsPgR_TClassManip(TClass*);
   static void *new_vectorlEedmcLcLReflEBXVectorlEl1tcLcLEGammagRcOl1tcLcLEGammacOedmcLcLrefhelpercLcLFindUsingAdvancelEBXVectorlEl1tcLcLEGammagRcOl1tcLcLEGammagRsPgRsPgR(void *p = 0);
   static void *newArray_vectorlEedmcLcLReflEBXVectorlEl1tcLcLEGammagRcOl1tcLcLEGammacOedmcLcLrefhelpercLcLFindUsingAdvancelEBXVectorlEl1tcLcLEGammagRcOl1tcLcLEGammagRsPgRsPgR(Long_t size, void *p);
   static void delete_vectorlEedmcLcLReflEBXVectorlEl1tcLcLEGammagRcOl1tcLcLEGammacOedmcLcLrefhelpercLcLFindUsingAdvancelEBXVectorlEl1tcLcLEGammagRcOl1tcLcLEGammagRsPgRsPgR(void *p);
   static void deleteArray_vectorlEedmcLcLReflEBXVectorlEl1tcLcLEGammagRcOl1tcLcLEGammacOedmcLcLrefhelpercLcLFindUsingAdvancelEBXVectorlEl1tcLcLEGammagRcOl1tcLcLEGammagRsPgRsPgR(void *p);
   static void destruct_vectorlEedmcLcLReflEBXVectorlEl1tcLcLEGammagRcOl1tcLcLEGammacOedmcLcLrefhelpercLcLFindUsingAdvancelEBXVectorlEl1tcLcLEGammagRcOl1tcLcLEGammagRsPgRsPgR(void *p);

   // Function generating the singleton type initializer
   static TGenericClassInfo *GenerateInitInstanceLocal(const vector<edm::Ref<BXVector<l1t::EGamma>,l1t::EGamma,edm::refhelper::FindUsingAdvance<BXVector<l1t::EGamma>,l1t::EGamma> > >*)
   {
      vector<edm::Ref<BXVector<l1t::EGamma>,l1t::EGamma,edm::refhelper::FindUsingAdvance<BXVector<l1t::EGamma>,l1t::EGamma> > > *ptr = 0;
      static ::TVirtualIsAProxy* isa_proxy = new ::TIsAProxy(typeid(vector<edm::Ref<BXVector<l1t::EGamma>,l1t::EGamma,edm::refhelper::FindUsingAdvance<BXVector<l1t::EGamma>,l1t::EGamma> > >));
      static ::ROOT::TGenericClassInfo 
         instance("vector<edm::Ref<BXVector<l1t::EGamma>,l1t::EGamma,edm::refhelper::FindUsingAdvance<BXVector<l1t::EGamma>,l1t::EGamma> > >", -2, "vector", 214,
                  typeid(vector<edm::Ref<BXVector<l1t::EGamma>,l1t::EGamma,edm::refhelper::FindUsingAdvance<BXVector<l1t::EGamma>,l1t::EGamma> > >), ::ROOT::Internal::DefineBehavior(ptr, ptr),
                  &vectorlEedmcLcLReflEBXVectorlEl1tcLcLEGammagRcOl1tcLcLEGammacOedmcLcLrefhelpercLcLFindUsingAdvancelEBXVectorlEl1tcLcLEGammagRcOl1tcLcLEGammagRsPgRsPgR_Dictionary, isa_proxy, 4,
                  sizeof(vector<edm::Ref<BXVector<l1t::EGamma>,l1t::EGamma,edm::refhelper::FindUsingAdvance<BXVector<l1t::EGamma>,l1t::EGamma> > >) );
      instance.SetNew(&new_vectorlEedmcLcLReflEBXVectorlEl1tcLcLEGammagRcOl1tcLcLEGammacOedmcLcLrefhelpercLcLFindUsingAdvancelEBXVectorlEl1tcLcLEGammagRcOl1tcLcLEGammagRsPgRsPgR);
      instance.SetNewArray(&newArray_vectorlEedmcLcLReflEBXVectorlEl1tcLcLEGammagRcOl1tcLcLEGammacOedmcLcLrefhelpercLcLFindUsingAdvancelEBXVectorlEl1tcLcLEGammagRcOl1tcLcLEGammagRsPgRsPgR);
      instance.SetDelete(&delete_vectorlEedmcLcLReflEBXVectorlEl1tcLcLEGammagRcOl1tcLcLEGammacOedmcLcLrefhelpercLcLFindUsingAdvancelEBXVectorlEl1tcLcLEGammagRcOl1tcLcLEGammagRsPgRsPgR);
      instance.SetDeleteArray(&deleteArray_vectorlEedmcLcLReflEBXVectorlEl1tcLcLEGammagRcOl1tcLcLEGammacOedmcLcLrefhelpercLcLFindUsingAdvancelEBXVectorlEl1tcLcLEGammagRcOl1tcLcLEGammagRsPgRsPgR);
      instance.SetDestructor(&destruct_vectorlEedmcLcLReflEBXVectorlEl1tcLcLEGammagRcOl1tcLcLEGammacOedmcLcLrefhelpercLcLFindUsingAdvancelEBXVectorlEl1tcLcLEGammagRcOl1tcLcLEGammagRsPgRsPgR);
      instance.AdoptCollectionProxyInfo(TCollectionProxyInfo::Generate(TCollectionProxyInfo::Pushback< vector<edm::Ref<BXVector<l1t::EGamma>,l1t::EGamma,edm::refhelper::FindUsingAdvance<BXVector<l1t::EGamma>,l1t::EGamma> > > >()));
      return &instance;
   }
   // Static variable to force the class initialization
   static ::ROOT::TGenericClassInfo *_R__UNIQUE_(Init) = GenerateInitInstanceLocal((const vector<edm::Ref<BXVector<l1t::EGamma>,l1t::EGamma,edm::refhelper::FindUsingAdvance<BXVector<l1t::EGamma>,l1t::EGamma> > >*)0x0); R__UseDummy(_R__UNIQUE_(Init));

   // Dictionary for non-ClassDef classes
   static TClass *vectorlEedmcLcLReflEBXVectorlEl1tcLcLEGammagRcOl1tcLcLEGammacOedmcLcLrefhelpercLcLFindUsingAdvancelEBXVectorlEl1tcLcLEGammagRcOl1tcLcLEGammagRsPgRsPgR_Dictionary() {
      TClass* theClass =::ROOT::GenerateInitInstanceLocal((const vector<edm::Ref<BXVector<l1t::EGamma>,l1t::EGamma,edm::refhelper::FindUsingAdvance<BXVector<l1t::EGamma>,l1t::EGamma> > >*)0x0)->GetClass();
      vectorlEedmcLcLReflEBXVectorlEl1tcLcLEGammagRcOl1tcLcLEGammacOedmcLcLrefhelpercLcLFindUsingAdvancelEBXVectorlEl1tcLcLEGammagRcOl1tcLcLEGammagRsPgRsPgR_TClassManip(theClass);
   return theClass;
   }

   static void vectorlEedmcLcLReflEBXVectorlEl1tcLcLEGammagRcOl1tcLcLEGammacOedmcLcLrefhelpercLcLFindUsingAdvancelEBXVectorlEl1tcLcLEGammagRcOl1tcLcLEGammagRsPgRsPgR_TClassManip(TClass* ){
   }

} // end of namespace ROOT

namespace ROOT {
   // Wrappers around operator new
   static void *new_vectorlEedmcLcLReflEBXVectorlEl1tcLcLEGammagRcOl1tcLcLEGammacOedmcLcLrefhelpercLcLFindUsingAdvancelEBXVectorlEl1tcLcLEGammagRcOl1tcLcLEGammagRsPgRsPgR(void *p) {
      return  p ? ::new((::ROOT::Internal::TOperatorNewHelper*)p) vector<edm::Ref<BXVector<l1t::EGamma>,l1t::EGamma,edm::refhelper::FindUsingAdvance<BXVector<l1t::EGamma>,l1t::EGamma> > > : new vector<edm::Ref<BXVector<l1t::EGamma>,l1t::EGamma,edm::refhelper::FindUsingAdvance<BXVector<l1t::EGamma>,l1t::EGamma> > >;
   }
   static void *newArray_vectorlEedmcLcLReflEBXVectorlEl1tcLcLEGammagRcOl1tcLcLEGammacOedmcLcLrefhelpercLcLFindUsingAdvancelEBXVectorlEl1tcLcLEGammagRcOl1tcLcLEGammagRsPgRsPgR(Long_t nElements, void *p) {
      return p ? ::new((::ROOT::Internal::TOperatorNewHelper*)p) vector<edm::Ref<BXVector<l1t::EGamma>,l1t::EGamma,edm::refhelper::FindUsingAdvance<BXVector<l1t::EGamma>,l1t::EGamma> > >[nElements] : new vector<edm::Ref<BXVector<l1t::EGamma>,l1t::EGamma,edm::refhelper::FindUsingAdvance<BXVector<l1t::EGamma>,l1t::EGamma> > >[nElements];
   }
   // Wrapper around operator delete
   static void delete_vectorlEedmcLcLReflEBXVectorlEl1tcLcLEGammagRcOl1tcLcLEGammacOedmcLcLrefhelpercLcLFindUsingAdvancelEBXVectorlEl1tcLcLEGammagRcOl1tcLcLEGammagRsPgRsPgR(void *p) {
      delete ((vector<edm::Ref<BXVector<l1t::EGamma>,l1t::EGamma,edm::refhelper::FindUsingAdvance<BXVector<l1t::EGamma>,l1t::EGamma> > >*)p);
   }
   static void deleteArray_vectorlEedmcLcLReflEBXVectorlEl1tcLcLEGammagRcOl1tcLcLEGammacOedmcLcLrefhelpercLcLFindUsingAdvancelEBXVectorlEl1tcLcLEGammagRcOl1tcLcLEGammagRsPgRsPgR(void *p) {
      delete [] ((vector<edm::Ref<BXVector<l1t::EGamma>,l1t::EGamma,edm::refhelper::FindUsingAdvance<BXVector<l1t::EGamma>,l1t::EGamma> > >*)p);
   }
   static void destruct_vectorlEedmcLcLReflEBXVectorlEl1tcLcLEGammagRcOl1tcLcLEGammacOedmcLcLrefhelpercLcLFindUsingAdvancelEBXVectorlEl1tcLcLEGammagRcOl1tcLcLEGammagRsPgRsPgR(void *p) {
      typedef vector<edm::Ref<BXVector<l1t::EGamma>,l1t::EGamma,edm::refhelper::FindUsingAdvance<BXVector<l1t::EGamma>,l1t::EGamma> > > current_t;
      ((current_t*)p)->~current_t();
   }
} // end of namespace ROOT for class vector<edm::Ref<BXVector<l1t::EGamma>,l1t::EGamma,edm::refhelper::FindUsingAdvance<BXVector<l1t::EGamma>,l1t::EGamma> > >

namespace ROOT {
   static TClass *vectorlEL1TriggerErrorgR_Dictionary();
   static void vectorlEL1TriggerErrorgR_TClassManip(TClass*);
   static void *new_vectorlEL1TriggerErrorgR(void *p = 0);
   static void *newArray_vectorlEL1TriggerErrorgR(Long_t size, void *p);
   static void delete_vectorlEL1TriggerErrorgR(void *p);
   static void deleteArray_vectorlEL1TriggerErrorgR(void *p);
   static void destruct_vectorlEL1TriggerErrorgR(void *p);

   // Function generating the singleton type initializer
   static TGenericClassInfo *GenerateInitInstanceLocal(const vector<L1TriggerError>*)
   {
      vector<L1TriggerError> *ptr = 0;
      static ::TVirtualIsAProxy* isa_proxy = new ::TIsAProxy(typeid(vector<L1TriggerError>));
      static ::ROOT::TGenericClassInfo 
         instance("vector<L1TriggerError>", -2, "vector", 214,
                  typeid(vector<L1TriggerError>), ::ROOT::Internal::DefineBehavior(ptr, ptr),
                  &vectorlEL1TriggerErrorgR_Dictionary, isa_proxy, 4,
                  sizeof(vector<L1TriggerError>) );
      instance.SetNew(&new_vectorlEL1TriggerErrorgR);
      instance.SetNewArray(&newArray_vectorlEL1TriggerErrorgR);
      instance.SetDelete(&delete_vectorlEL1TriggerErrorgR);
      instance.SetDeleteArray(&deleteArray_vectorlEL1TriggerErrorgR);
      instance.SetDestructor(&destruct_vectorlEL1TriggerErrorgR);
      instance.AdoptCollectionProxyInfo(TCollectionProxyInfo::Generate(TCollectionProxyInfo::Pushback< vector<L1TriggerError> >()));
      return &instance;
   }
   // Static variable to force the class initialization
   static ::ROOT::TGenericClassInfo *_R__UNIQUE_(Init) = GenerateInitInstanceLocal((const vector<L1TriggerError>*)0x0); R__UseDummy(_R__UNIQUE_(Init));

   // Dictionary for non-ClassDef classes
   static TClass *vectorlEL1TriggerErrorgR_Dictionary() {
      TClass* theClass =::ROOT::GenerateInitInstanceLocal((const vector<L1TriggerError>*)0x0)->GetClass();
      vectorlEL1TriggerErrorgR_TClassManip(theClass);
   return theClass;
   }

   static void vectorlEL1TriggerErrorgR_TClassManip(TClass* ){
   }

} // end of namespace ROOT

namespace ROOT {
   // Wrappers around operator new
   static void *new_vectorlEL1TriggerErrorgR(void *p) {
      return  p ? ::new((::ROOT::Internal::TOperatorNewHelper*)p) vector<L1TriggerError> : new vector<L1TriggerError>;
   }
   static void *newArray_vectorlEL1TriggerErrorgR(Long_t nElements, void *p) {
      return p ? ::new((::ROOT::Internal::TOperatorNewHelper*)p) vector<L1TriggerError>[nElements] : new vector<L1TriggerError>[nElements];
   }
   // Wrapper around operator delete
   static void delete_vectorlEL1TriggerErrorgR(void *p) {
      delete ((vector<L1TriggerError>*)p);
   }
   static void deleteArray_vectorlEL1TriggerErrorgR(void *p) {
      delete [] ((vector<L1TriggerError>*)p);
   }
   static void destruct_vectorlEL1TriggerErrorgR(void *p) {
      typedef vector<L1TriggerError> current_t;
      ((current_t*)p)->~current_t();
   }
} // end of namespace ROOT for class vector<L1TriggerError>

namespace ROOT {
   static TClass *vectorlEL1DataEmulDigigR_Dictionary();
   static void vectorlEL1DataEmulDigigR_TClassManip(TClass*);
   static void *new_vectorlEL1DataEmulDigigR(void *p = 0);
   static void *newArray_vectorlEL1DataEmulDigigR(Long_t size, void *p);
   static void delete_vectorlEL1DataEmulDigigR(void *p);
   static void deleteArray_vectorlEL1DataEmulDigigR(void *p);
   static void destruct_vectorlEL1DataEmulDigigR(void *p);

   // Function generating the singleton type initializer
   static TGenericClassInfo *GenerateInitInstanceLocal(const vector<L1DataEmulDigi>*)
   {
      vector<L1DataEmulDigi> *ptr = 0;
      static ::TVirtualIsAProxy* isa_proxy = new ::TIsAProxy(typeid(vector<L1DataEmulDigi>));
      static ::ROOT::TGenericClassInfo 
         instance("vector<L1DataEmulDigi>", -2, "vector", 214,
                  typeid(vector<L1DataEmulDigi>), ::ROOT::Internal::DefineBehavior(ptr, ptr),
                  &vectorlEL1DataEmulDigigR_Dictionary, isa_proxy, 4,
                  sizeof(vector<L1DataEmulDigi>) );
      instance.SetNew(&new_vectorlEL1DataEmulDigigR);
      instance.SetNewArray(&newArray_vectorlEL1DataEmulDigigR);
      instance.SetDelete(&delete_vectorlEL1DataEmulDigigR);
      instance.SetDeleteArray(&deleteArray_vectorlEL1DataEmulDigigR);
      instance.SetDestructor(&destruct_vectorlEL1DataEmulDigigR);
      instance.AdoptCollectionProxyInfo(TCollectionProxyInfo::Generate(TCollectionProxyInfo::Pushback< vector<L1DataEmulDigi> >()));
      return &instance;
   }
   // Static variable to force the class initialization
   static ::ROOT::TGenericClassInfo *_R__UNIQUE_(Init) = GenerateInitInstanceLocal((const vector<L1DataEmulDigi>*)0x0); R__UseDummy(_R__UNIQUE_(Init));

   // Dictionary for non-ClassDef classes
   static TClass *vectorlEL1DataEmulDigigR_Dictionary() {
      TClass* theClass =::ROOT::GenerateInitInstanceLocal((const vector<L1DataEmulDigi>*)0x0)->GetClass();
      vectorlEL1DataEmulDigigR_TClassManip(theClass);
   return theClass;
   }

   static void vectorlEL1DataEmulDigigR_TClassManip(TClass* ){
   }

} // end of namespace ROOT

namespace ROOT {
   // Wrappers around operator new
   static void *new_vectorlEL1DataEmulDigigR(void *p) {
      return  p ? ::new((::ROOT::Internal::TOperatorNewHelper*)p) vector<L1DataEmulDigi> : new vector<L1DataEmulDigi>;
   }
   static void *newArray_vectorlEL1DataEmulDigigR(Long_t nElements, void *p) {
      return p ? ::new((::ROOT::Internal::TOperatorNewHelper*)p) vector<L1DataEmulDigi>[nElements] : new vector<L1DataEmulDigi>[nElements];
   }
   // Wrapper around operator delete
   static void delete_vectorlEL1DataEmulDigigR(void *p) {
      delete ((vector<L1DataEmulDigi>*)p);
   }
   static void deleteArray_vectorlEL1DataEmulDigigR(void *p) {
      delete [] ((vector<L1DataEmulDigi>*)p);
   }
   static void destruct_vectorlEL1DataEmulDigigR(void *p) {
      typedef vector<L1DataEmulDigi> current_t;
      ((current_t*)p)->~current_t();
   }
} // end of namespace ROOT for class vector<L1DataEmulDigi>

namespace {
  void TriggerDictionaryInitialization_DataFormatsL1Trigger_xr_Impl() {
    static const char* headers[] = {
0    };
    static const char* includePaths[] = {
"/disk1/scheuch/grid/FullDestroyAnalysis2016/Wheel0/Working/test/CMSSW_8_0_2/src",
"/disk1/scheuch/grid/FullDestroyAnalysis2016/Wheel0/Working/test/CMSSW_8_0_2/poison",
"/cvmfs/cms.cern.ch/slc6_amd64_gcc493/cms/cmssw/CMSSW_8_0_2/src",
"/cvmfs/cms.cern.ch/slc6_amd64_gcc493/lcg/root/6.06.00-ikhhed4/include",
"/cvmfs/cms.cern.ch/slc6_amd64_gcc493/external/pcre/7.9__8.33/include",
"/cvmfs/cms.cern.ch/slc6_amd64_gcc493/external/boost/1.57.0-kpegke/include",
"/cvmfs/cms.cern.ch/slc6_amd64_gcc493/external/bz2lib/1.0.5/include",
"/cvmfs/cms.cern.ch/slc6_amd64_gcc493/external/gsl/1.10/include",
"/cvmfs/cms.cern.ch/slc6_amd64_gcc493/external/libuuid/2.22.2/include",
"/cvmfs/cms.cern.ch/slc6_amd64_gcc493/external/tbb/44_20151115oss/include",
"/cvmfs/cms.cern.ch/slc6_amd64_gcc493/external/zlib/1.2.8/include",
"/cvmfs/cms.cern.ch/slc6_amd64_gcc493/lcg/root/6.06.00-ikhhed4/include",
"/disk1/scheuch/grid/FullDestroyAnalysis2016/Wheel0/Working/test/CMSSW_8_0_2/",
0
    };
    static const char* fwdDeclCode = R"DICTFWDDCLS(
#line 1 "DataFormatsL1Trigger_xr dictionary forward declarations' payload"
#pragma clang diagnostic ignored "-Wkeyword-compat"
#pragma clang diagnostic ignored "-Wignored-attributes"
#pragma clang diagnostic ignored "-Wreturn-type-c-linkage"
extern int __Cling_Autoloading_Map;
namespace l1t{class __attribute__((annotate("$clingAutoload$DataFormats/L1Trigger/interface/EGamma.h")))  L1Candidate;}
template <class T> class __attribute__((annotate("$clingAutoload$DataFormats/L1Trigger/interface/BXVector.h")))  BXVector;

namespace edm{template <typename T> class __attribute__((annotate("$clingAutoload$DataFormats/L1Trigger/interface/L1EmParticle.h")))  Wrapper;
}
namespace edm{namespace refhelper{template <typename C, typename T> struct __attribute__((annotate("$clingAutoload$DataFormats/L1Trigger/interface/L1EmParticle.h")))  FindUsingAdvance;
}}
namespace edm{namespace refhelper{template <typename REFV> struct __attribute__((annotate("$clingAutoload$DataFormats/L1Trigger/interface/L1EmParticle.h")))  FindRefVectorUsingAdvance;
}}
namespace edm{namespace refhelper{template <typename C, typename T> struct __attribute__((annotate("$clingAutoload$DataFormats/L1Trigger/interface/L1EmParticle.h")))  FindTrait;
}}
namespace edm{namespace refhelper{template <typename C> struct __attribute__((annotate("$clingAutoload$DataFormats/L1Trigger/interface/L1EmParticle.h")))  ValueTrait;
}}
namespace edm{namespace refhelper{template <typename C, typename T, typename F> struct __attribute__((annotate("$clingAutoload$DataFormats/L1Trigger/interface/L1EmParticle.h")))  RefVectorTrait;
}}
namespace l1t{class __attribute__((annotate("$clingAutoload$DataFormats/L1Trigger/interface/Jet.h")))  Jet;}
namespace l1t{class __attribute__((annotate("$clingAutoload$DataFormats/L1Trigger/interface/EGamma.h")))  EGamma;}
namespace l1t{class __attribute__((annotate("$clingAutoload$DataFormats/L1Trigger/interface/EtSum.h")))  EtSum;}
namespace l1t{class __attribute__((annotate("$clingAutoload$DataFormats/L1Trigger/interface/Tau.h")))  Tau;}
namespace l1t{class __attribute__((annotate("$clingAutoload$DataFormats/L1Trigger/interface/Muon.h")))  Muon;}
namespace l1t{class __attribute__((annotate("$clingAutoload$DataFormats/L1Trigger/interface/CaloSpare.h")))  CaloSpare;}
namespace l1extra{class __attribute__((annotate("$clingAutoload$DataFormats/L1Trigger/interface/L1EmParticle.h")))  L1EmParticle;}
namespace l1extra{class __attribute__((annotate("$clingAutoload$DataFormats/L1Trigger/interface/L1JetParticle.h")))  L1JetParticle;}
namespace l1extra{class __attribute__((annotate("$clingAutoload$DataFormats/L1Trigger/interface/L1MuonParticle.h")))  L1MuonParticle;}
namespace l1extra{class __attribute__((annotate("$clingAutoload$DataFormats/L1Trigger/interface/L1EtMissParticle.h")))  L1EtMissParticle;}
namespace l1extra{class __attribute__((annotate("$clingAutoload$DataFormats/L1Trigger/interface/L1ParticleMap.h")))  L1ParticleMap;}
namespace l1extra{class __attribute__((annotate("$clingAutoload$DataFormats/L1Trigger/interface/L1HFRings.h")))  L1HFRings;}
namespace std{template <typename _Tp> class __attribute__((annotate("$clingAutoload$string")))  allocator;
}
namespace edm{template <typename C> class __attribute__((annotate("$clingAutoload$DataFormats/L1Trigger/interface/L1EmParticle.h")))  RefProd;
}
namespace reco{class __attribute__((annotate("$clingAutoload$DataFormats/L1Trigger/interface/L1EmParticle.h")))  Candidate;}
struct __attribute__((annotate("$clingAutoload$DataFormats/L1Trigger/interface/L1DataEmulRecord.h")))  GltDEDigi;
class __attribute__((annotate("$clingAutoload$DataFormats/L1Trigger/interface/L1DataEmulRecord.h")))  L1MonitorDigi;
class __attribute__((annotate("$clingAutoload$DataFormats/L1Trigger/interface/L1DataEmulRecord.h")))  L1DataEmulDigi;
class __attribute__((annotate("$clingAutoload$DataFormats/L1Trigger/interface/L1DataEmulRecord.h")))  L1DataEmulRecord;
class __attribute__((annotate("$clingAutoload$DataFormats/L1Trigger/interface/L1TriggerError.h")))  L1TriggerError;
namespace l1t{class __attribute__((annotate("$clingAutoload$DataFormats/L1Trigger/interface/L1DataEmulResult.h")))  L1DataEmulResult;}
namespace l1t{typedef BXVector<l1t::L1Candidate> L1CandidateBxCollection __attribute__((annotate("$clingAutoload$DataFormats/L1Trigger/interface/EGamma.h"))) ;}
namespace l1t{typedef BXVector<l1t::EGamma> EGammaBxCollection __attribute__((annotate("$clingAutoload$DataFormats/L1Trigger/interface/EGamma.h"))) ;}
namespace l1t{typedef BXVector<l1t::EtSum> EtSumBxCollection __attribute__((annotate("$clingAutoload$DataFormats/L1Trigger/interface/EtSum.h"))) ;}
namespace l1t{typedef BXVector<l1t::Jet> JetBxCollection __attribute__((annotate("$clingAutoload$DataFormats/L1Trigger/interface/Jet.h"))) ;}
namespace l1t{typedef BXVector<l1t::Muon> MuonBxCollection __attribute__((annotate("$clingAutoload$DataFormats/L1Trigger/interface/Muon.h"))) ;}
namespace l1t{typedef BXVector<l1t::Tau> TauBxCollection __attribute__((annotate("$clingAutoload$DataFormats/L1Trigger/interface/Tau.h"))) ;}
namespace l1t{typedef BXVector<l1t::CaloSpare> CaloSpareBxCollection __attribute__((annotate("$clingAutoload$DataFormats/L1Trigger/interface/CaloSpare.h"))) ;}
namespace l1t{typedef BXVector<l1t::L1DataEmulResult> L1DataEmulResultBxCollection __attribute__((annotate("$clingAutoload$DataFormats/L1Trigger/interface/L1DataEmulResult.h"))) ;}
)DICTFWDDCLS";
    static const char* payloadCode = R"DICTPAYLOAD(
#line 1 "DataFormatsL1Trigger_xr dictionary payload"

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
#include "DataFormats/L1Trigger/interface/L1EmParticle.h"
#include "Rtypes.h"
#include "Math/Cartesian3D.h"
#include "Math/Polar3D.h"
#include "Math/CylindricalEta3D.h"
#include "Math/PxPyPzE4D.h"
#include <boost/cstdint.hpp>
#include "DataFormats/L1GlobalCaloTrigger/interface/L1GctCand.h"
#include "DataFormats/L1Trigger/interface/L1EmParticleFwd.h"
#include "DataFormats/L1Trigger/interface/L1JetParticle.h"
#include "DataFormats/L1Trigger/interface/L1JetParticleFwd.h"
#include "DataFormats/L1Trigger/interface/L1MuonParticle.h"
#include "DataFormats/L1Trigger/interface/L1MuonParticleFwd.h"
#include "DataFormats/L1Trigger/interface/L1EtMissParticle.h"
#include "DataFormats/L1Trigger/interface/L1EtMissParticleFwd.h"
#include "DataFormats/L1Trigger/interface/L1ParticleMap.h"
#include "DataFormats/L1Trigger/interface/L1ParticleMapFwd.h"
#include "DataFormats/L1Trigger/interface/L1DataEmulRecord.h"
#include "DataFormats/L1Trigger/interface/L1HFRings.h"
#include "DataFormats/L1Trigger/interface/L1HFRingsFwd.h"
#include "DataFormats/L1Trigger/interface/L1TriggerError.h"
#include "DataFormats/Common/interface/Wrapper.h"
#include "DataFormats/Common/interface/RefVector.h"
#include "DataFormats/Common/interface/RefProd.h"
#include "DataFormats/L1Trigger/interface/BXVector.h"
#include "DataFormats/L1Trigger/interface/EGamma.h"
#include "DataFormats/L1Trigger/interface/EtSum.h"
#include "DataFormats/L1Trigger/interface/Jet.h"
#include "DataFormats/L1Trigger/interface/Muon.h"
#include "DataFormats/L1Trigger/interface/Tau.h"
#include "DataFormats/L1Trigger/interface/CaloSpare.h"
#include "DataFormats/L1Trigger/interface/L1DataEmulResult.h"

namespace DataFormats_L1Trigger {
  struct dictionary {

    l1t::L1CandidateBxCollection l1CandidateBxColl;
    l1t::EGammaBxCollection eGammaBxColl;
    l1t::EtSumBxCollection  etSumBxColl;
    l1t::JetBxCollection    jetBxColl;
    l1t::MuonBxCollection   muonBxColl;
    l1t::TauBxCollection    tauBxColl;
    l1t::CaloSpareBxCollection caloSpareColl;
    l1t::L1DataEmulResultBxCollection deResult;

    edm::Wrapper<l1t::L1CandidateBxCollection> w_l1CandidateBxColl;
    edm::Wrapper<l1t::EGammaBxCollection> w_eGammaBxColl;
    edm::Wrapper<l1t::EtSumBxCollection>  w_etSumBxColl;
    edm::Wrapper<l1t::JetBxCollection>    w_jetBxColl;
    edm::Wrapper<l1t::MuonBxCollection>   w_muonBxColl;
    edm::Wrapper<l1t::TauBxCollection>    w_tauBxColl;
    edm::Wrapper<l1t::CaloSpareBxCollection> w_caloSpareColl;
    edm::Wrapper<l1t::L1DataEmulResultBxCollection>   w_deResult;

    l1t::L1CandidateRef   refL1Candidate_;
    l1t::L1CandidateRefVector   refVecL1Candidate_;
    l1t::L1CandidateVectorRef   vecRefL1Candidate_;
    edm::Wrapper<l1t::L1CandidateRef>   w_refL1Candidate_;
    edm::Wrapper<l1t::L1CandidateRefVector>   w_refVecL1Candidate_;
    edm::Wrapper<l1t::L1CandidateVectorRef>   w_vecRefL1Candidate_;

    l1t::EGammaRef   refEGamma_;
    l1t::EGammaRefVector   refVecEGamma_;
    l1t::EGammaVectorRef   vecRefEGamma_;
    edm::Wrapper<l1t::EGammaRef>   w_refEGamma_;
    edm::Wrapper<l1t::EGammaRefVector>   w_refVecEGamma_;
    edm::Wrapper<l1t::EGammaVectorRef>   w_vecRefEGamma_;

    l1t::EtSumRef   refEtSum_;
    l1t::EtSumRefVector   refVecEtSum_;
    l1t::EtSumVectorRef   vecRefEtSum_;
    edm::Wrapper<l1t::EtSumRef>   w_refEtSum_;
    edm::Wrapper<l1t::EtSumRefVector>   w_refVecEtSum_;
    edm::Wrapper<l1t::EtSumVectorRef>   w_vecRefEtSum_;

    l1t::JetRef   refJet_;
    l1t::JetRefVector   refVecJet_;
    l1t::JetVectorRef   vecRefJet_;
    edm::Wrapper<l1t::JetRef>   w_refJet_;
    edm::Wrapper<l1t::JetRefVector>   w_refVecJet_;
    edm::Wrapper<l1t::JetVectorRef>   w_vecRefJet_;

    l1t::MuonRef   refMuon_;
    l1t::MuonRefVector   refVecMuon_;
    l1t::MuonVectorRef   vecRefMuon_;
    edm::Wrapper<l1t::MuonRef>   w_refMuon_;
    edm::Wrapper<l1t::MuonRefVector>   w_refVecMuon_;
    edm::Wrapper<l1t::MuonVectorRef>   w_vecRefMuon_;

    l1t::TauRef   refTau_;
    l1t::TauRefVector   refVecTau_;
    l1t::TauVectorRef   vecRefTau_;
    edm::Wrapper<l1t::TauRef>   w_refTau_;
    edm::Wrapper<l1t::TauRefVector>   w_refVecTau_;
    edm::Wrapper<l1t::TauVectorRef>   w_vecRefTau_;

    //l1t::CaloSpareRef   refCaloSpare_;
    //l1t::CaloSpareRefVector   refVecCaloSpare_;
    //l1t::CaloSpareVectorRef   vecRefCaloSpare_;
    //edm::Wrapper<l1t::CaloSpareRef>   w_refCaloSpare_;
    //edm::Wrapper<l1t::CaloSpareRefVector>   w_refVecCaloSpare_;
    //edm::Wrapper<l1t::CaloSpareVectorRef>   w_vecRefCaloSpare_;

    //l1t::L1DataEmulResultRef   refL1DataEmulResult_;
    //l1t::L1DataEmulResultRefVector   refVecL1DataEmulResult_;
    //l1t::L1DataEmulResultVectorRef   vecRefL1DataEmulResult_;
    //edm::Wrapper<l1t::L1DataEmulResultRef>   w_refL1DataEmulResult_;
    //edm::Wrapper<l1t::L1DataEmulResultRefVector>   w_refVecL1DataEmulResult_;
    //edm::Wrapper<l1t::L1DataEmulResultVectorRef>   w_vecRefL1DataEmulResult_;



    l1extra::L1EmParticleCollection emColl ;
    l1extra::L1JetParticleCollection jetColl ;
    l1extra::L1MuonParticleCollection muonColl ;
    l1extra::L1EtMissParticle etMiss ;
    l1extra::L1EtMissParticleCollection etMissColl ;
    l1extra::L1ParticleMapCollection mapColl ;
    l1extra::L1HFRingsCollection hfRingsColl ;

    edm::Wrapper<l1extra::L1EmParticleCollection> w_emColl;
    edm::Wrapper<l1extra::L1JetParticleCollection> w_jetColl;
    edm::Wrapper<l1extra::L1MuonParticleCollection> w_muonColl;
    edm::Wrapper<l1extra::L1EtMissParticle> w_etMiss;
    edm::Wrapper<l1extra::L1EtMissParticleCollection> w_etMissColl;
    edm::Wrapper<l1extra::L1ParticleMapCollection> w_mapColl;
    edm::Wrapper<l1extra::L1HFRingsCollection> w_hfRingsColl;

    l1extra::L1EmParticleRef refEm ;
    l1extra::L1JetParticleRef refJet ;
    l1extra::L1MuonParticleRef refMuon ;
    l1extra::L1EtMissParticleRef refEtMiss ;
    l1extra::L1HFRingsRef refHFRings ;

    l1extra::L1EmParticleRefVector refVecEmColl ;
    l1extra::L1JetParticleRefVector refVecJetColl ;
    l1extra::L1MuonParticleRefVector refVecMuonColl ;
    l1extra::L1EtMissParticleRefVector refVecEtMiss ;
    l1extra::L1HFRingsRefVector refVecHFRings ;

    l1extra::L1EmParticleVectorRef vecRefEmColl ;
    l1extra::L1JetParticleVectorRef vecRefJetColl ;
    l1extra::L1MuonParticleVectorRef vecRefMuonColl ;
    l1extra::L1EtMissParticleVectorRef vecRefEtMissColl ;
    l1extra::L1HFRingsVectorRef vecRefHFRingsColl ;

    l1extra::L1EtMissParticleRefProd refProdEtMiss ;

    edm::reftobase::Holder<reco::Candidate, l1extra::L1EmParticleRef> rtbe;
    edm::reftobase::Holder<reco::Candidate, l1extra::L1MuonParticleRef> rtbm;
    edm::reftobase::Holder<reco::Candidate, l1extra::L1JetParticleRef> rtbj;
    edm::reftobase::Holder<reco::Candidate, l1extra::L1EtMissParticleRef> rtbm1;
    edm::reftobase::Holder<reco::Candidate, l1extra::L1EtMissParticleRefProd> rtbm2;

    std::vector<l1extra::L1ParticleMap::L1ObjectType> dummy1 ;

    L1DataEmulRecord der;
    edm::Wrapper<L1DataEmulRecord> w_der;

    L1TriggerError l1tErr;
    L1TriggerErrorCollection l1tErrColl;
    edm::Wrapper<L1TriggerErrorCollection> w_l1terr;
  };
}

#undef  _BACKWARD_BACKWARD_WARNING_H
)DICTPAYLOAD";
    static const char* classesHeaders[]={
"BXVector<l1t::CaloSpare>", payloadCode, "@",
"BXVector<l1t::EGamma>", payloadCode, "@",
"BXVector<l1t::EtSum>", payloadCode, "@",
"BXVector<l1t::Jet>", payloadCode, "@",
"BXVector<l1t::L1Candidate>", payloadCode, "@",
"BXVector<l1t::L1DataEmulResult>", payloadCode, "@",
"BXVector<l1t::Muon>", payloadCode, "@",
"BXVector<l1t::Tau>", payloadCode, "@",
"GltDEDigi", payloadCode, "@",
"L1DataEmulDigi", payloadCode, "@",
"L1DataEmulRecord", payloadCode, "@",
"L1MonitorDigi", payloadCode, "@",
"L1TriggerError", payloadCode, "@",
"edm::Ref<BXVector<l1t::EGamma>,l1t::EGamma,edm::refhelper::FindUsingAdvance<BXVector<l1t::EGamma>,l1t::EGamma> >", payloadCode, "@",
"edm::Ref<BXVector<l1t::EtSum>,l1t::EtSum,edm::refhelper::FindUsingAdvance<BXVector<l1t::EtSum>,l1t::EtSum> >", payloadCode, "@",
"edm::Ref<BXVector<l1t::Jet>,l1t::Jet,edm::refhelper::FindUsingAdvance<BXVector<l1t::Jet>,l1t::Jet> >", payloadCode, "@",
"edm::Ref<BXVector<l1t::L1Candidate>,l1t::L1Candidate,edm::refhelper::FindUsingAdvance<BXVector<l1t::L1Candidate>,l1t::L1Candidate> >", payloadCode, "@",
"edm::Ref<BXVector<l1t::Muon>,l1t::Muon,edm::refhelper::FindUsingAdvance<BXVector<l1t::Muon>,l1t::Muon> >", payloadCode, "@",
"edm::Ref<BXVector<l1t::Tau>,l1t::Tau,edm::refhelper::FindUsingAdvance<BXVector<l1t::Tau>,l1t::Tau> >", payloadCode, "@",
"edm::Ref<std::vector<l1extra::L1EmParticle>,l1extra::L1EmParticle,edm::refhelper::FindUsingAdvance<std::vector<l1extra::L1EmParticle>,l1extra::L1EmParticle> >", payloadCode, "@",
"edm::Ref<std::vector<l1extra::L1EtMissParticle>,l1extra::L1EtMissParticle,edm::refhelper::FindUsingAdvance<std::vector<l1extra::L1EtMissParticle>,l1extra::L1EtMissParticle> >", payloadCode, "@",
"edm::Ref<std::vector<l1extra::L1HFRings>,l1extra::L1HFRings,edm::refhelper::FindUsingAdvance<std::vector<l1extra::L1HFRings>,l1extra::L1HFRings> >", payloadCode, "@",
"edm::Ref<std::vector<l1extra::L1JetParticle>,l1extra::L1JetParticle,edm::refhelper::FindUsingAdvance<std::vector<l1extra::L1JetParticle>,l1extra::L1JetParticle> >", payloadCode, "@",
"edm::Ref<std::vector<l1extra::L1MuonParticle>,l1extra::L1MuonParticle,edm::refhelper::FindUsingAdvance<std::vector<l1extra::L1MuonParticle>,l1extra::L1MuonParticle> >", payloadCode, "@",
"edm::Ref<vector<l1extra::L1EmParticle>,l1extra::L1EmParticle,edm::refhelper::FindUsingAdvance<vector<l1extra::L1EmParticle>,l1extra::L1EmParticle> >", payloadCode, "@",
"edm::Ref<vector<l1extra::L1EtMissParticle>,l1extra::L1EtMissParticle,edm::refhelper::FindUsingAdvance<vector<l1extra::L1EtMissParticle>,l1extra::L1EtMissParticle> >", payloadCode, "@",
"edm::Ref<vector<l1extra::L1HFRings>,l1extra::L1HFRings,edm::refhelper::FindUsingAdvance<vector<l1extra::L1HFRings>,l1extra::L1HFRings> >", payloadCode, "@",
"edm::Ref<vector<l1extra::L1JetParticle>,l1extra::L1JetParticle,edm::refhelper::FindUsingAdvance<vector<l1extra::L1JetParticle>,l1extra::L1JetParticle> >", payloadCode, "@",
"edm::Ref<vector<l1extra::L1MuonParticle>,l1extra::L1MuonParticle,edm::refhelper::FindUsingAdvance<vector<l1extra::L1MuonParticle>,l1extra::L1MuonParticle> >", payloadCode, "@",
"edm::RefProd<l1extra::L1EtMissParticle>", payloadCode, "@",
"edm::RefVector<BXVector<l1t::EGamma>,l1t::EGamma,edm::refhelper::FindUsingAdvance<BXVector<l1t::EGamma>,l1t::EGamma> >", payloadCode, "@",
"edm::RefVector<BXVector<l1t::EtSum>,l1t::EtSum,edm::refhelper::FindUsingAdvance<BXVector<l1t::EtSum>,l1t::EtSum> >", payloadCode, "@",
"edm::RefVector<BXVector<l1t::Jet>,l1t::Jet,edm::refhelper::FindUsingAdvance<BXVector<l1t::Jet>,l1t::Jet> >", payloadCode, "@",
"edm::RefVector<BXVector<l1t::L1Candidate>,l1t::L1Candidate,edm::refhelper::FindUsingAdvance<BXVector<l1t::L1Candidate>,l1t::L1Candidate> >", payloadCode, "@",
"edm::RefVector<BXVector<l1t::Muon>,l1t::Muon,edm::refhelper::FindUsingAdvance<BXVector<l1t::Muon>,l1t::Muon> >", payloadCode, "@",
"edm::RefVector<BXVector<l1t::Tau>,l1t::Tau,edm::refhelper::FindUsingAdvance<BXVector<l1t::Tau>,l1t::Tau> >", payloadCode, "@",
"edm::RefVector<std::vector<l1extra::L1EmParticle>,l1extra::L1EmParticle,edm::refhelper::FindUsingAdvance<std::vector<l1extra::L1EmParticle>,l1extra::L1EmParticle> >", payloadCode, "@",
"edm::RefVector<std::vector<l1extra::L1EtMissParticle>,l1extra::L1EtMissParticle,edm::refhelper::FindUsingAdvance<std::vector<l1extra::L1EtMissParticle>,l1extra::L1EtMissParticle> >", payloadCode, "@",
"edm::RefVector<std::vector<l1extra::L1HFRings>,l1extra::L1HFRings,edm::refhelper::FindUsingAdvance<std::vector<l1extra::L1HFRings>,l1extra::L1HFRings> >", payloadCode, "@",
"edm::RefVector<std::vector<l1extra::L1JetParticle>,l1extra::L1JetParticle,edm::refhelper::FindUsingAdvance<std::vector<l1extra::L1JetParticle>,l1extra::L1JetParticle> >", payloadCode, "@",
"edm::RefVector<std::vector<l1extra::L1MuonParticle>,l1extra::L1MuonParticle,edm::refhelper::FindUsingAdvance<std::vector<l1extra::L1MuonParticle>,l1extra::L1MuonParticle> >", payloadCode, "@",
"edm::RefVector<vector<l1extra::L1EmParticle>,l1extra::L1EmParticle,edm::refhelper::FindUsingAdvance<vector<l1extra::L1EmParticle>,l1extra::L1EmParticle> >", payloadCode, "@",
"edm::RefVector<vector<l1extra::L1EtMissParticle>,l1extra::L1EtMissParticle,edm::refhelper::FindUsingAdvance<vector<l1extra::L1EtMissParticle>,l1extra::L1EtMissParticle> >", payloadCode, "@",
"edm::RefVector<vector<l1extra::L1HFRings>,l1extra::L1HFRings,edm::refhelper::FindUsingAdvance<vector<l1extra::L1HFRings>,l1extra::L1HFRings> >", payloadCode, "@",
"edm::RefVector<vector<l1extra::L1JetParticle>,l1extra::L1JetParticle,edm::refhelper::FindUsingAdvance<vector<l1extra::L1JetParticle>,l1extra::L1JetParticle> >", payloadCode, "@",
"edm::RefVector<vector<l1extra::L1MuonParticle>,l1extra::L1MuonParticle,edm::refhelper::FindUsingAdvance<vector<l1extra::L1MuonParticle>,l1extra::L1MuonParticle> >", payloadCode, "@",
"edm::Wrapper<BXVector<l1t::CaloSpare> >", payloadCode, "@",
"edm::Wrapper<BXVector<l1t::EGamma> >", payloadCode, "@",
"edm::Wrapper<BXVector<l1t::EtSum> >", payloadCode, "@",
"edm::Wrapper<BXVector<l1t::Jet> >", payloadCode, "@",
"edm::Wrapper<BXVector<l1t::L1Candidate> >", payloadCode, "@",
"edm::Wrapper<BXVector<l1t::L1DataEmulResult> >", payloadCode, "@",
"edm::Wrapper<BXVector<l1t::Muon> >", payloadCode, "@",
"edm::Wrapper<BXVector<l1t::Tau> >", payloadCode, "@",
"edm::Wrapper<L1DataEmulRecord>", payloadCode, "@",
"edm::Wrapper<edm::Ref<BXVector<l1t::EGamma>,l1t::EGamma,edm::refhelper::FindUsingAdvance<BXVector<l1t::EGamma>,l1t::EGamma> > >", payloadCode, "@",
"edm::Wrapper<edm::Ref<BXVector<l1t::EtSum>,l1t::EtSum,edm::refhelper::FindUsingAdvance<BXVector<l1t::EtSum>,l1t::EtSum> > >", payloadCode, "@",
"edm::Wrapper<edm::Ref<BXVector<l1t::Jet>,l1t::Jet,edm::refhelper::FindUsingAdvance<BXVector<l1t::Jet>,l1t::Jet> > >", payloadCode, "@",
"edm::Wrapper<edm::Ref<BXVector<l1t::L1Candidate>,l1t::L1Candidate,edm::refhelper::FindUsingAdvance<BXVector<l1t::L1Candidate>,l1t::L1Candidate> > >", payloadCode, "@",
"edm::Wrapper<edm::Ref<BXVector<l1t::Muon>,l1t::Muon,edm::refhelper::FindUsingAdvance<BXVector<l1t::Muon>,l1t::Muon> > >", payloadCode, "@",
"edm::Wrapper<edm::Ref<BXVector<l1t::Tau>,l1t::Tau,edm::refhelper::FindUsingAdvance<BXVector<l1t::Tau>,l1t::Tau> > >", payloadCode, "@",
"edm::Wrapper<edm::RefVector<BXVector<l1t::EGamma>,l1t::EGamma,edm::refhelper::FindUsingAdvance<BXVector<l1t::EGamma>,l1t::EGamma> > >", payloadCode, "@",
"edm::Wrapper<edm::RefVector<BXVector<l1t::EtSum>,l1t::EtSum,edm::refhelper::FindUsingAdvance<BXVector<l1t::EtSum>,l1t::EtSum> > >", payloadCode, "@",
"edm::Wrapper<edm::RefVector<BXVector<l1t::Jet>,l1t::Jet,edm::refhelper::FindUsingAdvance<BXVector<l1t::Jet>,l1t::Jet> > >", payloadCode, "@",
"edm::Wrapper<edm::RefVector<BXVector<l1t::L1Candidate>,l1t::L1Candidate,edm::refhelper::FindUsingAdvance<BXVector<l1t::L1Candidate>,l1t::L1Candidate> > >", payloadCode, "@",
"edm::Wrapper<edm::RefVector<BXVector<l1t::Muon>,l1t::Muon,edm::refhelper::FindUsingAdvance<BXVector<l1t::Muon>,l1t::Muon> > >", payloadCode, "@",
"edm::Wrapper<edm::RefVector<BXVector<l1t::Tau>,l1t::Tau,edm::refhelper::FindUsingAdvance<BXVector<l1t::Tau>,l1t::Tau> > >", payloadCode, "@",
"edm::Wrapper<l1extra::L1EtMissParticle>", payloadCode, "@",
"edm::Wrapper<l1t::CaloSpareBxCollection>", payloadCode, "@",
"edm::Wrapper<l1t::EGammaBxCollection>", payloadCode, "@",
"edm::Wrapper<l1t::EGammaRef>", payloadCode, "@",
"edm::Wrapper<l1t::EGammaRefVector>", payloadCode, "@",
"edm::Wrapper<l1t::EGammaVectorRef>", payloadCode, "@",
"edm::Wrapper<l1t::EtSumBxCollection>", payloadCode, "@",
"edm::Wrapper<l1t::EtSumRef>", payloadCode, "@",
"edm::Wrapper<l1t::EtSumRefVector>", payloadCode, "@",
"edm::Wrapper<l1t::EtSumVectorRef>", payloadCode, "@",
"edm::Wrapper<l1t::JetBxCollection>", payloadCode, "@",
"edm::Wrapper<l1t::JetRef>", payloadCode, "@",
"edm::Wrapper<l1t::JetRefVector>", payloadCode, "@",
"edm::Wrapper<l1t::JetVectorRef>", payloadCode, "@",
"edm::Wrapper<l1t::L1CandidateBxCollection>", payloadCode, "@",
"edm::Wrapper<l1t::L1CandidateRef>", payloadCode, "@",
"edm::Wrapper<l1t::L1CandidateRefVector>", payloadCode, "@",
"edm::Wrapper<l1t::L1CandidateVectorRef>", payloadCode, "@",
"edm::Wrapper<l1t::L1DataEmulResultBxCollection>", payloadCode, "@",
"edm::Wrapper<l1t::MuonBxCollection>", payloadCode, "@",
"edm::Wrapper<l1t::MuonRef>", payloadCode, "@",
"edm::Wrapper<l1t::MuonRefVector>", payloadCode, "@",
"edm::Wrapper<l1t::MuonVectorRef>", payloadCode, "@",
"edm::Wrapper<l1t::TauBxCollection>", payloadCode, "@",
"edm::Wrapper<l1t::TauRef>", payloadCode, "@",
"edm::Wrapper<l1t::TauRefVector>", payloadCode, "@",
"edm::Wrapper<l1t::TauVectorRef>", payloadCode, "@",
"edm::Wrapper<std::vector<L1TriggerError> >", payloadCode, "@",
"edm::Wrapper<std::vector<l1extra::L1EmParticle> >", payloadCode, "@",
"edm::Wrapper<std::vector<l1extra::L1EtMissParticle> >", payloadCode, "@",
"edm::Wrapper<std::vector<l1extra::L1HFRings> >", payloadCode, "@",
"edm::Wrapper<std::vector<l1extra::L1JetParticle> >", payloadCode, "@",
"edm::Wrapper<std::vector<l1extra::L1MuonParticle> >", payloadCode, "@",
"edm::Wrapper<std::vector<l1extra::L1ParticleMap> >", payloadCode, "@",
"edm::Wrapper<vector<L1TriggerError> >", payloadCode, "@",
"edm::Wrapper<vector<edm::Ref<BXVector<l1t::EGamma>,l1t::EGamma,edm::refhelper::FindUsingAdvance<BXVector<l1t::EGamma>,l1t::EGamma> > > >", payloadCode, "@",
"edm::Wrapper<vector<edm::Ref<BXVector<l1t::EtSum>,l1t::EtSum,edm::refhelper::FindUsingAdvance<BXVector<l1t::EtSum>,l1t::EtSum> > > >", payloadCode, "@",
"edm::Wrapper<vector<edm::Ref<BXVector<l1t::Jet>,l1t::Jet,edm::refhelper::FindUsingAdvance<BXVector<l1t::Jet>,l1t::Jet> > > >", payloadCode, "@",
"edm::Wrapper<vector<edm::Ref<BXVector<l1t::L1Candidate>,l1t::L1Candidate,edm::refhelper::FindUsingAdvance<BXVector<l1t::L1Candidate>,l1t::L1Candidate> > > >", payloadCode, "@",
"edm::Wrapper<vector<edm::Ref<BXVector<l1t::Muon>,l1t::Muon,edm::refhelper::FindUsingAdvance<BXVector<l1t::Muon>,l1t::Muon> > > >", payloadCode, "@",
"edm::Wrapper<vector<edm::Ref<BXVector<l1t::Tau>,l1t::Tau,edm::refhelper::FindUsingAdvance<BXVector<l1t::Tau>,l1t::Tau> > > >", payloadCode, "@",
"edm::Wrapper<vector<l1extra::L1EmParticle> >", payloadCode, "@",
"edm::Wrapper<vector<l1extra::L1EtMissParticle> >", payloadCode, "@",
"edm::Wrapper<vector<l1extra::L1HFRings> >", payloadCode, "@",
"edm::Wrapper<vector<l1extra::L1JetParticle> >", payloadCode, "@",
"edm::Wrapper<vector<l1extra::L1MuonParticle> >", payloadCode, "@",
"edm::Wrapper<vector<l1extra::L1ParticleMap> >", payloadCode, "@",
"edm::reftobase::Holder<reco::Candidate,edm::Ref<std::vector<l1extra::L1EmParticle>,l1extra::L1EmParticle,edm::refhelper::FindUsingAdvance<std::vector<l1extra::L1EmParticle>,l1extra::L1EmParticle> > >", payloadCode, "@",
"edm::reftobase::Holder<reco::Candidate,edm::Ref<std::vector<l1extra::L1EtMissParticle>,l1extra::L1EtMissParticle,edm::refhelper::FindUsingAdvance<std::vector<l1extra::L1EtMissParticle>,l1extra::L1EtMissParticle> > >", payloadCode, "@",
"edm::reftobase::Holder<reco::Candidate,edm::Ref<std::vector<l1extra::L1JetParticle>,l1extra::L1JetParticle,edm::refhelper::FindUsingAdvance<std::vector<l1extra::L1JetParticle>,l1extra::L1JetParticle> > >", payloadCode, "@",
"edm::reftobase::Holder<reco::Candidate,edm::Ref<std::vector<l1extra::L1MuonParticle>,l1extra::L1MuonParticle,edm::refhelper::FindUsingAdvance<std::vector<l1extra::L1MuonParticle>,l1extra::L1MuonParticle> > >", payloadCode, "@",
"edm::reftobase::Holder<reco::Candidate,edm::Ref<vector<l1extra::L1EmParticle>,l1extra::L1EmParticle,edm::refhelper::FindUsingAdvance<vector<l1extra::L1EmParticle>,l1extra::L1EmParticle> > >", payloadCode, "@",
"edm::reftobase::Holder<reco::Candidate,edm::Ref<vector<l1extra::L1EtMissParticle>,l1extra::L1EtMissParticle,edm::refhelper::FindUsingAdvance<vector<l1extra::L1EtMissParticle>,l1extra::L1EtMissParticle> > >", payloadCode, "@",
"edm::reftobase::Holder<reco::Candidate,edm::Ref<vector<l1extra::L1JetParticle>,l1extra::L1JetParticle,edm::refhelper::FindUsingAdvance<vector<l1extra::L1JetParticle>,l1extra::L1JetParticle> > >", payloadCode, "@",
"edm::reftobase::Holder<reco::Candidate,edm::Ref<vector<l1extra::L1MuonParticle>,l1extra::L1MuonParticle,edm::refhelper::FindUsingAdvance<vector<l1extra::L1MuonParticle>,l1extra::L1MuonParticle> > >", payloadCode, "@",
"edm::reftobase::Holder<reco::Candidate,edm::RefProd<l1extra::L1EtMissParticle> >", payloadCode, "@",
"l1extra::L1EmParticle", payloadCode, "@",
"l1extra::L1EtMissParticle", payloadCode, "@",
"l1extra::L1HFRings", payloadCode, "@",
"l1extra::L1JetParticle", payloadCode, "@",
"l1extra::L1MuonParticle", payloadCode, "@",
"l1extra::L1ParticleMap", payloadCode, "@",
"l1t::CaloSpare", payloadCode, "@",
"l1t::CaloSpareBxCollection", payloadCode, "@",
"l1t::EGamma", payloadCode, "@",
"l1t::EGammaBxCollection", payloadCode, "@",
"l1t::EGammaRef", payloadCode, "@",
"l1t::EGammaRefVector", payloadCode, "@",
"l1t::EGammaVectorRef", payloadCode, "@",
"l1t::EtSum", payloadCode, "@",
"l1t::EtSumBxCollection", payloadCode, "@",
"l1t::EtSumRef", payloadCode, "@",
"l1t::EtSumRefVector", payloadCode, "@",
"l1t::EtSumVectorRef", payloadCode, "@",
"l1t::Jet", payloadCode, "@",
"l1t::JetBxCollection", payloadCode, "@",
"l1t::JetRef", payloadCode, "@",
"l1t::JetRefVector", payloadCode, "@",
"l1t::JetVectorRef", payloadCode, "@",
"l1t::L1Candidate", payloadCode, "@",
"l1t::L1CandidateBxCollection", payloadCode, "@",
"l1t::L1CandidateRef", payloadCode, "@",
"l1t::L1CandidateRefVector", payloadCode, "@",
"l1t::L1CandidateVectorRef", payloadCode, "@",
"l1t::L1DataEmulResult", payloadCode, "@",
"l1t::L1DataEmulResultBxCollection", payloadCode, "@",
"l1t::Muon", payloadCode, "@",
"l1t::MuonBxCollection", payloadCode, "@",
"l1t::MuonRef", payloadCode, "@",
"l1t::MuonRefVector", payloadCode, "@",
"l1t::MuonVectorRef", payloadCode, "@",
"l1t::Tau", payloadCode, "@",
"l1t::TauBxCollection", payloadCode, "@",
"l1t::TauRef", payloadCode, "@",
"l1t::TauRefVector", payloadCode, "@",
"l1t::TauVectorRef", payloadCode, "@",
nullptr};

    static bool isInitialized = false;
    if (!isInitialized) {
      TROOT::RegisterModule("DataFormatsL1Trigger_xr",
        headers, includePaths, payloadCode, fwdDeclCode,
        TriggerDictionaryInitialization_DataFormatsL1Trigger_xr_Impl, {}, classesHeaders);
      isInitialized = true;
    }
  }
  static struct DictInit {
    DictInit() {
      TriggerDictionaryInitialization_DataFormatsL1Trigger_xr_Impl();
    }
  } __TheDictionaryInitializer;
}
void TriggerDictionaryInitialization_DataFormatsL1Trigger_xr() {
  TriggerDictionaryInitialization_DataFormatsL1Trigger_xr_Impl();
}
