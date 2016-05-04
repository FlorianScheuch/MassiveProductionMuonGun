ifeq ($(strip $(PyHLTriggerOfflineHeavyFlavor)),)
PyHLTriggerOfflineHeavyFlavor := self/src/HLTriggerOffline/HeavyFlavor/python
src_HLTriggerOffline_HeavyFlavor_python_parent := 
ALL_PYTHON_DIRS += $(patsubst src/%,%,src/HLTriggerOffline/HeavyFlavor/python)
PyHLTriggerOfflineHeavyFlavor_files := $(patsubst src/HLTriggerOffline/HeavyFlavor/python/%,%,$(wildcard $(foreach dir,src/HLTriggerOffline/HeavyFlavor/python ,$(foreach ext,$(SRC_FILES_SUFFIXES),$(dir)/*.$(ext)))))
PyHLTriggerOfflineHeavyFlavor_LOC_USE := self  
PyHLTriggerOfflineHeavyFlavor_PACKAGE := self/src/HLTriggerOffline/HeavyFlavor/python
ALL_PRODS += PyHLTriggerOfflineHeavyFlavor
PyHLTriggerOfflineHeavyFlavor_INIT_FUNC        += $$(eval $$(call PythonProduct,PyHLTriggerOfflineHeavyFlavor,src/HLTriggerOffline/HeavyFlavor/python,src_HLTriggerOffline_HeavyFlavor_python,1,1,$(SCRAMSTORENAME_PYTHON),$(SCRAMSTORENAME_LIB),,))
else
$(eval $(call MultipleWarningMsg,PyHLTriggerOfflineHeavyFlavor,src/HLTriggerOffline/HeavyFlavor/python))
endif
ALL_COMMONRULES += src_HLTriggerOffline_HeavyFlavor_python
src_HLTriggerOffline_HeavyFlavor_python_INIT_FUNC += $$(eval $$(call CommonProductRules,src_HLTriggerOffline_HeavyFlavor_python,src/HLTriggerOffline/HeavyFlavor/python,PYTHON))
