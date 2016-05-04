ifeq ($(strip $(DQMOffline/Trigger)),)
ALL_COMMONRULES += src_DQMOffline_Trigger_src
src_DQMOffline_Trigger_src_parent := DQMOffline/Trigger
src_DQMOffline_Trigger_src_INIT_FUNC := $$(eval $$(call CommonProductRules,src_DQMOffline_Trigger_src,src/DQMOffline/Trigger/src,LIBRARY))
DQMOfflineTrigger := self/DQMOffline/Trigger
DQMOffline/Trigger := DQMOfflineTrigger
DQMOfflineTrigger_files := $(patsubst src/DQMOffline/Trigger/src/%,%,$(wildcard $(foreach dir,src/DQMOffline/Trigger/src ,$(foreach ext,$(SRC_FILES_SUFFIXES),$(dir)/*.$(ext)))))
DQMOfflineTrigger_BuildFile    := $(WORKINGDIR)/cache/bf/src/DQMOffline/Trigger/BuildFile
DQMOfflineTrigger_LOC_USE := self  DQMServices/Core FWCore/Framework FWCore/PluginManager FWCore/ParameterSet FWCore/ServiceRegistry FWCore/Utilities DataFormats/RecoCandidate DataFormats/HLTReco DataFormats/MuonReco DataFormats/EgammaReco DataFormats/TrackReco DataFormats/TrajectorySeed DataFormats/BTauReco DataFormats/TauReco DataFormats/METReco DataFormats/JetReco DataFormats/CaloTowers DataFormats/HeavyIonEvent CommonTools/Utils RecoEcal/EgammaCoreTools RecoEgamma/EgammaHLTAlgos RecoEgamma/EgammaIsolationAlgos HLTrigger/HLTcore CondFormats/DataRecord RecoJets/JetAssociationAlgorithms RecoJets/JetAlgorithms RecoJets/JetProducers JetMETCorrections/Objects root boost
DQMOfflineTrigger_PRE_INIT_FUNC += $$(eval $$(call edmPlugin,DQMOfflineTrigger,DQMOfflineTrigger,$(SCRAMSTORENAME_LIB),src/DQMOffline/Trigger/src))
DQMOfflineTrigger_PACKAGE := self/src/DQMOffline/Trigger/src
ALL_PRODS += DQMOfflineTrigger
DQMOfflineTrigger_CLASS := LIBRARY
DQMOffline/Trigger_forbigobj+=DQMOfflineTrigger
DQMOfflineTrigger_INIT_FUNC        += $$(eval $$(call Library,DQMOfflineTrigger,src/DQMOffline/Trigger/src,src_DQMOffline_Trigger_src,$(SCRAMSTORENAME_BIN),,$(SCRAMSTORENAME_LIB),$(SCRAMSTORENAME_LOGS)))
endif
