ifeq ($(strip $(HLTriggerOffline/Egamma)),)
ALL_COMMONRULES += src_HLTriggerOffline_Egamma_src
src_HLTriggerOffline_Egamma_src_parent := HLTriggerOffline/Egamma
src_HLTriggerOffline_Egamma_src_INIT_FUNC := $$(eval $$(call CommonProductRules,src_HLTriggerOffline_Egamma_src,src/HLTriggerOffline/Egamma/src,LIBRARY))
HLTriggerOfflineEgamma := self/HLTriggerOffline/Egamma
HLTriggerOffline/Egamma := HLTriggerOfflineEgamma
HLTriggerOfflineEgamma_files := $(patsubst src/HLTriggerOffline/Egamma/src/%,%,$(wildcard $(foreach dir,src/HLTriggerOffline/Egamma/src ,$(foreach ext,$(SRC_FILES_SUFFIXES),$(dir)/*.$(ext)))))
HLTriggerOfflineEgamma_BuildFile    := $(WORKINGDIR)/cache/bf/src/HLTriggerOffline/Egamma/BuildFile
HLTriggerOfflineEgamma_LOC_USE := self  FWCore/Framework FWCore/PluginManager FWCore/ParameterSet FWCore/ServiceRegistry DQMServices/Core DataFormats/HepMCCandidate DataFormats/CLHEP SimDataFormats/GeneratorProducts HLTrigger/HLTcore boost
HLTriggerOfflineEgamma_PRE_INIT_FUNC += $$(eval $$(call edmPlugin,HLTriggerOfflineEgamma,HLTriggerOfflineEgamma,$(SCRAMSTORENAME_LIB),src/HLTriggerOffline/Egamma/src))
HLTriggerOfflineEgamma_PACKAGE := self/src/HLTriggerOffline/Egamma/src
ALL_PRODS += HLTriggerOfflineEgamma
HLTriggerOfflineEgamma_CLASS := LIBRARY
HLTriggerOffline/Egamma_forbigobj+=HLTriggerOfflineEgamma
HLTriggerOfflineEgamma_INIT_FUNC        += $$(eval $$(call Library,HLTriggerOfflineEgamma,src/HLTriggerOffline/Egamma/src,src_HLTriggerOffline_Egamma_src,$(SCRAMSTORENAME_BIN),,$(SCRAMSTORENAME_LIB),$(SCRAMSTORENAME_LOGS)))
endif
