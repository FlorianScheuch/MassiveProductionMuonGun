// Do NOT change. Changes will be lost next time file is generated

#define R__DICTIONARY_FILENAME tmpdIslc6_amd64_gcc530dIsrcdIDataFormatsdIL1TGlobaldIsrcdIDataFormatsL1TGlobaldIadIDataFormatsL1TGlobal_xr

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
#include "src/DataFormats/L1TGlobal/src/classes.h"

// Header files passed via #pragma extra_include

namespace ROOT {
   static TClass *GlobalAlgBlk_Dictionary();
   static void GlobalAlgBlk_TClassManip(TClass*);
   static void *new_GlobalAlgBlk(void *p = 0);
   static void *newArray_GlobalAlgBlk(Long_t size, void *p);
   static void delete_GlobalAlgBlk(void *p);
   static void deleteArray_GlobalAlgBlk(void *p);
   static void destruct_GlobalAlgBlk(void *p);

   // Function generating the singleton type initializer
   static TGenericClassInfo *GenerateInitInstanceLocal(const ::GlobalAlgBlk*)
   {
      ::GlobalAlgBlk *ptr = 0;
      static ::TVirtualIsAProxy* isa_proxy = new ::TIsAProxy(typeid(::GlobalAlgBlk));
      static ::ROOT::TGenericClassInfo 
         instance("GlobalAlgBlk", 13, "DataFormats/L1TGlobal/interface/GlobalAlgBlk.h", 36,
                  typeid(::GlobalAlgBlk), ::ROOT::Internal::DefineBehavior(ptr, ptr),
                  &GlobalAlgBlk_Dictionary, isa_proxy, 8,
                  sizeof(::GlobalAlgBlk) );
      instance.SetNew(&new_GlobalAlgBlk);
      instance.SetNewArray(&newArray_GlobalAlgBlk);
      instance.SetDelete(&delete_GlobalAlgBlk);
      instance.SetDeleteArray(&deleteArray_GlobalAlgBlk);
      instance.SetDestructor(&destruct_GlobalAlgBlk);
      return &instance;
   }
   TGenericClassInfo *GenerateInitInstance(const ::GlobalAlgBlk*)
   {
      return GenerateInitInstanceLocal((::GlobalAlgBlk*)0);
   }
   // Static variable to force the class initialization
   static ::ROOT::TGenericClassInfo *_R__UNIQUE_(Init) = GenerateInitInstanceLocal((const ::GlobalAlgBlk*)0x0); R__UseDummy(_R__UNIQUE_(Init));

   // Dictionary for non-ClassDef classes
   static TClass *GlobalAlgBlk_Dictionary() {
      TClass* theClass =::ROOT::GenerateInitInstanceLocal((const ::GlobalAlgBlk*)0x0)->GetClass();
      GlobalAlgBlk_TClassManip(theClass);
   return theClass;
   }

   static void GlobalAlgBlk_TClassManip(TClass* ){
   }

} // end of namespace ROOT

namespace ROOT {
   static TClass *BXVectorlEGlobalAlgBlkgR_Dictionary();
   static void BXVectorlEGlobalAlgBlkgR_TClassManip(TClass*);
   static void *new_BXVectorlEGlobalAlgBlkgR(void *p = 0);
   static void *newArray_BXVectorlEGlobalAlgBlkgR(Long_t size, void *p);
   static void delete_BXVectorlEGlobalAlgBlkgR(void *p);
   static void deleteArray_BXVectorlEGlobalAlgBlkgR(void *p);
   static void destruct_BXVectorlEGlobalAlgBlkgR(void *p);

