ifeq ($(strip $(PyHLTriggerJetMET)),)
PyHLTriggerJetMET := self/src/HLTrigger/JetMET/python
src_HLTrigger_JetMET_python_parent := 
ALL_PYTHON_DIRS += $(patsubst src/%,%,src/HLTrigger/JetMET/python)
PyHLTriggerJetMET_files := $(patsubst src/HLTrigger/JetMET/python/%,%,$(wildcard $(foreach dir,src/HLTrigger/JetMET/python ,$(foreach ext,$(SRC_FILES_SUFFIXES),$(dir)/*.$(ext)))))
PyHLTriggerJetMET_LOC_USE := self  
PyHLTriggerJetMET_PACKAGE := self/src/HLTrigger/JetMET/python
ALL_PRODS += PyHLTriggerJetMET
PyHLTriggerJetMET_INIT_FUNC        += $$(eval $$(call PythonProduct,PyHLTriggerJetMET,src/HLTrigger/JetMET/python,src_HLTrigger_JetMET_python,1,1,$(SCRAMSTORENAME_PYTHON),$(SCRAMSTORENAME_LIB),,))
else
$(eval $(call MultipleWarningMsg,PyHLTriggerJetMET,src/HLTrigger/JetMET/python))
endif
ALL_COMMONRULES += src_HLTrigger_JetMET_python
src_HLTrigger_JetMET_python_INIT_FUNC += $$(eval $$(call CommonProductRules,src_HLTrigger_JetMET_python,src/HLTrigger/JetMET/python,PYTHON))
