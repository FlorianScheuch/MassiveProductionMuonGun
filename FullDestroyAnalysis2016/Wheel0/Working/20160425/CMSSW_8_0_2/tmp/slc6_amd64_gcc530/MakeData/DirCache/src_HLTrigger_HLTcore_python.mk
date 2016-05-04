ifeq ($(strip $(PyHLTriggerHLTcore)),)
PyHLTriggerHLTcore := self/src/HLTrigger/HLTcore/python
src_HLTrigger_HLTcore_python_parent := 
ALL_PYTHON_DIRS += $(patsubst src/%,%,src/HLTrigger/HLTcore/python)
PyHLTriggerHLTcore_files := $(patsubst src/HLTrigger/HLTcore/python/%,%,$(wildcard $(foreach dir,src/HLTrigger/HLTcore/python ,$(foreach ext,$(SRC_FILES_SUFFIXES),$(dir)/*.$(ext)))))
PyHLTriggerHLTcore_LOC_USE := self  
PyHLTriggerHLTcore_PACKAGE := self/src/HLTrigger/HLTcore/python
ALL_PRODS += PyHLTriggerHLTcore
PyHLTriggerHLTcore_INIT_FUNC        += $$(eval $$(call PythonProduct,PyHLTriggerHLTcore,src/HLTrigger/HLTcore/python,src_HLTrigger_HLTcore_python,1,1,$(SCRAMSTORENAME_PYTHON),$(SCRAMSTORENAME_LIB),,))
else
$(eval $(call MultipleWarningMsg,PyHLTriggerHLTcore,src/HLTrigger/HLTcore/python))
endif
ALL_COMMONRULES += src_HLTrigger_HLTcore_python
src_HLTrigger_HLTcore_python_INIT_FUNC += $$(eval $$(call CommonProductRules,src_HLTrigger_HLTcore_python,src/HLTrigger/HLTcore/python,PYTHON))
