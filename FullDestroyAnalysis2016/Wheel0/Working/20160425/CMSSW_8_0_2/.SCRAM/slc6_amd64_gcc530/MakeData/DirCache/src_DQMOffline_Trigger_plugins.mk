ifeq ($(strip $(DQMOfflineTriggerPlugins)),)
DQMOfflineTriggerPlugins := self/src/DQMOffline/Trigger/plugins
PLUGINS:=yes
DQMOfflineTriggerPlugins_files := $(patsubst src/DQMOffline/Trigger/plugins/%,%,$(foreach file,*.cc,$(eval xfile:=$(wildcard src/DQMOffline/Trigger/plugins/$(file)))$(if $(xfile),$(xfile),$(warning No such file exists: src/DQMOffline/Trigger/plugins/$(file). Please fix src/DQMOffline/Trigger/plugins/BuildFile.))))
DQMOfflineTriggerPlugins_BuildFile    := $(WORKINGDIR)/cache/bf/src/DQMOffline/Trigger/plugins/BuildFile
DQMOfflineTriggerPlugins_LOC_USE := self  FWCore/Framework FWCore/PluginManager FWCore/ParameterSet FWCore/ServiceRegistry DataFormats/RecoCandidate DataFormats/HLTReco DataFormats/MuonReco DataFormats/EgammaReco DataFormats/TrackReco DataFormats/TrajectorySeed DataFormats/BTauReco DataFormats/TauReco DataFormats/METReco DataFormats/JetReco RecoEcal/EgammaCoreTools RecoEgamma/EgammaHLTAlgos HLTrigger/HLTcore CondFormats/DataRecord DQMServices/Core root roofit boost
DQMOfflineTriggerPlugins_PRE_INIT_FUNC += $$(eval $$(call edmPlugin,DQMOfflineTriggerPlugins,DQMOfflineTriggerPlugins,$(SCRAMSTORENAME_LIB),src/DQMOffline/Trigger/plugins))
DQMOfflineTriggerPlugins_PACKAGE := self/src/DQMOffline/Trigger/plugins
ALL_PRODS += DQMOfflineTriggerPlugins
DQMOffline/Trigger_forbigobj+=DQMOfflineTriggerPlugins
DQMOfflineTriggerPlugins_INIT_FUNC        += $$(eval $$(call Library,DQMOfflineTriggerPlugins,src/DQMOffline/Trigger/plugins,src_DQMOffline_Trigger_plugins,$(SCRAMSTORENAME_BIN),,$(SCRAMSTORENAME_LIB),$(SCRAMSTORENAME_LOGS)))
DQMOfflineTriggerPlugins_CLASS := LIBRARY
else
$(eval $(call MultipleWarningMsg,DQMOfflineTriggerPlugins,src/DQMOffline/Trigger/plugins))
endif
ALL_COMMONRULES += src_DQMOffline_Trigger_plugins
src_DQMOffline_Trigger_plugins_parent := DQMOffline/Trigger
src_DQMOffline_Trigger_plugins_INIT_FUNC += $$(eval $$(call CommonProductRules,src_DQMOffline_Trigger_plugins,src/DQMOffline/Trigger/plugins,PLUGINS))
