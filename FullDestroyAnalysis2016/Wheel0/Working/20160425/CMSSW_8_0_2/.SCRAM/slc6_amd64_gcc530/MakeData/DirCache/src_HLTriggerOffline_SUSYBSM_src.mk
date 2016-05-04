ifeq ($(strip $(HLTriggerOffline/SUSYBSM)),)
ALL_COMMONRULES += src_HLTriggerOffline_SUSYBSM_src
src_HLTriggerOffline_SUSYBSM_src_parent := HLTriggerOffline/SUSYBSM
src_HLTriggerOffline_SUSYBSM_src_INIT_FUNC := $$(eval $$(call CommonProductRules,src_HLTriggerOffline_SUSYBSM_src,src/HLTriggerOffline/SUSYBSM/src,LIBRARY))
HLTriggerOfflineSUSYBSM := self/HLTriggerOffline/SUSYBSM
HLTriggerOffline/SUSYBSM := HLTriggerOfflineSUSYBSM
HLTriggerOfflineSUSYBSM_files := $(patsubst src/HLTriggerOffline/SUSYBSM/src/%,%,$(wildcard $(foreach dir,src/HLTriggerOffline/SUSYBSM/src ,$(foreach ext,$(SRC_FILES_SUFFIXES),$(dir)/*.$(ext)))))
HLTriggerOfflineSUSYBSM_BuildFile    := $(WORKINGDIR)/cache/bf/src/HLTriggerOffline/SUSYBSM/BuildFile
HLTriggerOfflineSUSYBSM_LOC_USE := self  DataFormats/BeamSpot DataFormats/BTauReco DataFormats/Candidate DataFormats/Common DataFormats/EgammaCandidates DataFormats/HepMCCandidate DataFormats/HLTReco DataFormats/JetReco DataFormats/L1GlobalTrigger DataFormats/L1Trigger DataFormats/Math DataFormats/METReco DataFormats/MuonReco DataFormats/VertexReco DQMServices/Core FWCore/Common FWCore/Framework FWCore/MessageLogger FWCore/ParameterSet FWCore/ServiceRegistry HLTrigger/HLTcore HLTrigger/JetMET RecoEgamma/EgammaTools rootgraphics
HLTriggerOfflineSUSYBSM_PRE_INIT_FUNC += $$(eval $$(call edmPlugin,HLTriggerOfflineSUSYBSM,HLTriggerOfflineSUSYBSM,$(SCRAMSTORENAME_LIB),src/HLTriggerOffline/SUSYBSM/src))
HLTriggerOfflineSUSYBSM_PACKAGE := self/src/HLTriggerOffline/SUSYBSM/src
ALL_PRODS += HLTriggerOfflineSUSYBSM
HLTriggerOfflineSUSYBSM_CLASS := LIBRARY
HLTriggerOffline/SUSYBSM_forbigobj+=HLTriggerOfflineSUSYBSM
HLTriggerOfflineSUSYBSM_INIT_FUNC        += $$(eval $$(call Library,HLTriggerOfflineSUSYBSM,src/HLTriggerOffline/SUSYBSM/src,src_HLTriggerOffline_SUSYBSM_src,$(SCRAMSTORENAME_BIN),,$(SCRAMSTORENAME_LIB),$(SCRAMSTORENAME_LOGS)))
endif
