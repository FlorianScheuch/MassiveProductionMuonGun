// Do NOT change. Changes will be lost next time file is generated

#define R__DICTIONARY_FILENAME tmpdIslc6_amd64_gcc530dIsrcdIDataFormatsdIL1TCalorimeterdIsrcdIDataFormatsL1TCalorimeterdIadIDataFormatsL1TCalorimeter_xr

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
#include "src/DataFormats/L1TCalorimeter/src/classes.h"

// Header files passed via #pragma extra_include

namespace ROOT {
   static TClass *l1tcLcLCaloEmCand_Dictionary();
   static void l1tcLcLCaloEmCand_TClassManip(TClass*);
   static void *new_l1tcLcLCaloEmCand(void *p = 0);
   static void *newArray_l1tcLcLCaloEmCand(Long_t size, void *p);
   static void delete_l1tcLcLCaloEmCand(void *p);
   static void deleteArray_l1tcLcLCaloEmCand(void *p);
   static void destruct_l1tcLcLCaloEmCand(void *p);

   // Function generating the singleton type initializer
   static TGenericClassInfo *GenerateInitInstanceLocal(const ::l1t::CaloEmCand*)
   {
      ::l1t::CaloEmCand *ptr = 0;
      static ::TVirtualIsAProxy* isa_proxy = new ::TIsAProxy(typeid(::l1t::CaloEmCand));
      static ::ROOT::TGenericClassInfo 
         instance("l1t::CaloEmCand", "DataFormats/L1TCalorimeter/interface/CaloEmCand.h", 8,
                  typeid(::l1t::CaloEmCand), ::ROOT::Internal::DefineBehavior(ptr, ptr),
                  &l1tcLcLCaloEmCand_Dictionary, isa_proxy, 0,
                  sizeof(::l1t::CaloEmCand) );
      instance.SetNew(&new_l1tcLcLCaloEmCand);
      instance.SetNewArray(&newArray_l1tcLcLCaloEmCand);
      instance.SetDelete(&delete_l1tcLcLCaloEmCand);
      instance.SetDeleteArray(&deleteArray_l1tcLcLCaloEmCand);
      instance.SetDestructor(&destruct_l1tcLcLCaloEmCand);
      return &instance;
   }
   TGenericClassInfo *GenerateInitInstance(const ::l1t::CaloEmCand*)
   {
      return GenerateInitInstanceLocal((::l1t::CaloEmCand*)0);
   }
   // Static variable to force the class initialization
   static ::ROOT::TGenericClassInfo *_R__UNIQUE_(Init) = GenerateInitInstanceLocal((const ::l1t::CaloEmCand*)0x0); R__UseDummy(_R__UNIQUE_(Init));

   // Dictionary for non-ClassDef classes
   static TClass *l1tcLcLCaloEmCand_Dictionary() {
      TClass* theClass =::ROOT::GenerateInitInstanceLocal((const ::l1t::CaloEmCand*)0x0)->GetClass();
      l1tcLcLCaloEmCand_TClassManip(theClass);
   return theClass;
   }

   static void l1tcLcLCaloEmCand_TClassManip(TClass* ){
   }

} // end of namespace ROOT

namespace ROOT {
   static TClass *BXVectorlEl1tcLcLCaloEmCandgR_Dictionary();
   static void BXVectorlEl1tcLcLCaloEmCandgR_TClassManip(TClass*);
   static void *new_BXVectorlEl1tcLcLCaloEmCandgR(void *p = 0);
   static void *newArray_BXVectorlEl1tcLcLCaloEmCandgR(Long_t size, void *p);
   static void delete_BXVectorlEl1tcLcLCaloEmCandgR(void *p);
   static void deleteArray_BXVectorlEl1tcLcLCaloEmCandgR(void *p);
   static void destruct_BXVectorlEl1tcLcLCaloEmCandgR(void *p);

   // Function generating the singleton type initializer
   static TGenericClassInfo *GenerateInitInstanceLocal(const ::BXVector<l1t::CaloEmCand>*)
   {
      ::BXVector<l1t::CaloEmCand> *ptr = 0;
      static ::TVirtualIsAProxy* isa_proxy = new ::TIsAProxy(typeid(::BXVector<l1t::CaloEmCand>));
      static ::ROOT::TGenericClassInfo 
         instance("BXVector<l1t::CaloEmCand>", "DataFormats/L1Trigger/interface/BXVector.h", 15,
                  typeid(::BXVector<l1t::CaloEmCand>), ::ROOT::Internal::DefineBehavior(ptr, ptr),
                  &BXVectorlEl1tcLcLCaloEmCandgR_Dictionary, isa_proxy, 0,
                  sizeof(::BXVector<l1t::CaloEmCand>) );
      instance.SetNew(&new_BXVectorlEl1tcLcLCaloEmCandgR);
      instance.SetNewArray(&newArray_BXVectorlEl1tcLcLCaloEmCandgR);
      instance.SetDelete(&delete_BXVectorlEl1tcLcLCaloEmCandgR);
      instance.SetDeleteArray(&deleteArray_BXVectorlEl1tcLcLCaloEmCandgR);
      instance.SetDestructor(&destruct_BXVectorlEl1tcLcLCaloEmCandgR);

      ::ROOT::AddClassAlternate("BXVector<l1t::CaloEmCand>","l1t::CaloEmCandBxCollection");
      return &instance;
   }
   TGenericClassInfo *GenerateInitInstance(const ::BXVector<l1t::CaloEmCand>*)
   {
      return GenerateInitInstanceLocal((::BXVector<l1t::CaloEmCand>*)0);
   }
   // Static variable to force the class initialization
   static ::ROOT::TGenericClassInfo *_R__UNIQUE_(Init) = GenerateInitInstanceLocal((const ::BXVector<l1t::CaloEmCand>*)0x0); R__UseDummy(_R__UNIQUE_(Init));

   // Dictionary for non-ClassDef classes
   static TClass *BXVectorlEl1tcLcLCaloEmCandgR_Dictionary() {
      TClass* theClass =::ROOT::GenerateInitInstanceLocal((const ::BXVector<l1t::CaloEmCand>*)0x0)->GetClass();
      BXVectorlEl1tcLcLCaloEmCandgR_TClassManip(theClass);
   return theClass;
   }

   static void BXVectorlEl1tcLcLCaloEmCandgR_TClassManip(TClass* ){
   }

} // end of namespace ROOT

namespace ROOT {
   static TClass *edmcLcLWrapperlEBXVectorlEl1tcLcLCaloEmCandgRsPgR_Dictionary();
   static void edmcLcLWrapperlEBXVectorlEl1tcLcLCaloEmCandgRsPgR_TClassManip(TClass*);
   static void *new_edmcLcLWrapperlEBXVectorlEl1tcLcLCaloEmCandgRsPgR(void *p = 0);
   static void *newArray_edmcLcLWrapperlEBXVectorlEl1tcLcLCaloEmCandgRsPgR(Long_t size, void *p);
   static void delete_edmcLcLWrapperlEBXVectorlEl1tcLcLCaloEmCandgRsPgR(void *p);
   static void deleteArray_edmcLcLWrapperlEBXVectorlEl1tcLcLCaloEmCandgRsPgR(void *p);
   static void destruct_edmcLcLWrapperlEBXVectorlEl1tcLcLCaloEmCandgRsPgR(void *p);

