ifeq ($(strip $(HLTrigger/HLTfilters)),)
ALL_COMMONRULES += src_HLTrigger_HLTfilters_src
src_HLTrigger_HLTfilters_src_parent := HLTrigger/HLTfilters
src_HLTrigger_HLTfilters_src_INIT_FUNC := $$(eval $$(call CommonProductRules,src_HLTrigger_HLTfilters_src,src/HLTrigger/HLTfilters/src,LIBRARY))
HLTriggerHLTfilters := self/HLTrigger/HLTfilters
HLTrigger/HLTfilters := HLTriggerHLTfilters
HLTriggerHLTfilters_files := $(patsubst src/HLTrigger/HLTfilters/src/%,%,$(wildcard $(foreach dir,src/HLTrigger/HLTfilters/src ,$(foreach ext,$(SRC_FILES_SUFFIXES),$(dir)/*.$(ext)))))
HLTriggerHLTfilters_BuildFile    := $(WORKINGDIR)/cache/bf/src/HLTrigger/HLTfilters/BuildFile
HLTriggerHLTfilters_LOC_USE := self  boost CommonTools/Utils CondFormats/DataRecord CondFormats/L1TObjects DataFormats/Candidate DataFormats/Common DataFormats/EgammaCandidates DataFormats/HLTReco DataFormats/TauReco DataFormats/JetReco DataFormats/L1GlobalTrigger DataFormats/L1Trigger DataFormats/L1TGlobal DataFormats/METReco DataFormats/RecoCandidate FWCore/Framework FWCore/MessageLogger FWCore/ParameterSet FWCore/Utilities HLTrigger/HLTcore CondFormats/HLTObjects
HLTriggerHLTfilters_PRE_INIT_FUNC += $$(eval $$(call edmPlugin,HLTriggerHLTfilters,HLTriggerHLTfilters,$(SCRAMSTORENAME_LIB),src/HLTrigger/HLTfilters/src))
HLTriggerHLTfilters_PACKAGE := self/src/HLTrigger/HLTfilters/src
ALL_PRODS += HLTriggerHLTfilters
HLTriggerHLTfilters_CLASS := LIBRARY
HLTrigger/HLTfilters_forbigobj+=HLTriggerHLTfilters
HLTriggerHLTfilters_INIT_FUNC        += $$(eval $$(call Library,HLTriggerHLTfilters,src/HLTrigger/HLTfilters/src,src_HLTrigger_HLTfilters_src,$(SCRAMSTORENAME_BIN),,$(SCRAMSTORENAME_LIB),$(SCRAMSTORENAME_LOGS)))
endif
