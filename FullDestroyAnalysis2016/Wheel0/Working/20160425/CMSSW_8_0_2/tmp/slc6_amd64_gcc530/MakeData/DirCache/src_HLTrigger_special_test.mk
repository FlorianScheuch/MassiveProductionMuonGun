ifeq ($(strip $(testHLTriggerspecial)),)
testHLTriggerspecial := self/src/HLTrigger/special/test
testHLTriggerspecial_files := $(patsubst src/HLTrigger/special/test/%,%,$(foreach file,*.cc,$(eval xfile:=$(wildcard src/HLTrigger/special/test/$(file)))$(if $(xfile),$(xfile),$(warning No such file exists: src/HLTrigger/special/test/$(file). Please fix src/HLTrigger/special/test/BuildFile.))))
testHLTriggerspecial_BuildFile    := $(WORKINGDIR)/cache/bf/src/HLTrigger/special/test/BuildFile
testHLTriggerspecial_LOC_USE := self  FWCore/Framework FWCore/MessageLogger FWCore/ParameterSet
testHLTriggerspecial_PRE_INIT_FUNC += $$(eval $$(call edmPlugin,testHLTriggerspecial,testHLTriggerspecial,$(SCRAMSTORENAME_LIB),src/HLTrigger/special/test))
testHLTriggerspecial_PACKAGE := self/src/HLTrigger/special/test
ALL_PRODS += testHLTriggerspecial
testHLTriggerspecial_INIT_FUNC        += $$(eval $$(call Library,testHLTriggerspecial,src/HLTrigger/special/test,src_HLTrigger_special_test,$(SCRAMSTORENAME_BIN),,$(SCRAMSTORENAME_LIB),$(SCRAMSTORENAME_LOGS)))
testHLTriggerspecial_CLASS := TEST_LIBRARY
else
$(eval $(call MultipleWarningMsg,testHLTriggerspecial,src/HLTrigger/special/test))
endif
ALL_COMMONRULES += src_HLTrigger_special_test
src_HLTrigger_special_test_parent := HLTrigger/special
src_HLTrigger_special_test_INIT_FUNC += $$(eval $$(call CommonProductRules,src_HLTrigger_special_test,src/HLTrigger/special/test,TEST))
