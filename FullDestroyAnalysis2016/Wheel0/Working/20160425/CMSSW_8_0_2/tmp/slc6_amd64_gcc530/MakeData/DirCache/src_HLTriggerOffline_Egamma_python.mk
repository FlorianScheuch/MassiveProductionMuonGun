ifeq ($(strip $(PyHLTriggerOfflineEgamma)),)
PyHLTriggerOfflineEgamma := self/src/HLTriggerOffline/Egamma/python
src_HLTriggerOffline_Egamma_python_parent := 
ALL_PYTHON_DIRS += $(patsubst src/%,%,src/HLTriggerOffline/Egamma/python)
PyHLTriggerOfflineEgamma_files := $(patsubst src/HLTriggerOffline/Egamma/python/%,%,$(wildcard $(foreach dir,src/HLTriggerOffline/Egamma/python ,$(foreach ext,$(SRC_FILES_SUFFIXES),$(dir)/*.$(ext)))))
PyHLTriggerOfflineEgamma_LOC_USE := self  
PyHLTriggerOfflineEgamma_PACKAGE := self/src/HLTriggerOffline/Egamma/python
ALL_PRODS += PyHLTriggerOfflineEgamma
PyHLTriggerOfflineEgamma_INIT_FUNC        += $$(eval $$(call PythonProduct,PyHLTriggerOfflineEgamma,src/HLTriggerOffline/Egamma/python,src_HLTriggerOffline_Egamma_python,1,1,$(SCRAMSTORENAME_PYTHON),$(SCRAMSTORENAME_LIB),,))
else
$(eval $(call MultipleWarningMsg,PyHLTriggerOfflineEgamma,src/HLTriggerOffline/Egamma/python))
endif
ALL_COMMONRULES += src_HLTriggerOffline_Egamma_python
src_HLTriggerOffline_Egamma_python_INIT_FUNC += $$(eval $$(call CommonProductRules,src_HLTriggerOffline_Egamma_python,src/HLTriggerOffline/Egamma/python,PYTHON))