   // Function generating the singleton type initializer
   static TGenericClassInfo *GenerateInitInstanceLocal(const ::BXVector<GlobalAlgBlk>*)
   {
      ::BXVector<GlobalAlgBlk> *ptr = 0;
      static ::TVirtualIsAProxy* isa_proxy = new ::TIsAProxy(typeid(::BXVector<GlobalAlgBlk>));
      static ::ROOT::TGenericClassInfo 
         instance("BXVector<GlobalAlgBlk>", "DataFormats/L1Trigger/interface/BXVector.h", 15,
                  typeid(::BXVector<GlobalAlgBlk>), ::ROOT::Internal::DefineBehavior(ptr, ptr),
                  &BXVectorlEGlobalAlgBlkgR_Dictionary, isa_proxy, 0,
                  sizeof(::BXVector<GlobalAlgBlk>) );
      instance.SetNew(&new_BXVectorlEGlobalAlgBlkgR);
      instance.SetNewArray(&newArray_BXVectorlEGlobalAlgBlkgR);
      instance.SetDelete(&delete_BXVectorlEGlobalAlgBlkgR);
      instance.SetDeleteArray(&deleteArray_BXVectorlEGlobalAlgBlkgR);
      instance.SetDestructor(&destruct_BXVectorlEGlobalAlgBlkgR);

      ::ROOT::AddClassAlternate("BXVector<GlobalAlgBlk>","GlobalAlgBlkBxCollection");
      return &instance;
   }
   TGenericClassInfo *GenerateInitInstance(const ::BXVector<GlobalAlgBlk>*)
   {
      return GenerateInitInstanceLocal((::BXVector<GlobalAlgBlk>*)0);
   }
   // Static variable to force the class initialization
   static ::ROOT::TGenericClassInfo *_R__UNIQUE_(Init) = GenerateInitInstanceLocal((const ::BXVector<GlobalAlgBlk>*)0x0); R__UseDummy(_R__UNIQUE_(Init));

   // Dictionary for non-ClassDef classes
   static TClass *BXVectorlEGlobalAlgBlkgR_Dictionary() {
      TClass* theClass =::ROOT::GenerateInitInstanceLocal((const ::BXVector<GlobalAlgBlk>*)0x0)->GetClass();
      BXVectorlEGlobalAlgBlkgR_TClassManip(theClass);
   return theClass;
   }

   static void BXVectorlEGlobalAlgBlkgR_TClassManip(TClass* ){
   }

} // end of namespace ROOT

namespace ROOT {
   static TClass *edmcLcLWrapperlEBXVectorlEGlobalAlgBlkgRsPgR_Dictionary();
   static void edmcLcLWrapperlEBXVectorlEGlobalAlgBlkgRsPgR_TClassManip(TClass*);
   static void *new_edmcLcLWrapperlEBXVectorlEGlobalAlgBlkgRsPgR(void *p = 0);
   static void *newArray_edmcLcLWrapperlEBXVectorlEGlobalAlgBlkgRsPgR(Long_t size, void *p);
   static void delete_edmcLcLWrapperlEBXVectorlEGlobalAlgBlkgRsPgR(void *p);
   static void deleteArray_edmcLcLWrapperlEBXVectorlEGlobalAlgBlkgRsPgR(void *p);
   static void destruct_edmcLcLWrapperlEBXVectorlEGlobalAlgBlkgRsPgR(void *p);

