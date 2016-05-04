ifeq ($(strip $(HLTrigger/JetMET)),)
ALL_COMMONRULES += src_HLTrigger_JetMET_src
src_HLTrigger_JetMET_src_parent := HLTrigger/JetMET
src_HLTrigger_JetMET_src_INIT_FUNC := $$(eval $$(call CommonProductRules,src_HLTrigger_JetMET_src,src/HLTrigger/JetMET/src,LIBRARY))
HLTriggerJetMET := self/HLTrigger/JetMET
HLTrigger/JetMET := HLTriggerJetMET
HLTriggerJetMET_files := $(patsubst src/HLTrigger/JetMET/src/%,%,$(wildcard $(foreach dir,src/HLTrigger/JetMET/src ,$(foreach ext,$(SRC_FILES_SUFFIXES),$(dir)/*.$(ext)))))
HLTriggerJetMET_BuildFile    := $(WORKINGDIR)/cache/bf/src/HLTrigger/JetMET/BuildFile
HLTriggerJetMET_LOC_USE := self  DataFormats/Common DataFormats/BTauReco DataFormats/HLTReco DataFormats/HcalRecHit DataFormats/JetReco DataFormats/METReco DataFormats/Scouting DataFormats/Math Geometry/Records Geometry/CaloTopology FWCore/Framework FWCore/MessageLogger FWCore/ParameterSet FWCore/PluginManager FWCore/Utilities RecoMET/METAlgorithms HLTrigger/HLTcore RecoJets/JetProducers TrackingTools/IPTools TrackingTools/TransientTrack
HLTriggerJetMET_EX_LIB   := HLTriggerJetMET
HLTriggerJetMET_EX_USE   := $(foreach d,$(HLTriggerJetMET_LOC_USE),$(if $($(d)_EX_FLAGS_NO_RECURSIVE_EXPORT),,$d))
HLTriggerJetMET_PACKAGE := self/src/HLTrigger/JetMET/src
ALL_PRODS += HLTriggerJetMET
HLTriggerJetMET_CLASS := LIBRARY
HLTrigger/JetMET_forbigobj+=HLTriggerJetMET
HLTriggerJetMET_INIT_FUNC        += $$(eval $$(call Library,HLTriggerJetMET,src/HLTrigger/JetMET/src,src_HLTrigger_JetMET_src,$(SCRAMSTORENAME_BIN),,$(SCRAMSTORENAME_LIB),$(SCRAMSTORENAME_LOGS)))
endif
