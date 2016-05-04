ifeq ($(strip $(L1Trigger/HardwareValidation)),)
ALL_COMMONRULES += src_L1Trigger_HardwareValidation_src
src_L1Trigger_HardwareValidation_src_parent := L1Trigger/HardwareValidation
src_L1Trigger_HardwareValidation_src_INIT_FUNC := $$(eval $$(call CommonProductRules,src_L1Trigger_HardwareValidation_src,src/L1Trigger/HardwareValidation/src,LIBRARY))
L1TriggerHardwareValidation := self/L1Trigger/HardwareValidation
L1Trigger/HardwareValidation := L1TriggerHardwareValidation
L1TriggerHardwareValidation_files := $(patsubst src/L1Trigger/HardwareValidation/src/%,%,$(wildcard $(foreach dir,src/L1Trigger/HardwareValidation/src ,$(foreach ext,$(SRC_FILES_SUFFIXES),$(dir)/*.$(ext)))))
L1TriggerHardwareValidation_BuildFile    := $(WORKINGDIR)/cache/bf/src/L1Trigger/HardwareValidation/BuildFile
L1TriggerHardwareValidation_LOC_USE := self  FWCore/Framework FWCore/PluginManager FWCore/ParameterSet FWCore/MessageLogger DataFormats/EcalDigi DataFormats/L1CaloTrigger DataFormats/CSCDigi DataFormats/L1DTTrackFinder DataFormats/L1GlobalMuonTrigger DataFormats/L1GlobalTrigger DataFormats/L1Trigger DataFormats/FEDRawData DataFormats/L1TCalorimeter CondTools/L1Trigger
L1TriggerHardwareValidation_EX_LIB   := L1TriggerHardwareValidation
L1TriggerHardwareValidation_EX_USE   := $(foreach d,$(L1TriggerHardwareValidation_LOC_USE),$(if $($(d)_EX_FLAGS_NO_RECURSIVE_EXPORT),,$d))
L1TriggerHardwareValidation_PACKAGE := self/src/L1Trigger/HardwareValidation/src
ALL_PRODS += L1TriggerHardwareValidation
L1TriggerHardwareValidation_CLASS := LIBRARY
L1Trigger/HardwareValidation_forbigobj+=L1TriggerHardwareValidation
L1TriggerHardwareValidation_INIT_FUNC        += $$(eval $$(call Library,L1TriggerHardwareValidation,src/L1Trigger/HardwareValidation/src,src_L1Trigger_HardwareValidation_src,$(SCRAMSTORENAME_BIN),,$(SCRAMSTORENAME_LIB),$(SCRAMSTORENAME_LOGS)))
endif
