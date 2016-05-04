ALL_COMMONRULES += src_L1Trigger_L1TMuonEndCap_test
src_L1Trigger_L1TMuonEndCap_test_parent := L1Trigger/L1TMuonEndCap
src_L1Trigger_L1TMuonEndCap_test_INIT_FUNC += $$(eval $$(call CommonProductRules,src_L1Trigger_L1TMuonEndCap_test,src/L1Trigger/L1TMuonEndCap/test,TEST))
ALL_COMMONRULES += src_L1Trigger_L1TGlobal_test
src_L1Trigger_L1TGlobal_test_parent := L1Trigger/L1TGlobal
src_L1Trigger_L1TGlobal_test_INIT_FUNC += $$(eval $$(call CommonProductRules,src_L1Trigger_L1TGlobal_test,src/L1Trigger/L1TGlobal/test,TEST))
ifeq ($(strip $(PyL1TriggerL1TNtuples)),)
PyL1TriggerL1TNtuples := self/src/L1Trigger/L1TNtuples/python
src_L1Trigger_L1TNtuples_python_parent := 
ALL_PYTHON_DIRS += $(patsubst src/%,%,src/L1Trigger/L1TNtuples/python)
PyL1TriggerL1TNtuples_files := $(patsubst src/L1Trigger/L1TNtuples/python/%,%,$(wildcard $(foreach dir,src/L1Trigger/L1TNtuples/python ,$(foreach ext,$(SRC_FILES_SUFFIXES),$(dir)/*.$(ext)))))
PyL1TriggerL1TNtuples_LOC_USE := self  
PyL1TriggerL1TNtuples_PACKAGE := self/src/L1Trigger/L1TNtuples/python
ALL_PRODS += PyL1TriggerL1TNtuples
PyL1TriggerL1TNtuples_INIT_FUNC        += $$(eval $$(call PythonProduct,PyL1TriggerL1TNtuples,src/L1Trigger/L1TNtuples/python,src_L1Trigger_L1TNtuples_python,1,1,$(SCRAMSTORENAME_PYTHON),$(SCRAMSTORENAME_LIB),,))
else
$(eval $(call MultipleWarningMsg,PyL1TriggerL1TNtuples,src/L1Trigger/L1TNtuples/python))
endif
ALL_COMMONRULES += src_L1Trigger_L1TNtuples_python
src_L1Trigger_L1TNtuples_python_INIT_FUNC += $$(eval $$(call CommonProductRules,src_L1Trigger_L1TNtuples_python,src/L1Trigger/L1TNtuples/python,PYTHON))
ALL_PACKAGES += L1Trigger/L1TCaloLayer1
subdirs_src_L1Trigger_L1TCaloLayer1 := src_L1Trigger_L1TCaloLayer1_python src_L1Trigger_L1TCaloLayer1_src src_L1Trigger_L1TCaloLayer1_test src_L1Trigger_L1TCaloLayer1_plugins
ALL_SUBSYSTEMS+=DataFormats
subdirs_src_DataFormats = src_DataFormats_L1TMuon src_DataFormats_L1Trigger
ALL_PACKAGES += CondCore/L1TPlugins
subdirs_src_CondCore_L1TPlugins := src_CondCore_L1TPlugins_src
ALL_SUBSYSTEMS+=CondFormats
subdirs_src_CondFormats = src_CondFormats_L1TObjects
ifeq ($(strip $(PyL1TriggerL1TGlobal)),)
PyL1TriggerL1TGlobal := self/src/L1Trigger/L1TGlobal/python
src_L1Trigger_L1TGlobal_python_parent := 
ALL_PYTHON_DIRS += $(patsubst src/%,%,src/L1Trigger/L1TGlobal/python)
PyL1TriggerL1TGlobal_files := $(patsubst src/L1Trigger/L1TGlobal/python/%,%,$(wildcard $(foreach dir,src/L1Trigger/L1TGlobal/python ,$(foreach ext,$(SRC_FILES_SUFFIXES),$(dir)/*.$(ext)))))
PyL1TriggerL1TGlobal_LOC_USE := self  
PyL1TriggerL1TGlobal_PACKAGE := self/src/L1Trigger/L1TGlobal/python
ALL_PRODS += PyL1TriggerL1TGlobal
PyL1TriggerL1TGlobal_INIT_FUNC        += $$(eval $$(call PythonProduct,PyL1TriggerL1TGlobal,src/L1Trigger/L1TGlobal/python,src_L1Trigger_L1TGlobal_python,1,1,$(SCRAMSTORENAME_PYTHON),$(SCRAMSTORENAME_LIB),,))
else
$(eval $(call MultipleWarningMsg,PyL1TriggerL1TGlobal,src/L1Trigger/L1TGlobal/python))
endif
ALL_COMMONRULES += src_L1Trigger_L1TGlobal_python
src_L1Trigger_L1TGlobal_python_INIT_FUNC += $$(eval $$(call CommonProductRules,src_L1Trigger_L1TGlobal_python,src/L1Trigger/L1TGlobal/python,PYTHON))
ifeq ($(strip $(PyL1TriggerL1TMuonBarrel)),)
PyL1TriggerL1TMuonBarrel := self/src/L1Trigger/L1TMuonBarrel/python
src_L1Trigger_L1TMuonBarrel_python_parent := 
ALL_PYTHON_DIRS += $(patsubst src/%,%,src/L1Trigger/L1TMuonBarrel/python)
PyL1TriggerL1TMuonBarrel_files := $(patsubst src/L1Trigger/L1TMuonBarrel/python/%,%,$(wildcard $(foreach dir,src/L1Trigger/L1TMuonBarrel/python ,$(foreach ext,$(SRC_FILES_SUFFIXES),$(dir)/*.$(ext)))))
PyL1TriggerL1TMuonBarrel_LOC_USE := self  
PyL1TriggerL1TMuonBarrel_PACKAGE := self/src/L1Trigger/L1TMuonBarrel/python
ALL_PRODS += PyL1TriggerL1TMuonBarrel
PyL1TriggerL1TMuonBarrel_INIT_FUNC        += $$(eval $$(call PythonProduct,PyL1TriggerL1TMuonBarrel,src/L1Trigger/L1TMuonBarrel/python,src_L1Trigger_L1TMuonBarrel_python,1,1,$(SCRAMSTORENAME_PYTHON),$(SCRAMSTORENAME_LIB),,))
else
$(eval $(call MultipleWarningMsg,PyL1TriggerL1TMuonBarrel,src/L1Trigger/L1TMuonBarrel/python))
endif
ALL_COMMONRULES += src_L1Trigger_L1TMuonBarrel_python
src_L1Trigger_L1TMuonBarrel_python_INIT_FUNC += $$(eval $$(call CommonProductRules,src_L1Trigger_L1TMuonBarrel_python,src/L1Trigger/L1TMuonBarrel/python,PYTHON))
ALL_PACKAGES += CondCore/Utilities
subdirs_src_CondCore_Utilities := src_CondCore_Utilities_scripts src_CondCore_Utilities_python src_CondCore_Utilities_src src_CondCore_Utilities_test src_CondCore_Utilities_plugins src_CondCore_Utilities_bin
src_L1Trigger_L1TCommon_scripts_files := $(filter-out \#% %\#,$(notdir $(wildcard $(foreach dir,$(LOCALTOP)/src/L1Trigger/L1TCommon/scripts,$(dir)/*))))
$(eval $(call Src2StoreCopy,src_L1Trigger_L1TCommon_scripts,src/L1Trigger/L1TCommon/scripts,$(SCRAMSTORENAME_BIN),*))
ALL_COMMONRULES += src_EventFilter_L1TRawToDigi_test
src_EventFilter_L1TRawToDigi_test_parent := EventFilter/L1TRawToDigi
src_EventFilter_L1TRawToDigi_test_INIT_FUNC += $$(eval $$(call CommonProductRules,src_EventFilter_L1TRawToDigi_test,src/EventFilter/L1TRawToDigi/test,TEST))
ifeq ($(strip $(PyCondCoreUtilities)),)
PyCondCoreUtilities := self/src/CondCore/Utilities/python
src_CondCore_Utilities_python_parent := 
ALL_PYTHON_DIRS += $(patsubst src/%,%,src/CondCore/Utilities/python)
PyCondCoreUtilities_files := $(patsubst src/CondCore/Utilities/python/%,%,$(wildcard $(foreach dir,src/CondCore/Utilities/python ,$(foreach ext,$(SRC_FILES_SUFFIXES),$(dir)/*.$(ext)))))
PyCondCoreUtilities_LOC_USE := self  
PyCondCoreUtilities_PACKAGE := self/src/CondCore/Utilities/python
ALL_PRODS += PyCondCoreUtilities
PyCondCoreUtilities_INIT_FUNC        += $$(eval $$(call PythonProduct,PyCondCoreUtilities,src/CondCore/Utilities/python,src_CondCore_Utilities_python,1,1,$(SCRAMSTORENAME_PYTHON),$(SCRAMSTORENAME_LIB),,))
else
$(eval $(call MultipleWarningMsg,PyCondCoreUtilities,src/CondCore/Utilities/python))
endif
ALL_COMMONRULES += src_CondCore_Utilities_python
src_CondCore_Utilities_python_INIT_FUNC += $$(eval $$(call CommonProductRules,src_CondCore_Utilities_python,src/CondCore/Utilities/python,PYTHON))
ALL_PACKAGES += L1Trigger/Configuration
subdirs_src_L1Trigger_Configuration := src_L1Trigger_Configuration_python src_L1Trigger_Configuration_test
ALL_COMMONRULES += src_L1Trigger_L1TCalorimeter_test
src_L1Trigger_L1TCalorimeter_test_parent := L1Trigger/L1TCalorimeter
src_L1Trigger_L1TCalorimeter_test_INIT_FUNC += $$(eval $$(call CommonProductRules,src_L1Trigger_L1TCalorimeter_test,src/L1Trigger/L1TCalorimeter/test,TEST))
ALL_COMMONRULES += src_L1Trigger_Configuration_test
src_L1Trigger_Configuration_test_parent := L1Trigger/Configuration
src_L1Trigger_Configuration_test_INIT_FUNC += $$(eval $$(call CommonProductRules,src_L1Trigger_Configuration_test,src/L1Trigger/Configuration/test,TEST))
ALL_SUBSYSTEMS+=L1Trigger
subdirs_src_L1Trigger = src_L1Trigger_L1TMuonBarrel src_L1Trigger_L1TNtuples src_L1Trigger_L1TGlobal src_L1Trigger_L1TMuon src_L1Trigger_L1TCaloLayer1 src_L1Trigger_L1TCalorimeter src_L1Trigger_L1TMuonOverlap src_L1Trigger_L1TMuonEndCap src_L1Trigger_L1TCommon src_L1Trigger_Configuration
ALL_COMMONRULES += src_CondCore_EcalPlugins_test
src_CondCore_EcalPlugins_test_parent := CondCore/EcalPlugins
src_CondCore_EcalPlugins_test_INIT_FUNC += $$(eval $$(call CommonProductRules,src_CondCore_EcalPlugins_test,src/CondCore/EcalPlugins/test,TEST))
ALL_PACKAGES += L1Trigger/L1TCalorimeter
subdirs_src_L1Trigger_L1TCalorimeter := src_L1Trigger_L1TCalorimeter_python src_L1Trigger_L1TCalorimeter_src src_L1Trigger_L1TCalorimeter_test src_L1Trigger_L1TCalorimeter_plugins src_L1Trigger_L1TCalorimeter_interface
ifeq ($(strip $(PyEventFilterL1TRawToDigi)),)
PyEventFilterL1TRawToDigi := self/src/EventFilter/L1TRawToDigi/python
src_EventFilter_L1TRawToDigi_python_parent := 
ALL_PYTHON_DIRS += $(patsubst src/%,%,src/EventFilter/L1TRawToDigi/python)
PyEventFilterL1TRawToDigi_files := $(patsubst src/EventFilter/L1TRawToDigi/python/%,%,$(wildcard $(foreach dir,src/EventFilter/L1TRawToDigi/python ,$(foreach ext,$(SRC_FILES_SUFFIXES),$(dir)/*.$(ext)))))
PyEventFilterL1TRawToDigi_LOC_USE := self  
PyEventFilterL1TRawToDigi_PACKAGE := self/src/EventFilter/L1TRawToDigi/python
ALL_PRODS += PyEventFilterL1TRawToDigi
PyEventFilterL1TRawToDigi_INIT_FUNC        += $$(eval $$(call PythonProduct,PyEventFilterL1TRawToDigi,src/EventFilter/L1TRawToDigi/python,src_EventFilter_L1TRawToDigi_python,1,1,$(SCRAMSTORENAME_PYTHON),$(SCRAMSTORENAME_LIB),,))
else
$(eval $(call MultipleWarningMsg,PyEventFilterL1TRawToDigi,src/EventFilter/L1TRawToDigi/python))
endif
ALL_COMMONRULES += src_EventFilter_L1TRawToDigi_python
src_EventFilter_L1TRawToDigi_python_INIT_FUNC += $$(eval $$(call CommonProductRules,src_EventFilter_L1TRawToDigi_python,src/EventFilter/L1TRawToDigi/python,PYTHON))
ifeq ($(strip $(PyL1TriggerL1TMuon)),)
PyL1TriggerL1TMuon := self/src/L1Trigger/L1TMuon/python
src_L1Trigger_L1TMuon_python_parent := 
ALL_PYTHON_DIRS += $(patsubst src/%,%,src/L1Trigger/L1TMuon/python)
PyL1TriggerL1TMuon_files := $(patsubst src/L1Trigger/L1TMuon/python/%,%,$(wildcard $(foreach dir,src/L1Trigger/L1TMuon/python ,$(foreach ext,$(SRC_FILES_SUFFIXES),$(dir)/*.$(ext)))))
PyL1TriggerL1TMuon_LOC_USE := self  
PyL1TriggerL1TMuon_PACKAGE := self/src/L1Trigger/L1TMuon/python
ALL_PRODS += PyL1TriggerL1TMuon
PyL1TriggerL1TMuon_INIT_FUNC        += $$(eval $$(call PythonProduct,PyL1TriggerL1TMuon,src/L1Trigger/L1TMuon/python,src_L1Trigger_L1TMuon_python,1,1,$(SCRAMSTORENAME_PYTHON),$(SCRAMSTORENAME_LIB),,))
else
$(eval $(call MultipleWarningMsg,PyL1TriggerL1TMuon,src/L1Trigger/L1TMuon/python))
endif
ALL_COMMONRULES += src_L1Trigger_L1TMuon_python
src_L1Trigger_L1TMuon_python_INIT_FUNC += $$(eval $$(call CommonProductRules,src_L1Trigger_L1TMuon_python,src/L1Trigger/L1TMuon/python,PYTHON))
ALL_SUBSYSTEMS+=EventFilter
subdirs_src_EventFilter = src_EventFilter_L1TRawToDigi src_EventFilter_L1TXRawToDigi
ALL_PACKAGES += EventFilter/L1TXRawToDigi
subdirs_src_EventFilter_L1TXRawToDigi := src_EventFilter_L1TXRawToDigi_python src_EventFilter_L1TXRawToDigi_test src_EventFilter_L1TXRawToDigi_plugins
ALL_PACKAGES += EventFilter/L1TRawToDigi
subdirs_src_EventFilter_L1TRawToDigi := src_EventFilter_L1TRawToDigi_python src_EventFilter_L1TRawToDigi_src src_EventFilter_L1TRawToDigi_utils src_EventFilter_L1TRawToDigi_test src_EventFilter_L1TRawToDigi_plugins src_EventFilter_L1TRawToDigi_interface src_EventFilter_L1TRawToDigi_docs
ifeq ($(strip $(PyL1TriggerL1TMuonEndCap)),)
PyL1TriggerL1TMuonEndCap := self/src/L1Trigger/L1TMuonEndCap/python
src_L1Trigger_L1TMuonEndCap_python_parent := 
ALL_PYTHON_DIRS += $(patsubst src/%,%,src/L1Trigger/L1TMuonEndCap/python)
PyL1TriggerL1TMuonEndCap_files := $(patsubst src/L1Trigger/L1TMuonEndCap/python/%,%,$(wildcard $(foreach dir,src/L1Trigger/L1TMuonEndCap/python ,$(foreach ext,$(SRC_FILES_SUFFIXES),$(dir)/*.$(ext)))))
PyL1TriggerL1TMuonEndCap_LOC_USE := self  
PyL1TriggerL1TMuonEndCap_PACKAGE := self/src/L1Trigger/L1TMuonEndCap/python
ALL_PRODS += PyL1TriggerL1TMuonEndCap
PyL1TriggerL1TMuonEndCap_INIT_FUNC        += $$(eval $$(call PythonProduct,PyL1TriggerL1TMuonEndCap,src/L1Trigger/L1TMuonEndCap/python,src_L1Trigger_L1TMuonEndCap_python,1,1,$(SCRAMSTORENAME_PYTHON),$(SCRAMSTORENAME_LIB),,))
else
$(eval $(call MultipleWarningMsg,PyL1TriggerL1TMuonEndCap,src/L1Trigger/L1TMuonEndCap/python))
endif
ALL_COMMONRULES += src_L1Trigger_L1TMuonEndCap_python
src_L1Trigger_L1TMuonEndCap_python_INIT_FUNC += $$(eval $$(call CommonProductRules,src_L1Trigger_L1TMuonEndCap_python,src/L1Trigger/L1TMuonEndCap/python,PYTHON))
ifeq ($(strip $(testSerializationL1TObjects)),)
testSerializationL1TObjects_files := $(patsubst src/CondFormats/L1TObjects/test/%,%,$(foreach file,testSerializationL1TObjects.cpp,$(eval xfile:=$(wildcard src/CondFormats/L1TObjects/test/$(file)))$(if $(xfile),$(xfile),$(warning No such file exists: src/CondFormats/L1TObjects/test/$(file). Please fix src/CondFormats/L1TObjects/test/BuildFile.))))
testSerializationL1TObjects := self/src/CondFormats/L1TObjects/test
testSerializationL1TObjects_TEST_RUNNER_CMD :=  testSerializationL1TObjects 
testSerializationL1TObjects_BuildFile    := $(WORKINGDIR)/cache/bf/src/CondFormats/L1TObjects/test/BuildFile
testSerializationL1TObjects_LOC_USE := self  CondFormats/L1TObjects
testSerializationL1TObjects_PACKAGE := self/src/CondFormats/L1TObjects/test
ALL_PRODS += testSerializationL1TObjects
testSerializationL1TObjects_INIT_FUNC        += $$(eval $$(call Binary,testSerializationL1TObjects,src/CondFormats/L1TObjects/test,src_CondFormats_L1TObjects_test,$(SCRAMSTORENAME_BIN),,$(SCRAMSTORENAME_TEST),test,$(SCRAMSTORENAME_LOGS)))
testSerializationL1TObjects_CLASS := TEST
else
$(eval $(call MultipleWarningMsg,testSerializationL1TObjects,src/CondFormats/L1TObjects/test))
endif
ifeq ($(strip $(test_L1GtDefinitions)),)
test_L1GtDefinitions_files := $(patsubst src/CondFormats/L1TObjects/test/%,%,$(foreach file,test_L1GtDefinitions.cc,$(eval xfile:=$(wildcard src/CondFormats/L1TObjects/test/$(file)))$(if $(xfile),$(xfile),$(warning No such file exists: src/CondFormats/L1TObjects/test/$(file). Please fix src/CondFormats/L1TObjects/test/BuildFile.))))
test_L1GtDefinitions := self/src/CondFormats/L1TObjects/test
test_L1GtDefinitions_TEST_RUNNER_CMD :=  test_L1GtDefinitions 
test_L1GtDefinitions_BuildFile    := $(WORKINGDIR)/cache/bf/src/CondFormats/L1TObjects/test/BuildFile
test_L1GtDefinitions_LOC_USE := self  CondFormats/L1TObjects
test_L1GtDefinitions_PACKAGE := self/src/CondFormats/L1TObjects/test
ALL_PRODS += test_L1GtDefinitions
test_L1GtDefinitions_INIT_FUNC        += $$(eval $$(call Binary,test_L1GtDefinitions,src/CondFormats/L1TObjects/test,src_CondFormats_L1TObjects_test,$(SCRAMSTORENAME_BIN),,$(SCRAMSTORENAME_TEST),test,$(SCRAMSTORENAME_LOGS)))
test_L1GtDefinitions_CLASS := TEST
else
$(eval $(call MultipleWarningMsg,test_L1GtDefinitions,src/CondFormats/L1TObjects/test))
endif
ALL_COMMONRULES += src_CondFormats_L1TObjects_test
src_CondFormats_L1TObjects_test_parent := CondFormats/L1TObjects
src_CondFormats_L1TObjects_test_INIT_FUNC += $$(eval $$(call CommonProductRules,src_CondFormats_L1TObjects_test,src/CondFormats/L1TObjects/test,TEST))
ifeq ($(strip $(conddb_test_gt_load)),)
conddb_test_gt_load_files := $(patsubst src/CondCore/Utilities/bin/%,%,$(foreach file,conddb_test_gt_load.cpp,$(eval xfile:=$(wildcard src/CondCore/Utilities/bin/$(file)))$(if $(xfile),$(xfile),$(warning No such file exists: src/CondCore/Utilities/bin/$(file). Please fix src/CondCore/Utilities/bin/BuildFile.))))
conddb_test_gt_load := self/src/CondCore/Utilities/bin
conddb_test_gt_load_BuildFile    := $(WORKINGDIR)/cache/bf/src/CondCore/Utilities/bin/BuildFile
conddb_test_gt_load_LOC_FLAGS_CXXFLAGS   := -Wno-sign-compare -Wno-unused-variable -ftemplate-depth=600
conddb_test_gt_load_LOC_USE := self  CondCore/Utilities FWCore/Concurrency CondCore/CondDB
conddb_test_gt_load_PACKAGE := self/src/CondCore/Utilities/bin
ALL_PRODS += conddb_test_gt_load
conddb_test_gt_load_INIT_FUNC        += $$(eval $$(call Binary,conddb_test_gt_load,src/CondCore/Utilities/bin,src_CondCore_Utilities_bin,$(SCRAMSTORENAME_BIN),,$(SCRAMSTORENAME_BIN),bin,$(SCRAMSTORENAME_LOGS)))
conddb_test_gt_load_CLASS := BINARY
else
$(eval $(call MultipleWarningMsg,conddb_test_gt_load,src/CondCore/Utilities/bin))
endif
ifeq ($(strip $(conddb_test)),)
conddb_test_files := $(patsubst src/CondCore/Utilities/bin/%,%,$(foreach file,conddb_test.cpp,$(eval xfile:=$(wildcard src/CondCore/Utilities/bin/$(file)))$(if $(xfile),$(xfile),$(warning No such file exists: src/CondCore/Utilities/bin/$(file). Please fix src/CondCore/Utilities/bin/BuildFile.))))
conddb_test := self/src/CondCore/Utilities/bin
conddb_test_BuildFile    := $(WORKINGDIR)/cache/bf/src/CondCore/Utilities/bin/BuildFile
conddb_test_LOC_FLAGS_CXXFLAGS   := -Wno-sign-compare -Wno-unused-variable -ftemplate-depth=600
conddb_test_LOC_USE := self  CondCore/Utilities FWCore/Concurrency CondCore/CondDB
conddb_test_PACKAGE := self/src/CondCore/Utilities/bin
ALL_PRODS += conddb_test
conddb_test_INIT_FUNC        += $$(eval $$(call Binary,conddb_test,src/CondCore/Utilities/bin,src_CondCore_Utilities_bin,$(SCRAMSTORENAME_BIN),,$(SCRAMSTORENAME_BIN),bin,$(SCRAMSTORENAME_LOGS)))
conddb_test_CLASS := BINARY
else
$(eval $(call MultipleWarningMsg,conddb_test,src/CondCore/Utilities/bin))
endif
ifeq ($(strip $(conddb_import)),)
conddb_import_files := $(patsubst src/CondCore/Utilities/bin/%,%,$(foreach file,conddb_import.cpp,$(eval xfile:=$(wildcard src/CondCore/Utilities/bin/$(file)))$(if $(xfile),$(xfile),$(warning No such file exists: src/CondCore/Utilities/bin/$(file). Please fix src/CondCore/Utilities/bin/BuildFile.))))
conddb_import := self/src/CondCore/Utilities/bin
conddb_import_BuildFile    := $(WORKINGDIR)/cache/bf/src/CondCore/Utilities/bin/BuildFile
conddb_import_LOC_FLAGS_CXXFLAGS   := -Wno-sign-compare -Wno-unused-variable -ftemplate-depth=600
conddb_import_LOC_USE := self  CondCore/Utilities FWCore/Concurrency CondCore/CondDB
conddb_import_PACKAGE := self/src/CondCore/Utilities/bin
ALL_PRODS += conddb_import
conddb_import_INIT_FUNC        += $$(eval $$(call Binary,conddb_import,src/CondCore/Utilities/bin,src_CondCore_Utilities_bin,$(SCRAMSTORENAME_BIN),,$(SCRAMSTORENAME_BIN),bin,$(SCRAMSTORENAME_LOGS)))
conddb_import_CLASS := BINARY
else
$(eval $(call MultipleWarningMsg,conddb_import,src/CondCore/Utilities/bin))
endif
ifeq ($(strip $(conddb_copy_iov)),)
conddb_copy_iov_files := $(patsubst src/CondCore/Utilities/bin/%,%,$(foreach file,conddb_copy_iov.cpp,$(eval xfile:=$(wildcard src/CondCore/Utilities/bin/$(file)))$(if $(xfile),$(xfile),$(warning No such file exists: src/CondCore/Utilities/bin/$(file). Please fix src/CondCore/Utilities/bin/BuildFile.))))
conddb_copy_iov := self/src/CondCore/Utilities/bin
conddb_copy_iov_BuildFile    := $(WORKINGDIR)/cache/bf/src/CondCore/Utilities/bin/BuildFile
conddb_copy_iov_LOC_FLAGS_CXXFLAGS   := -Wno-sign-compare -Wno-unused-variable -ftemplate-depth=600
conddb_copy_iov_LOC_USE := self  CondCore/Utilities FWCore/Concurrency CondCore/CondDB
conddb_copy_iov_PACKAGE := self/src/CondCore/Utilities/bin
ALL_PRODS += conddb_copy_iov
conddb_copy_iov_INIT_FUNC        += $$(eval $$(call Binary,conddb_copy_iov,src/CondCore/Utilities/bin,src_CondCore_Utilities_bin,$(SCRAMSTORENAME_BIN),,$(SCRAMSTORENAME_BIN),bin,$(SCRAMSTORENAME_LOGS)))
conddb_copy_iov_CLASS := BINARY
else
$(eval $(call MultipleWarningMsg,conddb_copy_iov,src/CondCore/Utilities/bin))
endif
ifeq ($(strip $(conddb_test_gt_perf)),)
conddb_test_gt_perf_files := $(patsubst src/CondCore/Utilities/bin/%,%,$(foreach file,conddb_test_gt_perf.cpp,$(eval xfile:=$(wildcard src/CondCore/Utilities/bin/$(file)))$(if $(xfile),$(xfile),$(warning No such file exists: src/CondCore/Utilities/bin/$(file). Please fix src/CondCore/Utilities/bin/BuildFile.))))
conddb_test_gt_perf := self/src/CondCore/Utilities/bin
conddb_test_gt_perf_BuildFile    := $(WORKINGDIR)/cache/bf/src/CondCore/Utilities/bin/BuildFile
conddb_test_gt_perf_LOC_FLAGS_CXXFLAGS   := -Wno-sign-compare -Wno-unused-variable -ftemplate-depth=600
conddb_test_gt_perf_LOC_USE := self  CondCore/Utilities FWCore/Concurrency CondCore/CondDB
conddb_test_gt_perf_PACKAGE := self/src/CondCore/Utilities/bin
ALL_PRODS += conddb_test_gt_perf
conddb_test_gt_perf_INIT_FUNC        += $$(eval $$(call Binary,conddb_test_gt_perf,src/CondCore/Utilities/bin,src_CondCore_Utilities_bin,$(SCRAMSTORENAME_BIN),,$(SCRAMSTORENAME_BIN),bin,$(SCRAMSTORENAME_LOGS)))
conddb_test_gt_perf_CLASS := BINARY
else
$(eval $(call MultipleWarningMsg,conddb_test_gt_perf,src/CondCore/Utilities/bin))
endif
ifeq ($(strip $(cmscond_authentication_manager)),)
cmscond_authentication_manager_files := $(patsubst src/CondCore/Utilities/bin/%,%,$(foreach file,cmscond_authentication_manager.cpp,$(eval xfile:=$(wildcard src/CondCore/Utilities/bin/$(file)))$(if $(xfile),$(xfile),$(warning No such file exists: src/CondCore/Utilities/bin/$(file). Please fix src/CondCore/Utilities/bin/BuildFile.))))
cmscond_authentication_manager := self/src/CondCore/Utilities/bin
cmscond_authentication_manager_BuildFile    := $(WORKINGDIR)/cache/bf/src/CondCore/Utilities/bin/BuildFile
cmscond_authentication_manager_LOC_FLAGS_CXXFLAGS   := -Wno-sign-compare -Wno-unused-variable -ftemplate-depth=600
cmscond_authentication_manager_LOC_USE := self  CondCore/Utilities FWCore/Concurrency
cmscond_authentication_manager_PACKAGE := self/src/CondCore/Utilities/bin
ALL_PRODS += cmscond_authentication_manager
cmscond_authentication_manager_INIT_FUNC        += $$(eval $$(call Binary,cmscond_authentication_manager,src/CondCore/Utilities/bin,src_CondCore_Utilities_bin,$(SCRAMSTORENAME_BIN),,$(SCRAMSTORENAME_BIN),bin,$(SCRAMSTORENAME_LOGS)))
cmscond_authentication_manager_CLASS := BINARY
else
$(eval $(call MultipleWarningMsg,cmscond_authentication_manager,src/CondCore/Utilities/bin))
endif
ifeq ($(strip $(cmscond_key_mgr)),)
cmscond_key_mgr_files := $(patsubst src/CondCore/Utilities/bin/%,%,$(foreach file,cmscond_key_mgr.cpp,$(eval xfile:=$(wildcard src/CondCore/Utilities/bin/$(file)))$(if $(xfile),$(xfile),$(warning No such file exists: src/CondCore/Utilities/bin/$(file). Please fix src/CondCore/Utilities/bin/BuildFile.))))
cmscond_key_mgr := self/src/CondCore/Utilities/bin
cmscond_key_mgr_BuildFile    := $(WORKINGDIR)/cache/bf/src/CondCore/Utilities/bin/BuildFile
cmscond_key_mgr_LOC_FLAGS_CXXFLAGS   := -Wno-sign-compare -Wno-unused-variable -ftemplate-depth=600
cmscond_key_mgr_LOC_USE := self  CondCore/Utilities FWCore/Concurrency
cmscond_key_mgr_PACKAGE := self/src/CondCore/Utilities/bin
ALL_PRODS += cmscond_key_mgr
cmscond_key_mgr_INIT_FUNC        += $$(eval $$(call Binary,cmscond_key_mgr,src/CondCore/Utilities/bin,src_CondCore_Utilities_bin,$(SCRAMSTORENAME_BIN),,$(SCRAMSTORENAME_BIN),bin,$(SCRAMSTORENAME_LOGS)))
cmscond_key_mgr_CLASS := BINARY
else
$(eval $(call MultipleWarningMsg,cmscond_key_mgr,src/CondCore/Utilities/bin))
endif
ifeq ($(strip $(cmscond_from_lumiid)),)
cmscond_from_lumiid_files := $(patsubst src/CondCore/Utilities/bin/%,%,$(foreach file,cmscond_from_lumiid.cpp,$(eval xfile:=$(wildcard src/CondCore/Utilities/bin/$(file)))$(if $(xfile),$(xfile),$(warning No such file exists: src/CondCore/Utilities/bin/$(file). Please fix src/CondCore/Utilities/bin/BuildFile.))))
cmscond_from_lumiid := self/src/CondCore/Utilities/bin
cmscond_from_lumiid_BuildFile    := $(WORKINGDIR)/cache/bf/src/CondCore/Utilities/bin/BuildFile
cmscond_from_lumiid_LOC_FLAGS_CXXFLAGS   := -Wno-sign-compare -Wno-unused-variable -ftemplate-depth=600
cmscond_from_lumiid_LOC_USE := self  CondCore/Utilities FWCore/Concurrency DataFormats/Provenance
cmscond_from_lumiid_PACKAGE := self/src/CondCore/Utilities/bin
ALL_PRODS += cmscond_from_lumiid
cmscond_from_lumiid_INIT_FUNC        += $$(eval $$(call Binary,cmscond_from_lumiid,src/CondCore/Utilities/bin,src_CondCore_Utilities_bin,$(SCRAMSTORENAME_BIN),,$(SCRAMSTORENAME_BIN),bin,$(SCRAMSTORENAME_LOGS)))
cmscond_from_lumiid_CLASS := BINARY
else
$(eval $(call MultipleWarningMsg,cmscond_from_lumiid,src/CondCore/Utilities/bin))
endif
ifeq ($(strip $(cmscond_to_lumiid)),)
cmscond_to_lumiid_files := $(patsubst src/CondCore/Utilities/bin/%,%,$(foreach file,cmscond_to_lumiid.cpp,$(eval xfile:=$(wildcard src/CondCore/Utilities/bin/$(file)))$(if $(xfile),$(xfile),$(warning No such file exists: src/CondCore/Utilities/bin/$(file). Please fix src/CondCore/Utilities/bin/BuildFile.))))
cmscond_to_lumiid := self/src/CondCore/Utilities/bin
cmscond_to_lumiid_BuildFile    := $(WORKINGDIR)/cache/bf/src/CondCore/Utilities/bin/BuildFile
cmscond_to_lumiid_LOC_FLAGS_CXXFLAGS   := -Wno-sign-compare -Wno-unused-variable -ftemplate-depth=600
cmscond_to_lumiid_LOC_USE := self  CondCore/Utilities FWCore/Concurrency DataFormats/Provenance
cmscond_to_lumiid_PACKAGE := self/src/CondCore/Utilities/bin
ALL_PRODS += cmscond_to_lumiid
cmscond_to_lumiid_INIT_FUNC        += $$(eval $$(call Binary,cmscond_to_lumiid,src/CondCore/Utilities/bin,src_CondCore_Utilities_bin,$(SCRAMSTORENAME_BIN),,$(SCRAMSTORENAME_BIN),bin,$(SCRAMSTORENAME_LOGS)))
cmscond_to_lumiid_CLASS := BINARY
else
$(eval $(call MultipleWarningMsg,cmscond_to_lumiid,src/CondCore/Utilities/bin))
endif
ALL_COMMONRULES += src_CondCore_Utilities_bin
src_CondCore_Utilities_bin_parent := CondCore/Utilities
src_CondCore_Utilities_bin_INIT_FUNC += $$(eval $$(call CommonProductRules,src_CondCore_Utilities_bin,src/CondCore/Utilities/bin,BINARY))
ALL_PACKAGES += L1Trigger/L1TMuon
subdirs_src_L1Trigger_L1TMuon := src_L1Trigger_L1TMuon_python src_L1Trigger_L1TMuon_src src_L1Trigger_L1TMuon_test src_L1Trigger_L1TMuon_plugins src_L1Trigger_L1TMuon_data
ifeq ($(strip $(PyL1TriggerL1TMuonOverlap)),)
PyL1TriggerL1TMuonOverlap := self/src/L1Trigger/L1TMuonOverlap/python
src_L1Trigger_L1TMuonOverlap_python_parent := 
ALL_PYTHON_DIRS += $(patsubst src/%,%,src/L1Trigger/L1TMuonOverlap/python)
PyL1TriggerL1TMuonOverlap_files := $(patsubst src/L1Trigger/L1TMuonOverlap/python/%,%,$(wildcard $(foreach dir,src/L1Trigger/L1TMuonOverlap/python ,$(foreach ext,$(SRC_FILES_SUFFIXES),$(dir)/*.$(ext)))))
PyL1TriggerL1TMuonOverlap_LOC_USE := self  
PyL1TriggerL1TMuonOverlap_PACKAGE := self/src/L1Trigger/L1TMuonOverlap/python
ALL_PRODS += PyL1TriggerL1TMuonOverlap
PyL1TriggerL1TMuonOverlap_INIT_FUNC        += $$(eval $$(call PythonProduct,PyL1TriggerL1TMuonOverlap,src/L1Trigger/L1TMuonOverlap/python,src_L1Trigger_L1TMuonOverlap_python,1,1,$(SCRAMSTORENAME_PYTHON),$(SCRAMSTORENAME_LIB),,))
else
$(eval $(call MultipleWarningMsg,PyL1TriggerL1TMuonOverlap,src/L1Trigger/L1TMuonOverlap/python))
endif
ALL_COMMONRULES += src_L1Trigger_L1TMuonOverlap_python
src_L1Trigger_L1TMuonOverlap_python_INIT_FUNC += $$(eval $$(call CommonProductRules,src_L1Trigger_L1TMuonOverlap_python,src/L1Trigger/L1TMuonOverlap/python,PYTHON))
ifeq ($(strip $(PyL1TriggerConfiguration)),)
PyL1TriggerConfiguration := self/src/L1Trigger/Configuration/python
src_L1Trigger_Configuration_python_parent := 
ALL_PYTHON_DIRS += $(patsubst src/%,%,src/L1Trigger/Configuration/python)
PyL1TriggerConfiguration_files := $(patsubst src/L1Trigger/Configuration/python/%,%,$(wildcard $(foreach dir,src/L1Trigger/Configuration/python ,$(foreach ext,$(SRC_FILES_SUFFIXES),$(dir)/*.$(ext)))))
PyL1TriggerConfiguration_LOC_USE := self  
PyL1TriggerConfiguration_PACKAGE := self/src/L1Trigger/Configuration/python
ALL_PRODS += PyL1TriggerConfiguration
PyL1TriggerConfiguration_INIT_FUNC        += $$(eval $$(call PythonProduct,PyL1TriggerConfiguration,src/L1Trigger/Configuration/python,src_L1Trigger_Configuration_python,1,1,$(SCRAMSTORENAME_PYTHON),$(SCRAMSTORENAME_LIB),,))
else
$(eval $(call MultipleWarningMsg,PyL1TriggerConfiguration,src/L1Trigger/Configuration/python))
endif
ALL_COMMONRULES += src_L1Trigger_Configuration_python
src_L1Trigger_Configuration_python_INIT_FUNC += $$(eval $$(call CommonProductRules,src_L1Trigger_Configuration_python,src/L1Trigger/Configuration/python,PYTHON))
ALL_PACKAGES += DataFormats/L1Trigger
subdirs_src_DataFormats_L1Trigger := src_DataFormats_L1Trigger_src src_DataFormats_L1Trigger_interface src_DataFormats_L1Trigger_doc
ALL_PACKAGES += L1Trigger/L1TNtuples
subdirs_src_L1Trigger_L1TNtuples := src_L1Trigger_L1TNtuples_analysis src_L1Trigger_L1TNtuples_python src_L1Trigger_L1TNtuples_src src_L1Trigger_L1TNtuples_test src_L1Trigger_L1TNtuples_plugins src_L1Trigger_L1TNtuples_interface
ALL_PACKAGES += L1Trigger/L1TMuonOverlap
subdirs_src_L1Trigger_L1TMuonOverlap := src_L1Trigger_L1TMuonOverlap_python src_L1Trigger_L1TMuonOverlap_src src_L1Trigger_L1TMuonOverlap_test src_L1Trigger_L1TMuonOverlap_plugins
ALL_PACKAGES += L1Trigger/L1TMuonEndCap
subdirs_src_L1Trigger_L1TMuonEndCap := src_L1Trigger_L1TMuonEndCap_python src_L1Trigger_L1TMuonEndCap_src src_L1Trigger_L1TMuonEndCap_test src_L1Trigger_L1TMuonEndCap_plugins src_L1Trigger_L1TMuonEndCap_interface
ALL_COMMONRULES += src_L1Trigger_L1TNtuples_test
src_L1Trigger_L1TNtuples_test_parent := L1Trigger/L1TNtuples
src_L1Trigger_L1TNtuples_test_INIT_FUNC += $$(eval $$(call CommonProductRules,src_L1Trigger_L1TNtuples_test,src/L1Trigger/L1TNtuples/test,TEST))
ALL_PACKAGES += CondCore/EcalPlugins
subdirs_src_CondCore_EcalPlugins := src_CondCore_EcalPlugins_src src_CondCore_EcalPlugins_test src_CondCore_EcalPlugins_plugins
ALL_PACKAGES += L1Trigger/L1TGlobal
subdirs_src_L1Trigger_L1TGlobal := src_L1Trigger_L1TGlobal_scripts src_L1Trigger_L1TGlobal_python src_L1Trigger_L1TGlobal_src src_L1Trigger_L1TGlobal_test src_L1Trigger_L1TGlobal_plugins src_L1Trigger_L1TGlobal_interface src_L1Trigger_L1TGlobal_bin
ifeq ($(strip $(PyL1TriggerL1TCaloLayer1)),)
PyL1TriggerL1TCaloLayer1 := self/src/L1Trigger/L1TCaloLayer1/python
src_L1Trigger_L1TCaloLayer1_python_parent := 
ALL_PYTHON_DIRS += $(patsubst src/%,%,src/L1Trigger/L1TCaloLayer1/python)
PyL1TriggerL1TCaloLayer1_files := $(patsubst src/L1Trigger/L1TCaloLayer1/python/%,%,$(wildcard $(foreach dir,src/L1Trigger/L1TCaloLayer1/python ,$(foreach ext,$(SRC_FILES_SUFFIXES),$(dir)/*.$(ext)))))
PyL1TriggerL1TCaloLayer1_LOC_USE := self  
PyL1TriggerL1TCaloLayer1_PACKAGE := self/src/L1Trigger/L1TCaloLayer1/python
ALL_PRODS += PyL1TriggerL1TCaloLayer1
PyL1TriggerL1TCaloLayer1_INIT_FUNC        += $$(eval $$(call PythonProduct,PyL1TriggerL1TCaloLayer1,src/L1Trigger/L1TCaloLayer1/python,src_L1Trigger_L1TCaloLayer1_python,1,1,$(SCRAMSTORENAME_PYTHON),$(SCRAMSTORENAME_LIB),,))
else
$(eval $(call MultipleWarningMsg,PyL1TriggerL1TCaloLayer1,src/L1Trigger/L1TCaloLayer1/python))
endif
ALL_COMMONRULES += src_L1Trigger_L1TCaloLayer1_python
src_L1Trigger_L1TCaloLayer1_python_INIT_FUNC += $$(eval $$(call CommonProductRules,src_L1Trigger_L1TCaloLayer1_python,src/L1Trigger/L1TCaloLayer1/python,PYTHON))
ALL_COMMONRULES += src_L1Trigger_L1TMuonBarrel_test
src_L1Trigger_L1TMuonBarrel_test_parent := L1Trigger/L1TMuonBarrel
src_L1Trigger_L1TMuonBarrel_test_INIT_FUNC += $$(eval $$(call CommonProductRules,src_L1Trigger_L1TMuonBarrel_test,src/L1Trigger/L1TMuonBarrel/test,TEST))
ALL_PACKAGES += L1Trigger/L1TCommon
subdirs_src_L1Trigger_L1TCommon := src_L1Trigger_L1TCommon_scripts src_L1Trigger_L1TCommon_python src_L1Trigger_L1TCommon_test src_L1Trigger_L1TCommon_plugins src_L1Trigger_L1TCommon_macros
ifeq ($(strip $(testUCTUnpacker)),)
testUCTUnpacker_files := $(patsubst src/EventFilter/L1TXRawToDigi/test/%,%,$(foreach file,testUCTUnpacker.cpp,$(eval xfile:=$(wildcard src/EventFilter/L1TXRawToDigi/test/$(file)))$(if $(xfile),$(xfile),$(warning No such file exists: src/EventFilter/L1TXRawToDigi/test/$(file). Please fix src/EventFilter/L1TXRawToDigi/test/BuildFile.))))
testUCTUnpacker := self/src/EventFilter/L1TXRawToDigi/test
testUCTUnpacker_TEST_RUNNER_CMD :=  testUCTUnpacker 
testUCTUnpacker_BuildFile    := $(WORKINGDIR)/cache/bf/src/EventFilter/L1TXRawToDigi/test/BuildFile
testUCTUnpacker_LOC_USE := self  FWCore/Framework FWCore/ParameterSet FWCore/PluginManager FWCore/MessageLogger DataFormats/FEDRawData EventFilter/L1TXRawToDigi
testUCTUnpacker_PACKAGE := self/src/EventFilter/L1TXRawToDigi/test
ALL_PRODS += testUCTUnpacker
testUCTUnpacker_INIT_FUNC        += $$(eval $$(call Binary,testUCTUnpacker,src/EventFilter/L1TXRawToDigi/test,src_EventFilter_L1TXRawToDigi_test,$(SCRAMSTORENAME_BIN),,$(SCRAMSTORENAME_TEST),test,$(SCRAMSTORENAME_LOGS)))
testUCTUnpacker_CLASS := TEST
else
$(eval $(call MultipleWarningMsg,testUCTUnpacker,src/EventFilter/L1TXRawToDigi/test))
endif
ALL_COMMONRULES += src_EventFilter_L1TXRawToDigi_test
src_EventFilter_L1TXRawToDigi_test_parent := EventFilter/L1TXRawToDigi
src_EventFilter_L1TXRawToDigi_test_INIT_FUNC += $$(eval $$(call CommonProductRules,src_EventFilter_L1TXRawToDigi_test,src/EventFilter/L1TXRawToDigi/test,TEST))
ALL_PACKAGES += DQM/L1TMonitor
subdirs_src_DQM_L1TMonitor := src_DQM_L1TMonitor_python src_DQM_L1TMonitor_src src_DQM_L1TMonitor_test
ALL_PACKAGES += DataFormats/L1TMuon
subdirs_src_DataFormats_L1TMuon := src_DataFormats_L1TMuon_src
ALL_COMMONRULES += src_DQM_L1TMonitor_test
src_DQM_L1TMonitor_test_parent := DQM/L1TMonitor
src_DQM_L1TMonitor_test_INIT_FUNC += $$(eval $$(call CommonProductRules,src_DQM_L1TMonitor_test,src/DQM/L1TMonitor/test,TEST))
ifeq ($(strip $(PyEventFilterL1TXRawToDigi)),)
PyEventFilterL1TXRawToDigi := self/src/EventFilter/L1TXRawToDigi/python
src_EventFilter_L1TXRawToDigi_python_parent := 
ALL_PYTHON_DIRS += $(patsubst src/%,%,src/EventFilter/L1TXRawToDigi/python)
PyEventFilterL1TXRawToDigi_files := $(patsubst src/EventFilter/L1TXRawToDigi/python/%,%,$(wildcard $(foreach dir,src/EventFilter/L1TXRawToDigi/python ,$(foreach ext,$(SRC_FILES_SUFFIXES),$(dir)/*.$(ext)))))
PyEventFilterL1TXRawToDigi_LOC_USE := self  
PyEventFilterL1TXRawToDigi_PACKAGE := self/src/EventFilter/L1TXRawToDigi/python
ALL_PRODS += PyEventFilterL1TXRawToDigi
PyEventFilterL1TXRawToDigi_INIT_FUNC        += $$(eval $$(call PythonProduct,PyEventFilterL1TXRawToDigi,src/EventFilter/L1TXRawToDigi/python,src_EventFilter_L1TXRawToDigi_python,1,1,$(SCRAMSTORENAME_PYTHON),$(SCRAMSTORENAME_LIB),,))
else
$(eval $(call MultipleWarningMsg,PyEventFilterL1TXRawToDigi,src/EventFilter/L1TXRawToDigi/python))
endif
ALL_COMMONRULES += src_EventFilter_L1TXRawToDigi_python
src_EventFilter_L1TXRawToDigi_python_INIT_FUNC += $$(eval $$(call CommonProductRules,src_EventFilter_L1TXRawToDigi_python,src/EventFilter/L1TXRawToDigi/python,PYTHON))
ALL_COMMONRULES += src_L1Trigger_L1TMuon_test
src_L1Trigger_L1TMuon_test_parent := L1Trigger/L1TMuon
src_L1Trigger_L1TMuon_test_INIT_FUNC += $$(eval $$(call CommonProductRules,src_L1Trigger_L1TMuon_test,src/L1Trigger/L1TMuon/test,TEST))
ALL_PACKAGES += L1Trigger/L1TMuonBarrel
subdirs_src_L1Trigger_L1TMuonBarrel := src_L1Trigger_L1TMuonBarrel_python src_L1Trigger_L1TMuonBarrel_src src_L1Trigger_L1TMuonBarrel_test src_L1Trigger_L1TMuonBarrel_plugins src_L1Trigger_L1TMuonBarrel_interface
ALL_PACKAGES += CondCore/SiStripPlugins
subdirs_src_CondCore_SiStripPlugins := src_CondCore_SiStripPlugins_src src_CondCore_SiStripPlugins_plugins
ALL_SUBSYSTEMS+=DQM
subdirs_src_DQM = src_DQM_L1TMonitor
ifeq ($(strip $(PyL1TriggerL1TCalorimeter)),)
PyL1TriggerL1TCalorimeter := self/src/L1Trigger/L1TCalorimeter/python
src_L1Trigger_L1TCalorimeter_python_parent := 
ALL_PYTHON_DIRS += $(patsubst src/%,%,src/L1Trigger/L1TCalorimeter/python)
PyL1TriggerL1TCalorimeter_files := $(patsubst src/L1Trigger/L1TCalorimeter/python/%,%,$(wildcard $(foreach dir,src/L1Trigger/L1TCalorimeter/python ,$(foreach ext,$(SRC_FILES_SUFFIXES),$(dir)/*.$(ext)))))
PyL1TriggerL1TCalorimeter_LOC_USE := self  
PyL1TriggerL1TCalorimeter_PACKAGE := self/src/L1Trigger/L1TCalorimeter/python
ALL_PRODS += PyL1TriggerL1TCalorimeter
PyL1TriggerL1TCalorimeter_INIT_FUNC        += $$(eval $$(call PythonProduct,PyL1TriggerL1TCalorimeter,src/L1Trigger/L1TCalorimeter/python,src_L1Trigger_L1TCalorimeter_python,1,1,$(SCRAMSTORENAME_PYTHON),$(SCRAMSTORENAME_LIB),,))
else
$(eval $(call MultipleWarningMsg,PyL1TriggerL1TCalorimeter,src/L1Trigger/L1TCalorimeter/python))
endif
ALL_COMMONRULES += src_L1Trigger_L1TCalorimeter_python
src_L1Trigger_L1TCalorimeter_python_INIT_FUNC += $$(eval $$(call CommonProductRules,src_L1Trigger_L1TCalorimeter_python,src/L1Trigger/L1TCalorimeter/python,PYTHON))
ifeq ($(strip $(PyL1TriggerL1TCommon)),)
PyL1TriggerL1TCommon := self/src/L1Trigger/L1TCommon/python
src_L1Trigger_L1TCommon_python_parent := 
ALL_PYTHON_DIRS += $(patsubst src/%,%,src/L1Trigger/L1TCommon/python)
PyL1TriggerL1TCommon_files := $(patsubst src/L1Trigger/L1TCommon/python/%,%,$(wildcard $(foreach dir,src/L1Trigger/L1TCommon/python ,$(foreach ext,$(SRC_FILES_SUFFIXES),$(dir)/*.$(ext)))))
PyL1TriggerL1TCommon_LOC_USE := self  
PyL1TriggerL1TCommon_PACKAGE := self/src/L1Trigger/L1TCommon/python
ALL_PRODS += PyL1TriggerL1TCommon
PyL1TriggerL1TCommon_INIT_FUNC        += $$(eval $$(call PythonProduct,PyL1TriggerL1TCommon,src/L1Trigger/L1TCommon/python,src_L1Trigger_L1TCommon_python,1,1,$(SCRAMSTORENAME_PYTHON),$(SCRAMSTORENAME_LIB),,))
else
$(eval $(call MultipleWarningMsg,PyL1TriggerL1TCommon,src/L1Trigger/L1TCommon/python))
endif
ALL_COMMONRULES += src_L1Trigger_L1TCommon_python
src_L1Trigger_L1TCommon_python_INIT_FUNC += $$(eval $$(call CommonProductRules,src_L1Trigger_L1TCommon_python,src/L1Trigger/L1TCommon/python,PYTHON))
ifeq ($(strip $(readTestVector)),)
readTestVector_files := $(patsubst src/L1Trigger/L1TGlobal/bin/%,%,$(foreach file,readTestVector.cc,$(eval xfile:=$(wildcard src/L1Trigger/L1TGlobal/bin/$(file)))$(if $(xfile),$(xfile),$(warning No such file exists: src/L1Trigger/L1TGlobal/bin/$(file). Please fix src/L1Trigger/L1TGlobal/bin/BuildFile.))))
readTestVector := self/src/L1Trigger/L1TGlobal/bin
readTestVector_BuildFile    := $(WORKINGDIR)/cache/bf/src/L1Trigger/L1TGlobal/bin/BuildFile
readTestVector_LOC_USE := self  xerces-c L1Trigger/L1TGlobal boost_program_options root
readTestVector_PACKAGE := self/src/L1Trigger/L1TGlobal/bin
ALL_PRODS += readTestVector
readTestVector_INIT_FUNC        += $$(eval $$(call Binary,readTestVector,src/L1Trigger/L1TGlobal/bin,src_L1Trigger_L1TGlobal_bin,$(SCRAMSTORENAME_BIN),,$(SCRAMSTORENAME_BIN),bin,$(SCRAMSTORENAME_LOGS)))
readTestVector_CLASS := BINARY
else
$(eval $(call MultipleWarningMsg,readTestVector,src/L1Trigger/L1TGlobal/bin))
endif
ALL_COMMONRULES += src_L1Trigger_L1TGlobal_bin
src_L1Trigger_L1TGlobal_bin_parent := L1Trigger/L1TGlobal
src_L1Trigger_L1TGlobal_bin_INIT_FUNC += $$(eval $$(call CommonProductRules,src_L1Trigger_L1TGlobal_bin,src/L1Trigger/L1TGlobal/bin,BINARY))
src_CondCore_Utilities_scripts_files := $(filter-out \#% %\#,$(notdir $(wildcard $(foreach dir,$(LOCALTOP)/src/CondCore/Utilities/scripts,$(dir)/*))))
$(eval $(call Src2StoreCopy,src_CondCore_Utilities_scripts,src/CondCore/Utilities/scripts,$(SCRAMSTORENAME_BIN),*))
ifeq ($(strip $(PyDQML1TMonitor)),)
PyDQML1TMonitor := self/src/DQM/L1TMonitor/python
src_DQM_L1TMonitor_python_parent := 
ALL_PYTHON_DIRS += $(patsubst src/%,%,src/DQM/L1TMonitor/python)
PyDQML1TMonitor_files := $(patsubst src/DQM/L1TMonitor/python/%,%,$(wildcard $(foreach dir,src/DQM/L1TMonitor/python ,$(foreach ext,$(SRC_FILES_SUFFIXES),$(dir)/*.$(ext)))))
PyDQML1TMonitor_LOC_USE := self  
PyDQML1TMonitor_PACKAGE := self/src/DQM/L1TMonitor/python
ALL_PRODS += PyDQML1TMonitor
PyDQML1TMonitor_INIT_FUNC        += $$(eval $$(call PythonProduct,PyDQML1TMonitor,src/DQM/L1TMonitor/python,src_DQM_L1TMonitor_python,1,1,$(SCRAMSTORENAME_PYTHON),$(SCRAMSTORENAME_LIB),,))
else
$(eval $(call MultipleWarningMsg,PyDQML1TMonitor,src/DQM/L1TMonitor/python))
endif
ALL_COMMONRULES += src_DQM_L1TMonitor_python
src_DQM_L1TMonitor_python_INIT_FUNC += $$(eval $$(call CommonProductRules,src_DQM_L1TMonitor_python,src/DQM/L1TMonitor/python,PYTHON))
ALL_PACKAGES += CondFormats/L1TObjects
subdirs_src_CondFormats_L1TObjects := src_CondFormats_L1TObjects_src src_CondFormats_L1TObjects_test src_CondFormats_L1TObjects_interface src_CondFormats_L1TObjects_doc
src_L1Trigger_L1TGlobal_scripts_files := $(filter-out \#% %\#,$(notdir $(wildcard $(foreach dir,$(LOCALTOP)/src/L1Trigger/L1TGlobal/scripts,$(dir)/*))))
$(eval $(call Src2StoreCopy,src_L1Trigger_L1TGlobal_scripts,src/L1Trigger/L1TGlobal/scripts,$(SCRAMSTORENAME_BIN),*))
ALL_COMMONRULES += src_L1Trigger_L1TMuonOverlap_test
src_L1Trigger_L1TMuonOverlap_test_parent := L1Trigger/L1TMuonOverlap
src_L1Trigger_L1TMuonOverlap_test_INIT_FUNC += $$(eval $$(call CommonProductRules,src_L1Trigger_L1TMuonOverlap_test,src/L1Trigger/L1TMuonOverlap/test,TEST))
ifeq ($(strip $(testUCTLayer1)),)
testUCTLayer1_files := $(patsubst src/L1Trigger/L1TCaloLayer1/test/%,%,$(foreach file,testUCTLayer1.cpp,$(eval xfile:=$(wildcard src/L1Trigger/L1TCaloLayer1/test/$(file)))$(if $(xfile),$(xfile),$(warning No such file exists: src/L1Trigger/L1TCaloLayer1/test/$(file). Please fix src/L1Trigger/L1TCaloLayer1/test/BuildFile.))))
testUCTLayer1 := self/src/L1Trigger/L1TCaloLayer1/test
testUCTLayer1_TEST_RUNNER_CMD :=  testUCTLayer1 
testUCTLayer1_BuildFile    := $(WORKINGDIR)/cache/bf/src/L1Trigger/L1TCaloLayer1/test/BuildFile
testUCTLayer1_LOC_USE := self  L1Trigger/L1TCaloLayer1
testUCTLayer1_PACKAGE := self/src/L1Trigger/L1TCaloLayer1/test
ALL_PRODS += testUCTLayer1
testUCTLayer1_INIT_FUNC        += $$(eval $$(call Binary,testUCTLayer1,src/L1Trigger/L1TCaloLayer1/test,src_L1Trigger_L1TCaloLayer1_test,$(SCRAMSTORENAME_BIN),,$(SCRAMSTORENAME_TEST),test,$(SCRAMSTORENAME_LOGS)))
testUCTLayer1_CLASS := TEST
else
$(eval $(call MultipleWarningMsg,testUCTLayer1,src/L1Trigger/L1TCaloLayer1/test))
endif
ifeq ($(strip $(testUCTGeometry)),)
testUCTGeometry_files := $(patsubst src/L1Trigger/L1TCaloLayer1/test/%,%,$(foreach file,testUCTGeometry.cpp,$(eval xfile:=$(wildcard src/L1Trigger/L1TCaloLayer1/test/$(file)))$(if $(xfile),$(xfile),$(warning No such file exists: src/L1Trigger/L1TCaloLayer1/test/$(file). Please fix src/L1Trigger/L1TCaloLayer1/test/BuildFile.))))
testUCTGeometry := self/src/L1Trigger/L1TCaloLayer1/test
testUCTGeometry_TEST_RUNNER_CMD :=  testUCTGeometry 
testUCTGeometry_BuildFile    := $(WORKINGDIR)/cache/bf/src/L1Trigger/L1TCaloLayer1/test/BuildFile
testUCTGeometry_LOC_USE := self  L1Trigger/L1TCaloLayer1
testUCTGeometry_PACKAGE := self/src/L1Trigger/L1TCaloLayer1/test
ALL_PRODS += testUCTGeometry
testUCTGeometry_INIT_FUNC        += $$(eval $$(call Binary,testUCTGeometry,src/L1Trigger/L1TCaloLayer1/test,src_L1Trigger_L1TCaloLayer1_test,$(SCRAMSTORENAME_BIN),,$(SCRAMSTORENAME_TEST),test,$(SCRAMSTORENAME_LOGS)))
testUCTGeometry_CLASS := TEST
else
$(eval $(call MultipleWarningMsg,testUCTGeometry,src/L1Trigger/L1TCaloLayer1/test))
endif
ifeq ($(strip $(testUCTLayer1HF)),)
testUCTLayer1HF_files := $(patsubst src/L1Trigger/L1TCaloLayer1/test/%,%,$(foreach file,testUCTLayer1HF.cpp,$(eval xfile:=$(wildcard src/L1Trigger/L1TCaloLayer1/test/$(file)))$(if $(xfile),$(xfile),$(warning No such file exists: src/L1Trigger/L1TCaloLayer1/test/$(file). Please fix src/L1Trigger/L1TCaloLayer1/test/BuildFile.))))
testUCTLayer1HF := self/src/L1Trigger/L1TCaloLayer1/test
testUCTLayer1HF_TEST_RUNNER_CMD :=  testUCTLayer1HF 
testUCTLayer1HF_BuildFile    := $(WORKINGDIR)/cache/bf/src/L1Trigger/L1TCaloLayer1/test/BuildFile
testUCTLayer1HF_LOC_USE := self  L1Trigger/L1TCaloLayer1
testUCTLayer1HF_PACKAGE := self/src/L1Trigger/L1TCaloLayer1/test
ALL_PRODS += testUCTLayer1HF
testUCTLayer1HF_INIT_FUNC        += $$(eval $$(call Binary,testUCTLayer1HF,src/L1Trigger/L1TCaloLayer1/test,src_L1Trigger_L1TCaloLayer1_test,$(SCRAMSTORENAME_BIN),,$(SCRAMSTORENAME_TEST),test,$(SCRAMSTORENAME_LOGS)))
testUCTLayer1HF_CLASS := TEST
else
$(eval $(call MultipleWarningMsg,testUCTLayer1HF,src/L1Trigger/L1TCaloLayer1/test))
endif
ALL_COMMONRULES += src_L1Trigger_L1TCaloLayer1_test
src_L1Trigger_L1TCaloLayer1_test_parent := L1Trigger/L1TCaloLayer1
src_L1Trigger_L1TCaloLayer1_test_INIT_FUNC += $$(eval $$(call CommonProductRules,src_L1Trigger_L1TCaloLayer1_test,src/L1Trigger/L1TCaloLayer1/test,TEST))
ifeq ($(strip $(testBasicPayload)),)
testBasicPayload_files := $(patsubst src/CondCore/Utilities/test/%,%,$(foreach file,testBasicPayload.cpp,$(eval xfile:=$(wildcard src/CondCore/Utilities/test/$(file)))$(if $(xfile),$(xfile),$(warning No such file exists: src/CondCore/Utilities/test/$(file). Please fix src/CondCore/Utilities/test/BuildFile.))))
testBasicPayload := self/src/CondCore/Utilities/test
testBasicPayload_TEST_RUNNER_CMD :=  testBasicPayload 
testBasicPayload_BuildFile    := $(WORKINGDIR)/cache/bf/src/CondCore/Utilities/test/BuildFile
testBasicPayload_LOC_USE := self  CondCore/CondDB CondFormats/Common FWCore/PluginManager FWCore/Utilities
testBasicPayload_PACKAGE := self/src/CondCore/Utilities/test
ALL_PRODS += testBasicPayload
testBasicPayload_INIT_FUNC        += $$(eval $$(call Binary,testBasicPayload,src/CondCore/Utilities/test,src_CondCore_Utilities_test,$(SCRAMSTORENAME_BIN),,$(SCRAMSTORENAME_TEST),test,$(SCRAMSTORENAME_LOGS)))
testBasicPayload_CLASS := TEST
else
$(eval $(call MultipleWarningMsg,testBasicPayload,src/CondCore/Utilities/test))
endif
ALL_COMMONRULES += src_CondCore_Utilities_test
src_CondCore_Utilities_test_parent := CondCore/Utilities
src_CondCore_Utilities_test_INIT_FUNC += $$(eval $$(call CommonProductRules,src_CondCore_Utilities_test,src/CondCore/Utilities/test,TEST))
ALL_COMMONRULES += src_L1Trigger_L1TCommon_test
src_L1Trigger_L1TCommon_test_parent := L1Trigger/L1TCommon
src_L1Trigger_L1TCommon_test_INIT_FUNC += $$(eval $$(call CommonProductRules,src_L1Trigger_L1TCommon_test,src/L1Trigger/L1TCommon/test,TEST))
ALL_SUBSYSTEMS+=CondCore
subdirs_src_CondCore = src_CondCore_Utilities src_CondCore_L1TPlugins src_CondCore_SiStripPlugins src_CondCore_EcalPlugins
