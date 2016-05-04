ifeq ($(strip $(L1TriggerL1TNtuplePlugins)),)
L1TriggerL1TNtuplePlugins := self/src/L1Trigger/L1TNtuples/plugins
PLUGINS:=yes
L1TriggerL1TNtuplePlugins_files := $(patsubst src/L1Trigger/L1TNtuples/plugins/%,%,$(foreach file,*.cc,$(eval xfile:=$(wildcard src/L1Trigger/L1TNtuples/plugins/$(file)))$(if $(xfile),$(xfile),$(warning No such file exists: src/L1Trigger/L1TNtuples/plugins/$(file). Please fix src/L1Trigger/L1TNtuples/plugins/BuildFile.))))
L1TriggerL1TNtuplePlugins_BuildFile    := $(WORKINGDIR)/cache/bf/src/L1Trigger/L1TNtuples/plugins/BuildFile
L1TriggerL1TNtuplePlugins_LOC_USE := self  FWCore/Framework FWCore/PluginManager FWCore/ParameterSet CommonTools/UtilAlgos root CondFormats/DataRecord CondFormats/EcalObjects DataFormats/L1Trigger DataFormats/L1GlobalTrigger DataFormats/L1TCalorimeter DataFormats/L1GlobalMuonTrigger DataFormats/L1GlobalCaloTrigger DataFormats/L1CSCTrackFinder DataFormats/L1DTTrackFinder DataFormats/HcalDigi DataFormats/EcalDigi DataFormats/EcalRecHit DataFormats/RPCRecHit DataFormats/CSCRecHit DataFormats/JetReco DataFormats/METReco DataFormats/EgammaReco DataFormats/VertexReco DataFormats/MuonReco DataFormats/TrackReco RecoLocalCalo/EcalRecAlgos Geometry/DTGeometry Geometry/DTGeometryBuilder Geometry/CSCGeometry Geometry/CSCGeometryBuilder Geometry/RPCGeometry Geometry/TrackerGeometryBuilder TrackingTools/TransientTrack TrackingTools/TrajectoryState RecoVertex/KalmanVertexFit RecoMuon/TrackingTools L1Trigger/CSCTrackFinder L1Trigger/GlobalTriggerAnalyzer JetMETCorrections/Objects JetMETCorrections/Algorithms PhysicsTools/Utilities HLTrigger/HLTcore L1Trigger/L1TNtuples
L1TriggerL1TNtuplePlugins_PRE_INIT_FUNC += $$(eval $$(call edmPlugin,L1TriggerL1TNtuplePlugins,L1TriggerL1TNtuplePlugins,$(SCRAMSTORENAME_LIB),src/L1Trigger/L1TNtuples/plugins))
L1TriggerL1TNtuplePlugins_PACKAGE := self/src/L1Trigger/L1TNtuples/plugins
ALL_PRODS += L1TriggerL1TNtuplePlugins
L1Trigger/L1TNtuples_forbigobj+=L1TriggerL1TNtuplePlugins
L1TriggerL1TNtuplePlugins_INIT_FUNC        += $$(eval $$(call Library,L1TriggerL1TNtuplePlugins,src/L1Trigger/L1TNtuples/plugins,src_L1Trigger_L1TNtuples_plugins,$(SCRAMSTORENAME_BIN),,$(SCRAMSTORENAME_LIB),$(SCRAMSTORENAME_LOGS)))
L1TriggerL1TNtuplePlugins_CLASS := LIBRARY
else
$(eval $(call MultipleWarningMsg,L1TriggerL1TNtuplePlugins,src/L1Trigger/L1TNtuples/plugins))
endif
ALL_COMMONRULES += src_L1Trigger_L1TNtuples_plugins
src_L1Trigger_L1TNtuples_plugins_parent := L1Trigger/L1TNtuples
src_L1Trigger_L1TNtuples_plugins_INIT_FUNC += $$(eval $$(call CommonProductRules,src_L1Trigger_L1TNtuples_plugins,src/L1Trigger/L1TNtuples/plugins,PLUGINS))
