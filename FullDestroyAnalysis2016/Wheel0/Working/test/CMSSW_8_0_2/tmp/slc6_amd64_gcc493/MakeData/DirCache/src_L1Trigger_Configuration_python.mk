ifeq ($(strip $(PyL1TriggerConfiguration)),)
PyL1TriggerConfiguration := self/src/L1Trigger/Configuration/python
src_L1Trigger_Configuration_python_parent := 
ALL_PYTHON_DIRS += $(patsubst src/%,%,src/L1Trigger/Configuration/python)
PyL1TriggerConfiguration_files := $(patsubst src/L1Trigger/Configuration/python/%,%,$(wildcard $(foreach dir,src/L1Trigger/Configuration/python ,$(foreach ext,$(SRC_FILES_SUFFIXES),$(dir)/*.$(ext)))))
PyL1TriggerConfiguration_LOC_USE := self  
PyL1TriggerConfiguration_PACKAGE := self/src/L1Trigger/Configuration/python
ALL_PRODS += PyL1TriggerConfiguration
PyL1TriggerConfiguration_INIT_FUNC        += $$(eval $$(call PythonProduct,PyL1TriggerConfiguration,src/L1Trigger/Configuration/python,src_L1Trigger_Configuration_python,1,1,$(SCRAMSTORENAME_PYTHON),$(SCRAMSTORENAME_LIB),,))
else
$(eval $(call MultipleWarningMsg,PyL1TriggerConfiguration,src/L1Trigger/Configuration/python))
endif
ALL_COMMONRULES += src_L1Trigger_Configuration_python
src_L1Trigger_Configuration_python_INIT_FUNC += $$(eval $$(call CommonProductRules,src_L1Trigger_Configuration_python,src/L1Trigger/Configuration/python,PYTHON))