   // Function generating the singleton type initializer
   static TGenericClassInfo *GenerateInitInstanceLocal(const ::edm::Wrapper<BXVector<l1t::CaloEmCand> >*)
   {
      ::edm::Wrapper<BXVector<l1t::CaloEmCand> > *ptr = 0;
      static ::TVirtualIsAProxy* isa_proxy = new ::TIsAProxy(typeid(::edm::Wrapper<BXVector<l1t::CaloEmCand> >));
      static ::ROOT::TGenericClassInfo 
         instance("edm::Wrapper<BXVector<l1t::CaloEmCand> >", ::edm::Wrapper<BXVector<l1t::CaloEmCand> >::Class_Version(), "DataFormats/Common/interface/Wrapper.h", 25,
                  typeid(::edm::Wrapper<BXVector<l1t::CaloEmCand> >), ::ROOT::Internal::DefineBehavior(ptr, ptr),
                  &edmcLcLWrapperlEBXVectorlEl1tcLcLCaloEmCandgRsPgR_Dictionary, isa_proxy, 0,
                  sizeof(::edm::Wrapper<BXVector<l1t::CaloEmCand> >) );
      instance.SetNew(&new_edmcLcLWrapperlEBXVectorlEl1tcLcLCaloEmCandgRsPgR);
      instance.SetNewArray(&newArray_edmcLcLWrapperlEBXVectorlEl1tcLcLCaloEmCandgRsPgR);
      instance.SetDelete(&delete_edmcLcLWrapperlEBXVectorlEl1tcLcLCaloEmCandgRsPgR);
      instance.SetDeleteArray(&deleteArray_edmcLcLWrapperlEBXVectorlEl1tcLcLCaloEmCandgRsPgR);
      instance.SetDestructor(&destruct_edmcLcLWrapperlEBXVectorlEl1tcLcLCaloEmCandgRsPgR);

      ::ROOT::AddClassAlternate("edm::Wrapper<BXVector<l1t::CaloEmCand> >","edm::Wrapper<l1t::CaloEmCandBxCollection>");
      return &instance;
   }
   TGenericClassInfo *GenerateInitInstance(const ::edm::Wrapper<BXVector<l1t::CaloEmCand> >*)
   {
      return GenerateInitInstanceLocal((::edm::Wrapper<BXVector<l1t::CaloEmCand> >*)0);
   }
   // Static variable to force the class initialization
   static ::ROOT::TGenericClassInfo *_R__UNIQUE_(Init) = GenerateInitInstanceLocal((const ::edm::Wrapper<BXVector<l1t::CaloEmCand> >*)0x0); R__UseDummy(_R__UNIQUE_(Init));

   // Dictionary for non-ClassDef classes
   static TClass *edmcLcLWrapperlEBXVectorlEl1tcLcLCaloEmCandgRsPgR_Dictionary() {
      TClass* theClass =::ROOT::GenerateInitInstanceLocal((const ::edm::Wrapper<BXVector<l1t::CaloEmCand> >*)0x0)->GetClass();
      edmcLcLWrapperlEBXVectorlEl1tcLcLCaloEmCandgRsPgR_TClassManip(theClass);
   return theClass;
   }

   static void edmcLcLWrapperlEBXVectorlEl1tcLcLCaloEmCandgRsPgR_TClassManip(TClass* ){
   }

} // end of namespace ROOT

namespace ROOT {
   static TClass *l1tcLcLCaloRegion_Dictionary();
   static void l1tcLcLCaloRegion_TClassManip(TClass*);
   static void *new_l1tcLcLCaloRegion(void *p = 0);
   static void *newArray_l1tcLcLCaloRegion(Long_t size, void *p);
   static void delete_l1tcLcLCaloRegion(void *p);
   static void deleteArray_l1tcLcLCaloRegion(void *p);
   static void destruct_l1tcLcLCaloRegion(void *p);

   // Function generating the singleton type initializer
   static TGenericClassInfo *GenerateInitInstanceLocal(const ::l1t::CaloRegion*)
   {
      ::l1t::CaloRegion *ptr = 0;
      static ::TVirtualIsAProxy* isa_proxy = new ::TIsAProxy(typeid(::l1t::CaloRegion));
      static ::ROOT::TGenericClassInfo 
         instance("l1t::CaloRegion", "DataFormats/L1TCalorimeter/interface/CaloRegion.h", 10,
                  typeid(::l1t::CaloRegion), ::ROOT::Internal::DefineBehavior(ptr, ptr),
                  &l1tcLcLCaloRegion_Dictionary, isa_proxy, 0,
                  sizeof(::l1t::CaloRegion) );
      instance.SetNew(&new_l1tcLcLCaloRegion);
      instance.SetNewArray(&newArray_l1tcLcLCaloRegion);
      instance.SetDelete(&delete_l1tcLcLCaloRegion);
      instance.SetDeleteArray(&deleteArray_l1tcLcLCaloRegion);
      instance.SetDestructor(&destruct_l1tcLcLCaloRegion);
      return &instance;
   }
   TGenericClassInfo *GenerateInitInstance(const ::l1t::CaloRegion*)
   {
      return GenerateInitInstanceLocal((::l1t::CaloRegion*)0);
   }
   // Static variable to force the class initialization
   static ::ROOT::TGenericClassInfo *_R__UNIQUE_(Init) = GenerateInitInstanceLocal((const ::l1t::CaloRegion*)0x0); R__UseDummy(_R__UNIQUE_(Init));

   // Dictionary for non-ClassDef classes
   static TClass *l1tcLcLCaloRegion_Dictionary() {
      TClass* theClass =::ROOT::GenerateInitInstanceLocal((const ::l1t::CaloRegion*)0x0)->GetClass();
      l1tcLcLCaloRegion_TClassManip(theClass);
   return theClass;
   }

   static void l1tcLcLCaloRegion_TClassManip(TClass* ){
   }

} // end of namespace ROOT

namespace ROOT {
   static TClass *BXVectorlEl1tcLcLCaloRegiongR_Dictionary();
   static void BXVectorlEl1tcLcLCaloRegiongR_TClassManip(TClass*);
   static void *new_BXVectorlEl1tcLcLCaloRegiongR(void *p = 0);
   static void *newArray_BXVectorlEl1tcLcLCaloRegiongR(Long_t size, void *p);
   static void delete_BXVectorlEl1tcLcLCaloRegiongR(void *p);
   static void deleteArray_BXVectorlEl1tcLcLCaloRegiongR(void *p);
   static void destruct_BXVectorlEl1tcLcLCaloRegiongR(void *p);

   // Function generating the singleton type initializer
   static TGenericClassInfo *GenerateInitInstanceLocal(const ::BXVector<l1t::CaloRegion>*)
   {
      ::BXVector<l1t::CaloRegion> *ptr = 0;
      static ::TVirtualIsAProxy* isa_proxy = new ::TIsAProxy(typeid(::BXVector<l1t::CaloRegion>));
      static ::ROOT::TGenericClassInfo 
         instance("BXVector<l1t::CaloRegion>", "DataFormats/L1Trigger/interface/BXVector.h", 15,
                  typeid(::BXVector<l1t::CaloRegion>), ::ROOT::Internal::DefineBehavior(ptr, ptr),
                  &BXVectorlEl1tcLcLCaloRegiongR_Dictionary, isa_proxy, 0,
                  sizeof(::BXVector<l1t::CaloRegion>) );
      instance.SetNew(&new_BXVectorlEl1tcLcLCaloRegiongR);
      instance.SetNewArray(&newArray_BXVectorlEl1tcLcLCaloRegiongR);
      instance.SetDelete(&delete_BXVectorlEl1tcLcLCaloRegiongR);
      instance.SetDeleteArray(&deleteArray_BXVectorlEl1tcLcLCaloRegiongR);
      instance.SetDestructor(&destruct_BXVectorlEl1tcLcLCaloRegiongR);

      ::ROOT::AddClassAlternate("BXVector<l1t::CaloRegion>","l1t::CaloRegionBxCollection");
      return &instance;
   }
   TGenericClassInfo *GenerateInitInstance(const ::BXVector<l1t::CaloRegion>*)
   {
      return GenerateInitInstanceLocal((::BXVector<l1t::CaloRegion>*)0);
   }
   // Static variable to force the class initialization
   static ::ROOT::TGenericClassInfo *_R__UNIQUE_(Init) = GenerateInitInstanceLocal((const ::BXVector<l1t::CaloRegion>*)0x0); R__UseDummy(_R__UNIQUE_(Init));

