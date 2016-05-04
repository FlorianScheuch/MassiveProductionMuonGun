ifeq ($(strip $(PyL1TriggerL1TMuonEndCap)),)
PyL1TriggerL1TMuonEndCap := self/src/L1Trigger/L1TMuonEndCap/python
src_L1Trigger_L1TMuonEndCap_python_parent := 
ALL_PYTHON_DIRS += $(patsubst src/%,%,src/L1Trigger/L1TMuonEndCap/python)
PyL1TriggerL1TMuonEndCap_files := $(patsubst src/L1Trigger/L1TMuonEndCap/python/%,%,$(wildcard $(foreach dir,src/L1Trigger/L1TMuonEndCap/python ,$(foreach ext,$(SRC_FILES_SUFFIXES),$(dir)/*.$(ext)))))
PyL1TriggerL1TMuonEndCap_LOC_USE := self  
PyL1TriggerL1TMuonEndCap_PACKAGE := self/src/L1Trigger/L1TMuonEndCap/python
ALL_PRODS += PyL1TriggerL1TMuonEndCap
PyL1TriggerL1TMuonEndCap_INIT_FUNC        += $$(eval $$(call PythonProduct,PyL1TriggerL1TMuonEndCap,src/L1Trigger/L1TMuonEndCap/python,src_L1Trigger_L1TMuonEndCap_python,1,1,$(SCRAMSTORENAME_PYTHON),$(SCRAMSTORENAME_LIB),,))
else
$(eval $(call MultipleWarningMsg,PyL1TriggerL1TMuonEndCap,src/L1Trigger/L1TMuonEndCap/python))
endif
ALL_COMMONRULES += src_L1Trigger_L1TMuonEndCap_python
src_L1Trigger_L1TMuonEndCap_python_INIT_FUNC += $$(eval $$(call CommonProductRules,src_L1Trigger_L1TMuonEndCap_python,src/L1Trigger/L1TMuonEndCap/python,PYTHON))
