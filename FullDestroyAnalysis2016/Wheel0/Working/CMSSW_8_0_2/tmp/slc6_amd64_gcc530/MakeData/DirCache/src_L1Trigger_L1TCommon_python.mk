ifeq ($(strip $(PyL1TriggerL1TCommon)),)
PyL1TriggerL1TCommon := self/src/L1Trigger/L1TCommon/python
src_L1Trigger_L1TCommon_python_parent := 
ALL_PYTHON_DIRS += $(patsubst src/%,%,src/L1Trigger/L1TCommon/python)
PyL1TriggerL1TCommon_files := $(patsubst src/L1Trigger/L1TCommon/python/%,%,$(wildcard $(foreach dir,src/L1Trigger/L1TCommon/python ,$(foreach ext,$(SRC_FILES_SUFFIXES),$(dir)/*.$(ext)))))
PyL1TriggerL1TCommon_LOC_USE := self  
PyL1TriggerL1TCommon_PACKAGE := self/src/L1Trigger/L1TCommon/python
ALL_PRODS += PyL1TriggerL1TCommon
PyL1TriggerL1TCommon_INIT_FUNC        += $$(eval $$(call PythonProduct,PyL1TriggerL1TCommon,src/L1Trigger/L1TCommon/python,src_L1Trigger_L1TCommon_python,1,1,$(SCRAMSTORENAME_PYTHON),$(SCRAMSTORENAME_LIB),,))
else
$(eval $(call MultipleWarningMsg,PyL1TriggerL1TCommon,src/L1Trigger/L1TCommon/python))
endif
ALL_COMMONRULES += src_L1Trigger_L1TCommon_python
src_L1Trigger_L1TCommon_python_INIT_FUNC += $$(eval $$(call CommonProductRules,src_L1Trigger_L1TCommon_python,src/L1Trigger/L1TCommon/python,PYTHON))
