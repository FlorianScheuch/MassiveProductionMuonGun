ifeq ($(strip $(testBasicPayload)),)
testBasicPayload_files := $(patsubst src/CondCore/Utilities/test/%,%,$(foreach file,testBasicPayload.cpp,$(eval xfile:=$(wildcard src/CondCore/Utilities/test/$(file)))$(if $(xfile),$(xfile),$(warning No such file exists: src/CondCore/Utilities/test/$(file). Please fix src/CondCore/Utilities/test/BuildFile.))))
testBasicPayload := self/src/CondCore/Utilities/test
testBasicPayload_TEST_RUNNER_CMD :=  testBasicPayload 
testBasicPayload_BuildFile    := $(WORKINGDIR)/cache/bf/src/CondCore/Utilities/test/BuildFile
testBasicPayload_LOC_USE := self  CondCore/CondDB CondFormats/Common FWCore/PluginManager FWCore/Utilities
testBasicPayload_PACKAGE := self/src/CondCore/Utilities/test
ALL_PRODS += testBasicPayload
testBasicPayload_INIT_FUNC        += $$(eval $$(call Binary,testBasicPayload,src/CondCore/Utilities/test,src_CondCore_Utilities_test,$(SCRAMSTORENAME_BIN),,$(SCRAMSTORENAME_TEST),test,$(SCRAMSTORENAME_LOGS)))
testBasicPayload_CLASS := TEST
else
$(eval $(call MultipleWarningMsg,testBasicPayload,src/CondCore/Utilities/test))
endif
ALL_COMMONRULES += src_CondCore_Utilities_test
src_CondCore_Utilities_test_parent := CondCore/Utilities
src_CondCore_Utilities_test_INIT_FUNC += $$(eval $$(call CommonProductRules,src_CondCore_Utilities_test,src/CondCore/Utilities/test,TEST))
