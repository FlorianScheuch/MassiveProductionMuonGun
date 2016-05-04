// Do NOT change. Changes will be lost next time file is generated

#define R__DICTIONARY_FILENAME tmpdIslc6_amd64_gcc530dIsrcdIDataFormatsdIHLTRecodIsrcdIDataFormatsHLTRecodIadIDataFormatsHLTReco_xr

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
#include "src/DataFormats/HLTReco/src/classes.h"

// Header files passed via #pragma extra_include

namespace ROOT {
   static TClass *edmcLcLModuleTime_Dictionary();
   static void edmcLcLModuleTime_TClassManip(TClass*);
   static void *new_edmcLcLModuleTime(void *p = 0);
   static void *newArray_edmcLcLModuleTime(Long_t size, void *p);
   static void delete_edmcLcLModuleTime(void *p);
   static void deleteArray_edmcLcLModuleTime(void *p);
   static void destruct_edmcLcLModuleTime(void *p);

   // Function generating the singleton type initializer
   static TGenericClassInfo *GenerateInitInstanceLocal(const ::edm::ModuleTime*)
   {
      ::edm::ModuleTime *ptr = 0;
      static ::TVirtualIsAProxy* isa_proxy = new ::TIsAProxy(typeid(::edm::ModuleTime));
      static ::ROOT::TGenericClassInfo 
         instance("edm::ModuleTime", 10, "DataFormats/HLTReco/interface/ModuleTiming.h", 13,
                  typeid(::edm::ModuleTime), ::ROOT::Internal::DefineBehavior(ptr, ptr),
                  &edmcLcLModuleTime_Dictionary, isa_proxy, 8,
                  sizeof(::edm::ModuleTime) );
      instance.SetNew(&new_edmcLcLModuleTime);
      instance.SetNewArray(&newArray_edmcLcLModuleTime);
      instance.SetDelete(&delete_edmcLcLModuleTime);
      instance.SetDeleteArray(&deleteArray_edmcLcLModuleTime);
      instance.SetDestructor(&destruct_edmcLcLModuleTime);
      return &instance;
   }
   TGenericClassInfo *GenerateInitInstance(const ::edm::ModuleTime*)
   {
      return GenerateInitInstanceLocal((::edm::ModuleTime*)0);
   }
   // Static variable to force the class initialization
   static ::ROOT::TGenericClassInfo *_R__UNIQUE_(Init) = GenerateInitInstanceLocal((const ::edm::ModuleTime*)0x0); R__UseDummy(_R__UNIQUE_(Init));

   // Dictionary for non-ClassDef classes
   static TClass *edmcLcLModuleTime_Dictionary() {
      TClass* theClass =::ROOT::GenerateInitInstanceLocal((const ::edm::ModuleTime*)0x0)->GetClass();
      edmcLcLModuleTime_TClassManip(theClass);
   return theClass;
   }

   static void edmcLcLModuleTime_TClassManip(TClass* ){
   }

} // end of namespace ROOT

namespace ROOT {
   static TClass *edmcLcLEventTime_Dictionary();
   static void edmcLcLEventTime_TClassManip(TClass*);
   static void *new_edmcLcLEventTime(void *p = 0);
   static void *newArray_edmcLcLEventTime(Long_t size, void *p);
   static void delete_edmcLcLEventTime(void *p);
   static void deleteArray_edmcLcLEventTime(void *p);
   static void destruct_edmcLcLEventTime(void *p);

   // Function generating the singleton type initializer
   static TGenericClassInfo *GenerateInitInstanceLocal(const ::edm::EventTime*)
   {
      ::edm::EventTime *ptr = 0;
      static ::TVirtualIsAProxy* isa_proxy = new ::TIsAProxy(typeid(::edm::EventTime));
      static ::ROOT::TGenericClassInfo 
         instance("edm::EventTime", 10, "DataFormats/HLTReco/interface/ModuleTiming.h", 28,
                  typeid(::edm::EventTime), ::ROOT::Internal::DefineBehavior(ptr, ptr),
                  &edmcLcLEventTime_Dictionary, isa_proxy, 8,
                  sizeof(::edm::EventTime) );
      instance.SetNew(&new_edmcLcLEventTime);
      instance.SetNewArray(&newArray_edmcLcLEventTime);
      instance.SetDelete(&delete_edmcLcLEventTime);
      instance.SetDeleteArray(&deleteArray_edmcLcLEventTime);
      instance.SetDestructor(&destruct_edmcLcLEventTime);
      return &instance;
   }
   TGenericClassInfo *GenerateInitInstance(const ::edm::EventTime*)
   {
      return GenerateInitInstanceLocal((::edm::EventTime*)0);
   }
   // Static variable to force the class initialization
   static ::ROOT::TGenericClassInfo *_R__UNIQUE_(Init) = GenerateInitInstanceLocal((const ::edm::EventTime*)0x0); R__UseDummy(_R__UNIQUE_(Init));

   // Dictionary for non-ClassDef classes
   static TClass *edmcLcLEventTime_Dictionary() {
      TClass* theClass =::ROOT::GenerateInitInstanceLocal((const ::edm::EventTime*)0x0)->GetClass();
      edmcLcLEventTime_TClassManip(theClass);
   return theClass;
   }

   static void edmcLcLEventTime_TClassManip(TClass* ){
   }

} // end of namespace ROOT

namespace ROOT {
   static TClass *edmcLcLWrapperlEedmcLcLEventTimegR_Dictionary();
   static void edmcLcLWrapperlEedmcLcLEventTimegR_TClassManip(TClass*);
   static void *new_edmcLcLWrapperlEedmcLcLEventTimegR(void *p = 0);
   static void *newArray_edmcLcLWrapperlEedmcLcLEventTimegR(Long_t size, void *p);
   static void delete_edmcLcLWrapperlEedmcLcLEventTimegR(void *p);
   static void deleteArray_edmcLcLWrapperlEedmcLcLEventTimegR(void *p);
   static void destruct_edmcLcLWrapperlEedmcLcLEventTimegR(void *p);

   // Function generating the singleton type initializer
   static TGenericClassInfo *GenerateInitInstanceLocal(const ::edm::Wrapper<edm::EventTime>*)
   {
      ::edm::Wrapper<edm::EventTime> *ptr = 0;
      static ::TVirtualIsAProxy* isa_proxy = new ::TIsAProxy(typeid(::edm::Wrapper<edm::EventTime>));
      static ::ROOT::TGenericClassInfo 
         instance("edm::Wrapper<edm::EventTime>", ::edm::Wrapper<edm::EventTime>::Class_Version(), "DataFormats/Common/interface/Wrapper.h", 25,
                  typeid(::edm::Wrapper<edm::EventTime>), ::ROOT::Internal::DefineBehavior(ptr, ptr),
                  &edmcLcLWrapperlEedmcLcLEventTimegR_Dictionary, isa_proxy, 0,
                  sizeof(::edm::Wrapper<edm::EventTime>) );
      instance.SetNew(&new_edmcLcLWrapperlEedmcLcLEventTimegR);
      instance.SetNewArray(&newArray_edmcLcLWrapperlEedmcLcLEventTimegR);
      instance.SetDelete(&delete_edmcLcLWrapperlEedmcLcLEventTimegR);
      instance.SetDeleteArray(&deleteArray_edmcLcLWrapperlEedmcLcLEventTimegR);
      instance.SetDestructor(&destruct_edmcLcLWrapperlEedmcLcLEventTimegR);
      return &instance;
   }
   TGenericClassInfo *GenerateInitInstance(const ::edm::Wrapper<edm::EventTime>*)
   {
      return GenerateInitInstanceLocal((::edm::Wrapper<edm::EventTime>*)0);
   }
   // Static variable to force the class initialization
   static ::ROOT::TGenericClassInfo *_R__UNIQUE_(Init) = GenerateInitInstanceLocal((const ::edm::Wrapper<edm::EventTime>*)0x0); R__UseDummy(_R__UNIQUE_(Init));

   // Dictionary for non-ClassDef classes
   static TClass *edmcLcLWrapperlEedmcLcLEventTimegR_Dictionary() {
      TClass* theClass =::ROOT::GenerateInitInstanceLocal((const ::edm::Wrapper<edm::EventTime>*)0x0)->GetClass();
      edmcLcLWrapperlEedmcLcLEventTimegR_TClassManip(theClass);
   return theClass;
   }

   static void edmcLcLWrapperlEedmcLcLEventTimegR_TClassManip(TClass* theClass){
      theClass->CreateAttributeMap();
      TDictAttributeMap* attrMap( theClass->GetAttributeMap() );
      attrMap->AddProperty("splitLevel","0");
   }

} // end of namespace ROOT

namespace ROOT {
   static TClass *HLTPerformanceInfo_Dictionary();
   static void HLTPerformanceInfo_TClassManip(TClass*);
   static void *new_HLTPerformanceInfo(void *p = 0);
   static void *newArray_HLTPerformanceInfo(Long_t size, void *p);
   static void delete_HLTPerformanceInfo(void *p);
   static void deleteArray_HLTPerformanceInfo(void *p);
   static void destruct_HLTPerformanceInfo(void *p);

   // Function generating the singleton type initializer
   static TGenericClassInfo *GenerateInitInstanceLocal(const ::HLTPerformanceInfo*)
   {
      ::HLTPerformanceInfo *ptr = 0;
      static ::TVirtualIsAProxy* isa_proxy = new ::TIsAProxy(typeid(::HLTPerformanceInfo));
      static ::ROOT::TGenericClassInfo 
         instance("HLTPerformanceInfo", 10, "DataFormats/HLTReco/interface/HLTPerformanceInfo.h", 11,
                  typeid(::HLTPerformanceInfo), ::ROOT::Internal::DefineBehavior(ptr, ptr),
                  &HLTPerformanceInfo_Dictionary, isa_proxy, 8,
                  sizeof(::HLTPerformanceInfo) );
      instance.SetNew(&new_HLTPerformanceInfo);
      instance.SetNewArray(&newArray_HLTPerformanceInfo);
      instance.SetDelete(&delete_HLTPerformanceInfo);
      instance.SetDeleteArray(&deleteArray_HLTPerformanceInfo);
      instance.SetDestructor(&destruct_HLTPerformanceInfo);
      return &instance;
   }
   TGenericClassInfo *GenerateInitInstance(const ::HLTPerformanceInfo*)
   {
      return GenerateInitInstanceLocal((::HLTPerformanceInfo*)0);
   }
   // Static variable to force the class initialization
   static ::ROOT::TGenericClassInfo *_R__UNIQUE_(Init) = GenerateInitInstanceLocal((const ::HLTPerformanceInfo*)0x0); R__UseDummy(_R__UNIQUE_(Init));

   // Dictionary for non-ClassDef classes
   static TClass *HLTPerformanceInfo_Dictionary() {
      TClass* theClass =::ROOT::GenerateInitInstanceLocal((const ::HLTPerformanceInfo*)0x0)->GetClass();
      HLTPerformanceInfo_TClassManip(theClass);
   return theClass;
   }

   static void HLTPerformanceInfo_TClassManip(TClass* ){
   }

} // end of namespace ROOT

namespace ROOT {
   static TClass *edmcLcLWrapperlEHLTPerformanceInfogR_Dictionary();
   static void edmcLcLWrapperlEHLTPerformanceInfogR_TClassManip(TClass*);
   static void *new_edmcLcLWrapperlEHLTPerformanceInfogR(void *p = 0);
   static void *newArray_edmcLcLWrapperlEHLTPerformanceInfogR(Long_t size, void *p);
   static void delete_edmcLcLWrapperlEHLTPerformanceInfogR(void *p);
   static void deleteArray_edmcLcLWrapperlEHLTPerformanceInfogR(void *p);
   static void destruct_edmcLcLWrapperlEHLTPerformanceInfogR(void *p);

   // Function generating the singleton type initializer
   static TGenericClassInfo *GenerateInitInstanceLocal(const ::edm::Wrapper<HLTPerformanceInfo>*)
   {
      ::edm::Wrapper<HLTPerformanceInfo> *ptr = 0;
      static ::TVirtualIsAProxy* isa_proxy = new ::TIsAProxy(typeid(::edm::Wrapper<HLTPerformanceInfo>));
      static ::ROOT::TGenericClassInfo 
         instance("edm::Wrapper<HLTPerformanceInfo>", ::edm::Wrapper<HLTPerformanceInfo>::Class_Version(), "DataFormats/Common/interface/Wrapper.h", 25,
                  typeid(::edm::Wrapper<HLTPerformanceInfo>), ::ROOT::Internal::DefineBehavior(ptr, ptr),
                  &edmcLcLWrapperlEHLTPerformanceInfogR_Dictionary, isa_proxy, 0,
                  sizeof(::edm::Wrapper<HLTPerformanceInfo>) );
      instance.SetNew(&new_edmcLcLWrapperlEHLTPerformanceInfogR);
      instance.SetNewArray(&newArray_edmcLcLWrapperlEHLTPerformanceInfogR);
      instance.SetDelete(&delete_edmcLcLWrapperlEHLTPerformanceInfogR);
      instance.SetDeleteArray(&deleteArray_edmcLcLWrapperlEHLTPerformanceInfogR);
      instance.SetDestructor(&destruct_edmcLcLWrapperlEHLTPerformanceInfogR);
      return &instance;
   }
   TGenericClassInfo *GenerateInitInstance(const ::edm::Wrapper<HLTPerformanceInfo>*)
   {
      return GenerateInitInstanceLocal((::edm::Wrapper<HLTPerformanceInfo>*)0);
   }
   // Static variable to force the class initialization
   static ::ROOT::TGenericClassInfo *_R__UNIQUE_(Init) = GenerateInitInstanceLocal((const ::edm::Wrapper<HLTPerformanceInfo>*)0x0); R__UseDummy(_R__UNIQUE_(Init));

   // Dictionary for non-ClassDef classes
   static TClass *edmcLcLWrapperlEHLTPerformanceInfogR_Dictionary() {
      TClass* theClass =::ROOT::GenerateInitInstanceLocal((const ::edm::Wrapper<HLTPerformanceInfo>*)0x0)->GetClass();
      edmcLcLWrapperlEHLTPerformanceInfogR_TClassManip(theClass);
   return theClass;
   }

   static void edmcLcLWrapperlEHLTPerformanceInfogR_TClassManip(TClass* theClass){
      theClass->CreateAttributeMap();
      TDictAttributeMap* attrMap( theClass->GetAttributeMap() );
      attrMap->AddProperty("splitLevel","0");
   }

} // end of namespace ROOT

namespace ROOT {
   static TClass *HLTPerformanceInfocLcLModule_Dictionary();
   static void HLTPerformanceInfocLcLModule_TClassManip(TClass*);
   static void *new_HLTPerformanceInfocLcLModule(void *p = 0);
   static void *newArray_HLTPerformanceInfocLcLModule(Long_t size, void *p);
   static void delete_HLTPerformanceInfocLcLModule(void *p);
   static void deleteArray_HLTPerformanceInfocLcLModule(void *p);
   static void destruct_HLTPerformanceInfocLcLModule(void *p);

   // Function generating the singleton type initializer
   static TGenericClassInfo *GenerateInitInstanceLocal(const ::HLTPerformanceInfo::Module*)
   {
      ::HLTPerformanceInfo::Module *ptr = 0;
      static ::TVirtualIsAProxy* isa_proxy = new ::TIsAProxy(typeid(::HLTPerformanceInfo::Module));
      static ::ROOT::TGenericClassInfo 
         instance("HLTPerformanceInfo::Module", 10, "DataFormats/HLTReco/interface/HLTPerformanceInfo.h", 20,
                  typeid(::HLTPerformanceInfo::Module), ::ROOT::Internal::DefineBehavior(ptr, ptr),
                  &HLTPerformanceInfocLcLModule_Dictionary, isa_proxy, 8,
                  sizeof(::HLTPerformanceInfo::Module) );
      instance.SetNew(&new_HLTPerformanceInfocLcLModule);
      instance.SetNewArray(&newArray_HLTPerformanceInfocLcLModule);
      instance.SetDelete(&delete_HLTPerformanceInfocLcLModule);
      instance.SetDeleteArray(&deleteArray_HLTPerformanceInfocLcLModule);
      instance.SetDestructor(&destruct_HLTPerformanceInfocLcLModule);
      return &instance;
   }
   TGenericClassInfo *GenerateInitInstance(const ::HLTPerformanceInfo::Module*)
   {
      return GenerateInitInstanceLocal((::HLTPerformanceInfo::Module*)0);
   }
   // Static variable to force the class initialization
   static ::ROOT::TGenericClassInfo *_R__UNIQUE_(Init) = GenerateInitInstanceLocal((const ::HLTPerformanceInfo::Module*)0x0); R__UseDummy(_R__UNIQUE_(Init));

   // Dictionary for non-ClassDef classes
   static TClass *HLTPerformanceInfocLcLModule_Dictionary() {
      TClass* theClass =::ROOT::GenerateInitInstanceLocal((const ::HLTPerformanceInfo::Module*)0x0)->GetClass();
      HLTPerformanceInfocLcLModule_TClassManip(theClass);
   return theClass;
   }

   static void HLTPerformanceInfocLcLModule_TClassManip(TClass* ){
   }

} // end of namespace ROOT

namespace ROOT {
   static TClass *__gnu_cxxcLcL__normal_iteratorlEconstsPHLTPerformanceInfocLcLModulemUcOvectorlEHLTPerformanceInfocLcLModulegRsPgR_Dictionary();
   static void __gnu_cxxcLcL__normal_iteratorlEconstsPHLTPerformanceInfocLcLModulemUcOvectorlEHLTPerformanceInfocLcLModulegRsPgR_TClassManip(TClass*);
   static void *new___gnu_cxxcLcL__normal_iteratorlEconstsPHLTPerformanceInfocLcLModulemUcOvectorlEHLTPerformanceInfocLcLModulegRsPgR(void *p = 0);
   static void *newArray___gnu_cxxcLcL__normal_iteratorlEconstsPHLTPerformanceInfocLcLModulemUcOvectorlEHLTPerformanceInfocLcLModulegRsPgR(Long_t size, void *p);
   static void delete___gnu_cxxcLcL__normal_iteratorlEconstsPHLTPerformanceInfocLcLModulemUcOvectorlEHLTPerformanceInfocLcLModulegRsPgR(void *p);
   static void deleteArray___gnu_cxxcLcL__normal_iteratorlEconstsPHLTPerformanceInfocLcLModulemUcOvectorlEHLTPerformanceInfocLcLModulegRsPgR(void *p);
   static void destruct___gnu_cxxcLcL__normal_iteratorlEconstsPHLTPerformanceInfocLcLModulemUcOvectorlEHLTPerformanceInfocLcLModulegRsPgR(void *p);

   // Function generating the singleton type initializer
   static TGenericClassInfo *GenerateInitInstanceLocal(const ::__gnu_cxx::__normal_iterator<const HLTPerformanceInfo::Module*,vector<HLTPerformanceInfo::Module> >*)
   {
      ::__gnu_cxx::__normal_iterator<const HLTPerformanceInfo::Module*,vector<HLTPerformanceInfo::Module> > *ptr = 0;
      static ::TVirtualIsAProxy* isa_proxy = new ::TIsAProxy(typeid(::__gnu_cxx::__normal_iterator<const HLTPerformanceInfo::Module*,vector<HLTPerformanceInfo::Module> >));
      static ::ROOT::TGenericClassInfo 
         instance("__gnu_cxx::__normal_iterator<const HLTPerformanceInfo::Module*,vector<HLTPerformanceInfo::Module> >", "string", 721,
                  typeid(::__gnu_cxx::__normal_iterator<const HLTPerformanceInfo::Module*,vector<HLTPerformanceInfo::Module> >), ::ROOT::Internal::DefineBehavior(ptr, ptr),
                  &__gnu_cxxcLcL__normal_iteratorlEconstsPHLTPerformanceInfocLcLModulemUcOvectorlEHLTPerformanceInfocLcLModulegRsPgR_Dictionary, isa_proxy, 0,
                  sizeof(::__gnu_cxx::__normal_iterator<const HLTPerformanceInfo::Module*,vector<HLTPerformanceInfo::Module> >) );
      instance.SetNew(&new___gnu_cxxcLcL__normal_iteratorlEconstsPHLTPerformanceInfocLcLModulemUcOvectorlEHLTPerformanceInfocLcLModulegRsPgR);
      instance.SetNewArray(&newArray___gnu_cxxcLcL__normal_iteratorlEconstsPHLTPerformanceInfocLcLModulemUcOvectorlEHLTPerformanceInfocLcLModulegRsPgR);
      instance.SetDelete(&delete___gnu_cxxcLcL__normal_iteratorlEconstsPHLTPerformanceInfocLcLModulemUcOvectorlEHLTPerformanceInfocLcLModulegRsPgR);
      instance.SetDeleteArray(&deleteArray___gnu_cxxcLcL__normal_iteratorlEconstsPHLTPerformanceInfocLcLModulemUcOvectorlEHLTPerformanceInfocLcLModulegRsPgR);
      instance.SetDestructor(&destruct___gnu_cxxcLcL__normal_iteratorlEconstsPHLTPerformanceInfocLcLModulemUcOvectorlEHLTPerformanceInfocLcLModulegRsPgR);

      ::ROOT::AddClassAlternate("__gnu_cxx::__normal_iterator<const HLTPerformanceInfo::Module*,vector<HLTPerformanceInfo::Module> >","vector<HLTPerformanceInfo::Module>::const_iterator");
      return &instance;
   }
   TGenericClassInfo *GenerateInitInstance(const ::__gnu_cxx::__normal_iterator<const HLTPerformanceInfo::Module*,vector<HLTPerformanceInfo::Module> >*)
   {
      return GenerateInitInstanceLocal((::__gnu_cxx::__normal_iterator<const HLTPerformanceInfo::Module*,vector<HLTPerformanceInfo::Module> >*)0);
   }
   // Static variable to force the class initialization
   static ::ROOT::TGenericClassInfo *_R__UNIQUE_(Init) = GenerateInitInstanceLocal((const ::__gnu_cxx::__normal_iterator<const HLTPerformanceInfo::Module*,vector<HLTPerformanceInfo::Module> >*)0x0); R__UseDummy(_R__UNIQUE_(Init));

   // Dictionary for non-ClassDef classes
   static TClass *__gnu_cxxcLcL__normal_iteratorlEconstsPHLTPerformanceInfocLcLModulemUcOvectorlEHLTPerformanceInfocLcLModulegRsPgR_Dictionary() {
      TClass* theClass =::ROOT::GenerateInitInstanceLocal((const ::__gnu_cxx::__normal_iterator<const HLTPerformanceInfo::Module*,vector<HLTPerformanceInfo::Module> >*)0x0)->GetClass();
      __gnu_cxxcLcL__normal_iteratorlEconstsPHLTPerformanceInfocLcLModulemUcOvectorlEHLTPerformanceInfocLcLModulegRsPgR_TClassManip(theClass);
   return theClass;
   }

   static void __gnu_cxxcLcL__normal_iteratorlEconstsPHLTPerformanceInfocLcLModulemUcOvectorlEHLTPerformanceInfocLcLModulegRsPgR_TClassManip(TClass* ){
   }

} // end of namespace ROOT

namespace ROOT {
   static TClass *HLTPerformanceInfocLcLPath_Dictionary();
   static void HLTPerformanceInfocLcLPath_TClassManip(TClass*);
   static void *new_HLTPerformanceInfocLcLPath(void *p = 0);
   static void *newArray_HLTPerformanceInfocLcLPath(Long_t size, void *p);
   static void delete_HLTPerformanceInfocLcLPath(void *p);
   static void deleteArray_HLTPerformanceInfocLcLPath(void *p);
   static void destruct_HLTPerformanceInfocLcLPath(void *p);

   // Function generating the singleton type initializer
   static TGenericClassInfo *GenerateInitInstanceLocal(const ::HLTPerformanceInfo::Path*)
   {
      ::HLTPerformanceInfo::Path *ptr = 0;
      static ::TVirtualIsAProxy* isa_proxy = new ::TIsAProxy(typeid(::HLTPerformanceInfo::Path));
      static ::ROOT::TGenericClassInfo 
         instance("HLTPerformanceInfo::Path", 11, "DataFormats/HLTReco/interface/HLTPerformanceInfo.h", 62,
                  typeid(::HLTPerformanceInfo::Path), ::ROOT::Internal::DefineBehavior(ptr, ptr),
                  &HLTPerformanceInfocLcLPath_Dictionary, isa_proxy, 8,
                  sizeof(::HLTPerformanceInfo::Path) );
      instance.SetNew(&new_HLTPerformanceInfocLcLPath);
      instance.SetNewArray(&newArray_HLTPerformanceInfocLcLPath);
      instance.SetDelete(&delete_HLTPerformanceInfocLcLPath);
      instance.SetDeleteArray(&deleteArray_HLTPerformanceInfocLcLPath);
      instance.SetDestructor(&destruct_HLTPerformanceInfocLcLPath);
      return &instance;
   }
   TGenericClassInfo *GenerateInitInstance(const ::HLTPerformanceInfo::Path*)
   {
      return GenerateInitInstanceLocal((::HLTPerformanceInfo::Path*)0);
   }
   // Static variable to force the class initialization
   static ::ROOT::TGenericClassInfo *_R__UNIQUE_(Init) = GenerateInitInstanceLocal((const ::HLTPerformanceInfo::Path*)0x0); R__UseDummy(_R__UNIQUE_(Init));

   // Dictionary for non-ClassDef classes
   static TClass *HLTPerformanceInfocLcLPath_Dictionary() {
      TClass* theClass =::ROOT::GenerateInitInstanceLocal((const ::HLTPerformanceInfo::Path*)0x0)->GetClass();
      HLTPerformanceInfocLcLPath_TClassManip(theClass);
   return theClass;
   }

   static void HLTPerformanceInfocLcLPath_TClassManip(TClass* ){
   }

} // end of namespace ROOT

