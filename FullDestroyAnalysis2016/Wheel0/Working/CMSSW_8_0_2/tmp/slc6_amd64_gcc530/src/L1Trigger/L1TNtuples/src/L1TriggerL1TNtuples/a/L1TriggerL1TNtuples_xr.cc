// Do NOT change. Changes will be lost next time file is generated

#define R__DICTIONARY_FILENAME tmpdIslc6_amd64_gcc530dIsrcdIL1TriggerdIL1TNtuplesdIsrcdIL1TriggerL1TNtuplesdIadIL1TriggerL1TNtuples_xr

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
#include "src/L1Trigger/L1TNtuples/src/classes.h"

// Header files passed via #pragma extra_include

namespace ROOT {
   static TClass *L1AnalysiscLcLL1AnalysisEventDataFormat_Dictionary();
   static void L1AnalysiscLcLL1AnalysisEventDataFormat_TClassManip(TClass*);
   static void *new_L1AnalysiscLcLL1AnalysisEventDataFormat(void *p = 0);
   static void *newArray_L1AnalysiscLcLL1AnalysisEventDataFormat(Long_t size, void *p);
   static void delete_L1AnalysiscLcLL1AnalysisEventDataFormat(void *p);
   static void deleteArray_L1AnalysiscLcLL1AnalysisEventDataFormat(void *p);
   static void destruct_L1AnalysiscLcLL1AnalysisEventDataFormat(void *p);

   // Function generating the singleton type initializer
   static TGenericClassInfo *GenerateInitInstanceLocal(const ::L1Analysis::L1AnalysisEventDataFormat*)
   {
      ::L1Analysis::L1AnalysisEventDataFormat *ptr = 0;
      static ::TVirtualIsAProxy* isa_proxy = new ::TIsAProxy(typeid(::L1Analysis::L1AnalysisEventDataFormat));
      static ::ROOT::TGenericClassInfo 
         instance("L1Analysis::L1AnalysisEventDataFormat", "L1Trigger/L1TNtuples/interface/L1AnalysisEventDataFormat.h", 17,
                  typeid(::L1Analysis::L1AnalysisEventDataFormat), ::ROOT::Internal::DefineBehavior(ptr, ptr),
                  &L1AnalysiscLcLL1AnalysisEventDataFormat_Dictionary, isa_proxy, 0,
                  sizeof(::L1Analysis::L1AnalysisEventDataFormat) );
      instance.SetNew(&new_L1AnalysiscLcLL1AnalysisEventDataFormat);
      instance.SetNewArray(&newArray_L1AnalysiscLcLL1AnalysisEventDataFormat);
      instance.SetDelete(&delete_L1AnalysiscLcLL1AnalysisEventDataFormat);
      instance.SetDeleteArray(&deleteArray_L1AnalysiscLcLL1AnalysisEventDataFormat);
      instance.SetDestructor(&destruct_L1AnalysiscLcLL1AnalysisEventDataFormat);
      return &instance;
   }
   TGenericClassInfo *GenerateInitInstance(const ::L1Analysis::L1AnalysisEventDataFormat*)
   {
      return GenerateInitInstanceLocal((::L1Analysis::L1AnalysisEventDataFormat*)0);
   }
   // Static variable to force the class initialization
   static ::ROOT::TGenericClassInfo *_R__UNIQUE_(Init) = GenerateInitInstanceLocal((const ::L1Analysis::L1AnalysisEventDataFormat*)0x0); R__UseDummy(_R__UNIQUE_(Init));

   // Dictionary for non-ClassDef classes
   static TClass *L1AnalysiscLcLL1AnalysisEventDataFormat_Dictionary() {
      TClass* theClass =::ROOT::GenerateInitInstanceLocal((const ::L1Analysis::L1AnalysisEventDataFormat*)0x0)->GetClass();
      L1AnalysiscLcLL1AnalysisEventDataFormat_TClassManip(theClass);
   return theClass;
   }

   static void L1AnalysiscLcLL1AnalysisEventDataFormat_TClassManip(TClass* ){
   }

} // end of namespace ROOT

namespace ROOT {
   static TClass *L1AnalysiscLcLL1AnalysisCSCTFDataFormat_Dictionary();
   static void L1AnalysiscLcLL1AnalysisCSCTFDataFormat_TClassManip(TClass*);
   static void *new_L1AnalysiscLcLL1AnalysisCSCTFDataFormat(void *p = 0);
   static void *newArray_L1AnalysiscLcLL1AnalysisCSCTFDataFormat(Long_t size, void *p);
   static void delete_L1AnalysiscLcLL1AnalysisCSCTFDataFormat(void *p);
   static void deleteArray_L1AnalysiscLcLL1AnalysisCSCTFDataFormat(void *p);
   static void destruct_L1AnalysiscLcLL1AnalysisCSCTFDataFormat(void *p);

   // Function generating the singleton type initializer
   static TGenericClassInfo *GenerateInitInstanceLocal(const ::L1Analysis::L1AnalysisCSCTFDataFormat*)
   {
      ::L1Analysis::L1AnalysisCSCTFDataFormat *ptr = 0;
      static ::TVirtualIsAProxy* isa_proxy = new ::TIsAProxy(typeid(::L1Analysis::L1AnalysisCSCTFDataFormat));
      static ::ROOT::TGenericClassInfo 
         instance("L1Analysis::L1AnalysisCSCTFDataFormat", "L1Trigger/L1TNtuples/interface/L1AnalysisCSCTFDataFormat.h", 15,
                  typeid(::L1Analysis::L1AnalysisCSCTFDataFormat), ::ROOT::Internal::DefineBehavior(ptr, ptr),
                  &L1AnalysiscLcLL1AnalysisCSCTFDataFormat_Dictionary, isa_proxy, 0,
                  sizeof(::L1Analysis::L1AnalysisCSCTFDataFormat) );
      instance.SetNew(&new_L1AnalysiscLcLL1AnalysisCSCTFDataFormat);
      instance.SetNewArray(&newArray_L1AnalysiscLcLL1AnalysisCSCTFDataFormat);
      instance.SetDelete(&delete_L1AnalysiscLcLL1AnalysisCSCTFDataFormat);
      instance.SetDeleteArray(&deleteArray_L1AnalysiscLcLL1AnalysisCSCTFDataFormat);
      instance.SetDestructor(&destruct_L1AnalysiscLcLL1AnalysisCSCTFDataFormat);
      return &instance;
   }
   TGenericClassInfo *GenerateInitInstance(const ::L1Analysis::L1AnalysisCSCTFDataFormat*)
   {
      return GenerateInitInstanceLocal((::L1Analysis::L1AnalysisCSCTFDataFormat*)0);
   }
   // Static variable to force the class initialization
   static ::ROOT::TGenericClassInfo *_R__UNIQUE_(Init) = GenerateInitInstanceLocal((const ::L1Analysis::L1AnalysisCSCTFDataFormat*)0x0); R__UseDummy(_R__UNIQUE_(Init));

   // Dictionary for non-ClassDef classes
   static TClass *L1AnalysiscLcLL1AnalysisCSCTFDataFormat_Dictionary() {
      TClass* theClass =::ROOT::GenerateInitInstanceLocal((const ::L1Analysis::L1AnalysisCSCTFDataFormat*)0x0)->GetClass();
      L1AnalysiscLcLL1AnalysisCSCTFDataFormat_TClassManip(theClass);
   return theClass;
   }

   static void L1AnalysiscLcLL1AnalysisCSCTFDataFormat_TClassManip(TClass* ){
   }

} // end of namespace ROOT

namespace ROOT {
   static TClass *L1AnalysiscLcLL1AnalysisDTTFDataFormat_Dictionary();
   static void L1AnalysiscLcLL1AnalysisDTTFDataFormat_TClassManip(TClass*);
   static void *new_L1AnalysiscLcLL1AnalysisDTTFDataFormat(void *p = 0);
   static void *newArray_L1AnalysiscLcLL1AnalysisDTTFDataFormat(Long_t size, void *p);
   static void delete_L1AnalysiscLcLL1AnalysisDTTFDataFormat(void *p);
   static void deleteArray_L1AnalysiscLcLL1AnalysisDTTFDataFormat(void *p);
   static void destruct_L1AnalysiscLcLL1AnalysisDTTFDataFormat(void *p);

   // Function generating the singleton type initializer
   static TGenericClassInfo *GenerateInitInstanceLocal(const ::L1Analysis::L1AnalysisDTTFDataFormat*)
   {
      ::L1Analysis::L1AnalysisDTTFDataFormat *ptr = 0;
      static ::TVirtualIsAProxy* isa_proxy = new ::TIsAProxy(typeid(::L1Analysis::L1AnalysisDTTFDataFormat));
      static ::ROOT::TGenericClassInfo 
         instance("L1Analysis::L1AnalysisDTTFDataFormat", "L1Trigger/L1TNtuples/interface/L1AnalysisDTTFDataFormat.h", 17,
                  typeid(::L1Analysis::L1AnalysisDTTFDataFormat), ::ROOT::Internal::DefineBehavior(ptr, ptr),
                  &L1AnalysiscLcLL1AnalysisDTTFDataFormat_Dictionary, isa_proxy, 0,
                  sizeof(::L1Analysis::L1AnalysisDTTFDataFormat) );
      instance.SetNew(&new_L1AnalysiscLcLL1AnalysisDTTFDataFormat);
      instance.SetNewArray(&newArray_L1AnalysiscLcLL1AnalysisDTTFDataFormat);
      instance.SetDelete(&delete_L1AnalysiscLcLL1AnalysisDTTFDataFormat);
      instance.SetDeleteArray(&deleteArray_L1AnalysiscLcLL1AnalysisDTTFDataFormat);
      instance.SetDestructor(&destruct_L1AnalysiscLcLL1AnalysisDTTFDataFormat);
      return &instance;
   }
   TGenericClassInfo *GenerateInitInstance(const ::L1Analysis::L1AnalysisDTTFDataFormat*)
   {
      return GenerateInitInstanceLocal((::L1Analysis::L1AnalysisDTTFDataFormat*)0);
   }
   // Static variable to force the class initialization
   static ::ROOT::TGenericClassInfo *_R__UNIQUE_(Init) = GenerateInitInstanceLocal((const ::L1Analysis::L1AnalysisDTTFDataFormat*)0x0); R__UseDummy(_R__UNIQUE_(Init));

   // Dictionary for non-ClassDef classes
   static TClass *L1AnalysiscLcLL1AnalysisDTTFDataFormat_Dictionary() {
      TClass* theClass =::ROOT::GenerateInitInstanceLocal((const ::L1Analysis::L1AnalysisDTTFDataFormat*)0x0)->GetClass();
      L1AnalysiscLcLL1AnalysisDTTFDataFormat_TClassManip(theClass);
   return theClass;
   }

   static void L1AnalysiscLcLL1AnalysisDTTFDataFormat_TClassManip(TClass* ){
   }

} // end of namespace ROOT

namespace ROOT {
   static TClass *L1AnalysiscLcLL1AnalysisGCTDataFormat_Dictionary();
   static void L1AnalysiscLcLL1AnalysisGCTDataFormat_TClassManip(TClass*);
   static void *new_L1AnalysiscLcLL1AnalysisGCTDataFormat(void *p = 0);
   static void *newArray_L1AnalysiscLcLL1AnalysisGCTDataFormat(Long_t size, void *p);
   static void delete_L1AnalysiscLcLL1AnalysisGCTDataFormat(void *p);
   static void deleteArray_L1AnalysiscLcLL1AnalysisGCTDataFormat(void *p);
   static void destruct_L1AnalysiscLcLL1AnalysisGCTDataFormat(void *p);

   // Function generating the singleton type initializer
   static TGenericClassInfo *GenerateInitInstanceLocal(const ::L1Analysis::L1AnalysisGCTDataFormat*)
   {
      ::L1Analysis::L1AnalysisGCTDataFormat *ptr = 0;
      static ::TVirtualIsAProxy* isa_proxy = new ::TIsAProxy(typeid(::L1Analysis::L1AnalysisGCTDataFormat));
      static ::ROOT::TGenericClassInfo 
         instance("L1Analysis::L1AnalysisGCTDataFormat", "L1Trigger/L1TNtuples/interface/L1AnalysisGCTDataFormat.h", 15,
                  typeid(::L1Analysis::L1AnalysisGCTDataFormat), ::ROOT::Internal::DefineBehavior(ptr, ptr),
                  &L1AnalysiscLcLL1AnalysisGCTDataFormat_Dictionary, isa_proxy, 0,
                  sizeof(::L1Analysis::L1AnalysisGCTDataFormat) );
      instance.SetNew(&new_L1AnalysiscLcLL1AnalysisGCTDataFormat);
      instance.SetNewArray(&newArray_L1AnalysiscLcLL1AnalysisGCTDataFormat);
      instance.SetDelete(&delete_L1AnalysiscLcLL1AnalysisGCTDataFormat);
      instance.SetDeleteArray(&deleteArray_L1AnalysiscLcLL1AnalysisGCTDataFormat);
      instance.SetDestructor(&destruct_L1AnalysiscLcLL1AnalysisGCTDataFormat);
      return &instance;
   }
   TGenericClassInfo *GenerateInitInstance(const ::L1Analysis::L1AnalysisGCTDataFormat*)
   {
      return GenerateInitInstanceLocal((::L1Analysis::L1AnalysisGCTDataFormat*)0);
   }
   // Static variable to force the class initialization
   static ::ROOT::TGenericClassInfo *_R__UNIQUE_(Init) = GenerateInitInstanceLocal((const ::L1Analysis::L1AnalysisGCTDataFormat*)0x0); R__UseDummy(_R__UNIQUE_(Init));

   // Dictionary for non-ClassDef classes
   static TClass *L1AnalysiscLcLL1AnalysisGCTDataFormat_Dictionary() {
      TClass* theClass =::ROOT::GenerateInitInstanceLocal((const ::L1Analysis::L1AnalysisGCTDataFormat*)0x0)->GetClass();
      L1AnalysiscLcLL1AnalysisGCTDataFormat_TClassManip(theClass);
   return theClass;
   }

   static void L1AnalysiscLcLL1AnalysisGCTDataFormat_TClassManip(TClass* ){
   }

} // end of namespace ROOT

namespace ROOT {
   static TClass *L1AnalysiscLcLL1AnalysisGMTDataFormat_Dictionary();
   static void L1AnalysiscLcLL1AnalysisGMTDataFormat_TClassManip(TClass*);
   static void *new_L1AnalysiscLcLL1AnalysisGMTDataFormat(void *p = 0);
   static void *newArray_L1AnalysiscLcLL1AnalysisGMTDataFormat(Long_t size, void *p);
   static void delete_L1AnalysiscLcLL1AnalysisGMTDataFormat(void *p);
   static void deleteArray_L1AnalysiscLcLL1AnalysisGMTDataFormat(void *p);
   static void destruct_L1AnalysiscLcLL1AnalysisGMTDataFormat(void *p);

   // Function generating the singleton type initializer
   static TGenericClassInfo *GenerateInitInstanceLocal(const ::L1Analysis::L1AnalysisGMTDataFormat*)
   {
      ::L1Analysis::L1AnalysisGMTDataFormat *ptr = 0;
      static ::TVirtualIsAProxy* isa_proxy = new ::TIsAProxy(typeid(::L1Analysis::L1AnalysisGMTDataFormat));
      static ::ROOT::TGenericClassInfo 
         instance("L1Analysis::L1AnalysisGMTDataFormat", "L1Trigger/L1TNtuples/interface/L1AnalysisGMTDataFormat.h", 16,
                  typeid(::L1Analysis::L1AnalysisGMTDataFormat), ::ROOT::Internal::DefineBehavior(ptr, ptr),
                  &L1AnalysiscLcLL1AnalysisGMTDataFormat_Dictionary, isa_proxy, 0,
                  sizeof(::L1Analysis::L1AnalysisGMTDataFormat) );
      instance.SetNew(&new_L1AnalysiscLcLL1AnalysisGMTDataFormat);
      instance.SetNewArray(&newArray_L1AnalysiscLcLL1AnalysisGMTDataFormat);
      instance.SetDelete(&delete_L1AnalysiscLcLL1AnalysisGMTDataFormat);
      instance.SetDeleteArray(&deleteArray_L1AnalysiscLcLL1AnalysisGMTDataFormat);
      instance.SetDestructor(&destruct_L1AnalysiscLcLL1AnalysisGMTDataFormat);
      return &instance;
   }
   TGenericClassInfo *GenerateInitInstance(const ::L1Analysis::L1AnalysisGMTDataFormat*)
   {
      return GenerateInitInstanceLocal((::L1Analysis::L1AnalysisGMTDataFormat*)0);
   }
   // Static variable to force the class initialization
   static ::ROOT::TGenericClassInfo *_R__UNIQUE_(Init) = GenerateInitInstanceLocal((const ::L1Analysis::L1AnalysisGMTDataFormat*)0x0); R__UseDummy(_R__UNIQUE_(Init));

   // Dictionary for non-ClassDef classes
   static TClass *L1AnalysiscLcLL1AnalysisGMTDataFormat_Dictionary() {
      TClass* theClass =::ROOT::GenerateInitInstanceLocal((const ::L1Analysis::L1AnalysisGMTDataFormat*)0x0)->GetClass();
      L1AnalysiscLcLL1AnalysisGMTDataFormat_TClassManip(theClass);
   return theClass;
   }

   static void L1AnalysiscLcLL1AnalysisGMTDataFormat_TClassManip(TClass* ){
   }

} // end of namespace ROOT

namespace ROOT {
   static TClass *L1AnalysiscLcLL1AnalysisGTDataFormat_Dictionary();
   static void L1AnalysiscLcLL1AnalysisGTDataFormat_TClassManip(TClass*);
   static void *new_L1AnalysiscLcLL1AnalysisGTDataFormat(void *p = 0);
   static void *newArray_L1AnalysiscLcLL1AnalysisGTDataFormat(Long_t size, void *p);
   static void delete_L1AnalysiscLcLL1AnalysisGTDataFormat(void *p);
   static void deleteArray_L1AnalysiscLcLL1AnalysisGTDataFormat(void *p);
   static void destruct_L1AnalysiscLcLL1AnalysisGTDataFormat(void *p);

