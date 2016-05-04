ifeq ($(strip $(PyElectroWeakAnalysisWENu)),)
PyElectroWeakAnalysisWENu := self/src/ElectroWeakAnalysis/WENu/python
src_ElectroWeakAnalysis_WENu_python_parent := 
ALL_PYTHON_DIRS += $(patsubst src/%,%,src/ElectroWeakAnalysis/WENu/python)
PyElectroWeakAnalysisWENu_files := $(patsubst src/ElectroWeakAnalysis/WENu/python/%,%,$(wildcard $(foreach dir,src/ElectroWeakAnalysis/WENu/python ,$(foreach ext,$(SRC_FILES_SUFFIXES),$(dir)/*.$(ext)))))
PyElectroWeakAnalysisWENu_LOC_USE := self  
PyElectroWeakAnalysisWENu_PACKAGE := self/src/ElectroWeakAnalysis/WENu/python
ALL_PRODS += PyElectroWeakAnalysisWENu
PyElectroWeakAnalysisWENu_INIT_FUNC        += $$(eval $$(call PythonProduct,PyElectroWeakAnalysisWENu,src/ElectroWeakAnalysis/WENu/python,src_ElectroWeakAnalysis_WENu_python,1,1,$(SCRAMSTORENAME_PYTHON),$(SCRAMSTORENAME_LIB),,))
else
$(eval $(call MultipleWarningMsg,PyElectroWeakAnalysisWENu,src/ElectroWeakAnalysis/WENu/python))
endif
ALL_COMMONRULES += src_ElectroWeakAnalysis_WENu_python
src_ElectroWeakAnalysis_WENu_python_INIT_FUNC += $$(eval $$(call CommonProductRules,src_ElectroWeakAnalysis_WENu_python,src/ElectroWeakAnalysis/WENu/python,PYTHON))