namespace ROOT {
   static TClass *__gnu_cxxcLcL__normal_iteratorlEconstsPHLTPerformanceInfocLcLPathmUcOvectorlEHLTPerformanceInfocLcLPathgRsPgR_Dictionary();
   static void __gnu_cxxcLcL__normal_iteratorlEconstsPHLTPerformanceInfocLcLPathmUcOvectorlEHLTPerformanceInfocLcLPathgRsPgR_TClassManip(TClass*);
   static void *new___gnu_cxxcLcL__normal_iteratorlEconstsPHLTPerformanceInfocLcLPathmUcOvectorlEHLTPerformanceInfocLcLPathgRsPgR(void *p = 0);
   static void *newArray___gnu_cxxcLcL__normal_iteratorlEconstsPHLTPerformanceInfocLcLPathmUcOvectorlEHLTPerformanceInfocLcLPathgRsPgR(Long_t size, void *p);
   static void delete___gnu_cxxcLcL__normal_iteratorlEconstsPHLTPerformanceInfocLcLPathmUcOvectorlEHLTPerformanceInfocLcLPathgRsPgR(void *p);
   static void deleteArray___gnu_cxxcLcL__normal_iteratorlEconstsPHLTPerformanceInfocLcLPathmUcOvectorlEHLTPerformanceInfocLcLPathgRsPgR(void *p);
   static void destruct___gnu_cxxcLcL__normal_iteratorlEconstsPHLTPerformanceInfocLcLPathmUcOvectorlEHLTPerformanceInfocLcLPathgRsPgR(void *p);

   // Function generating the singleton type initializer
   static TGenericClassInfo *GenerateInitInstanceLocal(const ::__gnu_cxx::__normal_iterator<const HLTPerformanceInfo::Path*,vector<HLTPerformanceInfo::Path> >*)
   {
      ::__gnu_cxx::__normal_iterator<const HLTPerformanceInfo::Path*,vector<HLTPerformanceInfo::Path> > *ptr = 0;
      static ::TVirtualIsAProxy* isa_proxy = new ::TIsAProxy(typeid(::__gnu_cxx::__normal_iterator<const HLTPerformanceInfo::Path*,vector<HLTPerformanceInfo::Path> >));
      static ::ROOT::TGenericClassInfo 
         instance("__gnu_cxx::__normal_iterator<const HLTPerformanceInfo::Path*,vector<HLTPerformanceInfo::Path> >", "string", 721,
                  typeid(::__gnu_cxx::__normal_iterator<const HLTPerformanceInfo::Path*,vector<HLTPerformanceInfo::Path> >), ::ROOT::Internal::DefineBehavior(ptr, ptr),
                  &__gnu_cxxcLcL__normal_iteratorlEconstsPHLTPerformanceInfocLcLPathmUcOvectorlEHLTPerformanceInfocLcLPathgRsPgR_Dictionary, isa_proxy, 0,
                  sizeof(::__gnu_cxx::__normal_iterator<const HLTPerformanceInfo::Path*,vector<HLTPerformanceInfo::Path> >) );
      instance.SetNew(&new___gnu_cxxcLcL__normal_iteratorlEconstsPHLTPerformanceInfocLcLPathmUcOvectorlEHLTPerformanceInfocLcLPathgRsPgR);
      instance.SetNewArray(&newArray___gnu_cxxcLcL__normal_iteratorlEconstsPHLTPerformanceInfocLcLPathmUcOvectorlEHLTPerformanceInfocLcLPathgRsPgR);
      instance.SetDelete(&delete___gnu_cxxcLcL__normal_iteratorlEconstsPHLTPerformanceInfocLcLPathmUcOvectorlEHLTPerformanceInfocLcLPathgRsPgR);
      instance.SetDeleteArray(&deleteArray___gnu_cxxcLcL__normal_iteratorlEconstsPHLTPerformanceInfocLcLPathmUcOvectorlEHLTPerformanceInfocLcLPathgRsPgR);
      instance.SetDestructor(&destruct___gnu_cxxcLcL__normal_iteratorlEconstsPHLTPerformanceInfocLcLPathmUcOvectorlEHLTPerformanceInfocLcLPathgRsPgR);

      ::ROOT::AddClassAlternate("__gnu_cxx::__normal_iterator<const HLTPerformanceInfo::Path*,vector<HLTPerformanceInfo::Path> >","vector<HLTPerformanceInfo::Path>::const_iterator");
      return &instance;
   }
   TGenericClassInfo *GenerateInitInstance(const ::__gnu_cxx::__normal_iterator<const HLTPerformanceInfo::Path*,vector<HLTPerformanceInfo::Path> >*)
   {
      return GenerateInitInstanceLocal((::__gnu_cxx::__normal_iterator<const HLTPerformanceInfo::Path*,vector<HLTPerformanceInfo::Path> >*)0);
   }
   // Static variable to force the class initialization
   static ::ROOT::TGenericClassInfo *_R__UNIQUE_(Init) = GenerateInitInstanceLocal((const ::__gnu_cxx::__normal_iterator<const HLTPerformanceInfo::Path*,vector<HLTPerformanceInfo::Path> >*)0x0); R__UseDummy(_R__UNIQUE_(Init));

   // Dictionary for non-ClassDef classes
   static TClass *__gnu_cxxcLcL__normal_iteratorlEconstsPHLTPerformanceInfocLcLPathmUcOvectorlEHLTPerformanceInfocLcLPathgRsPgR_Dictionary() {
      TClass* theClass =::ROOT::GenerateInitInstanceLocal((const ::__gnu_cxx::__normal_iterator<const HLTPerformanceInfo::Path*,vector<HLTPerformanceInfo::Path> >*)0x0)->GetClass();
      __gnu_cxxcLcL__normal_iteratorlEconstsPHLTPerformanceInfocLcLPathmUcOvectorlEHLTPerformanceInfocLcLPathgRsPgR_TClassManip(theClass);
   return theClass;
   }

   static void __gnu_cxxcLcL__normal_iteratorlEconstsPHLTPerformanceInfocLcLPathmUcOvectorlEHLTPerformanceInfocLcLPathgRsPgR_TClassManip(TClass* ){
   }

} // end of namespace ROOT

namespace ROOT {
   static TClass *__gnu_cxxcLcL__normal_iteratorlEconstsPtriggercLcLTriggerObjectTypemUcOvectorlEtriggercLcLTriggerObjectTypegRsPgR_Dictionary();
   static void __gnu_cxxcLcL__normal_iteratorlEconstsPtriggercLcLTriggerObjectTypemUcOvectorlEtriggercLcLTriggerObjectTypegRsPgR_TClassManip(TClass*);
   static void *new___gnu_cxxcLcL__normal_iteratorlEconstsPtriggercLcLTriggerObjectTypemUcOvectorlEtriggercLcLTriggerObjectTypegRsPgR(void *p = 0);
   static void *newArray___gnu_cxxcLcL__normal_iteratorlEconstsPtriggercLcLTriggerObjectTypemUcOvectorlEtriggercLcLTriggerObjectTypegRsPgR(Long_t size, void *p);
   static void delete___gnu_cxxcLcL__normal_iteratorlEconstsPtriggercLcLTriggerObjectTypemUcOvectorlEtriggercLcLTriggerObjectTypegRsPgR(void *p);
   static void deleteArray___gnu_cxxcLcL__normal_iteratorlEconstsPtriggercLcLTriggerObjectTypemUcOvectorlEtriggercLcLTriggerObjectTypegRsPgR(void *p);
   static void destruct___gnu_cxxcLcL__normal_iteratorlEconstsPtriggercLcLTriggerObjectTypemUcOvectorlEtriggercLcLTriggerObjectTypegRsPgR(void *p);

   // Function generating the singleton type initializer
   static TGenericClassInfo *GenerateInitInstanceLocal(const ::__gnu_cxx::__normal_iterator<const trigger::TriggerObjectType*,vector<trigger::TriggerObjectType> >*)
   {
      ::__gnu_cxx::__normal_iterator<const trigger::TriggerObjectType*,vector<trigger::TriggerObjectType> > *ptr = 0;
      static ::TVirtualIsAProxy* isa_proxy = new ::TIsAProxy(typeid(::__gnu_cxx::__normal_iterator<const trigger::TriggerObjectType*,vector<trigger::TriggerObjectType> >));
      static ::ROOT::TGenericClassInfo 
         instance("__gnu_cxx::__normal_iterator<const trigger::TriggerObjectType*,vector<trigger::TriggerObjectType> >", "string", 721,
                  typeid(::__gnu_cxx::__normal_iterator<const trigger::TriggerObjectType*,vector<trigger::TriggerObjectType> >), ::ROOT::Internal::DefineBehavior(ptr, ptr),
                  &__gnu_cxxcLcL__normal_iteratorlEconstsPtriggercLcLTriggerObjectTypemUcOvectorlEtriggercLcLTriggerObjectTypegRsPgR_Dictionary, isa_proxy, 0,
                  sizeof(::__gnu_cxx::__normal_iterator<const trigger::TriggerObjectType*,vector<trigger::TriggerObjectType> >) );
      instance.SetNew(&new___gnu_cxxcLcL__normal_iteratorlEconstsPtriggercLcLTriggerObjectTypemUcOvectorlEtriggercLcLTriggerObjectTypegRsPgR);
      instance.SetNewArray(&newArray___gnu_cxxcLcL__normal_iteratorlEconstsPtriggercLcLTriggerObjectTypemUcOvectorlEtriggercLcLTriggerObjectTypegRsPgR);
      instance.SetDelete(&delete___gnu_cxxcLcL__normal_iteratorlEconstsPtriggercLcLTriggerObjectTypemUcOvectorlEtriggercLcLTriggerObjectTypegRsPgR);
      instance.SetDeleteArray(&deleteArray___gnu_cxxcLcL__normal_iteratorlEconstsPtriggercLcLTriggerObjectTypemUcOvectorlEtriggercLcLTriggerObjectTypegRsPgR);
      instance.SetDestructor(&destruct___gnu_cxxcLcL__normal_iteratorlEconstsPtriggercLcLTriggerObjectTypemUcOvectorlEtriggercLcLTriggerObjectTypegRsPgR);

      ::ROOT::AddClassAlternate("__gnu_cxx::__normal_iterator<const trigger::TriggerObjectType*,vector<trigger::TriggerObjectType> >","vector<trigger::TriggerObjectType>::const_iterator");
      return &instance;
   }
   TGenericClassInfo *GenerateInitInstance(const ::__gnu_cxx::__normal_iterator<const trigger::TriggerObjectType*,vector<trigger::TriggerObjectType> >*)
   {
      return GenerateInitInstanceLocal((::__gnu_cxx::__normal_iterator<const trigger::TriggerObjectType*,vector<trigger::TriggerObjectType> >*)0);
   }
   // Static variable to force the class initialization
   static ::ROOT::TGenericClassInfo *_R__UNIQUE_(Init) = GenerateInitInstanceLocal((const ::__gnu_cxx::__normal_iterator<const trigger::TriggerObjectType*,vector<trigger::TriggerObjectType> >*)0x0); R__UseDummy(_R__UNIQUE_(Init));

   // Dictionary for non-ClassDef classes
   static TClass *__gnu_cxxcLcL__normal_iteratorlEconstsPtriggercLcLTriggerObjectTypemUcOvectorlEtriggercLcLTriggerObjectTypegRsPgR_Dictionary() {
      TClass* theClass =::ROOT::GenerateInitInstanceLocal((const ::__gnu_cxx::__normal_iterator<const trigger::TriggerObjectType*,vector<trigger::TriggerObjectType> >*)0x0)->GetClass();
      __gnu_cxxcLcL__normal_iteratorlEconstsPtriggercLcLTriggerObjectTypemUcOvectorlEtriggercLcLTriggerObjectTypegRsPgR_TClassManip(theClass);
   return theClass;
   }

   static void __gnu_cxxcLcL__normal_iteratorlEconstsPtriggercLcLTriggerObjectTypemUcOvectorlEtriggercLcLTriggerObjectTypegRsPgR_TClassManip(TClass* ){
   }

} // end of namespace ROOT

namespace ROOT {
   static TClass *triggercLcLTriggerObject_Dictionary();
   static void triggercLcLTriggerObject_TClassManip(TClass*);
   static void *new_triggercLcLTriggerObject(void *p = 0);
   static void *newArray_triggercLcLTriggerObject(Long_t size, void *p);
   static void delete_triggercLcLTriggerObject(void *p);
   static void deleteArray_triggercLcLTriggerObject(void *p);
   static void destruct_triggercLcLTriggerObject(void *p);

   // Function generating the singleton type initializer
   static TGenericClassInfo *GenerateInitInstanceLocal(const ::trigger::TriggerObject*)
   {
      ::trigger::TriggerObject *ptr = 0;
      static ::TVirtualIsAProxy* isa_proxy = new ::TIsAProxy(typeid(::trigger::TriggerObject));
      static ::ROOT::TGenericClassInfo 
         instance("trigger::TriggerObject", 10, "DataFormats/HLTReco/interface/TriggerObject.h", 22,
                  typeid(::trigger::TriggerObject), ::ROOT::Internal::DefineBehavior(ptr, ptr),
                  &triggercLcLTriggerObject_Dictionary, isa_proxy, 8,
                  sizeof(::trigger::TriggerObject) );
      instance.SetNew(&new_triggercLcLTriggerObject);
      instance.SetNewArray(&newArray_triggercLcLTriggerObject);
      instance.SetDelete(&delete_triggercLcLTriggerObject);
      instance.SetDeleteArray(&deleteArray_triggercLcLTriggerObject);
      instance.SetDestructor(&destruct_triggercLcLTriggerObject);
      return &instance;
   }
   TGenericClassInfo *GenerateInitInstance(const ::trigger::TriggerObject*)
   {
      return GenerateInitInstanceLocal((::trigger::TriggerObject*)0);
   }
   // Static variable to force the class initialization
   static ::ROOT::TGenericClassInfo *_R__UNIQUE_(Init) = GenerateInitInstanceLocal((const ::trigger::TriggerObject*)0x0); R__UseDummy(_R__UNIQUE_(Init));

   // Dictionary for non-ClassDef classes
   static TClass *triggercLcLTriggerObject_Dictionary() {
      TClass* theClass =::ROOT::GenerateInitInstanceLocal((const ::trigger::TriggerObject*)0x0)->GetClass();
      triggercLcLTriggerObject_TClassManip(theClass);
   return theClass;
   }

   static void triggercLcLTriggerObject_TClassManip(TClass* ){
   }

} // end of namespace ROOT

namespace ROOT {
   static TClass *triggercLcLTriggerRefsCollections_Dictionary();
   static void triggercLcLTriggerRefsCollections_TClassManip(TClass*);
   static void *new_triggercLcLTriggerRefsCollections(void *p = 0);
   static void *newArray_triggercLcLTriggerRefsCollections(Long_t size, void *p);
   static void delete_triggercLcLTriggerRefsCollections(void *p);
   static void deleteArray_triggercLcLTriggerRefsCollections(void *p);
   static void destruct_triggercLcLTriggerRefsCollections(void *p);

   // Function generating the singleton type initializer
   static TGenericClassInfo *GenerateInitInstanceLocal(const ::trigger::TriggerRefsCollections*)
   {
      ::trigger::TriggerRefsCollections *ptr = 0;
      static ::TVirtualIsAProxy* isa_proxy = new ::TIsAProxy(typeid(::trigger::TriggerRefsCollections));
      static ::ROOT::TGenericClassInfo 
         instance("trigger::TriggerRefsCollections", 14, "DataFormats/HLTReco/interface/TriggerRefsCollections.h", 86,
                  typeid(::trigger::TriggerRefsCollections), ::ROOT::Internal::DefineBehavior(ptr, ptr),
                  &triggercLcLTriggerRefsCollections_Dictionary, isa_proxy, 8,
                  sizeof(::trigger::TriggerRefsCollections) );
      instance.SetNew(&new_triggercLcLTriggerRefsCollections);
      instance.SetNewArray(&newArray_triggercLcLTriggerRefsCollections);
      instance.SetDelete(&delete_triggercLcLTriggerRefsCollections);
      instance.SetDeleteArray(&deleteArray_triggercLcLTriggerRefsCollections);
      instance.SetDestructor(&destruct_triggercLcLTriggerRefsCollections);
      return &instance;
   }
   TGenericClassInfo *GenerateInitInstance(const ::trigger::TriggerRefsCollections*)
   {
      return GenerateInitInstanceLocal((::trigger::TriggerRefsCollections*)0);
   }
   // Static variable to force the class initialization
   static ::ROOT::TGenericClassInfo *_R__UNIQUE_(Init) = GenerateInitInstanceLocal((const ::trigger::TriggerRefsCollections*)0x0); R__UseDummy(_R__UNIQUE_(Init));

   // Dictionary for non-ClassDef classes
   static TClass *triggercLcLTriggerRefsCollections_Dictionary() {
      TClass* theClass =::ROOT::GenerateInitInstanceLocal((const ::trigger::TriggerRefsCollections*)0x0)->GetClass();
      triggercLcLTriggerRefsCollections_TClassManip(theClass);
   return theClass;
   }

   static void triggercLcLTriggerRefsCollections_TClassManip(TClass* ){
   }

} // end of namespace ROOT

namespace ROOT {
   static TClass *triggercLcLTriggerFilterObjectWithRefs_Dictionary();
   static void triggercLcLTriggerFilterObjectWithRefs_TClassManip(TClass*);
   static void *new_triggercLcLTriggerFilterObjectWithRefs(void *p = 0);
   static void *newArray_triggercLcLTriggerFilterObjectWithRefs(Long_t size, void *p);
   static void delete_triggercLcLTriggerFilterObjectWithRefs(void *p);
   static void deleteArray_triggercLcLTriggerFilterObjectWithRefs(void *p);
   static void destruct_triggercLcLTriggerFilterObjectWithRefs(void *p);

   // Function generating the singleton type initializer
   static TGenericClassInfo *GenerateInitInstanceLocal(const ::trigger::TriggerFilterObjectWithRefs*)
   {
      ::trigger::TriggerFilterObjectWithRefs *ptr = 0;
      static ::TVirtualIsAProxy* isa_proxy = new ::TIsAProxy(typeid(::trigger::TriggerFilterObjectWithRefs));
      static ::ROOT::TGenericClassInfo 
         instance("trigger::TriggerFilterObjectWithRefs", 13, "DataFormats/HLTReco/interface/TriggerFilterObjectWithRefs.h", 36,
                  typeid(::trigger::TriggerFilterObjectWithRefs), ::ROOT::Internal::DefineBehavior(ptr, ptr),
                  &triggercLcLTriggerFilterObjectWithRefs_Dictionary, isa_proxy, 8,
                  sizeof(::trigger::TriggerFilterObjectWithRefs) );
      instance.SetNew(&new_triggercLcLTriggerFilterObjectWithRefs);
      instance.SetNewArray(&newArray_triggercLcLTriggerFilterObjectWithRefs);
      instance.SetDelete(&delete_triggercLcLTriggerFilterObjectWithRefs);
      instance.SetDeleteArray(&deleteArray_triggercLcLTriggerFilterObjectWithRefs);
      instance.SetDestructor(&destruct_triggercLcLTriggerFilterObjectWithRefs);
      return &instance;
   }
   TGenericClassInfo *GenerateInitInstance(const ::trigger::TriggerFilterObjectWithRefs*)
   {
      return GenerateInitInstanceLocal((::trigger::TriggerFilterObjectWithRefs*)0);
   }
   // Static variable to force the class initialization
   static ::ROOT::TGenericClassInfo *_R__UNIQUE_(Init) = GenerateInitInstanceLocal((const ::trigger::TriggerFilterObjectWithRefs*)0x0); R__UseDummy(_R__UNIQUE_(Init));

   // Dictionary for non-ClassDef classes
   static TClass *triggercLcLTriggerFilterObjectWithRefs_Dictionary() {
      TClass* theClass =::ROOT::GenerateInitInstanceLocal((const ::trigger::TriggerFilterObjectWithRefs*)0x0)->GetClass();
      triggercLcLTriggerFilterObjectWithRefs_TClassManip(theClass);
   return theClass;
   }

   static void triggercLcLTriggerFilterObjectWithRefs_TClassManip(TClass* ){
   }

} // end of namespace ROOT

namespace ROOT {
   static TClass *triggercLcLTriggerEventcLcLTriggerFilterObject_Dictionary();
   static void triggercLcLTriggerEventcLcLTriggerFilterObject_TClassManip(TClass*);
   static void *new_triggercLcLTriggerEventcLcLTriggerFilterObject(void *p = 0);
   static void *newArray_triggercLcLTriggerEventcLcLTriggerFilterObject(Long_t size, void *p);
   static void delete_triggercLcLTriggerEventcLcLTriggerFilterObject(void *p);
   static void deleteArray_triggercLcLTriggerEventcLcLTriggerFilterObject(void *p);
   static void destruct_triggercLcLTriggerEventcLcLTriggerFilterObject(void *p);

   // Function generating the singleton type initializer
   static TGenericClassInfo *GenerateInitInstanceLocal(const ::trigger::TriggerEvent::TriggerFilterObject*)
   {
      ::trigger::TriggerEvent::TriggerFilterObject *ptr = 0;
      static ::TVirtualIsAProxy* isa_proxy = new ::TIsAProxy(typeid(::trigger::TriggerEvent::TriggerFilterObject));
      static ::ROOT::TGenericClassInfo 
         instance("trigger::TriggerEvent::TriggerFilterObject", 10, "DataFormats/HLTReco/interface/TriggerEvent.h", 30,
                  typeid(::trigger::TriggerEvent::TriggerFilterObject), ::ROOT::Internal::DefineBehavior(ptr, ptr),
                  &triggercLcLTriggerEventcLcLTriggerFilterObject_Dictionary, isa_proxy, 8,
                  sizeof(::trigger::TriggerEvent::TriggerFilterObject) );
      instance.SetNew(&new_triggercLcLTriggerEventcLcLTriggerFilterObject);
      instance.SetNewArray(&newArray_triggercLcLTriggerEventcLcLTriggerFilterObject);
      instance.SetDelete(&delete_triggercLcLTriggerEventcLcLTriggerFilterObject);
      instance.SetDeleteArray(&deleteArray_triggercLcLTriggerEventcLcLTriggerFilterObject);
      instance.SetDestructor(&destruct_triggercLcLTriggerEventcLcLTriggerFilterObject);
      return &instance;
   }
   TGenericClassInfo *GenerateInitInstance(const ::trigger::TriggerEvent::TriggerFilterObject*)
   {
      return GenerateInitInstanceLocal((::trigger::TriggerEvent::TriggerFilterObject*)0);
   }
   // Static variable to force the class initialization
   static ::ROOT::TGenericClassInfo *_R__UNIQUE_(Init) = GenerateInitInstanceLocal((const ::trigger::TriggerEvent::TriggerFilterObject*)0x0); R__UseDummy(_R__UNIQUE_(Init));

   // Dictionary for non-ClassDef classes
   static TClass *triggercLcLTriggerEventcLcLTriggerFilterObject_Dictionary() {
      TClass* theClass =::ROOT::GenerateInitInstanceLocal((const ::trigger::TriggerEvent::TriggerFilterObject*)0x0)->GetClass();
      triggercLcLTriggerEventcLcLTriggerFilterObject_TClassManip(theClass);
   return theClass;
   }

   static void triggercLcLTriggerEventcLcLTriggerFilterObject_TClassManip(TClass* ){
   }

} // end of namespace ROOT

namespace ROOT {
   static TClass *triggercLcLTriggerEvent_Dictionary();
   static void triggercLcLTriggerEvent_TClassManip(TClass*);
   static void *new_triggercLcLTriggerEvent(void *p = 0);
   static void *newArray_triggercLcLTriggerEvent(Long_t size, void *p);
   static void delete_triggercLcLTriggerEvent(void *p);
   static void deleteArray_triggercLcLTriggerEvent(void *p);
   static void destruct_triggercLcLTriggerEvent(void *p);

   // Function generating the singleton type initializer
   static TGenericClassInfo *GenerateInitInstanceLocal(const ::trigger::TriggerEvent*)
   {
      ::trigger::TriggerEvent *ptr = 0;
      static ::TVirtualIsAProxy* isa_proxy = new ::TIsAProxy(typeid(::trigger::TriggerEvent));
      static ::ROOT::TGenericClassInfo 
         instance("trigger::TriggerEvent", 11, "DataFormats/HLTReco/interface/TriggerEvent.h", 25,
                  typeid(::trigger::TriggerEvent), ::ROOT::Internal::DefineBehavior(ptr, ptr),
                  &triggercLcLTriggerEvent_Dictionary, isa_proxy, 8,
                  sizeof(::trigger::TriggerEvent) );
      instance.SetNew(&new_triggercLcLTriggerEvent);
      instance.SetNewArray(&newArray_triggercLcLTriggerEvent);
      instance.SetDelete(&delete_triggercLcLTriggerEvent);
      instance.SetDeleteArray(&deleteArray_triggercLcLTriggerEvent);
      instance.SetDestructor(&destruct_triggercLcLTriggerEvent);
      return &instance;
   }
   TGenericClassInfo *GenerateInitInstance(const ::trigger::TriggerEvent*)
   {
      return GenerateInitInstanceLocal((::trigger::TriggerEvent*)0);
   }
   // Static variable to force the class initialization
   static ::ROOT::TGenericClassInfo *_R__UNIQUE_(Init) = GenerateInitInstanceLocal((const ::trigger::TriggerEvent*)0x0); R__UseDummy(_R__UNIQUE_(Init));

   // Dictionary for non-ClassDef classes
   static TClass *triggercLcLTriggerEvent_Dictionary() {
      TClass* theClass =::ROOT::GenerateInitInstanceLocal((const ::trigger::TriggerEvent*)0x0)->GetClass();
      triggercLcLTriggerEvent_TClassManip(theClass);
   return theClass;
   }

   static void triggercLcLTriggerEvent_TClassManip(TClass* ){
   }

} // end of namespace ROOT

namespace ROOT {
   static TClass *triggercLcLTriggerEventWithRefscLcLTriggerFilterObject_Dictionary();
   static void triggercLcLTriggerEventWithRefscLcLTriggerFilterObject_TClassManip(TClass*);
   static void *new_triggercLcLTriggerEventWithRefscLcLTriggerFilterObject(void *p = 0);
   static void *newArray_triggercLcLTriggerEventWithRefscLcLTriggerFilterObject(Long_t size, void *p);
   static void delete_triggercLcLTriggerEventWithRefscLcLTriggerFilterObject(void *p);
   static void deleteArray_triggercLcLTriggerEventWithRefscLcLTriggerFilterObject(void *p);
   static void destruct_triggercLcLTriggerEventWithRefscLcLTriggerFilterObject(void *p);

