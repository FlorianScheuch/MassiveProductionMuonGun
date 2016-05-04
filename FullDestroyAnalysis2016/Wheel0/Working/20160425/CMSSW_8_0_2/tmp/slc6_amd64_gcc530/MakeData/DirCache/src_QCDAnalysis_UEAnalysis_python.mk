ifeq ($(strip $(PyQCDAnalysisUEAnalysis)),)
PyQCDAnalysisUEAnalysis := self/src/QCDAnalysis/UEAnalysis/python
src_QCDAnalysis_UEAnalysis_python_parent := 
ALL_PYTHON_DIRS += $(patsubst src/%,%,src/QCDAnalysis/UEAnalysis/python)
PyQCDAnalysisUEAnalysis_files := $(patsubst src/QCDAnalysis/UEAnalysis/python/%,%,$(wildcard $(foreach dir,src/QCDAnalysis/UEAnalysis/python ,$(foreach ext,$(SRC_FILES_SUFFIXES),$(dir)/*.$(ext)))))
PyQCDAnalysisUEAnalysis_LOC_USE := self  
PyQCDAnalysisUEAnalysis_PACKAGE := self/src/QCDAnalysis/UEAnalysis/python
ALL_PRODS += PyQCDAnalysisUEAnalysis
PyQCDAnalysisUEAnalysis_INIT_FUNC        += $$(eval $$(call PythonProduct,PyQCDAnalysisUEAnalysis,src/QCDAnalysis/UEAnalysis/python,src_QCDAnalysis_UEAnalysis_python,1,1,$(SCRAMSTORENAME_PYTHON),$(SCRAMSTORENAME_LIB),,))
else
$(eval $(call MultipleWarningMsg,PyQCDAnalysisUEAnalysis,src/QCDAnalysis/UEAnalysis/python))
endif
ALL_COMMONRULES += src_QCDAnalysis_UEAnalysis_python
src_QCDAnalysis_UEAnalysis_python_INIT_FUNC += $$(eval $$(call CommonProductRules,src_QCDAnalysis_UEAnalysis_python,src/QCDAnalysis/UEAnalysis/python,PYTHON))