   // Dictionary for non-ClassDef classes
   static TClass *BXVectorlEl1tcLcLCaloRegiongR_Dictionary() {
      TClass* theClass =::ROOT::GenerateInitInstanceLocal((const ::BXVector<l1t::CaloRegion>*)0x0)->GetClass();
      BXVectorlEl1tcLcLCaloRegiongR_TClassManip(theClass);
   return theClass;
   }

   static void BXVectorlEl1tcLcLCaloRegiongR_TClassManip(TClass* ){
   }

} // end of namespace ROOT

namespace ROOT {
   static TClass *edmcLcLWrapperlEBXVectorlEl1tcLcLCaloRegiongRsPgR_Dictionary();
   static void edmcLcLWrapperlEBXVectorlEl1tcLcLCaloRegiongRsPgR_TClassManip(TClass*);
   static void *new_edmcLcLWrapperlEBXVectorlEl1tcLcLCaloRegiongRsPgR(void *p = 0);
   static void *newArray_edmcLcLWrapperlEBXVectorlEl1tcLcLCaloRegiongRsPgR(Long_t size, void *p);
   static void delete_edmcLcLWrapperlEBXVectorlEl1tcLcLCaloRegiongRsPgR(void *p);
   static void deleteArray_edmcLcLWrapperlEBXVectorlEl1tcLcLCaloRegiongRsPgR(void *p);
   static void destruct_edmcLcLWrapperlEBXVectorlEl1tcLcLCaloRegiongRsPgR(void *p);

   // Function generating the singleton type initializer
   static TGenericClassInfo *GenerateInitInstanceLocal(const ::edm::Wrapper<BXVector<l1t::CaloRegion> >*)
   {
      ::edm::Wrapper<BXVector<l1t::CaloRegion> > *ptr = 0;
      static ::TVirtualIsAProxy* isa_proxy = new ::TIsAProxy(typeid(::edm::Wrapper<BXVector<l1t::CaloRegion> >));
      static ::ROOT::TGenericClassInfo 
         instance("edm::Wrapper<BXVector<l1t::CaloRegion> >", ::edm::Wrapper<BXVector<l1t::CaloRegion> >::Class_Version(), "DataFormats/Common/interface/Wrapper.h", 25,
                  typeid(::edm::Wrapper<BXVector<l1t::CaloRegion> >), ::ROOT::Internal::DefineBehavior(ptr, ptr),
                  &edmcLcLWrapperlEBXVectorlEl1tcLcLCaloRegiongRsPgR_Dictionary, isa_proxy, 0,
                  sizeof(::edm::Wrapper<BXVector<l1t::CaloRegion> >) );
      instance.SetNew(&new_edmcLcLWrapperlEBXVectorlEl1tcLcLCaloRegiongRsPgR);
      instance.SetNewArray(&newArray_edmcLcLWrapperlEBXVectorlEl1tcLcLCaloRegiongRsPgR);
      instance.SetDelete(&delete_edmcLcLWrapperlEBXVectorlEl1tcLcLCaloRegiongRsPgR);
      instance.SetDeleteArray(&deleteArray_edmcLcLWrapperlEBXVectorlEl1tcLcLCaloRegiongRsPgR);
      instance.SetDestructor(&destruct_edmcLcLWrapperlEBXVectorlEl1tcLcLCaloRegiongRsPgR);

      ::ROOT::AddClassAlternate("edm::Wrapper<BXVector<l1t::CaloRegion> >","edm::Wrapper<l1t::CaloRegionBxCollection>");
      return &instance;
   }
   TGenericClassInfo *GenerateInitInstance(const ::edm::Wrapper<BXVector<l1t::CaloRegion> >*)
   {
      return GenerateInitInstanceLocal((::edm::Wrapper<BXVector<l1t::CaloRegion> >*)0);
   }
   // Static variable to force the class initialization
   static ::ROOT::TGenericClassInfo *_R__UNIQUE_(Init) = GenerateInitInstanceLocal((const ::edm::Wrapper<BXVector<l1t::CaloRegion> >*)0x0); R__UseDummy(_R__UNIQUE_(Init));

   // Dictionary for non-ClassDef classes
   static TClass *edmcLcLWrapperlEBXVectorlEl1tcLcLCaloRegiongRsPgR_Dictionary() {
      TClass* theClass =::ROOT::GenerateInitInstanceLocal((const ::edm::Wrapper<BXVector<l1t::CaloRegion> >*)0x0)->GetClass();
      edmcLcLWrapperlEBXVectorlEl1tcLcLCaloRegiongRsPgR_TClassManip(theClass);
   return theClass;
   }

   static void edmcLcLWrapperlEBXVectorlEl1tcLcLCaloRegiongRsPgR_TClassManip(TClass* ){
   }

} // end of namespace ROOT

namespace ROOT {
   static TClass *l1tcLcLCaloTower_Dictionary();
   static void l1tcLcLCaloTower_TClassManip(TClass*);
   static void *new_l1tcLcLCaloTower(void *p = 0);
   static void *newArray_l1tcLcLCaloTower(Long_t size, void *p);
   static void delete_l1tcLcLCaloTower(void *p);
   static void deleteArray_l1tcLcLCaloTower(void *p);
   static void destruct_l1tcLcLCaloTower(void *p);

   // Function generating the singleton type initializer
   static TGenericClassInfo *GenerateInitInstanceLocal(const ::l1t::CaloTower*)
   {
      ::l1t::CaloTower *ptr = 0;
      static ::TVirtualIsAProxy* isa_proxy = new ::TIsAProxy(typeid(::l1t::CaloTower));
      static ::ROOT::TGenericClassInfo 
         instance("l1t::CaloTower", "DataFormats/L1TCalorimeter/interface/CaloTower.h", 13,
                  typeid(::l1t::CaloTower), ::ROOT::Internal::DefineBehavior(ptr, ptr),
                  &l1tcLcLCaloTower_Dictionary, isa_proxy, 0,
                  sizeof(::l1t::CaloTower) );
      instance.SetNew(&new_l1tcLcLCaloTower);
      instance.SetNewArray(&newArray_l1tcLcLCaloTower);
      instance.SetDelete(&delete_l1tcLcLCaloTower);
      instance.SetDeleteArray(&deleteArray_l1tcLcLCaloTower);
      instance.SetDestructor(&destruct_l1tcLcLCaloTower);
      return &instance;
   }
   TGenericClassInfo *GenerateInitInstance(const ::l1t::CaloTower*)
   {
      return GenerateInitInstanceLocal((::l1t::CaloTower*)0);
   }
   // Static variable to force the class initialization
   static ::ROOT::TGenericClassInfo *_R__UNIQUE_(Init) = GenerateInitInstanceLocal((const ::l1t::CaloTower*)0x0); R__UseDummy(_R__UNIQUE_(Init));

   // Dictionary for non-ClassDef classes
   static TClass *l1tcLcLCaloTower_Dictionary() {
      TClass* theClass =::ROOT::GenerateInitInstanceLocal((const ::l1t::CaloTower*)0x0)->GetClass();
      l1tcLcLCaloTower_TClassManip(theClass);
   return theClass;
   }

   static void l1tcLcLCaloTower_TClassManip(TClass* ){
   }

} // end of namespace ROOT

