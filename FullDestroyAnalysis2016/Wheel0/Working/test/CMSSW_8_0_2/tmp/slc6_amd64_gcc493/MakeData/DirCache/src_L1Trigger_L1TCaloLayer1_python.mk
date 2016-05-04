ifeq ($(strip $(PyL1TriggerL1TCaloLayer1)),)
PyL1TriggerL1TCaloLayer1 := self/src/L1Trigger/L1TCaloLayer1/python
src_L1Trigger_L1TCaloLayer1_python_parent := 
ALL_PYTHON_DIRS += $(patsubst src/%,%,src/L1Trigger/L1TCaloLayer1/python)
PyL1TriggerL1TCaloLayer1_files := $(patsubst src/L1Trigger/L1TCaloLayer1/python/%,%,$(wildcard $(foreach dir,src/L1Trigger/L1TCaloLayer1/python ,$(foreach ext,$(SRC_FILES_SUFFIXES),$(dir)/*.$(ext)))))
PyL1TriggerL1TCaloLayer1_LOC_USE := self  
PyL1TriggerL1TCaloLayer1_PACKAGE := self/src/L1Trigger/L1TCaloLayer1/python
ALL_PRODS += PyL1TriggerL1TCaloLayer1
PyL1TriggerL1TCaloLayer1_INIT_FUNC        += $$(eval $$(call PythonProduct,PyL1TriggerL1TCaloLayer1,src/L1Trigger/L1TCaloLayer1/python,src_L1Trigger_L1TCaloLayer1_python,1,1,$(SCRAMSTORENAME_PYTHON),$(SCRAMSTORENAME_LIB),,))
else
$(eval $(call MultipleWarningMsg,PyL1TriggerL1TCaloLayer1,src/L1Trigger/L1TCaloLayer1/python))
endif
ALL_COMMONRULES += src_L1Trigger_L1TCaloLayer1_python
src_L1Trigger_L1TCaloLayer1_python_INIT_FUNC += $$(eval $$(call CommonProductRules,src_L1Trigger_L1TCaloLayer1_python,src/L1Trigger/L1TCaloLayer1/python,PYTHON))
