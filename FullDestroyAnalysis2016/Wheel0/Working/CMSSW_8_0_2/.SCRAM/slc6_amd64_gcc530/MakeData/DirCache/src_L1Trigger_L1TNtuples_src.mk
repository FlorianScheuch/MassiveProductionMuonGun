ifeq ($(strip $(L1Trigger/L1TNtuples)),)
ALL_COMMONRULES += src_L1Trigger_L1TNtuples_src
src_L1Trigger_L1TNtuples_src_parent := L1Trigger/L1TNtuples
src_L1Trigger_L1TNtuples_src_INIT_FUNC := $$(eval $$(call CommonProductRules,src_L1Trigger_L1TNtuples_src,src/L1Trigger/L1TNtuples/src,LIBRARY))
L1TriggerL1TNtuples := self/L1Trigger/L1TNtuples
L1Trigger/L1TNtuples := L1TriggerL1TNtuples
L1TriggerL1TNtuples_files := $(patsubst src/L1Trigger/L1TNtuples/src/%,%,$(wildcard $(foreach dir,src/L1Trigger/L1TNtuples/src ,$(foreach ext,$(SRC_FILES_SUFFIXES),$(dir)/*.$(ext)))))
L1TriggerL1TNtuples_BuildFile    := $(WORKINGDIR)/cache/bf/src/L1Trigger/L1TNtuples/BuildFile
L1TriggerL1TNtuples_LOC_USE := self  FWCore/Framework FWCore/PluginManager FWCore/ParameterSet CommonTools/UtilAlgos root CondFormats/DataRecord CondFormats/EcalObjects DataFormats/L1Trigger DataFormats/L1GlobalTrigger DataFormats/L1GlobalMuonTrigger DataFormats/L1GlobalCaloTrigger DataFormats/L1CSCTrackFinder DataFormats/L1DTTrackFinder DataFormats/HcalDigi DataFormats/EcalDigi DataFormats/EcalRecHit DataFormats/RPCRecHit DataFormats/CSCRecHit DataFormats/JetReco DataFormats/METReco DataFormats/EgammaReco DataFormats/VertexReco DataFormats/MuonReco RecoEgamma/EgammaTools DataFormats/TrackReco RecoLocalCalo/EcalRecAlgos Geometry/DTGeometry Geometry/DTGeometryBuilder Geometry/CSCGeometry Geometry/CSCGeometryBuilder Geometry/RPCGeometry Geometry/TrackerGeometryBuilder TrackingTools/TransientTrack TrackingTools/TrajectoryState RecoVertex/KalmanVertexFit RecoMuon/TrackingTools L1Trigger/CSCTrackFinder L1Trigger/GlobalTriggerAnalyzer JetMETCorrections/Objects JetMETCorrections/Algorithms PhysicsTools/Utilities HLTrigger/HLTcore
L1TriggerL1TNtuples_LCGDICTS  := x 
L1TriggerL1TNtuples_PRE_INIT_FUNC += $$(eval $$(call LCGDict,L1TriggerL1TNtuples,src/L1Trigger/L1TNtuples/src/classes.h,src/L1Trigger/L1TNtuples/src/classes_def.xml,$(SCRAMSTORENAME_LIB),$(GENREFLEX_ARGS) --fail_on_warnings,))
L1TriggerL1TNtuples_EX_LIB   := L1TriggerL1TNtuples
L1TriggerL1TNtuples_EX_USE   := $(foreach d,$(L1TriggerL1TNtuples_LOC_USE),$(if $($(d)_EX_FLAGS_NO_RECURSIVE_EXPORT),,$d))
L1TriggerL1TNtuples_PACKAGE := self/src/L1Trigger/L1TNtuples/src
ALL_PRODS += L1TriggerL1TNtuples
L1TriggerL1TNtuples_CLASS := LIBRARY
L1Trigger/L1TNtuples_forbigobj+=L1TriggerL1TNtuples
L1TriggerL1TNtuples_INIT_FUNC        += $$(eval $$(call Library,L1TriggerL1TNtuples,src/L1Trigger/L1TNtuples/src,src_L1Trigger_L1TNtuples_src,$(SCRAMSTORENAME_BIN),,$(SCRAMSTORENAME_LIB),$(SCRAMSTORENAME_LOGS)))
endif
