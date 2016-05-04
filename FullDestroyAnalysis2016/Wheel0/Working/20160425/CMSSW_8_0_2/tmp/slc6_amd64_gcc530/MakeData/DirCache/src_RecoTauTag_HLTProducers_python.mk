ifeq ($(strip $(PyRecoTauTagHLTProducers)),)
PyRecoTauTagHLTProducers := self/src/RecoTauTag/HLTProducers/python
src_RecoTauTag_HLTProducers_python_parent := 
ALL_PYTHON_DIRS += $(patsubst src/%,%,src/RecoTauTag/HLTProducers/python)
PyRecoTauTagHLTProducers_files := $(patsubst src/RecoTauTag/HLTProducers/python/%,%,$(wildcard $(foreach dir,src/RecoTauTag/HLTProducers/python ,$(foreach ext,$(SRC_FILES_SUFFIXES),$(dir)/*.$(ext)))))
PyRecoTauTagHLTProducers_LOC_USE := self  
PyRecoTauTagHLTProducers_PACKAGE := self/src/RecoTauTag/HLTProducers/python
ALL_PRODS += PyRecoTauTagHLTProducers
PyRecoTauTagHLTProducers_INIT_FUNC        += $$(eval $$(call PythonProduct,PyRecoTauTagHLTProducers,src/RecoTauTag/HLTProducers/python,src_RecoTauTag_HLTProducers_python,1,1,$(SCRAMSTORENAME_PYTHON),$(SCRAMSTORENAME_LIB),,))
else
$(eval $(call MultipleWarningMsg,PyRecoTauTagHLTProducers,src/RecoTauTag/HLTProducers/python))
endif
ALL_COMMONRULES += src_RecoTauTag_HLTProducers_python
src_RecoTauTag_HLTProducers_python_INIT_FUNC += $$(eval $$(call CommonProductRules,src_RecoTauTag_HLTProducers_python,src/RecoTauTag/HLTProducers/python,PYTHON))
