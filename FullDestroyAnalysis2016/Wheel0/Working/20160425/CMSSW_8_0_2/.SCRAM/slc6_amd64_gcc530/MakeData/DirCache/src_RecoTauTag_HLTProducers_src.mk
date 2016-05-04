ifeq ($(strip $(RecoTauTag/HLTProducers)),)
ALL_COMMONRULES += src_RecoTauTag_HLTProducers_src
src_RecoTauTag_HLTProducers_src_parent := RecoTauTag/HLTProducers
src_RecoTauTag_HLTProducers_src_INIT_FUNC := $$(eval $$(call CommonProductRules,src_RecoTauTag_HLTProducers_src,src/RecoTauTag/HLTProducers/src,LIBRARY))
RecoTauTagHLTProducers := self/RecoTauTag/HLTProducers
RecoTauTag/HLTProducers := RecoTauTagHLTProducers
RecoTauTagHLTProducers_files := $(patsubst src/RecoTauTag/HLTProducers/src/%,%,$(wildcard $(foreach dir,src/RecoTauTag/HLTProducers/src ,$(foreach ext,$(SRC_FILES_SUFFIXES),$(dir)/*.$(ext)))))
RecoTauTagHLTProducers_BuildFile    := $(WORKINGDIR)/cache/bf/src/RecoTauTag/HLTProducers/BuildFile
RecoTauTagHLTProducers_LOC_USE := self  FWCore/Framework FWCore/PluginManager FWCore/ParameterSet DataFormats/Common DataFormats/BTauReco DataFormats/TauReco DataFormats/TrackReco DataFormats/Math DataFormats/Candidate DataFormats/JetReco DataFormats/GeometryVector DataFormats/CaloTowers DataFormats/DetId DataFormats/EcalDetId DataFormats/EcalRecHit DataFormats/EgammaReco Geometry/CaloGeometry Geometry/Records DataFormats/VertexReco DataFormats/L1Trigger DataFormats/HLTReco HLTrigger/HLTcore DataFormats/L1GlobalTrigger RecoPixelVertexing/PixelTrackFitting root
RecoTauTagHLTProducers_PRE_INIT_FUNC += $$(eval $$(call edmPlugin,RecoTauTagHLTProducers,RecoTauTagHLTProducers,$(SCRAMSTORENAME_LIB),src/RecoTauTag/HLTProducers/src))
RecoTauTagHLTProducers_PACKAGE := self/src/RecoTauTag/HLTProducers/src
ALL_PRODS += RecoTauTagHLTProducers
RecoTauTagHLTProducers_CLASS := LIBRARY
RecoTauTag/HLTProducers_forbigobj+=RecoTauTagHLTProducers
RecoTauTagHLTProducers_INIT_FUNC        += $$(eval $$(call Library,RecoTauTagHLTProducers,src/RecoTauTag/HLTProducers/src,src_RecoTauTag_HLTProducers_src,$(SCRAMSTORENAME_BIN),,$(SCRAMSTORENAME_LIB),$(SCRAMSTORENAME_LOGS)))
endif
