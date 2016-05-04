ifeq ($(strip $(testUCTLayer1)),)
testUCTLayer1_files := $(patsubst src/L1Trigger/L1TCaloLayer1/test/%,%,$(foreach file,testUCTLayer1.cpp,$(eval xfile:=$(wildcard src/L1Trigger/L1TCaloLayer1/test/$(file)))$(if $(xfile),$(xfile),$(warning No such file exists: src/L1Trigger/L1TCaloLayer1/test/$(file). Please fix src/L1Trigger/L1TCaloLayer1/test/BuildFile.))))
testUCTLayer1 := self/src/L1Trigger/L1TCaloLayer1/test
testUCTLayer1_TEST_RUNNER_CMD :=  testUCTLayer1 
testUCTLayer1_BuildFile    := $(WORKINGDIR)/cache/bf/src/L1Trigger/L1TCaloLayer1/test/BuildFile
testUCTLayer1_LOC_USE := self  L1Trigger/L1TCaloLayer1
testUCTLayer1_PACKAGE := self/src/L1Trigger/L1TCaloLayer1/test
ALL_PRODS += testUCTLayer1
testUCTLayer1_INIT_FUNC        += $$(eval $$(call Binary,testUCTLayer1,src/L1Trigger/L1TCaloLayer1/test,src_L1Trigger_L1TCaloLayer1_test,$(SCRAMSTORENAME_BIN),,$(SCRAMSTORENAME_TEST),test,$(SCRAMSTORENAME_LOGS)))
testUCTLayer1_CLASS := TEST
else
$(eval $(call MultipleWarningMsg,testUCTLayer1,src/L1Trigger/L1TCaloLayer1/test))
endif
ifeq ($(strip $(testUCTGeometry)),)
testUCTGeometry_files := $(patsubst src/L1Trigger/L1TCaloLayer1/test/%,%,$(foreach file,testUCTGeometry.cpp,$(eval xfile:=$(wildcard src/L1Trigger/L1TCaloLayer1/test/$(file)))$(if $(xfile),$(xfile),$(warning No such file exists: src/L1Trigger/L1TCaloLayer1/test/$(file). Please fix src/L1Trigger/L1TCaloLayer1/test/BuildFile.))))
testUCTGeometry := self/src/L1Trigger/L1TCaloLayer1/test
testUCTGeometry_TEST_RUNNER_CMD :=  testUCTGeometry 
testUCTGeometry_BuildFile    := $(WORKINGDIR)/cache/bf/src/L1Trigger/L1TCaloLayer1/test/BuildFile
testUCTGeometry_LOC_USE := self  L1Trigger/L1TCaloLayer1
testUCTGeometry_PACKAGE := self/src/L1Trigger/L1TCaloLayer1/test
ALL_PRODS += testUCTGeometry
testUCTGeometry_INIT_FUNC        += $$(eval $$(call Binary,testUCTGeometry,src/L1Trigger/L1TCaloLayer1/test,src_L1Trigger_L1TCaloLayer1_test,$(SCRAMSTORENAME_BIN),,$(SCRAMSTORENAME_TEST),test,$(SCRAMSTORENAME_LOGS)))
testUCTGeometry_CLASS := TEST
else
$(eval $(call MultipleWarningMsg,testUCTGeometry,src/L1Trigger/L1TCaloLayer1/test))
endif
ifeq ($(strip $(testUCTLayer1HF)),)
testUCTLayer1HF_files := $(patsubst src/L1Trigger/L1TCaloLayer1/test/%,%,$(foreach file,testUCTLayer1HF.cpp,$(eval xfile:=$(wildcard src/L1Trigger/L1TCaloLayer1/test/$(file)))$(if $(xfile),$(xfile),$(warning No such file exists: src/L1Trigger/L1TCaloLayer1/test/$(file). Please fix src/L1Trigger/L1TCaloLayer1/test/BuildFile.))))
testUCTLayer1HF := self/src/L1Trigger/L1TCaloLayer1/test
testUCTLayer1HF_TEST_RUNNER_CMD :=  testUCTLayer1HF 
testUCTLayer1HF_BuildFile    := $(WORKINGDIR)/cache/bf/src/L1Trigger/L1TCaloLayer1/test/BuildFile
testUCTLayer1HF_LOC_USE := self  L1Trigger/L1TCaloLayer1
testUCTLayer1HF_PACKAGE := self/src/L1Trigger/L1TCaloLayer1/test
ALL_PRODS += testUCTLayer1HF
testUCTLayer1HF_INIT_FUNC        += $$(eval $$(call Binary,testUCTLayer1HF,src/L1Trigger/L1TCaloLayer1/test,src_L1Trigger_L1TCaloLayer1_test,$(SCRAMSTORENAME_BIN),,$(SCRAMSTORENAME_TEST),test,$(SCRAMSTORENAME_LOGS)))
testUCTLayer1HF_CLASS := TEST
else
$(eval $(call MultipleWarningMsg,testUCTLayer1HF,src/L1Trigger/L1TCaloLayer1/test))
endif
ALL_COMMONRULES += src_L1Trigger_L1TCaloLayer1_test
src_L1Trigger_L1TCaloLayer1_test_parent := L1Trigger/L1TCaloLayer1
src_L1Trigger_L1TCaloLayer1_test_INIT_FUNC += $$(eval $$(call CommonProductRules,src_L1Trigger_L1TCaloLayer1_test,src/L1Trigger/L1TCaloLayer1/test,TEST))