   // Function generating the singleton type initializer
   static TGenericClassInfo *GenerateInitInstanceLocal(const ::edm::Wrapper<BXVector<GlobalAlgBlk> >*)
   {
      ::edm::Wrapper<BXVector<GlobalAlgBlk> > *ptr = 0;
      static ::TVirtualIsAProxy* isa_proxy = new ::TIsAProxy(typeid(::edm::Wrapper<BXVector<GlobalAlgBlk> >));
      static ::ROOT::TGenericClassInfo 
         instance("edm::Wrapper<BXVector<GlobalAlgBlk> >", ::edm::Wrapper<BXVector<GlobalAlgBlk> >::Class_Version(), "DataFormats/Common/interface/Wrapper.h", 25,
                  typeid(::edm::Wrapper<BXVector<GlobalAlgBlk> >), ::ROOT::Internal::DefineBehavior(ptr, ptr),
                  &edmcLcLWrapperlEBXVectorlEGlobalAlgBlkgRsPgR_Dictionary, isa_proxy, 0,
                  sizeof(::edm::Wrapper<BXVector<GlobalAlgBlk> >) );
      instance.SetNew(&new_edmcLcLWrapperlEBXVectorlEGlobalAlgBlkgRsPgR);
      instance.SetNewArray(&newArray_edmcLcLWrapperlEBXVectorlEGlobalAlgBlkgRsPgR);
      instance.SetDelete(&delete_edmcLcLWrapperlEBXVectorlEGlobalAlgBlkgRsPgR);
      instance.SetDeleteArray(&deleteArray_edmcLcLWrapperlEBXVectorlEGlobalAlgBlkgRsPgR);
      instance.SetDestructor(&destruct_edmcLcLWrapperlEBXVectorlEGlobalAlgBlkgRsPgR);

      ::ROOT::AddClassAlternate("edm::Wrapper<BXVector<GlobalAlgBlk> >","edm::Wrapper<GlobalAlgBlkBxCollection>");
      return &instance;
   }
   TGenericClassInfo *GenerateInitInstance(const ::edm::Wrapper<BXVector<GlobalAlgBlk> >*)
   {
      return GenerateInitInstanceLocal((::edm::Wrapper<BXVector<GlobalAlgBlk> >*)0);
   }
   // Static variable to force the class initialization
   static ::ROOT::TGenericClassInfo *_R__UNIQUE_(Init) = GenerateInitInstanceLocal((const ::edm::Wrapper<BXVector<GlobalAlgBlk> >*)0x0); R__UseDummy(_R__UNIQUE_(Init));

   // Dictionary for non-ClassDef classes
   static TClass *edmcLcLWrapperlEBXVectorlEGlobalAlgBlkgRsPgR_Dictionary() {
      TClass* theClass =::ROOT::GenerateInitInstanceLocal((const ::edm::Wrapper<BXVector<GlobalAlgBlk> >*)0x0)->GetClass();
      edmcLcLWrapperlEBXVectorlEGlobalAlgBlkgRsPgR_TClassManip(theClass);
   return theClass;
   }

   static void edmcLcLWrapperlEBXVectorlEGlobalAlgBlkgRsPgR_TClassManip(TClass* ){
   }

} // end of namespace ROOT

namespace ROOT {
   static TClass *GlobalExtBlk_Dictionary();
   static void GlobalExtBlk_TClassManip(TClass*);
   static void *new_GlobalExtBlk(void *p = 0);
   static void *newArray_GlobalExtBlk(Long_t size, void *p);
   static void delete_GlobalExtBlk(void *p);
   static void deleteArray_GlobalExtBlk(void *p);
   static void destruct_GlobalExtBlk(void *p);

   // Function generating the singleton type initializer
   static TGenericClassInfo *GenerateInitInstanceLocal(const ::GlobalExtBlk*)
   {
      ::GlobalExtBlk *ptr = 0;
      static ::TVirtualIsAProxy* isa_proxy = new ::TIsAProxy(typeid(::GlobalExtBlk));
      static ::ROOT::TGenericClassInfo 
         instance("GlobalExtBlk", 13, "DataFormats/L1TGlobal/interface/GlobalExtBlk.h", 35,
                  typeid(::GlobalExtBlk), ::ROOT::Internal::DefineBehavior(ptr, ptr),
                  &GlobalExtBlk_Dictionary, isa_proxy, 8,
                  sizeof(::GlobalExtBlk) );
      instance.SetNew(&new_GlobalExtBlk);
      instance.SetNewArray(&newArray_GlobalExtBlk);
      instance.SetDelete(&delete_GlobalExtBlk);
      instance.SetDeleteArray(&deleteArray_GlobalExtBlk);
      instance.SetDestructor(&destruct_GlobalExtBlk);
      return &instance;
   }
   TGenericClassInfo *GenerateInitInstance(const ::GlobalExtBlk*)
   {
      return GenerateInitInstanceLocal((::GlobalExtBlk*)0);
   }
   // Static variable to force the class initialization
   static ::ROOT::TGenericClassInfo *_R__UNIQUE_(Init) = GenerateInitInstanceLocal((const ::GlobalExtBlk*)0x0); R__UseDummy(_R__UNIQUE_(Init));