   // Function generating the singleton type initializer
   static TGenericClassInfo *GenerateInitInstanceLocal(const ::L1Analysis::L1AnalysisGTDataFormat*)
   {
      ::L1Analysis::L1AnalysisGTDataFormat *ptr = 0;
      static ::TVirtualIsAProxy* isa_proxy = new ::TIsAProxy(typeid(::L1Analysis::L1AnalysisGTDataFormat));
      static ::ROOT::TGenericClassInfo 
         instance("L1Analysis::L1AnalysisGTDataFormat", "L1Trigger/L1TNtuples/interface/L1AnalysisGTDataFormat.h", 16,
                  typeid(::L1Analysis::L1AnalysisGTDataFormat), ::ROOT::Internal::DefineBehavior(ptr, ptr),
                  &L1AnalysiscLcLL1AnalysisGTDataFormat_Dictionary, isa_proxy, 0,
                  sizeof(::L1Analysis::L1AnalysisGTDataFormat) );
      instance.SetNew(&new_L1AnalysiscLcLL1AnalysisGTDataFormat);
      instance.SetNewArray(&newArray_L1AnalysiscLcLL1AnalysisGTDataFormat);
      instance.SetDelete(&delete_L1AnalysiscLcLL1AnalysisGTDataFormat);
      instance.SetDeleteArray(&deleteArray_L1AnalysiscLcLL1AnalysisGTDataFormat);
      instance.SetDestructor(&destruct_L1AnalysiscLcLL1AnalysisGTDataFormat);
      return &instance;
   }
   TGenericClassInfo *GenerateInitInstance(const ::L1Analysis::L1AnalysisGTDataFormat*)
   {
      return GenerateInitInstanceLocal((::L1Analysis::L1AnalysisGTDataFormat*)0);
   }
   // Static variable to force the class initialization
   static ::ROOT::TGenericClassInfo *_R__UNIQUE_(Init) = GenerateInitInstanceLocal((const ::L1Analysis::L1AnalysisGTDataFormat*)0x0); R__UseDummy(_R__UNIQUE_(Init));

   // Dictionary for non-ClassDef classes
   static TClass *L1AnalysiscLcLL1AnalysisGTDataFormat_Dictionary() {
      TClass* theClass =::ROOT::GenerateInitInstanceLocal((const ::L1Analysis::L1AnalysisGTDataFormat*)0x0)->GetClass();
      L1AnalysiscLcLL1AnalysisGTDataFormat_TClassManip(theClass);
   return theClass;
   }

   static void L1AnalysiscLcLL1AnalysisGTDataFormat_TClassManip(TClass* ){
   }

} // end of namespace ROOT

namespace ROOT {
   static TClass *L1AnalysiscLcLL1AnalysisRCTDataFormat_Dictionary();
   static void L1AnalysiscLcLL1AnalysisRCTDataFormat_TClassManip(TClass*);
   static void *new_L1AnalysiscLcLL1AnalysisRCTDataFormat(void *p = 0);
   static void *newArray_L1AnalysiscLcLL1AnalysisRCTDataFormat(Long_t size, void *p);
   static void delete_L1AnalysiscLcLL1AnalysisRCTDataFormat(void *p);
   static void deleteArray_L1AnalysiscLcLL1AnalysisRCTDataFormat(void *p);
   static void destruct_L1AnalysiscLcLL1AnalysisRCTDataFormat(void *p);

   // Function generating the singleton type initializer
   static TGenericClassInfo *GenerateInitInstanceLocal(const ::L1Analysis::L1AnalysisRCTDataFormat*)
   {
      ::L1Analysis::L1AnalysisRCTDataFormat *ptr = 0;
      static ::TVirtualIsAProxy* isa_proxy = new ::TIsAProxy(typeid(::L1Analysis::L1AnalysisRCTDataFormat));
      static ::ROOT::TGenericClassInfo 
         instance("L1Analysis::L1AnalysisRCTDataFormat", "L1Trigger/L1TNtuples/interface/L1AnalysisRCTDataFormat.h", 15,
                  typeid(::L1Analysis::L1AnalysisRCTDataFormat), ::ROOT::Internal::DefineBehavior(ptr, ptr),
                  &L1AnalysiscLcLL1AnalysisRCTDataFormat_Dictionary, isa_proxy, 0,
                  sizeof(::L1Analysis::L1AnalysisRCTDataFormat) );
      instance.SetNew(&new_L1AnalysiscLcLL1AnalysisRCTDataFormat);
      instance.SetNewArray(&newArray_L1AnalysiscLcLL1AnalysisRCTDataFormat);
      instance.SetDelete(&delete_L1AnalysiscLcLL1AnalysisRCTDataFormat);
      instance.SetDeleteArray(&deleteArray_L1AnalysiscLcLL1AnalysisRCTDataFormat);
      instance.SetDestructor(&destruct_L1AnalysiscLcLL1AnalysisRCTDataFormat);
      return &instance;
   }
   TGenericClassInfo *GenerateInitInstance(const ::L1Analysis::L1AnalysisRCTDataFormat*)
   {
      return GenerateInitInstanceLocal((::L1Analysis::L1AnalysisRCTDataFormat*)0);
   }
   // Static variable to force the class initialization
   static ::ROOT::TGenericClassInfo *_R__UNIQUE_(Init) = GenerateInitInstanceLocal((const ::L1Analysis::L1AnalysisRCTDataFormat*)0x0); R__UseDummy(_R__UNIQUE_(Init));

   // Dictionary for non-ClassDef classes
   static TClass *L1AnalysiscLcLL1AnalysisRCTDataFormat_Dictionary() {
      TClass* theClass =::ROOT::GenerateInitInstanceLocal((const ::L1Analysis::L1AnalysisRCTDataFormat*)0x0)->GetClass();
      L1AnalysiscLcLL1AnalysisRCTDataFormat_TClassManip(theClass);
   return theClass;
   }

   static void L1AnalysiscLcLL1AnalysisRCTDataFormat_TClassManip(TClass* ){
   }

} // end of namespace ROOT

namespace ROOT {
   static TClass *L1AnalysiscLcLL1AnalysisCaloTPDataFormat_Dictionary();
   static void L1AnalysiscLcLL1AnalysisCaloTPDataFormat_TClassManip(TClass*);
   static void *new_L1AnalysiscLcLL1AnalysisCaloTPDataFormat(void *p = 0);
   static void *newArray_L1AnalysiscLcLL1AnalysisCaloTPDataFormat(Long_t size, void *p);
   static void delete_L1AnalysiscLcLL1AnalysisCaloTPDataFormat(void *p);
   static void deleteArray_L1AnalysiscLcLL1AnalysisCaloTPDataFormat(void *p);
   static void destruct_L1AnalysiscLcLL1AnalysisCaloTPDataFormat(void *p);

   // Function generating the singleton type initializer
   static TGenericClassInfo *GenerateInitInstanceLocal(const ::L1Analysis::L1AnalysisCaloTPDataFormat*)
   {
      ::L1Analysis::L1AnalysisCaloTPDataFormat *ptr = 0;
      static ::TVirtualIsAProxy* isa_proxy = new ::TIsAProxy(typeid(::L1Analysis::L1AnalysisCaloTPDataFormat));
      static ::ROOT::TGenericClassInfo 
         instance("L1Analysis::L1AnalysisCaloTPDataFormat", "L1Trigger/L1TNtuples/interface/L1AnalysisCaloTPDataFormat.h", 15,
                  typeid(::L1Analysis::L1AnalysisCaloTPDataFormat), ::ROOT::Internal::DefineBehavior(ptr, ptr),
                  &L1AnalysiscLcLL1AnalysisCaloTPDataFormat_Dictionary, isa_proxy, 0,
                  sizeof(::L1Analysis::L1AnalysisCaloTPDataFormat) );
      instance.SetNew(&new_L1AnalysiscLcLL1AnalysisCaloTPDataFormat);
      instance.SetNewArray(&newArray_L1AnalysiscLcLL1AnalysisCaloTPDataFormat);
      instance.SetDelete(&delete_L1AnalysiscLcLL1AnalysisCaloTPDataFormat);
      instance.SetDeleteArray(&deleteArray_L1AnalysiscLcLL1AnalysisCaloTPDataFormat);
      instance.SetDestructor(&destruct_L1AnalysiscLcLL1AnalysisCaloTPDataFormat);
      return &instance;
   }
   TGenericClassInfo *GenerateInitInstance(const ::L1Analysis::L1AnalysisCaloTPDataFormat*)
   {
      return GenerateInitInstanceLocal((::L1Analysis::L1AnalysisCaloTPDataFormat*)0);
   }
   // Static variable to force the class initialization
   static ::ROOT::TGenericClassInfo *_R__UNIQUE_(Init) = GenerateInitInstanceLocal((const ::L1Analysis::L1AnalysisCaloTPDataFormat*)0x0); R__UseDummy(_R__UNIQUE_(Init));

   // Dictionary for non-ClassDef classes
   static TClass *L1AnalysiscLcLL1AnalysisCaloTPDataFormat_Dictionary() {
      TClass* theClass =::ROOT::GenerateInitInstanceLocal((const ::L1Analysis::L1AnalysisCaloTPDataFormat*)0x0)->GetClass();
      L1AnalysiscLcLL1AnalysisCaloTPDataFormat_TClassManip(theClass);
   return theClass;
   }

   static void L1AnalysiscLcLL1AnalysisCaloTPDataFormat_TClassManip(TClass* ){
   }

} // end of namespace ROOT

namespace ROOT {
   static TClass *L1AnalysiscLcLL1AnalysisGeneratorDataFormat_Dictionary();
   static void L1AnalysiscLcLL1AnalysisGeneratorDataFormat_TClassManip(TClass*);
   static void *new_L1AnalysiscLcLL1AnalysisGeneratorDataFormat(void *p = 0);
   static void *newArray_L1AnalysiscLcLL1AnalysisGeneratorDataFormat(Long_t size, void *p);
   static void delete_L1AnalysiscLcLL1AnalysisGeneratorDataFormat(void *p);
   static void deleteArray_L1AnalysiscLcLL1AnalysisGeneratorDataFormat(void *p);
   static void destruct_L1AnalysiscLcLL1AnalysisGeneratorDataFormat(void *p);

   // Function generating the singleton type initializer
   static TGenericClassInfo *GenerateInitInstanceLocal(const ::L1Analysis::L1AnalysisGeneratorDataFormat*)
   {
      ::L1Analysis::L1AnalysisGeneratorDataFormat *ptr = 0;
      static ::TVirtualIsAProxy* isa_proxy = new ::TIsAProxy(typeid(::L1Analysis::L1AnalysisGeneratorDataFormat));
      static ::ROOT::TGenericClassInfo 
         instance("L1Analysis::L1AnalysisGeneratorDataFormat", "L1Trigger/L1TNtuples/interface/L1AnalysisGeneratorDataFormat.h", 17,
                  typeid(::L1Analysis::L1AnalysisGeneratorDataFormat), ::ROOT::Internal::DefineBehavior(ptr, ptr),
                  &L1AnalysiscLcLL1AnalysisGeneratorDataFormat_Dictionary, isa_proxy, 0,
                  sizeof(::L1Analysis::L1AnalysisGeneratorDataFormat) );
      instance.SetNew(&new_L1AnalysiscLcLL1AnalysisGeneratorDataFormat);
      instance.SetNewArray(&newArray_L1AnalysiscLcLL1AnalysisGeneratorDataFormat);
      instance.SetDelete(&delete_L1AnalysiscLcLL1AnalysisGeneratorDataFormat);
      instance.SetDeleteArray(&deleteArray_L1AnalysiscLcLL1AnalysisGeneratorDataFormat);
      instance.SetDestructor(&destruct_L1AnalysiscLcLL1AnalysisGeneratorDataFormat);
      return &instance;
   }
   TGenericClassInfo *GenerateInitInstance(const ::L1Analysis::L1AnalysisGeneratorDataFormat*)
   {
      return GenerateInitInstanceLocal((::L1Analysis::L1AnalysisGeneratorDataFormat*)0);
   }
   // Static variable to force the class initialization
   static ::ROOT::TGenericClassInfo *_R__UNIQUE_(Init) = GenerateInitInstanceLocal((const ::L1Analysis::L1AnalysisGeneratorDataFormat*)0x0); R__UseDummy(_R__UNIQUE_(Init));

   // Dictionary for non-ClassDef classes
   static TClass *L1AnalysiscLcLL1AnalysisGeneratorDataFormat_Dictionary() {
      TClass* theClass =::ROOT::GenerateInitInstanceLocal((const ::L1Analysis::L1AnalysisGeneratorDataFormat*)0x0)->GetClass();
      L1AnalysiscLcLL1AnalysisGeneratorDataFormat_TClassManip(theClass);
   return theClass;
   }

   static void L1AnalysiscLcLL1AnalysisGeneratorDataFormat_TClassManip(TClass* ){
   }

} // end of namespace ROOT

namespace ROOT {
   static TClass *L1AnalysiscLcLL1AnalysisSimulationDataFormat_Dictionary();
   static void L1AnalysiscLcLL1AnalysisSimulationDataFormat_TClassManip(TClass*);
   static void *new_L1AnalysiscLcLL1AnalysisSimulationDataFormat(void *p = 0);
   static void *newArray_L1AnalysiscLcLL1AnalysisSimulationDataFormat(Long_t size, void *p);
   static void delete_L1AnalysiscLcLL1AnalysisSimulationDataFormat(void *p);
   static void deleteArray_L1AnalysiscLcLL1AnalysisSimulationDataFormat(void *p);
   static void destruct_L1AnalysiscLcLL1AnalysisSimulationDataFormat(void *p);

   // Function generating the singleton type initializer
   static TGenericClassInfo *GenerateInitInstanceLocal(const ::L1Analysis::L1AnalysisSimulationDataFormat*)
   {
      ::L1Analysis::L1AnalysisSimulationDataFormat *ptr = 0;
      static ::TVirtualIsAProxy* isa_proxy = new ::TIsAProxy(typeid(::L1Analysis::L1AnalysisSimulationDataFormat));
      static ::ROOT::TGenericClassInfo 
         instance("L1Analysis::L1AnalysisSimulationDataFormat", "L1Trigger/L1TNtuples/interface/L1AnalysisSimulationDataFormat.h", 15,
                  typeid(::L1Analysis::L1AnalysisSimulationDataFormat), ::ROOT::Internal::DefineBehavior(ptr, ptr),
                  &L1AnalysiscLcLL1AnalysisSimulationDataFormat_Dictionary, isa_proxy, 0,
                  sizeof(::L1Analysis::L1AnalysisSimulationDataFormat) );
      instance.SetNew(&new_L1AnalysiscLcLL1AnalysisSimulationDataFormat);
      instance.SetNewArray(&newArray_L1AnalysiscLcLL1AnalysisSimulationDataFormat);
      instance.SetDelete(&delete_L1AnalysiscLcLL1AnalysisSimulationDataFormat);
      instance.SetDeleteArray(&deleteArray_L1AnalysiscLcLL1AnalysisSimulationDataFormat);
      instance.SetDestructor(&destruct_L1AnalysiscLcLL1AnalysisSimulationDataFormat);
      return &instance;
   }
   TGenericClassInfo *GenerateInitInstance(const ::L1Analysis::L1AnalysisSimulationDataFormat*)
   {
      return GenerateInitInstanceLocal((::L1Analysis::L1AnalysisSimulationDataFormat*)0);
   }
   // Static variable to force the class initialization
   static ::ROOT::TGenericClassInfo *_R__UNIQUE_(Init) = GenerateInitInstanceLocal((const ::L1Analysis::L1AnalysisSimulationDataFormat*)0x0); R__UseDummy(_R__UNIQUE_(Init));

   // Dictionary for non-ClassDef classes
   static TClass *L1AnalysiscLcLL1AnalysisSimulationDataFormat_Dictionary() {
      TClass* theClass =::ROOT::GenerateInitInstanceLocal((const ::L1Analysis::L1AnalysisSimulationDataFormat*)0x0)->GetClass();
      L1AnalysiscLcLL1AnalysisSimulationDataFormat_TClassManip(theClass);
   return theClass;
   }

   static void L1AnalysiscLcLL1AnalysisSimulationDataFormat_TClassManip(TClass* ){
   }

} // end of namespace ROOT

namespace ROOT {
   static TClass *L1AnalysiscLcLL1AnalysisL1ExtraDataFormat_Dictionary();
   static void L1AnalysiscLcLL1AnalysisL1ExtraDataFormat_TClassManip(TClass*);
   static void *new_L1AnalysiscLcLL1AnalysisL1ExtraDataFormat(void *p = 0);
   static void *newArray_L1AnalysiscLcLL1AnalysisL1ExtraDataFormat(Long_t size, void *p);
   static void delete_L1AnalysiscLcLL1AnalysisL1ExtraDataFormat(void *p);
   static void deleteArray_L1AnalysiscLcLL1AnalysisL1ExtraDataFormat(void *p);
   static void destruct_L1AnalysiscLcLL1AnalysisL1ExtraDataFormat(void *p);

   // Function generating the singleton type initializer
   static TGenericClassInfo *GenerateInitInstanceLocal(const ::L1Analysis::L1AnalysisL1ExtraDataFormat*)
   {
      ::L1Analysis::L1AnalysisL1ExtraDataFormat *ptr = 0;
      static ::TVirtualIsAProxy* isa_proxy = new ::TIsAProxy(typeid(::L1Analysis::L1AnalysisL1ExtraDataFormat));
      static ::ROOT::TGenericClassInfo 
         instance("L1Analysis::L1AnalysisL1ExtraDataFormat", "L1Trigger/L1TNtuples/interface/L1AnalysisL1ExtraDataFormat.h", 16,
                  typeid(::L1Analysis::L1AnalysisL1ExtraDataFormat), ::ROOT::Internal::DefineBehavior(ptr, ptr),
                  &L1AnalysiscLcLL1AnalysisL1ExtraDataFormat_Dictionary, isa_proxy, 0,
                  sizeof(::L1Analysis::L1AnalysisL1ExtraDataFormat) );
      instance.SetNew(&new_L1AnalysiscLcLL1AnalysisL1ExtraDataFormat);
      instance.SetNewArray(&newArray_L1AnalysiscLcLL1AnalysisL1ExtraDataFormat);
      instance.SetDelete(&delete_L1AnalysiscLcLL1AnalysisL1ExtraDataFormat);
      instance.SetDeleteArray(&deleteArray_L1AnalysiscLcLL1AnalysisL1ExtraDataFormat);
      instance.SetDestructor(&destruct_L1AnalysiscLcLL1AnalysisL1ExtraDataFormat);
      return &instance;
   }
   TGenericClassInfo *GenerateInitInstance(const ::L1Analysis::L1AnalysisL1ExtraDataFormat*)
   {
      return GenerateInitInstanceLocal((::L1Analysis::L1AnalysisL1ExtraDataFormat*)0);
   }
   // Static variable to force the class initialization
   static ::ROOT::TGenericClassInfo *_R__UNIQUE_(Init) = GenerateInitInstanceLocal((const ::L1Analysis::L1AnalysisL1ExtraDataFormat*)0x0); R__UseDummy(_R__UNIQUE_(Init));

