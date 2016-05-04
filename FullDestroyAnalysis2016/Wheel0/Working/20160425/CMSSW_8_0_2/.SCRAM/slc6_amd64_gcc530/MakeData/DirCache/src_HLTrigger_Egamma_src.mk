ifeq ($(strip $(HLTrigger/Egamma)),)
ALL_COMMONRULES += src_HLTrigger_Egamma_src
src_HLTrigger_Egamma_src_parent := HLTrigger/Egamma
src_HLTrigger_Egamma_src_INIT_FUNC := $$(eval $$(call CommonProductRules,src_HLTrigger_Egamma_src,src/HLTrigger/Egamma/src,LIBRARY))
HLTriggerEgamma := self/HLTrigger/Egamma
HLTrigger/Egamma := HLTriggerEgamma
HLTriggerEgamma_files := $(patsubst src/HLTrigger/Egamma/src/%,%,$(wildcard $(foreach dir,src/HLTrigger/Egamma/src ,$(foreach ext,$(SRC_FILES_SUFFIXES),$(dir)/*.$(ext)))))
HLTriggerEgamma_BuildFile    := $(WORKINGDIR)/cache/bf/src/HLTrigger/Egamma/BuildFile
HLTriggerEgamma_LOC_USE := self  DataFormats/Candidate DataFormats/Common DataFormats/EgammaCandidates DataFormats/EgammaReco DataFormats/HLTReco DataFormats/JetReco DataFormats/L1Trigger DataFormats/Scouting DataFormats/Math DataFormats/RecoCandidate DataFormats/TrackReco DataFormats/TrajectorySeed FWCore/Framework FWCore/MessageLogger FWCore/PluginManager HLTrigger/HLTcore CondFormats/L1TObjects CondFormats/DataRecord RecoEgamma/EgammaTools MagneticField/Engine MagneticField/Records RecoEcal/EgammaCoreTools RecoEgamma/EgammaElectronAlgos
HLTriggerEgamma_PRE_INIT_FUNC += $$(eval $$(call edmPlugin,HLTriggerEgamma,HLTriggerEgamma,$(SCRAMSTORENAME_LIB),src/HLTrigger/Egamma/src))
HLTriggerEgamma_PACKAGE := self/src/HLTrigger/Egamma/src
ALL_PRODS += HLTriggerEgamma
HLTriggerEgamma_CLASS := LIBRARY
HLTrigger/Egamma_forbigobj+=HLTriggerEgamma
HLTriggerEgamma_INIT_FUNC        += $$(eval $$(call Library,HLTriggerEgamma,src/HLTrigger/Egamma/src,src_HLTrigger_Egamma_src,$(SCRAMSTORENAME_BIN),,$(SCRAMSTORENAME_LIB),$(SCRAMSTORENAME_LOGS)))
endif
