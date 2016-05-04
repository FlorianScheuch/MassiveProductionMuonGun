ifeq ($(strip $(EventFilter/CSCTFRawToDigi)),)
ALL_COMMONRULES += src_EventFilter_CSCTFRawToDigi_src
src_EventFilter_CSCTFRawToDigi_src_parent := EventFilter/CSCTFRawToDigi
src_EventFilter_CSCTFRawToDigi_src_INIT_FUNC := $$(eval $$(call CommonProductRules,src_EventFilter_CSCTFRawToDigi_src,src/EventFilter/CSCTFRawToDigi/src,LIBRARY))
EventFilterCSCTFRawToDigi := self/EventFilter/CSCTFRawToDigi
EventFilter/CSCTFRawToDigi := EventFilterCSCTFRawToDigi
EventFilterCSCTFRawToDigi_files := $(patsubst src/EventFilter/CSCTFRawToDigi/src/%,%,$(wildcard $(foreach dir,src/EventFilter/CSCTFRawToDigi/src ,$(foreach ext,$(SRC_FILES_SUFFIXES),$(dir)/*.$(ext)))))
EventFilterCSCTFRawToDigi_BuildFile    := $(WORKINGDIR)/cache/bf/src/EventFilter/CSCTFRawToDigi/BuildFile
EventFilterCSCTFRawToDigi_LOC_USE := self  DataFormats/CSCDigi FWCore/Framework DataFormats/FEDRawData DataFormats/MuonDetId DataFormats/L1CSCTrackFinder CondFormats/CSCObjects FWCore/MessageLogger
EventFilterCSCTFRawToDigi_EX_LIB   := EventFilterCSCTFRawToDigi
EventFilterCSCTFRawToDigi_EX_USE   := $(foreach d,$(EventFilterCSCTFRawToDigi_LOC_USE),$(if $($(d)_EX_FLAGS_NO_RECURSIVE_EXPORT),,$d))
EventFilterCSCTFRawToDigi_PACKAGE := self/src/EventFilter/CSCTFRawToDigi/src
ALL_PRODS += EventFilterCSCTFRawToDigi
EventFilterCSCTFRawToDigi_CLASS := LIBRARY
EventFilter/CSCTFRawToDigi_forbigobj+=EventFilterCSCTFRawToDigi
EventFilterCSCTFRawToDigi_INIT_FUNC        += $$(eval $$(call Library,EventFilterCSCTFRawToDigi,src/EventFilter/CSCTFRawToDigi/src,src_EventFilter_CSCTFRawToDigi_src,$(SCRAMSTORENAME_BIN),,$(SCRAMSTORENAME_LIB),$(SCRAMSTORENAME_LOGS)))
endif
