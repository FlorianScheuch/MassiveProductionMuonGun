ifeq ($(strip $(PyEventFilterL1TXRawToDigi)),)
PyEventFilterL1TXRawToDigi := self/src/EventFilter/L1TXRawToDigi/python
src_EventFilter_L1TXRawToDigi_python_parent := 
ALL_PYTHON_DIRS += $(patsubst src/%,%,src/EventFilter/L1TXRawToDigi/python)
PyEventFilterL1TXRawToDigi_files := $(patsubst src/EventFilter/L1TXRawToDigi/python/%,%,$(wildcard $(foreach dir,src/EventFilter/L1TXRawToDigi/python ,$(foreach ext,$(SRC_FILES_SUFFIXES),$(dir)/*.$(ext)))))
PyEventFilterL1TXRawToDigi_LOC_USE := self  
PyEventFilterL1TXRawToDigi_PACKAGE := self/src/EventFilter/L1TXRawToDigi/python
ALL_PRODS += PyEventFilterL1TXRawToDigi
PyEventFilterL1TXRawToDigi_INIT_FUNC        += $$(eval $$(call PythonProduct,PyEventFilterL1TXRawToDigi,src/EventFilter/L1TXRawToDigi/python,src_EventFilter_L1TXRawToDigi_python,1,1,$(SCRAMSTORENAME_PYTHON),$(SCRAMSTORENAME_LIB),,))
else
$(eval $(call MultipleWarningMsg,PyEventFilterL1TXRawToDigi,src/EventFilter/L1TXRawToDigi/python))
endif
ALL_COMMONRULES += src_EventFilter_L1TXRawToDigi_python
src_EventFilter_L1TXRawToDigi_python_INIT_FUNC += $$(eval $$(call CommonProductRules,src_EventFilter_L1TXRawToDigi_python,src/EventFilter/L1TXRawToDigi/python,PYTHON))