   // Dictionary for non-ClassDef classes
   static TClass *L1AnalysiscLcLL1AnalysisL1ExtraDataFormat_Dictionary() {
      TClass* theClass =::ROOT::GenerateInitInstanceLocal((const ::L1Analysis::L1AnalysisL1ExtraDataFormat*)0x0)->GetClass();
      L1AnalysiscLcLL1AnalysisL1ExtraDataFormat_TClassManip(theClass);
   return theClass;
   }

   static void L1AnalysiscLcLL1AnalysisL1ExtraDataFormat_TClassManip(TClass* ){
   }

} // end of namespace ROOT

namespace ROOT {
   static TClass *L1AnalysiscLcLL1AnalysisRecoMuonDataFormat_Dictionary();
   static void L1AnalysiscLcLL1AnalysisRecoMuonDataFormat_TClassManip(TClass*);
   static void *new_L1AnalysiscLcLL1AnalysisRecoMuonDataFormat(void *p = 0);
   static void *newArray_L1AnalysiscLcLL1AnalysisRecoMuonDataFormat(Long_t size, void *p);
   static void delete_L1AnalysiscLcLL1AnalysisRecoMuonDataFormat(void *p);
   static void deleteArray_L1AnalysiscLcLL1AnalysisRecoMuonDataFormat(void *p);
   static void destruct_L1AnalysiscLcLL1AnalysisRecoMuonDataFormat(void *p);

   // Function generating the singleton type initializer
   static TGenericClassInfo *GenerateInitInstanceLocal(const ::L1Analysis::L1AnalysisRecoMuonDataFormat*)
   {
      ::L1Analysis::L1AnalysisRecoMuonDataFormat *ptr = 0;
      static ::TVirtualIsAProxy* isa_proxy = new ::TIsAProxy(typeid(::L1Analysis::L1AnalysisRecoMuonDataFormat));
      static ::ROOT::TGenericClassInfo 
         instance("L1Analysis::L1AnalysisRecoMuonDataFormat", "L1Trigger/L1TNtuples/interface/L1AnalysisRecoMuonDataFormat.h", 15,
                  typeid(::L1Analysis::L1AnalysisRecoMuonDataFormat), ::ROOT::Internal::DefineBehavior(ptr, ptr),
                  &L1AnalysiscLcLL1AnalysisRecoMuonDataFormat_Dictionary, isa_proxy, 0,
                  sizeof(::L1Analysis::L1AnalysisRecoMuonDataFormat) );
      instance.SetNew(&new_L1AnalysiscLcLL1AnalysisRecoMuonDataFormat);
      instance.SetNewArray(&newArray_L1AnalysiscLcLL1AnalysisRecoMuonDataFormat);
      instance.SetDelete(&delete_L1AnalysiscLcLL1AnalysisRecoMuonDataFormat);
      instance.SetDeleteArray(&deleteArray_L1AnalysiscLcLL1AnalysisRecoMuonDataFormat);
      instance.SetDestructor(&destruct_L1AnalysiscLcLL1AnalysisRecoMuonDataFormat);
      return &instance;
   }
   TGenericClassInfo *GenerateInitInstance(const ::L1Analysis::L1AnalysisRecoMuonDataFormat*)
   {
      return GenerateInitInstanceLocal((::L1Analysis::L1AnalysisRecoMuonDataFormat*)0);
   }
   // Static variable to force the class initialization
   static ::ROOT::TGenericClassInfo *_R__UNIQUE_(Init) = GenerateInitInstanceLocal((const ::L1Analysis::L1AnalysisRecoMuonDataFormat*)0x0); R__UseDummy(_R__UNIQUE_(Init));

   // Dictionary for non-ClassDef classes
   static TClass *L1AnalysiscLcLL1AnalysisRecoMuonDataFormat_Dictionary() {
      TClass* theClass =::ROOT::GenerateInitInstanceLocal((const ::L1Analysis::L1AnalysisRecoMuonDataFormat*)0x0)->GetClass();
      L1AnalysiscLcLL1AnalysisRecoMuonDataFormat_TClassManip(theClass);
   return theClass;
   }

   static void L1AnalysiscLcLL1AnalysisRecoMuonDataFormat_TClassManip(TClass* ){
   }

} // end of namespace ROOT

namespace ROOT {
   static TClass *L1AnalysiscLcLL1AnalysisRecoRpcHitDataFormat_Dictionary();
   static void L1AnalysiscLcLL1AnalysisRecoRpcHitDataFormat_TClassManip(TClass*);
   static void *new_L1AnalysiscLcLL1AnalysisRecoRpcHitDataFormat(void *p = 0);
   static void *newArray_L1AnalysiscLcLL1AnalysisRecoRpcHitDataFormat(Long_t size, void *p);
   static void delete_L1AnalysiscLcLL1AnalysisRecoRpcHitDataFormat(void *p);
   static void deleteArray_L1AnalysiscLcLL1AnalysisRecoRpcHitDataFormat(void *p);
   static void destruct_L1AnalysiscLcLL1AnalysisRecoRpcHitDataFormat(void *p);

   // Function generating the singleton type initializer
   static TGenericClassInfo *GenerateInitInstanceLocal(const ::L1Analysis::L1AnalysisRecoRpcHitDataFormat*)
   {
      ::L1Analysis::L1AnalysisRecoRpcHitDataFormat *ptr = 0;
      static ::TVirtualIsAProxy* isa_proxy = new ::TIsAProxy(typeid(::L1Analysis::L1AnalysisRecoRpcHitDataFormat));
      static ::ROOT::TGenericClassInfo 
         instance("L1Analysis::L1AnalysisRecoRpcHitDataFormat", "L1Trigger/L1TNtuples/interface/L1AnalysisRecoRpcHitDataFormat.h", 15,
                  typeid(::L1Analysis::L1AnalysisRecoRpcHitDataFormat), ::ROOT::Internal::DefineBehavior(ptr, ptr),
                  &L1AnalysiscLcLL1AnalysisRecoRpcHitDataFormat_Dictionary, isa_proxy, 0,
                  sizeof(::L1Analysis::L1AnalysisRecoRpcHitDataFormat) );
      instance.SetNew(&new_L1AnalysiscLcLL1AnalysisRecoRpcHitDataFormat);
      instance.SetNewArray(&newArray_L1AnalysiscLcLL1AnalysisRecoRpcHitDataFormat);
      instance.SetDelete(&delete_L1AnalysiscLcLL1AnalysisRecoRpcHitDataFormat);
      instance.SetDeleteArray(&deleteArray_L1AnalysiscLcLL1AnalysisRecoRpcHitDataFormat);
      instance.SetDestructor(&destruct_L1AnalysiscLcLL1AnalysisRecoRpcHitDataFormat);
      return &instance;
   }
   TGenericClassInfo *GenerateInitInstance(const ::L1Analysis::L1AnalysisRecoRpcHitDataFormat*)
   {
      return GenerateInitInstanceLocal((::L1Analysis::L1AnalysisRecoRpcHitDataFormat*)0);
   }
   // Static variable to force the class initialization
   static ::ROOT::TGenericClassInfo *_R__UNIQUE_(Init) = GenerateInitInstanceLocal((const ::L1Analysis::L1AnalysisRecoRpcHitDataFormat*)0x0); R__UseDummy(_R__UNIQUE_(Init));

   // Dictionary for non-ClassDef classes
   static TClass *L1AnalysiscLcLL1AnalysisRecoRpcHitDataFormat_Dictionary() {
      TClass* theClass =::ROOT::GenerateInitInstanceLocal((const ::L1Analysis::L1AnalysisRecoRpcHitDataFormat*)0x0)->GetClass();
      L1AnalysiscLcLL1AnalysisRecoRpcHitDataFormat_TClassManip(theClass);
   return theClass;
   }

   static void L1AnalysiscLcLL1AnalysisRecoRpcHitDataFormat_TClassManip(TClass* ){
   }

} // end of namespace ROOT

namespace ROOT {
   static TClass *L1AnalysiscLcLL1AnalysisRecoJetDataFormat_Dictionary();
   static void L1AnalysiscLcLL1AnalysisRecoJetDataFormat_TClassManip(TClass*);
   static void *new_L1AnalysiscLcLL1AnalysisRecoJetDataFormat(void *p = 0);
   static void *newArray_L1AnalysiscLcLL1AnalysisRecoJetDataFormat(Long_t size, void *p);
   static void delete_L1AnalysiscLcLL1AnalysisRecoJetDataFormat(void *p);
   static void deleteArray_L1AnalysiscLcLL1AnalysisRecoJetDataFormat(void *p);
   static void destruct_L1AnalysiscLcLL1AnalysisRecoJetDataFormat(void *p);

   // Function generating the singleton type initializer
   static TGenericClassInfo *GenerateInitInstanceLocal(const ::L1Analysis::L1AnalysisRecoJetDataFormat*)
   {
      ::L1Analysis::L1AnalysisRecoJetDataFormat *ptr = 0;
      static ::TVirtualIsAProxy* isa_proxy = new ::TIsAProxy(typeid(::L1Analysis::L1AnalysisRecoJetDataFormat));
      static ::ROOT::TGenericClassInfo 
         instance("L1Analysis::L1AnalysisRecoJetDataFormat", "L1Trigger/L1TNtuples/interface/L1AnalysisRecoJetDataFormat.h", 15,
                  typeid(::L1Analysis::L1AnalysisRecoJetDataFormat), ::ROOT::Internal::DefineBehavior(ptr, ptr),
                  &L1AnalysiscLcLL1AnalysisRecoJetDataFormat_Dictionary, isa_proxy, 0,
                  sizeof(::L1Analysis::L1AnalysisRecoJetDataFormat) );
      instance.SetNew(&new_L1AnalysiscLcLL1AnalysisRecoJetDataFormat);
      instance.SetNewArray(&newArray_L1AnalysiscLcLL1AnalysisRecoJetDataFormat);
      instance.SetDelete(&delete_L1AnalysiscLcLL1AnalysisRecoJetDataFormat);
      instance.SetDeleteArray(&deleteArray_L1AnalysiscLcLL1AnalysisRecoJetDataFormat);
      instance.SetDestructor(&destruct_L1AnalysiscLcLL1AnalysisRecoJetDataFormat);
      return &instance;
   }
   TGenericClassInfo *GenerateInitInstance(const ::L1Analysis::L1AnalysisRecoJetDataFormat*)
   {
      return GenerateInitInstanceLocal((::L1Analysis::L1AnalysisRecoJetDataFormat*)0);
   }
   // Static variable to force the class initialization
   static ::ROOT::TGenericClassInfo *_R__UNIQUE_(Init) = GenerateInitInstanceLocal((const ::L1Analysis::L1AnalysisRecoJetDataFormat*)0x0); R__UseDummy(_R__UNIQUE_(Init));

   // Dictionary for non-ClassDef classes
   static TClass *L1AnalysiscLcLL1AnalysisRecoJetDataFormat_Dictionary() {
      TClass* theClass =::ROOT::GenerateInitInstanceLocal((const ::L1Analysis::L1AnalysisRecoJetDataFormat*)0x0)->GetClass();
      L1AnalysiscLcLL1AnalysisRecoJetDataFormat_TClassManip(theClass);
   return theClass;
   }

   static void L1AnalysiscLcLL1AnalysisRecoJetDataFormat_TClassManip(TClass* ){
   }

} // end of namespace ROOT

namespace ROOT {
   static TClass *L1AnalysiscLcLL1AnalysisRecoMetFilterDataFormat_Dictionary();
   static void L1AnalysiscLcLL1AnalysisRecoMetFilterDataFormat_TClassManip(TClass*);
   static void *new_L1AnalysiscLcLL1AnalysisRecoMetFilterDataFormat(void *p = 0);
   static void *newArray_L1AnalysiscLcLL1AnalysisRecoMetFilterDataFormat(Long_t size, void *p);
   static void delete_L1AnalysiscLcLL1AnalysisRecoMetFilterDataFormat(void *p);
   static void deleteArray_L1AnalysiscLcLL1AnalysisRecoMetFilterDataFormat(void *p);
   static void destruct_L1AnalysiscLcLL1AnalysisRecoMetFilterDataFormat(void *p);

   // Function generating the singleton type initializer
   static TGenericClassInfo *GenerateInitInstanceLocal(const ::L1Analysis::L1AnalysisRecoMetFilterDataFormat*)
   {
      ::L1Analysis::L1AnalysisRecoMetFilterDataFormat *ptr = 0;
      static ::TVirtualIsAProxy* isa_proxy = new ::TIsAProxy(typeid(::L1Analysis::L1AnalysisRecoMetFilterDataFormat));
      static ::ROOT::TGenericClassInfo 
         instance("L1Analysis::L1AnalysisRecoMetFilterDataFormat", "L1Trigger/L1TNtuples/interface/L1AnalysisRecoMetFilterDataFormat.h", 15,
                  typeid(::L1Analysis::L1AnalysisRecoMetFilterDataFormat), ::ROOT::Internal::DefineBehavior(ptr, ptr),
                  &L1AnalysiscLcLL1AnalysisRecoMetFilterDataFormat_Dictionary, isa_proxy, 0,
                  sizeof(::L1Analysis::L1AnalysisRecoMetFilterDataFormat) );
      instance.SetNew(&new_L1AnalysiscLcLL1AnalysisRecoMetFilterDataFormat);
      instance.SetNewArray(&newArray_L1AnalysiscLcLL1AnalysisRecoMetFilterDataFormat);
      instance.SetDelete(&delete_L1AnalysiscLcLL1AnalysisRecoMetFilterDataFormat);
      instance.SetDeleteArray(&deleteArray_L1AnalysiscLcLL1AnalysisRecoMetFilterDataFormat);
      instance.SetDestructor(&destruct_L1AnalysiscLcLL1AnalysisRecoMetFilterDataFormat);
      return &instance;
   }
   TGenericClassInfo *GenerateInitInstance(const ::L1Analysis::L1AnalysisRecoMetFilterDataFormat*)
   {
      return GenerateInitInstanceLocal((::L1Analysis::L1AnalysisRecoMetFilterDataFormat*)0);
   }
   // Static variable to force the class initialization
   static ::ROOT::TGenericClassInfo *_R__UNIQUE_(Init) = GenerateInitInstanceLocal((const ::L1Analysis::L1AnalysisRecoMetFilterDataFormat*)0x0); R__UseDummy(_R__UNIQUE_(Init));

   // Dictionary for non-ClassDef classes
   static TClass *L1AnalysiscLcLL1AnalysisRecoMetFilterDataFormat_Dictionary() {
      TClass* theClass =::ROOT::GenerateInitInstanceLocal((const ::L1Analysis::L1AnalysisRecoMetFilterDataFormat*)0x0)->GetClass();
      L1AnalysiscLcLL1AnalysisRecoMetFilterDataFormat_TClassManip(theClass);
   return theClass;
   }

   static void L1AnalysiscLcLL1AnalysisRecoMetFilterDataFormat_TClassManip(TClass* ){
   }

} // end of namespace ROOT

namespace ROOT {
   static TClass *L1AnalysiscLcLL1AnalysisRecoMetDataFormat_Dictionary();
   static void L1AnalysiscLcLL1AnalysisRecoMetDataFormat_TClassManip(TClass*);
   static void *new_L1AnalysiscLcLL1AnalysisRecoMetDataFormat(void *p = 0);
   static void *newArray_L1AnalysiscLcLL1AnalysisRecoMetDataFormat(Long_t size, void *p);
   static void delete_L1AnalysiscLcLL1AnalysisRecoMetDataFormat(void *p);
   static void deleteArray_L1AnalysiscLcLL1AnalysisRecoMetDataFormat(void *p);
   static void destruct_L1AnalysiscLcLL1AnalysisRecoMetDataFormat(void *p);

   // Function generating the singleton type initializer
   static TGenericClassInfo *GenerateInitInstanceLocal(const ::L1Analysis::L1AnalysisRecoMetDataFormat*)
   {
      ::L1Analysis::L1AnalysisRecoMetDataFormat *ptr = 0;
      static ::TVirtualIsAProxy* isa_proxy = new ::TIsAProxy(typeid(::L1Analysis::L1AnalysisRecoMetDataFormat));
      static ::ROOT::TGenericClassInfo 
         instance("L1Analysis::L1AnalysisRecoMetDataFormat", "L1Trigger/L1TNtuples/interface/L1AnalysisRecoMetDataFormat.h", 15,
                  typeid(::L1Analysis::L1AnalysisRecoMetDataFormat), ::ROOT::Internal::DefineBehavior(ptr, ptr),
                  &L1AnalysiscLcLL1AnalysisRecoMetDataFormat_Dictionary, isa_proxy, 0,
                  sizeof(::L1Analysis::L1AnalysisRecoMetDataFormat) );
      instance.SetNew(&new_L1AnalysiscLcLL1AnalysisRecoMetDataFormat);
      instance.SetNewArray(&newArray_L1AnalysiscLcLL1AnalysisRecoMetDataFormat);
      instance.SetDelete(&delete_L1AnalysiscLcLL1AnalysisRecoMetDataFormat);
      instance.SetDeleteArray(&deleteArray_L1AnalysiscLcLL1AnalysisRecoMetDataFormat);
      instance.SetDestructor(&destruct_L1AnalysiscLcLL1AnalysisRecoMetDataFormat);
      return &instance;
   }
   TGenericClassInfo *GenerateInitInstance(const ::L1Analysis::L1AnalysisRecoMetDataFormat*)
   {
      return GenerateInitInstanceLocal((::L1Analysis::L1AnalysisRecoMetDataFormat*)0);
   }
   // Static variable to force the class initialization
   static ::ROOT::TGenericClassInfo *_R__UNIQUE_(Init) = GenerateInitInstanceLocal((const ::L1Analysis::L1AnalysisRecoMetDataFormat*)0x0); R__UseDummy(_R__UNIQUE_(Init));

   // Dictionary for non-ClassDef classes
   static TClass *L1AnalysiscLcLL1AnalysisRecoMetDataFormat_Dictionary() {
      TClass* theClass =::ROOT::GenerateInitInstanceLocal((const ::L1Analysis::L1AnalysisRecoMetDataFormat*)0x0)->GetClass();
      L1AnalysiscLcLL1AnalysisRecoMetDataFormat_TClassManip(theClass);
   return theClass;
   }