namespace ROOT {
   static TClass *BXVectorlEl1tcLcLCaloTowergR_Dictionary();
   static void BXVectorlEl1tcLcLCaloTowergR_TClassManip(TClass*);
   static void *new_BXVectorlEl1tcLcLCaloTowergR(void *p = 0);
   static void *newArray_BXVectorlEl1tcLcLCaloTowergR(Long_t size, void *p);
   static void delete_BXVectorlEl1tcLcLCaloTowergR(void *p);
   static void deleteArray_BXVectorlEl1tcLcLCaloTowergR(void *p);
   static void destruct_BXVectorlEl1tcLcLCaloTowergR(void *p);

   // Function generating the singleton type initializer
   static TGenericClassInfo *GenerateInitInstanceLocal(const ::BXVector<l1t::CaloTower>*)
   {
      ::BXVector<l1t::CaloTower> *ptr = 0;
      static ::TVirtualIsAProxy* isa_proxy = new ::TIsAProxy(typeid(::BXVector<l1t::CaloTower>));
      static ::ROOT::TGenericClassInfo 
         instance("BXVector<l1t::CaloTower>", "DataFormats/L1Trigger/interface/BXVector.h", 15,
                  typeid(::BXVector<l1t::CaloTower>), ::ROOT::Internal::DefineBehavior(ptr, ptr),
                  &BXVectorlEl1tcLcLCaloTowergR_Dictionary, isa_proxy, 0,
                  sizeof(::BXVector<l1t::CaloTower>) );
      instance.SetNew(&new_BXVectorlEl1tcLcLCaloTowergR);
      instance.SetNewArray(&newArray_BXVectorlEl1tcLcLCaloTowergR);
      instance.SetDelete(&delete_BXVectorlEl1tcLcLCaloTowergR);
      instance.SetDeleteArray(&deleteArray_BXVectorlEl1tcLcLCaloTowergR);
      instance.SetDestructor(&destruct_BXVectorlEl1tcLcLCaloTowergR);

      ::ROOT::AddClassAlternate("BXVector<l1t::CaloTower>","l1t::CaloTowerBxCollection");
      return &instance;
   }
   TGenericClassInfo *GenerateInitInstance(const ::BXVector<l1t::CaloTower>*)
   {
      return GenerateInitInstanceLocal((::BXVector<l1t::CaloTower>*)0);
   }
   // Static variable to force the class initialization
   static ::ROOT::TGenericClassInfo *_R__UNIQUE_(Init) = GenerateInitInstanceLocal((const ::BXVector<l1t::CaloTower>*)0x0); R__UseDummy(_R__UNIQUE_(Init));

   // Dictionary for non-ClassDef classes
   static TClass *BXVectorlEl1tcLcLCaloTowergR_Dictionary() {
      TClass* theClass =::ROOT::GenerateInitInstanceLocal((const ::BXVector<l1t::CaloTower>*)0x0)->GetClass();
      BXVectorlEl1tcLcLCaloTowergR_TClassManip(theClass);
   return theClass;
   }

   static void BXVectorlEl1tcLcLCaloTowergR_TClassManip(TClass* ){
   }

} // end of namespace ROOT

namespace ROOT {
   static TClass *edmcLcLWrapperlEBXVectorlEl1tcLcLCaloTowergRsPgR_Dictionary();
   static void edmcLcLWrapperlEBXVectorlEl1tcLcLCaloTowergRsPgR_TClassManip(TClass*);
   static void *new_edmcLcLWrapperlEBXVectorlEl1tcLcLCaloTowergRsPgR(void *p = 0);
   static void *newArray_edmcLcLWrapperlEBXVectorlEl1tcLcLCaloTowergRsPgR(Long_t size, void *p);
   static void delete_edmcLcLWrapperlEBXVectorlEl1tcLcLCaloTowergRsPgR(void *p);
   static void deleteArray_edmcLcLWrapperlEBXVectorlEl1tcLcLCaloTowergRsPgR(void *p);
   static void destruct_edmcLcLWrapperlEBXVectorlEl1tcLcLCaloTowergRsPgR(void *p);

   // Function generating the singleton type initializer
   static TGenericClassInfo *GenerateInitInstanceLocal(const ::edm::Wrapper<BXVector<l1t::CaloTower> >*)
   {
      ::edm::Wrapper<BXVector<l1t::CaloTower> > *ptr = 0;
      static ::TVirtualIsAProxy* isa_proxy = new ::TIsAProxy(typeid(::edm::Wrapper<BXVector<l1t::CaloTower> >));
      static ::ROOT::TGenericClassInfo 
         instance("edm::Wrapper<BXVector<l1t::CaloTower> >", ::edm::Wrapper<BXVector<l1t::CaloTower> >::Class_Version(), "DataFormats/Common/interface/Wrapper.h", 25,
                  typeid(::edm::Wrapper<BXVector<l1t::CaloTower> >), ::ROOT::Internal::DefineBehavior(ptr, ptr),
                  &edmcLcLWrapperlEBXVectorlEl1tcLcLCaloTowergRsPgR_Dictionary, isa_proxy, 0,
                  sizeof(::edm::Wrapper<BXVector<l1t::CaloTower> >) );
      instance.SetNew(&new_edmcLcLWrapperlEBXVectorlEl1tcLcLCaloTowergRsPgR);
      instance.SetNewArray(&newArray_edmcLcLWrapperlEBXVectorlEl1tcLcLCaloTowergRsPgR);
      instance.SetDelete(&delete_edmcLcLWrapperlEBXVectorlEl1tcLcLCaloTowergRsPgR);
      instance.SetDeleteArray(&deleteArray_edmcLcLWrapperlEBXVectorlEl1tcLcLCaloTowergRsPgR);
      instance.SetDestructor(&destruct_edmcLcLWrapperlEBXVectorlEl1tcLcLCaloTowergRsPgR);

      ::ROOT::AddClassAlternate("edm::Wrapper<BXVector<l1t::CaloTower> >","edm::Wrapper<l1t::CaloTowerBxCollection>");
      return &instance;
   }
   TGenericClassInfo *GenerateInitInstance(const ::edm::Wrapper<BXVector<l1t::CaloTower> >*)
   {
      return GenerateInitInstanceLocal((::edm::Wrapper<BXVector<l1t::CaloTower> >*)0);
   }
   // Static variable to force the class initialization
   static ::ROOT::TGenericClassInfo *_R__UNIQUE_(Init) = GenerateInitInstanceLocal((const ::edm::Wrapper<BXVector<l1t::CaloTower> >*)0x0); R__UseDummy(_R__UNIQUE_(Init));

   // Dictionary for non-ClassDef classes
   static TClass *edmcLcLWrapperlEBXVectorlEl1tcLcLCaloTowergRsPgR_Dictionary() {
      TClass* theClass =::ROOT::GenerateInitInstanceLocal((const ::edm::Wrapper<BXVector<l1t::CaloTower> >*)0x0)->GetClass();
      edmcLcLWrapperlEBXVectorlEl1tcLcLCaloTowergRsPgR_TClassManip(theClass);
   return theClass;
   }

   static void edmcLcLWrapperlEBXVectorlEl1tcLcLCaloTowergRsPgR_TClassManip(TClass* ){
   }

} // end of namespace ROOT

namespace ROOT {
   static TClass *l1tcLcLCaloCluster_Dictionary();
   static void l1tcLcLCaloCluster_TClassManip(TClass*);
   static void *new_l1tcLcLCaloCluster(void *p = 0);
   static void *newArray_l1tcLcLCaloCluster(Long_t size, void *p);
   static void delete_l1tcLcLCaloCluster(void *p);
   static void deleteArray_l1tcLcLCaloCluster(void *p);
   static void destruct_l1tcLcLCaloCluster(void *p);

