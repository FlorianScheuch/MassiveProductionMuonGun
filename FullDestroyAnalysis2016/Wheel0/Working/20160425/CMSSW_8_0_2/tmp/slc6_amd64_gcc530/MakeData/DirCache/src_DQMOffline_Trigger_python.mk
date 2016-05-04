ifeq ($(strip $(PyDQMOfflineTrigger)),)
PyDQMOfflineTrigger := self/src/DQMOffline/Trigger/python
src_DQMOffline_Trigger_python_parent := 
ALL_PYTHON_DIRS += $(patsubst src/%,%,src/DQMOffline/Trigger/python)
PyDQMOfflineTrigger_files := $(patsubst src/DQMOffline/Trigger/python/%,%,$(wildcard $(foreach dir,src/DQMOffline/Trigger/python ,$(foreach ext,$(SRC_FILES_SUFFIXES),$(dir)/*.$(ext)))))
PyDQMOfflineTrigger_LOC_USE := self  
PyDQMOfflineTrigger_PACKAGE := self/src/DQMOffline/Trigger/python
ALL_PRODS += PyDQMOfflineTrigger
PyDQMOfflineTrigger_INIT_FUNC        += $$(eval $$(call PythonProduct,PyDQMOfflineTrigger,src/DQMOffline/Trigger/python,src_DQMOffline_Trigger_python,1,1,$(SCRAMSTORENAME_PYTHON),$(SCRAMSTORENAME_LIB),,))
else
$(eval $(call MultipleWarningMsg,PyDQMOfflineTrigger,src/DQMOffline/Trigger/python))
endif
ALL_COMMONRULES += src_DQMOffline_Trigger_python
src_DQMOffline_Trigger_python_INIT_FUNC += $$(eval $$(call CommonProductRules,src_DQMOffline_Trigger_python,src/DQMOffline/Trigger/python,PYTHON))