   static void L1AnalysiscLcLL1AnalysisRecoMetDataFormat_TClassManip(TClass* ){
   }

} // end of namespace ROOT

namespace ROOT {
   static TClass *L1AnalysiscLcLL1AnalysisRecoClusterDataFormat_Dictionary();
   static void L1AnalysiscLcLL1AnalysisRecoClusterDataFormat_TClassManip(TClass*);
   static void *new_L1AnalysiscLcLL1AnalysisRecoClusterDataFormat(void *p = 0);
   static void *newArray_L1AnalysiscLcLL1AnalysisRecoClusterDataFormat(Long_t size, void *p);
   static void delete_L1AnalysiscLcLL1AnalysisRecoClusterDataFormat(void *p);
   static void deleteArray_L1AnalysiscLcLL1AnalysisRecoClusterDataFormat(void *p);
   static void destruct_L1AnalysiscLcLL1AnalysisRecoClusterDataFormat(void *p);

   // Function generating the singleton type initializer
   static TGenericClassInfo *GenerateInitInstanceLocal(const ::L1Analysis::L1AnalysisRecoClusterDataFormat*)
   {
      ::L1Analysis::L1AnalysisRecoClusterDataFormat *ptr = 0;
      static ::TVirtualIsAProxy* isa_proxy = new ::TIsAProxy(typeid(::L1Analysis::L1AnalysisRecoClusterDataFormat));
      static ::ROOT::TGenericClassInfo 
         instance("L1Analysis::L1AnalysisRecoClusterDataFormat", "L1Trigger/L1TNtuples/interface/L1AnalysisRecoClusterDataFormat.h", 15,
                  typeid(::L1Analysis::L1AnalysisRecoClusterDataFormat), ::ROOT::Internal::DefineBehavior(ptr, ptr),
                  &L1AnalysiscLcLL1AnalysisRecoClusterDataFormat_Dictionary, isa_proxy, 0,
                  sizeof(::L1Analysis::L1AnalysisRecoClusterDataFormat) );
      instance.SetNew(&new_L1AnalysiscLcLL1AnalysisRecoClusterDataFormat);
      instance.SetNewArray(&newArray_L1AnalysiscLcLL1AnalysisRecoClusterDataFormat);
      instance.SetDelete(&delete_L1AnalysiscLcLL1AnalysisRecoClusterDataFormat);
      instance.SetDeleteArray(&deleteArray_L1AnalysiscLcLL1AnalysisRecoClusterDataFormat);
      instance.SetDestructor(&destruct_L1AnalysiscLcLL1AnalysisRecoClusterDataFormat);
      return &instance;
   }
   TGenericClassInfo *GenerateInitInstance(const ::L1Analysis::L1AnalysisRecoClusterDataFormat*)
   {
      return GenerateInitInstanceLocal((::L1Analysis::L1AnalysisRecoClusterDataFormat*)0);
   }
   // Static variable to force the class initialization
   static ::ROOT::TGenericClassInfo *_R__UNIQUE_(Init) = GenerateInitInstanceLocal((const ::L1Analysis::L1AnalysisRecoClusterDataFormat*)0x0); R__UseDummy(_R__UNIQUE_(Init));

   // Dictionary for non-ClassDef classes
   static TClass *L1AnalysiscLcLL1AnalysisRecoClusterDataFormat_Dictionary() {
      TClass* theClass =::ROOT::GenerateInitInstanceLocal((const ::L1Analysis::L1AnalysisRecoClusterDataFormat*)0x0)->GetClass();
      L1AnalysiscLcLL1AnalysisRecoClusterDataFormat_TClassManip(theClass);
   return theClass;
   }

   static void L1AnalysiscLcLL1AnalysisRecoClusterDataFormat_TClassManip(TClass* ){
   }

} // end of namespace ROOT

namespace ROOT {
   static TClass *L1AnalysiscLcLL1AnalysisRecoVertexDataFormat_Dictionary();
   static void L1AnalysiscLcLL1AnalysisRecoVertexDataFormat_TClassManip(TClass*);
   static void *new_L1AnalysiscLcLL1AnalysisRecoVertexDataFormat(void *p = 0);
   static void *newArray_L1AnalysiscLcLL1AnalysisRecoVertexDataFormat(Long_t size, void *p);
   static void delete_L1AnalysiscLcLL1AnalysisRecoVertexDataFormat(void *p);
   static void deleteArray_L1AnalysiscLcLL1AnalysisRecoVertexDataFormat(void *p);
   static void destruct_L1AnalysiscLcLL1AnalysisRecoVertexDataFormat(void *p);

   // Function generating the singleton type initializer
   static TGenericClassInfo *GenerateInitInstanceLocal(const ::L1Analysis::L1AnalysisRecoVertexDataFormat*)
   {
      ::L1Analysis::L1AnalysisRecoVertexDataFormat *ptr = 0;
      static ::TVirtualIsAProxy* isa_proxy = new ::TIsAProxy(typeid(::L1Analysis::L1AnalysisRecoVertexDataFormat));
      static ::ROOT::TGenericClassInfo 
         instance("L1Analysis::L1AnalysisRecoVertexDataFormat", "L1Trigger/L1TNtuples/interface/L1AnalysisRecoVertexDataFormat.h", 15,
                  typeid(::L1Analysis::L1AnalysisRecoVertexDataFormat), ::ROOT::Internal::DefineBehavior(ptr, ptr),
                  &L1AnalysiscLcLL1AnalysisRecoVertexDataFormat_Dictionary, isa_proxy, 0,
                  sizeof(::L1Analysis::L1AnalysisRecoVertexDataFormat) );
      instance.SetNew(&new_L1AnalysiscLcLL1AnalysisRecoVertexDataFormat);
      instance.SetNewArray(&newArray_L1AnalysiscLcLL1AnalysisRecoVertexDataFormat);
      instance.SetDelete(&delete_L1AnalysiscLcLL1AnalysisRecoVertexDataFormat);
      instance.SetDeleteArray(&deleteArray_L1AnalysiscLcLL1AnalysisRecoVertexDataFormat);
      instance.SetDestructor(&destruct_L1AnalysiscLcLL1AnalysisRecoVertexDataFormat);
      return &instance;
   }
   TGenericClassInfo *GenerateInitInstance(const ::L1Analysis::L1AnalysisRecoVertexDataFormat*)
   {
      return GenerateInitInstanceLocal((::L1Analysis::L1AnalysisRecoVertexDataFormat*)0);
   }
   // Static variable to force the class initialization
   static ::ROOT::TGenericClassInfo *_R__UNIQUE_(Init) = GenerateInitInstanceLocal((const ::L1Analysis::L1AnalysisRecoVertexDataFormat*)0x0); R__UseDummy(_R__UNIQUE_(Init));

   // Dictionary for non-ClassDef classes
   static TClass *L1AnalysiscLcLL1AnalysisRecoVertexDataFormat_Dictionary() {
      TClass* theClass =::ROOT::GenerateInitInstanceLocal((const ::L1Analysis::L1AnalysisRecoVertexDataFormat*)0x0)->GetClass();
      L1AnalysiscLcLL1AnalysisRecoVertexDataFormat_TClassManip(theClass);
   return theClass;
   }

   static void L1AnalysiscLcLL1AnalysisRecoVertexDataFormat_TClassManip(TClass* ){
   }

} // end of namespace ROOT

namespace ROOT {
   static TClass *L1AnalysiscLcLL1AnalysisRecoTrackDataFormat_Dictionary();
   static void L1AnalysiscLcLL1AnalysisRecoTrackDataFormat_TClassManip(TClass*);
   static void *new_L1AnalysiscLcLL1AnalysisRecoTrackDataFormat(void *p = 0);
   static void *newArray_L1AnalysiscLcLL1AnalysisRecoTrackDataFormat(Long_t size, void *p);
   static void delete_L1AnalysiscLcLL1AnalysisRecoTrackDataFormat(void *p);
   static void deleteArray_L1AnalysiscLcLL1AnalysisRecoTrackDataFormat(void *p);
   static void destruct_L1AnalysiscLcLL1AnalysisRecoTrackDataFormat(void *p);

   // Function generating the singleton type initializer
   static TGenericClassInfo *GenerateInitInstanceLocal(const ::L1Analysis::L1AnalysisRecoTrackDataFormat*)
   {
      ::L1Analysis::L1AnalysisRecoTrackDataFormat *ptr = 0;
      static ::TVirtualIsAProxy* isa_proxy = new ::TIsAProxy(typeid(::L1Analysis::L1AnalysisRecoTrackDataFormat));
      static ::ROOT::TGenericClassInfo 
         instance("L1Analysis::L1AnalysisRecoTrackDataFormat", "L1Trigger/L1TNtuples/interface/L1AnalysisRecoTrackDataFormat.h", 15,
                  typeid(::L1Analysis::L1AnalysisRecoTrackDataFormat), ::ROOT::Internal::DefineBehavior(ptr, ptr),
                  &L1AnalysiscLcLL1AnalysisRecoTrackDataFormat_Dictionary, isa_proxy, 0,
                  sizeof(::L1Analysis::L1AnalysisRecoTrackDataFormat) );
      instance.SetNew(&new_L1AnalysiscLcLL1AnalysisRecoTrackDataFormat);
      instance.SetNewArray(&newArray_L1AnalysiscLcLL1AnalysisRecoTrackDataFormat);
      instance.SetDelete(&delete_L1AnalysiscLcLL1AnalysisRecoTrackDataFormat);
      instance.SetDeleteArray(&deleteArray_L1AnalysiscLcLL1AnalysisRecoTrackDataFormat);
      instance.SetDestructor(&destruct_L1AnalysiscLcLL1AnalysisRecoTrackDataFormat);
      return &instance;
   }
   TGenericClassInfo *GenerateInitInstance(const ::L1Analysis::L1AnalysisRecoTrackDataFormat*)
   {
      return GenerateInitInstanceLocal((::L1Analysis::L1AnalysisRecoTrackDataFormat*)0);
   }
   // Static variable to force the class initialization
   static ::ROOT::TGenericClassInfo *_R__UNIQUE_(Init) = GenerateInitInstanceLocal((const ::L1Analysis::L1AnalysisRecoTrackDataFormat*)0x0); R__UseDummy(_R__UNIQUE_(Init));

   // Dictionary for non-ClassDef classes
   static TClass *L1AnalysiscLcLL1AnalysisRecoTrackDataFormat_Dictionary() {
      TClass* theClass =::ROOT::GenerateInitInstanceLocal((const ::L1Analysis::L1AnalysisRecoTrackDataFormat*)0x0)->GetClass();
      L1AnalysiscLcLL1AnalysisRecoTrackDataFormat_TClassManip(theClass);
   return theClass;
   }

   static void L1AnalysiscLcLL1AnalysisRecoTrackDataFormat_TClassManip(TClass* ){
   }

} // end of namespace ROOT

namespace ROOT {
   static TClass *L1AnalysiscLcLL1AnalysisL1MenuDataFormat_Dictionary();
   static void L1AnalysiscLcLL1AnalysisL1MenuDataFormat_TClassManip(TClass*);
   static void *new_L1AnalysiscLcLL1AnalysisL1MenuDataFormat(void *p = 0);
   static void *newArray_L1AnalysiscLcLL1AnalysisL1MenuDataFormat(Long_t size, void *p);
   static void delete_L1AnalysiscLcLL1AnalysisL1MenuDataFormat(void *p);
   static void deleteArray_L1AnalysiscLcLL1AnalysisL1MenuDataFormat(void *p);
   static void destruct_L1AnalysiscLcLL1AnalysisL1MenuDataFormat(void *p);

   // Function generating the singleton type initializer
   static TGenericClassInfo *GenerateInitInstanceLocal(const ::L1Analysis::L1AnalysisL1MenuDataFormat*)
   {
      ::L1Analysis::L1AnalysisL1MenuDataFormat *ptr = 0;
      static ::TVirtualIsAProxy* isa_proxy = new ::TIsAProxy(typeid(::L1Analysis::L1AnalysisL1MenuDataFormat));
      static ::ROOT::TGenericClassInfo 
         instance("L1Analysis::L1AnalysisL1MenuDataFormat", "L1Trigger/L1TNtuples/interface/L1AnalysisL1MenuDataFormat.h", 8,
                  typeid(::L1Analysis::L1AnalysisL1MenuDataFormat), ::ROOT::Internal::DefineBehavior(ptr, ptr),
                  &L1AnalysiscLcLL1AnalysisL1MenuDataFormat_Dictionary, isa_proxy, 0,
                  sizeof(::L1Analysis::L1AnalysisL1MenuDataFormat) );
      instance.SetNew(&new_L1AnalysiscLcLL1AnalysisL1MenuDataFormat);
      instance.SetNewArray(&newArray_L1AnalysiscLcLL1AnalysisL1MenuDataFormat);
      instance.SetDelete(&delete_L1AnalysiscLcLL1AnalysisL1MenuDataFormat);
      instance.SetDeleteArray(&deleteArray_L1AnalysiscLcLL1AnalysisL1MenuDataFormat);
      instance.SetDestructor(&destruct_L1AnalysiscLcLL1AnalysisL1MenuDataFormat);
      return &instance;
   }
   TGenericClassInfo *GenerateInitInstance(const ::L1Analysis::L1AnalysisL1MenuDataFormat*)
   {
      return GenerateInitInstanceLocal((::L1Analysis::L1AnalysisL1MenuDataFormat*)0);
   }
   // Static variable to force the class initialization
   static ::ROOT::TGenericClassInfo *_R__UNIQUE_(Init) = GenerateInitInstanceLocal((const ::L1Analysis::L1AnalysisL1MenuDataFormat*)0x0); R__UseDummy(_R__UNIQUE_(Init));

   // Dictionary for non-ClassDef classes
   static TClass *L1AnalysiscLcLL1AnalysisL1MenuDataFormat_Dictionary() {
      TClass* theClass =::ROOT::GenerateInitInstanceLocal((const ::L1Analysis::L1AnalysisL1MenuDataFormat*)0x0)->GetClass();
      L1AnalysiscLcLL1AnalysisL1MenuDataFormat_TClassManip(theClass);
   return theClass;
   }

   static void L1AnalysiscLcLL1AnalysisL1MenuDataFormat_TClassManip(TClass* ){
   }

} // end of namespace ROOT

namespace ROOT {
   static TClass *L1AnalysiscLcLL1AnalysisL1UpgradeDataFormat_Dictionary();
   static void L1AnalysiscLcLL1AnalysisL1UpgradeDataFormat_TClassManip(TClass*);
   static void *new_L1AnalysiscLcLL1AnalysisL1UpgradeDataFormat(void *p = 0);
   static void *newArray_L1AnalysiscLcLL1AnalysisL1UpgradeDataFormat(Long_t size, void *p);
   static void delete_L1AnalysiscLcLL1AnalysisL1UpgradeDataFormat(void *p);
   static void deleteArray_L1AnalysiscLcLL1AnalysisL1UpgradeDataFormat(void *p);
   static void destruct_L1AnalysiscLcLL1AnalysisL1UpgradeDataFormat(void *p);

   // Function generating the singleton type initializer
   static TGenericClassInfo *GenerateInitInstanceLocal(const ::L1Analysis::L1AnalysisL1UpgradeDataFormat*)
   {
      ::L1Analysis::L1AnalysisL1UpgradeDataFormat *ptr = 0;
      static ::TVirtualIsAProxy* isa_proxy = new ::TIsAProxy(typeid(::L1Analysis::L1AnalysisL1UpgradeDataFormat));
      static ::ROOT::TGenericClassInfo 
         instance("L1Analysis::L1AnalysisL1UpgradeDataFormat", "L1Trigger/L1TNtuples/interface/L1AnalysisL1UpgradeDataFormat.h", 29,
                  typeid(::L1Analysis::L1AnalysisL1UpgradeDataFormat), ::ROOT::Internal::DefineBehavior(ptr, ptr),
                  &L1AnalysiscLcLL1AnalysisL1UpgradeDataFormat_Dictionary, isa_proxy, 0,
                  sizeof(::L1Analysis::L1AnalysisL1UpgradeDataFormat) );
      instance.SetNew(&new_L1AnalysiscLcLL1AnalysisL1UpgradeDataFormat);
      instance.SetNewArray(&newArray_L1AnalysiscLcLL1AnalysisL1UpgradeDataFormat);
      instance.SetDelete(&delete_L1AnalysiscLcLL1AnalysisL1UpgradeDataFormat);
      instance.SetDeleteArray(&deleteArray_L1AnalysiscLcLL1AnalysisL1UpgradeDataFormat);
      instance.SetDestructor(&destruct_L1AnalysiscLcLL1AnalysisL1UpgradeDataFormat);
      return &instance;
   }
   TGenericClassInfo *GenerateInitInstance(const ::L1Analysis::L1AnalysisL1UpgradeDataFormat*)
   {
      return GenerateInitInstanceLocal((::L1Analysis::L1AnalysisL1UpgradeDataFormat*)0);
   }
   // Static variable to force the class initialization
   static ::ROOT::TGenericClassInfo *_R__UNIQUE_(Init) = GenerateInitInstanceLocal((const ::L1Analysis::L1AnalysisL1UpgradeDataFormat*)0x0); R__UseDummy(_R__UNIQUE_(Init));

   // Dictionary for non-ClassDef classes
   static TClass *L1AnalysiscLcLL1AnalysisL1UpgradeDataFormat_Dictionary() {
      TClass* theClass =::ROOT::GenerateInitInstanceLocal((const ::L1Analysis::L1AnalysisL1UpgradeDataFormat*)0x0)->GetClass();
      L1AnalysiscLcLL1AnalysisL1UpgradeDataFormat_TClassManip(theClass);
   return theClass;
   }

   static void L1AnalysiscLcLL1AnalysisL1UpgradeDataFormat_TClassManip(TClass* ){
   }

} // end of namespace ROOT

namespace ROOT {
   static TClass *L1AnalysiscLcLL1AnalysisL1CaloTowerDataFormat_Dictionary();
   static void L1AnalysiscLcLL1AnalysisL1CaloTowerDataFormat_TClassManip(TClass*);
   static void *new_L1AnalysiscLcLL1AnalysisL1CaloTowerDataFormat(void *p = 0);
   static void *newArray_L1AnalysiscLcLL1AnalysisL1CaloTowerDataFormat(Long_t size, void *p);
   static void delete_L1AnalysiscLcLL1AnalysisL1CaloTowerDataFormat(void *p);
   static void deleteArray_L1AnalysiscLcLL1AnalysisL1CaloTowerDataFormat(void *p);
   static void destruct_L1AnalysiscLcLL1AnalysisL1CaloTowerDataFormat(void *p);

