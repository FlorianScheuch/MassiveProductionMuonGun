ifeq ($(strip $(EventFilter/L1TRawToDigi)),)
ALL_COMMONRULES += src_EventFilter_L1TRawToDigi_src
src_EventFilter_L1TRawToDigi_src_parent := EventFilter/L1TRawToDigi
src_EventFilter_L1TRawToDigi_src_INIT_FUNC := $$(eval $$(call CommonProductRules,src_EventFilter_L1TRawToDigi_src,src/EventFilter/L1TRawToDigi/src,LIBRARY))
EventFilterL1TRawToDigi := self/EventFilter/L1TRawToDigi
EventFilter/L1TRawToDigi := EventFilterL1TRawToDigi
EventFilterL1TRawToDigi_files := $(patsubst src/EventFilter/L1TRawToDigi/src/%,%,$(wildcard $(foreach dir,src/EventFilter/L1TRawToDigi/src src/EventFilter/L1TRawToDigi/src/implementations_stage1 src/EventFilter/L1TRawToDigi/src/implementations_stage2,$(foreach ext,$(SRC_FILES_SUFFIXES),$(dir)/*.$(ext)))))
EventFilterL1TRawToDigi_BuildFile    := $(WORKINGDIR)/cache/bf/src/EventFilter/L1TRawToDigi/BuildFile
EventFilterL1TRawToDigi_LOC_USE := self  FWCore/Framework DataFormats/FEDRawData DataFormats/L1Trigger DataFormats/L1TMuon DataFormats/L1TCalorimeter L1Trigger/L1TCalorimeter L1Trigger/L1TGlobal L1Trigger/L1TMuon
EventFilterL1TRawToDigi_EX_LIB   := EventFilterL1TRawToDigi
EventFilterL1TRawToDigi_EX_USE   := $(foreach d,$(EventFilterL1TRawToDigi_LOC_USE),$(if $($(d)_EX_FLAGS_NO_RECURSIVE_EXPORT),,$d))
EventFilterL1TRawToDigi_PACKAGE := self/src/EventFilter/L1TRawToDigi/src
ALL_PRODS += EventFilterL1TRawToDigi
EventFilterL1TRawToDigi_CLASS := LIBRARY
EventFilter/L1TRawToDigi_forbigobj+=EventFilterL1TRawToDigi
EventFilterL1TRawToDigi_INIT_FUNC        += $$(eval $$(call Library,EventFilterL1TRawToDigi,src/EventFilter/L1TRawToDigi/src,src_EventFilter_L1TRawToDigi_src,$(SCRAMSTORENAME_BIN),,$(SCRAMSTORENAME_LIB),$(SCRAMSTORENAME_LOGS)))
endif
ifeq ($(strip $(EventFilterL1TRawToDigiAuto)),)
EventFilterL1TRawToDigiAuto := self/src/EventFilter/L1TRawToDigi/plugins
PLUGINS:=yes
EventFilterL1TRawToDigiAuto_files := $(patsubst src/EventFilter/L1TRawToDigi/plugins/%,%,$(wildcard $(foreach dir,src/EventFilter/L1TRawToDigi/plugins ,$(foreach ext,$(SRC_FILES_SUFFIXES),$(dir)/*.$(ext)))))
EventFilterL1TRawToDigiAuto_BuildFile    := $(WORKINGDIR)/cache/bf/src/EventFilter/L1TRawToDigi/plugins/BuildFile
EventFilterL1TRawToDigiAuto_LOC_USE := self  FWCore/Framework FWCore/PluginManager FWCore/ParameterSet DataFormats/FEDRawData EventFilter/L1TRawToDigi
EventFilterL1TRawToDigiAuto_PRE_INIT_FUNC += $$(eval $$(call edmPlugin,EventFilterL1TRawToDigiAuto,EventFilterL1TRawToDigiAuto,$(SCRAMSTORENAME_LIB),src/EventFilter/L1TRawToDigi/plugins))
EventFilterL1TRawToDigiAuto_PACKAGE := self/src/EventFilter/L1TRawToDigi/plugins
ALL_PRODS += EventFilterL1TRawToDigiAuto
EventFilter/L1TRawToDigi_forbigobj+=EventFilterL1TRawToDigiAuto
EventFilterL1TRawToDigiAuto_INIT_FUNC        += $$(eval $$(call Library,EventFilterL1TRawToDigiAuto,src/EventFilter/L1TRawToDigi/plugins,src_EventFilter_L1TRawToDigi_plugins,$(SCRAMSTORENAME_BIN),,$(SCRAMSTORENAME_LIB),$(SCRAMSTORENAME_LOGS)))
EventFilterL1TRawToDigiAuto_CLASS := LIBRARY
else
$(eval $(call MultipleWarningMsg,EventFilterL1TRawToDigiAuto,src/EventFilter/L1TRawToDigi/plugins))
endif
ALL_COMMONRULES += src_EventFilter_L1TRawToDigi_plugins
src_EventFilter_L1TRawToDigi_plugins_parent := EventFilter/L1TRawToDigi
src_EventFilter_L1TRawToDigi_plugins_INIT_FUNC += $$(eval $$(call CommonProductRules,src_EventFilter_L1TRawToDigi_plugins,src/EventFilter/L1TRawToDigi/plugins,PLUGINS))
ifeq ($(strip $(CondCore/L1TPlugins)),)
ALL_COMMONRULES += src_CondCore_L1TPlugins_src
src_CondCore_L1TPlugins_src_parent := CondCore/L1TPlugins
src_CondCore_L1TPlugins_src_INIT_FUNC := $$(eval $$(call CommonProductRules,src_CondCore_L1TPlugins_src,src/CondCore/L1TPlugins/src,LIBRARY))
CondCoreL1TPlugins := self/CondCore/L1TPlugins
CondCore/L1TPlugins := CondCoreL1TPlugins
CondCoreL1TPlugins_files := $(patsubst src/CondCore/L1TPlugins/src/%,%,$(wildcard $(foreach dir,src/CondCore/L1TPlugins/src ,$(foreach ext,$(SRC_FILES_SUFFIXES),$(dir)/*.$(ext)))))
CondCoreL1TPlugins_BuildFile    := $(WORKINGDIR)/cache/bf/src/CondCore/L1TPlugins/BuildFile
CondCoreL1TPlugins_LOC_USE := self  FWCore/Framework FWCore/PluginManager CondCore/ESSources CondFormats/L1TObjects CondFormats/DataRecord
CondCoreL1TPlugins_PRE_INIT_FUNC += $$(eval $$(call edmPlugin,CondCoreL1TPlugins,CondCoreL1TPlugins,$(SCRAMSTORENAME_LIB),src/CondCore/L1TPlugins/src))
CondCoreL1TPlugins_PACKAGE := self/src/CondCore/L1TPlugins/src
ALL_PRODS += CondCoreL1TPlugins
CondCoreL1TPlugins_CLASS := LIBRARY
CondCore/L1TPlugins_forbigobj+=CondCoreL1TPlugins
CondCoreL1TPlugins_INIT_FUNC        += $$(eval $$(call Library,CondCoreL1TPlugins,src/CondCore/L1TPlugins/src,src_CondCore_L1TPlugins_src,$(SCRAMSTORENAME_BIN),,$(SCRAMSTORENAME_LIB),$(SCRAMSTORENAME_LOGS)))
endif
ifeq ($(strip $(L1Trigger/L1TCalorimeter)),)
ALL_COMMONRULES += src_L1Trigger_L1TCalorimeter_src
src_L1Trigger_L1TCalorimeter_src_parent := L1Trigger/L1TCalorimeter
src_L1Trigger_L1TCalorimeter_src_INIT_FUNC := $$(eval $$(call CommonProductRules,src_L1Trigger_L1TCalorimeter_src,src/L1Trigger/L1TCalorimeter/src,LIBRARY))
L1TriggerL1TCalorimeter := self/L1Trigger/L1TCalorimeter
L1Trigger/L1TCalorimeter := L1TriggerL1TCalorimeter
L1TriggerL1TCalorimeter_files := $(patsubst src/L1Trigger/L1TCalorimeter/src/%,%,$(wildcard $(foreach dir,src/L1Trigger/L1TCalorimeter/src src/L1Trigger/L1TCalorimeter/src/firmware,$(foreach ext,$(SRC_FILES_SUFFIXES),$(dir)/*.$(ext)))))
L1TriggerL1TCalorimeter_BuildFile    := $(WORKINGDIR)/cache/bf/src/L1Trigger/L1TCalorimeter/src/BuildFile
L1TriggerL1TCalorimeter_LOC_USE := self  FWCore/Framework FWCore/PluginManager FWCore/ParameterSet DataFormats/Math DataFormats/L1TCalorimeter DataFormats/L1GlobalCaloTrigger CondFormats/L1TObjects CondFormats/DataRecord
L1TriggerL1TCalorimeter_EX_LIB   := L1TriggerL1TCalorimeter
L1TriggerL1TCalorimeter_EX_USE   := $(foreach d,$(L1TriggerL1TCalorimeter_LOC_USE),$(if $($(d)_EX_FLAGS_NO_RECURSIVE_EXPORT),,$d))
L1TriggerL1TCalorimeter_PACKAGE := self/src/L1Trigger/L1TCalorimeter/src
ALL_PRODS += L1TriggerL1TCalorimeter
L1TriggerL1TCalorimeter_CLASS := LIBRARY
L1Trigger/L1TCalorimeter_forbigobj+=L1TriggerL1TCalorimeter
L1TriggerL1TCalorimeter_INIT_FUNC        += $$(eval $$(call Library,L1TriggerL1TCalorimeter,src/L1Trigger/L1TCalorimeter/src,src_L1Trigger_L1TCalorimeter_src,$(SCRAMSTORENAME_BIN),,$(SCRAMSTORENAME_LIB),$(SCRAMSTORENAME_LOGS)))
endif
ifeq ($(strip $(DataFormats/L1TMuon)),)
ALL_COMMONRULES += src_DataFormats_L1TMuon_src
src_DataFormats_L1TMuon_src_parent := DataFormats/L1TMuon
src_DataFormats_L1TMuon_src_INIT_FUNC := $$(eval $$(call CommonProductRules,src_DataFormats_L1TMuon_src,src/DataFormats/L1TMuon/src,LIBRARY))
DataFormatsL1TMuon := self/DataFormats/L1TMuon
DataFormats/L1TMuon := DataFormatsL1TMuon
DataFormatsL1TMuon_files := $(patsubst src/DataFormats/L1TMuon/src/%,%,$(wildcard $(foreach dir,src/DataFormats/L1TMuon/src ,$(foreach ext,$(SRC_FILES_SUFFIXES),$(dir)/*.$(ext)))))
DataFormatsL1TMuon_BuildFile    := $(WORKINGDIR)/cache/bf/src/DataFormats/L1TMuon/BuildFile
DataFormatsL1TMuon_LOC_USE := self  DataFormats/CSCDigi DataFormats/L1DTTrackFinder DataFormats/RPCDigi DataFormats/MuonDetId DataFormats/L1CSCTrackFinder DataFormats/Common L1Trigger/DTTrackFinder rootrflx
DataFormatsL1TMuon_LCGDICTS  := x 
DataFormatsL1TMuon_PRE_INIT_FUNC += $$(eval $$(call LCGDict,DataFormatsL1TMuon,src/DataFormats/L1TMuon/src/classes.h,src/DataFormats/L1TMuon/src/classes_def.xml,$(SCRAMSTORENAME_LIB),$(GENREFLEX_ARGS) --fail_on_warnings,))
DataFormatsL1TMuon_EX_LIB   := DataFormatsL1TMuon
DataFormatsL1TMuon_EX_USE   := $(foreach d,$(DataFormatsL1TMuon_LOC_USE),$(if $($(d)_EX_FLAGS_NO_RECURSIVE_EXPORT),,$d))
DataFormatsL1TMuon_PACKAGE := self/src/DataFormats/L1TMuon/src
ALL_PRODS += DataFormatsL1TMuon
DataFormatsL1TMuon_CLASS := LIBRARY
DataFormats/L1TMuon_forbigobj+=DataFormatsL1TMuon
DataFormatsL1TMuon_INIT_FUNC        += $$(eval $$(call Library,DataFormatsL1TMuon,src/DataFormats/L1TMuon/src,src_DataFormats_L1TMuon_src,$(SCRAMSTORENAME_BIN),,$(SCRAMSTORENAME_LIB),$(SCRAMSTORENAME_LOGS)))
endif
ifeq ($(strip $(EcalPyUtils)),)
EcalPyUtils := self/src/CondCore/EcalPlugins/plugins
PLUGINS:=yes
EcalPyUtils_files := $(patsubst src/CondCore/EcalPlugins/plugins/%,%,$(foreach file,EcalPyUtils.cc,$(eval xfile:=$(wildcard src/CondCore/EcalPlugins/plugins/$(file)))$(if $(xfile),$(xfile),$(warning No such file exists: src/CondCore/EcalPlugins/plugins/$(file). Please fix src/CondCore/EcalPlugins/plugins/BuildFile.))))
EcalPyUtils_BuildFile    := $(WORKINGDIR)/cache/bf/src/CondCore/EcalPlugins/plugins/BuildFile
EcalPyUtils_LOC_FLAGS_CXXFLAGS   := -Wno-sign-compare -Wno-unused-variable
EcalPyUtils_LOC_USE := self  CondCore/Utilities CondFormats/EcalObjects CondTools/Ecal DataFormats/EcalDetId boost boost_python
EcalPyUtils_PRE_INIT_FUNC += $$(eval $$(call edmPlugin,EcalPyUtils,EcalPyUtils,$(SCRAMSTORENAME_LIB),src/CondCore/EcalPlugins/plugins))
EcalPyUtils_PACKAGE := self/src/CondCore/EcalPlugins/plugins
ALL_PRODS += EcalPyUtils
CondCore/EcalPlugins_forbigobj+=EcalPyUtils
EcalPyUtils_INIT_FUNC        += $$(eval $$(call Library,EcalPyUtils,src/CondCore/EcalPlugins/plugins,src_CondCore_EcalPlugins_plugins,$(SCRAMSTORENAME_BIN),,$(SCRAMSTORENAME_LIB),$(SCRAMSTORENAME_LOGS)))
EcalPyUtils_CLASS := LIBRARY
else
$(eval $(call MultipleWarningMsg,EcalPyUtils,src/CondCore/EcalPlugins/plugins))
endif
ifeq ($(strip $(EcalCondObjectContainer_EcalTPGCrystalStatusCode_toXML)),)
EcalCondObjectContainer_EcalTPGCrystalStatusCode_toXML := self/src/CondCore/EcalPlugins/plugins
PLUGINS:=yes
EcalCondObjectContainer_EcalTPGCrystalStatusCode_toXML_files := $(patsubst src/CondCore/EcalPlugins/plugins/%,%,$(foreach file,EcalCondObjectContainer_EcalTPGCrystalStatusCode_toXML.cc,$(eval xfile:=$(wildcard src/CondCore/EcalPlugins/plugins/$(file)))$(if $(xfile),$(xfile),$(warning No such file exists: src/CondCore/EcalPlugins/plugins/$(file). Please fix src/CondCore/EcalPlugins/plugins/BuildFile.))))
EcalCondObjectContainer_EcalTPGCrystalStatusCode_toXML_BuildFile    := $(WORKINGDIR)/cache/bf/src/CondCore/EcalPlugins/plugins/BuildFile
EcalCondObjectContainer_EcalTPGCrystalStatusCode_toXML_LOC_FLAGS_CXXFLAGS   := -Wno-sign-compare -Wno-unused-variable
EcalCondObjectContainer_EcalTPGCrystalStatusCode_toXML_LOC_USE := self  CondCore/Utilities CondCore/CondDB CondFormats/Common boost_python
EcalCondObjectContainer_EcalTPGCrystalStatusCode_toXML_PRE_INIT_FUNC += $$(eval $$(call edmPlugin,EcalCondObjectContainer_EcalTPGCrystalStatusCode_toXML,EcalCondObjectContainer_EcalTPGCrystalStatusCode_toXML,$(SCRAMSTORENAME_LIB),src/CondCore/EcalPlugins/plugins))
EcalCondObjectContainer_EcalTPGCrystalStatusCode_toXML_PACKAGE := self/src/CondCore/EcalPlugins/plugins
ALL_PRODS += EcalCondObjectContainer_EcalTPGCrystalStatusCode_toXML
CondCore/EcalPlugins_forbigobj+=EcalCondObjectContainer_EcalTPGCrystalStatusCode_toXML
EcalCondObjectContainer_EcalTPGCrystalStatusCode_toXML_INIT_FUNC        += $$(eval $$(call Library,EcalCondObjectContainer_EcalTPGCrystalStatusCode_toXML,src/CondCore/EcalPlugins/plugins,src_CondCore_EcalPlugins_plugins,$(SCRAMSTORENAME_BIN),,$(SCRAMSTORENAME_LIB),$(SCRAMSTORENAME_LOGS)))
EcalCondObjectContainer_EcalTPGCrystalStatusCode_toXML_CLASS := LIBRARY
else
$(eval $(call MultipleWarningMsg,EcalCondObjectContainer_EcalTPGCrystalStatusCode_toXML,src/CondCore/EcalPlugins/plugins))
endif
ALL_COMMONRULES += src_CondCore_EcalPlugins_plugins
src_CondCore_EcalPlugins_plugins_parent := CondCore/EcalPlugins
src_CondCore_EcalPlugins_plugins_INIT_FUNC += $$(eval $$(call CommonProductRules,src_CondCore_EcalPlugins_plugins,src/CondCore/EcalPlugins/plugins,PLUGINS))
ifeq ($(strip $(DataFormats/L1Trigger)),)
ALL_COMMONRULES += src_DataFormats_L1Trigger_src
src_DataFormats_L1Trigger_src_parent := DataFormats/L1Trigger
src_DataFormats_L1Trigger_src_INIT_FUNC := $$(eval $$(call CommonProductRules,src_DataFormats_L1Trigger_src,src/DataFormats/L1Trigger/src,LIBRARY))
DataFormatsL1Trigger := self/DataFormats/L1Trigger
DataFormats/L1Trigger := DataFormatsL1Trigger
DataFormatsL1Trigger_files := $(patsubst src/DataFormats/L1Trigger/src/%,%,$(wildcard $(foreach dir,src/DataFormats/L1Trigger/src ,$(foreach ext,$(SRC_FILES_SUFFIXES),$(dir)/*.$(ext)))))
DataFormatsL1Trigger_BuildFile    := $(WORKINGDIR)/cache/bf/src/DataFormats/L1Trigger/BuildFile
DataFormatsL1Trigger_LOC_USE := self  DataFormats/Candidate DataFormats/Common DataFormats/L1GlobalMuonTrigger
DataFormatsL1Trigger_LCGDICTS  := x 
DataFormatsL1Trigger_PRE_INIT_FUNC += $$(eval $$(call LCGDict,DataFormatsL1Trigger,src/DataFormats/L1Trigger/src/classes.h,src/DataFormats/L1Trigger/src/classes_def.xml,$(SCRAMSTORENAME_LIB),$(GENREFLEX_ARGS) --fail_on_warnings,))
DataFormatsL1Trigger_EX_LIB   := DataFormatsL1Trigger
DataFormatsL1Trigger_EX_USE   := $(foreach d,$(DataFormatsL1Trigger_LOC_USE),$(if $($(d)_EX_FLAGS_NO_RECURSIVE_EXPORT),,$d))
DataFormatsL1Trigger_PACKAGE := self/src/DataFormats/L1Trigger/src
ALL_PRODS += DataFormatsL1Trigger
DataFormatsL1Trigger_CLASS := LIBRARY
DataFormats/L1Trigger_forbigobj+=DataFormatsL1Trigger
DataFormatsL1Trigger_INIT_FUNC        += $$(eval $$(call Library,DataFormatsL1Trigger,src/DataFormats/L1Trigger/src,src_DataFormats_L1Trigger_src,$(SCRAMSTORENAME_BIN),,$(SCRAMSTORENAME_LIB),$(SCRAMSTORENAME_LOGS)))
endif
ifeq ($(strip $(L1TriggerL1TCaloLayer1Auto)),)
L1TriggerL1TCaloLayer1Auto := self/src/L1Trigger/L1TCaloLayer1/plugins
PLUGINS:=yes
L1TriggerL1TCaloLayer1Auto_files := $(patsubst src/L1Trigger/L1TCaloLayer1/plugins/%,%,$(wildcard $(foreach dir,src/L1Trigger/L1TCaloLayer1/plugins ,$(foreach ext,$(SRC_FILES_SUFFIXES),$(dir)/*.$(ext)))))
L1TriggerL1TCaloLayer1Auto_BuildFile    := $(WORKINGDIR)/cache/bf/src/L1Trigger/L1TCaloLayer1/plugins/BuildFile
L1TriggerL1TCaloLayer1Auto_LOC_USE := self  FWCore/Framework FWCore/ParameterSet FWCore/PluginManager FWCore/MessageLogger DataFormats/HcalDigi DataFormats/EcalDigi CondFormats/L1TObjects CondFormats/DataRecord DataFormats/L1TCalorimeter L1Trigger/L1TCalorimeter L1Trigger/L1TCaloLayer1
L1TriggerL1TCaloLayer1Auto_PRE_INIT_FUNC += $$(eval $$(call edmPlugin,L1TriggerL1TCaloLayer1Auto,L1TriggerL1TCaloLayer1Auto,$(SCRAMSTORENAME_LIB),src/L1Trigger/L1TCaloLayer1/plugins))
L1TriggerL1TCaloLayer1Auto_PACKAGE := self/src/L1Trigger/L1TCaloLayer1/plugins
ALL_PRODS += L1TriggerL1TCaloLayer1Auto
L1Trigger/L1TCaloLayer1_forbigobj+=L1TriggerL1TCaloLayer1Auto
L1TriggerL1TCaloLayer1Auto_INIT_FUNC        += $$(eval $$(call Library,L1TriggerL1TCaloLayer1Auto,src/L1Trigger/L1TCaloLayer1/plugins,src_L1Trigger_L1TCaloLayer1_plugins,$(SCRAMSTORENAME_BIN),,$(SCRAMSTORENAME_LIB),$(SCRAMSTORENAME_LOGS)))
L1TriggerL1TCaloLayer1Auto_CLASS := LIBRARY
else
$(eval $(call MultipleWarningMsg,L1TriggerL1TCaloLayer1Auto,src/L1Trigger/L1TCaloLayer1/plugins))
endif
ALL_COMMONRULES += src_L1Trigger_L1TCaloLayer1_plugins
src_L1Trigger_L1TCaloLayer1_plugins_parent := L1Trigger/L1TCaloLayer1
src_L1Trigger_L1TCaloLayer1_plugins_INIT_FUNC += $$(eval $$(call CommonProductRules,src_L1Trigger_L1TCaloLayer1_plugins,src/L1Trigger/L1TCaloLayer1/plugins,PLUGINS))
ifeq ($(strip $(L1TriggerL1TMuonEndCapPlugins)),)
L1TriggerL1TMuonEndCapPlugins := self/src/L1Trigger/L1TMuonEndCap/plugins
PLUGINS:=yes
L1TriggerL1TMuonEndCapPlugins_files := $(patsubst src/L1Trigger/L1TMuonEndCap/plugins/%,%,$(foreach file,*.cc,$(eval xfile:=$(wildcard src/L1Trigger/L1TMuonEndCap/plugins/$(file)))$(if $(xfile),$(xfile),$(warning No such file exists: src/L1Trigger/L1TMuonEndCap/plugins/$(file). Please fix src/L1Trigger/L1TMuonEndCap/plugins/BuildFile.))))
L1TriggerL1TMuonEndCapPlugins_BuildFile    := $(WORKINGDIR)/cache/bf/src/L1Trigger/L1TMuonEndCap/plugins/BuildFile
L1TriggerL1TMuonEndCapPlugins_LOC_USE := self  L1Trigger/L1TMuonEndCap CondFormats/L1TObjects CondFormats/DataRecord FWCore/ServiceRegistry CondCore/DBOutputService root
L1TriggerL1TMuonEndCapPlugins_PRE_INIT_FUNC += $$(eval $$(call edmPlugin,L1TriggerL1TMuonEndCapPlugins,L1TriggerL1TMuonEndCapPlugins,$(SCRAMSTORENAME_LIB),src/L1Trigger/L1TMuonEndCap/plugins))
L1TriggerL1TMuonEndCapPlugins_PACKAGE := self/src/L1Trigger/L1TMuonEndCap/plugins
ALL_PRODS += L1TriggerL1TMuonEndCapPlugins
L1Trigger/L1TMuonEndCap_forbigobj+=L1TriggerL1TMuonEndCapPlugins
L1TriggerL1TMuonEndCapPlugins_INIT_FUNC        += $$(eval $$(call Library,L1TriggerL1TMuonEndCapPlugins,src/L1Trigger/L1TMuonEndCap/plugins,src_L1Trigger_L1TMuonEndCap_plugins,$(SCRAMSTORENAME_BIN),,$(SCRAMSTORENAME_LIB),$(SCRAMSTORENAME_LOGS)))
L1TriggerL1TMuonEndCapPlugins_CLASS := LIBRARY
else
$(eval $(call MultipleWarningMsg,L1TriggerL1TMuonEndCapPlugins,src/L1Trigger/L1TMuonEndCap/plugins))
endif
ALL_COMMONRULES += src_L1Trigger_L1TMuonEndCap_plugins
src_L1Trigger_L1TMuonEndCap_plugins_parent := L1Trigger/L1TMuonEndCap
src_L1Trigger_L1TMuonEndCap_plugins_INIT_FUNC += $$(eval $$(call CommonProductRules,src_L1Trigger_L1TMuonEndCap_plugins,src/L1Trigger/L1TMuonEndCap/plugins,PLUGINS))
ifeq ($(strip $(CondCore/Utilities)),)
ALL_COMMONRULES += src_CondCore_Utilities_src
src_CondCore_Utilities_src_parent := CondCore/Utilities
src_CondCore_Utilities_src_INIT_FUNC := $$(eval $$(call CommonProductRules,src_CondCore_Utilities_src,src/CondCore/Utilities/src,LIBRARY))
CondCoreUtilities := self/CondCore/Utilities
CondCore/Utilities := CondCoreUtilities
CondCoreUtilities_files := $(patsubst src/CondCore/Utilities/src/%,%,$(wildcard $(foreach dir,src/CondCore/Utilities/src ,$(foreach ext,$(SRC_FILES_SUFFIXES),$(dir)/*.$(ext)))))
CondCoreUtilities_BuildFile    := $(WORKINGDIR)/cache/bf/src/CondCore/Utilities/BuildFile
CondCoreUtilities_LOC_FLAGS_CXXFLAGS   := -Wno-sign-compare -Wno-unused-variable -Os
CondCoreUtilities_LOC_USE := self  FWCore/Utilities FWCore/PluginManager FWCore/MessageLogger FWCore/Framework FWCore/Concurrency boost boost_program_options CondCore/CondDB CondFormats/HLTObjects CondFormats/Alignment CondFormats/BeamSpotObjects CondFormats/CastorObjects CondFormats/HIObjects CondFormats/CSCObjects CondFormats/DTObjects CondFormats/ESObjects CondFormats/EcalObjects CondFormats/EgammaObjects CondFormats/Luminosity CondFormats/HcalObjects CondFormats/JetMETObjects CondFormats/L1TObjects CondFormats/PhysicsToolsObjects CondFormats/GeometryObjects CondFormats/RecoMuonObjects CondFormats/RPCObjects CondFormats/RunInfo CondFormats/SiPixelObjects CondFormats/SiStripObjects CondFormats/Common CondFormats/BTauObjects CondFormats/MFObjects
CondCoreUtilities_LCGDICTS  := x 
CondCoreUtilities_PRE_INIT_FUNC += $$(eval $$(call LCGDict,CondCoreUtilities,src/CondCore/Utilities/src/classes.h,src/CondCore/Utilities/src/classes_def.xml,$(SCRAMSTORENAME_LIB),$(GENREFLEX_ARGS) --fail_on_warnings,))
CondCoreUtilities_EX_LIB   := CondCoreUtilities
CondCoreUtilities_EX_USE   := $(foreach d,$(CondCoreUtilities_LOC_USE),$(if $($(d)_EX_FLAGS_NO_RECURSIVE_EXPORT),,$d))
CondCoreUtilities_PACKAGE := self/src/CondCore/Utilities/src
ALL_PRODS += CondCoreUtilities
CondCoreUtilities_CLASS := LIBRARY
CondCore/Utilities_forbigobj+=CondCoreUtilities
CondCoreUtilities_INIT_FUNC        += $$(eval $$(call Library,CondCoreUtilities,src/CondCore/Utilities/src,src_CondCore_Utilities_src,$(SCRAMSTORENAME_BIN),,$(SCRAMSTORENAME_LIB),$(SCRAMSTORENAME_LOGS)))
endif
ifeq ($(strip $(L1TriggerL1TCalorimeterPlugins)),)
L1TriggerL1TCalorimeterPlugins := self/src/L1Trigger/L1TCalorimeter/plugins
PLUGINS:=yes
L1TriggerL1TCalorimeterPlugins_files := $(patsubst src/L1Trigger/L1TCalorimeter/plugins/%,%,$(foreach file,*.cc,$(eval xfile:=$(wildcard src/L1Trigger/L1TCalorimeter/plugins/$(file)))$(if $(xfile),$(xfile),$(warning No such file exists: src/L1Trigger/L1TCalorimeter/plugins/$(file). Please fix src/L1Trigger/L1TCalorimeter/plugins/BuildFile.))))
L1TriggerL1TCalorimeterPlugins_BuildFile    := $(WORKINGDIR)/cache/bf/src/L1Trigger/L1TCalorimeter/plugins/BuildFile
L1TriggerL1TCalorimeterPlugins_LOC_USE := self  FWCore/Framework FWCore/PluginManager FWCore/ParameterSet FWCore/Utilities FWCore/ServiceRegistry CommonTools/UtilAlgos DataFormats/EcalDigi DataFormats/EcalDetId DataFormats/HcalDigi DataFormats/HcalDetId CalibFormats/CaloTPG CalibCalorimetry/EcalTPGTools DataFormats/L1Trigger DataFormats/L1CaloTrigger DataFormats/L1TCalorimeter DataFormats/JetReco DataFormats/METReco CondFormats/L1TObjects CondFormats/DataRecord L1Trigger/L1TCalorimeter CondTools/L1Trigger
L1TriggerL1TCalorimeterPlugins_PRE_INIT_FUNC += $$(eval $$(call edmPlugin,L1TriggerL1TCalorimeterPlugins,L1TriggerL1TCalorimeterPlugins,$(SCRAMSTORENAME_LIB),src/L1Trigger/L1TCalorimeter/plugins))
L1TriggerL1TCalorimeterPlugins_PACKAGE := self/src/L1Trigger/L1TCalorimeter/plugins
ALL_PRODS += L1TriggerL1TCalorimeterPlugins
L1Trigger/L1TCalorimeter_forbigobj+=L1TriggerL1TCalorimeterPlugins
L1TriggerL1TCalorimeterPlugins_INIT_FUNC        += $$(eval $$(call Library,L1TriggerL1TCalorimeterPlugins,src/L1Trigger/L1TCalorimeter/plugins,src_L1Trigger_L1TCalorimeter_plugins,$(SCRAMSTORENAME_BIN),,$(SCRAMSTORENAME_LIB),$(SCRAMSTORENAME_LOGS)))
L1TriggerL1TCalorimeterPlugins_CLASS := LIBRARY
else
$(eval $(call MultipleWarningMsg,L1TriggerL1TCalorimeterPlugins,src/L1Trigger/L1TCalorimeter/plugins))
endif
ALL_COMMONRULES += src_L1Trigger_L1TCalorimeter_plugins
src_L1Trigger_L1TCalorimeter_plugins_parent := L1Trigger/L1TCalorimeter
src_L1Trigger_L1TCalorimeter_plugins_INIT_FUNC += $$(eval $$(call CommonProductRules,src_L1Trigger_L1TCalorimeter_plugins,src/L1Trigger/L1TCalorimeter/plugins,PLUGINS))
ifeq ($(strip $(L1TriggerL1TNtuplePlugins)),)
L1TriggerL1TNtuplePlugins := self/src/L1Trigger/L1TNtuples/plugins
PLUGINS:=yes
L1TriggerL1TNtuplePlugins_files := $(patsubst src/L1Trigger/L1TNtuples/plugins/%,%,$(foreach file,*.cc,$(eval xfile:=$(wildcard src/L1Trigger/L1TNtuples/plugins/$(file)))$(if $(xfile),$(xfile),$(warning No such file exists: src/L1Trigger/L1TNtuples/plugins/$(file). Please fix src/L1Trigger/L1TNtuples/plugins/BuildFile.))))
L1TriggerL1TNtuplePlugins_BuildFile    := $(WORKINGDIR)/cache/bf/src/L1Trigger/L1TNtuples/plugins/BuildFile
L1TriggerL1TNtuplePlugins_LOC_USE := self  FWCore/Framework FWCore/PluginManager FWCore/ParameterSet CommonTools/UtilAlgos root CondFormats/DataRecord CondFormats/EcalObjects DataFormats/L1Trigger DataFormats/L1GlobalTrigger DataFormats/L1TCalorimeter DataFormats/L1GlobalMuonTrigger DataFormats/L1GlobalCaloTrigger DataFormats/L1CSCTrackFinder DataFormats/L1DTTrackFinder DataFormats/HcalDigi DataFormats/EcalDigi DataFormats/EcalRecHit DataFormats/RPCRecHit DataFormats/CSCRecHit DataFormats/JetReco DataFormats/METReco DataFormats/EgammaReco DataFormats/VertexReco DataFormats/MuonReco DataFormats/TrackReco RecoLocalCalo/EcalRecAlgos Geometry/DTGeometry Geometry/DTGeometryBuilder Geometry/CSCGeometry Geometry/CSCGeometryBuilder Geometry/RPCGeometry Geometry/TrackerGeometryBuilder TrackingTools/TransientTrack TrackingTools/TrajectoryState RecoVertex/KalmanVertexFit RecoMuon/TrackingTools L1Trigger/CSCTrackFinder L1Trigger/GlobalTriggerAnalyzer JetMETCorrections/Objects JetMETCorrections/Algorithms PhysicsTools/Utilities HLTrigger/HLTcore L1Trigger/L1TNtuples
L1TriggerL1TNtuplePlugins_PRE_INIT_FUNC += $$(eval $$(call edmPlugin,L1TriggerL1TNtuplePlugins,L1TriggerL1TNtuplePlugins,$(SCRAMSTORENAME_LIB),src/L1Trigger/L1TNtuples/plugins))
L1TriggerL1TNtuplePlugins_PACKAGE := self/src/L1Trigger/L1TNtuples/plugins
ALL_PRODS += L1TriggerL1TNtuplePlugins
L1Trigger/L1TNtuples_forbigobj+=L1TriggerL1TNtuplePlugins
L1TriggerL1TNtuplePlugins_INIT_FUNC        += $$(eval $$(call Library,L1TriggerL1TNtuplePlugins,src/L1Trigger/L1TNtuples/plugins,src_L1Trigger_L1TNtuples_plugins,$(SCRAMSTORENAME_BIN),,$(SCRAMSTORENAME_LIB),$(SCRAMSTORENAME_LOGS)))
L1TriggerL1TNtuplePlugins_CLASS := LIBRARY
else
$(eval $(call MultipleWarningMsg,L1TriggerL1TNtuplePlugins,src/L1Trigger/L1TNtuples/plugins))
endif
ALL_COMMONRULES += src_L1Trigger_L1TNtuples_plugins
src_L1Trigger_L1TNtuples_plugins_parent := L1Trigger/L1TNtuples
src_L1Trigger_L1TNtuples_plugins_INIT_FUNC += $$(eval $$(call CommonProductRules,src_L1Trigger_L1TNtuples_plugins,src/L1Trigger/L1TNtuples/plugins,PLUGINS))
ifeq ($(strip $(L1TriggerL1TCommonAuto)),)
L1TriggerL1TCommonAuto := self/src/L1Trigger/L1TCommon/plugins
PLUGINS:=yes
L1TriggerL1TCommonAuto_files := $(patsubst src/L1Trigger/L1TCommon/plugins/%,%,$(wildcard $(foreach dir,src/L1Trigger/L1TCommon/plugins ,$(foreach ext,$(SRC_FILES_SUFFIXES),$(dir)/*.$(ext)))))
L1TriggerL1TCommonAuto_BuildFile    := $(WORKINGDIR)/cache/bf/src/L1Trigger/L1TCommon/plugins/BuildFile
L1TriggerL1TCommonAuto_LOC_USE := self  FWCore/Framework FWCore/PluginManager FWCore/ParameterSet CondFormats/L1TObjects CondFormats/DataRecord DataFormats/L1Trigger DataFormats/L1TCalorimeter DataFormats/L1TMuon
L1TriggerL1TCommonAuto_PRE_INIT_FUNC += $$(eval $$(call edmPlugin,L1TriggerL1TCommonAuto,L1TriggerL1TCommonAuto,$(SCRAMSTORENAME_LIB),src/L1Trigger/L1TCommon/plugins))
L1TriggerL1TCommonAuto_PACKAGE := self/src/L1Trigger/L1TCommon/plugins
ALL_PRODS += L1TriggerL1TCommonAuto
L1Trigger/L1TCommon_forbigobj+=L1TriggerL1TCommonAuto
L1TriggerL1TCommonAuto_INIT_FUNC        += $$(eval $$(call Library,L1TriggerL1TCommonAuto,src/L1Trigger/L1TCommon/plugins,src_L1Trigger_L1TCommon_plugins,$(SCRAMSTORENAME_BIN),,$(SCRAMSTORENAME_LIB),$(SCRAMSTORENAME_LOGS)))
L1TriggerL1TCommonAuto_CLASS := LIBRARY
else
$(eval $(call MultipleWarningMsg,L1TriggerL1TCommonAuto,src/L1Trigger/L1TCommon/plugins))
endif
ALL_COMMONRULES += src_L1Trigger_L1TCommon_plugins
src_L1Trigger_L1TCommon_plugins_parent := L1Trigger/L1TCommon
src_L1Trigger_L1TCommon_plugins_INIT_FUNC += $$(eval $$(call CommonProductRules,src_L1Trigger_L1TCommon_plugins,src/L1Trigger/L1TCommon/plugins,PLUGINS))
ifeq ($(strip $(L1TriggerL1TGlobalPlugins)),)
L1TriggerL1TGlobalPlugins := self/src/L1Trigger/L1TGlobal/plugins
PLUGINS:=yes
L1TriggerL1TGlobalPlugins_files := $(patsubst src/L1Trigger/L1TGlobal/plugins/%,%,$(foreach file,*.cc,$(eval xfile:=$(wildcard src/L1Trigger/L1TGlobal/plugins/$(file)))$(if $(xfile),$(xfile),$(warning No such file exists: src/L1Trigger/L1TGlobal/plugins/$(file). Please fix src/L1Trigger/L1TGlobal/plugins/BuildFile.))))
L1TriggerL1TGlobalPlugins_BuildFile    := $(WORKINGDIR)/cache/bf/src/L1Trigger/L1TGlobal/plugins/BuildFile
L1TriggerL1TGlobalPlugins_LOC_USE := self  FWCore/Framework FWCore/PluginManager FWCore/ParameterSet DataFormats/L1Trigger CondFormats/L1TObjects CondFormats/DataRecord CondTools/L1Trigger xerces-c utm L1TriggerConfig/L1GtConfigProducers L1Trigger/L1TGlobal L1Trigger/GlobalTrigger
L1TriggerL1TGlobalPlugins_PRE_INIT_FUNC += $$(eval $$(call edmPlugin,L1TriggerL1TGlobalPlugins,L1TriggerL1TGlobalPlugins,$(SCRAMSTORENAME_LIB),src/L1Trigger/L1TGlobal/plugins))
L1TriggerL1TGlobalPlugins_PACKAGE := self/src/L1Trigger/L1TGlobal/plugins
ALL_PRODS += L1TriggerL1TGlobalPlugins
L1Trigger/L1TGlobal_forbigobj+=L1TriggerL1TGlobalPlugins
L1TriggerL1TGlobalPlugins_INIT_FUNC        += $$(eval $$(call Library,L1TriggerL1TGlobalPlugins,src/L1Trigger/L1TGlobal/plugins,src_L1Trigger_L1TGlobal_plugins,$(SCRAMSTORENAME_BIN),,$(SCRAMSTORENAME_LIB),$(SCRAMSTORENAME_LOGS)))
L1TriggerL1TGlobalPlugins_CLASS := LIBRARY
else
$(eval $(call MultipleWarningMsg,L1TriggerL1TGlobalPlugins,src/L1Trigger/L1TGlobal/plugins))
endif
ALL_COMMONRULES += src_L1Trigger_L1TGlobal_plugins
src_L1Trigger_L1TGlobal_plugins_parent := L1Trigger/L1TGlobal
src_L1Trigger_L1TGlobal_plugins_INIT_FUNC += $$(eval $$(call CommonProductRules,src_L1Trigger_L1TGlobal_plugins,src/L1Trigger/L1TGlobal/plugins,PLUGINS))
ifeq ($(strip $(L1Trigger/L1TNtuples)),)
ALL_COMMONRULES += src_L1Trigger_L1TNtuples_src
src_L1Trigger_L1TNtuples_src_parent := L1Trigger/L1TNtuples
src_L1Trigger_L1TNtuples_src_INIT_FUNC := $$(eval $$(call CommonProductRules,src_L1Trigger_L1TNtuples_src,src/L1Trigger/L1TNtuples/src,LIBRARY))
L1TriggerL1TNtuples := self/L1Trigger/L1TNtuples
L1Trigger/L1TNtuples := L1TriggerL1TNtuples
L1TriggerL1TNtuples_files := $(patsubst src/L1Trigger/L1TNtuples/src/%,%,$(wildcard $(foreach dir,src/L1Trigger/L1TNtuples/src ,$(foreach ext,$(SRC_FILES_SUFFIXES),$(dir)/*.$(ext)))))
L1TriggerL1TNtuples_BuildFile    := $(WORKINGDIR)/cache/bf/src/L1Trigger/L1TNtuples/BuildFile
L1TriggerL1TNtuples_LOC_USE := self  FWCore/Framework FWCore/PluginManager FWCore/ParameterSet CommonTools/UtilAlgos root CondFormats/DataRecord CondFormats/EcalObjects DataFormats/L1Trigger DataFormats/L1GlobalTrigger DataFormats/L1GlobalMuonTrigger DataFormats/L1GlobalCaloTrigger DataFormats/L1CSCTrackFinder DataFormats/L1DTTrackFinder DataFormats/HcalDigi DataFormats/EcalDigi DataFormats/EcalRecHit DataFormats/RPCRecHit DataFormats/CSCRecHit DataFormats/JetReco DataFormats/METReco DataFormats/EgammaReco DataFormats/VertexReco DataFormats/MuonReco RecoEgamma/EgammaTools DataFormats/TrackReco RecoLocalCalo/EcalRecAlgos Geometry/DTGeometry Geometry/DTGeometryBuilder Geometry/CSCGeometry Geometry/CSCGeometryBuilder Geometry/RPCGeometry Geometry/TrackerGeometryBuilder TrackingTools/TransientTrack TrackingTools/TrajectoryState RecoVertex/KalmanVertexFit RecoMuon/TrackingTools L1Trigger/CSCTrackFinder L1Trigger/GlobalTriggerAnalyzer JetMETCorrections/Objects JetMETCorrections/Algorithms PhysicsTools/Utilities HLTrigger/HLTcore
L1TriggerL1TNtuples_LCGDICTS  := x 
L1TriggerL1TNtuples_PRE_INIT_FUNC += $$(eval $$(call LCGDict,L1TriggerL1TNtuples,src/L1Trigger/L1TNtuples/src/classes.h,src/L1Trigger/L1TNtuples/src/classes_def.xml,$(SCRAMSTORENAME_LIB),$(GENREFLEX_ARGS) --fail_on_warnings,))
L1TriggerL1TNtuples_EX_LIB   := L1TriggerL1TNtuples
L1TriggerL1TNtuples_EX_USE   := $(foreach d,$(L1TriggerL1TNtuples_LOC_USE),$(if $($(d)_EX_FLAGS_NO_RECURSIVE_EXPORT),,$d))
L1TriggerL1TNtuples_PACKAGE := self/src/L1Trigger/L1TNtuples/src
ALL_PRODS += L1TriggerL1TNtuples
L1TriggerL1TNtuples_CLASS := LIBRARY
L1Trigger/L1TNtuples_forbigobj+=L1TriggerL1TNtuples
L1TriggerL1TNtuples_INIT_FUNC        += $$(eval $$(call Library,L1TriggerL1TNtuples,src/L1Trigger/L1TNtuples/src,src_L1Trigger_L1TNtuples_src,$(SCRAMSTORENAME_BIN),,$(SCRAMSTORENAME_LIB),$(SCRAMSTORENAME_LOGS)))
endif
ifeq ($(strip $(CondFormats/L1TObjects)),)
ALL_COMMONRULES += src_CondFormats_L1TObjects_src
src_CondFormats_L1TObjects_src_parent := CondFormats/L1TObjects
src_CondFormats_L1TObjects_src_INIT_FUNC := $$(eval $$(call CommonProductRules,src_CondFormats_L1TObjects_src,src/CondFormats/L1TObjects/src,LIBRARY))
CondFormatsL1TObjects := self/CondFormats/L1TObjects
CondFormats/L1TObjects := CondFormatsL1TObjects
CondFormatsL1TObjects_files := $(patsubst src/CondFormats/L1TObjects/src/%,%,$(wildcard $(foreach dir,src/CondFormats/L1TObjects/src ,$(foreach ext,$(SRC_FILES_SUFFIXES),$(dir)/*.$(ext)))))
CondFormatsL1TObjects_BuildFile    := $(WORKINGDIR)/cache/bf/src/CondFormats/L1TObjects/BuildFile
CondFormatsL1TObjects_LOC_USE := self  boost CondFormats/Serialization boost_serialization DataFormats/MuonDetId FWCore/ParameterSet FWCore/Utilities DataFormats/L1GlobalMuonTrigger DataFormats/L1GlobalCaloTrigger DataFormats/L1GlobalTrigger DataFormats/StdDictionaries
CondFormatsL1TObjects_LCGDICTS  := x 
CondFormatsL1TObjects_PRE_INIT_FUNC += $$(eval $$(call LCGDict,CondFormatsL1TObjects,src/CondFormats/L1TObjects/src/classes.h,src/CondFormats/L1TObjects/src/classes_def.xml,$(SCRAMSTORENAME_LIB), --fail_on_warnings,))
CondFormatsL1TObjects_PRE_INIT_FUNC += $$(eval $$(call CondSerialization,CondFormatsL1TObjects,src/CondFormats/L1TObjects/src,src/CondFormats/L1TObjects/src/headers.h))
CondFormatsL1TObjects_EX_LIB   := CondFormatsL1TObjects
CondFormatsL1TObjects_EX_USE   := $(foreach d,$(CondFormatsL1TObjects_LOC_USE),$(if $($(d)_EX_FLAGS_NO_RECURSIVE_EXPORT),,$d))
CondFormatsL1TObjects_PACKAGE := self/src/CondFormats/L1TObjects/src
ALL_PRODS += CondFormatsL1TObjects
CondFormatsL1TObjects_CLASS := LIBRARY
CondFormats/L1TObjects_forbigobj+=CondFormatsL1TObjects
CondFormatsL1TObjects_INIT_FUNC        += $$(eval $$(call Library,CondFormatsL1TObjects,src/CondFormats/L1TObjects/src,src_CondFormats_L1TObjects_src,$(SCRAMSTORENAME_BIN),,$(SCRAMSTORENAME_LIB),$(SCRAMSTORENAME_LOGS)))
endif
ifeq ($(strip $(DQM/L1TMonitor)),)
ALL_COMMONRULES += src_DQM_L1TMonitor_src
src_DQM_L1TMonitor_src_parent := DQM/L1TMonitor
src_DQM_L1TMonitor_src_INIT_FUNC := $$(eval $$(call CommonProductRules,src_DQM_L1TMonitor_src,src/DQM/L1TMonitor/src,LIBRARY))
DQML1TMonitor := self/DQM/L1TMonitor
DQM/L1TMonitor := DQML1TMonitor
DQML1TMonitor_files := $(patsubst src/DQM/L1TMonitor/src/%,%,$(wildcard $(foreach dir,src/DQM/L1TMonitor/src ,$(foreach ext,$(SRC_FILES_SUFFIXES),$(dir)/*.$(ext)))))
DQML1TMonitor_BuildFile    := $(WORKINGDIR)/cache/bf/src/DQM/L1TMonitor/BuildFile
DQML1TMonitor_LOC_USE := self  FWCore/Framework FWCore/PluginManager FWCore/ParameterSet DQMServices/Core DQMServices/Components DQMServices/ClientConfig DataFormats/L1Trigger DataFormats/LTCDigi DataFormats/CSCDigi DataFormats/L1CSCTrackFinder DataFormats/L1DTTrackFinder DataFormats/RPCDigi DataFormats/RPCRecHit DataFormats/L1GlobalMuonTrigger DataFormats/L1GlobalTrigger DataFormats/FEDRawData DataFormats/HcalDetId DataFormats/HcalDigi DataFormats/HcalRecHit DataFormats/CSCRecHit DataFormats/DTRecHit Geometry/EcalMapping Geometry/CaloGeometry Geometry/CaloTopology Geometry/HcalTowerAlgo Geometry/RPCGeometry RecoMuon/DetLayers Geometry/Records DataFormats/EcalDigi CondFormats/DataRecord CondFormats/L1TObjects L1Trigger/CSCTrackFinder L1Trigger/GlobalTriggerAnalyzer CondTools/L1Trigger root boost
DQML1TMonitor_EX_LIB   := DQML1TMonitor
DQML1TMonitor_EX_USE   := $(foreach d,$(DQML1TMonitor_LOC_USE),$(if $($(d)_EX_FLAGS_NO_RECURSIVE_EXPORT),,$d))
DQML1TMonitor_PACKAGE := self/src/DQM/L1TMonitor/src
ALL_PRODS += DQML1TMonitor
DQML1TMonitor_CLASS := LIBRARY
DQM/L1TMonitor_forbigobj+=DQML1TMonitor
DQML1TMonitor_INIT_FUNC        += $$(eval $$(call Library,DQML1TMonitor,src/DQM/L1TMonitor/src,src_DQM_L1TMonitor_src,$(SCRAMSTORENAME_BIN),,$(SCRAMSTORENAME_LIB),$(SCRAMSTORENAME_LOGS)))
endif
ifeq ($(strip $(CondCore/SiStripPlugins)),)
ALL_COMMONRULES += src_CondCore_SiStripPlugins_src
src_CondCore_SiStripPlugins_src_parent := CondCore/SiStripPlugins
src_CondCore_SiStripPlugins_src_INIT_FUNC := $$(eval $$(call CommonProductRules,src_CondCore_SiStripPlugins_src,src/CondCore/SiStripPlugins/src,LIBRARY))
CondCoreSiStripPlugins := self/CondCore/SiStripPlugins
CondCore/SiStripPlugins := CondCoreSiStripPlugins
CondCoreSiStripPlugins_files := $(patsubst src/CondCore/SiStripPlugins/src/%,%,$(wildcard $(foreach dir,src/CondCore/SiStripPlugins/src ,$(foreach ext,$(SRC_FILES_SUFFIXES),$(dir)/*.$(ext)))))
CondCoreSiStripPlugins_BuildFile    := $(WORKINGDIR)/cache/bf/src/CondCore/SiStripPlugins/BuildFile
CondCoreSiStripPlugins_LOC_USE := self  FWCore/Framework FWCore/PluginManager CondCore/ESSources CondFormats/SiStripObjects CondFormats/DataRecord
CondCoreSiStripPlugins_PRE_INIT_FUNC += $$(eval $$(call edmPlugin,CondCoreSiStripPlugins,CondCoreSiStripPlugins,$(SCRAMSTORENAME_LIB),src/CondCore/SiStripPlugins/src))
CondCoreSiStripPlugins_PACKAGE := self/src/CondCore/SiStripPlugins/src
ALL_PRODS += CondCoreSiStripPlugins
CondCoreSiStripPlugins_CLASS := LIBRARY
CondCore/SiStripPlugins_forbigobj+=CondCoreSiStripPlugins
CondCoreSiStripPlugins_INIT_FUNC        += $$(eval $$(call Library,CondCoreSiStripPlugins,src/CondCore/SiStripPlugins/src,src_CondCore_SiStripPlugins_src,$(SCRAMSTORENAME_BIN),,$(SCRAMSTORENAME_LIB),$(SCRAMSTORENAME_LOGS)))
endif
ifeq ($(strip $(L1TriggerL1TMuonBarrelPlugins)),)
L1TriggerL1TMuonBarrelPlugins := self/src/L1Trigger/L1TMuonBarrel/plugins
PLUGINS:=yes
L1TriggerL1TMuonBarrelPlugins_files := $(patsubst src/L1Trigger/L1TMuonBarrel/plugins/%,%,$(foreach file,*.cc,$(eval xfile:=$(wildcard src/L1Trigger/L1TMuonBarrel/plugins/$(file)))$(if $(xfile),$(xfile),$(warning No such file exists: src/L1Trigger/L1TMuonBarrel/plugins/$(file). Please fix src/L1Trigger/L1TMuonBarrel/plugins/BuildFile.))))
L1TriggerL1TMuonBarrelPlugins_BuildFile    := $(WORKINGDIR)/cache/bf/src/L1Trigger/L1TMuonBarrel/plugins/BuildFile
L1TriggerL1TMuonBarrelPlugins_LOC_FLAGS_LDFLAGS   := -fPIC
L1TriggerL1TMuonBarrelPlugins_LOC_USE := self  L1Trigger/L1TMuonEndCap L1Trigger/DTTrackFinder FWCore/ServiceRegistry CommonTools/UtilAlgos DataFormats/HepMCCandidate DataFormats/L1TMuon DQM/DTMonitorModule CondFormats/DataRecord CondFormats/L1TObjects L1Trigger/L1TMuonBarrel
L1TriggerL1TMuonBarrelPlugins_PRE_INIT_FUNC += $$(eval $$(call edmPlugin,L1TriggerL1TMuonBarrelPlugins,L1TriggerL1TMuonBarrelPlugins,$(SCRAMSTORENAME_LIB),src/L1Trigger/L1TMuonBarrel/plugins))
L1TriggerL1TMuonBarrelPlugins_PACKAGE := self/src/L1Trigger/L1TMuonBarrel/plugins
ALL_PRODS += L1TriggerL1TMuonBarrelPlugins
L1Trigger/L1TMuonBarrel_forbigobj+=L1TriggerL1TMuonBarrelPlugins
L1TriggerL1TMuonBarrelPlugins_INIT_FUNC        += $$(eval $$(call Library,L1TriggerL1TMuonBarrelPlugins,src/L1Trigger/L1TMuonBarrel/plugins,src_L1Trigger_L1TMuonBarrel_plugins,$(SCRAMSTORENAME_BIN),,$(SCRAMSTORENAME_LIB),$(SCRAMSTORENAME_LOGS)))
L1TriggerL1TMuonBarrelPlugins_CLASS := LIBRARY
else
$(eval $(call MultipleWarningMsg,L1TriggerL1TMuonBarrelPlugins,src/L1Trigger/L1TMuonBarrel/plugins))
endif
ALL_COMMONRULES += src_L1Trigger_L1TMuonBarrel_plugins
src_L1Trigger_L1TMuonBarrel_plugins_parent := L1Trigger/L1TMuonBarrel
src_L1Trigger_L1TMuonBarrel_plugins_INIT_FUNC += $$(eval $$(call CommonProductRules,src_L1Trigger_L1TMuonBarrel_plugins,src/L1Trigger/L1TMuonBarrel/plugins,PLUGINS))
ifeq ($(strip $(L1Trigger/L1TGlobal)),)
ALL_COMMONRULES += src_L1Trigger_L1TGlobal_src
src_L1Trigger_L1TGlobal_src_parent := L1Trigger/L1TGlobal
src_L1Trigger_L1TGlobal_src_INIT_FUNC := $$(eval $$(call CommonProductRules,src_L1Trigger_L1TGlobal_src,src/L1Trigger/L1TGlobal/src,LIBRARY))
L1TriggerL1TGlobal := self/L1Trigger/L1TGlobal
L1Trigger/L1TGlobal := L1TriggerL1TGlobal
L1TriggerL1TGlobal_files := $(patsubst src/L1Trigger/L1TGlobal/src/%,%,$(wildcard $(foreach dir,src/L1Trigger/L1TGlobal/src src/L1Trigger/L1TGlobal/src/L1TMenuEditor src/L1Trigger/L1TGlobal/src/L1TMenuEditor/xsd src/L1Trigger/L1TGlobal/src/L1TMenuEditor/xsd/cxx src/L1Trigger/L1TGlobal/src/L1TMenuEditor/xsd/cxx/compilers src/L1Trigger/L1TGlobal/src/L1TMenuEditor/xsd/cxx/compilers/vc-7 src/L1Trigger/L1TGlobal/src/L1TMenuEditor/xsd/cxx/compilers/vc-8 src/L1Trigger/L1TGlobal/src/L1TMenuEditor/xsd/cxx/parser src/L1Trigger/L1TGlobal/src/L1TMenuEditor/xsd/cxx/parser/expat src/L1Trigger/L1TGlobal/src/L1TMenuEditor/xsd/cxx/parser/non-validating src/L1Trigger/L1TGlobal/src/L1TMenuEditor/xsd/cxx/parser/validating src/L1Trigger/L1TGlobal/src/L1TMenuEditor/xsd/cxx/parser/xerces src/L1Trigger/L1TGlobal/src/L1TMenuEditor/xsd/cxx/tree src/L1Trigger/L1TGlobal/src/L1TMenuEditor/xsd/cxx/tree/bits src/L1Trigger/L1TGlobal/src/L1TMenuEditor/xsd/cxx/tree/parsing src/L1Trigger/L1TGlobal/src/L1TMenuEditor/xsd/cxx/tree/serialization src/L1Trigger/L1TGlobal/src/L1TMenuEditor/xsd/cxx/xml src/L1Trigger/L1TGlobal/src/L1TMenuEditor/xsd/cxx/xml/bits src/L1Trigger/L1TGlobal/src/L1TMenuEditor/xsd/cxx/xml/dom src/L1Trigger/L1TGlobal/src/L1TMenuEditor/xsd/cxx/xml/dom/bits src/L1Trigger/L1TGlobal/src/L1TMenuEditor/xsd/cxx/xml/sax src/L1Trigger/L1TGlobal/src/L1TMenuEditor/xsd/cxx/xml/sax/bits,$(foreach ext,$(SRC_FILES_SUFFIXES),$(dir)/*.$(ext)))))
L1TriggerL1TGlobal_BuildFile    := $(WORKINGDIR)/cache/bf/src/L1Trigger/L1TGlobal/src/BuildFile
L1TriggerL1TGlobal_LOC_USE := self  FWCore/Framework FWCore/PluginManager FWCore/ParameterSet DataFormats/L1TCalorimeter DataFormats/L1TGlobal CondFormats/L1TObjects CondFormats/DataRecord xerces-c
L1TriggerL1TGlobal_LCGDICTS  := x 
L1TriggerL1TGlobal_PRE_INIT_FUNC += $$(eval $$(call LCGDict,L1TriggerL1TGlobal,src/L1Trigger/L1TGlobal/src/classes.h,src/L1Trigger/L1TGlobal/src/classes_def.xml,$(SCRAMSTORENAME_LIB),$(GENREFLEX_ARGS) --fail_on_warnings,))
L1TriggerL1TGlobal_EX_LIB   := L1TriggerL1TGlobal
L1TriggerL1TGlobal_EX_USE   := $(foreach d,$(L1TriggerL1TGlobal_LOC_USE),$(if $($(d)_EX_FLAGS_NO_RECURSIVE_EXPORT),,$d))
L1TriggerL1TGlobal_PACKAGE := self/src/L1Trigger/L1TGlobal/src
ALL_PRODS += L1TriggerL1TGlobal
L1TriggerL1TGlobal_CLASS := LIBRARY
L1Trigger/L1TGlobal_forbigobj+=L1TriggerL1TGlobal
L1TriggerL1TGlobal_INIT_FUNC        += $$(eval $$(call Library,L1TriggerL1TGlobal,src/L1Trigger/L1TGlobal/src,src_L1Trigger_L1TGlobal_src,$(SCRAMSTORENAME_BIN),,$(SCRAMSTORENAME_LIB),$(SCRAMSTORENAME_LOGS)))
endif
ifeq ($(strip $(L1TriggerL1TMuonOverlapPlugins)),)
L1TriggerL1TMuonOverlapPlugins := self/src/L1Trigger/L1TMuonOverlap/plugins
PLUGINS:=yes
L1TriggerL1TMuonOverlapPlugins_files := $(patsubst src/L1Trigger/L1TMuonOverlap/plugins/%,%,$(foreach file,*.cc,$(eval xfile:=$(wildcard src/L1Trigger/L1TMuonOverlap/plugins/$(file)))$(if $(xfile),$(xfile),$(warning No such file exists: src/L1Trigger/L1TMuonOverlap/plugins/$(file). Please fix src/L1Trigger/L1TMuonOverlap/plugins/BuildFile.))))
L1TriggerL1TMuonOverlapPlugins_BuildFile    := $(WORKINGDIR)/cache/bf/src/L1Trigger/L1TMuonOverlap/plugins/BuildFile
L1TriggerL1TMuonOverlapPlugins_LOC_FLAGS_LDFLAGS   := -lXMLIO
L1TriggerL1TMuonOverlapPlugins_LOC_USE := self  L1Trigger/L1TMuonOverlap CondFormats/L1TObjects CondFormats/DataRecord FWCore/ServiceRegistry CondCore/DBOutputService SimDataFormats/Track root
L1TriggerL1TMuonOverlapPlugins_PRE_INIT_FUNC += $$(eval $$(call edmPlugin,L1TriggerL1TMuonOverlapPlugins,L1TriggerL1TMuonOverlapPlugins,$(SCRAMSTORENAME_LIB),src/L1Trigger/L1TMuonOverlap/plugins))
L1TriggerL1TMuonOverlapPlugins_PACKAGE := self/src/L1Trigger/L1TMuonOverlap/plugins
ALL_PRODS += L1TriggerL1TMuonOverlapPlugins
L1Trigger/L1TMuonOverlap_forbigobj+=L1TriggerL1TMuonOverlapPlugins
L1TriggerL1TMuonOverlapPlugins_INIT_FUNC        += $$(eval $$(call Library,L1TriggerL1TMuonOverlapPlugins,src/L1Trigger/L1TMuonOverlap/plugins,src_L1Trigger_L1TMuonOverlap_plugins,$(SCRAMSTORENAME_BIN),,$(SCRAMSTORENAME_LIB),$(SCRAMSTORENAME_LOGS)))
L1TriggerL1TMuonOverlapPlugins_CLASS := LIBRARY
else
$(eval $(call MultipleWarningMsg,L1TriggerL1TMuonOverlapPlugins,src/L1Trigger/L1TMuonOverlap/plugins))
endif
ALL_COMMONRULES += src_L1Trigger_L1TMuonOverlap_plugins
src_L1Trigger_L1TMuonOverlap_plugins_parent := L1Trigger/L1TMuonOverlap
src_L1Trigger_L1TMuonOverlap_plugins_INIT_FUNC += $$(eval $$(call CommonProductRules,src_L1Trigger_L1TMuonOverlap_plugins,src/L1Trigger/L1TMuonOverlap/plugins,PLUGINS))
ifeq ($(strip $(L1Trigger/L1TCaloLayer1)),)
ALL_COMMONRULES += src_L1Trigger_L1TCaloLayer1_src
src_L1Trigger_L1TCaloLayer1_src_parent := L1Trigger/L1TCaloLayer1
src_L1Trigger_L1TCaloLayer1_src_INIT_FUNC := $$(eval $$(call CommonProductRules,src_L1Trigger_L1TCaloLayer1_src,src/L1Trigger/L1TCaloLayer1/src,LIBRARY))
L1TriggerL1TCaloLayer1 := self/L1Trigger/L1TCaloLayer1
L1Trigger/L1TCaloLayer1 := L1TriggerL1TCaloLayer1
L1TriggerL1TCaloLayer1_files := $(patsubst src/L1Trigger/L1TCaloLayer1/src/%,%,$(wildcard $(foreach dir,src/L1Trigger/L1TCaloLayer1/src ,$(foreach ext,$(SRC_FILES_SUFFIXES),$(dir)/*.$(ext)))))
L1TriggerL1TCaloLayer1_BuildFile    := $(WORKINGDIR)/cache/bf/src/L1Trigger/L1TCaloLayer1/BuildFile
L1TriggerL1TCaloLayer1_LOC_USE := self  FWCore/Framework FWCore/ParameterSet FWCore/PluginManager FWCore/MessageLogger DataFormats/HcalDigi DataFormats/EcalDigi CondFormats/L1TObjects CondFormats/DataRecord DataFormats/L1TCalorimeter
L1TriggerL1TCaloLayer1_EX_LIB   := L1TriggerL1TCaloLayer1
L1TriggerL1TCaloLayer1_EX_USE   := $(foreach d,$(L1TriggerL1TCaloLayer1_LOC_USE),$(if $($(d)_EX_FLAGS_NO_RECURSIVE_EXPORT),,$d))
L1TriggerL1TCaloLayer1_PACKAGE := self/src/L1Trigger/L1TCaloLayer1/src
ALL_PRODS += L1TriggerL1TCaloLayer1
L1TriggerL1TCaloLayer1_CLASS := LIBRARY
L1Trigger/L1TCaloLayer1_forbigobj+=L1TriggerL1TCaloLayer1
L1TriggerL1TCaloLayer1_INIT_FUNC        += $$(eval $$(call Library,L1TriggerL1TCaloLayer1,src/L1Trigger/L1TCaloLayer1/src,src_L1Trigger_L1TCaloLayer1_src,$(SCRAMSTORENAME_BIN),,$(SCRAMSTORENAME_LIB),$(SCRAMSTORENAME_LOGS)))
endif
ifeq ($(strip $(L1Trigger/L1TMuonOverlap)),)
ALL_COMMONRULES += src_L1Trigger_L1TMuonOverlap_src
src_L1Trigger_L1TMuonOverlap_src_parent := L1Trigger/L1TMuonOverlap
src_L1Trigger_L1TMuonOverlap_src_INIT_FUNC := $$(eval $$(call CommonProductRules,src_L1Trigger_L1TMuonOverlap_src,src/L1Trigger/L1TMuonOverlap/src,LIBRARY))
L1TriggerL1TMuonOverlap := self/L1Trigger/L1TMuonOverlap
L1Trigger/L1TMuonOverlap := L1TriggerL1TMuonOverlap
L1TriggerL1TMuonOverlap_files := $(patsubst src/L1Trigger/L1TMuonOverlap/src/%,%,$(wildcard $(foreach dir,src/L1Trigger/L1TMuonOverlap/src ,$(foreach ext,$(SRC_FILES_SUFFIXES),$(dir)/*.$(ext)))))
L1TriggerL1TMuonOverlap_BuildFile    := $(WORKINGDIR)/cache/bf/src/L1Trigger/L1TMuonOverlap/BuildFile
L1TriggerL1TMuonOverlap_LOC_USE := self  xerces-c root L1Trigger/RPCTrigger DataFormats/L1TMuon Geometry/Records Geometry/DTGeometry Geometry/CSCGeometry Geometry/RPCGeometry L1Trigger/CSCCommonTrigger L1Trigger/DTUtilities
L1TriggerL1TMuonOverlap_EX_LIB   := L1TriggerL1TMuonOverlap
L1TriggerL1TMuonOverlap_EX_USE   := $(foreach d,$(L1TriggerL1TMuonOverlap_LOC_USE),$(if $($(d)_EX_FLAGS_NO_RECURSIVE_EXPORT),,$d))
L1TriggerL1TMuonOverlap_PACKAGE := self/src/L1Trigger/L1TMuonOverlap/src
ALL_PRODS += L1TriggerL1TMuonOverlap
L1TriggerL1TMuonOverlap_CLASS := LIBRARY
L1Trigger/L1TMuonOverlap_forbigobj+=L1TriggerL1TMuonOverlap
L1TriggerL1TMuonOverlap_INIT_FUNC        += $$(eval $$(call Library,L1TriggerL1TMuonOverlap,src/L1Trigger/L1TMuonOverlap/src,src_L1Trigger_L1TMuonOverlap_src,$(SCRAMSTORENAME_BIN),,$(SCRAMSTORENAME_LIB),$(SCRAMSTORENAME_LOGS)))
endif
ifeq ($(strip $(L1Trigger/L1TMuonEndCap)),)
ALL_COMMONRULES += src_L1Trigger_L1TMuonEndCap_src
src_L1Trigger_L1TMuonEndCap_src_parent := L1Trigger/L1TMuonEndCap
src_L1Trigger_L1TMuonEndCap_src_INIT_FUNC := $$(eval $$(call CommonProductRules,src_L1Trigger_L1TMuonEndCap_src,src/L1Trigger/L1TMuonEndCap/src,LIBRARY))
L1TriggerL1TMuonEndCap := self/L1Trigger/L1TMuonEndCap
L1Trigger/L1TMuonEndCap := L1TriggerL1TMuonEndCap
L1TriggerL1TMuonEndCap_files := $(patsubst src/L1Trigger/L1TMuonEndCap/src/%,%,$(wildcard $(foreach dir,src/L1Trigger/L1TMuonEndCap/src src/L1Trigger/L1TMuonEndCap/src/core_gen_summer_2013,$(foreach ext,$(SRC_FILES_SUFFIXES),$(dir)/*.$(ext)))))
L1TriggerL1TMuonEndCap_BuildFile    := $(WORKINGDIR)/cache/bf/src/L1Trigger/L1TMuonEndCap/BuildFile
L1TriggerL1TMuonEndCap_LOC_FLAGS_LDFLAGS   := -lXMLIO
L1TriggerL1TMuonEndCap_LOC_USE := self  DataFormats/L1TMuon Geometry/Records L1Trigger/DTTrackFinder Geometry/DTGeometry L1Trigger/DTUtilities Geometry/CSCGeometry L1Trigger/CSCCommonTrigger Geometry/RPCGeometry FWCore/PluginManager rootrflx PhysicsTools/UtilAlgos rootgraphics root rootmath L1Trigger/CSCTrackFinder DataFormats/ParticleFlowCandidate DataFormats/ParticleFlowReco L1Trigger/RPCTrigger L1Trigger/L1TMuon
L1TriggerL1TMuonEndCap_EX_LIB   := L1TriggerL1TMuonEndCap
L1TriggerL1TMuonEndCap_EX_USE   := $(foreach d,$(L1TriggerL1TMuonEndCap_LOC_USE),$(if $($(d)_EX_FLAGS_NO_RECURSIVE_EXPORT),,$d))
L1TriggerL1TMuonEndCap_PACKAGE := self/src/L1Trigger/L1TMuonEndCap/src
ALL_PRODS += L1TriggerL1TMuonEndCap
L1TriggerL1TMuonEndCap_CLASS := LIBRARY
L1Trigger/L1TMuonEndCap_forbigobj+=L1TriggerL1TMuonEndCap
L1TriggerL1TMuonEndCap_INIT_FUNC        += $$(eval $$(call Library,L1TriggerL1TMuonEndCap,src/L1Trigger/L1TMuonEndCap/src,src_L1Trigger_L1TMuonEndCap_src,$(SCRAMSTORENAME_BIN),,$(SCRAMSTORENAME_LIB),$(SCRAMSTORENAME_LOGS)))
endif
ifeq ($(strip $(L1Trigger/L1TMuonBarrel)),)
ALL_COMMONRULES += src_L1Trigger_L1TMuonBarrel_src
src_L1Trigger_L1TMuonBarrel_src_parent := L1Trigger/L1TMuonBarrel
src_L1Trigger_L1TMuonBarrel_src_INIT_FUNC := $$(eval $$(call CommonProductRules,src_L1Trigger_L1TMuonBarrel_src,src/L1Trigger/L1TMuonBarrel/src,LIBRARY))
L1TriggerL1TMuonBarrel := self/L1Trigger/L1TMuonBarrel
L1Trigger/L1TMuonBarrel := L1TriggerL1TMuonBarrel
L1TriggerL1TMuonBarrel_files := $(patsubst src/L1Trigger/L1TMuonBarrel/src/%,%,$(wildcard $(foreach dir,src/L1Trigger/L1TMuonBarrel/src src/L1Trigger/L1TMuonBarrel/src/Twinmux_v1,$(foreach ext,$(SRC_FILES_SUFFIXES),$(dir)/*.$(ext)))))
L1TriggerL1TMuonBarrel_BuildFile    := $(WORKINGDIR)/cache/bf/src/L1Trigger/L1TMuonBarrel/src/BuildFile
L1TriggerL1TMuonBarrel_LOC_USE := self  L1Trigger/L1TMuon L1Trigger/L1TMuonEndCap L1Trigger/DTTrackFinder FWCore/ServiceRegistry FWCore/Framework CommonTools/UtilAlgos DataFormats/HepMCCandidate DataFormats/L1TMuon DQM/DTMonitorModule CondFormats/L1TObjects CondFormats/DataRecord
L1TriggerL1TMuonBarrel_EX_LIB   := L1TriggerL1TMuonBarrel
L1TriggerL1TMuonBarrel_EX_USE   := $(foreach d,$(L1TriggerL1TMuonBarrel_LOC_USE),$(if $($(d)_EX_FLAGS_NO_RECURSIVE_EXPORT),,$d))
L1TriggerL1TMuonBarrel_PACKAGE := self/src/L1Trigger/L1TMuonBarrel/src
ALL_PRODS += L1TriggerL1TMuonBarrel
L1TriggerL1TMuonBarrel_CLASS := LIBRARY
L1Trigger/L1TMuonBarrel_forbigobj+=L1TriggerL1TMuonBarrel
L1TriggerL1TMuonBarrel_INIT_FUNC        += $$(eval $$(call Library,L1TriggerL1TMuonBarrel,src/L1Trigger/L1TMuonBarrel/src,src_L1Trigger_L1TMuonBarrel_src,$(SCRAMSTORENAME_BIN),,$(SCRAMSTORENAME_LIB),$(SCRAMSTORENAME_LOGS)))
endif
ifeq ($(strip $(L1TriggerL1TMuonPlugins)),)
L1TriggerL1TMuonPlugins := self/src/L1Trigger/L1TMuon/plugins
PLUGINS:=yes
L1TriggerL1TMuonPlugins_files := $(patsubst src/L1Trigger/L1TMuon/plugins/%,%,$(foreach file,*.cc,$(eval xfile:=$(wildcard src/L1Trigger/L1TMuon/plugins/$(file)))$(if $(xfile),$(xfile),$(warning No such file exists: src/L1Trigger/L1TMuon/plugins/$(file). Please fix src/L1Trigger/L1TMuon/plugins/BuildFile.))))
L1TriggerL1TMuonPlugins_BuildFile    := $(WORKINGDIR)/cache/bf/src/L1Trigger/L1TMuon/plugins/BuildFile
L1TriggerL1TMuonPlugins_LOC_USE := self  FWCore/Framework FWCore/PluginManager FWCore/ParameterSet FWCore/Utilities L1Trigger/L1TMuon DataFormats/L1Trigger CondFormats/L1TObjects CondFormats/DataRecord
L1TriggerL1TMuonPlugins_PRE_INIT_FUNC += $$(eval $$(call edmPlugin,L1TriggerL1TMuonPlugins,L1TriggerL1TMuonPlugins,$(SCRAMSTORENAME_LIB),src/L1Trigger/L1TMuon/plugins))
L1TriggerL1TMuonPlugins_PACKAGE := self/src/L1Trigger/L1TMuon/plugins
ALL_PRODS += L1TriggerL1TMuonPlugins
L1Trigger/L1TMuon_forbigobj+=L1TriggerL1TMuonPlugins
L1TriggerL1TMuonPlugins_INIT_FUNC        += $$(eval $$(call Library,L1TriggerL1TMuonPlugins,src/L1Trigger/L1TMuon/plugins,src_L1Trigger_L1TMuon_plugins,$(SCRAMSTORENAME_BIN),,$(SCRAMSTORENAME_LIB),$(SCRAMSTORENAME_LOGS)))
L1TriggerL1TMuonPlugins_CLASS := LIBRARY
else
$(eval $(call MultipleWarningMsg,L1TriggerL1TMuonPlugins,src/L1Trigger/L1TMuon/plugins))
endif
ALL_COMMONRULES += src_L1Trigger_L1TMuon_plugins
src_L1Trigger_L1TMuon_plugins_parent := L1Trigger/L1TMuon
src_L1Trigger_L1TMuon_plugins_INIT_FUNC += $$(eval $$(call CommonProductRules,src_L1Trigger_L1TMuon_plugins,src/L1Trigger/L1TMuon/plugins,PLUGINS))
ifeq ($(strip $(CondEmptyIOVSource)),)
CondEmptyIOVSource := self/src/CondCore/Utilities/plugins
PLUGINS:=yes
CondEmptyIOVSource_files := $(patsubst src/CondCore/Utilities/plugins/%,%,$(foreach file,EmptyIOVSource.cc,$(eval xfile:=$(wildcard src/CondCore/Utilities/plugins/$(file)))$(if $(xfile),$(xfile),$(warning No such file exists: src/CondCore/Utilities/plugins/$(file). Please fix src/CondCore/Utilities/plugins/BuildFile.))))
CondEmptyIOVSource_BuildFile    := $(WORKINGDIR)/cache/bf/src/CondCore/Utilities/plugins/BuildFile
CondEmptyIOVSource_LOC_USE := self  CondCore/CondDB FWCore/Sources
CondEmptyIOVSource_PRE_INIT_FUNC += $$(eval $$(call edmPlugin,CondEmptyIOVSource,CondEmptyIOVSource,$(SCRAMSTORENAME_LIB),src/CondCore/Utilities/plugins))
CondEmptyIOVSource_PACKAGE := self/src/CondCore/Utilities/plugins
ALL_PRODS += CondEmptyIOVSource
CondCore/Utilities_forbigobj+=CondEmptyIOVSource
CondEmptyIOVSource_INIT_FUNC        += $$(eval $$(call Library,CondEmptyIOVSource,src/CondCore/Utilities/plugins,src_CondCore_Utilities_plugins,$(SCRAMSTORENAME_BIN),,$(SCRAMSTORENAME_LIB),$(SCRAMSTORENAME_LOGS)))
CondEmptyIOVSource_CLASS := LIBRARY
else
$(eval $(call MultipleWarningMsg,CondEmptyIOVSource,src/CondCore/Utilities/plugins))
endif
ifeq ($(strip $(BasicPayload_PayloadInspector)),)
BasicPayload_PayloadInspector := self/src/CondCore/Utilities/plugins
PLUGINS:=yes
BasicPayload_PayloadInspector_files := $(patsubst src/CondCore/Utilities/plugins/%,%,$(foreach file,BasicP_PayloadInspector.cc,$(eval xfile:=$(wildcard src/CondCore/Utilities/plugins/$(file)))$(if $(xfile),$(xfile),$(warning No such file exists: src/CondCore/Utilities/plugins/$(file). Please fix src/CondCore/Utilities/plugins/BuildFile.))))
BasicPayload_PayloadInspector_BuildFile    := $(WORKINGDIR)/cache/bf/src/CondCore/Utilities/plugins/BuildFile
BasicPayload_PayloadInspector_LOC_USE := self  CondCore/Utilities CondCore/CondDB CondFormats/Common boost_python
BasicPayload_PayloadInspector_PRE_INIT_FUNC += $$(eval $$(call edmPlugin,BasicPayload_PayloadInspector,BasicPayload_PayloadInspector,$(SCRAMSTORENAME_LIB),src/CondCore/Utilities/plugins))
BasicPayload_PayloadInspector_PACKAGE := self/src/CondCore/Utilities/plugins
ALL_PRODS += BasicPayload_PayloadInspector
CondCore/Utilities_forbigobj+=BasicPayload_PayloadInspector
BasicPayload_PayloadInspector_INIT_FUNC        += $$(eval $$(call Library,BasicPayload_PayloadInspector,src/CondCore/Utilities/plugins,src_CondCore_Utilities_plugins,$(SCRAMSTORENAME_BIN),,$(SCRAMSTORENAME_LIB),$(SCRAMSTORENAME_LOGS)))
BasicPayload_PayloadInspector_CLASS := LIBRARY
else
$(eval $(call MultipleWarningMsg,BasicPayload_PayloadInspector,src/CondCore/Utilities/plugins))
endif
ALL_COMMONRULES += src_CondCore_Utilities_plugins
src_CondCore_Utilities_plugins_parent := CondCore/Utilities
src_CondCore_Utilities_plugins_INIT_FUNC += $$(eval $$(call CommonProductRules,src_CondCore_Utilities_plugins,src/CondCore/Utilities/plugins,PLUGINS))
ifeq ($(strip $(EventFilterL1TXRawToDigiAuto)),)
EventFilterL1TXRawToDigiAuto := self/src/EventFilter/L1TXRawToDigi/plugins
PLUGINS:=yes
EventFilterL1TXRawToDigiAuto_files := $(patsubst src/EventFilter/L1TXRawToDigi/plugins/%,%,$(wildcard $(foreach dir,src/EventFilter/L1TXRawToDigi/plugins ,$(foreach ext,$(SRC_FILES_SUFFIXES),$(dir)/*.$(ext)))))
EventFilterL1TXRawToDigiAuto_BuildFile    := $(WORKINGDIR)/cache/bf/src/EventFilter/L1TXRawToDigi/plugins/BuildFile
EventFilterL1TXRawToDigiAuto_LOC_USE := self  FWCore/Framework FWCore/ParameterSet FWCore/PluginManager FWCore/MessageLogger DataFormats/FEDRawData DataFormats/HcalDigi DataFormats/EcalDigi DataFormats/L1CaloTrigger DataFormats/L1DTTrackFinder DataFormats/L1GlobalMuonTrigger
EventFilterL1TXRawToDigiAuto_PRE_INIT_FUNC += $$(eval $$(call edmPlugin,EventFilterL1TXRawToDigiAuto,EventFilterL1TXRawToDigiAuto,$(SCRAMSTORENAME_LIB),src/EventFilter/L1TXRawToDigi/plugins))
EventFilterL1TXRawToDigiAuto_PACKAGE := self/src/EventFilter/L1TXRawToDigi/plugins
ALL_PRODS += EventFilterL1TXRawToDigiAuto
EventFilter/L1TXRawToDigi_forbigobj+=EventFilterL1TXRawToDigiAuto
EventFilterL1TXRawToDigiAuto_INIT_FUNC        += $$(eval $$(call Library,EventFilterL1TXRawToDigiAuto,src/EventFilter/L1TXRawToDigi/plugins,src_EventFilter_L1TXRawToDigi_plugins,$(SCRAMSTORENAME_BIN),,$(SCRAMSTORENAME_LIB),$(SCRAMSTORENAME_LOGS)))
EventFilterL1TXRawToDigiAuto_CLASS := LIBRARY
else
$(eval $(call MultipleWarningMsg,EventFilterL1TXRawToDigiAuto,src/EventFilter/L1TXRawToDigi/plugins))
endif
ALL_COMMONRULES += src_EventFilter_L1TXRawToDigi_plugins
src_EventFilter_L1TXRawToDigi_plugins_parent := EventFilter/L1TXRawToDigi
src_EventFilter_L1TXRawToDigi_plugins_INIT_FUNC += $$(eval $$(call CommonProductRules,src_EventFilter_L1TXRawToDigi_plugins,src/EventFilter/L1TXRawToDigi/plugins,PLUGINS))
ifeq ($(strip $(SiStrip_PayloadInspector)),)
SiStrip_PayloadInspector := self/src/CondCore/SiStripPlugins/plugins
PLUGINS:=yes
SiStrip_PayloadInspector_files := $(patsubst src/CondCore/SiStripPlugins/plugins/%,%,$(foreach file,SiStrip*_PayloadInspector.cc,$(eval xfile:=$(wildcard src/CondCore/SiStripPlugins/plugins/$(file)))$(if $(xfile),$(xfile),$(warning No such file exists: src/CondCore/SiStripPlugins/plugins/$(file). Please fix src/CondCore/SiStripPlugins/plugins/BuildFile.))))
SiStrip_PayloadInspector_BuildFile    := $(WORKINGDIR)/cache/bf/src/CondCore/SiStripPlugins/plugins/BuildFile
SiStrip_PayloadInspector_LOC_USE := self  CondCore/Utilities CondCore/CondDB CondFormats/Common boost_python
SiStrip_PayloadInspector_PRE_INIT_FUNC += $$(eval $$(call edmPlugin,SiStrip_PayloadInspector,SiStrip_PayloadInspector,$(SCRAMSTORENAME_LIB),src/CondCore/SiStripPlugins/plugins))
SiStrip_PayloadInspector_PACKAGE := self/src/CondCore/SiStripPlugins/plugins
ALL_PRODS += SiStrip_PayloadInspector
CondCore/SiStripPlugins_forbigobj+=SiStrip_PayloadInspector
SiStrip_PayloadInspector_INIT_FUNC        += $$(eval $$(call Library,SiStrip_PayloadInspector,src/CondCore/SiStripPlugins/plugins,src_CondCore_SiStripPlugins_plugins,$(SCRAMSTORENAME_BIN),,$(SCRAMSTORENAME_LIB),$(SCRAMSTORENAME_LOGS)))
SiStrip_PayloadInspector_CLASS := LIBRARY
else
$(eval $(call MultipleWarningMsg,SiStrip_PayloadInspector,src/CondCore/SiStripPlugins/plugins))
endif
ifeq ($(strip $(SiStripObjects_toXML)),)
SiStripObjects_toXML := self/src/CondCore/SiStripPlugins/plugins
PLUGINS:=yes
SiStripObjects_toXML_files := $(patsubst src/CondCore/SiStripPlugins/plugins/%,%,$(foreach file,SiStripObjects_toXML.cc,$(eval xfile:=$(wildcard src/CondCore/SiStripPlugins/plugins/$(file)))$(if $(xfile),$(xfile),$(warning No such file exists: src/CondCore/SiStripPlugins/plugins/$(file). Please fix src/CondCore/SiStripPlugins/plugins/BuildFile.))))
SiStripObjects_toXML_BuildFile    := $(WORKINGDIR)/cache/bf/src/CondCore/SiStripPlugins/plugins/BuildFile
SiStripObjects_toXML_LOC_USE := self  CondCore/Utilities CondCore/CondDB CondFormats/Common boost_python
SiStripObjects_toXML_PRE_INIT_FUNC += $$(eval $$(call edmPlugin,SiStripObjects_toXML,SiStripObjects_toXML,$(SCRAMSTORENAME_LIB),src/CondCore/SiStripPlugins/plugins))
SiStripObjects_toXML_PACKAGE := self/src/CondCore/SiStripPlugins/plugins
ALL_PRODS += SiStripObjects_toXML
CondCore/SiStripPlugins_forbigobj+=SiStripObjects_toXML
SiStripObjects_toXML_INIT_FUNC        += $$(eval $$(call Library,SiStripObjects_toXML,src/CondCore/SiStripPlugins/plugins,src_CondCore_SiStripPlugins_plugins,$(SCRAMSTORENAME_BIN),,$(SCRAMSTORENAME_LIB),$(SCRAMSTORENAME_LOGS)))
SiStripObjects_toXML_CLASS := LIBRARY
else
$(eval $(call MultipleWarningMsg,SiStripObjects_toXML,src/CondCore/SiStripPlugins/plugins))
endif
ALL_COMMONRULES += src_CondCore_SiStripPlugins_plugins
src_CondCore_SiStripPlugins_plugins_parent := CondCore/SiStripPlugins
src_CondCore_SiStripPlugins_plugins_INIT_FUNC += $$(eval $$(call CommonProductRules,src_CondCore_SiStripPlugins_plugins,src/CondCore/SiStripPlugins/plugins,PLUGINS))
ifeq ($(strip $(CondCore/EcalPlugins)),)
ALL_COMMONRULES += src_CondCore_EcalPlugins_src
src_CondCore_EcalPlugins_src_parent := CondCore/EcalPlugins
src_CondCore_EcalPlugins_src_INIT_FUNC := $$(eval $$(call CommonProductRules,src_CondCore_EcalPlugins_src,src/CondCore/EcalPlugins/src,LIBRARY))
CondCoreEcalPlugins := self/CondCore/EcalPlugins
CondCore/EcalPlugins := CondCoreEcalPlugins
CondCoreEcalPlugins_files := $(patsubst src/CondCore/EcalPlugins/src/%,%,$(wildcard $(foreach dir,src/CondCore/EcalPlugins/src ,$(foreach ext,$(SRC_FILES_SUFFIXES),$(dir)/*.$(ext)))))
CondCoreEcalPlugins_BuildFile    := $(WORKINGDIR)/cache/bf/src/CondCore/EcalPlugins/BuildFile
CondCoreEcalPlugins_LOC_USE := self  FWCore/Framework FWCore/PluginManager CondCore/ESSources CondFormats/EcalObjects CondFormats/DataRecord
CondCoreEcalPlugins_PRE_INIT_FUNC += $$(eval $$(call edmPlugin,CondCoreEcalPlugins,CondCoreEcalPlugins,$(SCRAMSTORENAME_LIB),src/CondCore/EcalPlugins/src))
CondCoreEcalPlugins_PACKAGE := self/src/CondCore/EcalPlugins/src
ALL_PRODS += CondCoreEcalPlugins
CondCoreEcalPlugins_CLASS := LIBRARY
CondCore/EcalPlugins_forbigobj+=CondCoreEcalPlugins
CondCoreEcalPlugins_INIT_FUNC        += $$(eval $$(call Library,CondCoreEcalPlugins,src/CondCore/EcalPlugins/src,src_CondCore_EcalPlugins_src,$(SCRAMSTORENAME_BIN),,$(SCRAMSTORENAME_LIB),$(SCRAMSTORENAME_LOGS)))
endif
ifeq ($(strip $(L1Trigger/L1TMuon)),)
ALL_COMMONRULES += src_L1Trigger_L1TMuon_src
src_L1Trigger_L1TMuon_src_parent := L1Trigger/L1TMuon
src_L1Trigger_L1TMuon_src_INIT_FUNC := $$(eval $$(call CommonProductRules,src_L1Trigger_L1TMuon_src,src/L1Trigger/L1TMuon/src,LIBRARY))
L1TriggerL1TMuon := self/L1Trigger/L1TMuon
L1Trigger/L1TMuon := L1TriggerL1TMuon
L1TriggerL1TMuon_files := $(patsubst src/L1Trigger/L1TMuon/src/%,%,$(wildcard $(foreach dir,src/L1Trigger/L1TMuon/src ,$(foreach ext,$(SRC_FILES_SUFFIXES),$(dir)/*.$(ext)))))
L1TriggerL1TMuon_BuildFile    := $(WORKINGDIR)/cache/bf/src/L1Trigger/L1TMuon/BuildFile
L1TriggerL1TMuon_LOC_USE := self  DataFormats/L1TMuon Geometry/Records L1Trigger/DTTrackFinder Geometry/DTGeometry L1Trigger/DTUtilities Geometry/CSCGeometry L1Trigger/CSCCommonTrigger Geometry/RPCGeometry FWCore/PluginManager rootrflx PhysicsTools/UtilAlgos rootgraphics root rootmath L1Trigger/CSCTrackFinder DataFormats/ParticleFlowCandidate DataFormats/ParticleFlowReco L1Trigger/RPCTrigger
L1TriggerL1TMuon_EX_LIB   := L1TriggerL1TMuon
L1TriggerL1TMuon_EX_USE   := $(foreach d,$(L1TriggerL1TMuon_LOC_USE),$(if $($(d)_EX_FLAGS_NO_RECURSIVE_EXPORT),,$d))
L1TriggerL1TMuon_PACKAGE := self/src/L1Trigger/L1TMuon/src
ALL_PRODS += L1TriggerL1TMuon
L1TriggerL1TMuon_CLASS := LIBRARY
L1Trigger/L1TMuon_forbigobj+=L1TriggerL1TMuon
L1TriggerL1TMuon_INIT_FUNC        += $$(eval $$(call Library,L1TriggerL1TMuon,src/L1Trigger/L1TMuon/src,src_L1Trigger_L1TMuon_src,$(SCRAMSTORENAME_BIN),,$(SCRAMSTORENAME_LIB),$(SCRAMSTORENAME_LOGS)))
endif
