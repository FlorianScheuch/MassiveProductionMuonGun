ifeq ($(strip $(PyL1TriggerL1TMuonOverlap)),)
PyL1TriggerL1TMuonOverlap := self/src/L1Trigger/L1TMuonOverlap/python
src_L1Trigger_L1TMuonOverlap_python_parent := 
ALL_PYTHON_DIRS += $(patsubst src/%,%,src/L1Trigger/L1TMuonOverlap/python)
PyL1TriggerL1TMuonOverlap_files := $(patsubst src/L1Trigger/L1TMuonOverlap/python/%,%,$(wildcard $(foreach dir,src/L1Trigger/L1TMuonOverlap/python ,$(foreach ext,$(SRC_FILES_SUFFIXES),$(dir)/*.$(ext)))))
PyL1TriggerL1TMuonOverlap_LOC_USE := self  
PyL1TriggerL1TMuonOverlap_PACKAGE := self/src/L1Trigger/L1TMuonOverlap/python
ALL_PRODS += PyL1TriggerL1TMuonOverlap
PyL1TriggerL1TMuonOverlap_INIT_FUNC        += $$(eval $$(call PythonProduct,PyL1TriggerL1TMuonOverlap,src/L1Trigger/L1TMuonOverlap/python,src_L1Trigger_L1TMuonOverlap_python,1,1,$(SCRAMSTORENAME_PYTHON),$(SCRAMSTORENAME_LIB),,))
else
$(eval $(call MultipleWarningMsg,PyL1TriggerL1TMuonOverlap,src/L1Trigger/L1TMuonOverlap/python))
endif
ALL_COMMONRULES += src_L1Trigger_L1TMuonOverlap_python
src_L1Trigger_L1TMuonOverlap_python_INIT_FUNC += $$(eval $$(call CommonProductRules,src_L1Trigger_L1TMuonOverlap_python,src/L1Trigger/L1TMuonOverlap/python,PYTHON))