   // Function generating the singleton type initializer
   static TGenericClassInfo *GenerateInitInstanceLocal(const ::trigger::TriggerEventWithRefs::TriggerFilterObject*)
   {
      ::trigger::TriggerEventWithRefs::TriggerFilterObject *ptr = 0;
      static ::TVirtualIsAProxy* isa_proxy = new ::TIsAProxy(typeid(::trigger::TriggerEventWithRefs::TriggerFilterObject));
      static ::ROOT::TGenericClassInfo 
         instance("trigger::TriggerEventWithRefs::TriggerFilterObject", 14, "DataFormats/HLTReco/interface/TriggerEventWithRefs.h", 34,
                  typeid(::trigger::TriggerEventWithRefs::TriggerFilterObject), ::ROOT::Internal::DefineBehavior(ptr, ptr),
                  &triggercLcLTriggerEventWithRefscLcLTriggerFilterObject_Dictionary, isa_proxy, 8,
                  sizeof(::trigger::TriggerEventWithRefs::TriggerFilterObject) );
      instance.SetNew(&new_triggercLcLTriggerEventWithRefscLcLTriggerFilterObject);
      instance.SetNewArray(&newArray_triggercLcLTriggerEventWithRefscLcLTriggerFilterObject);
      instance.SetDelete(&delete_triggercLcLTriggerEventWithRefscLcLTriggerFilterObject);
      instance.SetDeleteArray(&deleteArray_triggercLcLTriggerEventWithRefscLcLTriggerFilterObject);
      instance.SetDestructor(&destruct_triggercLcLTriggerEventWithRefscLcLTriggerFilterObject);
      return &instance;
   }
   TGenericClassInfo *GenerateInitInstance(const ::trigger::TriggerEventWithRefs::TriggerFilterObject*)
   {
      return GenerateInitInstanceLocal((::trigger::TriggerEventWithRefs::TriggerFilterObject*)0);
   }
   // Static variable to force the class initialization
   static ::ROOT::TGenericClassInfo *_R__UNIQUE_(Init) = GenerateInitInstanceLocal((const ::trigger::TriggerEventWithRefs::TriggerFilterObject*)0x0); R__UseDummy(_R__UNIQUE_(Init));

   // Dictionary for non-ClassDef classes
   static TClass *triggercLcLTriggerEventWithRefscLcLTriggerFilterObject_Dictionary() {
      TClass* theClass =::ROOT::GenerateInitInstanceLocal((const ::trigger::TriggerEventWithRefs::TriggerFilterObject*)0x0)->GetClass();
      triggercLcLTriggerEventWithRefscLcLTriggerFilterObject_TClassManip(theClass);
   return theClass;
   }

   static void triggercLcLTriggerEventWithRefscLcLTriggerFilterObject_TClassManip(TClass* ){
   }

} // end of namespace ROOT

namespace ROOT {
   static TClass *triggercLcLTriggerEventWithRefs_Dictionary();
   static void triggercLcLTriggerEventWithRefs_TClassManip(TClass*);
   static void *new_triggercLcLTriggerEventWithRefs(void *p = 0);
   static void *newArray_triggercLcLTriggerEventWithRefs(Long_t size, void *p);
   static void delete_triggercLcLTriggerEventWithRefs(void *p);
   static void deleteArray_triggercLcLTriggerEventWithRefs(void *p);
   static void destruct_triggercLcLTriggerEventWithRefs(void *p);

   // Function generating the singleton type initializer
   static TGenericClassInfo *GenerateInitInstanceLocal(const ::trigger::TriggerEventWithRefs*)
   {
      ::trigger::TriggerEventWithRefs *ptr = 0;
      static ::TVirtualIsAProxy* isa_proxy = new ::TIsAProxy(typeid(::trigger::TriggerEventWithRefs));
      static ::ROOT::TGenericClassInfo 
         instance("trigger::TriggerEventWithRefs", 13, "DataFormats/HLTReco/interface/TriggerEventWithRefs.h", 28,
                  typeid(::trigger::TriggerEventWithRefs), ::ROOT::Internal::DefineBehavior(ptr, ptr),
                  &triggercLcLTriggerEventWithRefs_Dictionary, isa_proxy, 8,
                  sizeof(::trigger::TriggerEventWithRefs) );
      instance.SetNew(&new_triggercLcLTriggerEventWithRefs);
      instance.SetNewArray(&newArray_triggercLcLTriggerEventWithRefs);
      instance.SetDelete(&delete_triggercLcLTriggerEventWithRefs);
      instance.SetDeleteArray(&deleteArray_triggercLcLTriggerEventWithRefs);
      instance.SetDestructor(&destruct_triggercLcLTriggerEventWithRefs);
      return &instance;
   }
   TGenericClassInfo *GenerateInitInstance(const ::trigger::TriggerEventWithRefs*)
   {
      return GenerateInitInstanceLocal((::trigger::TriggerEventWithRefs*)0);
   }
   // Static variable to force the class initialization
   static ::ROOT::TGenericClassInfo *_R__UNIQUE_(Init) = GenerateInitInstanceLocal((const ::trigger::TriggerEventWithRefs*)0x0); R__UseDummy(_R__UNIQUE_(Init));

   // Dictionary for non-ClassDef classes
   static TClass *triggercLcLTriggerEventWithRefs_Dictionary() {
      TClass* theClass =::ROOT::GenerateInitInstanceLocal((const ::trigger::TriggerEventWithRefs*)0x0)->GetClass();
      triggercLcLTriggerEventWithRefs_TClassManip(theClass);
   return theClass;
   }

   static void triggercLcLTriggerEventWithRefs_TClassManip(TClass* ){
   }

} // end of namespace ROOT

namespace ROOT {
   static TClass *edmcLcLWrapperlEvectorlEtriggercLcLTriggerObjectgRsPgR_Dictionary();
   static void edmcLcLWrapperlEvectorlEtriggercLcLTriggerObjectgRsPgR_TClassManip(TClass*);
   static void *new_edmcLcLWrapperlEvectorlEtriggercLcLTriggerObjectgRsPgR(void *p = 0);
   static void *newArray_edmcLcLWrapperlEvectorlEtriggercLcLTriggerObjectgRsPgR(Long_t size, void *p);
   static void delete_edmcLcLWrapperlEvectorlEtriggercLcLTriggerObjectgRsPgR(void *p);
   static void deleteArray_edmcLcLWrapperlEvectorlEtriggercLcLTriggerObjectgRsPgR(void *p);
   static void destruct_edmcLcLWrapperlEvectorlEtriggercLcLTriggerObjectgRsPgR(void *p);

   // Function generating the singleton type initializer
   static TGenericClassInfo *GenerateInitInstanceLocal(const ::edm::Wrapper<vector<trigger::TriggerObject> >*)
   {
      ::edm::Wrapper<vector<trigger::TriggerObject> > *ptr = 0;
      static ::TVirtualIsAProxy* isa_proxy = new ::TIsAProxy(typeid(::edm::Wrapper<vector<trigger::TriggerObject> >));
      static ::ROOT::TGenericClassInfo 
         instance("edm::Wrapper<vector<trigger::TriggerObject> >", ::edm::Wrapper<vector<trigger::TriggerObject> >::Class_Version(), "DataFormats/Common/interface/Wrapper.h", 25,
                  typeid(::edm::Wrapper<vector<trigger::TriggerObject> >), ::ROOT::Internal::DefineBehavior(ptr, ptr),
                  &edmcLcLWrapperlEvectorlEtriggercLcLTriggerObjectgRsPgR_Dictionary, isa_proxy, 0,
                  sizeof(::edm::Wrapper<vector<trigger::TriggerObject> >) );
      instance.SetNew(&new_edmcLcLWrapperlEvectorlEtriggercLcLTriggerObjectgRsPgR);
      instance.SetNewArray(&newArray_edmcLcLWrapperlEvectorlEtriggercLcLTriggerObjectgRsPgR);
      instance.SetDelete(&delete_edmcLcLWrapperlEvectorlEtriggercLcLTriggerObjectgRsPgR);
      instance.SetDeleteArray(&deleteArray_edmcLcLWrapperlEvectorlEtriggercLcLTriggerObjectgRsPgR);
      instance.SetDestructor(&destruct_edmcLcLWrapperlEvectorlEtriggercLcLTriggerObjectgRsPgR);

      ::ROOT::AddClassAlternate("edm::Wrapper<vector<trigger::TriggerObject> >","edm::Wrapper<trigger::TriggerObjectCollection>");
      return &instance;
   }
   TGenericClassInfo *GenerateInitInstance(const ::edm::Wrapper<vector<trigger::TriggerObject> >*)
   {
      return GenerateInitInstanceLocal((::edm::Wrapper<vector<trigger::TriggerObject> >*)0);
   }
   // Static variable to force the class initialization
   static ::ROOT::TGenericClassInfo *_R__UNIQUE_(Init) = GenerateInitInstanceLocal((const ::edm::Wrapper<vector<trigger::TriggerObject> >*)0x0); R__UseDummy(_R__UNIQUE_(Init));

   // Dictionary for non-ClassDef classes
   static TClass *edmcLcLWrapperlEvectorlEtriggercLcLTriggerObjectgRsPgR_Dictionary() {
      TClass* theClass =::ROOT::GenerateInitInstanceLocal((const ::edm::Wrapper<vector<trigger::TriggerObject> >*)0x0)->GetClass();
      edmcLcLWrapperlEvectorlEtriggercLcLTriggerObjectgRsPgR_TClassManip(theClass);
   return theClass;
   }

   static void edmcLcLWrapperlEvectorlEtriggercLcLTriggerObjectgRsPgR_TClassManip(TClass* theClass){
      theClass->CreateAttributeMap();
      TDictAttributeMap* attrMap( theClass->GetAttributeMap() );
      attrMap->AddProperty("splitLevel","0");
   }

} // end of namespace ROOT

namespace ROOT {
   static TClass *edmcLcLWrapperlEtriggercLcLTriggerFilterObjectWithRefsgR_Dictionary();
   static void edmcLcLWrapperlEtriggercLcLTriggerFilterObjectWithRefsgR_TClassManip(TClass*);
   static void *new_edmcLcLWrapperlEtriggercLcLTriggerFilterObjectWithRefsgR(void *p = 0);
   static void *newArray_edmcLcLWrapperlEtriggercLcLTriggerFilterObjectWithRefsgR(Long_t size, void *p);
   static void delete_edmcLcLWrapperlEtriggercLcLTriggerFilterObjectWithRefsgR(void *p);
   static void deleteArray_edmcLcLWrapperlEtriggercLcLTriggerFilterObjectWithRefsgR(void *p);
   static void destruct_edmcLcLWrapperlEtriggercLcLTriggerFilterObjectWithRefsgR(void *p);

   // Function generating the singleton type initializer
   static TGenericClassInfo *GenerateInitInstanceLocal(const ::edm::Wrapper<trigger::TriggerFilterObjectWithRefs>*)
   {
      ::edm::Wrapper<trigger::TriggerFilterObjectWithRefs> *ptr = 0;
      static ::TVirtualIsAProxy* isa_proxy = new ::TIsAProxy(typeid(::edm::Wrapper<trigger::TriggerFilterObjectWithRefs>));
      static ::ROOT::TGenericClassInfo 
         instance("edm::Wrapper<trigger::TriggerFilterObjectWithRefs>", ::edm::Wrapper<trigger::TriggerFilterObjectWithRefs>::Class_Version(), "DataFormats/Common/interface/Wrapper.h", 25,
                  typeid(::edm::Wrapper<trigger::TriggerFilterObjectWithRefs>), ::ROOT::Internal::DefineBehavior(ptr, ptr),
                  &edmcLcLWrapperlEtriggercLcLTriggerFilterObjectWithRefsgR_Dictionary, isa_proxy, 0,
                  sizeof(::edm::Wrapper<trigger::TriggerFilterObjectWithRefs>) );
      instance.SetNew(&new_edmcLcLWrapperlEtriggercLcLTriggerFilterObjectWithRefsgR);
      instance.SetNewArray(&newArray_edmcLcLWrapperlEtriggercLcLTriggerFilterObjectWithRefsgR);
      instance.SetDelete(&delete_edmcLcLWrapperlEtriggercLcLTriggerFilterObjectWithRefsgR);
      instance.SetDeleteArray(&deleteArray_edmcLcLWrapperlEtriggercLcLTriggerFilterObjectWithRefsgR);
      instance.SetDestructor(&destruct_edmcLcLWrapperlEtriggercLcLTriggerFilterObjectWithRefsgR);
      return &instance;
   }
   TGenericClassInfo *GenerateInitInstance(const ::edm::Wrapper<trigger::TriggerFilterObjectWithRefs>*)
   {
      return GenerateInitInstanceLocal((::edm::Wrapper<trigger::TriggerFilterObjectWithRefs>*)0);
   }
   // Static variable to force the class initialization
   static ::ROOT::TGenericClassInfo *_R__UNIQUE_(Init) = GenerateInitInstanceLocal((const ::edm::Wrapper<trigger::TriggerFilterObjectWithRefs>*)0x0); R__UseDummy(_R__UNIQUE_(Init));

   // Dictionary for non-ClassDef classes
   static TClass *edmcLcLWrapperlEtriggercLcLTriggerFilterObjectWithRefsgR_Dictionary() {
      TClass* theClass =::ROOT::GenerateInitInstanceLocal((const ::edm::Wrapper<trigger::TriggerFilterObjectWithRefs>*)0x0)->GetClass();
      edmcLcLWrapperlEtriggercLcLTriggerFilterObjectWithRefsgR_TClassManip(theClass);
   return theClass;
   }

   static void edmcLcLWrapperlEtriggercLcLTriggerFilterObjectWithRefsgR_TClassManip(TClass* theClass){
      theClass->CreateAttributeMap();
      TDictAttributeMap* attrMap( theClass->GetAttributeMap() );
      attrMap->AddProperty("splitLevel","0");
   }

} // end of namespace ROOT

namespace ROOT {
   static TClass *edmcLcLWrapperlEtriggercLcLTriggerEventgR_Dictionary();
   static void edmcLcLWrapperlEtriggercLcLTriggerEventgR_TClassManip(TClass*);
   static void *new_edmcLcLWrapperlEtriggercLcLTriggerEventgR(void *p = 0);
   static void *newArray_edmcLcLWrapperlEtriggercLcLTriggerEventgR(Long_t size, void *p);
   static void delete_edmcLcLWrapperlEtriggercLcLTriggerEventgR(void *p);
   static void deleteArray_edmcLcLWrapperlEtriggercLcLTriggerEventgR(void *p);
   static void destruct_edmcLcLWrapperlEtriggercLcLTriggerEventgR(void *p);

   // Function generating the singleton type initializer
   static TGenericClassInfo *GenerateInitInstanceLocal(const ::edm::Wrapper<trigger::TriggerEvent>*)
   {
      ::edm::Wrapper<trigger::TriggerEvent> *ptr = 0;
      static ::TVirtualIsAProxy* isa_proxy = new ::TIsAProxy(typeid(::edm::Wrapper<trigger::TriggerEvent>));
      static ::ROOT::TGenericClassInfo 
         instance("edm::Wrapper<trigger::TriggerEvent>", ::edm::Wrapper<trigger::TriggerEvent>::Class_Version(), "DataFormats/Common/interface/Wrapper.h", 25,
                  typeid(::edm::Wrapper<trigger::TriggerEvent>), ::ROOT::Internal::DefineBehavior(ptr, ptr),
                  &edmcLcLWrapperlEtriggercLcLTriggerEventgR_Dictionary, isa_proxy, 0,
                  sizeof(::edm::Wrapper<trigger::TriggerEvent>) );
      instance.SetNew(&new_edmcLcLWrapperlEtriggercLcLTriggerEventgR);
      instance.SetNewArray(&newArray_edmcLcLWrapperlEtriggercLcLTriggerEventgR);
      instance.SetDelete(&delete_edmcLcLWrapperlEtriggercLcLTriggerEventgR);
      instance.SetDeleteArray(&deleteArray_edmcLcLWrapperlEtriggercLcLTriggerEventgR);
      instance.SetDestructor(&destruct_edmcLcLWrapperlEtriggercLcLTriggerEventgR);
      return &instance;
   }
   TGenericClassInfo *GenerateInitInstance(const ::edm::Wrapper<trigger::TriggerEvent>*)
   {
      return GenerateInitInstanceLocal((::edm::Wrapper<trigger::TriggerEvent>*)0);
   }
   // Static variable to force the class initialization
   static ::ROOT::TGenericClassInfo *_R__UNIQUE_(Init) = GenerateInitInstanceLocal((const ::edm::Wrapper<trigger::TriggerEvent>*)0x0); R__UseDummy(_R__UNIQUE_(Init));

   // Dictionary for non-ClassDef classes
   static TClass *edmcLcLWrapperlEtriggercLcLTriggerEventgR_Dictionary() {
      TClass* theClass =::ROOT::GenerateInitInstanceLocal((const ::edm::Wrapper<trigger::TriggerEvent>*)0x0)->GetClass();
      edmcLcLWrapperlEtriggercLcLTriggerEventgR_TClassManip(theClass);
   return theClass;
   }

   static void edmcLcLWrapperlEtriggercLcLTriggerEventgR_TClassManip(TClass* theClass){
      theClass->CreateAttributeMap();
      TDictAttributeMap* attrMap( theClass->GetAttributeMap() );
      attrMap->AddProperty("splitLevel","0");
   }

} // end of namespace ROOT

namespace ROOT {
   static TClass *edmcLcLWrapperlEtriggercLcLTriggerEventWithRefsgR_Dictionary();
   static void edmcLcLWrapperlEtriggercLcLTriggerEventWithRefsgR_TClassManip(TClass*);
   static void *new_edmcLcLWrapperlEtriggercLcLTriggerEventWithRefsgR(void *p = 0);
   static void *newArray_edmcLcLWrapperlEtriggercLcLTriggerEventWithRefsgR(Long_t size, void *p);
   static void delete_edmcLcLWrapperlEtriggercLcLTriggerEventWithRefsgR(void *p);
   static void deleteArray_edmcLcLWrapperlEtriggercLcLTriggerEventWithRefsgR(void *p);
   static void destruct_edmcLcLWrapperlEtriggercLcLTriggerEventWithRefsgR(void *p);

   // Function generating the singleton type initializer
   static TGenericClassInfo *GenerateInitInstanceLocal(const ::edm::Wrapper<trigger::TriggerEventWithRefs>*)
   {
      ::edm::Wrapper<trigger::TriggerEventWithRefs> *ptr = 0;
      static ::TVirtualIsAProxy* isa_proxy = new ::TIsAProxy(typeid(::edm::Wrapper<trigger::TriggerEventWithRefs>));
      static ::ROOT::TGenericClassInfo 
         instance("edm::Wrapper<trigger::TriggerEventWithRefs>", ::edm::Wrapper<trigger::TriggerEventWithRefs>::Class_Version(), "DataFormats/Common/interface/Wrapper.h", 25,
                  typeid(::edm::Wrapper<trigger::TriggerEventWithRefs>), ::ROOT::Internal::DefineBehavior(ptr, ptr),
                  &edmcLcLWrapperlEtriggercLcLTriggerEventWithRefsgR_Dictionary, isa_proxy, 0,
                  sizeof(::edm::Wrapper<trigger::TriggerEventWithRefs>) );
      instance.SetNew(&new_edmcLcLWrapperlEtriggercLcLTriggerEventWithRefsgR);
      instance.SetNewArray(&newArray_edmcLcLWrapperlEtriggercLcLTriggerEventWithRefsgR);
      instance.SetDelete(&delete_edmcLcLWrapperlEtriggercLcLTriggerEventWithRefsgR);
      instance.SetDeleteArray(&deleteArray_edmcLcLWrapperlEtriggercLcLTriggerEventWithRefsgR);
      instance.SetDestructor(&destruct_edmcLcLWrapperlEtriggercLcLTriggerEventWithRefsgR);
      return &instance;
   }
   TGenericClassInfo *GenerateInitInstance(const ::edm::Wrapper<trigger::TriggerEventWithRefs>*)
   {
      return GenerateInitInstanceLocal((::edm::Wrapper<trigger::TriggerEventWithRefs>*)0);
   }
   // Static variable to force the class initialization
   static ::ROOT::TGenericClassInfo *_R__UNIQUE_(Init) = GenerateInitInstanceLocal((const ::edm::Wrapper<trigger::TriggerEventWithRefs>*)0x0); R__UseDummy(_R__UNIQUE_(Init));

   // Dictionary for non-ClassDef classes
   static TClass *edmcLcLWrapperlEtriggercLcLTriggerEventWithRefsgR_Dictionary() {
      TClass* theClass =::ROOT::GenerateInitInstanceLocal((const ::edm::Wrapper<trigger::TriggerEventWithRefs>*)0x0)->GetClass();
      edmcLcLWrapperlEtriggercLcLTriggerEventWithRefsgR_TClassManip(theClass);
   return theClass;
   }

   static void edmcLcLWrapperlEtriggercLcLTriggerEventWithRefsgR_TClassManip(TClass* theClass){
      theClass->CreateAttributeMap();
      TDictAttributeMap* attrMap( theClass->GetAttributeMap() );
      attrMap->AddProperty("splitLevel","0");
   }

} // end of namespace ROOT

namespace ROOT {
   static TClass *triggercLcLHLTPrescaleTable_Dictionary();
   static void triggercLcLHLTPrescaleTable_TClassManip(TClass*);
   static void *new_triggercLcLHLTPrescaleTable(void *p = 0);
   static void *newArray_triggercLcLHLTPrescaleTable(Long_t size, void *p);
   static void delete_triggercLcLHLTPrescaleTable(void *p);
   static void deleteArray_triggercLcLHLTPrescaleTable(void *p);
   static void destruct_triggercLcLHLTPrescaleTable(void *p);

   // Function generating the singleton type initializer
   static TGenericClassInfo *GenerateInitInstanceLocal(const ::trigger::HLTPrescaleTable*)
   {
      ::trigger::HLTPrescaleTable *ptr = 0;
      static ::TVirtualIsAProxy* isa_proxy = new ::TIsAProxy(typeid(::trigger::HLTPrescaleTable));
      static ::ROOT::TGenericClassInfo 
         instance("trigger::HLTPrescaleTable", 10, "DataFormats/HLTReco/interface/HLTPrescaleTable.h", 21,
                  typeid(::trigger::HLTPrescaleTable), ::ROOT::Internal::DefineBehavior(ptr, ptr),
                  &triggercLcLHLTPrescaleTable_Dictionary, isa_proxy, 8,
                  sizeof(::trigger::HLTPrescaleTable) );
      instance.SetNew(&new_triggercLcLHLTPrescaleTable);
      instance.SetNewArray(&newArray_triggercLcLHLTPrescaleTable);
      instance.SetDelete(&delete_triggercLcLHLTPrescaleTable);
      instance.SetDeleteArray(&deleteArray_triggercLcLHLTPrescaleTable);
      instance.SetDestructor(&destruct_triggercLcLHLTPrescaleTable);
      return &instance;
   }
   TGenericClassInfo *GenerateInitInstance(const ::trigger::HLTPrescaleTable*)
   {
      return GenerateInitInstanceLocal((::trigger::HLTPrescaleTable*)0);
   }
   // Static variable to force the class initialization
   static ::ROOT::TGenericClassInfo *_R__UNIQUE_(Init) = GenerateInitInstanceLocal((const ::trigger::HLTPrescaleTable*)0x0); R__UseDummy(_R__UNIQUE_(Init));

   // Dictionary for non-ClassDef classes
   static TClass *triggercLcLHLTPrescaleTable_Dictionary() {
      TClass* theClass =::ROOT::GenerateInitInstanceLocal((const ::trigger::HLTPrescaleTable*)0x0)->GetClass();
      triggercLcLHLTPrescaleTable_TClassManip(theClass);
   return theClass;
   }

   static void triggercLcLHLTPrescaleTable_TClassManip(TClass* ){
   }

} // end of namespace ROOT

namespace ROOT {
   static TClass *edmcLcLWrapperlEtriggercLcLHLTPrescaleTablegR_Dictionary();
   static void edmcLcLWrapperlEtriggercLcLHLTPrescaleTablegR_TClassManip(TClass*);
   static void *new_edmcLcLWrapperlEtriggercLcLHLTPrescaleTablegR(void *p = 0);
   static void *newArray_edmcLcLWrapperlEtriggercLcLHLTPrescaleTablegR(Long_t size, void *p);
   static void delete_edmcLcLWrapperlEtriggercLcLHLTPrescaleTablegR(void *p);
   static void deleteArray_edmcLcLWrapperlEtriggercLcLHLTPrescaleTablegR(void *p);
   static void destruct_edmcLcLWrapperlEtriggercLcLHLTPrescaleTablegR(void *p);

   // Function generating the singleton type initializer
   static TGenericClassInfo *GenerateInitInstanceLocal(const ::edm::Wrapper<trigger::HLTPrescaleTable>*)
   {
      ::edm::Wrapper<trigger::HLTPrescaleTable> *ptr = 0;
      static ::TVirtualIsAProxy* isa_proxy = new ::TIsAProxy(typeid(::edm::Wrapper<trigger::HLTPrescaleTable>));
      static ::ROOT::TGenericClassInfo 
         instance("edm::Wrapper<trigger::HLTPrescaleTable>", ::edm::Wrapper<trigger::HLTPrescaleTable>::Class_Version(), "DataFormats/Common/interface/Wrapper.h", 25,
                  typeid(::edm::Wrapper<trigger::HLTPrescaleTable>), ::ROOT::Internal::DefineBehavior(ptr, ptr),
                  &edmcLcLWrapperlEtriggercLcLHLTPrescaleTablegR_Dictionary, isa_proxy, 0,
                  sizeof(::edm::Wrapper<trigger::HLTPrescaleTable>) );
      instance.SetNew(&new_edmcLcLWrapperlEtriggercLcLHLTPrescaleTablegR);
      instance.SetNewArray(&newArray_edmcLcLWrapperlEtriggercLcLHLTPrescaleTablegR);
      instance.SetDelete(&delete_edmcLcLWrapperlEtriggercLcLHLTPrescaleTablegR);
      instance.SetDeleteArray(&deleteArray_edmcLcLWrapperlEtriggercLcLHLTPrescaleTablegR);
      instance.SetDestructor(&destruct_edmcLcLWrapperlEtriggercLcLHLTPrescaleTablegR);
      return &instance;
   }
   TGenericClassInfo *GenerateInitInstance(const ::edm::Wrapper<trigger::HLTPrescaleTable>*)
   {
      return GenerateInitInstanceLocal((::edm::Wrapper<trigger::HLTPrescaleTable>*)0);
   }
   // Static variable to force the class initialization
   static ::ROOT::TGenericClassInfo *_R__UNIQUE_(Init) = GenerateInitInstanceLocal((const ::edm::Wrapper<trigger::HLTPrescaleTable>*)0x0); R__UseDummy(_R__UNIQUE_(Init));

