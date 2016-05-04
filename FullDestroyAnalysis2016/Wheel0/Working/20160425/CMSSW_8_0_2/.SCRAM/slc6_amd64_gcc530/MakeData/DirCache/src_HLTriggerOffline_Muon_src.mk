ifeq ($(strip $(HLTriggerOffline/Muon)),)
ALL_COMMONRULES += src_HLTriggerOffline_Muon_src
src_HLTriggerOffline_Muon_src_parent := HLTriggerOffline/Muon
src_HLTriggerOffline_Muon_src_INIT_FUNC := $$(eval $$(call CommonProductRules,src_HLTriggerOffline_Muon_src,src/HLTriggerOffline/Muon/src,LIBRARY))
HLTriggerOfflineMuon := self/HLTriggerOffline/Muon
HLTriggerOffline/Muon := HLTriggerOfflineMuon
HLTriggerOfflineMuon_files := $(patsubst src/HLTriggerOffline/Muon/src/%,%,$(wildcard $(foreach dir,src/HLTriggerOffline/Muon/src ,$(foreach ext,$(SRC_FILES_SUFFIXES),$(dir)/*.$(ext)))))
HLTriggerOfflineMuon_BuildFile    := $(WORKINGDIR)/cache/bf/src/HLTriggerOffline/Muon/BuildFile
HLTriggerOfflineMuon_LOC_USE := self  DQMServices/Core FWCore/Framework FWCore/PluginManager FWCore/ParameterSet DataFormats/MuonReco DataFormats/HepMCCandidate DataFormats/RecoCandidate DataFormats/L1GlobalMuonTrigger HLTrigger/HLTcore CommonTools/Utils root DataFormats/CLHEP DataFormats/GeometrySurface DataFormats/L1Trigger DataFormats/Math DataFormats/TrackReco FWCore/MessageLogger FWCore/Utilities Geometry/CommonDetUnit Geometry/Records MagneticField/Engine MagneticField/Records RecoMuon/DetLayers RecoMuon/Records TrackingTools/DetLayers TrackingTools/GeomPropagators TrackingTools/KalmanUpdators TrackingTools/PatternTools TrackingTools/Records TrackingTools/TrajectoryState
HLTriggerOfflineMuon_PRE_INIT_FUNC += $$(eval $$(call edmPlugin,HLTriggerOfflineMuon,HLTriggerOfflineMuon,$(SCRAMSTORENAME_LIB),src/HLTriggerOffline/Muon/src))
HLTriggerOfflineMuon_PACKAGE := self/src/HLTriggerOffline/Muon/src
ALL_PRODS += HLTriggerOfflineMuon
HLTriggerOfflineMuon_CLASS := LIBRARY
HLTriggerOffline/Muon_forbigobj+=HLTriggerOfflineMuon
HLTriggerOfflineMuon_INIT_FUNC        += $$(eval $$(call Library,HLTriggerOfflineMuon,src/HLTriggerOffline/Muon/src,src_HLTriggerOffline_Muon_src,$(SCRAMSTORENAME_BIN),,$(SCRAMSTORENAME_LIB),$(SCRAMSTORENAME_LOGS)))
endif