   // Function generating the singleton type initializer
   static TGenericClassInfo *GenerateInitInstanceLocal(const ::l1t::CaloCluster*)
   {
      ::l1t::CaloCluster *ptr = 0;
      static ::TVirtualIsAProxy* isa_proxy = new ::TIsAProxy(typeid(::l1t::CaloCluster));
      static ::ROOT::TGenericClassInfo 
         instance("l1t::CaloCluster", "DataFormats/L1TCalorimeter/interface/CaloCluster.h", 9,
                  typeid(::l1t::CaloCluster), ::ROOT::Internal::DefineBehavior(ptr, ptr),
                  &l1tcLcLCaloCluster_Dictionary, isa_proxy, 0,
                  sizeof(::l1t::CaloCluster) );
      instance.SetNew(&new_l1tcLcLCaloCluster);
      instance.SetNewArray(&newArray_l1tcLcLCaloCluster);
      instance.SetDelete(&delete_l1tcLcLCaloCluster);
      instance.SetDeleteArray(&deleteArray_l1tcLcLCaloCluster);
      instance.SetDestructor(&destruct_l1tcLcLCaloCluster);
      return &instance;
   }
   TGenericClassInfo *GenerateInitInstance(const ::l1t::CaloCluster*)
   {
      return GenerateInitInstanceLocal((::l1t::CaloCluster*)0);
   }
   // Static variable to force the class initialization
   static ::ROOT::TGenericClassInfo *_R__UNIQUE_(Init) = GenerateInitInstanceLocal((const ::l1t::CaloCluster*)0x0); R__UseDummy(_R__UNIQUE_(Init));

   // Dictionary for non-ClassDef classes
   static TClass *l1tcLcLCaloCluster_Dictionary() {
      TClass* theClass =::ROOT::GenerateInitInstanceLocal((const ::l1t::CaloCluster*)0x0)->GetClass();
      l1tcLcLCaloCluster_TClassManip(theClass);
   return theClass;
   }

   static void l1tcLcLCaloCluster_TClassManip(TClass* ){
   }

} // end of namespace ROOT

namespace ROOT {
   static TClass *BXVectorlEl1tcLcLCaloClustergR_Dictionary();
   static void BXVectorlEl1tcLcLCaloClustergR_TClassManip(TClass*);
   static void *new_BXVectorlEl1tcLcLCaloClustergR(void *p = 0);
   static void *newArray_BXVectorlEl1tcLcLCaloClustergR(Long_t size, void *p);
   static void delete_BXVectorlEl1tcLcLCaloClustergR(void *p);
   static void deleteArray_BXVectorlEl1tcLcLCaloClustergR(void *p);
   static void destruct_BXVectorlEl1tcLcLCaloClustergR(void *p);

   // Function generating the singleton type initializer
   static TGenericClassInfo *GenerateInitInstanceLocal(const ::BXVector<l1t::CaloCluster>*)
   {
      ::BXVector<l1t::CaloCluster> *ptr = 0;
      static ::TVirtualIsAProxy* isa_proxy = new ::TIsAProxy(typeid(::BXVector<l1t::CaloCluster>));
      static ::ROOT::TGenericClassInfo 
         instance("BXVector<l1t::CaloCluster>", "DataFormats/L1Trigger/interface/BXVector.h", 15,
                  typeid(::BXVector<l1t::CaloCluster>), ::ROOT::Internal::DefineBehavior(ptr, ptr),
                  &BXVectorlEl1tcLcLCaloClustergR_Dictionary, isa_proxy, 0,
                  sizeof(::BXVector<l1t::CaloCluster>) );
      instance.SetNew(&new_BXVectorlEl1tcLcLCaloClustergR);
      instance.SetNewArray(&newArray_BXVectorlEl1tcLcLCaloClustergR);
      instance.SetDelete(&delete_BXVectorlEl1tcLcLCaloClustergR);
      instance.SetDeleteArray(&deleteArray_BXVectorlEl1tcLcLCaloClustergR);
      instance.SetDestructor(&destruct_BXVectorlEl1tcLcLCaloClustergR);

      ::ROOT::AddClassAlternate("BXVector<l1t::CaloCluster>","l1t::CaloClusterBxCollection");
      return &instance;
   }
   TGenericClassInfo *GenerateInitInstance(const ::BXVector<l1t::CaloCluster>*)
   {
      return GenerateInitInstanceLocal((::BXVector<l1t::CaloCluster>*)0);
   }
   // Static variable to force the class initialization
   static ::ROOT::TGenericClassInfo *_R__UNIQUE_(Init) = GenerateInitInstanceLocal((const ::BXVector<l1t::CaloCluster>*)0x0); R__UseDummy(_R__UNIQUE_(Init));

   // Dictionary for non-ClassDef classes
   static TClass *BXVectorlEl1tcLcLCaloClustergR_Dictionary() {
      TClass* theClass =::ROOT::GenerateInitInstanceLocal((const ::BXVector<l1t::CaloCluster>*)0x0)->GetClass();
      BXVectorlEl1tcLcLCaloClustergR_TClassManip(theClass);
   return theClass;
   }

   static void BXVectorlEl1tcLcLCaloClustergR_TClassManip(TClass* ){
   }

} // end of namespace ROOT

namespace ROOT {
   static TClass *edmcLcLWrapperlEBXVectorlEl1tcLcLCaloClustergRsPgR_Dictionary();
   static void edmcLcLWrapperlEBXVectorlEl1tcLcLCaloClustergRsPgR_TClassManip(TClass*);
   static void *new_edmcLcLWrapperlEBXVectorlEl1tcLcLCaloClustergRsPgR(void *p = 0);
   static void *newArray_edmcLcLWrapperlEBXVectorlEl1tcLcLCaloClustergRsPgR(Long_t size, void *p);
   static void delete_edmcLcLWrapperlEBXVectorlEl1tcLcLCaloClustergRsPgR(void *p);
   static void deleteArray_edmcLcLWrapperlEBXVectorlEl1tcLcLCaloClustergRsPgR(void *p);
   static void destruct_edmcLcLWrapperlEBXVectorlEl1tcLcLCaloClustergRsPgR(void *p);

   // Function generating the singleton type initializer
   static TGenericClassInfo *GenerateInitInstanceLocal(const ::edm::Wrapper<BXVector<l1t::CaloCluster> >*)
   {
      ::edm::Wrapper<BXVector<l1t::CaloCluster> > *ptr = 0;
      static ::TVirtualIsAProxy* isa_proxy = new ::TIsAProxy(typeid(::edm::Wrapper<BXVector<l1t::CaloCluster> >));
      static ::ROOT::TGenericClassInfo 
         instance("edm::Wrapper<BXVector<l1t::CaloCluster> >", ::edm::Wrapper<BXVector<l1t::CaloCluster> >::Class_Version(), "DataFormats/Common/interface/Wrapper.h", 25,
                  typeid(::edm::Wrapper<BXVector<l1t::CaloCluster> >), ::ROOT::Internal::DefineBehavior(ptr, ptr),
                  &edmcLcLWrapperlEBXVectorlEl1tcLcLCaloClustergRsPgR_Dictionary, isa_proxy, 0,
                  sizeof(::edm::Wrapper<BXVector<l1t::CaloCluster> >) );
      instance.SetNew(&new_edmcLcLWrapperlEBXVectorlEl1tcLcLCaloClustergRsPgR);
      instance.SetNewArray(&newArray_edmcLcLWrapperlEBXVectorlEl1tcLcLCaloClustergRsPgR);
      instance.SetDelete(&delete_edmcLcLWrapperlEBXVectorlEl1tcLcLCaloClustergRsPgR);
      instance.SetDeleteArray(&deleteArray_edmcLcLWrapperlEBXVectorlEl1tcLcLCaloClustergRsPgR);
      instance.SetDestructor(&destruct_edmcLcLWrapperlEBXVectorlEl1tcLcLCaloClustergRsPgR);

      ::ROOT::AddClassAlternate("edm::Wrapper<BXVector<l1t::CaloCluster> >","edm::Wrapper<l1t::CaloClusterBxCollection>");
      return &instance;
   }
   TGenericClassInfo *GenerateInitInstance(const ::edm::Wrapper<BXVector<l1t::CaloCluster> >*)
   {
      return GenerateInitInstanceLocal((::edm::Wrapper<BXVector<l1t::CaloCluster> >*)0);
   }
   // Static variable to force the class initialization
   static ::ROOT::TGenericClassInfo *_R__UNIQUE_(Init) = GenerateInitInstanceLocal((const ::edm::Wrapper<BXVector<l1t::CaloCluster> >*)0x0); R__UseDummy(_R__UNIQUE_(Init));