   // Dictionary for non-ClassDef classes
   static TClass *edmcLcLWrapperlEtriggercLcLHLTPrescaleTablegR_Dictionary() {
      TClass* theClass =::ROOT::GenerateInitInstanceLocal((const ::edm::Wrapper<trigger::HLTPrescaleTable>*)0x0)->GetClass();
      edmcLcLWrapperlEtriggercLcLHLTPrescaleTablegR_TClassManip(theClass);
   return theClass;
   }

   static void edmcLcLWrapperlEtriggercLcLHLTPrescaleTablegR_TClassManip(TClass* ){
   }

} // end of namespace ROOT

namespace ROOT {
   // Wrappers around operator new
   static void *new_edmcLcLModuleTime(void *p) {
      return  p ? ::new((::ROOT::Internal::TOperatorNewHelper*)p) ::edm::ModuleTime : new ::edm::ModuleTime;
   }
   static void *newArray_edmcLcLModuleTime(Long_t nElements, void *p) {
      return p ? ::new((::ROOT::Internal::TOperatorNewHelper*)p) ::edm::ModuleTime[nElements] : new ::edm::ModuleTime[nElements];
   }
   // Wrapper around operator delete
   static void delete_edmcLcLModuleTime(void *p) {
      delete ((::edm::ModuleTime*)p);
   }
   static void deleteArray_edmcLcLModuleTime(void *p) {
      delete [] ((::edm::ModuleTime*)p);
   }
   static void destruct_edmcLcLModuleTime(void *p) {
      typedef ::edm::ModuleTime current_t;
      ((current_t*)p)->~current_t();
   }
} // end of namespace ROOT for class ::edm::ModuleTime

namespace ROOT {
   // Wrappers around operator new
   static void *new_edmcLcLEventTime(void *p) {
      return  p ? ::new((::ROOT::Internal::TOperatorNewHelper*)p) ::edm::EventTime : new ::edm::EventTime;
   }
   static void *newArray_edmcLcLEventTime(Long_t nElements, void *p) {
      return p ? ::new((::ROOT::Internal::TOperatorNewHelper*)p) ::edm::EventTime[nElements] : new ::edm::EventTime[nElements];
   }
   // Wrapper around operator delete
   static void delete_edmcLcLEventTime(void *p) {
      delete ((::edm::EventTime*)p);
   }
   static void deleteArray_edmcLcLEventTime(void *p) {
      delete [] ((::edm::EventTime*)p);
   }
   static void destruct_edmcLcLEventTime(void *p) {
      typedef ::edm::EventTime current_t;
      ((current_t*)p)->~current_t();
   }
} // end of namespace ROOT for class ::edm::EventTime

namespace ROOT {
   // Wrappers around operator new
   static void *new_edmcLcLWrapperlEedmcLcLEventTimegR(void *p) {
      return  p ? ::new((::ROOT::Internal::TOperatorNewHelper*)p) ::edm::Wrapper<edm::EventTime> : new ::edm::Wrapper<edm::EventTime>;
   }
   static void *newArray_edmcLcLWrapperlEedmcLcLEventTimegR(Long_t nElements, void *p) {
      return p ? ::new((::ROOT::Internal::TOperatorNewHelper*)p) ::edm::Wrapper<edm::EventTime>[nElements] : new ::edm::Wrapper<edm::EventTime>[nElements];
   }
   // Wrapper around operator delete
   static void delete_edmcLcLWrapperlEedmcLcLEventTimegR(void *p) {
      delete ((::edm::Wrapper<edm::EventTime>*)p);
   }
   static void deleteArray_edmcLcLWrapperlEedmcLcLEventTimegR(void *p) {
      delete [] ((::edm::Wrapper<edm::EventTime>*)p);
   }
   static void destruct_edmcLcLWrapperlEedmcLcLEventTimegR(void *p) {
      typedef ::edm::Wrapper<edm::EventTime> current_t;
      ((current_t*)p)->~current_t();
   }
} // end of namespace ROOT for class ::edm::Wrapper<edm::EventTime>

namespace ROOT {
   // Wrappers around operator new
   static void *new_HLTPerformanceInfo(void *p) {
      return  p ? new(p) ::HLTPerformanceInfo : new ::HLTPerformanceInfo;
   }
   static void *newArray_HLTPerformanceInfo(Long_t nElements, void *p) {
      return p ? new(p) ::HLTPerformanceInfo[nElements] : new ::HLTPerformanceInfo[nElements];
   }
   // Wrapper around operator delete
   static void delete_HLTPerformanceInfo(void *p) {
      delete ((::HLTPerformanceInfo*)p);
   }
   static void deleteArray_HLTPerformanceInfo(void *p) {
      delete [] ((::HLTPerformanceInfo*)p);
   }
   static void destruct_HLTPerformanceInfo(void *p) {
      typedef ::HLTPerformanceInfo current_t;
      ((current_t*)p)->~current_t();
   }
} // end of namespace ROOT for class ::HLTPerformanceInfo

namespace ROOT {
   // Wrappers around operator new
   static void *new_edmcLcLWrapperlEHLTPerformanceInfogR(void *p) {
      return  p ? ::new((::ROOT::Internal::TOperatorNewHelper*)p) ::edm::Wrapper<HLTPerformanceInfo> : new ::edm::Wrapper<HLTPerformanceInfo>;
   }
   static void *newArray_edmcLcLWrapperlEHLTPerformanceInfogR(Long_t nElements, void *p) {
      return p ? ::new((::ROOT::Internal::TOperatorNewHelper*)p) ::edm::Wrapper<HLTPerformanceInfo>[nElements] : new ::edm::Wrapper<HLTPerformanceInfo>[nElements];
   }
   // Wrapper around operator delete
   static void delete_edmcLcLWrapperlEHLTPerformanceInfogR(void *p) {
      delete ((::edm::Wrapper<HLTPerformanceInfo>*)p);
   }
   static void deleteArray_edmcLcLWrapperlEHLTPerformanceInfogR(void *p) {
      delete [] ((::edm::Wrapper<HLTPerformanceInfo>*)p);
   }
   static void destruct_edmcLcLWrapperlEHLTPerformanceInfogR(void *p) {
      typedef ::edm::Wrapper<HLTPerformanceInfo> current_t;
      ((current_t*)p)->~current_t();
   }
} // end of namespace ROOT for class ::edm::Wrapper<HLTPerformanceInfo>

namespace ROOT {
   // Wrappers around operator new
   static void *new_HLTPerformanceInfocLcLModule(void *p) {
      return  p ? ::new((::ROOT::Internal::TOperatorNewHelper*)p) ::HLTPerformanceInfo::Module : new ::HLTPerformanceInfo::Module;
   }
   static void *newArray_HLTPerformanceInfocLcLModule(Long_t nElements, void *p) {
      return p ? ::new((::ROOT::Internal::TOperatorNewHelper*)p) ::HLTPerformanceInfo::Module[nElements] : new ::HLTPerformanceInfo::Module[nElements];
   }
   // Wrapper around operator delete
   static void delete_HLTPerformanceInfocLcLModule(void *p) {
      delete ((::HLTPerformanceInfo::Module*)p);
   }
   static void deleteArray_HLTPerformanceInfocLcLModule(void *p) {
      delete [] ((::HLTPerformanceInfo::Module*)p);
   }
   static void destruct_HLTPerformanceInfocLcLModule(void *p) {
      typedef ::HLTPerformanceInfo::Module current_t;
      ((current_t*)p)->~current_t();
   }
} // end of namespace ROOT for class ::HLTPerformanceInfo::Module

namespace ROOT {
   // Wrappers around operator new
   static void *new___gnu_cxxcLcL__normal_iteratorlEconstsPHLTPerformanceInfocLcLModulemUcOvectorlEHLTPerformanceInfocLcLModulegRsPgR(void *p) {
      return  p ? ::new((::ROOT::Internal::TOperatorNewHelper*)p) ::__gnu_cxx::__normal_iterator<const HLTPerformanceInfo::Module*,vector<HLTPerformanceInfo::Module> > : new ::__gnu_cxx::__normal_iterator<const HLTPerformanceInfo::Module*,vector<HLTPerformanceInfo::Module> >;
   }
   static void *newArray___gnu_cxxcLcL__normal_iteratorlEconstsPHLTPerformanceInfocLcLModulemUcOvectorlEHLTPerformanceInfocLcLModulegRsPgR(Long_t nElements, void *p) {
      return p ? ::new((::ROOT::Internal::TOperatorNewHelper*)p) ::__gnu_cxx::__normal_iterator<const HLTPerformanceInfo::Module*,vector<HLTPerformanceInfo::Module> >[nElements] : new ::__gnu_cxx::__normal_iterator<const HLTPerformanceInfo::Module*,vector<HLTPerformanceInfo::Module> >[nElements];
   }
   // Wrapper around operator delete
   static void delete___gnu_cxxcLcL__normal_iteratorlEconstsPHLTPerformanceInfocLcLModulemUcOvectorlEHLTPerformanceInfocLcLModulegRsPgR(void *p) {
      delete ((::__gnu_cxx::__normal_iterator<const HLTPerformanceInfo::Module*,vector<HLTPerformanceInfo::Module> >*)p);
   }
   static void deleteArray___gnu_cxxcLcL__normal_iteratorlEconstsPHLTPerformanceInfocLcLModulemUcOvectorlEHLTPerformanceInfocLcLModulegRsPgR(void *p) {
      delete [] ((::__gnu_cxx::__normal_iterator<const HLTPerformanceInfo::Module*,vector<HLTPerformanceInfo::Module> >*)p);
   }
   static void destruct___gnu_cxxcLcL__normal_iteratorlEconstsPHLTPerformanceInfocLcLModulemUcOvectorlEHLTPerformanceInfocLcLModulegRsPgR(void *p) {
      typedef ::__gnu_cxx::__normal_iterator<const HLTPerformanceInfo::Module*,vector<HLTPerformanceInfo::Module> > current_t;
      ((current_t*)p)->~current_t();
   }
} // end of namespace ROOT for class ::__gnu_cxx::__normal_iterator<const HLTPerformanceInfo::Module*,vector<HLTPerformanceInfo::Module> >

namespace ROOT {
   // Wrappers around operator new
   static void *new_HLTPerformanceInfocLcLPath(void *p) {
      return  p ? ::new((::ROOT::Internal::TOperatorNewHelper*)p) ::HLTPerformanceInfo::Path : new ::HLTPerformanceInfo::Path;
   }
   static void *newArray_HLTPerformanceInfocLcLPath(Long_t nElements, void *p) {
      return p ? ::new((::ROOT::Internal::TOperatorNewHelper*)p) ::HLTPerformanceInfo::Path[nElements] : new ::HLTPerformanceInfo::Path[nElements];
   }
   // Wrapper around operator delete
   static void delete_HLTPerformanceInfocLcLPath(void *p) {
      delete ((::HLTPerformanceInfo::Path*)p);
   }
   static void deleteArray_HLTPerformanceInfocLcLPath(void *p) {
      delete [] ((::HLTPerformanceInfo::Path*)p);
   }
   static void destruct_HLTPerformanceInfocLcLPath(void *p) {
      typedef ::HLTPerformanceInfo::Path current_t;
      ((current_t*)p)->~current_t();
   }
} // end of namespace ROOT for class ::HLTPerformanceInfo::Path

namespace ROOT {
   // Wrappers around operator new
   static void *new___gnu_cxxcLcL__normal_iteratorlEconstsPHLTPerformanceInfocLcLPathmUcOvectorlEHLTPerformanceInfocLcLPathgRsPgR(void *p) {
      return  p ? ::new((::ROOT::Internal::TOperatorNewHelper*)p) ::__gnu_cxx::__normal_iterator<const HLTPerformanceInfo::Path*,vector<HLTPerformanceInfo::Path> > : new ::__gnu_cxx::__normal_iterator<const HLTPerformanceInfo::Path*,vector<HLTPerformanceInfo::Path> >;
   }
   static void *newArray___gnu_cxxcLcL__normal_iteratorlEconstsPHLTPerformanceInfocLcLPathmUcOvectorlEHLTPerformanceInfocLcLPathgRsPgR(Long_t nElements, void *p) {
      return p ? ::new((::ROOT::Internal::TOperatorNewHelper*)p) ::__gnu_cxx::__normal_iterator<const HLTPerformanceInfo::Path*,vector<HLTPerformanceInfo::Path> >[nElements] : new ::__gnu_cxx::__normal_iterator<const HLTPerformanceInfo::Path*,vector<HLTPerformanceInfo::Path> >[nElements];
   }
   // Wrapper around operator delete
   static void delete___gnu_cxxcLcL__normal_iteratorlEconstsPHLTPerformanceInfocLcLPathmUcOvectorlEHLTPerformanceInfocLcLPathgRsPgR(void *p) {
      delete ((::__gnu_cxx::__normal_iterator<const HLTPerformanceInfo::Path*,vector<HLTPerformanceInfo::Path> >*)p);
   }
   static void deleteArray___gnu_cxxcLcL__normal_iteratorlEconstsPHLTPerformanceInfocLcLPathmUcOvectorlEHLTPerformanceInfocLcLPathgRsPgR(void *p) {
      delete [] ((::__gnu_cxx::__normal_iterator<const HLTPerformanceInfo::Path*,vector<HLTPerformanceInfo::Path> >*)p);
   }
   static void destruct___gnu_cxxcLcL__normal_iteratorlEconstsPHLTPerformanceInfocLcLPathmUcOvectorlEHLTPerformanceInfocLcLPathgRsPgR(void *p) {
      typedef ::__gnu_cxx::__normal_iterator<const HLTPerformanceInfo::Path*,vector<HLTPerformanceInfo::Path> > current_t;
      ((current_t*)p)->~current_t();
   }
} // end of namespace ROOT for class ::__gnu_cxx::__normal_iterator<const HLTPerformanceInfo::Path*,vector<HLTPerformanceInfo::Path> >

namespace ROOT {
   // Wrappers around operator new
   static void *new___gnu_cxxcLcL__normal_iteratorlEconstsPtriggercLcLTriggerObjectTypemUcOvectorlEtriggercLcLTriggerObjectTypegRsPgR(void *p) {
      return  p ? ::new((::ROOT::Internal::TOperatorNewHelper*)p) ::__gnu_cxx::__normal_iterator<const trigger::TriggerObjectType*,vector<trigger::TriggerObjectType> > : new ::__gnu_cxx::__normal_iterator<const trigger::TriggerObjectType*,vector<trigger::TriggerObjectType> >;
   }
   static void *newArray___gnu_cxxcLcL__normal_iteratorlEconstsPtriggercLcLTriggerObjectTypemUcOvectorlEtriggercLcLTriggerObjectTypegRsPgR(Long_t nElements, void *p) {
      return p ? ::new((::ROOT::Internal::TOperatorNewHelper*)p) ::__gnu_cxx::__normal_iterator<const trigger::TriggerObjectType*,vector<trigger::TriggerObjectType> >[nElements] : new ::__gnu_cxx::__normal_iterator<const trigger::TriggerObjectType*,vector<trigger::TriggerObjectType> >[nElements];
   }
   // Wrapper around operator delete
   static void delete___gnu_cxxcLcL__normal_iteratorlEconstsPtriggercLcLTriggerObjectTypemUcOvectorlEtriggercLcLTriggerObjectTypegRsPgR(void *p) {
      delete ((::__gnu_cxx::__normal_iterator<const trigger::TriggerObjectType*,vector<trigger::TriggerObjectType> >*)p);
   }
   static void deleteArray___gnu_cxxcLcL__normal_iteratorlEconstsPtriggercLcLTriggerObjectTypemUcOvectorlEtriggercLcLTriggerObjectTypegRsPgR(void *p) {
      delete [] ((::__gnu_cxx::__normal_iterator<const trigger::TriggerObjectType*,vector<trigger::TriggerObjectType> >*)p);
   }
   static void destruct___gnu_cxxcLcL__normal_iteratorlEconstsPtriggercLcLTriggerObjectTypemUcOvectorlEtriggercLcLTriggerObjectTypegRsPgR(void *p) {
      typedef ::__gnu_cxx::__normal_iterator<const trigger::TriggerObjectType*,vector<trigger::TriggerObjectType> > current_t;
      ((current_t*)p)->~current_t();
   }
} // end of namespace ROOT for class ::__gnu_cxx::__normal_iterator<const trigger::TriggerObjectType*,vector<trigger::TriggerObjectType> >

namespace ROOT {
   // Wrappers around operator new
   static void *new_triggercLcLTriggerObject(void *p) {
      return  p ? ::new((::ROOT::Internal::TOperatorNewHelper*)p) ::trigger::TriggerObject : new ::trigger::TriggerObject;
   }
   static void *newArray_triggercLcLTriggerObject(Long_t nElements, void *p) {
      return p ? ::new((::ROOT::Internal::TOperatorNewHelper*)p) ::trigger::TriggerObject[nElements] : new ::trigger::TriggerObject[nElements];
   }
   // Wrapper around operator delete
   static void delete_triggercLcLTriggerObject(void *p) {
      delete ((::trigger::TriggerObject*)p);
   }
   static void deleteArray_triggercLcLTriggerObject(void *p) {
      delete [] ((::trigger::TriggerObject*)p);
   }
   static void destruct_triggercLcLTriggerObject(void *p) {
      typedef ::trigger::TriggerObject current_t;
      ((current_t*)p)->~current_t();
   }
} // end of namespace ROOT for class ::trigger::TriggerObject

namespace ROOT {
   // Wrappers around operator new
   static void *new_triggercLcLTriggerRefsCollections(void *p) {
      return  p ? ::new((::ROOT::Internal::TOperatorNewHelper*)p) ::trigger::TriggerRefsCollections : new ::trigger::TriggerRefsCollections;
   }
   static void *newArray_triggercLcLTriggerRefsCollections(Long_t nElements, void *p) {
      return p ? ::new((::ROOT::Internal::TOperatorNewHelper*)p) ::trigger::TriggerRefsCollections[nElements] : new ::trigger::TriggerRefsCollections[nElements];
   }
   // Wrapper around operator delete
   static void delete_triggercLcLTriggerRefsCollections(void *p) {
      delete ((::trigger::TriggerRefsCollections*)p);
   }
   static void deleteArray_triggercLcLTriggerRefsCollections(void *p) {
      delete [] ((::trigger::TriggerRefsCollections*)p);
   }
   static void destruct_triggercLcLTriggerRefsCollections(void *p) {
      typedef ::trigger::TriggerRefsCollections current_t;
      ((current_t*)p)->~current_t();
   }
} // end of namespace ROOT for class ::trigger::TriggerRefsCollections

namespace ROOT {
   // Wrappers around operator new
   static void *new_triggercLcLTriggerFilterObjectWithRefs(void *p) {
      return  p ? ::new((::ROOT::Internal::TOperatorNewHelper*)p) ::trigger::TriggerFilterObjectWithRefs : new ::trigger::TriggerFilterObjectWithRefs;
   }
   static void *newArray_triggercLcLTriggerFilterObjectWithRefs(Long_t nElements, void *p) {
      return p ? ::new((::ROOT::Internal::TOperatorNewHelper*)p) ::trigger::TriggerFilterObjectWithRefs[nElements] : new ::trigger::TriggerFilterObjectWithRefs[nElements];
   }
   // Wrapper around operator delete
   static void delete_triggercLcLTriggerFilterObjectWithRefs(void *p) {
      delete ((::trigger::TriggerFilterObjectWithRefs*)p);
   }
   static void deleteArray_triggercLcLTriggerFilterObjectWithRefs(void *p) {
      delete [] ((::trigger::TriggerFilterObjectWithRefs*)p);
   }
   static void destruct_triggercLcLTriggerFilterObjectWithRefs(void *p) {
      typedef ::trigger::TriggerFilterObjectWithRefs current_t;
      ((current_t*)p)->~current_t();
   }
} // end of namespace ROOT for class ::trigger::TriggerFilterObjectWithRefs

namespace ROOT {
   // Wrappers around operator new
   static void *new_triggercLcLTriggerEventcLcLTriggerFilterObject(void *p) {
      return  p ? ::new((::ROOT::Internal::TOperatorNewHelper*)p) ::trigger::TriggerEvent::TriggerFilterObject : new ::trigger::TriggerEvent::TriggerFilterObject;
   }
   static void *newArray_triggercLcLTriggerEventcLcLTriggerFilterObject(Long_t nElements, void *p) {
      return p ? ::new((::ROOT::Internal::TOperatorNewHelper*)p) ::trigger::TriggerEvent::TriggerFilterObject[nElements] : new ::trigger::TriggerEvent::TriggerFilterObject[nElements];
   }
   // Wrapper around operator delete
   static void delete_triggercLcLTriggerEventcLcLTriggerFilterObject(void *p) {
      delete ((::trigger::TriggerEvent::TriggerFilterObject*)p);
   }
   static void deleteArray_triggercLcLTriggerEventcLcLTriggerFilterObject(void *p) {
      delete [] ((::trigger::TriggerEvent::TriggerFilterObject*)p);
   }
   static void destruct_triggercLcLTriggerEventcLcLTriggerFilterObject(void *p) {
      typedef ::trigger::TriggerEvent::TriggerFilterObject current_t;
      ((current_t*)p)->~current_t();
   }
} // end of namespace ROOT for class ::trigger::TriggerEvent::TriggerFilterObject

namespace ROOT {
   // Wrappers around operator new
   static void *new_triggercLcLTriggerEvent(void *p) {
      return  p ? ::new((::ROOT::Internal::TOperatorNewHelper*)p) ::trigger::TriggerEvent : new ::trigger::TriggerEvent;
   }
   static void *newArray_triggercLcLTriggerEvent(Long_t nElements, void *p) {
      return p ? ::new((::ROOT::Internal::TOperatorNewHelper*)p) ::trigger::TriggerEvent[nElements] : new ::trigger::TriggerEvent[nElements];
   }
   // Wrapper around operator delete
   static void delete_triggercLcLTriggerEvent(void *p) {
      delete ((::trigger::TriggerEvent*)p);
   }
   static void deleteArray_triggercLcLTriggerEvent(void *p) {
      delete [] ((::trigger::TriggerEvent*)p);
   }
   static void destruct_triggercLcLTriggerEvent(void *p) {
      typedef ::trigger::TriggerEvent current_t;
      ((current_t*)p)->~current_t();
   }
} // end of namespace ROOT for class ::trigger::TriggerEvent

namespace ROOT {
   // Wrappers around operator new
   static void *new_triggercLcLTriggerEventWithRefscLcLTriggerFilterObject(void *p) {
      return  p ? ::new((::ROOT::Internal::TOperatorNewHelper*)p) ::trigger::TriggerEventWithRefs::TriggerFilterObject : new ::trigger::TriggerEventWithRefs::TriggerFilterObject;
   }
   static void *newArray_triggercLcLTriggerEventWithRefscLcLTriggerFilterObject(Long_t nElements, void *p) {
      return p ? ::new((::ROOT::Internal::TOperatorNewHelper*)p) ::trigger::TriggerEventWithRefs::TriggerFilterObject[nElements] : new ::trigger::TriggerEventWithRefs::TriggerFilterObject[nElements];
   }
   // Wrapper around operator delete
   static void delete_triggercLcLTriggerEventWithRefscLcLTriggerFilterObject(void *p) {
      delete ((::trigger::TriggerEventWithRefs::TriggerFilterObject*)p);
   }
   static void deleteArray_triggercLcLTriggerEventWithRefscLcLTriggerFilterObject(void *p) {
      delete [] ((::trigger::TriggerEventWithRefs::TriggerFilterObject*)p);
   }
   static void destruct_triggercLcLTriggerEventWithRefscLcLTriggerFilterObject(void *p) {
      typedef ::trigger::TriggerEventWithRefs::TriggerFilterObject current_t;
      ((current_t*)p)->~current_t();
   }
} // end of namespace ROOT for class ::trigger::TriggerEventWithRefs::TriggerFilterObject

namespace ROOT {
   // Wrappers around operator new
   static void *new_triggercLcLTriggerEventWithRefs(void *p) {
      return  p ? ::new((::ROOT::Internal::TOperatorNewHelper*)p) ::trigger::TriggerEventWithRefs : new ::trigger::TriggerEventWithRefs;
   }
   static void *newArray_triggercLcLTriggerEventWithRefs(Long_t nElements, void *p) {
      return p ? ::new((::ROOT::Internal::TOperatorNewHelper*)p) ::trigger::TriggerEventWithRefs[nElements] : new ::trigger::TriggerEventWithRefs[nElements];
   }
   // Wrapper around operator delete
   static void delete_triggercLcLTriggerEventWithRefs(void *p) {
      delete ((::trigger::TriggerEventWithRefs*)p);
   }
   static void deleteArray_triggercLcLTriggerEventWithRefs(void *p) {
      delete [] ((::trigger::TriggerEventWithRefs*)p);
   }
   static void destruct_triggercLcLTriggerEventWithRefs(void *p) {
      typedef ::trigger::TriggerEventWithRefs current_t;
      ((current_t*)p)->~current_t();
   }
} // end of namespace ROOT for class ::trigger::TriggerEventWithRefs

