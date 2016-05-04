ifeq ($(strip $(testUCTUnpacker)),)
testUCTUnpacker_files := $(patsubst src/EventFilter/L1TXRawToDigi/test/%,%,$(foreach file,testUCTUnpacker.cpp,$(eval xfile:=$(wildcard src/EventFilter/L1TXRawToDigi/test/$(file)))$(if $(xfile),$(xfile),$(warning No such file exists: src/EventFilter/L1TXRawToDigi/test/$(file). Please fix src/EventFilter/L1TXRawToDigi/test/BuildFile.))))
testUCTUnpacker := self/src/EventFilter/L1TXRawToDigi/test
testUCTUnpacker_TEST_RUNNER_CMD :=  testUCTUnpacker 
testUCTUnpacker_BuildFile    := $(WORKINGDIR)/cache/bf/src/EventFilter/L1TXRawToDigi/test/BuildFile
testUCTUnpacker_LOC_USE := self  FWCore/Framework FWCore/ParameterSet FWCore/PluginManager FWCore/MessageLogger DataFormats/FEDRawData EventFilter/L1TXRawToDigi
testUCTUnpacker_PACKAGE := self/src/EventFilter/L1TXRawToDigi/test
ALL_PRODS += testUCTUnpacker
testUCTUnpacker_INIT_FUNC        += $$(eval $$(call Binary,testUCTUnpacker,src/EventFilter/L1TXRawToDigi/test,src_EventFilter_L1TXRawToDigi_test,$(SCRAMSTORENAME_BIN),,$(SCRAMSTORENAME_TEST),test,$(SCRAMSTORENAME_LOGS)))
testUCTUnpacker_CLASS := TEST
else
$(eval $(call MultipleWarningMsg,testUCTUnpacker,src/EventFilter/L1TXRawToDigi/test))
endif
ALL_COMMONRULES += src_EventFilter_L1TXRawToDigi_test
src_EventFilter_L1TXRawToDigi_test_parent := EventFilter/L1TXRawToDigi
src_EventFilter_L1TXRawToDigi_test_INIT_FUNC += $$(eval $$(call CommonProductRules,src_EventFilter_L1TXRawToDigi_test,src/EventFilter/L1TXRawToDigi/test,TEST))
