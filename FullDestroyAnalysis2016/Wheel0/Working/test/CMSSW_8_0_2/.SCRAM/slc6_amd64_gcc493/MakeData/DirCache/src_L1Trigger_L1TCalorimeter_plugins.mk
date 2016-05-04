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