namespace ROOT {
   // Wrappers around operator new
   static void *new_edmcLcLWrapperlEvectorlEtriggercLcLTriggerObjectgRsPgR(void *p) {
      return  p ? ::new((::ROOT::Internal::TOperatorNewHelper*)p) ::edm::Wrapper<vector<trigger::TriggerObject> > : new ::edm::Wrapper<vector<trigger::TriggerObject> >;
   }
   static void *newArray_edmcLcLWrapperlEvectorlEtriggercLcLTriggerObjectgRsPgR(Long_t nElements, void *p) {
      return p ? ::new((::ROOT::Internal::TOperatorNewHelper*)p) ::edm::Wrapper<vector<trigger::TriggerObject> >[nElements] : new ::edm::Wrapper<vector<trigger::TriggerObject> >[nElements];
   }
   // Wrapper around operator delete
   static void delete_edmcLcLWrapperlEvectorlEtriggercLcLTriggerObjectgRsPgR(void *p) {
      delete ((::edm::Wrapper<vector<trigger::TriggerObject> >*)p);
   }
   static void deleteArray_edmcLcLWrapperlEvectorlEtriggercLcLTriggerObjectgRsPgR(void *p) {
      delete [] ((::edm::Wrapper<vector<trigger::TriggerObject> >*)p);
   }
   static void destruct_edmcLcLWrapperlEvectorlEtriggercLcLTriggerObjectgRsPgR(void *p) {
      typedef ::edm::Wrapper<vector<trigger::TriggerObject> > current_t;
      ((current_t*)p)->~current_t();
   }
} // end of namespace ROOT for class ::edm::Wrapper<vector<trigger::TriggerObject> >

namespace ROOT {
   // Wrappers around operator new
   static void *new_edmcLcLWrapperlEtriggercLcLTriggerFilterObjectWithRefsgR(void *p) {
      return  p ? ::new((::ROOT::Internal::TOperatorNewHelper*)p) ::edm::Wrapper<trigger::TriggerFilterObjectWithRefs> : new ::edm::Wrapper<trigger::TriggerFilterObjectWithRefs>;
   }
   static void *newArray_edmcLcLWrapperlEtriggercLcLTriggerFilterObjectWithRefsgR(Long_t nElements, void *p) {
      return p ? ::new((::ROOT::Internal::TOperatorNewHelper*)p) ::edm::Wrapper<trigger::TriggerFilterObjectWithRefs>[nElements] : new ::edm::Wrapper<trigger::TriggerFilterObjectWithRefs>[nElements];
   }
   // Wrapper around operator delete
   static void delete_edmcLcLWrapperlEtriggercLcLTriggerFilterObjectWithRefsgR(void *p) {
      delete ((::edm::Wrapper<trigger::TriggerFilterObjectWithRefs>*)p);
   }
   static void deleteArray_edmcLcLWrapperlEtriggercLcLTriggerFilterObjectWithRefsgR(void *p) {
      delete [] ((::edm::Wrapper<trigger::TriggerFilterObjectWithRefs>*)p);
   }
   static void destruct_edmcLcLWrapperlEtriggercLcLTriggerFilterObjectWithRefsgR(void *p) {
      typedef ::edm::Wrapper<trigger::TriggerFilterObjectWithRefs> current_t;
      ((current_t*)p)->~current_t();
   }
} // end of namespace ROOT for class ::edm::Wrapper<trigger::TriggerFilterObjectWithRefs>

namespace ROOT {
   // Wrappers around operator new
   static void *new_edmcLcLWrapperlEtriggercLcLTriggerEventgR(void *p) {
      return  p ? ::new((::ROOT::Internal::TOperatorNewHelper*)p) ::edm::Wrapper<trigger::TriggerEvent> : new ::edm::Wrapper<trigger::TriggerEvent>;
   }
   static void *newArray_edmcLcLWrapperlEtriggercLcLTriggerEventgR(Long_t nElements, void *p) {
      return p ? ::new((::ROOT::Internal::TOperatorNewHelper*)p) ::edm::Wrapper<trigger::TriggerEvent>[nElements] : new ::edm::Wrapper<trigger::TriggerEvent>[nElements];
   }
   // Wrapper around operator delete
   static void delete_edmcLcLWrapperlEtriggercLcLTriggerEventgR(void *p) {
      delete ((::edm::Wrapper<trigger::TriggerEvent>*)p);
   }
   static void deleteArray_edmcLcLWrapperlEtriggercLcLTriggerEventgR(void *p) {
      delete [] ((::edm::Wrapper<trigger::TriggerEvent>*)p);
   }
   static void destruct_edmcLcLWrapperlEtriggercLcLTriggerEventgR(void *p) {
      typedef ::edm::Wrapper<trigger::TriggerEvent> current_t;
      ((current_t*)p)->~current_t();
   }
} // end of namespace ROOT for class ::edm::Wrapper<trigger::TriggerEvent>

namespace ROOT {
   // Wrappers around operator new
   static void *new_edmcLcLWrapperlEtriggercLcLTriggerEventWithRefsgR(void *p) {
      return  p ? ::new((::ROOT::Internal::TOperatorNewHelper*)p) ::edm::Wrapper<trigger::TriggerEventWithRefs> : new ::edm::Wrapper<trigger::TriggerEventWithRefs>;
   }
   static void *newArray_edmcLcLWrapperlEtriggercLcLTriggerEventWithRefsgR(Long_t nElements, void *p) {
      return p ? ::new((::ROOT::Internal::TOperatorNewHelper*)p) ::edm::Wrapper<trigger::TriggerEventWithRefs>[nElements] : new ::edm::Wrapper<trigger::TriggerEventWithRefs>[nElements];
   }
   // Wrapper around operator delete
   static void delete_edmcLcLWrapperlEtriggercLcLTriggerEventWithRefsgR(void *p) {
      delete ((::edm::Wrapper<trigger::TriggerEventWithRefs>*)p);
   }
   static void deleteArray_edmcLcLWrapperlEtriggercLcLTriggerEventWithRefsgR(void *p) {
      delete [] ((::edm::Wrapper<trigger::TriggerEventWithRefs>*)p);
   }
   static void destruct_edmcLcLWrapperlEtriggercLcLTriggerEventWithRefsgR(void *p) {
      typedef ::edm::Wrapper<trigger::TriggerEventWithRefs> current_t;
      ((current_t*)p)->~current_t();
   }
} // end of namespace ROOT for class ::edm::Wrapper<trigger::TriggerEventWithRefs>

namespace ROOT {
   // Wrappers around operator new
   static void *new_triggercLcLHLTPrescaleTable(void *p) {
      return  p ? ::new((::ROOT::Internal::TOperatorNewHelper*)p) ::trigger::HLTPrescaleTable : new ::trigger::HLTPrescaleTable;
   }
   static void *newArray_triggercLcLHLTPrescaleTable(Long_t nElements, void *p) {
      return p ? ::new((::ROOT::Internal::TOperatorNewHelper*)p) ::trigger::HLTPrescaleTable[nElements] : new ::trigger::HLTPrescaleTable[nElements];
   }
   // Wrapper around operator delete
   static void delete_triggercLcLHLTPrescaleTable(void *p) {
      delete ((::trigger::HLTPrescaleTable*)p);
   }
   static void deleteArray_triggercLcLHLTPrescaleTable(void *p) {
      delete [] ((::trigger::HLTPrescaleTable*)p);
   }
   static void destruct_triggercLcLHLTPrescaleTable(void *p) {
      typedef ::trigger::HLTPrescaleTable current_t;
      ((current_t*)p)->~current_t();
   }
} // end of namespace ROOT for class ::trigger::HLTPrescaleTable

namespace ROOT {
   // Wrappers around operator new
   static void *new_edmcLcLWrapperlEtriggercLcLHLTPrescaleTablegR(void *p) {
      return  p ? ::new((::ROOT::Internal::TOperatorNewHelper*)p) ::edm::Wrapper<trigger::HLTPrescaleTable> : new ::edm::Wrapper<trigger::HLTPrescaleTable>;
   }
   static void *newArray_edmcLcLWrapperlEtriggercLcLHLTPrescaleTablegR(Long_t nElements, void *p) {
      return p ? ::new((::ROOT::Internal::TOperatorNewHelper*)p) ::edm::Wrapper<trigger::HLTPrescaleTable>[nElements] : new ::edm::Wrapper<trigger::HLTPrescaleTable>[nElements];
   }
   // Wrapper around operator delete
   static void delete_edmcLcLWrapperlEtriggercLcLHLTPrescaleTablegR(void *p) {
      delete ((::edm::Wrapper<trigger::HLTPrescaleTable>*)p);
   }
   static void deleteArray_edmcLcLWrapperlEtriggercLcLHLTPrescaleTablegR(void *p) {
      delete [] ((::edm::Wrapper<trigger::HLTPrescaleTable>*)p);
   }
   static void destruct_edmcLcLWrapperlEtriggercLcLHLTPrescaleTablegR(void *p) {
      typedef ::edm::Wrapper<trigger::HLTPrescaleTable> current_t;
      ((current_t*)p)->~current_t();
   }
} // end of namespace ROOT for class ::edm::Wrapper<trigger::HLTPrescaleTable>

namespace ROOT {
   static TClass *vectorlEunsignedsPintgR_Dictionary();
   static void vectorlEunsignedsPintgR_TClassManip(TClass*);
   static void *new_vectorlEunsignedsPintgR(void *p = 0);
   static void *newArray_vectorlEunsignedsPintgR(Long_t size, void *p);
   static void delete_vectorlEunsignedsPintgR(void *p);
   static void deleteArray_vectorlEunsignedsPintgR(void *p);
   static void destruct_vectorlEunsignedsPintgR(void *p);

   // Function generating the singleton type initializer
   static TGenericClassInfo *GenerateInitInstanceLocal(const vector<unsigned int>*)
   {
      vector<unsigned int> *ptr = 0;
      static ::TVirtualIsAProxy* isa_proxy = new ::TIsAProxy(typeid(vector<unsigned int>));
      static ::ROOT::TGenericClassInfo 
         instance("vector<unsigned int>", -2, "vector", 214,
                  typeid(vector<unsigned int>), ::ROOT::Internal::DefineBehavior(ptr, ptr),
                  &vectorlEunsignedsPintgR_Dictionary, isa_proxy, 4,
                  sizeof(vector<unsigned int>) );
      instance.SetNew(&new_vectorlEunsignedsPintgR);
      instance.SetNewArray(&newArray_vectorlEunsignedsPintgR);
      instance.SetDelete(&delete_vectorlEunsignedsPintgR);
      instance.SetDeleteArray(&deleteArray_vectorlEunsignedsPintgR);
      instance.SetDestructor(&destruct_vectorlEunsignedsPintgR);
      instance.AdoptCollectionProxyInfo(TCollectionProxyInfo::Generate(TCollectionProxyInfo::Pushback< vector<unsigned int> >()));
      return &instance;
   }
   // Static variable to force the class initialization
   static ::ROOT::TGenericClassInfo *_R__UNIQUE_(Init) = GenerateInitInstanceLocal((const vector<unsigned int>*)0x0); R__UseDummy(_R__UNIQUE_(Init));

   // Dictionary for non-ClassDef classes
   static TClass *vectorlEunsignedsPintgR_Dictionary() {
      TClass* theClass =::ROOT::GenerateInitInstanceLocal((const vector<unsigned int>*)0x0)->GetClass();
      vectorlEunsignedsPintgR_TClassManip(theClass);
   return theClass;
   }

   static void vectorlEunsignedsPintgR_TClassManip(TClass* ){
   }

} // end of namespace ROOT

namespace ROOT {
   // Wrappers around operator new
   static void *new_vectorlEunsignedsPintgR(void *p) {
      return  p ? ::new((::ROOT::Internal::TOperatorNewHelper*)p) vector<unsigned int> : new vector<unsigned int>;
   }
   static void *newArray_vectorlEunsignedsPintgR(Long_t nElements, void *p) {
      return p ? ::new((::ROOT::Internal::TOperatorNewHelper*)p) vector<unsigned int>[nElements] : new vector<unsigned int>[nElements];
   }
   // Wrapper around operator delete
   static void delete_vectorlEunsignedsPintgR(void *p) {
      delete ((vector<unsigned int>*)p);
   }
   static void deleteArray_vectorlEunsignedsPintgR(void *p) {
      delete [] ((vector<unsigned int>*)p);
   }
   static void destruct_vectorlEunsignedsPintgR(void *p) {
      typedef vector<unsigned int> current_t;
      ((current_t*)p)->~current_t();
   }
} // end of namespace ROOT for class vector<unsigned int>

namespace ROOT {
   static TClass *vectorlEtriggercLcLTriggerObjectTypegR_Dictionary();
   static void vectorlEtriggercLcLTriggerObjectTypegR_TClassManip(TClass*);
   static void *new_vectorlEtriggercLcLTriggerObjectTypegR(void *p = 0);
   static void *newArray_vectorlEtriggercLcLTriggerObjectTypegR(Long_t size, void *p);
   static void delete_vectorlEtriggercLcLTriggerObjectTypegR(void *p);
   static void deleteArray_vectorlEtriggercLcLTriggerObjectTypegR(void *p);
   static void destruct_vectorlEtriggercLcLTriggerObjectTypegR(void *p);

   // Function generating the singleton type initializer
   static TGenericClassInfo *GenerateInitInstanceLocal(const vector<trigger::TriggerObjectType>*)
   {
      vector<trigger::TriggerObjectType> *ptr = 0;
      static ::TVirtualIsAProxy* isa_proxy = new ::TIsAProxy(typeid(vector<trigger::TriggerObjectType>));
      static ::ROOT::TGenericClassInfo 
         instance("vector<trigger::TriggerObjectType>", -2, "vector", 214,
                  typeid(vector<trigger::TriggerObjectType>), ::ROOT::Internal::DefineBehavior(ptr, ptr),
                  &vectorlEtriggercLcLTriggerObjectTypegR_Dictionary, isa_proxy, 4,
                  sizeof(vector<trigger::TriggerObjectType>) );
      instance.SetNew(&new_vectorlEtriggercLcLTriggerObjectTypegR);
      instance.SetNewArray(&newArray_vectorlEtriggercLcLTriggerObjectTypegR);
      instance.SetDelete(&delete_vectorlEtriggercLcLTriggerObjectTypegR);
      instance.SetDeleteArray(&deleteArray_vectorlEtriggercLcLTriggerObjectTypegR);
      instance.SetDestructor(&destruct_vectorlEtriggercLcLTriggerObjectTypegR);
      instance.AdoptCollectionProxyInfo(TCollectionProxyInfo::Generate(TCollectionProxyInfo::Pushback< vector<trigger::TriggerObjectType> >()));
      return &instance;
   }
   // Static variable to force the class initialization
   static ::ROOT::TGenericClassInfo *_R__UNIQUE_(Init) = GenerateInitInstanceLocal((const vector<trigger::TriggerObjectType>*)0x0); R__UseDummy(_R__UNIQUE_(Init));

   // Dictionary for non-ClassDef classes
   static TClass *vectorlEtriggercLcLTriggerObjectTypegR_Dictionary() {
      TClass* theClass =::ROOT::GenerateInitInstanceLocal((const vector<trigger::TriggerObjectType>*)0x0)->GetClass();
      vectorlEtriggercLcLTriggerObjectTypegR_TClassManip(theClass);
   return theClass;
   }

   static void vectorlEtriggercLcLTriggerObjectTypegR_TClassManip(TClass* ){
   }

} // end of namespace ROOT

namespace ROOT {
   // Wrappers around operator new
   static void *new_vectorlEtriggercLcLTriggerObjectTypegR(void *p) {
      return  p ? ::new((::ROOT::Internal::TOperatorNewHelper*)p) vector<trigger::TriggerObjectType> : new vector<trigger::TriggerObjectType>;
   }
   static void *newArray_vectorlEtriggercLcLTriggerObjectTypegR(Long_t nElements, void *p) {
      return p ? ::new((::ROOT::Internal::TOperatorNewHelper*)p) vector<trigger::TriggerObjectType>[nElements] : new vector<trigger::TriggerObjectType>[nElements];
   }
   // Wrapper around operator delete
   static void delete_vectorlEtriggercLcLTriggerObjectTypegR(void *p) {
      delete ((vector<trigger::TriggerObjectType>*)p);
   }
   static void deleteArray_vectorlEtriggercLcLTriggerObjectTypegR(void *p) {
      delete [] ((vector<trigger::TriggerObjectType>*)p);
   }
   static void destruct_vectorlEtriggercLcLTriggerObjectTypegR(void *p) {
      typedef vector<trigger::TriggerObjectType> current_t;
      ((current_t*)p)->~current_t();
   }
} // end of namespace ROOT for class vector<trigger::TriggerObjectType>

namespace ROOT {
   static TClass *vectorlEtriggercLcLTriggerObjectgR_Dictionary();
   static void vectorlEtriggercLcLTriggerObjectgR_TClassManip(TClass*);
   static void *new_vectorlEtriggercLcLTriggerObjectgR(void *p = 0);
   static void *newArray_vectorlEtriggercLcLTriggerObjectgR(Long_t size, void *p);
   static void delete_vectorlEtriggercLcLTriggerObjectgR(void *p);
   static void deleteArray_vectorlEtriggercLcLTriggerObjectgR(void *p);
   static void destruct_vectorlEtriggercLcLTriggerObjectgR(void *p);

   // Function generating the singleton type initializer
   static TGenericClassInfo *GenerateInitInstanceLocal(const vector<trigger::TriggerObject>*)
   {
      vector<trigger::TriggerObject> *ptr = 0;
      static ::TVirtualIsAProxy* isa_proxy = new ::TIsAProxy(typeid(vector<trigger::TriggerObject>));
      static ::ROOT::TGenericClassInfo 
         instance("vector<trigger::TriggerObject>", -2, "vector", 214,
                  typeid(vector<trigger::TriggerObject>), ::ROOT::Internal::DefineBehavior(ptr, ptr),
                  &vectorlEtriggercLcLTriggerObjectgR_Dictionary, isa_proxy, 4,
                  sizeof(vector<trigger::TriggerObject>) );
      instance.SetNew(&new_vectorlEtriggercLcLTriggerObjectgR);
      instance.SetNewArray(&newArray_vectorlEtriggercLcLTriggerObjectgR);
      instance.SetDelete(&delete_vectorlEtriggercLcLTriggerObjectgR);
      instance.SetDeleteArray(&deleteArray_vectorlEtriggercLcLTriggerObjectgR);
      instance.SetDestructor(&destruct_vectorlEtriggercLcLTriggerObjectgR);
      instance.AdoptCollectionProxyInfo(TCollectionProxyInfo::Generate(TCollectionProxyInfo::Pushback< vector<trigger::TriggerObject> >()));
      return &instance;
   }
   // Static variable to force the class initialization
   static ::ROOT::TGenericClassInfo *_R__UNIQUE_(Init) = GenerateInitInstanceLocal((const vector<trigger::TriggerObject>*)0x0); R__UseDummy(_R__UNIQUE_(Init));

   // Dictionary for non-ClassDef classes
   static TClass *vectorlEtriggercLcLTriggerObjectgR_Dictionary() {
      TClass* theClass =::ROOT::GenerateInitInstanceLocal((const vector<trigger::TriggerObject>*)0x0)->GetClass();
      vectorlEtriggercLcLTriggerObjectgR_TClassManip(theClass);
   return theClass;
   }

   static void vectorlEtriggercLcLTriggerObjectgR_TClassManip(TClass* ){
   }

} // end of namespace ROOT

namespace ROOT {
   // Wrappers around operator new
   static void *new_vectorlEtriggercLcLTriggerObjectgR(void *p) {
      return  p ? ::new((::ROOT::Internal::TOperatorNewHelper*)p) vector<trigger::TriggerObject> : new vector<trigger::TriggerObject>;
   }
   static void *newArray_vectorlEtriggercLcLTriggerObjectgR(Long_t nElements, void *p) {
      return p ? ::new((::ROOT::Internal::TOperatorNewHelper*)p) vector<trigger::TriggerObject>[nElements] : new vector<trigger::TriggerObject>[nElements];
   }
   // Wrapper around operator delete
   static void delete_vectorlEtriggercLcLTriggerObjectgR(void *p) {
      delete ((vector<trigger::TriggerObject>*)p);
   }
   static void deleteArray_vectorlEtriggercLcLTriggerObjectgR(void *p) {
      delete [] ((vector<trigger::TriggerObject>*)p);
   }
   static void destruct_vectorlEtriggercLcLTriggerObjectgR(void *p) {
      typedef vector<trigger::TriggerObject> current_t;
      ((current_t*)p)->~current_t();
   }
} // end of namespace ROOT for class vector<trigger::TriggerObject>

namespace ROOT {
   static TClass *vectorlEtriggercLcLTriggerEventWithRefscLcLTriggerFilterObjectgR_Dictionary();
   static void vectorlEtriggercLcLTriggerEventWithRefscLcLTriggerFilterObjectgR_TClassManip(TClass*);
   static void *new_vectorlEtriggercLcLTriggerEventWithRefscLcLTriggerFilterObjectgR(void *p = 0);
   static void *newArray_vectorlEtriggercLcLTriggerEventWithRefscLcLTriggerFilterObjectgR(Long_t size, void *p);
   static void delete_vectorlEtriggercLcLTriggerEventWithRefscLcLTriggerFilterObjectgR(void *p);
   static void deleteArray_vectorlEtriggercLcLTriggerEventWithRefscLcLTriggerFilterObjectgR(void *p);
   static void destruct_vectorlEtriggercLcLTriggerEventWithRefscLcLTriggerFilterObjectgR(void *p);

   // Function generating the singleton type initializer
   static TGenericClassInfo *GenerateInitInstanceLocal(const vector<trigger::TriggerEventWithRefs::TriggerFilterObject>*)
   {
      vector<trigger::TriggerEventWithRefs::TriggerFilterObject> *ptr = 0;
      static ::TVirtualIsAProxy* isa_proxy = new ::TIsAProxy(typeid(vector<trigger::TriggerEventWithRefs::TriggerFilterObject>));
      static ::ROOT::TGenericClassInfo 
         instance("vector<trigger::TriggerEventWithRefs::TriggerFilterObject>", -2, "vector", 214,
                  typeid(vector<trigger::TriggerEventWithRefs::TriggerFilterObject>), ::ROOT::Internal::DefineBehavior(ptr, ptr),
                  &vectorlEtriggercLcLTriggerEventWithRefscLcLTriggerFilterObjectgR_Dictionary, isa_proxy, 4,
                  sizeof(vector<trigger::TriggerEventWithRefs::TriggerFilterObject>) );
      instance.SetNew(&new_vectorlEtriggercLcLTriggerEventWithRefscLcLTriggerFilterObjectgR);
      instance.SetNewArray(&newArray_vectorlEtriggercLcLTriggerEventWithRefscLcLTriggerFilterObjectgR);
      instance.SetDelete(&delete_vectorlEtriggercLcLTriggerEventWithRefscLcLTriggerFilterObjectgR);
      instance.SetDeleteArray(&deleteArray_vectorlEtriggercLcLTriggerEventWithRefscLcLTriggerFilterObjectgR);
      instance.SetDestructor(&destruct_vectorlEtriggercLcLTriggerEventWithRefscLcLTriggerFilterObjectgR);
      instance.AdoptCollectionProxyInfo(TCollectionProxyInfo::Generate(TCollectionProxyInfo::Pushback< vector<trigger::TriggerEventWithRefs::TriggerFilterObject> >()));
      return &instance;
   }
   // Static variable to force the class initialization
   static ::ROOT::TGenericClassInfo *_R__UNIQUE_(Init) = GenerateInitInstanceLocal((const vector<trigger::TriggerEventWithRefs::TriggerFilterObject>*)0x0); R__UseDummy(_R__UNIQUE_(Init));

   // Dictionary for non-ClassDef classes
   static TClass *vectorlEtriggercLcLTriggerEventWithRefscLcLTriggerFilterObjectgR_Dictionary() {
      TClass* theClass =::ROOT::GenerateInitInstanceLocal((const vector<trigger::TriggerEventWithRefs::TriggerFilterObject>*)0x0)->GetClass();
      vectorlEtriggercLcLTriggerEventWithRefscLcLTriggerFilterObjectgR_TClassManip(theClass);
   return theClass;
   }

   static void vectorlEtriggercLcLTriggerEventWithRefscLcLTriggerFilterObjectgR_TClassManip(TClass* ){
   }

} // end of namespace ROOT

namespace ROOT {
   // Wrappers around operator new
   static void *new_vectorlEtriggercLcLTriggerEventWithRefscLcLTriggerFilterObjectgR(void *p) {
      return  p ? ::new((::ROOT::Internal::TOperatorNewHelper*)p) vector<trigger::TriggerEventWithRefs::TriggerFilterObject> : new vector<trigger::TriggerEventWithRefs::TriggerFilterObject>;
   }
   static void *newArray_vectorlEtriggercLcLTriggerEventWithRefscLcLTriggerFilterObjectgR(Long_t nElements, void *p) {
      return p ? ::new((::ROOT::Internal::TOperatorNewHelper*)p) vector<trigger::TriggerEventWithRefs::TriggerFilterObject>[nElements] : new vector<trigger::TriggerEventWithRefs::TriggerFilterObject>[nElements];
   }
   // Wrapper around operator delete
   static void delete_vectorlEtriggercLcLTriggerEventWithRefscLcLTriggerFilterObjectgR(void *p) {
      delete ((vector<trigger::TriggerEventWithRefs::TriggerFilterObject>*)p);
   }
   static void deleteArray_vectorlEtriggercLcLTriggerEventWithRefscLcLTriggerFilterObjectgR(void *p) {
      delete [] ((vector<trigger::TriggerEventWithRefs::TriggerFilterObject>*)p);
   }
   static void destruct_vectorlEtriggercLcLTriggerEventWithRefscLcLTriggerFilterObjectgR(void *p) {
      typedef vector<trigger::TriggerEventWithRefs::TriggerFilterObject> current_t;
      ((current_t*)p)->~current_t();
   }
} // end of namespace ROOT for class vector<trigger::TriggerEventWithRefs::TriggerFilterObject>

namespace ROOT {
   static TClass *vectorlEtriggercLcLTriggerEventcLcLTriggerFilterObjectgR_Dictionary();
   static void vectorlEtriggercLcLTriggerEventcLcLTriggerFilterObjectgR_TClassManip(TClass*);
   static void *new_vectorlEtriggercLcLTriggerEventcLcLTriggerFilterObjectgR(void *p = 0);
   static void *newArray_vectorlEtriggercLcLTriggerEventcLcLTriggerFilterObjectgR(Long_t size, void *p);
   static void delete_vectorlEtriggercLcLTriggerEventcLcLTriggerFilterObjectgR(void *p);
   static void deleteArray_vectorlEtriggercLcLTriggerEventcLcLTriggerFilterObjectgR(void *p);
   static void destruct_vectorlEtriggercLcLTriggerEventcLcLTriggerFilterObjectgR(void *p);