   // Dictionary for non-ClassDef classes
   static TClass *edmcLcLWrapperlEBXVectorlEl1tcLcLCaloClustergRsPgR_Dictionary() {
      TClass* theClass =::ROOT::GenerateInitInstanceLocal((const ::edm::Wrapper<BXVector<l1t::CaloCluster> >*)0x0)->GetClass();
      edmcLcLWrapperlEBXVectorlEl1tcLcLCaloClustergRsPgR_TClassManip(theClass);
   return theClass;
   }

   static void edmcLcLWrapperlEBXVectorlEl1tcLcLCaloClustergRsPgR_TClassManip(TClass* ){
   }

} // end of namespace ROOT

namespace ROOT {
   // Wrappers around operator new
   static void *new_l1tcLcLCaloEmCand(void *p) {
      return  p ? ::new((::ROOT::Internal::TOperatorNewHelper*)p) ::l1t::CaloEmCand : new ::l1t::CaloEmCand;
   }
   static void *newArray_l1tcLcLCaloEmCand(Long_t nElements, void *p) {
      return p ? ::new((::ROOT::Internal::TOperatorNewHelper*)p) ::l1t::CaloEmCand[nElements] : new ::l1t::CaloEmCand[nElements];
   }
   // Wrapper around operator delete
   static void delete_l1tcLcLCaloEmCand(void *p) {
      delete ((::l1t::CaloEmCand*)p);
   }
   static void deleteArray_l1tcLcLCaloEmCand(void *p) {
      delete [] ((::l1t::CaloEmCand*)p);
   }
   static void destruct_l1tcLcLCaloEmCand(void *p) {
      typedef ::l1t::CaloEmCand current_t;
      ((current_t*)p)->~current_t();
   }
} // end of namespace ROOT for class ::l1t::CaloEmCand

namespace ROOT {
   // Wrappers around operator new
   static void *new_BXVectorlEl1tcLcLCaloEmCandgR(void *p) {
      return  p ? new(p) ::BXVector<l1t::CaloEmCand> : new ::BXVector<l1t::CaloEmCand>;
   }
   static void *newArray_BXVectorlEl1tcLcLCaloEmCandgR(Long_t nElements, void *p) {
      return p ? new(p) ::BXVector<l1t::CaloEmCand>[nElements] : new ::BXVector<l1t::CaloEmCand>[nElements];
   }
   // Wrapper around operator delete
   static void delete_BXVectorlEl1tcLcLCaloEmCandgR(void *p) {
      delete ((::BXVector<l1t::CaloEmCand>*)p);
   }
   static void deleteArray_BXVectorlEl1tcLcLCaloEmCandgR(void *p) {
      delete [] ((::BXVector<l1t::CaloEmCand>*)p);
   }
   static void destruct_BXVectorlEl1tcLcLCaloEmCandgR(void *p) {
      typedef ::BXVector<l1t::CaloEmCand> current_t;
      ((current_t*)p)->~current_t();
   }
} // end of namespace ROOT for class ::BXVector<l1t::CaloEmCand>

namespace ROOT {
   // Wrappers around operator new
   static void *new_edmcLcLWrapperlEBXVectorlEl1tcLcLCaloEmCandgRsPgR(void *p) {
      return  p ? ::new((::ROOT::Internal::TOperatorNewHelper*)p) ::edm::Wrapper<BXVector<l1t::CaloEmCand> > : new ::edm::Wrapper<BXVector<l1t::CaloEmCand> >;
   }
   static void *newArray_edmcLcLWrapperlEBXVectorlEl1tcLcLCaloEmCandgRsPgR(Long_t nElements, void *p) {
      return p ? ::new((::ROOT::Internal::TOperatorNewHelper*)p) ::edm::Wrapper<BXVector<l1t::CaloEmCand> >[nElements] : new ::edm::Wrapper<BXVector<l1t::CaloEmCand> >[nElements];
   }
   // Wrapper around operator delete
   static void delete_edmcLcLWrapperlEBXVectorlEl1tcLcLCaloEmCandgRsPgR(void *p) {
      delete ((::edm::Wrapper<BXVector<l1t::CaloEmCand> >*)p);
   }
   static void deleteArray_edmcLcLWrapperlEBXVectorlEl1tcLcLCaloEmCandgRsPgR(void *p) {
      delete [] ((::edm::Wrapper<BXVector<l1t::CaloEmCand> >*)p);
   }
   static void destruct_edmcLcLWrapperlEBXVectorlEl1tcLcLCaloEmCandgRsPgR(void *p) {
      typedef ::edm::Wrapper<BXVector<l1t::CaloEmCand> > current_t;
      ((current_t*)p)->~current_t();
   }
} // end of namespace ROOT for class ::edm::Wrapper<BXVector<l1t::CaloEmCand> >

namespace ROOT {
   // Wrappers around operator new
   static void *new_l1tcLcLCaloRegion(void *p) {
      return  p ? ::new((::ROOT::Internal::TOperatorNewHelper*)p) ::l1t::CaloRegion : new ::l1t::CaloRegion;
   }
   static void *newArray_l1tcLcLCaloRegion(Long_t nElements, void *p) {
      return p ? ::new((::ROOT::Internal::TOperatorNewHelper*)p) ::l1t::CaloRegion[nElements] : new ::l1t::CaloRegion[nElements];
   }
   // Wrapper around operator delete
   static void delete_l1tcLcLCaloRegion(void *p) {
      delete ((::l1t::CaloRegion*)p);
   }
   static void deleteArray_l1tcLcLCaloRegion(void *p) {
      delete [] ((::l1t::CaloRegion*)p);
   }
   static void destruct_l1tcLcLCaloRegion(void *p) {
      typedef ::l1t::CaloRegion current_t;
      ((current_t*)p)->~current_t();
   }
} // end of namespace ROOT for class ::l1t::CaloRegion

namespace ROOT {
   // Wrappers around operator new
   static void *new_BXVectorlEl1tcLcLCaloRegiongR(void *p) {
      return  p ? new(p) ::BXVector<l1t::CaloRegion> : new ::BXVector<l1t::CaloRegion>;
   }
   static void *newArray_BXVectorlEl1tcLcLCaloRegiongR(Long_t nElements, void *p) {
      return p ? new(p) ::BXVector<l1t::CaloRegion>[nElements] : new ::BXVector<l1t::CaloRegion>[nElements];
   }
   // Wrapper around operator delete
   static void delete_BXVectorlEl1tcLcLCaloRegiongR(void *p) {
      delete ((::BXVector<l1t::CaloRegion>*)p);
   }
   static void deleteArray_BXVectorlEl1tcLcLCaloRegiongR(void *p) {
      delete [] ((::BXVector<l1t::CaloRegion>*)p);
   }
   static void destruct_BXVectorlEl1tcLcLCaloRegiongR(void *p) {
      typedef ::BXVector<l1t::CaloRegion> current_t;
      ((current_t*)p)->~current_t();
   }
} // end of namespace ROOT for class ::BXVector<l1t::CaloRegion>