   // Dictionary for non-ClassDef classes
   static TClass *GlobalExtBlk_Dictionary() {
      TClass* theClass =::ROOT::GenerateInitInstanceLocal((const ::GlobalExtBlk*)0x0)->GetClass();
      GlobalExtBlk_TClassManip(theClass);
   return theClass;
   }

   static void GlobalExtBlk_TClassManip(TClass* ){
   }

} // end of namespace ROOT

namespace ROOT {
   static TClass *BXVectorlEGlobalExtBlkgR_Dictionary();
   static void BXVectorlEGlobalExtBlkgR_TClassManip(TClass*);
   static void *new_BXVectorlEGlobalExtBlkgR(void *p = 0);
   static void *newArray_BXVectorlEGlobalExtBlkgR(Long_t size, void *p);
   static void delete_BXVectorlEGlobalExtBlkgR(void *p);
   static void deleteArray_BXVectorlEGlobalExtBlkgR(void *p);
   static void destruct_BXVectorlEGlobalExtBlkgR(void *p);

   // Function generating the singleton type initializer
   static TGenericClassInfo *GenerateInitInstanceLocal(const ::BXVector<GlobalExtBlk>*)
   {
      ::BXVector<GlobalExtBlk> *ptr = 0;
      static ::TVirtualIsAProxy* isa_proxy = new ::TIsAProxy(typeid(::BXVector<GlobalExtBlk>));
      static ::ROOT::TGenericClassInfo 
         instance("BXVector<GlobalExtBlk>", "DataFormats/L1Trigger/interface/BXVector.h", 15,
                  typeid(::BXVector<GlobalExtBlk>), ::ROOT::Internal::DefineBehavior(ptr, ptr),
                  &BXVectorlEGlobalExtBlkgR_Dictionary, isa_proxy, 0,
                  sizeof(::BXVector<GlobalExtBlk>) );
      instance.SetNew(&new_BXVectorlEGlobalExtBlkgR);
      instance.SetNewArray(&newArray_BXVectorlEGlobalExtBlkgR);
      instance.SetDelete(&delete_BXVectorlEGlobalExtBlkgR);
      instance.SetDeleteArray(&deleteArray_BXVectorlEGlobalExtBlkgR);
      instance.SetDestructor(&destruct_BXVectorlEGlobalExtBlkgR);

      ::ROOT::AddClassAlternate("BXVector<GlobalExtBlk>","GlobalExtBlkBxCollection");
      return &instance;
   }
   TGenericClassInfo *GenerateInitInstance(const ::BXVector<GlobalExtBlk>*)
   {
      return GenerateInitInstanceLocal((::BXVector<GlobalExtBlk>*)0);
   }
   // Static variable to force the class initialization
   static ::ROOT::TGenericClassInfo *_R__UNIQUE_(Init) = GenerateInitInstanceLocal((const ::BXVector<GlobalExtBlk>*)0x0); R__UseDummy(_R__UNIQUE_(Init));

   // Dictionary for non-ClassDef classes
   static TClass *BXVectorlEGlobalExtBlkgR_Dictionary() {
      TClass* theClass =::ROOT::GenerateInitInstanceLocal((const ::BXVector<GlobalExtBlk>*)0x0)->GetClass();
      BXVectorlEGlobalExtBlkgR_TClassManip(theClass);
   return theClass;
   }

   static void BXVectorlEGlobalExtBlkgR_TClassManip(TClass* ){
   }

} // end of namespace ROOT

namespace ROOT {
   static TClass *edmcLcLWrapperlEBXVectorlEGlobalExtBlkgRsPgR_Dictionary();
   static void edmcLcLWrapperlEBXVectorlEGlobalExtBlkgRsPgR_TClassManip(TClass*);
   static void *new_edmcLcLWrapperlEBXVectorlEGlobalExtBlkgRsPgR(void *p = 0);
   static void *newArray_edmcLcLWrapperlEBXVectorlEGlobalExtBlkgRsPgR(Long_t size, void *p);
   static void delete_edmcLcLWrapperlEBXVectorlEGlobalExtBlkgRsPgR(void *p);
   static void deleteArray_edmcLcLWrapperlEBXVectorlEGlobalExtBlkgRsPgR(void *p);
   static void destruct_edmcLcLWrapperlEBXVectorlEGlobalExtBlkgRsPgR(void *p);