   // Function generating the singleton type initializer
   static TGenericClassInfo *GenerateInitInstanceLocal(const vector<trigger::TriggerEvent::TriggerFilterObject>*)
   {
      vector<trigger::TriggerEvent::TriggerFilterObject> *ptr = 0;
      static ::TVirtualIsAProxy* isa_proxy = new ::TIsAProxy(typeid(vector<trigger::TriggerEvent::TriggerFilterObject>));
      static ::ROOT::TGenericClassInfo 
         instance("vector<trigger::TriggerEvent::TriggerFilterObject>", -2, "vector", 214,
                  typeid(vector<trigger::TriggerEvent::TriggerFilterObject>), ::ROOT::Internal::DefineBehavior(ptr, ptr),
                  &vectorlEtriggercLcLTriggerEventcLcLTriggerFilterObjectgR_Dictionary, isa_proxy, 4,
                  sizeof(vector<trigger::TriggerEvent::TriggerFilterObject>) );
      instance.SetNew(&new_vectorlEtriggercLcLTriggerEventcLcLTriggerFilterObjectgR);
      instance.SetNewArray(&newArray_vectorlEtriggercLcLTriggerEventcLcLTriggerFilterObjectgR);
      instance.SetDelete(&delete_vectorlEtriggercLcLTriggerEventcLcLTriggerFilterObjectgR);
      instance.SetDeleteArray(&deleteArray_vectorlEtriggercLcLTriggerEventcLcLTriggerFilterObjectgR);
      instance.SetDestructor(&destruct_vectorlEtriggercLcLTriggerEventcLcLTriggerFilterObjectgR);
      instance.AdoptCollectionProxyInfo(TCollectionProxyInfo::Generate(TCollectionProxyInfo::Pushback< vector<trigger::TriggerEvent::TriggerFilterObject> >()));
      return &instance;
   }
   // Static variable to force the class initialization
   static ::ROOT::TGenericClassInfo *_R__UNIQUE_(Init) = GenerateInitInstanceLocal((const vector<trigger::TriggerEvent::TriggerFilterObject>*)0x0); R__UseDummy(_R__UNIQUE_(Init));

   // Dictionary for non-ClassDef classes
   static TClass *vectorlEtriggercLcLTriggerEventcLcLTriggerFilterObjectgR_Dictionary() {
      TClass* theClass =::ROOT::GenerateInitInstanceLocal((const vector<trigger::TriggerEvent::TriggerFilterObject>*)0x0)->GetClass();
      vectorlEtriggercLcLTriggerEventcLcLTriggerFilterObjectgR_TClassManip(theClass);
   return theClass;
   }

   static void vectorlEtriggercLcLTriggerEventcLcLTriggerFilterObjectgR_TClassManip(TClass* ){
   }

} // end of namespace ROOT

namespace ROOT {
   // Wrappers around operator new
   static void *new_vectorlEtriggercLcLTriggerEventcLcLTriggerFilterObjectgR(void *p) {
      return  p ? ::new((::ROOT::Internal::TOperatorNewHelper*)p) vector<trigger::TriggerEvent::TriggerFilterObject> : new vector<trigger::TriggerEvent::TriggerFilterObject>;
   }
   static void *newArray_vectorlEtriggercLcLTriggerEventcLcLTriggerFilterObjectgR(Long_t nElements, void *p) {
      return p ? ::new((::ROOT::Internal::TOperatorNewHelper*)p) vector<trigger::TriggerEvent::TriggerFilterObject>[nElements] : new vector<trigger::TriggerEvent::TriggerFilterObject>[nElements];
   }
   // Wrapper around operator delete
   static void delete_vectorlEtriggercLcLTriggerEventcLcLTriggerFilterObjectgR(void *p) {
      delete ((vector<trigger::TriggerEvent::TriggerFilterObject>*)p);
   }
   static void deleteArray_vectorlEtriggercLcLTriggerEventcLcLTriggerFilterObjectgR(void *p) {
      delete [] ((vector<trigger::TriggerEvent::TriggerFilterObject>*)p);
   }
   static void destruct_vectorlEtriggercLcLTriggerEventcLcLTriggerFilterObjectgR(void *p) {
      typedef vector<trigger::TriggerEvent::TriggerFilterObject> current_t;
      ((current_t*)p)->~current_t();
   }
} // end of namespace ROOT for class vector<trigger::TriggerEvent::TriggerFilterObject>

namespace ROOT {
   static TClass *vectorlEedmcLcLReflEvectorlErecocLcLRecoEcalCandidategRcOrecocLcLRecoEcalCandidatecOedmcLcLrefhelpercLcLFindUsingAdvancelEvectorlErecocLcLRecoEcalCandidategRcOrecocLcLRecoEcalCandidategRsPgRsPgR_Dictionary();
   static void vectorlEedmcLcLReflEvectorlErecocLcLRecoEcalCandidategRcOrecocLcLRecoEcalCandidatecOedmcLcLrefhelpercLcLFindUsingAdvancelEvectorlErecocLcLRecoEcalCandidategRcOrecocLcLRecoEcalCandidategRsPgRsPgR_TClassManip(TClass*);
   static void *new_vectorlEedmcLcLReflEvectorlErecocLcLRecoEcalCandidategRcOrecocLcLRecoEcalCandidatecOedmcLcLrefhelpercLcLFindUsingAdvancelEvectorlErecocLcLRecoEcalCandidategRcOrecocLcLRecoEcalCandidategRsPgRsPgR(void *p = 0);
   static void *newArray_vectorlEedmcLcLReflEvectorlErecocLcLRecoEcalCandidategRcOrecocLcLRecoEcalCandidatecOedmcLcLrefhelpercLcLFindUsingAdvancelEvectorlErecocLcLRecoEcalCandidategRcOrecocLcLRecoEcalCandidategRsPgRsPgR(Long_t size, void *p);
   static void delete_vectorlEedmcLcLReflEvectorlErecocLcLRecoEcalCandidategRcOrecocLcLRecoEcalCandidatecOedmcLcLrefhelpercLcLFindUsingAdvancelEvectorlErecocLcLRecoEcalCandidategRcOrecocLcLRecoEcalCandidategRsPgRsPgR(void *p);
   static void deleteArray_vectorlEedmcLcLReflEvectorlErecocLcLRecoEcalCandidategRcOrecocLcLRecoEcalCandidatecOedmcLcLrefhelpercLcLFindUsingAdvancelEvectorlErecocLcLRecoEcalCandidategRcOrecocLcLRecoEcalCandidategRsPgRsPgR(void *p);
   static void destruct_vectorlEedmcLcLReflEvectorlErecocLcLRecoEcalCandidategRcOrecocLcLRecoEcalCandidatecOedmcLcLrefhelpercLcLFindUsingAdvancelEvectorlErecocLcLRecoEcalCandidategRcOrecocLcLRecoEcalCandidategRsPgRsPgR(void *p);

   // Function generating the singleton type initializer
   static TGenericClassInfo *GenerateInitInstanceLocal(const vector<edm::Ref<vector<reco::RecoEcalCandidate>,reco::RecoEcalCandidate,edm::refhelper::FindUsingAdvance<vector<reco::RecoEcalCandidate>,reco::RecoEcalCandidate> > >*)
   {
      vector<edm::Ref<vector<reco::RecoEcalCandidate>,reco::RecoEcalCandidate,edm::refhelper::FindUsingAdvance<vector<reco::RecoEcalCandidate>,reco::RecoEcalCandidate> > > *ptr = 0;
      static ::TVirtualIsAProxy* isa_proxy = new ::TIsAProxy(typeid(vector<edm::Ref<vector<reco::RecoEcalCandidate>,reco::RecoEcalCandidate,edm::refhelper::FindUsingAdvance<vector<reco::RecoEcalCandidate>,reco::RecoEcalCandidate> > >));
      static ::ROOT::TGenericClassInfo 
         instance("vector<edm::Ref<vector<reco::RecoEcalCandidate>,reco::RecoEcalCandidate,edm::refhelper::FindUsingAdvance<vector<reco::RecoEcalCandidate>,reco::RecoEcalCandidate> > >", -2, "vector", 214,
                  typeid(vector<edm::Ref<vector<reco::RecoEcalCandidate>,reco::RecoEcalCandidate,edm::refhelper::FindUsingAdvance<vector<reco::RecoEcalCandidate>,reco::RecoEcalCandidate> > >), ::ROOT::Internal::DefineBehavior(ptr, ptr),
                  &vectorlEedmcLcLReflEvectorlErecocLcLRecoEcalCandidategRcOrecocLcLRecoEcalCandidatecOedmcLcLrefhelpercLcLFindUsingAdvancelEvectorlErecocLcLRecoEcalCandidategRcOrecocLcLRecoEcalCandidategRsPgRsPgR_Dictionary, isa_proxy, 4,
                  sizeof(vector<edm::Ref<vector<reco::RecoEcalCandidate>,reco::RecoEcalCandidate,edm::refhelper::FindUsingAdvance<vector<reco::RecoEcalCandidate>,reco::RecoEcalCandidate> > >) );
      instance.SetNew(&new_vectorlEedmcLcLReflEvectorlErecocLcLRecoEcalCandidategRcOrecocLcLRecoEcalCandidatecOedmcLcLrefhelpercLcLFindUsingAdvancelEvectorlErecocLcLRecoEcalCandidategRcOrecocLcLRecoEcalCandidategRsPgRsPgR);
      instance.SetNewArray(&newArray_vectorlEedmcLcLReflEvectorlErecocLcLRecoEcalCandidategRcOrecocLcLRecoEcalCandidatecOedmcLcLrefhelpercLcLFindUsingAdvancelEvectorlErecocLcLRecoEcalCandidategRcOrecocLcLRecoEcalCandidategRsPgRsPgR);
      instance.SetDelete(&delete_vectorlEedmcLcLReflEvectorlErecocLcLRecoEcalCandidategRcOrecocLcLRecoEcalCandidatecOedmcLcLrefhelpercLcLFindUsingAdvancelEvectorlErecocLcLRecoEcalCandidategRcOrecocLcLRecoEcalCandidategRsPgRsPgR);
      instance.SetDeleteArray(&deleteArray_vectorlEedmcLcLReflEvectorlErecocLcLRecoEcalCandidategRcOrecocLcLRecoEcalCandidatecOedmcLcLrefhelpercLcLFindUsingAdvancelEvectorlErecocLcLRecoEcalCandidategRcOrecocLcLRecoEcalCandidategRsPgRsPgR);
      instance.SetDestructor(&destruct_vectorlEedmcLcLReflEvectorlErecocLcLRecoEcalCandidategRcOrecocLcLRecoEcalCandidatecOedmcLcLrefhelpercLcLFindUsingAdvancelEvectorlErecocLcLRecoEcalCandidategRcOrecocLcLRecoEcalCandidategRsPgRsPgR);
      instance.AdoptCollectionProxyInfo(TCollectionProxyInfo::Generate(TCollectionProxyInfo::Pushback< vector<edm::Ref<vector<reco::RecoEcalCandidate>,reco::RecoEcalCandidate,edm::refhelper::FindUsingAdvance<vector<reco::RecoEcalCandidate>,reco::RecoEcalCandidate> > > >()));
      return &instance;
   }
   // Static variable to force the class initialization
   static ::ROOT::TGenericClassInfo *_R__UNIQUE_(Init) = GenerateInitInstanceLocal((const vector<edm::Ref<vector<reco::RecoEcalCandidate>,reco::RecoEcalCandidate,edm::refhelper::FindUsingAdvance<vector<reco::RecoEcalCandidate>,reco::RecoEcalCandidate> > >*)0x0); R__UseDummy(_R__UNIQUE_(Init));

   // Dictionary for non-ClassDef classes
   static TClass *vectorlEedmcLcLReflEvectorlErecocLcLRecoEcalCandidategRcOrecocLcLRecoEcalCandidatecOedmcLcLrefhelpercLcLFindUsingAdvancelEvectorlErecocLcLRecoEcalCandidategRcOrecocLcLRecoEcalCandidategRsPgRsPgR_Dictionary() {
      TClass* theClass =::ROOT::GenerateInitInstanceLocal((const vector<edm::Ref<vector<reco::RecoEcalCandidate>,reco::RecoEcalCandidate,edm::refhelper::FindUsingAdvance<vector<reco::RecoEcalCandidate>,reco::RecoEcalCandidate> > >*)0x0)->GetClass();
      vectorlEedmcLcLReflEvectorlErecocLcLRecoEcalCandidategRcOrecocLcLRecoEcalCandidatecOedmcLcLrefhelpercLcLFindUsingAdvancelEvectorlErecocLcLRecoEcalCandidategRcOrecocLcLRecoEcalCandidategRsPgRsPgR_TClassManip(theClass);
   return theClass;
   }

   static void vectorlEedmcLcLReflEvectorlErecocLcLRecoEcalCandidategRcOrecocLcLRecoEcalCandidatecOedmcLcLrefhelpercLcLFindUsingAdvancelEvectorlErecocLcLRecoEcalCandidategRcOrecocLcLRecoEcalCandidategRsPgRsPgR_TClassManip(TClass* ){
   }

} // end of namespace ROOT

namespace ROOT {
   // Wrappers around operator new
   static void *new_vectorlEedmcLcLReflEvectorlErecocLcLRecoEcalCandidategRcOrecocLcLRecoEcalCandidatecOedmcLcLrefhelpercLcLFindUsingAdvancelEvectorlErecocLcLRecoEcalCandidategRcOrecocLcLRecoEcalCandidategRsPgRsPgR(void *p) {
      return  p ? ::new((::ROOT::Internal::TOperatorNewHelper*)p) vector<edm::Ref<vector<reco::RecoEcalCandidate>,reco::RecoEcalCandidate,edm::refhelper::FindUsingAdvance<vector<reco::RecoEcalCandidate>,reco::RecoEcalCandidate> > > : new vector<edm::Ref<vector<reco::RecoEcalCandidate>,reco::RecoEcalCandidate,edm::refhelper::FindUsingAdvance<vector<reco::RecoEcalCandidate>,reco::RecoEcalCandidate> > >;
   }
   static void *newArray_vectorlEedmcLcLReflEvectorlErecocLcLRecoEcalCandidategRcOrecocLcLRecoEcalCandidatecOedmcLcLrefhelpercLcLFindUsingAdvancelEvectorlErecocLcLRecoEcalCandidategRcOrecocLcLRecoEcalCandidategRsPgRsPgR(Long_t nElements, void *p) {
      return p ? ::new((::ROOT::Internal::TOperatorNewHelper*)p) vector<edm::Ref<vector<reco::RecoEcalCandidate>,reco::RecoEcalCandidate,edm::refhelper::FindUsingAdvance<vector<reco::RecoEcalCandidate>,reco::RecoEcalCandidate> > >[nElements] : new vector<edm::Ref<vector<reco::RecoEcalCandidate>,reco::RecoEcalCandidate,edm::refhelper::FindUsingAdvance<vector<reco::RecoEcalCandidate>,reco::RecoEcalCandidate> > >[nElements];
   }
   // Wrapper around operator delete
   static void delete_vectorlEedmcLcLReflEvectorlErecocLcLRecoEcalCandidategRcOrecocLcLRecoEcalCandidatecOedmcLcLrefhelpercLcLFindUsingAdvancelEvectorlErecocLcLRecoEcalCandidategRcOrecocLcLRecoEcalCandidategRsPgRsPgR(void *p) {
      delete ((vector<edm::Ref<vector<reco::RecoEcalCandidate>,reco::RecoEcalCandidate,edm::refhelper::FindUsingAdvance<vector<reco::RecoEcalCandidate>,reco::RecoEcalCandidate> > >*)p);
   }
   static void deleteArray_vectorlEedmcLcLReflEvectorlErecocLcLRecoEcalCandidategRcOrecocLcLRecoEcalCandidatecOedmcLcLrefhelpercLcLFindUsingAdvancelEvectorlErecocLcLRecoEcalCandidategRcOrecocLcLRecoEcalCandidategRsPgRsPgR(void *p) {
      delete [] ((vector<edm::Ref<vector<reco::RecoEcalCandidate>,reco::RecoEcalCandidate,edm::refhelper::FindUsingAdvance<vector<reco::RecoEcalCandidate>,reco::RecoEcalCandidate> > >*)p);
   }
   static void destruct_vectorlEedmcLcLReflEvectorlErecocLcLRecoEcalCandidategRcOrecocLcLRecoEcalCandidatecOedmcLcLrefhelpercLcLFindUsingAdvancelEvectorlErecocLcLRecoEcalCandidategRcOrecocLcLRecoEcalCandidategRsPgRsPgR(void *p) {
      typedef vector<edm::Ref<vector<reco::RecoEcalCandidate>,reco::RecoEcalCandidate,edm::refhelper::FindUsingAdvance<vector<reco::RecoEcalCandidate>,reco::RecoEcalCandidate> > > current_t;
      ((current_t*)p)->~current_t();
   }
} // end of namespace ROOT for class vector<edm::Ref<vector<reco::RecoEcalCandidate>,reco::RecoEcalCandidate,edm::refhelper::FindUsingAdvance<vector<reco::RecoEcalCandidate>,reco::RecoEcalCandidate> > >

namespace ROOT {
   static TClass *vectorlEedmcLcLReflEvectorlErecocLcLRecoChargedCandidategRcOrecocLcLRecoChargedCandidatecOedmcLcLrefhelpercLcLFindUsingAdvancelEvectorlErecocLcLRecoChargedCandidategRcOrecocLcLRecoChargedCandidategRsPgRsPgR_Dictionary();
   static void vectorlEedmcLcLReflEvectorlErecocLcLRecoChargedCandidategRcOrecocLcLRecoChargedCandidatecOedmcLcLrefhelpercLcLFindUsingAdvancelEvectorlErecocLcLRecoChargedCandidategRcOrecocLcLRecoChargedCandidategRsPgRsPgR_TClassManip(TClass*);
   static void *new_vectorlEedmcLcLReflEvectorlErecocLcLRecoChargedCandidategRcOrecocLcLRecoChargedCandidatecOedmcLcLrefhelpercLcLFindUsingAdvancelEvectorlErecocLcLRecoChargedCandidategRcOrecocLcLRecoChargedCandidategRsPgRsPgR(void *p = 0);
   static void *newArray_vectorlEedmcLcLReflEvectorlErecocLcLRecoChargedCandidategRcOrecocLcLRecoChargedCandidatecOedmcLcLrefhelpercLcLFindUsingAdvancelEvectorlErecocLcLRecoChargedCandidategRcOrecocLcLRecoChargedCandidategRsPgRsPgR(Long_t size, void *p);
   static void delete_vectorlEedmcLcLReflEvectorlErecocLcLRecoChargedCandidategRcOrecocLcLRecoChargedCandidatecOedmcLcLrefhelpercLcLFindUsingAdvancelEvectorlErecocLcLRecoChargedCandidategRcOrecocLcLRecoChargedCandidategRsPgRsPgR(void *p);
   static void deleteArray_vectorlEedmcLcLReflEvectorlErecocLcLRecoChargedCandidategRcOrecocLcLRecoChargedCandidatecOedmcLcLrefhelpercLcLFindUsingAdvancelEvectorlErecocLcLRecoChargedCandidategRcOrecocLcLRecoChargedCandidategRsPgRsPgR(void *p);
   static void destruct_vectorlEedmcLcLReflEvectorlErecocLcLRecoChargedCandidategRcOrecocLcLRecoChargedCandidatecOedmcLcLrefhelpercLcLFindUsingAdvancelEvectorlErecocLcLRecoChargedCandidategRcOrecocLcLRecoChargedCandidategRsPgRsPgR(void *p);

   // Function generating the singleton type initializer
   static TGenericClassInfo *GenerateInitInstanceLocal(const vector<edm::Ref<vector<reco::RecoChargedCandidate>,reco::RecoChargedCandidate,edm::refhelper::FindUsingAdvance<vector<reco::RecoChargedCandidate>,reco::RecoChargedCandidate> > >*)
   {
      vector<edm::Ref<vector<reco::RecoChargedCandidate>,reco::RecoChargedCandidate,edm::refhelper::FindUsingAdvance<vector<reco::RecoChargedCandidate>,reco::RecoChargedCandidate> > > *ptr = 0;
      static ::TVirtualIsAProxy* isa_proxy = new ::TIsAProxy(typeid(vector<edm::Ref<vector<reco::RecoChargedCandidate>,reco::RecoChargedCandidate,edm::refhelper::FindUsingAdvance<vector<reco::RecoChargedCandidate>,reco::RecoChargedCandidate> > >));
      static ::ROOT::TGenericClassInfo 
         instance("vector<edm::Ref<vector<reco::RecoChargedCandidate>,reco::RecoChargedCandidate,edm::refhelper::FindUsingAdvance<vector<reco::RecoChargedCandidate>,reco::RecoChargedCandidate> > >", -2, "vector", 214,
                  typeid(vector<edm::Ref<vector<reco::RecoChargedCandidate>,reco::RecoChargedCandidate,edm::refhelper::FindUsingAdvance<vector<reco::RecoChargedCandidate>,reco::RecoChargedCandidate> > >), ::ROOT::Internal::DefineBehavior(ptr, ptr),
                  &vectorlEedmcLcLReflEvectorlErecocLcLRecoChargedCandidategRcOrecocLcLRecoChargedCandidatecOedmcLcLrefhelpercLcLFindUsingAdvancelEvectorlErecocLcLRecoChargedCandidategRcOrecocLcLRecoChargedCandidategRsPgRsPgR_Dictionary, isa_proxy, 4,
                  sizeof(vector<edm::Ref<vector<reco::RecoChargedCandidate>,reco::RecoChargedCandidate,edm::refhelper::FindUsingAdvance<vector<reco::RecoChargedCandidate>,reco::RecoChargedCandidate> > >) );
      instance.SetNew(&new_vectorlEedmcLcLReflEvectorlErecocLcLRecoChargedCandidategRcOrecocLcLRecoChargedCandidatecOedmcLcLrefhelpercLcLFindUsingAdvancelEvectorlErecocLcLRecoChargedCandidategRcOrecocLcLRecoChargedCandidategRsPgRsPgR);
      instance.SetNewArray(&newArray_vectorlEedmcLcLReflEvectorlErecocLcLRecoChargedCandidategRcOrecocLcLRecoChargedCandidatecOedmcLcLrefhelpercLcLFindUsingAdvancelEvectorlErecocLcLRecoChargedCandidategRcOrecocLcLRecoChargedCandidategRsPgRsPgR);
      instance.SetDelete(&delete_vectorlEedmcLcLReflEvectorlErecocLcLRecoChargedCandidategRcOrecocLcLRecoChargedCandidatecOedmcLcLrefhelpercLcLFindUsingAdvancelEvectorlErecocLcLRecoChargedCandidategRcOrecocLcLRecoChargedCandidategRsPgRsPgR);
      instance.SetDeleteArray(&deleteArray_vectorlEedmcLcLReflEvectorlErecocLcLRecoChargedCandidategRcOrecocLcLRecoChargedCandidatecOedmcLcLrefhelpercLcLFindUsingAdvancelEvectorlErecocLcLRecoChargedCandidategRcOrecocLcLRecoChargedCandidategRsPgRsPgR);
      instance.SetDestructor(&destruct_vectorlEedmcLcLReflEvectorlErecocLcLRecoChargedCandidategRcOrecocLcLRecoChargedCandidatecOedmcLcLrefhelpercLcLFindUsingAdvancelEvectorlErecocLcLRecoChargedCandidategRcOrecocLcLRecoChargedCandidategRsPgRsPgR);
      instance.AdoptCollectionProxyInfo(TCollectionProxyInfo::Generate(TCollectionProxyInfo::Pushback< vector<edm::Ref<vector<reco::RecoChargedCandidate>,reco::RecoChargedCandidate,edm::refhelper::FindUsingAdvance<vector<reco::RecoChargedCandidate>,reco::RecoChargedCandidate> > > >()));
      return &instance;
   }
   // Static variable to force the class initialization
   static ::ROOT::TGenericClassInfo *_R__UNIQUE_(Init) = GenerateInitInstanceLocal((const vector<edm::Ref<vector<reco::RecoChargedCandidate>,reco::RecoChargedCandidate,edm::refhelper::FindUsingAdvance<vector<reco::RecoChargedCandidate>,reco::RecoChargedCandidate> > >*)0x0); R__UseDummy(_R__UNIQUE_(Init));

   // Dictionary for non-ClassDef classes
   static TClass *vectorlEedmcLcLReflEvectorlErecocLcLRecoChargedCandidategRcOrecocLcLRecoChargedCandidatecOedmcLcLrefhelpercLcLFindUsingAdvancelEvectorlErecocLcLRecoChargedCandidategRcOrecocLcLRecoChargedCandidategRsPgRsPgR_Dictionary() {
      TClass* theClass =::ROOT::GenerateInitInstanceLocal((const vector<edm::Ref<vector<reco::RecoChargedCandidate>,reco::RecoChargedCandidate,edm::refhelper::FindUsingAdvance<vector<reco::RecoChargedCandidate>,reco::RecoChargedCandidate> > >*)0x0)->GetClass();
      vectorlEedmcLcLReflEvectorlErecocLcLRecoChargedCandidategRcOrecocLcLRecoChargedCandidatecOedmcLcLrefhelpercLcLFindUsingAdvancelEvectorlErecocLcLRecoChargedCandidategRcOrecocLcLRecoChargedCandidategRsPgRsPgR_TClassManip(theClass);
   return theClass;
   }

   static void vectorlEedmcLcLReflEvectorlErecocLcLRecoChargedCandidategRcOrecocLcLRecoChargedCandidatecOedmcLcLrefhelpercLcLFindUsingAdvancelEvectorlErecocLcLRecoChargedCandidategRcOrecocLcLRecoChargedCandidategRsPgRsPgR_TClassManip(TClass* ){
   }

} // end of namespace ROOT

