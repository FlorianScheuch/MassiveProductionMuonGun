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
