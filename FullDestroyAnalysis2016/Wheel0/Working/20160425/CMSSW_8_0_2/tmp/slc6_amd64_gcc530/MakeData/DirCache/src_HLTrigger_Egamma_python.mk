ifeq ($(strip $(PyHLTriggerEgamma)),)
PyHLTriggerEgamma := self/src/HLTrigger/Egamma/python
src_HLTrigger_Egamma_python_parent := 
ALL_PYTHON_DIRS += $(patsubst src/%,%,src/HLTrigger/Egamma/python)
PyHLTriggerEgamma_files := $(patsubst src/HLTrigger/Egamma/python/%,%,$(wildcard $(foreach dir,src/HLTrigger/Egamma/python ,$(foreach ext,$(SRC_FILES_SUFFIXES),$(dir)/*.$(ext)))))
PyHLTriggerEgamma_LOC_USE := self  
PyHLTriggerEgamma_PACKAGE := self/src/HLTrigger/Egamma/python
ALL_PRODS += PyHLTriggerEgamma
PyHLTriggerEgamma_INIT_FUNC        += $$(eval $$(call PythonProduct,PyHLTriggerEgamma,src/HLTrigger/Egamma/python,src_HLTrigger_Egamma_python,1,1,$(SCRAMSTORENAME_PYTHON),$(SCRAMSTORENAME_LIB),,))
else
$(eval $(call MultipleWarningMsg,PyHLTriggerEgamma,src/HLTrigger/Egamma/python))
endif
ALL_COMMONRULES += src_HLTrigger_Egamma_python
src_HLTrigger_Egamma_python_INIT_FUNC += $$(eval $$(call CommonProductRules,src_HLTrigger_Egamma_python,src/HLTrigger/Egamma/python,PYTHON))
