ifeq ($(strip $(PyHLTriggerOfflineHiggs)),)
PyHLTriggerOfflineHiggs := self/src/HLTriggerOffline/Higgs/python
src_HLTriggerOffline_Higgs_python_parent := 
ALL_PYTHON_DIRS += $(patsubst src/%,%,src/HLTriggerOffline/Higgs/python)
PyHLTriggerOfflineHiggs_files := $(patsubst src/HLTriggerOffline/Higgs/python/%,%,$(wildcard $(foreach dir,src/HLTriggerOffline/Higgs/python ,$(foreach ext,$(SRC_FILES_SUFFIXES),$(dir)/*.$(ext)))))
PyHLTriggerOfflineHiggs_LOC_USE := self  
PyHLTriggerOfflineHiggs_PACKAGE := self/src/HLTriggerOffline/Higgs/python
ALL_PRODS += PyHLTriggerOfflineHiggs
PyHLTriggerOfflineHiggs_INIT_FUNC        += $$(eval $$(call PythonProduct,PyHLTriggerOfflineHiggs,src/HLTriggerOffline/Higgs/python,src_HLTriggerOffline_Higgs_python,1,1,$(SCRAMSTORENAME_PYTHON),$(SCRAMSTORENAME_LIB),,))
else
$(eval $(call MultipleWarningMsg,PyHLTriggerOfflineHiggs,src/HLTriggerOffline/Higgs/python))
endif
ALL_COMMONRULES += src_HLTriggerOffline_Higgs_python
src_HLTriggerOffline_Higgs_python_INIT_FUNC += $$(eval $$(call CommonProductRules,src_HLTriggerOffline_Higgs_python,src/HLTriggerOffline/Higgs/python,PYTHON))
