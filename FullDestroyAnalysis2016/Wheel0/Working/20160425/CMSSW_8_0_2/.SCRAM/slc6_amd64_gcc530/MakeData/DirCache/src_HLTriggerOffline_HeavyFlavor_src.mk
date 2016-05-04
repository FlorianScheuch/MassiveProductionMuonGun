ifeq ($(strip $(HLTriggerOffline/HeavyFlavor)),)
ALL_COMMONRULES += src_HLTriggerOffline_HeavyFlavor_src
src_HLTriggerOffline_HeavyFlavor_src_parent := HLTriggerOffline/HeavyFlavor
src_HLTriggerOffline_HeavyFlavor_src_INIT_FUNC := $$(eval $$(call CommonProductRules,src_HLTriggerOffline_HeavyFlavor_src,src/HLTriggerOffline/HeavyFlavor/src,LIBRARY))
HLTriggerOfflineHeavyFlavor := self/HLTriggerOffline/HeavyFlavor
HLTriggerOffline/HeavyFlavor := HLTriggerOfflineHeavyFlavor
HLTriggerOfflineHeavyFlavor_files := $(patsubst src/HLTriggerOffline/HeavyFlavor/src/%,%,$(wildcard $(foreach dir,src/HLTriggerOffline/HeavyFlavor/src ,$(foreach ext,$(SRC_FILES_SUFFIXES),$(dir)/*.$(ext)))))
HLTriggerOfflineHeavyFlavor_BuildFile    := $(WORKINGDIR)/cache/bf/src/HLTriggerOffline/HeavyFlavor/BuildFile
HLTriggerOfflineHeavyFlavor_LOC_USE := self  FWCore/Framework FWCore/MessageLogger FWCore/ServiceRegistry FWCore/ParameterSet DataFormats/Common DataFormats/TrackReco DataFormats/RecoCandidate DataFormats/L1Trigger DataFormats/Candidate DataFormats/HepMCCandidate DataFormats/MuonReco DataFormats/Math HLTrigger/HLTcore DQMServices/Core
HLTriggerOfflineHeavyFlavor_PRE_INIT_FUNC += $$(eval $$(call edmPlugin,HLTriggerOfflineHeavyFlavor,HLTriggerOfflineHeavyFlavor,$(SCRAMSTORENAME_LIB),src/HLTriggerOffline/HeavyFlavor/src))
HLTriggerOfflineHeavyFlavor_PACKAGE := self/src/HLTriggerOffline/HeavyFlavor/src
ALL_PRODS += HLTriggerOfflineHeavyFlavor
HLTriggerOfflineHeavyFlavor_CLASS := LIBRARY
HLTriggerOffline/HeavyFlavor_forbigobj+=HLTriggerOfflineHeavyFlavor
HLTriggerOfflineHeavyFlavor_INIT_FUNC        += $$(eval $$(call Library,HLTriggerOfflineHeavyFlavor,src/HLTriggerOffline/HeavyFlavor/src,src_HLTriggerOffline_HeavyFlavor_src,$(SCRAMSTORENAME_BIN),,$(SCRAMSTORENAME_LIB),$(SCRAMSTORENAME_LOGS)))
endif