   // Function generating the singleton type initializer
   static TGenericClassInfo *GenerateInitInstanceLocal(const ::edm::Wrapper<BXVector<GlobalExtBlk> >*)
   {
      ::edm::Wrapper<BXVector<GlobalExtBlk> > *ptr = 0;
      static ::TVirtualIsAProxy* isa_proxy = new ::TIsAProxy(typeid(::edm::Wrapper<BXVector<GlobalExtBlk> >));
      static ::ROOT::TGenericClassInfo 
         instance("edm::Wrapper<BXVector<GlobalExtBlk> >", ::edm::Wrapper<BXVector<GlobalExtBlk> >::Class_Version(), "DataFormats/Common/interface/Wrapper.h", 25,
                  typeid(::edm::Wrapper<BXVector<GlobalExtBlk> >), ::ROOT::Internal::DefineBehavior(ptr, ptr),
                  &edmcLcLWrapperlEBXVectorlEGlobalExtBlkgRsPgR_Dictionary, isa_proxy, 0,
                  sizeof(::edm::Wrapper<BXVector<GlobalExtBlk> >) );
      instance.SetNew(&new_edmcLcLWrapperlEBXVectorlEGlobalExtBlkgRsPgR);
      instance.SetNewArray(&newArray_edmcLcLWrapperlEBXVectorlEGlobalExtBlkgRsPgR);
      instance.SetDelete(&delete_edmcLcLWrapperlEBXVectorlEGlobalExtBlkgRsPgR);
      instance.SetDeleteArray(&deleteArray_edmcLcLWrapperlEBXVectorlEGlobalExtBlkgRsPgR);
      instance.SetDestructor(&destruct_edmcLcLWrapperlEBXVectorlEGlobalExtBlkgRsPgR);

      ::ROOT::AddClassAlternate("edm::Wrapper<BXVector<GlobalExtBlk> >","edm::Wrapper<GlobalExtBlkBxCollection>");
      return &instance;
   }
   TGenericClassInfo *GenerateInitInstance(const ::edm::Wrapper<BXVector<GlobalExtBlk> >*)
   {
      return GenerateInitInstanceLocal((::edm::Wrapper<BXVector<GlobalExtBlk> >*)0);
   }
   // Static variable to force the class initialization
   static ::ROOT::TGenericClassInfo *_R__UNIQUE_(Init) = GenerateInitInstanceLocal((const ::edm::Wrapper<BXVector<GlobalExtBlk> >*)0x0); R__UseDummy(_R__UNIQUE_(Init));

   // Dictionary for non-ClassDef classes
   static TClass *edmcLcLWrapperlEBXVectorlEGlobalExtBlkgRsPgR_Dictionary() {
      TClass* theClass =::ROOT::GenerateInitInstanceLocal((const ::edm::Wrapper<BXVector<GlobalExtBlk> >*)0x0)->GetClass();
      edmcLcLWrapperlEBXVectorlEGlobalExtBlkgRsPgR_TClassManip(theClass);
   return theClass;
   }

   static void edmcLcLWrapperlEBXVectorlEGlobalExtBlkgRsPgR_TClassManip(TClass* ){
   }

} // end of namespace ROOT

namespace ROOT {
   // Wrappers around operator new
   static void *new_GlobalAlgBlk(void *p) {
      return  p ? new(p) ::GlobalAlgBlk : new ::GlobalAlgBlk;
   }
   static void *newArray_GlobalAlgBlk(Long_t nElements, void *p) {
      return p ? new(p) ::GlobalAlgBlk[nElements] : new ::GlobalAlgBlk[nElements];
   }
   // Wrapper around operator delete
   static void delete_GlobalAlgBlk(void *p) {
      delete ((::GlobalAlgBlk*)p);
   }
   static void deleteArray_GlobalAlgBlk(void *p) {
      delete [] ((::GlobalAlgBlk*)p);
   }
   static void destruct_GlobalAlgBlk(void *p) {
      typedef ::GlobalAlgBlk current_t;
      ((current_t*)p)->~current_t();
   }
} // end of namespace ROOT for class ::GlobalAlgBlk

