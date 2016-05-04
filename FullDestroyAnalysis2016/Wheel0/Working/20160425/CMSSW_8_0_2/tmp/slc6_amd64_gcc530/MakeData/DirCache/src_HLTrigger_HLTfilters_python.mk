ifeq ($(strip $(PyHLTriggerHLTfilters)),)
PyHLTriggerHLTfilters := self/src/HLTrigger/HLTfilters/python
src_HLTrigger_HLTfilters_python_parent := 
ALL_PYTHON_DIRS += $(patsubst src/%,%,src/HLTrigger/HLTfilters/python)
PyHLTriggerHLTfilters_files := $(patsubst src/HLTrigger/HLTfilters/python/%,%,$(wildcard $(foreach dir,src/HLTrigger/HLTfilters/python ,$(foreach ext,$(SRC_FILES_SUFFIXES),$(dir)/*.$(ext)))))
PyHLTriggerHLTfilters_LOC_USE := self  
PyHLTriggerHLTfilters_PACKAGE := self/src/HLTrigger/HLTfilters/python
ALL_PRODS += PyHLTriggerHLTfilters
PyHLTriggerHLTfilters_INIT_FUNC        += $$(eval $$(call PythonProduct,PyHLTriggerHLTfilters,src/HLTrigger/HLTfilters/python,src_HLTrigger_HLTfilters_python,1,1,$(SCRAMSTORENAME_PYTHON),$(SCRAMSTORENAME_LIB),,))
else
$(eval $(call MultipleWarningMsg,PyHLTriggerHLTfilters,src/HLTrigger/HLTfilters/python))
endif
ALL_COMMONRULES += src_HLTrigger_HLTfilters_python
src_HLTrigger_HLTfilters_python_INIT_FUNC += $$(eval $$(call CommonProductRules,src_HLTrigger_HLTfilters_python,src/HLTrigger/HLTfilters/python,PYTHON))
