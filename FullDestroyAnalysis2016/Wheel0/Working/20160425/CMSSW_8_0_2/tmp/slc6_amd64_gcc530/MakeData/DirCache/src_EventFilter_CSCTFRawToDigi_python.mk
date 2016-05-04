ifeq ($(strip $(PyEventFilterCSCTFRawToDigi)),)
PyEventFilterCSCTFRawToDigi := self/src/EventFilter/CSCTFRawToDigi/python
src_EventFilter_CSCTFRawToDigi_python_parent := 
ALL_PYTHON_DIRS += $(patsubst src/%,%,src/EventFilter/CSCTFRawToDigi/python)
PyEventFilterCSCTFRawToDigi_files := $(patsubst src/EventFilter/CSCTFRawToDigi/python/%,%,$(wildcard $(foreach dir,src/EventFilter/CSCTFRawToDigi/python ,$(foreach ext,$(SRC_FILES_SUFFIXES),$(dir)/*.$(ext)))))
PyEventFilterCSCTFRawToDigi_LOC_USE := self  
PyEventFilterCSCTFRawToDigi_PACKAGE := self/src/EventFilter/CSCTFRawToDigi/python
ALL_PRODS += PyEventFilterCSCTFRawToDigi
PyEventFilterCSCTFRawToDigi_INIT_FUNC        += $$(eval $$(call PythonProduct,PyEventFilterCSCTFRawToDigi,src/EventFilter/CSCTFRawToDigi/python,src_EventFilter_CSCTFRawToDigi_python,1,1,$(SCRAMSTORENAME_PYTHON),$(SCRAMSTORENAME_LIB),,))
else
$(eval $(call MultipleWarningMsg,PyEventFilterCSCTFRawToDigi,src/EventFilter/CSCTFRawToDigi/python))
endif
ALL_COMMONRULES += src_EventFilter_CSCTFRawToDigi_python
src_EventFilter_CSCTFRawToDigi_python_INIT_FUNC += $$(eval $$(call CommonProductRules,src_EventFilter_CSCTFRawToDigi_python,src/EventFilter/CSCTFRawToDigi/python,PYTHON))
