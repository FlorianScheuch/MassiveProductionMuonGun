ifeq ($(strip $(errorMatrix)),)
errorMatrix_files := $(patsubst src/ElectroWeakAnalysis/ZMuMu/test/%,%,$(foreach file,errorMatrix.cpp,$(eval xfile:=$(wildcard src/ElectroWeakAnalysis/ZMuMu/test/$(file)))$(if $(xfile),$(xfile),$(warning No such file exists: src/ElectroWeakAnalysis/ZMuMu/test/$(file). Please fix src/ElectroWeakAnalysis/ZMuMu/test/BuildFile.))))
errorMatrix := self/src/ElectroWeakAnalysis/ZMuMu/test
errorMatrix_TEST_RUNNER_CMD := echo
errorMatrix_NO_TESTRUN := yes
errorMatrix_BuildFile    := $(WORKINGDIR)/cache/bf/src/ElectroWeakAnalysis/ZMuMu/test/BuildFile
errorMatrix_LOC_USE := self  
errorMatrix_PACKAGE := self/src/ElectroWeakAnalysis/ZMuMu/test
ALL_PRODS += errorMatrix
errorMatrix_INIT_FUNC        += $$(eval $$(call Binary,errorMatrix,src/ElectroWeakAnalysis/ZMuMu/test,src_ElectroWeakAnalysis_ZMuMu_test,$(SCRAMSTORENAME_BIN),,$(SCRAMSTORENAME_TEST),test,$(SCRAMSTORENAME_LOGS)))
errorMatrix_CLASS := TEST
else
$(eval $(call MultipleWarningMsg,errorMatrix,src/ElectroWeakAnalysis/ZMuMu/test))
endif
ALL_COMMONRULES += src_ElectroWeakAnalysis_ZMuMu_test
src_ElectroWeakAnalysis_ZMuMu_test_parent := ElectroWeakAnalysis/ZMuMu
src_ElectroWeakAnalysis_ZMuMu_test_INIT_FUNC += $$(eval $$(call CommonProductRules,src_ElectroWeakAnalysis_ZMuMu_test,src/ElectroWeakAnalysis/ZMuMu/test,TEST))
