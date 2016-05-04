ifeq ($(strip $(L1TriggerHardwareValidationPlugins)),)
L1TriggerHardwareValidationPlugins := self/src/L1Trigger/HardwareValidation/plugins
PLUGINS:=yes
L1TriggerHardwareValidationPlugins_files := $(patsubst src/L1Trigger/HardwareValidation/plugins/%,%,$(foreach file,*.cc,$(eval xfile:=$(wildcard src/L1Trigger/HardwareValidation/plugins/$(file)))$(if $(xfile),$(xfile),$(warning No such file exists: src/L1Trigger/HardwareValidation/plugins/$(file). Please fix src/L1Trigger/HardwareValidation/plugins/BuildFile.))))
L1TriggerHardwareValidationPlugins_BuildFile    := $(WORKINGDIR)/cache/bf/src/L1Trigger/HardwareValidation/plugins/BuildFile
L1TriggerHardwareValidationPlugins_LOC_USE := self  FWCore/Framework FWCore/PluginManager FWCore/ParameterSet FWCore/MessageLogger L1Trigger/HardwareValidation DataFormats/EcalDigi DataFormats/HcalDigi DataFormats/L1CaloTrigger DataFormats/CSCDigi DataFormats/LTCDigi DataFormats/L1DTTrackFinder DataFormats/L1CSCTrackFinder DataFormats/L1GlobalMuonTrigger DataFormats/L1GlobalTrigger DataFormats/L1Trigger DataFormats/FEDRawData L1Trigger/CSCTrackFinder
L1TriggerHardwareValidationPlugins_PRE_INIT_FUNC += $$(eval $$(call edmPlugin,L1TriggerHardwareValidationPlugins,L1TriggerHardwareValidationPlugins,$(SCRAMSTORENAME_LIB),src/L1Trigger/HardwareValidation/plugins))
L1TriggerHardwareValidationPlugins_PACKAGE := self/src/L1Trigger/HardwareValidation/plugins
ALL_PRODS += L1TriggerHardwareValidationPlugins
L1Trigger/HardwareValidation_forbigobj+=L1TriggerHardwareValidationPlugins
L1TriggerHardwareValidationPlugins_INIT_FUNC        += $$(eval $$(call Library,L1TriggerHardwareValidationPlugins,src/L1Trigger/HardwareValidation/plugins,src_L1Trigger_HardwareValidation_plugins,$(SCRAMSTORENAME_BIN),,$(SCRAMSTORENAME_LIB),$(SCRAMSTORENAME_LOGS)))
L1TriggerHardwareValidationPlugins_CLASS := LIBRARY
else
$(eval $(call MultipleWarningMsg,L1TriggerHardwareValidationPlugins,src/L1Trigger/HardwareValidation/plugins))
endif
ALL_COMMONRULES += src_L1Trigger_HardwareValidation_plugins
src_L1Trigger_HardwareValidation_plugins_parent := L1Trigger/HardwareValidation
src_L1Trigger_HardwareValidation_plugins_INIT_FUNC += $$(eval $$(call CommonProductRules,src_L1Trigger_HardwareValidation_plugins,src/L1Trigger/HardwareValidation/plugins,PLUGINS))
