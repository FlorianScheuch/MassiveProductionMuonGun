ifeq ($(strip $(HLTrigger/Muon)),)
ALL_COMMONRULES += src_HLTrigger_Muon_src
src_HLTrigger_Muon_src_parent := HLTrigger/Muon
src_HLTrigger_Muon_src_INIT_FUNC := $$(eval $$(call CommonProductRules,src_HLTrigger_Muon_src,src/HLTrigger/Muon/src,LIBRARY))
HLTriggerMuon := self/HLTrigger/Muon
HLTrigger/Muon := HLTriggerMuon
HLTriggerMuon_files := $(patsubst src/HLTrigger/Muon/src/%,%,$(wildcard $(foreach dir,src/HLTrigger/Muon/src ,$(foreach ext,$(SRC_FILES_SUFFIXES),$(dir)/*.$(ext)))))
HLTriggerMuon_BuildFile    := $(WORKINGDIR)/cache/bf/src/HLTrigger/Muon/BuildFile
HLTriggerMuon_LOC_USE := self  DataFormats/Common DataFormats/HLTReco DataFormats/L1GlobalMuonTrigger DataFormats/L1Trigger DataFormats/MuonReco DataFormats/MuonSeed DataFormats/RecoCandidate DataFormats/TrackReco DataFormats/TrajectorySeed DataFormats/BeamSpot DataFormats/Scouting FWCore/Framework FWCore/MessageLogger FWCore/ParameterSet FWCore/PluginManager FWCore/Utilities HLTrigger/HLTcore RecoMuon/MuonIsolation L1Trigger/CSCTrackFinder TrackingTools/PatternTools TrackingTools/TransientTrack MagneticField/Engine MagneticField/Records
HLTriggerMuon_PRE_INIT_FUNC += $$(eval $$(call edmPlugin,HLTriggerMuon,HLTriggerMuon,$(SCRAMSTORENAME_LIB),src/HLTrigger/Muon/src))
HLTriggerMuon_PACKAGE := self/src/HLTrigger/Muon/src
ALL_PRODS += HLTriggerMuon
HLTriggerMuon_CLASS := LIBRARY
HLTrigger/Muon_forbigobj+=HLTriggerMuon
HLTriggerMuon_INIT_FUNC        += $$(eval $$(call Library,HLTriggerMuon,src/HLTrigger/Muon/src,src_HLTrigger_Muon_src,$(SCRAMSTORENAME_BIN),,$(SCRAMSTORENAME_LIB),$(SCRAMSTORENAME_LOGS)))
endif
