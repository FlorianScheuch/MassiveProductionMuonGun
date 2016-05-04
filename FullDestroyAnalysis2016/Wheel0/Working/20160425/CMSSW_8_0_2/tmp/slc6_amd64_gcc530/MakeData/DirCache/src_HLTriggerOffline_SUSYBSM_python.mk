ifeq ($(strip $(PyHLTriggerOfflineSUSYBSM)),)
PyHLTriggerOfflineSUSYBSM := self/src/HLTriggerOffline/SUSYBSM/python
src_HLTriggerOffline_SUSYBSM_python_parent := 
ALL_PYTHON_DIRS += $(patsubst src/%,%,src/HLTriggerOffline/SUSYBSM/python)
PyHLTriggerOfflineSUSYBSM_files := $(patsubst src/HLTriggerOffline/SUSYBSM/python/%,%,$(wildcard $(foreach dir,src/HLTriggerOffline/SUSYBSM/python ,$(foreach ext,$(SRC_FILES_SUFFIXES),$(dir)/*.$(ext)))))
PyHLTriggerOfflineSUSYBSM_LOC_USE := self  
PyHLTriggerOfflineSUSYBSM_PACKAGE := self/src/HLTriggerOffline/SUSYBSM/python
ALL_PRODS += PyHLTriggerOfflineSUSYBSM
PyHLTriggerOfflineSUSYBSM_INIT_FUNC        += $$(eval $$(call PythonProduct,PyHLTriggerOfflineSUSYBSM,src/HLTriggerOffline/SUSYBSM/python,src_HLTriggerOffline_SUSYBSM_python,1,1,$(SCRAMSTORENAME_PYTHON),$(SCRAMSTORENAME_LIB),,))
else
$(eval $(call MultipleWarningMsg,PyHLTriggerOfflineSUSYBSM,src/HLTriggerOffline/SUSYBSM/python))
endif
ALL_COMMONRULES += src_HLTriggerOffline_SUSYBSM_python
src_HLTriggerOffline_SUSYBSM_python_INIT_FUNC += $$(eval $$(call CommonProductRules,src_HLTriggerOffline_SUSYBSM_python,src/HLTriggerOffline/SUSYBSM/python,PYTHON))