namespace ROOT {
   // Wrappers around operator new
   static void *new_vectorlEedmcLcLReflEvectorlErecocLcLRecoChargedCandidategRcOrecocLcLRecoChargedCandidatecOedmcLcLrefhelpercLcLFindUsingAdvancelEvectorlErecocLcLRecoChargedCandidategRcOrecocLcLRecoChargedCandidategRsPgRsPgR(void *p) {
      return  p ? ::new((::ROOT::Internal::TOperatorNewHelper*)p) vector<edm::Ref<vector<reco::RecoChargedCandidate>,reco::RecoChargedCandidate,edm::refhelper::FindUsingAdvance<vector<reco::RecoChargedCandidate>,reco::RecoChargedCandidate> > > : new vector<edm::Ref<vector<reco::RecoChargedCandidate>,reco::RecoChargedCandidate,edm::refhelper::FindUsingAdvance<vector<reco::RecoChargedCandidate>,reco::RecoChargedCandidate> > >;
   }
   static void *newArray_vectorlEedmcLcLReflEvectorlErecocLcLRecoChargedCandidategRcOrecocLcLRecoChargedCandidatecOedmcLcLrefhelpercLcLFindUsingAdvancelEvectorlErecocLcLRecoChargedCandidategRcOrecocLcLRecoChargedCandidategRsPgRsPgR(Long_t nElements, void *p) {
      return p ? ::new((::ROOT::Internal::TOperatorNewHelper*)p) vector<edm::Ref<vector<reco::RecoChargedCandidate>,reco::RecoChargedCandidate,edm::refhelper::FindUsingAdvance<vector<reco::RecoChargedCandidate>,reco::RecoChargedCandidate> > >[nElements] : new vector<edm::Ref<vector<reco::RecoChargedCandidate>,reco::RecoChargedCandidate,edm::refhelper::FindUsingAdvance<vector<reco::RecoChargedCandidate>,reco::RecoChargedCandidate> > >[nElements];
   }
   // Wrapper around operator delete
   static void delete_vectorlEedmcLcLReflEvectorlErecocLcLRecoChargedCandidategRcOrecocLcLRecoChargedCandidatecOedmcLcLrefhelpercLcLFindUsingAdvancelEvectorlErecocLcLRecoChargedCandidategRcOrecocLcLRecoChargedCandidategRsPgRsPgR(void *p) {
      delete ((vector<edm::Ref<vector<reco::RecoChargedCandidate>,reco::RecoChargedCandidate,edm::refhelper::FindUsingAdvance<vector<reco::RecoChargedCandidate>,reco::RecoChargedCandidate> > >*)p);
   }
   static void deleteArray_vectorlEedmcLcLReflEvectorlErecocLcLRecoChargedCandidategRcOrecocLcLRecoChargedCandidatecOedmcLcLrefhelpercLcLFindUsingAdvancelEvectorlErecocLcLRecoChargedCandidategRcOrecocLcLRecoChargedCandidategRsPgRsPgR(void *p) {
      delete [] ((vector<edm::Ref<vector<reco::RecoChargedCandidate>,reco::RecoChargedCandidate,edm::refhelper::FindUsingAdvance<vector<reco::RecoChargedCandidate>,reco::RecoChargedCandidate> > >*)p);
   }
   static void destruct_vectorlEedmcLcLReflEvectorlErecocLcLRecoChargedCandidategRcOrecocLcLRecoChargedCandidatecOedmcLcLrefhelpercLcLFindUsingAdvancelEvectorlErecocLcLRecoChargedCandidategRcOrecocLcLRecoChargedCandidategRsPgRsPgR(void *p) {
      typedef vector<edm::Ref<vector<reco::RecoChargedCandidate>,reco::RecoChargedCandidate,edm::refhelper::FindUsingAdvance<vector<reco::RecoChargedCandidate>,reco::RecoChargedCandidate> > > current_t;
      ((current_t*)p)->~current_t();
   }
} // end of namespace ROOT for class vector<edm::Ref<vector<reco::RecoChargedCandidate>,reco::RecoChargedCandidate,edm::refhelper::FindUsingAdvance<vector<reco::RecoChargedCandidate>,reco::RecoChargedCandidate> > >

namespace ROOT {
   static TClass *vectorlEedmcLcLReflEvectorlErecocLcLPFTaugRcOrecocLcLPFTaucOedmcLcLrefhelpercLcLFindUsingAdvancelEvectorlErecocLcLPFTaugRcOrecocLcLPFTaugRsPgRsPgR_Dictionary();
   static void vectorlEedmcLcLReflEvectorlErecocLcLPFTaugRcOrecocLcLPFTaucOedmcLcLrefhelpercLcLFindUsingAdvancelEvectorlErecocLcLPFTaugRcOrecocLcLPFTaugRsPgRsPgR_TClassManip(TClass*);
   static void *new_vectorlEedmcLcLReflEvectorlErecocLcLPFTaugRcOrecocLcLPFTaucOedmcLcLrefhelpercLcLFindUsingAdvancelEvectorlErecocLcLPFTaugRcOrecocLcLPFTaugRsPgRsPgR(void *p = 0);
   static void *newArray_vectorlEedmcLcLReflEvectorlErecocLcLPFTaugRcOrecocLcLPFTaucOedmcLcLrefhelpercLcLFindUsingAdvancelEvectorlErecocLcLPFTaugRcOrecocLcLPFTaugRsPgRsPgR(Long_t size, void *p);
   static void delete_vectorlEedmcLcLReflEvectorlErecocLcLPFTaugRcOrecocLcLPFTaucOedmcLcLrefhelpercLcLFindUsingAdvancelEvectorlErecocLcLPFTaugRcOrecocLcLPFTaugRsPgRsPgR(void *p);
   static void deleteArray_vectorlEedmcLcLReflEvectorlErecocLcLPFTaugRcOrecocLcLPFTaucOedmcLcLrefhelpercLcLFindUsingAdvancelEvectorlErecocLcLPFTaugRcOrecocLcLPFTaugRsPgRsPgR(void *p);
   static void destruct_vectorlEedmcLcLReflEvectorlErecocLcLPFTaugRcOrecocLcLPFTaucOedmcLcLrefhelpercLcLFindUsingAdvancelEvectorlErecocLcLPFTaugRcOrecocLcLPFTaugRsPgRsPgR(void *p);

   // Function generating the singleton type initializer
   static TGenericClassInfo *GenerateInitInstanceLocal(const vector<edm::Ref<vector<reco::PFTau>,reco::PFTau,edm::refhelper::FindUsingAdvance<vector<reco::PFTau>,reco::PFTau> > >*)
   {
      vector<edm::Ref<vector<reco::PFTau>,reco::PFTau,edm::refhelper::FindUsingAdvance<vector<reco::PFTau>,reco::PFTau> > > *ptr = 0;
      static ::TVirtualIsAProxy* isa_proxy = new ::TIsAProxy(typeid(vector<edm::Ref<vector<reco::PFTau>,reco::PFTau,edm::refhelper::FindUsingAdvance<vector<reco::PFTau>,reco::PFTau> > >));
      static ::ROOT::TGenericClassInfo 
         instance("vector<edm::Ref<vector<reco::PFTau>,reco::PFTau,edm::refhelper::FindUsingAdvance<vector<reco::PFTau>,reco::PFTau> > >", -2, "vector", 214,
                  typeid(vector<edm::Ref<vector<reco::PFTau>,reco::PFTau,edm::refhelper::FindUsingAdvance<vector<reco::PFTau>,reco::PFTau> > >), ::ROOT::Internal::DefineBehavior(ptr, ptr),
                  &vectorlEedmcLcLReflEvectorlErecocLcLPFTaugRcOrecocLcLPFTaucOedmcLcLrefhelpercLcLFindUsingAdvancelEvectorlErecocLcLPFTaugRcOrecocLcLPFTaugRsPgRsPgR_Dictionary, isa_proxy, 4,
                  sizeof(vector<edm::Ref<vector<reco::PFTau>,reco::PFTau,edm::refhelper::FindUsingAdvance<vector<reco::PFTau>,reco::PFTau> > >) );
      instance.SetNew(&new_vectorlEedmcLcLReflEvectorlErecocLcLPFTaugRcOrecocLcLPFTaucOedmcLcLrefhelpercLcLFindUsingAdvancelEvectorlErecocLcLPFTaugRcOrecocLcLPFTaugRsPgRsPgR);
      instance.SetNewArray(&newArray_vectorlEedmcLcLReflEvectorlErecocLcLPFTaugRcOrecocLcLPFTaucOedmcLcLrefhelpercLcLFindUsingAdvancelEvectorlErecocLcLPFTaugRcOrecocLcLPFTaugRsPgRsPgR);
      instance.SetDelete(&delete_vectorlEedmcLcLReflEvectorlErecocLcLPFTaugRcOrecocLcLPFTaucOedmcLcLrefhelpercLcLFindUsingAdvancelEvectorlErecocLcLPFTaugRcOrecocLcLPFTaugRsPgRsPgR);
      instance.SetDeleteArray(&deleteArray_vectorlEedmcLcLReflEvectorlErecocLcLPFTaugRcOrecocLcLPFTaucOedmcLcLrefhelpercLcLFindUsingAdvancelEvectorlErecocLcLPFTaugRcOrecocLcLPFTaugRsPgRsPgR);
      instance.SetDestructor(&destruct_vectorlEedmcLcLReflEvectorlErecocLcLPFTaugRcOrecocLcLPFTaucOedmcLcLrefhelpercLcLFindUsingAdvancelEvectorlErecocLcLPFTaugRcOrecocLcLPFTaugRsPgRsPgR);
      instance.AdoptCollectionProxyInfo(TCollectionProxyInfo::Generate(TCollectionProxyInfo::Pushback< vector<edm::Ref<vector<reco::PFTau>,reco::PFTau,edm::refhelper::FindUsingAdvance<vector<reco::PFTau>,reco::PFTau> > > >()));
      return &instance;
   }
   // Static variable to force the class initialization
   static ::ROOT::TGenericClassInfo *_R__UNIQUE_(Init) = GenerateInitInstanceLocal((const vector<edm::Ref<vector<reco::PFTau>,reco::PFTau,edm::refhelper::FindUsingAdvance<vector<reco::PFTau>,reco::PFTau> > >*)0x0); R__UseDummy(_R__UNIQUE_(Init));

   // Dictionary for non-ClassDef classes
   static TClass *vectorlEedmcLcLReflEvectorlErecocLcLPFTaugRcOrecocLcLPFTaucOedmcLcLrefhelpercLcLFindUsingAdvancelEvectorlErecocLcLPFTaugRcOrecocLcLPFTaugRsPgRsPgR_Dictionary() {
      TClass* theClass =::ROOT::GenerateInitInstanceLocal((const vector<edm::Ref<vector<reco::PFTau>,reco::PFTau,edm::refhelper::FindUsingAdvance<vector<reco::PFTau>,reco::PFTau> > >*)0x0)->GetClass();
      vectorlEedmcLcLReflEvectorlErecocLcLPFTaugRcOrecocLcLPFTaucOedmcLcLrefhelpercLcLFindUsingAdvancelEvectorlErecocLcLPFTaugRcOrecocLcLPFTaugRsPgRsPgR_TClassManip(theClass);
   return theClass;
   }

   static void vectorlEedmcLcLReflEvectorlErecocLcLPFTaugRcOrecocLcLPFTaucOedmcLcLrefhelpercLcLFindUsingAdvancelEvectorlErecocLcLPFTaugRcOrecocLcLPFTaugRsPgRsPgR_TClassManip(TClass* ){
   }

} // end of namespace ROOT

namespace ROOT {
   // Wrappers around operator new
   static void *new_vectorlEedmcLcLReflEvectorlErecocLcLPFTaugRcOrecocLcLPFTaucOedmcLcLrefhelpercLcLFindUsingAdvancelEvectorlErecocLcLPFTaugRcOrecocLcLPFTaugRsPgRsPgR(void *p) {
      return  p ? ::new((::ROOT::Internal::TOperatorNewHelper*)p) vector<edm::Ref<vector<reco::PFTau>,reco::PFTau,edm::refhelper::FindUsingAdvance<vector<reco::PFTau>,reco::PFTau> > > : new vector<edm::Ref<vector<reco::PFTau>,reco::PFTau,edm::refhelper::FindUsingAdvance<vector<reco::PFTau>,reco::PFTau> > >;
   }
   static void *newArray_vectorlEedmcLcLReflEvectorlErecocLcLPFTaugRcOrecocLcLPFTaucOedmcLcLrefhelpercLcLFindUsingAdvancelEvectorlErecocLcLPFTaugRcOrecocLcLPFTaugRsPgRsPgR(Long_t nElements, void *p) {
      return p ? ::new((::ROOT::Internal::TOperatorNewHelper*)p) vector<edm::Ref<vector<reco::PFTau>,reco::PFTau,edm::refhelper::FindUsingAdvance<vector<reco::PFTau>,reco::PFTau> > >[nElements] : new vector<edm::Ref<vector<reco::PFTau>,reco::PFTau,edm::refhelper::FindUsingAdvance<vector<reco::PFTau>,reco::PFTau> > >[nElements];
   }
   // Wrapper around operator delete
   static void delete_vectorlEedmcLcLReflEvectorlErecocLcLPFTaugRcOrecocLcLPFTaucOedmcLcLrefhelpercLcLFindUsingAdvancelEvectorlErecocLcLPFTaugRcOrecocLcLPFTaugRsPgRsPgR(void *p) {
      delete ((vector<edm::Ref<vector<reco::PFTau>,reco::PFTau,edm::refhelper::FindUsingAdvance<vector<reco::PFTau>,reco::PFTau> > >*)p);
   }
   static void deleteArray_vectorlEedmcLcLReflEvectorlErecocLcLPFTaugRcOrecocLcLPFTaucOedmcLcLrefhelpercLcLFindUsingAdvancelEvectorlErecocLcLPFTaugRcOrecocLcLPFTaugRsPgRsPgR(void *p) {
      delete [] ((vector<edm::Ref<vector<reco::PFTau>,reco::PFTau,edm::refhelper::FindUsingAdvance<vector<reco::PFTau>,reco::PFTau> > >*)p);
   }
   static void destruct_vectorlEedmcLcLReflEvectorlErecocLcLPFTaugRcOrecocLcLPFTaucOedmcLcLrefhelpercLcLFindUsingAdvancelEvectorlErecocLcLPFTaugRcOrecocLcLPFTaugRsPgRsPgR(void *p) {
      typedef vector<edm::Ref<vector<reco::PFTau>,reco::PFTau,edm::refhelper::FindUsingAdvance<vector<reco::PFTau>,reco::PFTau> > > current_t;
      ((current_t*)p)->~current_t();
   }
} // end of namespace ROOT for class vector<edm::Ref<vector<reco::PFTau>,reco::PFTau,edm::refhelper::FindUsingAdvance<vector<reco::PFTau>,reco::PFTau> > >

namespace ROOT {
   static TClass *vectorlEedmcLcLReflEvectorlErecocLcLElectrongRcOrecocLcLElectroncOedmcLcLrefhelpercLcLFindUsingAdvancelEvectorlErecocLcLElectrongRcOrecocLcLElectrongRsPgRsPgR_Dictionary();
   static void vectorlEedmcLcLReflEvectorlErecocLcLElectrongRcOrecocLcLElectroncOedmcLcLrefhelpercLcLFindUsingAdvancelEvectorlErecocLcLElectrongRcOrecocLcLElectrongRsPgRsPgR_TClassManip(TClass*);
   static void *new_vectorlEedmcLcLReflEvectorlErecocLcLElectrongRcOrecocLcLElectroncOedmcLcLrefhelpercLcLFindUsingAdvancelEvectorlErecocLcLElectrongRcOrecocLcLElectrongRsPgRsPgR(void *p = 0);
   static void *newArray_vectorlEedmcLcLReflEvectorlErecocLcLElectrongRcOrecocLcLElectroncOedmcLcLrefhelpercLcLFindUsingAdvancelEvectorlErecocLcLElectrongRcOrecocLcLElectrongRsPgRsPgR(Long_t size, void *p);
   static void delete_vectorlEedmcLcLReflEvectorlErecocLcLElectrongRcOrecocLcLElectroncOedmcLcLrefhelpercLcLFindUsingAdvancelEvectorlErecocLcLElectrongRcOrecocLcLElectrongRsPgRsPgR(void *p);
   static void deleteArray_vectorlEedmcLcLReflEvectorlErecocLcLElectrongRcOrecocLcLElectroncOedmcLcLrefhelpercLcLFindUsingAdvancelEvectorlErecocLcLElectrongRcOrecocLcLElectrongRsPgRsPgR(void *p);
   static void destruct_vectorlEedmcLcLReflEvectorlErecocLcLElectrongRcOrecocLcLElectroncOedmcLcLrefhelpercLcLFindUsingAdvancelEvectorlErecocLcLElectrongRcOrecocLcLElectrongRsPgRsPgR(void *p);

   // Function generating the singleton type initializer
   static TGenericClassInfo *GenerateInitInstanceLocal(const vector<edm::Ref<vector<reco::Electron>,reco::Electron,edm::refhelper::FindUsingAdvance<vector<reco::Electron>,reco::Electron> > >*)
   {
      vector<edm::Ref<vector<reco::Electron>,reco::Electron,edm::refhelper::FindUsingAdvance<vector<reco::Electron>,reco::Electron> > > *ptr = 0;
      static ::TVirtualIsAProxy* isa_proxy = new ::TIsAProxy(typeid(vector<edm::Ref<vector<reco::Electron>,reco::Electron,edm::refhelper::FindUsingAdvance<vector<reco::Electron>,reco::Electron> > >));
      static ::ROOT::TGenericClassInfo 
         instance("vector<edm::Ref<vector<reco::Electron>,reco::Electron,edm::refhelper::FindUsingAdvance<vector<reco::Electron>,reco::Electron> > >", -2, "vector", 214,
                  typeid(vector<edm::Ref<vector<reco::Electron>,reco::Electron,edm::refhelper::FindUsingAdvance<vector<reco::Electron>,reco::Electron> > >), ::ROOT::Internal::DefineBehavior(ptr, ptr),
                  &vectorlEedmcLcLReflEvectorlErecocLcLElectrongRcOrecocLcLElectroncOedmcLcLrefhelpercLcLFindUsingAdvancelEvectorlErecocLcLElectrongRcOrecocLcLElectrongRsPgRsPgR_Dictionary, isa_proxy, 4,
                  sizeof(vector<edm::Ref<vector<reco::Electron>,reco::Electron,edm::refhelper::FindUsingAdvance<vector<reco::Electron>,reco::Electron> > >) );
      instance.SetNew(&new_vectorlEedmcLcLReflEvectorlErecocLcLElectrongRcOrecocLcLElectroncOedmcLcLrefhelpercLcLFindUsingAdvancelEvectorlErecocLcLElectrongRcOrecocLcLElectrongRsPgRsPgR);
      instance.SetNewArray(&newArray_vectorlEedmcLcLReflEvectorlErecocLcLElectrongRcOrecocLcLElectroncOedmcLcLrefhelpercLcLFindUsingAdvancelEvectorlErecocLcLElectrongRcOrecocLcLElectrongRsPgRsPgR);
      instance.SetDelete(&delete_vectorlEedmcLcLReflEvectorlErecocLcLElectrongRcOrecocLcLElectroncOedmcLcLrefhelpercLcLFindUsingAdvancelEvectorlErecocLcLElectrongRcOrecocLcLElectrongRsPgRsPgR);
      instance.SetDeleteArray(&deleteArray_vectorlEedmcLcLReflEvectorlErecocLcLElectrongRcOrecocLcLElectroncOedmcLcLrefhelpercLcLFindUsingAdvancelEvectorlErecocLcLElectrongRcOrecocLcLElectrongRsPgRsPgR);
      instance.SetDestructor(&destruct_vectorlEedmcLcLReflEvectorlErecocLcLElectrongRcOrecocLcLElectroncOedmcLcLrefhelpercLcLFindUsingAdvancelEvectorlErecocLcLElectrongRcOrecocLcLElectrongRsPgRsPgR);
      instance.AdoptCollectionProxyInfo(TCollectionProxyInfo::Generate(TCollectionProxyInfo::Pushback< vector<edm::Ref<vector<reco::Electron>,reco::Electron,edm::refhelper::FindUsingAdvance<vector<reco::Electron>,reco::Electron> > > >()));
      return &instance;
   }
   // Static variable to force the class initialization
   static ::ROOT::TGenericClassInfo *_R__UNIQUE_(Init) = GenerateInitInstanceLocal((const vector<edm::Ref<vector<reco::Electron>,reco::Electron,edm::refhelper::FindUsingAdvance<vector<reco::Electron>,reco::Electron> > >*)0x0); R__UseDummy(_R__UNIQUE_(Init));

   // Dictionary for non-ClassDef classes
   static TClass *vectorlEedmcLcLReflEvectorlErecocLcLElectrongRcOrecocLcLElectroncOedmcLcLrefhelpercLcLFindUsingAdvancelEvectorlErecocLcLElectrongRcOrecocLcLElectrongRsPgRsPgR_Dictionary() {
      TClass* theClass =::ROOT::GenerateInitInstanceLocal((const vector<edm::Ref<vector<reco::Electron>,reco::Electron,edm::refhelper::FindUsingAdvance<vector<reco::Electron>,reco::Electron> > >*)0x0)->GetClass();
      vectorlEedmcLcLReflEvectorlErecocLcLElectrongRcOrecocLcLElectroncOedmcLcLrefhelpercLcLFindUsingAdvancelEvectorlErecocLcLElectrongRcOrecocLcLElectrongRsPgRsPgR_TClassManip(theClass);
   return theClass;
   }

   static void vectorlEedmcLcLReflEvectorlErecocLcLElectrongRcOrecocLcLElectroncOedmcLcLrefhelpercLcLFindUsingAdvancelEvectorlErecocLcLElectrongRcOrecocLcLElectrongRsPgRsPgR_TClassManip(TClass* ){
   }

} // end of namespace ROOT

namespace ROOT {
   // Wrappers around operator new
   static void *new_vectorlEedmcLcLReflEvectorlErecocLcLElectrongRcOrecocLcLElectroncOedmcLcLrefhelpercLcLFindUsingAdvancelEvectorlErecocLcLElectrongRcOrecocLcLElectrongRsPgRsPgR(void *p) {
      return  p ? ::new((::ROOT::Internal::TOperatorNewHelper*)p) vector<edm::Ref<vector<reco::Electron>,reco::Electron,edm::refhelper::FindUsingAdvance<vector<reco::Electron>,reco::Electron> > > : new vector<edm::Ref<vector<reco::Electron>,reco::Electron,edm::refhelper::FindUsingAdvance<vector<reco::Electron>,reco::Electron> > >;
   }
   static void *newArray_vectorlEedmcLcLReflEvectorlErecocLcLElectrongRcOrecocLcLElectroncOedmcLcLrefhelpercLcLFindUsingAdvancelEvectorlErecocLcLElectrongRcOrecocLcLElectrongRsPgRsPgR(Long_t nElements, void *p) {
      return p ? ::new((::ROOT::Internal::TOperatorNewHelper*)p) vector<edm::Ref<vector<reco::Electron>,reco::Electron,edm::refhelper::FindUsingAdvance<vector<reco::Electron>,reco::Electron> > >[nElements] : new vector<edm::Ref<vector<reco::Electron>,reco::Electron,edm::refhelper::FindUsingAdvance<vector<reco::Electron>,reco::Electron> > >[nElements];
   }
   // Wrapper around operator delete
   static void delete_vectorlEedmcLcLReflEvectorlErecocLcLElectrongRcOrecocLcLElectroncOedmcLcLrefhelpercLcLFindUsingAdvancelEvectorlErecocLcLElectrongRcOrecocLcLElectrongRsPgRsPgR(void *p) {
      delete ((vector<edm::Ref<vector<reco::Electron>,reco::Electron,edm::refhelper::FindUsingAdvance<vector<reco::Electron>,reco::Electron> > >*)p);
   }
   static void deleteArray_vectorlEedmcLcLReflEvectorlErecocLcLElectrongRcOrecocLcLElectroncOedmcLcLrefhelpercLcLFindUsingAdvancelEvectorlErecocLcLElectrongRcOrecocLcLElectrongRsPgRsPgR(void *p) {
      delete [] ((vector<edm::Ref<vector<reco::Electron>,reco::Electron,edm::refhelper::FindUsingAdvance<vector<reco::Electron>,reco::Electron> > >*)p);
   }
   static void destruct_vectorlEedmcLcLReflEvectorlErecocLcLElectrongRcOrecocLcLElectroncOedmcLcLrefhelpercLcLFindUsingAdvancelEvectorlErecocLcLElectrongRcOrecocLcLElectrongRsPgRsPgR(void *p) {
      typedef vector<edm::Ref<vector<reco::Electron>,reco::Electron,edm::refhelper::FindUsingAdvance<vector<reco::Electron>,reco::Electron> > > current_t;
      ((current_t*)p)->~current_t();
   }
} // end of namespace ROOT for class vector<edm::Ref<vector<reco::Electron>,reco::Electron,edm::refhelper::FindUsingAdvance<vector<reco::Electron>,reco::Electron> > >

namespace ROOT {
   static TClass *vectorlEedmcLcLModuleTimegR_Dictionary();
   static void vectorlEedmcLcLModuleTimegR_TClassManip(TClass*);
   static void *new_vectorlEedmcLcLModuleTimegR(void *p = 0);
   static void *newArray_vectorlEedmcLcLModuleTimegR(Long_t size, void *p);
   static void delete_vectorlEedmcLcLModuleTimegR(void *p);
   static void deleteArray_vectorlEedmcLcLModuleTimegR(void *p);
   static void destruct_vectorlEedmcLcLModuleTimegR(void *p);