namespace ROOT {
   // Wrappers around operator new
   static void *new_edmcLcLWrapperlEBXVectorlEl1tcLcLCaloRegiongRsPgR(void *p) {
      return  p ? ::new((::ROOT::Internal::TOperatorNewHelper*)p) ::edm::Wrapper<BXVector<l1t::CaloRegion> > : new ::edm::Wrapper<BXVector<l1t::CaloRegion> >;
   }
   static void *newArray_edmcLcLWrapperlEBXVectorlEl1tcLcLCaloRegiongRsPgR(Long_t nElements, void *p) {
      return p ? ::new((::ROOT::Internal::TOperatorNewHelper*)p) ::edm::Wrapper<BXVector<l1t::CaloRegion> >[nElements] : new ::edm::Wrapper<BXVector<l1t::CaloRegion> >[nElements];
   }
   // Wrapper around operator delete
   static void delete_edmcLcLWrapperlEBXVectorlEl1tcLcLCaloRegiongRsPgR(void *p) {
      delete ((::edm::Wrapper<BXVector<l1t::CaloRegion> >*)p);
   }
   static void deleteArray_edmcLcLWrapperlEBXVectorlEl1tcLcLCaloRegiongRsPgR(void *p) {
      delete [] ((::edm::Wrapper<BXVector<l1t::CaloRegion> >*)p);
   }
   static void destruct_edmcLcLWrapperlEBXVectorlEl1tcLcLCaloRegiongRsPgR(void *p) {
      typedef ::edm::Wrapper<BXVector<l1t::CaloRegion> > current_t;
      ((current_t*)p)->~current_t();
   }
} // end of namespace ROOT for class ::edm::Wrapper<BXVector<l1t::CaloRegion> >

namespace ROOT {
   // Wrappers around operator new
   static void *new_l1tcLcLCaloTower(void *p) {
      return  p ? ::new((::ROOT::Internal::TOperatorNewHelper*)p) ::l1t::CaloTower : new ::l1t::CaloTower;
   }
   static void *newArray_l1tcLcLCaloTower(Long_t nElements, void *p) {
      return p ? ::new((::ROOT::Internal::TOperatorNewHelper*)p) ::l1t::CaloTower[nElements] : new ::l1t::CaloTower[nElements];
   }
   // Wrapper around operator delete
   static void delete_l1tcLcLCaloTower(void *p) {
      delete ((::l1t::CaloTower*)p);
   }
   static void deleteArray_l1tcLcLCaloTower(void *p) {
      delete [] ((::l1t::CaloTower*)p);
   }
   static void destruct_l1tcLcLCaloTower(void *p) {
      typedef ::l1t::CaloTower current_t;
      ((current_t*)p)->~current_t();
   }
} // end of namespace ROOT for class ::l1t::CaloTower

namespace ROOT {
   // Wrappers around operator new
   static void *new_BXVectorlEl1tcLcLCaloTowergR(void *p) {
      return  p ? new(p) ::BXVector<l1t::CaloTower> : new ::BXVector<l1t::CaloTower>;
   }
   static void *newArray_BXVectorlEl1tcLcLCaloTowergR(Long_t nElements, void *p) {
      return p ? new(p) ::BXVector<l1t::CaloTower>[nElements] : new ::BXVector<l1t::CaloTower>[nElements];
   }
   // Wrapper around operator delete
   static void delete_BXVectorlEl1tcLcLCaloTowergR(void *p) {
      delete ((::BXVector<l1t::CaloTower>*)p);
   }
   static void deleteArray_BXVectorlEl1tcLcLCaloTowergR(void *p) {
      delete [] ((::BXVector<l1t::CaloTower>*)p);
   }
   static void destruct_BXVectorlEl1tcLcLCaloTowergR(void *p) {
      typedef ::BXVector<l1t::CaloTower> current_t;
      ((current_t*)p)->~current_t();
   }
} // end of namespace ROOT for class ::BXVector<l1t::CaloTower>

namespace ROOT {
   // Wrappers around operator new
   static void *new_edmcLcLWrapperlEBXVectorlEl1tcLcLCaloTowergRsPgR(void *p) {
      return  p ? ::new((::ROOT::Internal::TOperatorNewHelper*)p) ::edm::Wrapper<BXVector<l1t::CaloTower> > : new ::edm::Wrapper<BXVector<l1t::CaloTower> >;
   }
   static void *newArray_edmcLcLWrapperlEBXVectorlEl1tcLcLCaloTowergRsPgR(Long_t nElements, void *p) {
      return p ? ::new((::ROOT::Internal::TOperatorNewHelper*)p) ::edm::Wrapper<BXVector<l1t::CaloTower> >[nElements] : new ::edm::Wrapper<BXVector<l1t::CaloTower> >[nElements];
   }
   // Wrapper around operator delete
   static void delete_edmcLcLWrapperlEBXVectorlEl1tcLcLCaloTowergRsPgR(void *p) {
      delete ((::edm::Wrapper<BXVector<l1t::CaloTower> >*)p);
   }
   static void deleteArray_edmcLcLWrapperlEBXVectorlEl1tcLcLCaloTowergRsPgR(void *p) {
      delete [] ((::edm::Wrapper<BXVector<l1t::CaloTower> >*)p);
   }
   static void destruct_edmcLcLWrapperlEBXVectorlEl1tcLcLCaloTowergRsPgR(void *p) {
      typedef ::edm::Wrapper<BXVector<l1t::CaloTower> > current_t;
      ((current_t*)p)->~current_t();
   }
} // end of namespace ROOT for class ::edm::Wrapper<BXVector<l1t::CaloTower> >

namespace ROOT {
   // Wrappers around operator new
   static void *new_l1tcLcLCaloCluster(void *p) {
      return  p ? ::new((::ROOT::Internal::TOperatorNewHelper*)p) ::l1t::CaloCluster : new ::l1t::CaloCluster;
   }
   static void *newArray_l1tcLcLCaloCluster(Long_t nElements, void *p) {
      return p ? ::new((::ROOT::Internal::TOperatorNewHelper*)p) ::l1t::CaloCluster[nElements] : new ::l1t::CaloCluster[nElements];
   }
   // Wrapper around operator delete
   static void delete_l1tcLcLCaloCluster(void *p) {
      delete ((::l1t::CaloCluster*)p);
   }
   static void deleteArray_l1tcLcLCaloCluster(void *p) {
      delete [] ((::l1t::CaloCluster*)p);
   }
   static void destruct_l1tcLcLCaloCluster(void *p) {
      typedef ::l1t::CaloCluster current_t;
      ((current_t*)p)->~current_t();
   }
} // end of namespace ROOT for class ::l1t::CaloCluster

namespace ROOT {
   // Wrappers around operator new
   static void *new_BXVectorlEl1tcLcLCaloClustergR(void *p) {
      return  p ? new(p) ::BXVector<l1t::CaloCluster> : new ::BXVector<l1t::CaloCluster>;
   }
   static void *newArray_BXVectorlEl1tcLcLCaloClustergR(Long_t nElements, void *p) {
      return p ? new(p) ::BXVector<l1t::CaloCluster>[nElements] : new ::BXVector<l1t::CaloCluster>[nElements];
   }
   // Wrapper around operator delete
   static void delete_BXVectorlEl1tcLcLCaloClustergR(void *p) {
      delete ((::BXVector<l1t::CaloCluster>*)p);
   }
   static void deleteArray_BXVectorlEl1tcLcLCaloClustergR(void *p) {
      delete [] ((::BXVector<l1t::CaloCluster>*)p);
   }
   static void destruct_BXVectorlEl1tcLcLCaloClustergR(void *p) {
      typedef ::BXVector<l1t::CaloCluster> current_t;
      ((current_t*)p)->~current_t();
   }
} // end of namespace ROOT for class ::BXVector<l1t::CaloCluster>

