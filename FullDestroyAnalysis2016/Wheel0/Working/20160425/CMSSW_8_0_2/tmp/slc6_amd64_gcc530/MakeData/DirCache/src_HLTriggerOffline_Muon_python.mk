ifeq ($(strip $(PyHLTriggerOfflineMuon)),)
PyHLTriggerOfflineMuon := self/src/HLTriggerOffline/Muon/python
src_HLTriggerOffline_Muon_python_parent := 
ALL_PYTHON_DIRS += $(patsubst src/%,%,src/HLTriggerOffline/Muon/python)
PyHLTriggerOfflineMuon_files := $(patsubst src/HLTriggerOffline/Muon/python/%,%,$(wildcard $(foreach dir,src/HLTriggerOffline/Muon/python ,$(foreach ext,$(SRC_FILES_SUFFIXES),$(dir)/*.$(ext)))))
PyHLTriggerOfflineMuon_LOC_USE := self  
PyHLTriggerOfflineMuon_PACKAGE := self/src/HLTriggerOffline/Muon/python
ALL_PRODS += PyHLTriggerOfflineMuon
PyHLTriggerOfflineMuon_INIT_FUNC        += $$(eval $$(call PythonProduct,PyHLTriggerOfflineMuon,src/HLTriggerOffline/Muon/python,src_HLTriggerOffline_Muon_python,1,1,$(SCRAMSTORENAME_PYTHON),$(SCRAMSTORENAME_LIB),,))
else
$(eval $(call MultipleWarningMsg,PyHLTriggerOfflineMuon,src/HLTriggerOffline/Muon/python))
endif
ALL_COMMONRULES += src_HLTriggerOffline_Muon_python
src_HLTriggerOffline_Muon_python_INIT_FUNC += $$(eval $$(call CommonProductRules,src_HLTriggerOffline_Muon_python,src/HLTriggerOffline/Muon/python,PYTHON))