namespace ROOT {
   // Wrappers around operator new
   static void *new_BXVectorlEGlobalAlgBlkgR(void *p) {
      return  p ? new(p) ::BXVector<GlobalAlgBlk> : new ::BXVector<GlobalAlgBlk>;
   }
   static void *newArray_BXVectorlEGlobalAlgBlkgR(Long_t nElements, void *p) {
      return p ? new(p) ::BXVector<GlobalAlgBlk>[nElements] : new ::BXVector<GlobalAlgBlk>[nElements];
   }
   // Wrapper around operator delete
   static void delete_BXVectorlEGlobalAlgBlkgR(void *p) {
      delete ((::BXVector<GlobalAlgBlk>*)p);
   }
   static void deleteArray_BXVectorlEGlobalAlgBlkgR(void *p) {
      delete [] ((::BXVector<GlobalAlgBlk>*)p);
   }
   static void destruct_BXVectorlEGlobalAlgBlkgR(void *p) {
      typedef ::BXVector<GlobalAlgBlk> current_t;
      ((current_t*)p)->~current_t();
   }
} // end of namespace ROOT for class ::BXVector<GlobalAlgBlk>

namespace ROOT {
   // Wrappers around operator new
   static void *new_edmcLcLWrapperlEBXVectorlEGlobalAlgBlkgRsPgR(void *p) {
      return  p ? ::new((::ROOT::Internal::TOperatorNewHelper*)p) ::edm::Wrapper<BXVector<GlobalAlgBlk> > : new ::edm::Wrapper<BXVector<GlobalAlgBlk> >;
   }
   static void *newArray_edmcLcLWrapperlEBXVectorlEGlobalAlgBlkgRsPgR(Long_t nElements, void *p) {
      return p ? ::new((::ROOT::Internal::TOperatorNewHelper*)p) ::edm::Wrapper<BXVector<GlobalAlgBlk> >[nElements] : new ::edm::Wrapper<BXVector<GlobalAlgBlk> >[nElements];
   }
   // Wrapper around operator delete
   static void delete_edmcLcLWrapperlEBXVectorlEGlobalAlgBlkgRsPgR(void *p) {
      delete ((::edm::Wrapper<BXVector<GlobalAlgBlk> >*)p);
   }
   static void deleteArray_edmcLcLWrapperlEBXVectorlEGlobalAlgBlkgRsPgR(void *p) {
      delete [] ((::edm::Wrapper<BXVector<GlobalAlgBlk> >*)p);
   }
   static void destruct_edmcLcLWrapperlEBXVectorlEGlobalAlgBlkgRsPgR(void *p) {
      typedef ::edm::Wrapper<BXVector<GlobalAlgBlk> > current_t;
      ((current_t*)p)->~current_t();
   }
} // end of namespace ROOT for class ::edm::Wrapper<BXVector<GlobalAlgBlk> >

namespace ROOT {
   // Wrappers around operator new
   static void *new_GlobalExtBlk(void *p) {
      return  p ? new(p) ::GlobalExtBlk : new ::GlobalExtBlk;
   }
   static void *newArray_GlobalExtBlk(Long_t nElements, void *p) {
      return p ? new(p) ::GlobalExtBlk[nElements] : new ::GlobalExtBlk[nElements];
   }
   // Wrapper around operator delete
   static void delete_GlobalExtBlk(void *p) {
      delete ((::GlobalExtBlk*)p);
   }
   static void deleteArray_GlobalExtBlk(void *p) {
      delete [] ((::GlobalExtBlk*)p);
   }
   static void destruct_GlobalExtBlk(void *p) {
      typedef ::GlobalExtBlk current_t;
      ((current_t*)p)->~current_t();
   }
} // end of namespace ROOT for class ::GlobalExtBlk