namespace ROOT {
   // Wrappers around operator new
   static void *new_edmcLcLWrapperlEBXVectorlEl1tcLcLCaloClustergRsPgR(void *p) {
      return  p ? ::new((::ROOT::Internal::TOperatorNewHelper*)p) ::edm::Wrapper<BXVector<l1t::CaloCluster> > : new ::edm::Wrapper<BXVector<l1t::CaloCluster> >;
   }
   static void *newArray_edmcLcLWrapperlEBXVectorlEl1tcLcLCaloClustergRsPgR(Long_t nElements, void *p) {
      return p ? ::new((::ROOT::Internal::TOperatorNewHelper*)p) ::edm::Wrapper<BXVector<l1t::CaloCluster> >[nElements] : new ::edm::Wrapper<BXVector<l1t::CaloCluster> >[nElements];
   }
   // Wrapper around operator delete
   static void delete_edmcLcLWrapperlEBXVectorlEl1tcLcLCaloClustergRsPgR(void *p) {
      delete ((::edm::Wrapper<BXVector<l1t::CaloCluster> >*)p);
   }
   static void deleteArray_edmcLcLWrapperlEBXVectorlEl1tcLcLCaloClustergRsPgR(void *p) {
      delete [] ((::edm::Wrapper<BXVector<l1t::CaloCluster> >*)p);
   }
   static void destruct_edmcLcLWrapperlEBXVectorlEl1tcLcLCaloClustergRsPgR(void *p) {
      typedef ::edm::Wrapper<BXVector<l1t::CaloCluster> > current_t;
      ((current_t*)p)->~current_t();
   }
} // end of namespace ROOT for class ::edm::Wrapper<BXVector<l1t::CaloCluster> >

namespace {
  void TriggerDictionaryInitialization_DataFormatsL1TCalorimeter_xr_Impl() {
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
#line 1 "DataFormatsL1TCalorimeter_xr dictionary forward declarations' payload"
#pragma clang diagnostic ignored "-Wkeyword-compat"
#pragma clang diagnostic ignored "-Wignored-attributes"
#pragma clang diagnostic ignored "-Wreturn-type-c-linkage"
extern int __Cling_Autoloading_Map;
namespace l1t{class __attribute__((annotate("$clingAutoload$DataFormats/L1TCalorimeter/interface/CaloEmCand.h")))  CaloEmCand;}
template <class T> class __attribute__((annotate("$clingAutoload$DataFormats/L1Trigger/interface/BXVector.h")))  BXVector;

namespace edm{template <typename T> class __attribute__((annotate("$clingAutoload$DataFormats/L1Trigger/interface/L1EmParticle.h")))  Wrapper;
}
namespace l1t{class __attribute__((annotate("$clingAutoload$DataFormats/L1TCalorimeter/interface/CaloRegion.h")))  CaloRegion;}
namespace l1t{class __attribute__((annotate("$clingAutoload$DataFormats/L1TCalorimeter/interface/CaloTower.h")))  CaloTower;}
namespace l1t{class __attribute__((annotate("$clingAutoload$DataFormats/L1TCalorimeter/interface/CaloCluster.h")))  CaloCluster;}
namespace l1t{typedef BXVector<l1t::CaloRegion> CaloRegionBxCollection __attribute__((annotate("$clingAutoload$DataFormats/L1TCalorimeter/interface/CaloRegion.h"))) ;}
namespace l1t{typedef BXVector<l1t::CaloEmCand> CaloEmCandBxCollection __attribute__((annotate("$clingAutoload$DataFormats/L1TCalorimeter/interface/CaloEmCand.h"))) ;}
namespace l1t{typedef BXVector<l1t::CaloTower> CaloTowerBxCollection __attribute__((annotate("$clingAutoload$DataFormats/L1TCalorimeter/interface/CaloTower.h"))) ;}
namespace l1t{typedef BXVector<l1t::CaloCluster> CaloClusterBxCollection __attribute__((annotate("$clingAutoload$DataFormats/L1TCalorimeter/interface/CaloCluster.h"))) ;}
)DICTFWDDCLS";
    static const char* payloadCode = R"DICTPAYLOAD(
#line 1 "DataFormatsL1TCalorimeter_xr dictionary payload"

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
#include "DataFormats/L1Trigger/interface/BXVector.h"

#include "DataFormats/L1TCalorimeter/interface/CaloRegion.h"
#include "DataFormats/L1TCalorimeter/interface/CaloEmCand.h"
#include "DataFormats/L1TCalorimeter/interface/CaloTower.h"
#include "DataFormats/L1TCalorimeter/interface/CaloCluster.h"

namespace DataFormats_L1TCalorimeter {
  struct dictionary {

    l1t::CaloRegionBxCollection  caloRegionBxColl;
    l1t::CaloEmCandBxCollection  caloEmCandBxColl;
    l1t::CaloTowerBxCollection   caloTowerBxColl;
    l1t::CaloClusterBxCollection caloClusterBxColl;

    edm::Wrapper<l1t::CaloRegionBxCollection>  w_caloRegionBxColl;
    edm::Wrapper<l1t::CaloEmCandBxCollection>  w_caloEmCandBxColl;
    edm::Wrapper<l1t::CaloTowerBxCollection>   w_caloTowerBxColl;
    edm::Wrapper<l1t::CaloClusterBxCollection> w_caloClusterBxColl;

  };
}

#undef  _BACKWARD_BACKWARD_WARNING_H
)DICTPAYLOAD";
    static const char* classesHeaders[]={
"BXVector<l1t::CaloCluster>", payloadCode, "@",
"BXVector<l1t::CaloEmCand>", payloadCode, "@",
"BXVector<l1t::CaloRegion>", payloadCode, "@",
"BXVector<l1t::CaloTower>", payloadCode, "@",
"edm::Wrapper<BXVector<l1t::CaloCluster> >", payloadCode, "@",
"edm::Wrapper<BXVector<l1t::CaloEmCand> >", payloadCode, "@",
"edm::Wrapper<BXVector<l1t::CaloRegion> >", payloadCode, "@",
"edm::Wrapper<BXVector<l1t::CaloTower> >", payloadCode, "@",
"edm::Wrapper<l1t::CaloClusterBxCollection>", payloadCode, "@",
"edm::Wrapper<l1t::CaloEmCandBxCollection>", payloadCode, "@",
"edm::Wrapper<l1t::CaloRegionBxCollection>", payloadCode, "@",
"edm::Wrapper<l1t::CaloTowerBxCollection>", payloadCode, "@",
"l1t::CaloCluster", payloadCode, "@",
"l1t::CaloClusterBxCollection", payloadCode, "@",
"l1t::CaloEmCand", payloadCode, "@",
"l1t::CaloEmCandBxCollection", payloadCode, "@",
"l1t::CaloRegion", payloadCode, "@",
"l1t::CaloRegionBxCollection", payloadCode, "@",
"l1t::CaloTower", payloadCode, "@",
"l1t::CaloTowerBxCollection", payloadCode, "@",
nullptr};

    static bool isInitialized = false;
    if (!isInitialized) {
      TROOT::RegisterModule("DataFormatsL1TCalorimeter_xr",
        headers, includePaths, payloadCode, fwdDeclCode,
        TriggerDictionaryInitialization_DataFormatsL1TCalorimeter_xr_Impl, {}, classesHeaders);
      isInitialized = true;
    }
  }
  static struct DictInit {
    DictInit() {
      TriggerDictionaryInitialization_DataFormatsL1TCalorimeter_xr_Impl();
    }
  } __TheDictionaryInitializer;
}
void TriggerDictionaryInitialization_DataFormatsL1TCalorimeter_xr() {
  TriggerDictionaryInitialization_DataFormatsL1TCalorimeter_xr_Impl();
}
