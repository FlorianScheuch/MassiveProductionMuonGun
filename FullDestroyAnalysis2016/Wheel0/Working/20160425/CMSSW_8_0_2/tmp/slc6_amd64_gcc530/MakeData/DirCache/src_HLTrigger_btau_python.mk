ifeq ($(strip $(PyHLTriggerbtau)),)
PyHLTriggerbtau := self/src/HLTrigger/btau/python
src_HLTrigger_btau_python_parent := 
ALL_PYTHON_DIRS += $(patsubst src/%,%,src/HLTrigger/btau/python)
PyHLTriggerbtau_files := $(patsubst src/HLTrigger/btau/python/%,%,$(wildcard $(foreach dir,src/HLTrigger/btau/python ,$(foreach ext,$(SRC_FILES_SUFFIXES),$(dir)/*.$(ext)))))
PyHLTriggerbtau_LOC_USE := self  
PyHLTriggerbtau_PACKAGE := self/src/HLTrigger/btau/python
ALL_PRODS += PyHLTriggerbtau
PyHLTriggerbtau_INIT_FUNC        += $$(eval $$(call PythonProduct,PyHLTriggerbtau,src/HLTrigger/btau/python,src_HLTrigger_btau_python,1,1,$(SCRAMSTORENAME_PYTHON),$(SCRAMSTORENAME_LIB),,))
else
$(eval $(call MultipleWarningMsg,PyHLTriggerbtau,src/HLTrigger/btau/python))
endif
ALL_COMMONRULES += src_HLTrigger_btau_python
src_HLTrigger_btau_python_INIT_FUNC += $$(eval $$(call CommonProductRules,src_HLTrigger_btau_python,src/HLTrigger/btau/python,PYTHON))
