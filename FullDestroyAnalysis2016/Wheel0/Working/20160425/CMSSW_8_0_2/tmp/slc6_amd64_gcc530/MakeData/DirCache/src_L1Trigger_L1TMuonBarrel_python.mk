ifeq ($(strip $(PyL1TriggerL1TMuonBarrel)),)
PyL1TriggerL1TMuonBarrel := self/src/L1Trigger/L1TMuonBarrel/python
src_L1Trigger_L1TMuonBarrel_python_parent := 
ALL_PYTHON_DIRS += $(patsubst src/%,%,src/L1Trigger/L1TMuonBarrel/python)
PyL1TriggerL1TMuonBarrel_files := $(patsubst src/L1Trigger/L1TMuonBarrel/python/%,%,$(wildcard $(foreach dir,src/L1Trigger/L1TMuonBarrel/python ,$(foreach ext,$(SRC_FILES_SUFFIXES),$(dir)/*.$(ext)))))
PyL1TriggerL1TMuonBarrel_LOC_USE := self  
PyL1TriggerL1TMuonBarrel_PACKAGE := self/src/L1Trigger/L1TMuonBarrel/python
ALL_PRODS += PyL1TriggerL1TMuonBarrel
PyL1TriggerL1TMuonBarrel_INIT_FUNC        += $$(eval $$(call PythonProduct,PyL1TriggerL1TMuonBarrel,src/L1Trigger/L1TMuonBarrel/python,src_L1Trigger_L1TMuonBarrel_python,1,1,$(SCRAMSTORENAME_PYTHON),$(SCRAMSTORENAME_LIB),,))
else
$(eval $(call MultipleWarningMsg,PyL1TriggerL1TMuonBarrel,src/L1Trigger/L1TMuonBarrel/python))
endif
ALL_COMMONRULES += src_L1Trigger_L1TMuonBarrel_python
src_L1Trigger_L1TMuonBarrel_python_INIT_FUNC += $$(eval $$(call CommonProductRules,src_L1Trigger_L1TMuonBarrel_python,src/L1Trigger/L1TMuonBarrel/python,PYTHON))
