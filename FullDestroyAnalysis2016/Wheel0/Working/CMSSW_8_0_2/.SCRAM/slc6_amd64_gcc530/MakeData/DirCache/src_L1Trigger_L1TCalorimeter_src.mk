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
