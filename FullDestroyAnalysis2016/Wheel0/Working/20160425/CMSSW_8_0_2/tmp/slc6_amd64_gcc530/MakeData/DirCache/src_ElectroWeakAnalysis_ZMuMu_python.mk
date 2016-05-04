ifeq ($(strip $(PyElectroWeakAnalysisZMuMu)),)
PyElectroWeakAnalysisZMuMu := self/src/ElectroWeakAnalysis/ZMuMu/python
src_ElectroWeakAnalysis_ZMuMu_python_parent := 
ALL_PYTHON_DIRS += $(patsubst src/%,%,src/ElectroWeakAnalysis/ZMuMu/python)
PyElectroWeakAnalysisZMuMu_files := $(patsubst src/ElectroWeakAnalysis/ZMuMu/python/%,%,$(wildcard $(foreach dir,src/ElectroWeakAnalysis/ZMuMu/python ,$(foreach ext,$(SRC_FILES_SUFFIXES),$(dir)/*.$(ext)))))
PyElectroWeakAnalysisZMuMu_LOC_USE := self  
PyElectroWeakAnalysisZMuMu_PACKAGE := self/src/ElectroWeakAnalysis/ZMuMu/python
ALL_PRODS += PyElectroWeakAnalysisZMuMu
PyElectroWeakAnalysisZMuMu_INIT_FUNC        += $$(eval $$(call PythonProduct,PyElectroWeakAnalysisZMuMu,src/ElectroWeakAnalysis/ZMuMu/python,src_ElectroWeakAnalysis_ZMuMu_python,1,1,$(SCRAMSTORENAME_PYTHON),$(SCRAMSTORENAME_LIB),,))
else
$(eval $(call MultipleWarningMsg,PyElectroWeakAnalysisZMuMu,src/ElectroWeakAnalysis/ZMuMu/python))
endif
ALL_COMMONRULES += src_ElectroWeakAnalysis_ZMuMu_python
src_ElectroWeakAnalysis_ZMuMu_python_INIT_FUNC += $$(eval $$(call CommonProductRules,src_ElectroWeakAnalysis_ZMuMu_python,src/ElectroWeakAnalysis/ZMuMu/python,PYTHON))
