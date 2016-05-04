ifeq ($(strip $(testSerializationL1TObjects)),)
testSerializationL1TObjects_files := $(patsubst src/CondFormats/L1TObjects/test/%,%,$(foreach file,testSerializationL1TObjects.cpp,$(eval xfile:=$(wildcard src/CondFormats/L1TObjects/test/$(file)))$(if $(xfile),$(xfile),$(warning No such file exists: src/CondFormats/L1TObjects/test/$(file). Please fix src/CondFormats/L1TObjects/test/BuildFile.))))
testSerializationL1TObjects := self/src/CondFormats/L1TObjects/test
testSerializationL1TObjects_TEST_RUNNER_CMD :=  testSerializationL1TObjects 
testSerializationL1TObjects_BuildFile    := $(WORKINGDIR)/cache/bf/src/CondFormats/L1TObjects/test/BuildFile
testSerializationL1TObjects_LOC_USE := self  CondFormats/L1TObjects
testSerializationL1TObjects_PACKAGE := self/src/CondFormats/L1TObjects/test
ALL_PRODS += testSerializationL1TObjects
testSerializationL1TObjects_INIT_FUNC        += $$(eval $$(call Binary,testSerializationL1TObjects,src/CondFormats/L1TObjects/test,src_CondFormats_L1TObjects_test,$(SCRAMSTORENAME_BIN),,$(SCRAMSTORENAME_TEST),test,$(SCRAMSTORENAME_LOGS)))
testSerializationL1TObjects_CLASS := TEST
else
$(eval $(call MultipleWarningMsg,testSerializationL1TObjects,src/CondFormats/L1TObjects/test))
endif
ifeq ($(strip $(test_L1GtDefinitions)),)
test_L1GtDefinitions_files := $(patsubst src/CondFormats/L1TObjects/test/%,%,$(foreach file,test_L1GtDefinitions.cc,$(eval xfile:=$(wildcard src/CondFormats/L1TObjects/test/$(file)))$(if $(xfile),$(xfile),$(warning No such file exists: src/CondFormats/L1TObjects/test/$(file). Please fix src/CondFormats/L1TObjects/test/BuildFile.))))
test_L1GtDefinitions := self/src/CondFormats/L1TObjects/test
test_L1GtDefinitions_TEST_RUNNER_CMD :=  test_L1GtDefinitions 
test_L1GtDefinitions_BuildFile    := $(WORKINGDIR)/cache/bf/src/CondFormats/L1TObjects/test/BuildFile
test_L1GtDefinitions_LOC_USE := self  CondFormats/L1TObjects
test_L1GtDefinitions_PACKAGE := self/src/CondFormats/L1TObjects/test
ALL_PRODS += test_L1GtDefinitions
test_L1GtDefinitions_INIT_FUNC        += $$(eval $$(call Binary,test_L1GtDefinitions,src/CondFormats/L1TObjects/test,src_CondFormats_L1TObjects_test,$(SCRAMSTORENAME_BIN),,$(SCRAMSTORENAME_TEST),test,$(SCRAMSTORENAME_LOGS)))
test_L1GtDefinitions_CLASS := TEST
else
$(eval $(call MultipleWarningMsg,test_L1GtDefinitions,src/CondFormats/L1TObjects/test))
endif
ALL_COMMONRULES += src_CondFormats_L1TObjects_test
src_CondFormats_L1TObjects_test_parent := CondFormats/L1TObjects
src_CondFormats_L1TObjects_test_INIT_FUNC += $$(eval $$(call CommonProductRules,src_CondFormats_L1TObjects_test,src/CondFormats/L1TObjects/test,TEST))
