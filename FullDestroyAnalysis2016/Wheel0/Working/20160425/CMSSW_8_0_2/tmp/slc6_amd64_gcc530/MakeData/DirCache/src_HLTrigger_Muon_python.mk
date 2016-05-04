ifeq ($(strip $(PyHLTriggerMuon)),)
PyHLTriggerMuon := self/src/HLTrigger/Muon/python
src_HLTrigger_Muon_python_parent := 
ALL_PYTHON_DIRS += $(patsubst src/%,%,src/HLTrigger/Muon/python)
PyHLTriggerMuon_files := $(patsubst src/HLTrigger/Muon/python/%,%,$(wildcard $(foreach dir,src/HLTrigger/Muon/python ,$(foreach ext,$(SRC_FILES_SUFFIXES),$(dir)/*.$(ext)))))
PyHLTriggerMuon_LOC_USE := self  
PyHLTriggerMuon_PACKAGE := self/src/HLTrigger/Muon/python
ALL_PRODS += PyHLTriggerMuon
PyHLTriggerMuon_INIT_FUNC        += $$(eval $$(call PythonProduct,PyHLTriggerMuon,src/HLTrigger/Muon/python,src_HLTrigger_Muon_python,1,1,$(SCRAMSTORENAME_PYTHON),$(SCRAMSTORENAME_LIB),,))
else
$(eval $(call MultipleWarningMsg,PyHLTriggerMuon,src/HLTrigger/Muon/python))
endif
ALL_COMMONRULES += src_HLTrigger_Muon_python
src_HLTrigger_Muon_python_INIT_FUNC += $$(eval $$(call CommonProductRules,src_HLTrigger_Muon_python,src/HLTrigger/Muon/python,PYTHON))
