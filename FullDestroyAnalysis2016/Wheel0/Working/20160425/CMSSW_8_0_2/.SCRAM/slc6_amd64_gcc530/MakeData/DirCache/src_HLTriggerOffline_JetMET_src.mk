ifeq ($(strip $(HLTriggerOffline/JetMET)),)
ALL_COMMONRULES += src_HLTriggerOffline_JetMET_src
src_HLTriggerOffline_JetMET_src_parent := HLTriggerOffline/JetMET
src_HLTriggerOffline_JetMET_src_INIT_FUNC := $$(eval $$(call CommonProductRules,src_HLTriggerOffline_JetMET_src,src/HLTriggerOffline/JetMET/src,LIBRARY))
HLTriggerOfflineJetMET := self/HLTriggerOffline/JetMET
HLTriggerOffline/JetMET := HLTriggerOfflineJetMET
HLTriggerOfflineJetMET_files := $(patsubst src/HLTriggerOffline/JetMET/src/%,%,$(wildcard $(foreach dir,src/HLTriggerOffline/JetMET/src ,$(foreach ext,$(SRC_FILES_SUFFIXES),$(dir)/*.$(ext)))))
HLTriggerOfflineJetMET_BuildFile    := $(WORKINGDIR)/cache/bf/src/HLTriggerOffline/JetMET/BuildFile
HLTriggerOfflineJetMET_LOC_USE := self  FWCore/Framework FWCore/PluginManager FWCore/ParameterSet HLTrigger/HLTcore FWCore/ServiceRegistry DQMServices/Core DataFormats/Common DataFormats/CLHEP DataFormats/L1GlobalTrigger FWCore/MessageLogger
HLTriggerOfflineJetMET_PRE_INIT_FUNC += $$(eval $$(call edmPlugin,HLTriggerOfflineJetMET,HLTriggerOfflineJetMET,$(SCRAMSTORENAME_LIB),src/HLTriggerOffline/JetMET/src))
HLTriggerOfflineJetMET_PACKAGE := self/src/HLTriggerOffline/JetMET/src
ALL_PRODS += HLTriggerOfflineJetMET
HLTriggerOfflineJetMET_CLASS := LIBRARY
HLTriggerOffline/JetMET_forbigobj+=HLTriggerOfflineJetMET
HLTriggerOfflineJetMET_INIT_FUNC        += $$(eval $$(call Library,HLTriggerOfflineJetMET,src/HLTriggerOffline/JetMET/src,src_HLTriggerOffline_JetMET_src,$(SCRAMSTORENAME_BIN),,$(SCRAMSTORENAME_LIB),$(SCRAMSTORENAME_LOGS)))
endif
