ifeq ($(strip $(PyL1TriggerHardwareValidation)),)
PyL1TriggerHardwareValidation := self/src/L1Trigger/HardwareValidation/python
src_L1Trigger_HardwareValidation_python_parent := 
ALL_PYTHON_DIRS += $(patsubst src/%,%,src/L1Trigger/HardwareValidation/python)
PyL1TriggerHardwareValidation_files := $(patsubst src/L1Trigger/HardwareValidation/python/%,%,$(wildcard $(foreach dir,src/L1Trigger/HardwareValidation/python ,$(foreach ext,$(SRC_FILES_SUFFIXES),$(dir)/*.$(ext)))))
PyL1TriggerHardwareValidation_LOC_USE := self  
PyL1TriggerHardwareValidation_PACKAGE := self/src/L1Trigger/HardwareValidation/python
ALL_PRODS += PyL1TriggerHardwareValidation
PyL1TriggerHardwareValidation_INIT_FUNC        += $$(eval $$(call PythonProduct,PyL1TriggerHardwareValidation,src/L1Trigger/HardwareValidation/python,src_L1Trigger_HardwareValidation_python,1,1,$(SCRAMSTORENAME_PYTHON),$(SCRAMSTORENAME_LIB),,))
else
$(eval $(call MultipleWarningMsg,PyL1TriggerHardwareValidation,src/L1Trigger/HardwareValidation/python))
endif
ALL_COMMONRULES += src_L1Trigger_HardwareValidation_python
src_L1Trigger_HardwareValidation_python_INIT_FUNC += $$(eval $$(call CommonProductRules,src_L1Trigger_HardwareValidation_python,src/L1Trigger/HardwareValidation/python,PYTHON))
