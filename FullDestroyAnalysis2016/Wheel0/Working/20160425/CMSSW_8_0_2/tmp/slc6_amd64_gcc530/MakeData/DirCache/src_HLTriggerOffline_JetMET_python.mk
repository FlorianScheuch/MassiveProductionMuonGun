ifeq ($(strip $(PyHLTriggerOfflineJetMET)),)
PyHLTriggerOfflineJetMET := self/src/HLTriggerOffline/JetMET/python
src_HLTriggerOffline_JetMET_python_parent := 
ALL_PYTHON_DIRS += $(patsubst src/%,%,src/HLTriggerOffline/JetMET/python)
PyHLTriggerOfflineJetMET_files := $(patsubst src/HLTriggerOffline/JetMET/python/%,%,$(wildcard $(foreach dir,src/HLTriggerOffline/JetMET/python ,$(foreach ext,$(SRC_FILES_SUFFIXES),$(dir)/*.$(ext)))))
PyHLTriggerOfflineJetMET_LOC_USE := self  
PyHLTriggerOfflineJetMET_PACKAGE := self/src/HLTriggerOffline/JetMET/python
ALL_PRODS += PyHLTriggerOfflineJetMET
PyHLTriggerOfflineJetMET_INIT_FUNC        += $$(eval $$(call PythonProduct,PyHLTriggerOfflineJetMET,src/HLTriggerOffline/JetMET/python,src_HLTriggerOffline_JetMET_python,1,1,$(SCRAMSTORENAME_PYTHON),$(SCRAMSTORENAME_LIB),,))
else
$(eval $(call MultipleWarningMsg,PyHLTriggerOfflineJetMET,src/HLTriggerOffline/JetMET/python))
endif
ALL_COMMONRULES += src_HLTriggerOffline_JetMET_python
src_HLTriggerOffline_JetMET_python_INIT_FUNC += $$(eval $$(call CommonProductRules,src_HLTriggerOffline_JetMET_python,src/HLTriggerOffline/JetMET/python,PYTHON))