namespace ROOT {
   // Wrappers around operator new
   static void *new_BXVectorlEGlobalExtBlkgR(void *p) {
      return  p ? new(p) ::BXVector<GlobalExtBlk> : new ::BXVector<GlobalExtBlk>;
   }
   static void *newArray_BXVectorlEGlobalExtBlkgR(Long_t nElements, void *p) {
      return p ? new(p) ::BXVector<GlobalExtBlk>[nElements] : new ::BXVector<GlobalExtBlk>[nElements];
   }
   // Wrapper around operator delete
   static void delete_BXVectorlEGlobalExtBlkgR(void *p) {
      delete ((::BXVector<GlobalExtBlk>*)p);
   }
   static void deleteArray_BXVectorlEGlobalExtBlkgR(void *p) {
      delete [] ((::BXVector<GlobalExtBlk>*)p);
   }
   static void destruct_BXVectorlEGlobalExtBlkgR(void *p) {
      typedef ::BXVector<GlobalExtBlk> current_t;
      ((current_t*)p)->~current_t();
   }
} // end of namespace ROOT for class ::BXVector<GlobalExtBlk>

namespace ROOT {
   // Wrappers around operator new
   static void *new_edmcLcLWrapperlEBXVectorlEGlobalExtBlkgRsPgR(void *p) {
      return  p ? ::new((::ROOT::Internal::TOperatorNewHelper*)p) ::edm::Wrapper<BXVector<GlobalExtBlk> > : new ::edm::Wrapper<BXVector<GlobalExtBlk> >;
   }
   static void *newArray_edmcLcLWrapperlEBXVectorlEGlobalExtBlkgRsPgR(Long_t nElements, void *p) {
      return p ? ::new((::ROOT::Internal::TOperatorNewHelper*)p) ::edm::Wrapper<BXVector<GlobalExtBlk> >[nElements] : new ::edm::Wrapper<BXVector<GlobalExtBlk> >[nElements];
   }
   // Wrapper around operator delete
   static void delete_edmcLcLWrapperlEBXVectorlEGlobalExtBlkgRsPgR(void *p) {
      delete ((::edm::Wrapper<BXVector<GlobalExtBlk> >*)p);
   }
   static void deleteArray_edmcLcLWrapperlEBXVectorlEGlobalExtBlkgRsPgR(void *p) {
      delete [] ((::edm::Wrapper<BXVector<GlobalExtBlk> >*)p);
   }
   static void destruct_edmcLcLWrapperlEBXVectorlEGlobalExtBlkgRsPgR(void *p) {
      typedef ::edm::Wrapper<BXVector<GlobalExtBlk> > current_t;
      ((current_t*)p)->~current_t();
   }
} // end of namespace ROOT for class ::edm::Wrapper<BXVector<GlobalExtBlk> >

