ifeq ($(strip $(PyL1TriggerL1TCalorimeter)),)
PyL1TriggerL1TCalorimeter := self/src/L1Trigger/L1TCalorimeter/python
src_L1Trigger_L1TCalorimeter_python_parent := 
ALL_PYTHON_DIRS += $(patsubst src/%,%,src/L1Trigger/L1TCalorimeter/python)
PyL1TriggerL1TCalorimeter_files := $(patsubst src/L1Trigger/L1TCalorimeter/python/%,%,$(wildcard $(foreach dir,src/L1Trigger/L1TCalorimeter/python ,$(foreach ext,$(SRC_FILES_SUFFIXES),$(dir)/*.$(ext)))))
PyL1TriggerL1TCalorimeter_LOC_USE := self  
PyL1TriggerL1TCalorimeter_PACKAGE := self/src/L1Trigger/L1TCalorimeter/python
ALL_PRODS += PyL1TriggerL1TCalorimeter
PyL1TriggerL1TCalorimeter_INIT_FUNC        += $$(eval $$(call PythonProduct,PyL1TriggerL1TCalorimeter,src/L1Trigger/L1TCalorimeter/python,src_L1Trigger_L1TCalorimeter_python,1,1,$(SCRAMSTORENAME_PYTHON),$(SCRAMSTORENAME_LIB),,))
else
$(eval $(call MultipleWarningMsg,PyL1TriggerL1TCalorimeter,src/L1Trigger/L1TCalorimeter/python))
endif
ALL_COMMONRULES += src_L1Trigger_L1TCalorimeter_python
src_L1Trigger_L1TCalorimeter_python_INIT_FUNC += $$(eval $$(call CommonProductRules,src_L1Trigger_L1TCalorimeter_python,src/L1Trigger/L1TCalorimeter/python,PYTHON))
