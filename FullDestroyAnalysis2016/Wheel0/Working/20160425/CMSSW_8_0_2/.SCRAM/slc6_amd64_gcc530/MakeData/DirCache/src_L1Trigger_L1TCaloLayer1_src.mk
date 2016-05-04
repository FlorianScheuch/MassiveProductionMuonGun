ifeq ($(strip $(L1Trigger/L1TCaloLayer1)),)
ALL_COMMONRULES += src_L1Trigger_L1TCaloLayer1_src
src_L1Trigger_L1TCaloLayer1_src_parent := L1Trigger/L1TCaloLayer1
src_L1Trigger_L1TCaloLayer1_src_INIT_FUNC := $$(eval $$(call CommonProductRules,src_L1Trigger_L1TCaloLayer1_src,src/L1Trigger/L1TCaloLayer1/src,LIBRARY))
L1TriggerL1TCaloLayer1 := self/L1Trigger/L1TCaloLayer1
L1Trigger/L1TCaloLayer1 := L1TriggerL1TCaloLayer1
L1TriggerL1TCaloLayer1_files := $(patsubst src/L1Trigger/L1TCaloLayer1/src/%,%,$(wildcard $(foreach dir,src/L1Trigger/L1TCaloLayer1/src ,$(foreach ext,$(SRC_FILES_SUFFIXES),$(dir)/*.$(ext)))))
L1TriggerL1TCaloLayer1_BuildFile    := $(WORKINGDIR)/cache/bf/src/L1Trigger/L1TCaloLayer1/BuildFile
L1TriggerL1TCaloLayer1_LOC_USE := self  FWCore/Framework FWCore/ParameterSet FWCore/PluginManager FWCore/MessageLogger DataFormats/HcalDigi DataFormats/EcalDigi CondFormats/L1TObjects CalibFormats/CaloTPG L1Trigger/L1TCalorimeter CondFormats/DataRecord DataFormats/L1TCalorimeter
L1TriggerL1TCaloLayer1_EX_LIB   := L1TriggerL1TCaloLayer1
L1TriggerL1TCaloLayer1_EX_USE   := $(foreach d,$(L1TriggerL1TCaloLayer1_LOC_USE),$(if $($(d)_EX_FLAGS_NO_RECURSIVE_EXPORT),,$d))
L1TriggerL1TCaloLayer1_PACKAGE := self/src/L1Trigger/L1TCaloLayer1/src
ALL_PRODS += L1TriggerL1TCaloLayer1
L1TriggerL1TCaloLayer1_CLASS := LIBRARY
L1Trigger/L1TCaloLayer1_forbigobj+=L1TriggerL1TCaloLayer1
L1TriggerL1TCaloLayer1_INIT_FUNC        += $$(eval $$(call Library,L1TriggerL1TCaloLayer1,src/L1Trigger/L1TCaloLayer1/src,src_L1Trigger_L1TCaloLayer1_src,$(SCRAMSTORENAME_BIN),,$(SCRAMSTORENAME_LIB),$(SCRAMSTORENAME_LOGS)))
endif