   // Function generating the singleton type initializer
   static TGenericClassInfo *GenerateInitInstanceLocal(const ::L1Analysis::L1AnalysisL1CaloTowerDataFormat*)
   {
      ::L1Analysis::L1AnalysisL1CaloTowerDataFormat *ptr = 0;
      static ::TVirtualIsAProxy* isa_proxy = new ::TIsAProxy(typeid(::L1Analysis::L1AnalysisL1CaloTowerDataFormat));
      static ::ROOT::TGenericClassInfo 
         instance("L1Analysis::L1AnalysisL1CaloTowerDataFormat", "L1Trigger/L1TNtuples/interface/L1AnalysisL1CaloTowerDataFormat.h", 15,
                  typeid(::L1Analysis::L1AnalysisL1CaloTowerDataFormat), ::ROOT::Internal::DefineBehavior(ptr, ptr),
                  &L1AnalysiscLcLL1AnalysisL1CaloTowerDataFormat_Dictionary, isa_proxy, 0,
                  sizeof(::L1Analysis::L1AnalysisL1CaloTowerDataFormat) );
      instance.SetNew(&new_L1AnalysiscLcLL1AnalysisL1CaloTowerDataFormat);
      instance.SetNewArray(&newArray_L1AnalysiscLcLL1AnalysisL1CaloTowerDataFormat);
      instance.SetDelete(&delete_L1AnalysiscLcLL1AnalysisL1CaloTowerDataFormat);
      instance.SetDeleteArray(&deleteArray_L1AnalysiscLcLL1AnalysisL1CaloTowerDataFormat);
      instance.SetDestructor(&destruct_L1AnalysiscLcLL1AnalysisL1CaloTowerDataFormat);
      return &instance;
   }
   TGenericClassInfo *GenerateInitInstance(const ::L1Analysis::L1AnalysisL1CaloTowerDataFormat*)
   {
      return GenerateInitInstanceLocal((::L1Analysis::L1AnalysisL1CaloTowerDataFormat*)0);
   }
   // Static variable to force the class initialization
   static ::ROOT::TGenericClassInfo *_R__UNIQUE_(Init) = GenerateInitInstanceLocal((const ::L1Analysis::L1AnalysisL1CaloTowerDataFormat*)0x0); R__UseDummy(_R__UNIQUE_(Init));

   // Dictionary for non-ClassDef classes
   static TClass *L1AnalysiscLcLL1AnalysisL1CaloTowerDataFormat_Dictionary() {
      TClass* theClass =::ROOT::GenerateInitInstanceLocal((const ::L1Analysis::L1AnalysisL1CaloTowerDataFormat*)0x0)->GetClass();
      L1AnalysiscLcLL1AnalysisL1CaloTowerDataFormat_TClassManip(theClass);
   return theClass;
   }

   static void L1AnalysiscLcLL1AnalysisL1CaloTowerDataFormat_TClassManip(TClass* ){
   }

} // end of namespace ROOT

namespace ROOT {
   static TClass *L1AnalysiscLcLL1AnalysisL1CaloClusterDataFormat_Dictionary();
   static void L1AnalysiscLcLL1AnalysisL1CaloClusterDataFormat_TClassManip(TClass*);
   static void *new_L1AnalysiscLcLL1AnalysisL1CaloClusterDataFormat(void *p = 0);
   static void *newArray_L1AnalysiscLcLL1AnalysisL1CaloClusterDataFormat(Long_t size, void *p);
   static void delete_L1AnalysiscLcLL1AnalysisL1CaloClusterDataFormat(void *p);
   static void deleteArray_L1AnalysiscLcLL1AnalysisL1CaloClusterDataFormat(void *p);
   static void destruct_L1AnalysiscLcLL1AnalysisL1CaloClusterDataFormat(void *p);

   // Function generating the singleton type initializer
   static TGenericClassInfo *GenerateInitInstanceLocal(const ::L1Analysis::L1AnalysisL1CaloClusterDataFormat*)
   {
      ::L1Analysis::L1AnalysisL1CaloClusterDataFormat *ptr = 0;
      static ::TVirtualIsAProxy* isa_proxy = new ::TIsAProxy(typeid(::L1Analysis::L1AnalysisL1CaloClusterDataFormat));
      static ::ROOT::TGenericClassInfo 
         instance("L1Analysis::L1AnalysisL1CaloClusterDataFormat", "L1Trigger/L1TNtuples/interface/L1AnalysisL1CaloClusterDataFormat.h", 15,
                  typeid(::L1Analysis::L1AnalysisL1CaloClusterDataFormat), ::ROOT::Internal::DefineBehavior(ptr, ptr),
                  &L1AnalysiscLcLL1AnalysisL1CaloClusterDataFormat_Dictionary, isa_proxy, 0,
                  sizeof(::L1Analysis::L1AnalysisL1CaloClusterDataFormat) );
      instance.SetNew(&new_L1AnalysiscLcLL1AnalysisL1CaloClusterDataFormat);
      instance.SetNewArray(&newArray_L1AnalysiscLcLL1AnalysisL1CaloClusterDataFormat);
      instance.SetDelete(&delete_L1AnalysiscLcLL1AnalysisL1CaloClusterDataFormat);
      instance.SetDeleteArray(&deleteArray_L1AnalysiscLcLL1AnalysisL1CaloClusterDataFormat);
      instance.SetDestructor(&destruct_L1AnalysiscLcLL1AnalysisL1CaloClusterDataFormat);
      return &instance;
   }
   TGenericClassInfo *GenerateInitInstance(const ::L1Analysis::L1AnalysisL1CaloClusterDataFormat*)
   {
      return GenerateInitInstanceLocal((::L1Analysis::L1AnalysisL1CaloClusterDataFormat*)0);
   }
   // Static variable to force the class initialization
   static ::ROOT::TGenericClassInfo *_R__UNIQUE_(Init) = GenerateInitInstanceLocal((const ::L1Analysis::L1AnalysisL1CaloClusterDataFormat*)0x0); R__UseDummy(_R__UNIQUE_(Init));

   // Dictionary for non-ClassDef classes
   static TClass *L1AnalysiscLcLL1AnalysisL1CaloClusterDataFormat_Dictionary() {
      TClass* theClass =::ROOT::GenerateInitInstanceLocal((const ::L1Analysis::L1AnalysisL1CaloClusterDataFormat*)0x0)->GetClass();
      L1AnalysiscLcLL1AnalysisL1CaloClusterDataFormat_TClassManip(theClass);
   return theClass;
   }

   static void L1AnalysiscLcLL1AnalysisL1CaloClusterDataFormat_TClassManip(TClass* ){
   }

} // end of namespace ROOT

namespace ROOT {
   static TClass *L1AnalysiscLcLL1AnalysisRecoTauDataFormat_Dictionary();
   static void L1AnalysiscLcLL1AnalysisRecoTauDataFormat_TClassManip(TClass*);
   static void *new_L1AnalysiscLcLL1AnalysisRecoTauDataFormat(void *p = 0);
   static void *newArray_L1AnalysiscLcLL1AnalysisRecoTauDataFormat(Long_t size, void *p);
   static void delete_L1AnalysiscLcLL1AnalysisRecoTauDataFormat(void *p);
   static void deleteArray_L1AnalysiscLcLL1AnalysisRecoTauDataFormat(void *p);
   static void destruct_L1AnalysiscLcLL1AnalysisRecoTauDataFormat(void *p);

   // Function generating the singleton type initializer
   static TGenericClassInfo *GenerateInitInstanceLocal(const ::L1Analysis::L1AnalysisRecoTauDataFormat*)
   {
      ::L1Analysis::L1AnalysisRecoTauDataFormat *ptr = 0;
      static ::TVirtualIsAProxy* isa_proxy = new ::TIsAProxy(typeid(::L1Analysis::L1AnalysisRecoTauDataFormat));
      static ::ROOT::TGenericClassInfo 
         instance("L1Analysis::L1AnalysisRecoTauDataFormat", "L1Trigger/L1TNtuples/interface/L1AnalysisRecoTauDataFormat.h", 15,
                  typeid(::L1Analysis::L1AnalysisRecoTauDataFormat), ::ROOT::Internal::DefineBehavior(ptr, ptr),
                  &L1AnalysiscLcLL1AnalysisRecoTauDataFormat_Dictionary, isa_proxy, 0,
                  sizeof(::L1Analysis::L1AnalysisRecoTauDataFormat) );
      instance.SetNew(&new_L1AnalysiscLcLL1AnalysisRecoTauDataFormat);
      instance.SetNewArray(&newArray_L1AnalysiscLcLL1AnalysisRecoTauDataFormat);
      instance.SetDelete(&delete_L1AnalysiscLcLL1AnalysisRecoTauDataFormat);
      instance.SetDeleteArray(&deleteArray_L1AnalysiscLcLL1AnalysisRecoTauDataFormat);
      instance.SetDestructor(&destruct_L1AnalysiscLcLL1AnalysisRecoTauDataFormat);
      return &instance;
   }
   TGenericClassInfo *GenerateInitInstance(const ::L1Analysis::L1AnalysisRecoTauDataFormat*)
   {
      return GenerateInitInstanceLocal((::L1Analysis::L1AnalysisRecoTauDataFormat*)0);
   }
   // Static variable to force the class initialization
   static ::ROOT::TGenericClassInfo *_R__UNIQUE_(Init) = GenerateInitInstanceLocal((const ::L1Analysis::L1AnalysisRecoTauDataFormat*)0x0); R__UseDummy(_R__UNIQUE_(Init));

   // Dictionary for non-ClassDef classes
   static TClass *L1AnalysiscLcLL1AnalysisRecoTauDataFormat_Dictionary() {
      TClass* theClass =::ROOT::GenerateInitInstanceLocal((const ::L1Analysis::L1AnalysisRecoTauDataFormat*)0x0)->GetClass();
      L1AnalysiscLcLL1AnalysisRecoTauDataFormat_TClassManip(theClass);
   return theClass;
   }

   static void L1AnalysiscLcLL1AnalysisRecoTauDataFormat_TClassManip(TClass* ){
   }

} // end of namespace ROOT

namespace ROOT {
   static TClass *L1AnalysiscLcLL1AnalysisRecoMuon2DataFormat_Dictionary();
   static void L1AnalysiscLcLL1AnalysisRecoMuon2DataFormat_TClassManip(TClass*);
   static void *new_L1AnalysiscLcLL1AnalysisRecoMuon2DataFormat(void *p = 0);
   static void *newArray_L1AnalysiscLcLL1AnalysisRecoMuon2DataFormat(Long_t size, void *p);
   static void delete_L1AnalysiscLcLL1AnalysisRecoMuon2DataFormat(void *p);
   static void deleteArray_L1AnalysiscLcLL1AnalysisRecoMuon2DataFormat(void *p);
   static void destruct_L1AnalysiscLcLL1AnalysisRecoMuon2DataFormat(void *p);

   // Function generating the singleton type initializer
   static TGenericClassInfo *GenerateInitInstanceLocal(const ::L1Analysis::L1AnalysisRecoMuon2DataFormat*)
   {
      ::L1Analysis::L1AnalysisRecoMuon2DataFormat *ptr = 0;
      static ::TVirtualIsAProxy* isa_proxy = new ::TIsAProxy(typeid(::L1Analysis::L1AnalysisRecoMuon2DataFormat));
      static ::ROOT::TGenericClassInfo 
         instance("L1Analysis::L1AnalysisRecoMuon2DataFormat", "L1Trigger/L1TNtuples/interface/L1AnalysisRecoMuon2DataFormat.h", 15,
                  typeid(::L1Analysis::L1AnalysisRecoMuon2DataFormat), ::ROOT::Internal::DefineBehavior(ptr, ptr),
                  &L1AnalysiscLcLL1AnalysisRecoMuon2DataFormat_Dictionary, isa_proxy, 0,
                  sizeof(::L1Analysis::L1AnalysisRecoMuon2DataFormat) );
      instance.SetNew(&new_L1AnalysiscLcLL1AnalysisRecoMuon2DataFormat);
      instance.SetNewArray(&newArray_L1AnalysiscLcLL1AnalysisRecoMuon2DataFormat);
      instance.SetDelete(&delete_L1AnalysiscLcLL1AnalysisRecoMuon2DataFormat);
      instance.SetDeleteArray(&deleteArray_L1AnalysiscLcLL1AnalysisRecoMuon2DataFormat);
      instance.SetDestructor(&destruct_L1AnalysiscLcLL1AnalysisRecoMuon2DataFormat);
      return &instance;
   }
   TGenericClassInfo *GenerateInitInstance(const ::L1Analysis::L1AnalysisRecoMuon2DataFormat*)
   {
      return GenerateInitInstanceLocal((::L1Analysis::L1AnalysisRecoMuon2DataFormat*)0);
   }
   // Static variable to force the class initialization
   static ::ROOT::TGenericClassInfo *_R__UNIQUE_(Init) = GenerateInitInstanceLocal((const ::L1Analysis::L1AnalysisRecoMuon2DataFormat*)0x0); R__UseDummy(_R__UNIQUE_(Init));

   // Dictionary for non-ClassDef classes
   static TClass *L1AnalysiscLcLL1AnalysisRecoMuon2DataFormat_Dictionary() {
      TClass* theClass =::ROOT::GenerateInitInstanceLocal((const ::L1Analysis::L1AnalysisRecoMuon2DataFormat*)0x0)->GetClass();
      L1AnalysiscLcLL1AnalysisRecoMuon2DataFormat_TClassManip(theClass);
   return theClass;
   }

   static void L1AnalysiscLcLL1AnalysisRecoMuon2DataFormat_TClassManip(TClass* ){
   }

} // end of namespace ROOT

namespace ROOT {
   static TClass *L1AnalysiscLcLL1AnalysisRecoElectronDataFormat_Dictionary();
   static void L1AnalysiscLcLL1AnalysisRecoElectronDataFormat_TClassManip(TClass*);
   static void *new_L1AnalysiscLcLL1AnalysisRecoElectronDataFormat(void *p = 0);
   static void *newArray_L1AnalysiscLcLL1AnalysisRecoElectronDataFormat(Long_t size, void *p);
   static void delete_L1AnalysiscLcLL1AnalysisRecoElectronDataFormat(void *p);
   static void deleteArray_L1AnalysiscLcLL1AnalysisRecoElectronDataFormat(void *p);
   static void destruct_L1AnalysiscLcLL1AnalysisRecoElectronDataFormat(void *p);

   // Function generating the singleton type initializer
   static TGenericClassInfo *GenerateInitInstanceLocal(const ::L1Analysis::L1AnalysisRecoElectronDataFormat*)
   {
      ::L1Analysis::L1AnalysisRecoElectronDataFormat *ptr = 0;
      static ::TVirtualIsAProxy* isa_proxy = new ::TIsAProxy(typeid(::L1Analysis::L1AnalysisRecoElectronDataFormat));
      static ::ROOT::TGenericClassInfo 
         instance("L1Analysis::L1AnalysisRecoElectronDataFormat", "L1Trigger/L1TNtuples/interface/L1AnalysisRecoElectronDataFormat.h", 15,
                  typeid(::L1Analysis::L1AnalysisRecoElectronDataFormat), ::ROOT::Internal::DefineBehavior(ptr, ptr),
                  &L1AnalysiscLcLL1AnalysisRecoElectronDataFormat_Dictionary, isa_proxy, 0,
                  sizeof(::L1Analysis::L1AnalysisRecoElectronDataFormat) );
      instance.SetNew(&new_L1AnalysiscLcLL1AnalysisRecoElectronDataFormat);
      instance.SetNewArray(&newArray_L1AnalysiscLcLL1AnalysisRecoElectronDataFormat);
      instance.SetDelete(&delete_L1AnalysiscLcLL1AnalysisRecoElectronDataFormat);
      instance.SetDeleteArray(&deleteArray_L1AnalysiscLcLL1AnalysisRecoElectronDataFormat);
      instance.SetDestructor(&destruct_L1AnalysiscLcLL1AnalysisRecoElectronDataFormat);
      return &instance;
   }
   TGenericClassInfo *GenerateInitInstance(const ::L1Analysis::L1AnalysisRecoElectronDataFormat*)
   {
      return GenerateInitInstanceLocal((::L1Analysis::L1AnalysisRecoElectronDataFormat*)0);
   }
   // Static variable to force the class initialization
   static ::ROOT::TGenericClassInfo *_R__UNIQUE_(Init) = GenerateInitInstanceLocal((const ::L1Analysis::L1AnalysisRecoElectronDataFormat*)0x0); R__UseDummy(_R__UNIQUE_(Init));

   // Dictionary for non-ClassDef classes
   static TClass *L1AnalysiscLcLL1AnalysisRecoElectronDataFormat_Dictionary() {
      TClass* theClass =::ROOT::GenerateInitInstanceLocal((const ::L1Analysis::L1AnalysisRecoElectronDataFormat*)0x0)->GetClass();
      L1AnalysiscLcLL1AnalysisRecoElectronDataFormat_TClassManip(theClass);
   return theClass;
   }

   static void L1AnalysiscLcLL1AnalysisRecoElectronDataFormat_TClassManip(TClass* ){
   }

} // end of namespace ROOT

namespace ROOT {
   // Wrappers around operator new
   static void *new_L1AnalysiscLcLL1AnalysisEventDataFormat(void *p) {
      return  p ? ::new((::ROOT::Internal::TOperatorNewHelper*)p) ::L1Analysis::L1AnalysisEventDataFormat : new ::L1Analysis::L1AnalysisEventDataFormat;
   }
   static void *newArray_L1AnalysiscLcLL1AnalysisEventDataFormat(Long_t nElements, void *p) {
      return p ? ::new((::ROOT::Internal::TOperatorNewHelper*)p) ::L1Analysis::L1AnalysisEventDataFormat[nElements] : new ::L1Analysis::L1AnalysisEventDataFormat[nElements];
   }
   // Wrapper around operator delete
   static void delete_L1AnalysiscLcLL1AnalysisEventDataFormat(void *p) {
      delete ((::L1Analysis::L1AnalysisEventDataFormat*)p);
   }
   static void deleteArray_L1AnalysiscLcLL1AnalysisEventDataFormat(void *p) {
      delete [] ((::L1Analysis::L1AnalysisEventDataFormat*)p);
   }
   static void destruct_L1AnalysiscLcLL1AnalysisEventDataFormat(void *p) {
      typedef ::L1Analysis::L1AnalysisEventDataFormat current_t;
      ((current_t*)p)->~current_t();
   }
} // end of namespace ROOT for class ::L1Analysis::L1AnalysisEventDataFormat