namespace {
  void TriggerDictionaryInitialization_DataFormatsL1TGlobal_xr_Impl() {
    static const char* headers[] = {
0    };
    static const char* includePaths[] = {
"/disk1/scheuch/grid/FullDestroyAnalysis2016/Wheel0/Working/20160425/CMSSW_8_0_2/src",
"/disk1/scheuch/grid/FullDestroyAnalysis2016/Wheel0/Working/20160425/CMSSW_8_0_2/poison",
"/cvmfs/cms.cern.ch/slc6_amd64_gcc530/cms/cmssw/CMSSW_8_0_2/src",
"/cvmfs/cms.cern.ch/slc6_amd64_gcc530/lcg/root/6.06.00-ikhhed2/include",
"/cvmfs/cms.cern.ch/slc6_amd64_gcc530/external/pcre/8.37/include",
"/cvmfs/cms.cern.ch/slc6_amd64_gcc530/external/boost/1.57.0-ikhhed/include",
"/cvmfs/cms.cern.ch/slc6_amd64_gcc530/external/bz2lib/1.0.6/include",
"/cvmfs/cms.cern.ch/slc6_amd64_gcc530/external/gsl/1.16/include",
"/cvmfs/cms.cern.ch/slc6_amd64_gcc530/external/libuuid/2.22.2/include",
"/cvmfs/cms.cern.ch/slc6_amd64_gcc530/external/tbb/44_20151115oss/include",
"/cvmfs/cms.cern.ch/slc6_amd64_gcc530/external/zlib/1.2.8/include",
"/cvmfs/cms.cern.ch/slc6_amd64_gcc530/lcg/root/6.06.00-ikhhed2/include",
"/disk1/scheuch/grid/FullDestroyAnalysis2016/Wheel0/Working/20160425/CMSSW_8_0_2/",
0
    };
    static const char* fwdDeclCode = R"DICTFWDDCLS(
#line 1 "DataFormatsL1TGlobal_xr dictionary forward declarations' payload"
#pragma clang diagnostic ignored "-Wkeyword-compat"
#pragma clang diagnostic ignored "-Wignored-attributes"
#pragma clang diagnostic ignored "-Wreturn-type-c-linkage"
extern int __Cling_Autoloading_Map;
class __attribute__((annotate("$clingAutoload$DataFormats/L1TGlobal/interface/GlobalAlgBlk.h")))  GlobalAlgBlk;
template <class T> class __attribute__((annotate("$clingAutoload$DataFormats/L1TGlobal/interface/GlobalAlgBlk.h")))  BXVector;

namespace edm{template <typename T> class __attribute__((annotate("$clingAutoload$DataFormats/Common/interface/Wrapper.h")))  Wrapper;
}
class __attribute__((annotate("$clingAutoload$DataFormats/L1TGlobal/interface/GlobalExtBlk.h")))  GlobalExtBlk;
typedef BXVector<GlobalAlgBlk> GlobalAlgBlkBxCollection __attribute__((annotate("$clingAutoload$DataFormats/L1TGlobal/interface/GlobalAlgBlk.h"))) ;
typedef BXVector<GlobalExtBlk> GlobalExtBlkBxCollection __attribute__((annotate("$clingAutoload$DataFormats/L1TGlobal/interface/GlobalExtBlk.h"))) ;
)DICTFWDDCLS";
    static const char* payloadCode = R"DICTPAYLOAD(
#line 1 "DataFormatsL1TGlobal_xr dictionary payload"

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
#include "DataFormats/L1TGlobal/interface/GlobalAlgBlk.h"
#include "DataFormats/L1TGlobal/interface/GlobalExtBlk.h"

namespace DataFormats_L1TGlobal {
  struct dictionary {

    GlobalAlgBlkBxCollection    uGtAlgBxColl;
    GlobalExtBlkBxCollection    uGtExtBxColl;

    edm::Wrapper<GlobalAlgBlkBxCollection>    w_uGtAlgBxColl;
    edm::Wrapper<GlobalExtBlkBxCollection>    w_uGtExtBxColl;
  };
}

#undef  _BACKWARD_BACKWARD_WARNING_H
)DICTPAYLOAD";
    static const char* classesHeaders[]={
"BXVector<GlobalAlgBlk>", payloadCode, "@",
"BXVector<GlobalExtBlk>", payloadCode, "@",
"GlobalAlgBlk", payloadCode, "@",
"GlobalAlgBlkBxCollection", payloadCode, "@",
"GlobalExtBlk", payloadCode, "@",
"GlobalExtBlkBxCollection", payloadCode, "@",
"edm::Wrapper<BXVector<GlobalAlgBlk> >", payloadCode, "@",
"edm::Wrapper<BXVector<GlobalExtBlk> >", payloadCode, "@",
"edm::Wrapper<GlobalAlgBlkBxCollection>", payloadCode, "@",
"edm::Wrapper<GlobalExtBlkBxCollection>", payloadCode, "@",
nullptr};

    static bool isInitialized = false;
    if (!isInitialized) {
      TROOT::RegisterModule("DataFormatsL1TGlobal_xr",
        headers, includePaths, payloadCode, fwdDeclCode,
        TriggerDictionaryInitialization_DataFormatsL1TGlobal_xr_Impl, {}, classesHeaders);
      isInitialized = true;
    }
  }
  static struct DictInit {
    DictInit() {
      TriggerDictionaryInitialization_DataFormatsL1TGlobal_xr_Impl();
    }
  } __TheDictionaryInitializer;
}
void TriggerDictionaryInitialization_DataFormatsL1TGlobal_xr() {
  TriggerDictionaryInitialization_DataFormatsL1TGlobal_xr_Impl();
}
