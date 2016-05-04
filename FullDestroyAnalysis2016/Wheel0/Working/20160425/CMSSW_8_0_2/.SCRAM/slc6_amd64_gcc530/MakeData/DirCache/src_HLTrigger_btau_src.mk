ifeq ($(strip $(HLTrigger/btau)),)
ALL_COMMONRULES += src_HLTrigger_btau_src
src_HLTrigger_btau_src_parent := HLTrigger/btau
src_HLTrigger_btau_src_INIT_FUNC := $$(eval $$(call CommonProductRules,src_HLTrigger_btau_src,src/HLTrigger/btau/src,LIBRARY))
HLTriggerbtau := self/HLTrigger/btau
HLTrigger/btau := HLTriggerbtau
HLTriggerbtau_files := $(patsubst src/HLTrigger/btau/src/%,%,$(wildcard $(foreach dir,src/HLTrigger/btau/src ,$(foreach ext,$(SRC_FILES_SUFFIXES),$(dir)/*.$(ext)))))
HLTriggerbtau_BuildFile    := $(WORKINGDIR)/cache/bf/src/HLTrigger/btau/BuildFile
HLTriggerbtau_LOC_USE := self  DataFormats/BTauReco DataFormats/Candidate DataFormats/Common DataFormats/HLTReco DataFormats/JetReco DataFormats/RecoCandidate DataFormats/TrackReco DataFormats/VertexReco FWCore/Framework FWCore/MessageLogger FWCore/ParameterSet HLTrigger/HLTcore RecoTracker/TkTrackingRegions RecoVertex/KalmanVertexFit RecoVertex/VertexPrimitives TrackingTools/Records TrackingTools/TransientTrack
HLTriggerbtau_PRE_INIT_FUNC += $$(eval $$(call edmPlugin,HLTriggerbtau,HLTriggerbtau,$(SCRAMSTORENAME_LIB),src/HLTrigger/btau/src))
HLTriggerbtau_PACKAGE := self/src/HLTrigger/btau/src
ALL_PRODS += HLTriggerbtau
HLTriggerbtau_CLASS := LIBRARY
HLTrigger/btau_forbigobj+=HLTriggerbtau
HLTriggerbtau_INIT_FUNC        += $$(eval $$(call Library,HLTriggerbtau,src/HLTrigger/btau/src,src_HLTrigger_btau_src,$(SCRAMSTORENAME_BIN),,$(SCRAMSTORENAME_LIB),$(SCRAMSTORENAME_LOGS)))
endif
