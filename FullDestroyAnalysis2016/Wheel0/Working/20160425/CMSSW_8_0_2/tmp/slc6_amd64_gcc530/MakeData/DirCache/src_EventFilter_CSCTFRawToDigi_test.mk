ifeq ($(strip $(testCSCTFRawToDigi)),)
testCSCTFRawToDigi_files := $(patsubst src/EventFilter/CSCTFRawToDigi/test/%,%,$(foreach file,testCSCTFRawToDigi.cpp,$(eval xfile:=$(wildcard src/EventFilter/CSCTFRawToDigi/test/$(file)))$(if $(xfile),$(xfile),$(warning No such file exists: src/EventFilter/CSCTFRawToDigi/test/$(file). Please fix src/EventFilter/CSCTFRawToDigi/test/BuildFile.))))
testCSCTFRawToDigi := self/src/EventFilter/CSCTFRawToDigi/test
testCSCTFRawToDigi_TEST_RUNNER_CMD :=  testCSCTFRawToDigi 
testCSCTFRawToDigi_BuildFile    := $(WORKINGDIR)/cache/bf/src/EventFilter/CSCTFRawToDigi/test/BuildFile
testCSCTFRawToDigi_LOC_USE := self  FWCore/Framework FWCore/Utilities FWCore/PluginManager cppunit
testCSCTFRawToDigi_PACKAGE := self/src/EventFilter/CSCTFRawToDigi/test
ALL_PRODS += testCSCTFRawToDigi
testCSCTFRawToDigi_INIT_FUNC        += $$(eval $$(call Binary,testCSCTFRawToDigi,src/EventFilter/CSCTFRawToDigi/test,src_EventFilter_CSCTFRawToDigi_test,$(SCRAMSTORENAME_BIN),,$(SCRAMSTORENAME_TEST),test,$(SCRAMSTORENAME_LOGS)))
testCSCTFRawToDigi_CLASS := TEST
else
$(eval $(call MultipleWarningMsg,testCSCTFRawToDigi,src/EventFilter/CSCTFRawToDigi/test))
endif
ifeq ($(strip $(EventFilterCSCTFSingleGen_test)),)
EventFilterCSCTFSingleGen_test := self/src/EventFilter/CSCTFRawToDigi/test
EventFilterCSCTFSingleGen_test_files := $(patsubst src/EventFilter/CSCTFRawToDigi/test/%,%,$(foreach file,CSCTFSingleGen.cc,$(eval xfile:=$(wildcard src/EventFilter/CSCTFRawToDigi/test/$(file)))$(if $(xfile),$(xfile),$(warning No such file exists: src/EventFilter/CSCTFRawToDigi/test/$(file). Please fix src/EventFilter/CSCTFRawToDigi/test/BuildFile.))))
EventFilterCSCTFSingleGen_test_BuildFile    := $(WORKINGDIR)/cache/bf/src/EventFilter/CSCTFRawToDigi/test/BuildFile
EventFilterCSCTFSingleGen_test_LOC_USE := self  FWCore/Framework FWCore/Utilities FWCore/PluginManager DataFormats/CSCDigi DataFormats/MuonDetId DataFormats/L1CSCTrackFinder CondFormats/CSCObjects
EventFilterCSCTFSingleGen_test_PRE_INIT_FUNC += $$(eval $$(call edmPlugin,EventFilterCSCTFSingleGen_test,EventFilterCSCTFSingleGen_test,$(SCRAMSTORENAME_LIB),src/EventFilter/CSCTFRawToDigi/test))
EventFilterCSCTFSingleGen_test_PACKAGE := self/src/EventFilter/CSCTFRawToDigi/test
ALL_PRODS += EventFilterCSCTFSingleGen_test
EventFilterCSCTFSingleGen_test_INIT_FUNC        += $$(eval $$(call Library,EventFilterCSCTFSingleGen_test,src/EventFilter/CSCTFRawToDigi/test,src_EventFilter_CSCTFRawToDigi_test,$(SCRAMSTORENAME_BIN),,$(SCRAMSTORENAME_LIB),$(SCRAMSTORENAME_LOGS)))
EventFilterCSCTFSingleGen_test_CLASS := TEST_LIBRARY
else
$(eval $(call MultipleWarningMsg,EventFilterCSCTFSingleGen_test,src/EventFilter/CSCTFRawToDigi/test))
endif
ALL_COMMONRULES += src_EventFilter_CSCTFRawToDigi_test
src_EventFilter_CSCTFRawToDigi_test_parent := EventFilter/CSCTFRawToDigi
src_EventFilter_CSCTFRawToDigi_test_INIT_FUNC += $$(eval $$(call CommonProductRules,src_EventFilter_CSCTFRawToDigi_test,src/EventFilter/CSCTFRawToDigi/test,TEST))
