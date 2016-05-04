ifeq ($(strip $(HLTriggerJetMETPlugins)),)
HLTriggerJetMETPlugins := self/src/HLTrigger/JetMET/plugins
PLUGINS:=yes
HLTriggerJetMETPlugins_files := $(patsubst src/HLTrigger/JetMET/plugins/%,%,$(foreach file,*.cc,$(eval xfile:=$(wildcard src/HLTrigger/JetMET/plugins/$(file)))$(if $(xfile),$(xfile),$(warning No such file exists: src/HLTrigger/JetMET/plugins/$(file). Please fix src/HLTrigger/JetMET/plugins/BuildFile.))))
HLTriggerJetMETPlugins_BuildFile    := $(WORKINGDIR)/cache/bf/src/HLTrigger/JetMET/plugins/BuildFile
HLTriggerJetMETPlugins_LOC_USE := self  DataFormats/Common DataFormats/HLTReco DataFormats/HcalRecHit DataFormats/JetReco DataFormats/METReco DataFormats/Scouting DataFormats/Math Geometry/Records Geometry/CaloTopology FWCore/Framework FWCore/MessageLogger FWCore/ParameterSet FWCore/PluginManager FWCore/Utilities RecoMET/METAlgorithms HLTrigger/HLTcore RecoJets/JetProducers TrackingTools/IPTools TrackingTools/TransientTrack HLTrigger/JetMET
HLTriggerJetMETPlugins_PRE_INIT_FUNC += $$(eval $$(call edmPlugin,HLTriggerJetMETPlugins,HLTriggerJetMETPlugins,$(SCRAMSTORENAME_LIB),src/HLTrigger/JetMET/plugins))
HLTriggerJetMETPlugins_PACKAGE := self/src/HLTrigger/JetMET/plugins
ALL_PRODS += HLTriggerJetMETPlugins
HLTrigger/JetMET_forbigobj+=HLTriggerJetMETPlugins
HLTriggerJetMETPlugins_INIT_FUNC        += $$(eval $$(call Library,HLTriggerJetMETPlugins,src/HLTrigger/JetMET/plugins,src_HLTrigger_JetMET_plugins,$(SCRAMSTORENAME_BIN),,$(SCRAMSTORENAME_LIB),$(SCRAMSTORENAME_LOGS)))
HLTriggerJetMETPlugins_CLASS := LIBRARY
else
$(eval $(call MultipleWarningMsg,HLTriggerJetMETPlugins,src/HLTrigger/JetMET/plugins))
endif
ALL_COMMONRULES += src_HLTrigger_JetMET_plugins
src_HLTrigger_JetMET_plugins_parent := HLTrigger/JetMET
src_HLTrigger_JetMET_plugins_INIT_FUNC += $$(eval $$(call CommonProductRules,src_HLTrigger_JetMET_plugins,src/HLTrigger/JetMET/plugins,PLUGINS))