namespace ROOT {
   // Wrappers around operator new
   static void *new_L1AnalysiscLcLL1AnalysisCSCTFDataFormat(void *p) {
      return  p ? ::new((::ROOT::Internal::TOperatorNewHelper*)p) ::L1Analysis::L1AnalysisCSCTFDataFormat : new ::L1Analysis::L1AnalysisCSCTFDataFormat;
   }
   static void *newArray_L1AnalysiscLcLL1AnalysisCSCTFDataFormat(Long_t nElements, void *p) {
      return p ? ::new((::ROOT::Internal::TOperatorNewHelper*)p) ::L1Analysis::L1AnalysisCSCTFDataFormat[nElements] : new ::L1Analysis::L1AnalysisCSCTFDataFormat[nElements];
   }
   // Wrapper around operator delete
   static void delete_L1AnalysiscLcLL1AnalysisCSCTFDataFormat(void *p) {
      delete ((::L1Analysis::L1AnalysisCSCTFDataFormat*)p);
   }
   static void deleteArray_L1AnalysiscLcLL1AnalysisCSCTFDataFormat(void *p) {
      delete [] ((::L1Analysis::L1AnalysisCSCTFDataFormat*)p);
   }
   static void destruct_L1AnalysiscLcLL1AnalysisCSCTFDataFormat(void *p) {
      typedef ::L1Analysis::L1AnalysisCSCTFDataFormat current_t;
      ((current_t*)p)->~current_t();
   }
} // end of namespace ROOT for class ::L1Analysis::L1AnalysisCSCTFDataFormat

namespace ROOT {
   // Wrappers around operator new
   static void *new_L1AnalysiscLcLL1AnalysisDTTFDataFormat(void *p) {
      return  p ? ::new((::ROOT::Internal::TOperatorNewHelper*)p) ::L1Analysis::L1AnalysisDTTFDataFormat : new ::L1Analysis::L1AnalysisDTTFDataFormat;
   }
   static void *newArray_L1AnalysiscLcLL1AnalysisDTTFDataFormat(Long_t nElements, void *p) {
      return p ? ::new((::ROOT::Internal::TOperatorNewHelper*)p) ::L1Analysis::L1AnalysisDTTFDataFormat[nElements] : new ::L1Analysis::L1AnalysisDTTFDataFormat[nElements];
   }
   // Wrapper around operator delete
   static void delete_L1AnalysiscLcLL1AnalysisDTTFDataFormat(void *p) {
      delete ((::L1Analysis::L1AnalysisDTTFDataFormat*)p);
   }
   static void deleteArray_L1AnalysiscLcLL1AnalysisDTTFDataFormat(void *p) {
      delete [] ((::L1Analysis::L1AnalysisDTTFDataFormat*)p);
   }
   static void destruct_L1AnalysiscLcLL1AnalysisDTTFDataFormat(void *p) {
      typedef ::L1Analysis::L1AnalysisDTTFDataFormat current_t;
      ((current_t*)p)->~current_t();
   }
} // end of namespace ROOT for class ::L1Analysis::L1AnalysisDTTFDataFormat

namespace ROOT {
   // Wrappers around operator new
   static void *new_L1AnalysiscLcLL1AnalysisGCTDataFormat(void *p) {
      return  p ? ::new((::ROOT::Internal::TOperatorNewHelper*)p) ::L1Analysis::L1AnalysisGCTDataFormat : new ::L1Analysis::L1AnalysisGCTDataFormat;
   }
   static void *newArray_L1AnalysiscLcLL1AnalysisGCTDataFormat(Long_t nElements, void *p) {
      return p ? ::new((::ROOT::Internal::TOperatorNewHelper*)p) ::L1Analysis::L1AnalysisGCTDataFormat[nElements] : new ::L1Analysis::L1AnalysisGCTDataFormat[nElements];
   }
   // Wrapper around operator delete
   static void delete_L1AnalysiscLcLL1AnalysisGCTDataFormat(void *p) {
      delete ((::L1Analysis::L1AnalysisGCTDataFormat*)p);
   }
   static void deleteArray_L1AnalysiscLcLL1AnalysisGCTDataFormat(void *p) {
      delete [] ((::L1Analysis::L1AnalysisGCTDataFormat*)p);
   }
   static void destruct_L1AnalysiscLcLL1AnalysisGCTDataFormat(void *p) {
      typedef ::L1Analysis::L1AnalysisGCTDataFormat current_t;
      ((current_t*)p)->~current_t();
   }
} // end of namespace ROOT for class ::L1Analysis::L1AnalysisGCTDataFormat

namespace ROOT {
   // Wrappers around operator new
   static void *new_L1AnalysiscLcLL1AnalysisGMTDataFormat(void *p) {
      return  p ? ::new((::ROOT::Internal::TOperatorNewHelper*)p) ::L1Analysis::L1AnalysisGMTDataFormat : new ::L1Analysis::L1AnalysisGMTDataFormat;
   }
   static void *newArray_L1AnalysiscLcLL1AnalysisGMTDataFormat(Long_t nElements, void *p) {
      return p ? ::new((::ROOT::Internal::TOperatorNewHelper*)p) ::L1Analysis::L1AnalysisGMTDataFormat[nElements] : new ::L1Analysis::L1AnalysisGMTDataFormat[nElements];
   }
   // Wrapper around operator delete
   static void delete_L1AnalysiscLcLL1AnalysisGMTDataFormat(void *p) {
      delete ((::L1Analysis::L1AnalysisGMTDataFormat*)p);
   }
   static void deleteArray_L1AnalysiscLcLL1AnalysisGMTDataFormat(void *p) {
      delete [] ((::L1Analysis::L1AnalysisGMTDataFormat*)p);
   }
   static void destruct_L1AnalysiscLcLL1AnalysisGMTDataFormat(void *p) {
      typedef ::L1Analysis::L1AnalysisGMTDataFormat current_t;
      ((current_t*)p)->~current_t();
   }
} // end of namespace ROOT for class ::L1Analysis::L1AnalysisGMTDataFormat

namespace ROOT {
   // Wrappers around operator new
   static void *new_L1AnalysiscLcLL1AnalysisGTDataFormat(void *p) {
      return  p ? ::new((::ROOT::Internal::TOperatorNewHelper*)p) ::L1Analysis::L1AnalysisGTDataFormat : new ::L1Analysis::L1AnalysisGTDataFormat;
   }
   static void *newArray_L1AnalysiscLcLL1AnalysisGTDataFormat(Long_t nElements, void *p) {
      return p ? ::new((::ROOT::Internal::TOperatorNewHelper*)p) ::L1Analysis::L1AnalysisGTDataFormat[nElements] : new ::L1Analysis::L1AnalysisGTDataFormat[nElements];
   }
   // Wrapper around operator delete
   static void delete_L1AnalysiscLcLL1AnalysisGTDataFormat(void *p) {
      delete ((::L1Analysis::L1AnalysisGTDataFormat*)p);
   }
   static void deleteArray_L1AnalysiscLcLL1AnalysisGTDataFormat(void *p) {
      delete [] ((::L1Analysis::L1AnalysisGTDataFormat*)p);
   }
   static void destruct_L1AnalysiscLcLL1AnalysisGTDataFormat(void *p) {
      typedef ::L1Analysis::L1AnalysisGTDataFormat current_t;
      ((current_t*)p)->~current_t();
   }
} // end of namespace ROOT for class ::L1Analysis::L1AnalysisGTDataFormat

namespace ROOT {
   // Wrappers around operator new
   static void *new_L1AnalysiscLcLL1AnalysisRCTDataFormat(void *p) {
      return  p ? ::new((::ROOT::Internal::TOperatorNewHelper*)p) ::L1Analysis::L1AnalysisRCTDataFormat : new ::L1Analysis::L1AnalysisRCTDataFormat;
   }
   static void *newArray_L1AnalysiscLcLL1AnalysisRCTDataFormat(Long_t nElements, void *p) {
      return p ? ::new((::ROOT::Internal::TOperatorNewHelper*)p) ::L1Analysis::L1AnalysisRCTDataFormat[nElements] : new ::L1Analysis::L1AnalysisRCTDataFormat[nElements];
   }
   // Wrapper around operator delete
   static void delete_L1AnalysiscLcLL1AnalysisRCTDataFormat(void *p) {
      delete ((::L1Analysis::L1AnalysisRCTDataFormat*)p);
   }
   static void deleteArray_L1AnalysiscLcLL1AnalysisRCTDataFormat(void *p) {
      delete [] ((::L1Analysis::L1AnalysisRCTDataFormat*)p);
   }
   static void destruct_L1AnalysiscLcLL1AnalysisRCTDataFormat(void *p) {
      typedef ::L1Analysis::L1AnalysisRCTDataFormat current_t;
      ((current_t*)p)->~current_t();
   }
} // end of namespace ROOT for class ::L1Analysis::L1AnalysisRCTDataFormat

namespace ROOT {
   // Wrappers around operator new
   static void *new_L1AnalysiscLcLL1AnalysisCaloTPDataFormat(void *p) {
      return  p ? ::new((::ROOT::Internal::TOperatorNewHelper*)p) ::L1Analysis::L1AnalysisCaloTPDataFormat : new ::L1Analysis::L1AnalysisCaloTPDataFormat;
   }
   static void *newArray_L1AnalysiscLcLL1AnalysisCaloTPDataFormat(Long_t nElements, void *p) {
      return p ? ::new((::ROOT::Internal::TOperatorNewHelper*)p) ::L1Analysis::L1AnalysisCaloTPDataFormat[nElements] : new ::L1Analysis::L1AnalysisCaloTPDataFormat[nElements];
   }
   // Wrapper around operator delete
   static void delete_L1AnalysiscLcLL1AnalysisCaloTPDataFormat(void *p) {
      delete ((::L1Analysis::L1AnalysisCaloTPDataFormat*)p);
   }
   static void deleteArray_L1AnalysiscLcLL1AnalysisCaloTPDataFormat(void *p) {
      delete [] ((::L1Analysis::L1AnalysisCaloTPDataFormat*)p);
   }
   static void destruct_L1AnalysiscLcLL1AnalysisCaloTPDataFormat(void *p) {
      typedef ::L1Analysis::L1AnalysisCaloTPDataFormat current_t;
      ((current_t*)p)->~current_t();
   }
} // end of namespace ROOT for class ::L1Analysis::L1AnalysisCaloTPDataFormat

namespace ROOT {
   // Wrappers around operator new
   static void *new_L1AnalysiscLcLL1AnalysisGeneratorDataFormat(void *p) {
      return  p ? ::new((::ROOT::Internal::TOperatorNewHelper*)p) ::L1Analysis::L1AnalysisGeneratorDataFormat : new ::L1Analysis::L1AnalysisGeneratorDataFormat;
   }
   static void *newArray_L1AnalysiscLcLL1AnalysisGeneratorDataFormat(Long_t nElements, void *p) {
      return p ? ::new((::ROOT::Internal::TOperatorNewHelper*)p) ::L1Analysis::L1AnalysisGeneratorDataFormat[nElements] : new ::L1Analysis::L1AnalysisGeneratorDataFormat[nElements];
   }
   // Wrapper around operator delete
   static void delete_L1AnalysiscLcLL1AnalysisGeneratorDataFormat(void *p) {
      delete ((::L1Analysis::L1AnalysisGeneratorDataFormat*)p);
   }
   static void deleteArray_L1AnalysiscLcLL1AnalysisGeneratorDataFormat(void *p) {
      delete [] ((::L1Analysis::L1AnalysisGeneratorDataFormat*)p);
   }
   static void destruct_L1AnalysiscLcLL1AnalysisGeneratorDataFormat(void *p) {
      typedef ::L1Analysis::L1AnalysisGeneratorDataFormat current_t;
      ((current_t*)p)->~current_t();
   }
} // end of namespace ROOT for class ::L1Analysis::L1AnalysisGeneratorDataFormat

namespace ROOT {
   // Wrappers around operator new
   static void *new_L1AnalysiscLcLL1AnalysisSimulationDataFormat(void *p) {
      return  p ? ::new((::ROOT::Internal::TOperatorNewHelper*)p) ::L1Analysis::L1AnalysisSimulationDataFormat : new ::L1Analysis::L1AnalysisSimulationDataFormat;
   }
   static void *newArray_L1AnalysiscLcLL1AnalysisSimulationDataFormat(Long_t nElements, void *p) {
      return p ? ::new((::ROOT::Internal::TOperatorNewHelper*)p) ::L1Analysis::L1AnalysisSimulationDataFormat[nElements] : new ::L1Analysis::L1AnalysisSimulationDataFormat[nElements];
   }
   // Wrapper around operator delete
   static void delete_L1AnalysiscLcLL1AnalysisSimulationDataFormat(void *p) {
      delete ((::L1Analysis::L1AnalysisSimulationDataFormat*)p);
   }
   static void deleteArray_L1AnalysiscLcLL1AnalysisSimulationDataFormat(void *p) {
      delete [] ((::L1Analysis::L1AnalysisSimulationDataFormat*)p);
   }
   static void destruct_L1AnalysiscLcLL1AnalysisSimulationDataFormat(void *p) {
      typedef ::L1Analysis::L1AnalysisSimulationDataFormat current_t;
      ((current_t*)p)->~current_t();
   }
} // end of namespace ROOT for class ::L1Analysis::L1AnalysisSimulationDataFormat

namespace ROOT {
   // Wrappers around operator new
   static void *new_L1AnalysiscLcLL1AnalysisL1ExtraDataFormat(void *p) {
      return  p ? ::new((::ROOT::Internal::TOperatorNewHelper*)p) ::L1Analysis::L1AnalysisL1ExtraDataFormat : new ::L1Analysis::L1AnalysisL1ExtraDataFormat;
   }
   static void *newArray_L1AnalysiscLcLL1AnalysisL1ExtraDataFormat(Long_t nElements, void *p) {
      return p ? ::new((::ROOT::Internal::TOperatorNewHelper*)p) ::L1Analysis::L1AnalysisL1ExtraDataFormat[nElements] : new ::L1Analysis::L1AnalysisL1ExtraDataFormat[nElements];
   }
   // Wrapper around operator delete
   static void delete_L1AnalysiscLcLL1AnalysisL1ExtraDataFormat(void *p) {
      delete ((::L1Analysis::L1AnalysisL1ExtraDataFormat*)p);
   }
   static void deleteArray_L1AnalysiscLcLL1AnalysisL1ExtraDataFormat(void *p) {
      delete [] ((::L1Analysis::L1AnalysisL1ExtraDataFormat*)p);
   }
   static void destruct_L1AnalysiscLcLL1AnalysisL1ExtraDataFormat(void *p) {
      typedef ::L1Analysis::L1AnalysisL1ExtraDataFormat current_t;
      ((current_t*)p)->~current_t();
   }
} // end of namespace ROOT for class ::L1Analysis::L1AnalysisL1ExtraDataFormat

namespace ROOT {
   // Wrappers around operator new
   static void *new_L1AnalysiscLcLL1AnalysisRecoMuonDataFormat(void *p) {
      return  p ? ::new((::ROOT::Internal::TOperatorNewHelper*)p) ::L1Analysis::L1AnalysisRecoMuonDataFormat : new ::L1Analysis::L1AnalysisRecoMuonDataFormat;
   }
   static void *newArray_L1AnalysiscLcLL1AnalysisRecoMuonDataFormat(Long_t nElements, void *p) {
      return p ? ::new((::ROOT::Internal::TOperatorNewHelper*)p) ::L1Analysis::L1AnalysisRecoMuonDataFormat[nElements] : new ::L1Analysis::L1AnalysisRecoMuonDataFormat[nElements];
   }
   // Wrapper around operator delete
   static void delete_L1AnalysiscLcLL1AnalysisRecoMuonDataFormat(void *p) {
      delete ((::L1Analysis::L1AnalysisRecoMuonDataFormat*)p);
   }
   static void deleteArray_L1AnalysiscLcLL1AnalysisRecoMuonDataFormat(void *p) {
      delete [] ((::L1Analysis::L1AnalysisRecoMuonDataFormat*)p);
   }
   static void destruct_L1AnalysiscLcLL1AnalysisRecoMuonDataFormat(void *p) {
      typedef ::L1Analysis::L1AnalysisRecoMuonDataFormat current_t;
      ((current_t*)p)->~current_t();
   }
} // end of namespace ROOT for class ::L1Analysis::L1AnalysisRecoMuonDataFormat

namespace ROOT {
   // Wrappers around operator new
   static void *new_L1AnalysiscLcLL1AnalysisRecoRpcHitDataFormat(void *p) {
      return  p ? ::new((::ROOT::Internal::TOperatorNewHelper*)p) ::L1Analysis::L1AnalysisRecoRpcHitDataFormat : new ::L1Analysis::L1AnalysisRecoRpcHitDataFormat;
   }
   static void *newArray_L1AnalysiscLcLL1AnalysisRecoRpcHitDataFormat(Long_t nElements, void *p) {
      return p ? ::new((::ROOT::Internal::TOperatorNewHelper*)p) ::L1Analysis::L1AnalysisRecoRpcHitDataFormat[nElements] : new ::L1Analysis::L1AnalysisRecoRpcHitDataFormat[nElements];
   }
   // Wrapper around operator delete
   static void delete_L1AnalysiscLcLL1AnalysisRecoRpcHitDataFormat(void *p) {
      delete ((::L1Analysis::L1AnalysisRecoRpcHitDataFormat*)p);
   }
   static void deleteArray_L1AnalysiscLcLL1AnalysisRecoRpcHitDataFormat(void *p) {
      delete [] ((::L1Analysis::L1AnalysisRecoRpcHitDataFormat*)p);
   }
   static void destruct_L1AnalysiscLcLL1AnalysisRecoRpcHitDataFormat(void *p) {
      typedef ::L1Analysis::L1AnalysisRecoRpcHitDataFormat current_t;
      ((current_t*)p)->~current_t();
   }
} // end of namespace ROOT for class ::L1Analysis::L1AnalysisRecoRpcHitDataFormat

