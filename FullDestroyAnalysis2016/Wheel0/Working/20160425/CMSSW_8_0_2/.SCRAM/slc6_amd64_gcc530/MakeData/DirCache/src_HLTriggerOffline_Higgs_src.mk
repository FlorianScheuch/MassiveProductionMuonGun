ifeq ($(strip $(HLTriggerOffline/Higgs)),)
ALL_COMMONRULES += src_HLTriggerOffline_Higgs_src
src_HLTriggerOffline_Higgs_src_parent := HLTriggerOffline/Higgs
src_HLTriggerOffline_Higgs_src_INIT_FUNC := $$(eval $$(call CommonProductRules,src_HLTriggerOffline_Higgs_src,src/HLTriggerOffline/Higgs/src,LIBRARY))
HLTriggerOfflineHiggs := self/HLTriggerOffline/Higgs
HLTriggerOffline/Higgs := HLTriggerOfflineHiggs
HLTriggerOfflineHiggs_files := $(patsubst src/HLTriggerOffline/Higgs/src/%,%,$(wildcard $(foreach dir,src/HLTriggerOffline/Higgs/src ,$(foreach ext,$(SRC_FILES_SUFFIXES),$(dir)/*.$(ext)))))
HLTriggerOfflineHiggs_BuildFile    := $(WORKINGDIR)/cache/bf/src/HLTriggerOffline/Higgs/BuildFile
HLTriggerOfflineHiggs_LOC_USE := self  root FWCore/Framework FWCore/PluginManager FWCore/ParameterSet FWCore/MessageLogger FWCore/Utilities HLTrigger/HLTcore CommonTools/Utils DQMServices/Core DataFormats/MuonReco DataFormats/EgammaCandidates DataFormats/METReco DataFormats/TauReco DataFormats/TrackReco DataFormats/HepMCCandidate hepmc
HLTriggerOfflineHiggs_PRE_INIT_FUNC += $$(eval $$(call edmPlugin,HLTriggerOfflineHiggs,HLTriggerOfflineHiggs,$(SCRAMSTORENAME_LIB),src/HLTriggerOffline/Higgs/src))
HLTriggerOfflineHiggs_PACKAGE := self/src/HLTriggerOffline/Higgs/src
ALL_PRODS += HLTriggerOfflineHiggs
HLTriggerOfflineHiggs_CLASS := LIBRARY
HLTriggerOffline/Higgs_forbigobj+=HLTriggerOfflineHiggs
HLTriggerOfflineHiggs_INIT_FUNC        += $$(eval $$(call Library,HLTriggerOfflineHiggs,src/HLTriggerOffline/Higgs/src,src_HLTriggerOffline_Higgs_src,$(SCRAMSTORENAME_BIN),,$(SCRAMSTORENAME_LIB),$(SCRAMSTORENAME_LOGS)))
endif
