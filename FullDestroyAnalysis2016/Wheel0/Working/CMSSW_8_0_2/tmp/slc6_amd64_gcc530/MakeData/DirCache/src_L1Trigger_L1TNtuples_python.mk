ifeq ($(strip $(PyL1TriggerL1TNtuples)),)
PyL1TriggerL1TNtuples := self/src/L1Trigger/L1TNtuples/python
src_L1Trigger_L1TNtuples_python_parent := 
ALL_PYTHON_DIRS += $(patsubst src/%,%,src/L1Trigger/L1TNtuples/python)
PyL1TriggerL1TNtuples_files := $(patsubst src/L1Trigger/L1TNtuples/python/%,%,$(wildcard $(foreach dir,src/L1Trigger/L1TNtuples/python ,$(foreach ext,$(SRC_FILES_SUFFIXES),$(dir)/*.$(ext)))))
PyL1TriggerL1TNtuples_LOC_USE := self  
PyL1TriggerL1TNtuples_PACKAGE := self/src/L1Trigger/L1TNtuples/python
ALL_PRODS += PyL1TriggerL1TNtuples
PyL1TriggerL1TNtuples_INIT_FUNC        += $$(eval $$(call PythonProduct,PyL1TriggerL1TNtuples,src/L1Trigger/L1TNtuples/python,src_L1Trigger_L1TNtuples_python,1,1,$(SCRAMSTORENAME_PYTHON),$(SCRAMSTORENAME_LIB),,))
else
$(eval $(call MultipleWarningMsg,PyL1TriggerL1TNtuples,src/L1Trigger/L1TNtuples/python))
endif
ALL_COMMONRULES += src_L1Trigger_L1TNtuples_python
src_L1Trigger_L1TNtuples_python_INIT_FUNC += $$(eval $$(call CommonProductRules,src_L1Trigger_L1TNtuples_python,src/L1Trigger/L1TNtuples/python,PYTHON))