namespace ROOT {
   // Wrappers around operator new
   static void *new_L1AnalysiscLcLL1AnalysisRecoJetDataFormat(void *p) {
      return  p ? ::new((::ROOT::Internal::TOperatorNewHelper*)p) ::L1Analysis::L1AnalysisRecoJetDataFormat : new ::L1Analysis::L1AnalysisRecoJetDataFormat;
   }
   static void *newArray_L1AnalysiscLcLL1AnalysisRecoJetDataFormat(Long_t nElements, void *p) {
      return p ? ::new((::ROOT::Internal::TOperatorNewHelper*)p) ::L1Analysis::L1AnalysisRecoJetDataFormat[nElements] : new ::L1Analysis::L1AnalysisRecoJetDataFormat[nElements];
   }
   // Wrapper around operator delete
   static void delete_L1AnalysiscLcLL1AnalysisRecoJetDataFormat(void *p) {
      delete ((::L1Analysis::L1AnalysisRecoJetDataFormat*)p);
   }
   static void deleteArray_L1AnalysiscLcLL1AnalysisRecoJetDataFormat(void *p) {
      delete [] ((::L1Analysis::L1AnalysisRecoJetDataFormat*)p);
   }
   static void destruct_L1AnalysiscLcLL1AnalysisRecoJetDataFormat(void *p) {
      typedef ::L1Analysis::L1AnalysisRecoJetDataFormat current_t;
      ((current_t*)p)->~current_t();
   }
} // end of namespace ROOT for class ::L1Analysis::L1AnalysisRecoJetDataFormat

namespace ROOT {
   // Wrappers around operator new
   static void *new_L1AnalysiscLcLL1AnalysisRecoMetFilterDataFormat(void *p) {
      return  p ? ::new((::ROOT::Internal::TOperatorNewHelper*)p) ::L1Analysis::L1AnalysisRecoMetFilterDataFormat : new ::L1Analysis::L1AnalysisRecoMetFilterDataFormat;
   }
   static void *newArray_L1AnalysiscLcLL1AnalysisRecoMetFilterDataFormat(Long_t nElements, void *p) {
      return p ? ::new((::ROOT::Internal::TOperatorNewHelper*)p) ::L1Analysis::L1AnalysisRecoMetFilterDataFormat[nElements] : new ::L1Analysis::L1AnalysisRecoMetFilterDataFormat[nElements];
   }
   // Wrapper around operator delete
   static void delete_L1AnalysiscLcLL1AnalysisRecoMetFilterDataFormat(void *p) {
      delete ((::L1Analysis::L1AnalysisRecoMetFilterDataFormat*)p);
   }
   static void deleteArray_L1AnalysiscLcLL1AnalysisRecoMetFilterDataFormat(void *p) {
      delete [] ((::L1Analysis::L1AnalysisRecoMetFilterDataFormat*)p);
   }
   static void destruct_L1AnalysiscLcLL1AnalysisRecoMetFilterDataFormat(void *p) {
      typedef ::L1Analysis::L1AnalysisRecoMetFilterDataFormat current_t;
      ((current_t*)p)->~current_t();
   }
} // end of namespace ROOT for class ::L1Analysis::L1AnalysisRecoMetFilterDataFormat

namespace ROOT {
   // Wrappers around operator new
   static void *new_L1AnalysiscLcLL1AnalysisRecoMetDataFormat(void *p) {
      return  p ? ::new((::ROOT::Internal::TOperatorNewHelper*)p) ::L1Analysis::L1AnalysisRecoMetDataFormat : new ::L1Analysis::L1AnalysisRecoMetDataFormat;
   }
   static void *newArray_L1AnalysiscLcLL1AnalysisRecoMetDataFormat(Long_t nElements, void *p) {
      return p ? ::new((::ROOT::Internal::TOperatorNewHelper*)p) ::L1Analysis::L1AnalysisRecoMetDataFormat[nElements] : new ::L1Analysis::L1AnalysisRecoMetDataFormat[nElements];
   }
   // Wrapper around operator delete
   static void delete_L1AnalysiscLcLL1AnalysisRecoMetDataFormat(void *p) {
      delete ((::L1Analysis::L1AnalysisRecoMetDataFormat*)p);
   }
   static void deleteArray_L1AnalysiscLcLL1AnalysisRecoMetDataFormat(void *p) {
      delete [] ((::L1Analysis::L1AnalysisRecoMetDataFormat*)p);
   }
   static void destruct_L1AnalysiscLcLL1AnalysisRecoMetDataFormat(void *p) {
      typedef ::L1Analysis::L1AnalysisRecoMetDataFormat current_t;
      ((current_t*)p)->~current_t();
   }
} // end of namespace ROOT for class ::L1Analysis::L1AnalysisRecoMetDataFormat

namespace ROOT {
   // Wrappers around operator new
   static void *new_L1AnalysiscLcLL1AnalysisRecoClusterDataFormat(void *p) {
      return  p ? ::new((::ROOT::Internal::TOperatorNewHelper*)p) ::L1Analysis::L1AnalysisRecoClusterDataFormat : new ::L1Analysis::L1AnalysisRecoClusterDataFormat;
   }
   static void *newArray_L1AnalysiscLcLL1AnalysisRecoClusterDataFormat(Long_t nElements, void *p) {
      return p ? ::new((::ROOT::Internal::TOperatorNewHelper*)p) ::L1Analysis::L1AnalysisRecoClusterDataFormat[nElements] : new ::L1Analysis::L1AnalysisRecoClusterDataFormat[nElements];
   }
   // Wrapper around operator delete
   static void delete_L1AnalysiscLcLL1AnalysisRecoClusterDataFormat(void *p) {
      delete ((::L1Analysis::L1AnalysisRecoClusterDataFormat*)p);
   }
   static void deleteArray_L1AnalysiscLcLL1AnalysisRecoClusterDataFormat(void *p) {
      delete [] ((::L1Analysis::L1AnalysisRecoClusterDataFormat*)p);
   }
   static void destruct_L1AnalysiscLcLL1AnalysisRecoClusterDataFormat(void *p) {
      typedef ::L1Analysis::L1AnalysisRecoClusterDataFormat current_t;
      ((current_t*)p)->~current_t();
   }
} // end of namespace ROOT for class ::L1Analysis::L1AnalysisRecoClusterDataFormat

namespace ROOT {
   // Wrappers around operator new
   static void *new_L1AnalysiscLcLL1AnalysisRecoVertexDataFormat(void *p) {
      return  p ? ::new((::ROOT::Internal::TOperatorNewHelper*)p) ::L1Analysis::L1AnalysisRecoVertexDataFormat : new ::L1Analysis::L1AnalysisRecoVertexDataFormat;
   }
   static void *newArray_L1AnalysiscLcLL1AnalysisRecoVertexDataFormat(Long_t nElements, void *p) {
      return p ? ::new((::ROOT::Internal::TOperatorNewHelper*)p) ::L1Analysis::L1AnalysisRecoVertexDataFormat[nElements] : new ::L1Analysis::L1AnalysisRecoVertexDataFormat[nElements];
   }
   // Wrapper around operator delete
   static void delete_L1AnalysiscLcLL1AnalysisRecoVertexDataFormat(void *p) {
      delete ((::L1Analysis::L1AnalysisRecoVertexDataFormat*)p);
   }
   static void deleteArray_L1AnalysiscLcLL1AnalysisRecoVertexDataFormat(void *p) {
      delete [] ((::L1Analysis::L1AnalysisRecoVertexDataFormat*)p);
   }
   static void destruct_L1AnalysiscLcLL1AnalysisRecoVertexDataFormat(void *p) {
      typedef ::L1Analysis::L1AnalysisRecoVertexDataFormat current_t;
      ((current_t*)p)->~current_t();
   }
} // end of namespace ROOT for class ::L1Analysis::L1AnalysisRecoVertexDataFormat

namespace ROOT {
   // Wrappers around operator new
   static void *new_L1AnalysiscLcLL1AnalysisRecoTrackDataFormat(void *p) {
      return  p ? ::new((::ROOT::Internal::TOperatorNewHelper*)p) ::L1Analysis::L1AnalysisRecoTrackDataFormat : new ::L1Analysis::L1AnalysisRecoTrackDataFormat;
   }
   static void *newArray_L1AnalysiscLcLL1AnalysisRecoTrackDataFormat(Long_t nElements, void *p) {
      return p ? ::new((::ROOT::Internal::TOperatorNewHelper*)p) ::L1Analysis::L1AnalysisRecoTrackDataFormat[nElements] : new ::L1Analysis::L1AnalysisRecoTrackDataFormat[nElements];
   }
   // Wrapper around operator delete
   static void delete_L1AnalysiscLcLL1AnalysisRecoTrackDataFormat(void *p) {
      delete ((::L1Analysis::L1AnalysisRecoTrackDataFormat*)p);
   }
   static void deleteArray_L1AnalysiscLcLL1AnalysisRecoTrackDataFormat(void *p) {
      delete [] ((::L1Analysis::L1AnalysisRecoTrackDataFormat*)p);
   }
   static void destruct_L1AnalysiscLcLL1AnalysisRecoTrackDataFormat(void *p) {
      typedef ::L1Analysis::L1AnalysisRecoTrackDataFormat current_t;
      ((current_t*)p)->~current_t();
   }
} // end of namespace ROOT for class ::L1Analysis::L1AnalysisRecoTrackDataFormat

namespace ROOT {
   // Wrappers around operator new
   static void *new_L1AnalysiscLcLL1AnalysisL1MenuDataFormat(void *p) {
      return  p ? ::new((::ROOT::Internal::TOperatorNewHelper*)p) ::L1Analysis::L1AnalysisL1MenuDataFormat : new ::L1Analysis::L1AnalysisL1MenuDataFormat;
   }
   static void *newArray_L1AnalysiscLcLL1AnalysisL1MenuDataFormat(Long_t nElements, void *p) {
      return p ? ::new((::ROOT::Internal::TOperatorNewHelper*)p) ::L1Analysis::L1AnalysisL1MenuDataFormat[nElements] : new ::L1Analysis::L1AnalysisL1MenuDataFormat[nElements];
   }
   // Wrapper around operator delete
   static void delete_L1AnalysiscLcLL1AnalysisL1MenuDataFormat(void *p) {
      delete ((::L1Analysis::L1AnalysisL1MenuDataFormat*)p);
   }
   static void deleteArray_L1AnalysiscLcLL1AnalysisL1MenuDataFormat(void *p) {
      delete [] ((::L1Analysis::L1AnalysisL1MenuDataFormat*)p);
   }
   static void destruct_L1AnalysiscLcLL1AnalysisL1MenuDataFormat(void *p) {
      typedef ::L1Analysis::L1AnalysisL1MenuDataFormat current_t;
      ((current_t*)p)->~current_t();
   }
} // end of namespace ROOT for class ::L1Analysis::L1AnalysisL1MenuDataFormat

namespace ROOT {
   // Wrappers around operator new
   static void *new_L1AnalysiscLcLL1AnalysisL1UpgradeDataFormat(void *p) {
      return  p ? ::new((::ROOT::Internal::TOperatorNewHelper*)p) ::L1Analysis::L1AnalysisL1UpgradeDataFormat : new ::L1Analysis::L1AnalysisL1UpgradeDataFormat;
   }
   static void *newArray_L1AnalysiscLcLL1AnalysisL1UpgradeDataFormat(Long_t nElements, void *p) {
      return p ? ::new((::ROOT::Internal::TOperatorNewHelper*)p) ::L1Analysis::L1AnalysisL1UpgradeDataFormat[nElements] : new ::L1Analysis::L1AnalysisL1UpgradeDataFormat[nElements];
   }
   // Wrapper around operator delete
   static void delete_L1AnalysiscLcLL1AnalysisL1UpgradeDataFormat(void *p) {
      delete ((::L1Analysis::L1AnalysisL1UpgradeDataFormat*)p);
   }
   static void deleteArray_L1AnalysiscLcLL1AnalysisL1UpgradeDataFormat(void *p) {
      delete [] ((::L1Analysis::L1AnalysisL1UpgradeDataFormat*)p);
   }
   static void destruct_L1AnalysiscLcLL1AnalysisL1UpgradeDataFormat(void *p) {
      typedef ::L1Analysis::L1AnalysisL1UpgradeDataFormat current_t;
      ((current_t*)p)->~current_t();
   }
} // end of namespace ROOT for class ::L1Analysis::L1AnalysisL1UpgradeDataFormat

namespace ROOT {
   // Wrappers around operator new
   static void *new_L1AnalysiscLcLL1AnalysisL1CaloTowerDataFormat(void *p) {
      return  p ? ::new((::ROOT::Internal::TOperatorNewHelper*)p) ::L1Analysis::L1AnalysisL1CaloTowerDataFormat : new ::L1Analysis::L1AnalysisL1CaloTowerDataFormat;
   }
   static void *newArray_L1AnalysiscLcLL1AnalysisL1CaloTowerDataFormat(Long_t nElements, void *p) {
      return p ? ::new((::ROOT::Internal::TOperatorNewHelper*)p) ::L1Analysis::L1AnalysisL1CaloTowerDataFormat[nElements] : new ::L1Analysis::L1AnalysisL1CaloTowerDataFormat[nElements];
   }
   // Wrapper around operator delete
   static void delete_L1AnalysiscLcLL1AnalysisL1CaloTowerDataFormat(void *p) {
      delete ((::L1Analysis::L1AnalysisL1CaloTowerDataFormat*)p);
   }
   static void deleteArray_L1AnalysiscLcLL1AnalysisL1CaloTowerDataFormat(void *p) {
      delete [] ((::L1Analysis::L1AnalysisL1CaloTowerDataFormat*)p);
   }
   static void destruct_L1AnalysiscLcLL1AnalysisL1CaloTowerDataFormat(void *p) {
      typedef ::L1Analysis::L1AnalysisL1CaloTowerDataFormat current_t;
      ((current_t*)p)->~current_t();
   }
} // end of namespace ROOT for class ::L1Analysis::L1AnalysisL1CaloTowerDataFormat

namespace ROOT {
   // Wrappers around operator new
   static void *new_L1AnalysiscLcLL1AnalysisL1CaloClusterDataFormat(void *p) {
      return  p ? ::new((::ROOT::Internal::TOperatorNewHelper*)p) ::L1Analysis::L1AnalysisL1CaloClusterDataFormat : new ::L1Analysis::L1AnalysisL1CaloClusterDataFormat;
   }
   static void *newArray_L1AnalysiscLcLL1AnalysisL1CaloClusterDataFormat(Long_t nElements, void *p) {
      return p ? ::new((::ROOT::Internal::TOperatorNewHelper*)p) ::L1Analysis::L1AnalysisL1CaloClusterDataFormat[nElements] : new ::L1Analysis::L1AnalysisL1CaloClusterDataFormat[nElements];
   }
   // Wrapper around operator delete
   static void delete_L1AnalysiscLcLL1AnalysisL1CaloClusterDataFormat(void *p) {
      delete ((::L1Analysis::L1AnalysisL1CaloClusterDataFormat*)p);
   }
   static void deleteArray_L1AnalysiscLcLL1AnalysisL1CaloClusterDataFormat(void *p) {
      delete [] ((::L1Analysis::L1AnalysisL1CaloClusterDataFormat*)p);
   }
   static void destruct_L1AnalysiscLcLL1AnalysisL1CaloClusterDataFormat(void *p) {
      typedef ::L1Analysis::L1AnalysisL1CaloClusterDataFormat current_t;
      ((current_t*)p)->~current_t();
   }
} // end of namespace ROOT for class ::L1Analysis::L1AnalysisL1CaloClusterDataFormat

namespace ROOT {
   // Wrappers around operator new
   static void *new_L1AnalysiscLcLL1AnalysisRecoTauDataFormat(void *p) {
      return  p ? ::new((::ROOT::Internal::TOperatorNewHelper*)p) ::L1Analysis::L1AnalysisRecoTauDataFormat : new ::L1Analysis::L1AnalysisRecoTauDataFormat;
   }
   static void *newArray_L1AnalysiscLcLL1AnalysisRecoTauDataFormat(Long_t nElements, void *p) {
      return p ? ::new((::ROOT::Internal::TOperatorNewHelper*)p) ::L1Analysis::L1AnalysisRecoTauDataFormat[nElements] : new ::L1Analysis::L1AnalysisRecoTauDataFormat[nElements];
   }
   // Wrapper around operator delete
   static void delete_L1AnalysiscLcLL1AnalysisRecoTauDataFormat(void *p) {
      delete ((::L1Analysis::L1AnalysisRecoTauDataFormat*)p);
   }
   static void deleteArray_L1AnalysiscLcLL1AnalysisRecoTauDataFormat(void *p) {
      delete [] ((::L1Analysis::L1AnalysisRecoTauDataFormat*)p);
   }
   static void destruct_L1AnalysiscLcLL1AnalysisRecoTauDataFormat(void *p) {
      typedef ::L1Analysis::L1AnalysisRecoTauDataFormat current_t;
      ((current_t*)p)->~current_t();
   }
} // end of namespace ROOT for class ::L1Analysis::L1AnalysisRecoTauDataFormat

namespace ROOT {
   // Wrappers around operator new
   static void *new_L1AnalysiscLcLL1AnalysisRecoMuon2DataFormat(void *p) {
      return  p ? ::new((::ROOT::Internal::TOperatorNewHelper*)p) ::L1Analysis::L1AnalysisRecoMuon2DataFormat : new ::L1Analysis::L1AnalysisRecoMuon2DataFormat;
   }
   static void *newArray_L1AnalysiscLcLL1AnalysisRecoMuon2DataFormat(Long_t nElements, void *p) {
      return p ? ::new((::ROOT::Internal::TOperatorNewHelper*)p) ::L1Analysis::L1AnalysisRecoMuon2DataFormat[nElements] : new ::L1Analysis::L1AnalysisRecoMuon2DataFormat[nElements];
   }
   // Wrapper around operator delete
   static void delete_L1AnalysiscLcLL1AnalysisRecoMuon2DataFormat(void *p) {
      delete ((::L1Analysis::L1AnalysisRecoMuon2DataFormat*)p);
   }
   static void deleteArray_L1AnalysiscLcLL1AnalysisRecoMuon2DataFormat(void *p) {
      delete [] ((::L1Analysis::L1AnalysisRecoMuon2DataFormat*)p);
   }
   static void destruct_L1AnalysiscLcLL1AnalysisRecoMuon2DataFormat(void *p) {
      typedef ::L1Analysis::L1AnalysisRecoMuon2DataFormat current_t;
      ((current_t*)p)->~current_t();
   }
} // end of namespace ROOT for class ::L1Analysis::L1AnalysisRecoMuon2DataFormat