   // Function generating the singleton type initializer
   static TGenericClassInfo *GenerateInitInstanceLocal(const vector<edm::ModuleTime>*)
   {
      vector<edm::ModuleTime> *ptr = 0;
      static ::TVirtualIsAProxy* isa_proxy = new ::TIsAProxy(typeid(vector<edm::ModuleTime>));
      static ::ROOT::TGenericClassInfo 
         instance("vector<edm::ModuleTime>", -2, "vector", 214,
                  typeid(vector<edm::ModuleTime>), ::ROOT::Internal::DefineBehavior(ptr, ptr),
                  &vectorlEedmcLcLModuleTimegR_Dictionary, isa_proxy, 4,
                  sizeof(vector<edm::ModuleTime>) );
      instance.SetNew(&new_vectorlEedmcLcLModuleTimegR);
      instance.SetNewArray(&newArray_vectorlEedmcLcLModuleTimegR);
      instance.SetDelete(&delete_vectorlEedmcLcLModuleTimegR);
      instance.SetDeleteArray(&deleteArray_vectorlEedmcLcLModuleTimegR);
      instance.SetDestructor(&destruct_vectorlEedmcLcLModuleTimegR);
      instance.AdoptCollectionProxyInfo(TCollectionProxyInfo::Generate(TCollectionProxyInfo::Pushback< vector<edm::ModuleTime> >()));
      return &instance;
   }
   // Static variable to force the class initialization
   static ::ROOT::TGenericClassInfo *_R__UNIQUE_(Init) = GenerateInitInstanceLocal((const vector<edm::ModuleTime>*)0x0); R__UseDummy(_R__UNIQUE_(Init));

   // Dictionary for non-ClassDef classes
   static TClass *vectorlEedmcLcLModuleTimegR_Dictionary() {
      TClass* theClass =::ROOT::GenerateInitInstanceLocal((const vector<edm::ModuleTime>*)0x0)->GetClass();
      vectorlEedmcLcLModuleTimegR_TClassManip(theClass);
   return theClass;
   }

   static void vectorlEedmcLcLModuleTimegR_TClassManip(TClass* ){
   }

} // end of namespace ROOT

namespace ROOT {
   // Wrappers around operator new
   static void *new_vectorlEedmcLcLModuleTimegR(void *p) {
      return  p ? ::new((::ROOT::Internal::TOperatorNewHelper*)p) vector<edm::ModuleTime> : new vector<edm::ModuleTime>;
   }
   static void *newArray_vectorlEedmcLcLModuleTimegR(Long_t nElements, void *p) {
      return p ? ::new((::ROOT::Internal::TOperatorNewHelper*)p) vector<edm::ModuleTime>[nElements] : new vector<edm::ModuleTime>[nElements];
   }
   // Wrapper around operator delete
   static void delete_vectorlEedmcLcLModuleTimegR(void *p) {
      delete ((vector<edm::ModuleTime>*)p);
   }
   static void deleteArray_vectorlEedmcLcLModuleTimegR(void *p) {
      delete [] ((vector<edm::ModuleTime>*)p);
   }
   static void destruct_vectorlEedmcLcLModuleTimegR(void *p) {
      typedef vector<edm::ModuleTime> current_t;
      ((current_t*)p)->~current_t();
   }
} // end of namespace ROOT for class vector<edm::ModuleTime>

namespace ROOT {
   static TClass *vectorlEHLTPerformanceInfocLcLPathgR_Dictionary();
   static void vectorlEHLTPerformanceInfocLcLPathgR_TClassManip(TClass*);
   static void *new_vectorlEHLTPerformanceInfocLcLPathgR(void *p = 0);
   static void *newArray_vectorlEHLTPerformanceInfocLcLPathgR(Long_t size, void *p);
   static void delete_vectorlEHLTPerformanceInfocLcLPathgR(void *p);
   static void deleteArray_vectorlEHLTPerformanceInfocLcLPathgR(void *p);
   static void destruct_vectorlEHLTPerformanceInfocLcLPathgR(void *p);

   // Function generating the singleton type initializer
   static TGenericClassInfo *GenerateInitInstanceLocal(const vector<HLTPerformanceInfo::Path>*)
   {
      vector<HLTPerformanceInfo::Path> *ptr = 0;
      static ::TVirtualIsAProxy* isa_proxy = new ::TIsAProxy(typeid(vector<HLTPerformanceInfo::Path>));
      static ::ROOT::TGenericClassInfo 
         instance("vector<HLTPerformanceInfo::Path>", -2, "vector", 214,
                  typeid(vector<HLTPerformanceInfo::Path>), ::ROOT::Internal::DefineBehavior(ptr, ptr),
                  &vectorlEHLTPerformanceInfocLcLPathgR_Dictionary, isa_proxy, 4,
                  sizeof(vector<HLTPerformanceInfo::Path>) );
      instance.SetNew(&new_vectorlEHLTPerformanceInfocLcLPathgR);
      instance.SetNewArray(&newArray_vectorlEHLTPerformanceInfocLcLPathgR);
      instance.SetDelete(&delete_vectorlEHLTPerformanceInfocLcLPathgR);
      instance.SetDeleteArray(&deleteArray_vectorlEHLTPerformanceInfocLcLPathgR);
      instance.SetDestructor(&destruct_vectorlEHLTPerformanceInfocLcLPathgR);
      instance.AdoptCollectionProxyInfo(TCollectionProxyInfo::Generate(TCollectionProxyInfo::Pushback< vector<HLTPerformanceInfo::Path> >()));
      return &instance;
   }
   // Static variable to force the class initialization
   static ::ROOT::TGenericClassInfo *_R__UNIQUE_(Init) = GenerateInitInstanceLocal((const vector<HLTPerformanceInfo::Path>*)0x0); R__UseDummy(_R__UNIQUE_(Init));

   // Dictionary for non-ClassDef classes
   static TClass *vectorlEHLTPerformanceInfocLcLPathgR_Dictionary() {
      TClass* theClass =::ROOT::GenerateInitInstanceLocal((const vector<HLTPerformanceInfo::Path>*)0x0)->GetClass();
      vectorlEHLTPerformanceInfocLcLPathgR_TClassManip(theClass);
   return theClass;
   }

   static void vectorlEHLTPerformanceInfocLcLPathgR_TClassManip(TClass* ){
   }

} // end of namespace ROOT

namespace ROOT {
   // Wrappers around operator new
   static void *new_vectorlEHLTPerformanceInfocLcLPathgR(void *p) {
      return  p ? ::new((::ROOT::Internal::TOperatorNewHelper*)p) vector<HLTPerformanceInfo::Path> : new vector<HLTPerformanceInfo::Path>;
   }
   static void *newArray_vectorlEHLTPerformanceInfocLcLPathgR(Long_t nElements, void *p) {
      return p ? ::new((::ROOT::Internal::TOperatorNewHelper*)p) vector<HLTPerformanceInfo::Path>[nElements] : new vector<HLTPerformanceInfo::Path>[nElements];
   }
   // Wrapper around operator delete
   static void delete_vectorlEHLTPerformanceInfocLcLPathgR(void *p) {
      delete ((vector<HLTPerformanceInfo::Path>*)p);
   }
   static void deleteArray_vectorlEHLTPerformanceInfocLcLPathgR(void *p) {
      delete [] ((vector<HLTPerformanceInfo::Path>*)p);
   }
   static void destruct_vectorlEHLTPerformanceInfocLcLPathgR(void *p) {
      typedef vector<HLTPerformanceInfo::Path> current_t;
      ((current_t*)p)->~current_t();
   }
} // end of namespace ROOT for class vector<HLTPerformanceInfo::Path>

namespace ROOT {
   static TClass *vectorlEHLTPerformanceInfocLcLModulegR_Dictionary();
   static void vectorlEHLTPerformanceInfocLcLModulegR_TClassManip(TClass*);
   static void *new_vectorlEHLTPerformanceInfocLcLModulegR(void *p = 0);
   static void *newArray_vectorlEHLTPerformanceInfocLcLModulegR(Long_t size, void *p);
   static void delete_vectorlEHLTPerformanceInfocLcLModulegR(void *p);
   static void deleteArray_vectorlEHLTPerformanceInfocLcLModulegR(void *p);
   static void destruct_vectorlEHLTPerformanceInfocLcLModulegR(void *p);

   // Function generating the singleton type initializer
   static TGenericClassInfo *GenerateInitInstanceLocal(const vector<HLTPerformanceInfo::Module>*)
   {
      vector<HLTPerformanceInfo::Module> *ptr = 0;
      static ::TVirtualIsAProxy* isa_proxy = new ::TIsAProxy(typeid(vector<HLTPerformanceInfo::Module>));
      static ::ROOT::TGenericClassInfo 
         instance("vector<HLTPerformanceInfo::Module>", -2, "vector", 214,
                  typeid(vector<HLTPerformanceInfo::Module>), ::ROOT::Internal::DefineBehavior(ptr, ptr),
                  &vectorlEHLTPerformanceInfocLcLModulegR_Dictionary, isa_proxy, 4,
                  sizeof(vector<HLTPerformanceInfo::Module>) );
      instance.SetNew(&new_vectorlEHLTPerformanceInfocLcLModulegR);
      instance.SetNewArray(&newArray_vectorlEHLTPerformanceInfocLcLModulegR);
      instance.SetDelete(&delete_vectorlEHLTPerformanceInfocLcLModulegR);
      instance.SetDeleteArray(&deleteArray_vectorlEHLTPerformanceInfocLcLModulegR);
      instance.SetDestructor(&destruct_vectorlEHLTPerformanceInfocLcLModulegR);
      instance.AdoptCollectionProxyInfo(TCollectionProxyInfo::Generate(TCollectionProxyInfo::Pushback< vector<HLTPerformanceInfo::Module> >()));
      return &instance;
   }
   // Static variable to force the class initialization
   static ::ROOT::TGenericClassInfo *_R__UNIQUE_(Init) = GenerateInitInstanceLocal((const vector<HLTPerformanceInfo::Module>*)0x0); R__UseDummy(_R__UNIQUE_(Init));

   // Dictionary for non-ClassDef classes
   static TClass *vectorlEHLTPerformanceInfocLcLModulegR_Dictionary() {
      TClass* theClass =::ROOT::GenerateInitInstanceLocal((const vector<HLTPerformanceInfo::Module>*)0x0)->GetClass();
      vectorlEHLTPerformanceInfocLcLModulegR_TClassManip(theClass);
   return theClass;
   }

   static void vectorlEHLTPerformanceInfocLcLModulegR_TClassManip(TClass* ){
   }

} // end of namespace ROOT

namespace ROOT {
   // Wrappers around operator new
   static void *new_vectorlEHLTPerformanceInfocLcLModulegR(void *p) {
      return  p ? ::new((::ROOT::Internal::TOperatorNewHelper*)p) vector<HLTPerformanceInfo::Module> : new vector<HLTPerformanceInfo::Module>;
   }
   static void *newArray_vectorlEHLTPerformanceInfocLcLModulegR(Long_t nElements, void *p) {
      return p ? ::new((::ROOT::Internal::TOperatorNewHelper*)p) vector<HLTPerformanceInfo::Module>[nElements] : new vector<HLTPerformanceInfo::Module>[nElements];
   }
   // Wrapper around operator delete
   static void delete_vectorlEHLTPerformanceInfocLcLModulegR(void *p) {
      delete ((vector<HLTPerformanceInfo::Module>*)p);
   }
   static void deleteArray_vectorlEHLTPerformanceInfocLcLModulegR(void *p) {
      delete [] ((vector<HLTPerformanceInfo::Module>*)p);
   }
   static void destruct_vectorlEHLTPerformanceInfocLcLModulegR(void *p) {
      typedef vector<HLTPerformanceInfo::Module> current_t;
      ((current_t*)p)->~current_t();
   }
} // end of namespace ROOT for class vector<HLTPerformanceInfo::Module>

namespace ROOT {
   static TClass *maplEstringcOvectorlEunsignedsPintgRsPgR_Dictionary();
   static void maplEstringcOvectorlEunsignedsPintgRsPgR_TClassManip(TClass*);
   static void *new_maplEstringcOvectorlEunsignedsPintgRsPgR(void *p = 0);
   static void *newArray_maplEstringcOvectorlEunsignedsPintgRsPgR(Long_t size, void *p);
   static void delete_maplEstringcOvectorlEunsignedsPintgRsPgR(void *p);
   static void deleteArray_maplEstringcOvectorlEunsignedsPintgRsPgR(void *p);
   static void destruct_maplEstringcOvectorlEunsignedsPintgRsPgR(void *p);

   // Function generating the singleton type initializer
   static TGenericClassInfo *GenerateInitInstanceLocal(const map<string,vector<unsigned int> >*)
   {
      map<string,vector<unsigned int> > *ptr = 0;
      static ::TVirtualIsAProxy* isa_proxy = new ::TIsAProxy(typeid(map<string,vector<unsigned int> >));
      static ::ROOT::TGenericClassInfo 
         instance("map<string,vector<unsigned int> >", -2, "map", 96,
                  typeid(map<string,vector<unsigned int> >), ::ROOT::Internal::DefineBehavior(ptr, ptr),
                  &maplEstringcOvectorlEunsignedsPintgRsPgR_Dictionary, isa_proxy, 4,
                  sizeof(map<string,vector<unsigned int> >) );
      instance.SetNew(&new_maplEstringcOvectorlEunsignedsPintgRsPgR);
      instance.SetNewArray(&newArray_maplEstringcOvectorlEunsignedsPintgRsPgR);
      instance.SetDelete(&delete_maplEstringcOvectorlEunsignedsPintgRsPgR);
      instance.SetDeleteArray(&deleteArray_maplEstringcOvectorlEunsignedsPintgRsPgR);
      instance.SetDestructor(&destruct_maplEstringcOvectorlEunsignedsPintgRsPgR);
      instance.AdoptCollectionProxyInfo(TCollectionProxyInfo::Generate(TCollectionProxyInfo::MapInsert< map<string,vector<unsigned int> > >()));
      return &instance;
   }
   // Static variable to force the class initialization
   static ::ROOT::TGenericClassInfo *_R__UNIQUE_(Init) = GenerateInitInstanceLocal((const map<string,vector<unsigned int> >*)0x0); R__UseDummy(_R__UNIQUE_(Init));

   // Dictionary for non-ClassDef classes
   static TClass *maplEstringcOvectorlEunsignedsPintgRsPgR_Dictionary() {
      TClass* theClass =::ROOT::GenerateInitInstanceLocal((const map<string,vector<unsigned int> >*)0x0)->GetClass();
      maplEstringcOvectorlEunsignedsPintgRsPgR_TClassManip(theClass);
   return theClass;
   }

   static void maplEstringcOvectorlEunsignedsPintgRsPgR_TClassManip(TClass* ){
   }

} // end of namespace ROOT

namespace ROOT {
   // Wrappers around operator new
   static void *new_maplEstringcOvectorlEunsignedsPintgRsPgR(void *p) {
      return  p ? ::new((::ROOT::Internal::TOperatorNewHelper*)p) map<string,vector<unsigned int> > : new map<string,vector<unsigned int> >;
   }
   static void *newArray_maplEstringcOvectorlEunsignedsPintgRsPgR(Long_t nElements, void *p) {
      return p ? ::new((::ROOT::Internal::TOperatorNewHelper*)p) map<string,vector<unsigned int> >[nElements] : new map<string,vector<unsigned int> >[nElements];
   }
   // Wrapper around operator delete
   static void delete_maplEstringcOvectorlEunsignedsPintgRsPgR(void *p) {
      delete ((map<string,vector<unsigned int> >*)p);
   }
   static void deleteArray_maplEstringcOvectorlEunsignedsPintgRsPgR(void *p) {
      delete [] ((map<string,vector<unsigned int> >*)p);
   }
   static void destruct_maplEstringcOvectorlEunsignedsPintgRsPgR(void *p) {
      typedef map<string,vector<unsigned int> > current_t;
      ((current_t*)p)->~current_t();
   }
} // end of namespace ROOT for class map<string,vector<unsigned int> >

namespace {
  void TriggerDictionaryInitialization_DataFormatsHLTReco_xr_Impl() {
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
"/cvmfs/cms.cern.ch/slc6_amd64_gcc530/external/clhep/2.2.0.4-ikhhed/include",
"/cvmfs/cms.cern.ch/slc6_amd64_gcc530/external/gsl/1.16/include",
"/cvmfs/cms.cern.ch/slc6_amd64_gcc530/external/libuuid/2.22.2/include",
"/cvmfs/cms.cern.ch/slc6_amd64_gcc530/external/tbb/44_20151115oss/include",
"/cvmfs/cms.cern.ch/slc6_amd64_gcc530/external/zlib/1.2.8/include",
"/cvmfs/cms.cern.ch/slc6_amd64_gcc530/lcg/root/6.06.00-ikhhed2/include",
"/disk1/scheuch/grid/FullDestroyAnalysis2016/Wheel0/Working/20160425/CMSSW_8_0_2/",
0
    };
    static const char* fwdDeclCode = R"DICTFWDDCLS(
#line 1 "DataFormatsHLTReco_xr dictionary forward declarations' payload"
#pragma clang diagnostic ignored "-Wkeyword-compat"
#pragma clang diagnostic ignored "-Wignored-attributes"
#pragma clang diagnostic ignored "-Wreturn-type-c-linkage"
extern int __Cling_Autoloading_Map;
namespace edm{class __attribute__((annotate("$clingAutoload$DataFormats/HLTReco/interface/ModuleTiming.h")))  ModuleTime;}
namespace std{template <typename _Tp> class __attribute__((annotate("$clingAutoload$string")))  allocator;
}
namespace edm{class __attribute__((annotate("$clingAutoload$DataFormats/HLTReco/interface/ModuleTiming.h")))  EventTime;}
namespace edm{template <typename T> class __attribute__((annotate("$clingAutoload$DataFormats/HLTReco/interface/TriggerFilterObjectWithRefs.h")))  Wrapper;
}
class __attribute__((annotate("$clingAutoload$DataFormats/HLTReco/interface/HLTPerformanceInfo.h")))  HLTPerformanceInfo;
namespace reco{class __attribute__((annotate("$clingAutoload$DataFormats/HLTReco/interface/TriggerFilterObjectWithRefs.h")))  RecoEcalCandidate;}
namespace edm{namespace refhelper{template <typename C, typename T> struct __attribute__((annotate("$clingAutoload$DataFormats/HLTReco/interface/TriggerFilterObjectWithRefs.h")))  FindUsingAdvance;
}}
namespace edm{namespace refhelper{template <typename REFV> struct __attribute__((annotate("$clingAutoload$DataFormats/HLTReco/interface/TriggerFilterObjectWithRefs.h")))  FindRefVectorUsingAdvance;
}}
namespace edm{namespace refhelper{template <typename C, typename T> struct __attribute__((annotate("$clingAutoload$DataFormats/HLTReco/interface/TriggerFilterObjectWithRefs.h")))  FindTrait;
}}
namespace edm{namespace refhelper{template <typename C> struct __attribute__((annotate("$clingAutoload$DataFormats/HLTReco/interface/TriggerFilterObjectWithRefs.h")))  ValueTrait;
}}
namespace reco{class __attribute__((annotate("$clingAutoload$DataFormats/HLTReco/interface/TriggerFilterObjectWithRefs.h")))  Electron;}
namespace reco{class __attribute__((annotate("$clingAutoload$DataFormats/HLTReco/interface/TriggerFilterObjectWithRefs.h")))  RecoChargedCandidate;}
namespace reco{class __attribute__((annotate("$clingAutoload$DataFormats/HLTReco/interface/TriggerFilterObjectWithRefs.h")))  PFTau;}
namespace trigger{enum  __attribute__((annotate("$clingAutoload$DataFormats/HLTReco/interface/TriggerTypeDefs.h"))) TriggerObjectType : int;}
namespace trigger{class __attribute__((annotate("$clingAutoload$DataFormats/HLTReco/interface/TriggerObject.h")))  TriggerObject;}
namespace trigger{class __attribute__((annotate("$clingAutoload$DataFormats/HLTReco/interface/TriggerFilterObjectWithRefs.h")))  TriggerRefsCollections;}
namespace trigger{class __attribute__((annotate("$clingAutoload$DataFormats/HLTReco/interface/TriggerFilterObjectWithRefs.h")))  TriggerFilterObjectWithRefs;}
namespace trigger{class __attribute__((annotate("$clingAutoload$DataFormats/HLTReco/interface/TriggerEvent.h")))  TriggerEvent;}
namespace trigger{class __attribute__((annotate("$clingAutoload$DataFormats/HLTReco/interface/TriggerEventWithRefs.h")))  TriggerEventWithRefs;}
namespace std{template <class _CharT> struct __attribute__((annotate("$clingAutoload$string")))  char_traits;
}
namespace trigger{class __attribute__((annotate("$clingAutoload$DataFormats/HLTReco/interface/HLTPrescaleTable.h")))  HLTPrescaleTable;}
)DICTFWDDCLS";
    static const char* payloadCode = R"DICTPAYLOAD(
#line 1 "DataFormatsHLTReco_xr dictionary payload"

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
#include "DataFormats/HLTReco/interface/TriggerTypeDefs.h"
#include "DataFormats/HLTReco/interface/ModuleTiming.h"
#include "DataFormats/HLTReco/interface/HLTPerformanceInfo.h"
#include "DataFormats/HLTReco/interface/TriggerObject.h"
#include "DataFormats/HLTReco/interface/TriggerFilterObjectWithRefs.h"
#include "DataFormats/HLTReco/interface/TriggerEvent.h"
#include "DataFormats/HLTReco/interface/TriggerEventWithRefs.h"
#include "DataFormats/HLTReco/interface/HLTPrescaleTable.h"
#include "DataFormats/Common/interface/Wrapper.h"

#include "DataFormats/Candidate/interface/CompositeCandidate.h"
#include "DataFormats/Candidate/interface/CompositeCandidateFwd.h"

#include "DataFormats/Common/interface/Ref.h"


namespace DataFormats_HLTReco {
  struct dictionary {

    edm::EventTime                                et0;

    edm::Wrapper<edm::EventTime>                wet10;

    // Performance Information
    HLTPerformanceInfo pw0;
    edm::Wrapper<HLTPerformanceInfo> pw1;
    HLTPerformanceInfoCollection pw2; 
    edm::Wrapper<HLTPerformanceInfoCollection> pw3; 

    HLTPerformanceInfo::Module pw4;
    HLTPerformanceInfo::Path pw6;
    std::vector<HLTPerformanceInfo::Module> pw8;
    std::vector<HLTPerformanceInfo::Module>::const_iterator pw9;
    std::vector<HLTPerformanceInfo::Path> pw10;
    std::vector<HLTPerformanceInfo::Path>::const_iterator pw11;
    //HLTPerformanceInfo::Path::const_iterator pw13;

    std::vector<trigger::TriggerObjectType> v_t_tot;
    std::vector<trigger::TriggerObjectType>::const_iterator v_t_tot_ci;
    edm::Wrapper<std::vector<trigger::TriggerObjectType> > w_v_t_tot;

    trigger::TriggerObjectCollection toc;
    trigger::TriggerRefsCollections trc;
    trigger::TriggerFilterObjectWithRefs tfowr;
    trigger::TriggerEvent te;
    trigger::TriggerEventWithRefs tewr;

    edm::Wrapper<trigger::TriggerObjectCollection> wtoc;
    edm::Wrapper<trigger::TriggerFilterObjectWithRefs> wtfowr;
    edm::Wrapper<trigger::TriggerEvent> wte;
    edm::Wrapper<trigger::TriggerEventWithRefs> wtewr;

    std::map<std::string,std::vector<unsigned int> > msu;
    trigger::HLTPrescaleTable hpt;
    edm::Wrapper<trigger::HLTPrescaleTable> whpt;

  };
}

#undef  _BACKWARD_BACKWARD_WARNING_H
)DICTPAYLOAD";
    static const char* classesHeaders[]={
"HLTPerformanceInfo", payloadCode, "@",
"HLTPerformanceInfo::Module", payloadCode, "@",
"HLTPerformanceInfo::Path", payloadCode, "@",
"__gnu_cxx::__normal_iterator<const HLTPerformanceInfo::Module*,vector<HLTPerformanceInfo::Module> >", payloadCode, "@",
"__gnu_cxx::__normal_iterator<const HLTPerformanceInfo::Path*,vector<HLTPerformanceInfo::Path> >", payloadCode, "@",
"__gnu_cxx::__normal_iterator<const trigger::TriggerObjectType*,vector<trigger::TriggerObjectType> >", payloadCode, "@",
"edm::EventTime", payloadCode, "@",
"edm::ModuleTime", payloadCode, "@",
"edm::Wrapper<HLTPerformanceInfo>", payloadCode, "@",
"edm::Wrapper<edm::EventTime>", payloadCode, "@",
"edm::Wrapper<trigger::HLTPrescaleTable>", payloadCode, "@",
"edm::Wrapper<trigger::TriggerEvent>", payloadCode, "@",
"edm::Wrapper<trigger::TriggerEventWithRefs>", payloadCode, "@",
"edm::Wrapper<trigger::TriggerFilterObjectWithRefs>", payloadCode, "@",
"edm::Wrapper<trigger::TriggerObjectCollection>", payloadCode, "@",
"edm::Wrapper<vector<trigger::TriggerObject> >", payloadCode, "@",
"trigger::HLTPrescaleTable", payloadCode, "@",
"trigger::TriggerEvent", payloadCode, "@",
"trigger::TriggerEvent::TriggerFilterObject", payloadCode, "@",
"trigger::TriggerEventWithRefs", payloadCode, "@",
"trigger::TriggerEventWithRefs::TriggerFilterObject", payloadCode, "@",
"trigger::TriggerFilterObjectWithRefs", payloadCode, "@",
"trigger::TriggerObject", payloadCode, "@",
"trigger::TriggerObjectCollection", payloadCode, "@",
"trigger::TriggerObjectType", payloadCode, "@",
"trigger::TriggerRefsCollections", payloadCode, "@",
"vector<HLTPerformanceInfo::Module>::const_iterator", payloadCode, "@",
"vector<HLTPerformanceInfo::Path>::const_iterator", payloadCode, "@",
"vector<trigger::TriggerObjectType>::const_iterator", payloadCode, "@",
nullptr};

    static bool isInitialized = false;
    if (!isInitialized) {
      TROOT::RegisterModule("DataFormatsHLTReco_xr",
        headers, includePaths, payloadCode, fwdDeclCode,
        TriggerDictionaryInitialization_DataFormatsHLTReco_xr_Impl, {}, classesHeaders);
      isInitialized = true;
    }
  }
  static struct DictInit {
    DictInit() {
      TriggerDictionaryInitialization_DataFormatsHLTReco_xr_Impl();
    }
  } __TheDictionaryInitializer;
}
void TriggerDictionaryInitialization_DataFormatsHLTReco_xr() {
  TriggerDictionaryInitialization_DataFormatsHLTReco_xr_Impl();
}
