ifeq ($(strip $(HLTriggerHLTcorePlugins)),)
HLTriggerHLTcorePlugins := self/src/HLTrigger/HLTcore/plugins
PLUGINS:=yes
HLTriggerHLTcorePlugins_files := $(patsubst src/HLTrigger/HLTcore/plugins/%,%,$(foreach file,*.cc,$(eval xfile:=$(wildcard src/HLTrigger/HLTcore/plugins/$(file)))$(if $(xfile),$(xfile),$(warning No such file exists: src/HLTrigger/HLTcore/plugins/$(file). Please fix src/HLTrigger/HLTcore/plugins/BuildFile.))))
HLTriggerHLTcorePlugins_BuildFile    := $(WORKINGDIR)/cache/bf/src/HLTrigger/HLTcore/plugins/BuildFile
HLTriggerHLTcorePlugins_LOC_USE := self  DataFormats/Candidate DataFormats/EgammaCandidates DataFormats/HcalIsolatedTrack DataFormats/HLTReco DataFormats/JetReco DataFormats/L1Trigger DataFormats/METReco DataFormats/Provenance DataFormats/RecoCandidate DataFormats/TauReco HLTrigger/HLTcore FWCore/PrescaleService FWCore/ServiceRegistry FWCore/Utilities
HLTriggerHLTcorePlugins_PRE_INIT_FUNC += $$(eval $$(call edmPlugin,HLTriggerHLTcorePlugins,HLTriggerHLTcorePlugins,$(SCRAMSTORENAME_LIB),src/HLTrigger/HLTcore/plugins))
HLTriggerHLTcorePlugins_PACKAGE := self/src/HLTrigger/HLTcore/plugins
ALL_PRODS += HLTriggerHLTcorePlugins
HLTrigger/HLTcore_forbigobj+=HLTriggerHLTcorePlugins
HLTriggerHLTcorePlugins_INIT_FUNC        += $$(eval $$(call Library,HLTriggerHLTcorePlugins,src/HLTrigger/HLTcore/plugins,src_HLTrigger_HLTcore_plugins,$(SCRAMSTORENAME_BIN),,$(SCRAMSTORENAME_LIB),$(SCRAMSTORENAME_LOGS)))
HLTriggerHLTcorePlugins_CLASS := LIBRARY
else
$(eval $(call MultipleWarningMsg,HLTriggerHLTcorePlugins,src/HLTrigger/HLTcore/plugins))
endif
ALL_COMMONRULES += src_HLTrigger_HLTcore_plugins
src_HLTrigger_HLTcore_plugins_parent := HLTrigger/HLTcore
src_HLTrigger_HLTcore_plugins_INIT_FUNC += $$(eval $$(call CommonProductRules,src_HLTrigger_HLTcore_plugins,src/HLTrigger/HLTcore/plugins,PLUGINS))