namespace ROOT {
   // Wrappers around operator new
   static void *new_L1AnalysiscLcLL1AnalysisRecoElectronDataFormat(void *p) {
      return  p ? ::new((::ROOT::Internal::TOperatorNewHelper*)p) ::L1Analysis::L1AnalysisRecoElectronDataFormat : new ::L1Analysis::L1AnalysisRecoElectronDataFormat;
   }
   static void *newArray_L1AnalysiscLcLL1AnalysisRecoElectronDataFormat(Long_t nElements, void *p) {
      return p ? ::new((::ROOT::Internal::TOperatorNewHelper*)p) ::L1Analysis::L1AnalysisRecoElectronDataFormat[nElements] : new ::L1Analysis::L1AnalysisRecoElectronDataFormat[nElements];
   }
   // Wrapper around operator delete
   static void delete_L1AnalysiscLcLL1AnalysisRecoElectronDataFormat(void *p) {
      delete ((::L1Analysis::L1AnalysisRecoElectronDataFormat*)p);
   }
   static void deleteArray_L1AnalysiscLcLL1AnalysisRecoElectronDataFormat(void *p) {
      delete [] ((::L1Analysis::L1AnalysisRecoElectronDataFormat*)p);
   }
   static void destruct_L1AnalysiscLcLL1AnalysisRecoElectronDataFormat(void *p) {
      typedef ::L1Analysis::L1AnalysisRecoElectronDataFormat current_t;
      ((current_t*)p)->~current_t();
   }
} // end of namespace ROOT for class ::L1Analysis::L1AnalysisRecoElectronDataFormat

namespace {
  void TriggerDictionaryInitialization_L1TriggerL1TNtuples_xr_Impl() {
    static const char* headers[] = {
0    };
    static const char* includePaths[] = {
"/disk1/scheuch/grid/FullDestroyAnalysis2016/Wheel0/Working/CMSSW_8_0_2/src",
"/disk1/scheuch/grid/FullDestroyAnalysis2016/Wheel0/Working/CMSSW_8_0_2/poison",
"/cvmfs/cms.cern.ch/slc6_amd64_gcc530/cms/cmssw/CMSSW_8_0_2/src",
"/cvmfs/cms.cern.ch/slc6_amd64_gcc530/cms/coral/CORAL_2_3_21-ikhhed4/include/LCG",
"/cvmfs/cms.cern.ch/slc6_amd64_gcc530/lcg/root/6.06.00-ikhhed2/include",
"/cvmfs/cms.cern.ch/slc6_amd64_gcc530/external/boost/1.57.0-ikhhed/include",
"/cvmfs/cms.cern.ch/slc6_amd64_gcc530/external/pcre/8.37/include",
"/cvmfs/cms.cern.ch/slc6_amd64_gcc530/external/bz2lib/1.0.6/include",
"/cvmfs/cms.cern.ch/slc6_amd64_gcc530/external/clhep/2.2.0.4-ikhhed/include",
"/cvmfs/cms.cern.ch/slc6_amd64_gcc530/external/gsl/1.16/include",
"/cvmfs/cms.cern.ch/slc6_amd64_gcc530/external/hepmc/2.06.07/include",
"/cvmfs/cms.cern.ch/slc6_amd64_gcc530/external/libuuid/2.22.2/include",
"/cvmfs/cms.cern.ch/slc6_amd64_gcc530/external/openssl/1.0.2d/include",
"/cvmfs/cms.cern.ch/slc6_amd64_gcc530/external/python/2.7.11-ikhhed/include/python2.7",
"/cvmfs/cms.cern.ch/slc6_amd64_gcc530/external/sigcpp/2.6.2/include/sigc++-2.0",
"/cvmfs/cms.cern.ch/slc6_amd64_gcc530/external/tbb/44_20151115oss/include",
"/cvmfs/cms.cern.ch/slc6_amd64_gcc530/cms/vdt/v0.3.2-ikhhed/include",
"/cvmfs/cms.cern.ch/slc6_amd64_gcc530/external/xerces-c/2.8.0/include",
"/cvmfs/cms.cern.ch/slc6_amd64_gcc530/external/xz/5.2.1/include",
"/cvmfs/cms.cern.ch/slc6_amd64_gcc530/external/zlib/1.2.8/include",
"/cvmfs/cms.cern.ch/slc6_amd64_gcc530/external/eigen/3.2.2/include",
"/cvmfs/cms.cern.ch/slc6_amd64_gcc530/lcg/root/6.06.00-ikhhed2/include",
"/disk1/scheuch/grid/FullDestroyAnalysis2016/Wheel0/Working/CMSSW_8_0_2/",
0
    };
    static const char* fwdDeclCode = R"DICTFWDDCLS(
#line 1 "L1TriggerL1TNtuples_xr dictionary forward declarations' payload"
#pragma clang diagnostic ignored "-Wkeyword-compat"
#pragma clang diagnostic ignored "-Wignored-attributes"
#pragma clang diagnostic ignored "-Wreturn-type-c-linkage"
extern int __Cling_Autoloading_Map;
namespace L1Analysis{struct __attribute__((annotate("$clingAutoload$L1Trigger/L1TNtuples/interface/L1AnalysisEventDataFormat.h")))  L1AnalysisEventDataFormat;}
namespace L1Analysis{struct __attribute__((annotate("$clingAutoload$L1Trigger/L1TNtuples/interface/L1AnalysisCSCTFDataFormat.h")))  L1AnalysisCSCTFDataFormat;}
namespace L1Analysis{struct __attribute__((annotate("$clingAutoload$L1Trigger/L1TNtuples/interface/L1AnalysisDTTFDataFormat.h")))  L1AnalysisDTTFDataFormat;}
namespace L1Analysis{struct __attribute__((annotate("$clingAutoload$L1Trigger/L1TNtuples/interface/L1AnalysisGCTDataFormat.h")))  L1AnalysisGCTDataFormat;}
namespace L1Analysis{struct __attribute__((annotate("$clingAutoload$L1Trigger/L1TNtuples/interface/L1AnalysisGMTDataFormat.h")))  L1AnalysisGMTDataFormat;}
namespace L1Analysis{struct __attribute__((annotate("$clingAutoload$L1Trigger/L1TNtuples/interface/L1AnalysisGTDataFormat.h")))  L1AnalysisGTDataFormat;}
namespace L1Analysis{struct __attribute__((annotate("$clingAutoload$L1Trigger/L1TNtuples/interface/L1AnalysisRCTDataFormat.h")))  L1AnalysisRCTDataFormat;}
namespace L1Analysis{struct __attribute__((annotate("$clingAutoload$L1Trigger/L1TNtuples/interface/L1AnalysisCaloTPDataFormat.h")))  L1AnalysisCaloTPDataFormat;}
namespace L1Analysis{struct __attribute__((annotate("$clingAutoload$L1Trigger/L1TNtuples/interface/L1AnalysisGeneratorDataFormat.h")))  L1AnalysisGeneratorDataFormat;}
namespace L1Analysis{class __attribute__((annotate("$clingAutoload$L1Trigger/L1TNtuples/interface/L1AnalysisSimulationDataFormat.h")))  L1AnalysisSimulationDataFormat;}
namespace L1Analysis{struct __attribute__((annotate("$clingAutoload$L1Trigger/L1TNtuples/interface/L1AnalysisL1ExtraDataFormat.h")))  L1AnalysisL1ExtraDataFormat;}
namespace L1Analysis{struct __attribute__((annotate("$clingAutoload$L1Trigger/L1TNtuples/interface/L1AnalysisRecoMuonDataFormat.h")))  L1AnalysisRecoMuonDataFormat;}
namespace L1Analysis{struct __attribute__((annotate("$clingAutoload$L1Trigger/L1TNtuples/interface/L1AnalysisRecoRpcHitDataFormat.h")))  L1AnalysisRecoRpcHitDataFormat;}
namespace L1Analysis{struct __attribute__((annotate("$clingAutoload$L1Trigger/L1TNtuples/interface/L1AnalysisRecoJetDataFormat.h")))  L1AnalysisRecoJetDataFormat;}
namespace L1Analysis{struct __attribute__((annotate("$clingAutoload$L1Trigger/L1TNtuples/interface/L1AnalysisRecoMetFilterDataFormat.h")))  L1AnalysisRecoMetFilterDataFormat;}
namespace L1Analysis{struct __attribute__((annotate("$clingAutoload$L1Trigger/L1TNtuples/interface/L1AnalysisRecoMetDataFormat.h")))  L1AnalysisRecoMetDataFormat;}
namespace L1Analysis{class __attribute__((annotate("$clingAutoload$L1Trigger/L1TNtuples/interface/L1AnalysisRecoClusterDataFormat.h")))  L1AnalysisRecoClusterDataFormat;}
namespace L1Analysis{struct __attribute__((annotate("$clingAutoload$L1Trigger/L1TNtuples/interface/L1AnalysisRecoVertexDataFormat.h")))  L1AnalysisRecoVertexDataFormat;}
namespace L1Analysis{struct __attribute__((annotate("$clingAutoload$L1Trigger/L1TNtuples/interface/L1AnalysisRecoTrackDataFormat.h")))  L1AnalysisRecoTrackDataFormat;}
namespace L1Analysis{struct __attribute__((annotate("$clingAutoload$L1Trigger/L1TNtuples/interface/L1AnalysisL1MenuDataFormat.h")))  L1AnalysisL1MenuDataFormat;}
namespace L1Analysis{struct __attribute__((annotate("$clingAutoload$L1Trigger/L1TNtuples/interface/L1AnalysisL1UpgradeDataFormat.h")))  L1AnalysisL1UpgradeDataFormat;}
namespace L1Analysis{struct __attribute__((annotate("$clingAutoload$L1Trigger/L1TNtuples/interface/L1AnalysisL1CaloTowerDataFormat.h")))  L1AnalysisL1CaloTowerDataFormat;}
namespace L1Analysis{struct __attribute__((annotate("$clingAutoload$L1Trigger/L1TNtuples/interface/L1AnalysisL1CaloClusterDataFormat.h")))  L1AnalysisL1CaloClusterDataFormat;}
namespace L1Analysis{struct __attribute__((annotate("$clingAutoload$L1Trigger/L1TNtuples/interface/L1AnalysisRecoTauDataFormat.h")))  L1AnalysisRecoTauDataFormat;}
namespace L1Analysis{struct __attribute__((annotate("$clingAutoload$L1Trigger/L1TNtuples/interface/L1AnalysisRecoMuon2DataFormat.h")))  L1AnalysisRecoMuon2DataFormat;}
namespace L1Analysis{struct __attribute__((annotate("$clingAutoload$L1Trigger/L1TNtuples/interface/L1AnalysisRecoElectronDataFormat.h")))  L1AnalysisRecoElectronDataFormat;}
)DICTFWDDCLS";
    static const char* payloadCode = R"DICTPAYLOAD(
#line 1 "L1TriggerL1TNtuples_xr dictionary payload"

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
#ifndef EIGEN_DONT_PARALLELIZE
  #define EIGEN_DONT_PARALLELIZE 1
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
#include "L1Trigger/L1TNtuples/interface/L1AnalysisEventDataFormat.h"
#include "L1Trigger/L1TNtuples/interface/L1AnalysisCSCTFDataFormat.h"
#include "L1Trigger/L1TNtuples/interface/L1AnalysisDTTFDataFormat.h"
#include "L1Trigger/L1TNtuples/interface/L1AnalysisGCTDataFormat.h"
#include "L1Trigger/L1TNtuples/interface/L1AnalysisGMTDataFormat.h"
#include "L1Trigger/L1TNtuples/interface/L1AnalysisGTDataFormat.h"
#include "L1Trigger/L1TNtuples/interface/L1AnalysisRCTDataFormat.h"
#include "L1Trigger/L1TNtuples/interface/L1AnalysisCaloTPDataFormat.h"
#include "L1Trigger/L1TNtuples/interface/L1AnalysisGeneratorDataFormat.h"
#include "L1Trigger/L1TNtuples/interface/L1AnalysisSimulationDataFormat.h"
#include "L1Trigger/L1TNtuples/interface/L1AnalysisL1ExtraDataFormat.h"
#include "L1Trigger/L1TNtuples/interface/L1AnalysisRecoMuonDataFormat.h"
#include "L1Trigger/L1TNtuples/interface/L1AnalysisRecoRpcHitDataFormat.h"
#include "L1Trigger/L1TNtuples/interface/L1AnalysisRecoMetDataFormat.h"
#include "L1Trigger/L1TNtuples/interface/L1AnalysisRecoMetFilterDataFormat.h"
#include "L1Trigger/L1TNtuples/interface/L1AnalysisRecoJetDataFormat.h"
#include "L1Trigger/L1TNtuples/interface/L1AnalysisRecoClusterDataFormat.h"
#include "L1Trigger/L1TNtuples/interface/L1AnalysisRecoVertexDataFormat.h"
#include "L1Trigger/L1TNtuples/interface/L1AnalysisRecoTrackDataFormat.h"
#include "L1Trigger/L1TNtuples/interface/L1AnalysisL1MenuDataFormat.h"
#include "L1Trigger/L1TNtuples/interface/L1AnalysisL1UpgradeDataFormat.h"
#include "L1Trigger/L1TNtuples/interface/L1AnalysisL1CaloTowerDataFormat.h"
#include "L1Trigger/L1TNtuples/interface/L1AnalysisL1CaloClusterDataFormat.h"

#include "L1Trigger/L1TNtuples/interface/L1AnalysisRecoTauDataFormat.h"
#include "L1Trigger/L1TNtuples/interface/L1AnalysisRecoMuon2DataFormat.h"
#include "L1Trigger/L1TNtuples/interface/L1AnalysisRecoElectronDataFormat.h"

namespace{
  namespace{
    L1Analysis::L1AnalysisEventDataFormat          pL1ev; 
    L1Analysis::L1AnalysisCSCTFDataFormat          pL1csctf;
    L1Analysis::L1AnalysisDTTFDataFormat    	   pL1dttf;
    L1Analysis::L1AnalysisGCTDataFormat   	   pL1gct;
    L1Analysis::L1AnalysisGMTDataFormat  	   pL1gmt;
    L1Analysis::L1AnalysisGTDataFormat   	   pL1gt;
    L1Analysis::L1AnalysisRCTDataFormat            pL1rct;
    L1Analysis::L1AnalysisCaloTPDataFormat         pL1calotp;
    L1Analysis::L1AnalysisGeneratorDataFormat      pL1generator;
    L1Analysis::L1AnalysisSimulationDataFormat     pL1simu;
    L1Analysis::L1AnalysisL1ExtraDataFormat        pLl1extra;
    L1Analysis::L1AnalysisRecoMuonDataFormat       pL1muon;
    L1Analysis::L1AnalysisRecoRpcHitDataFormat     pL1rpc;
    L1Analysis::L1AnalysisRecoJetDataFormat        pL1jet; 
    L1Analysis::L1AnalysisRecoMetDataFormat        pL1met; 
    L1Analysis::L1AnalysisRecoMetFilterDataFormat  pL1metfilter;
    L1Analysis::L1AnalysisRecoClusterDataFormat    pL1cluster;
    L1Analysis::L1AnalysisRecoVertexDataFormat     pL1vertex;   
    L1Analysis::L1AnalysisRecoTrackDataFormat      pL1track; 
    L1Analysis::L1AnalysisL1MenuDataFormat         pL1menu; 
    L1Analysis::L1AnalysisL1UpgradeDataFormat      pL1upgrade; 
    L1Analysis::L1AnalysisL1CaloTowerDataFormat      pL1calotower; 
    L1Analysis::L1AnalysisL1CaloClusterDataFormat      pL1calocluster; 

    L1Analysis::L1AnalysisRecoTauDataFormat        pL1tau; 
    L1Analysis::L1AnalysisRecoMuon2DataFormat      pL1muon2;
    L1Analysis::L1AnalysisRecoElectronDataFormat   pL1electron;
   }
}

#undef  _BACKWARD_BACKWARD_WARNING_H
)DICTPAYLOAD";
    static const char* classesHeaders[]={
"L1Analysis::L1AnalysisCSCTFDataFormat", payloadCode, "@",
"L1Analysis::L1AnalysisCaloTPDataFormat", payloadCode, "@",
"L1Analysis::L1AnalysisDTTFDataFormat", payloadCode, "@",
"L1Analysis::L1AnalysisEventDataFormat", payloadCode, "@",
"L1Analysis::L1AnalysisGCTDataFormat", payloadCode, "@",
"L1Analysis::L1AnalysisGMTDataFormat", payloadCode, "@",
"L1Analysis::L1AnalysisGTDataFormat", payloadCode, "@",
"L1Analysis::L1AnalysisGeneratorDataFormat", payloadCode, "@",
"L1Analysis::L1AnalysisL1CaloClusterDataFormat", payloadCode, "@",
"L1Analysis::L1AnalysisL1CaloTowerDataFormat", payloadCode, "@",
"L1Analysis::L1AnalysisL1ExtraDataFormat", payloadCode, "@",
"L1Analysis::L1AnalysisL1MenuDataFormat", payloadCode, "@",
"L1Analysis::L1AnalysisL1UpgradeDataFormat", payloadCode, "@",
"L1Analysis::L1AnalysisRCTDataFormat", payloadCode, "@",
"L1Analysis::L1AnalysisRecoClusterDataFormat", payloadCode, "@",
"L1Analysis::L1AnalysisRecoElectronDataFormat", payloadCode, "@",
"L1Analysis::L1AnalysisRecoJetDataFormat", payloadCode, "@",
"L1Analysis::L1AnalysisRecoMetDataFormat", payloadCode, "@",
"L1Analysis::L1AnalysisRecoMetFilterDataFormat", payloadCode, "@",
"L1Analysis::L1AnalysisRecoMuon2DataFormat", payloadCode, "@",
"L1Analysis::L1AnalysisRecoMuonDataFormat", payloadCode, "@",
"L1Analysis::L1AnalysisRecoRpcHitDataFormat", payloadCode, "@",
"L1Analysis::L1AnalysisRecoTauDataFormat", payloadCode, "@",
"L1Analysis::L1AnalysisRecoTrackDataFormat", payloadCode, "@",
"L1Analysis::L1AnalysisRecoVertexDataFormat", payloadCode, "@",
"L1Analysis::L1AnalysisSimulationDataFormat", payloadCode, "@",
nullptr};

    static bool isInitialized = false;
    if (!isInitialized) {
      TROOT::RegisterModule("L1TriggerL1TNtuples_xr",
        headers, includePaths, payloadCode, fwdDeclCode,
        TriggerDictionaryInitialization_L1TriggerL1TNtuples_xr_Impl, {}, classesHeaders);
      isInitialized = true;
    }
  }
  static struct DictInit {
    DictInit() {
      TriggerDictionaryInitialization_L1TriggerL1TNtuples_xr_Impl();
    }
  } __TheDictionaryInitializer;
}
void TriggerDictionaryInitialization_L1TriggerL1TNtuples_xr() {
  TriggerDictionaryInitialization_L1TriggerL1TNtuples_xr_Impl();
}
