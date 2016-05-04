ifeq ($(strip $(PyEventFilterL1TRawToDigi)),)
PyEventFilterL1TRawToDigi := self/src/EventFilter/L1TRawToDigi/python
src_EventFilter_L1TRawToDigi_python_parent := 
ALL_PYTHON_DIRS += $(patsubst src/%,%,src/EventFilter/L1TRawToDigi/python)
PyEventFilterL1TRawToDigi_files := $(patsubst src/EventFilter/L1TRawToDigi/python/%,%,$(wildcard $(foreach dir,src/EventFilter/L1TRawToDigi/python ,$(foreach ext,$(SRC_FILES_SUFFIXES),$(dir)/*.$(ext)))))
PyEventFilterL1TRawToDigi_LOC_USE := self  
PyEventFilterL1TRawToDigi_PACKAGE := self/src/EventFilter/L1TRawToDigi/python
ALL_PRODS += PyEventFilterL1TRawToDigi
PyEventFilterL1TRawToDigi_INIT_FUNC        += $$(eval $$(call PythonProduct,PyEventFilterL1TRawToDigi,src/EventFilter/L1TRawToDigi/python,src_EventFilter_L1TRawToDigi_python,1,1,$(SCRAMSTORENAME_PYTHON),$(SCRAMSTORENAME_LIB),,))
else
$(eval $(call MultipleWarningMsg,PyEventFilterL1TRawToDigi,src/EventFilter/L1TRawToDigi/python))
endif
ALL_COMMONRULES += src_EventFilter_L1TRawToDigi_python
src_EventFilter_L1TRawToDigi_python_INIT_FUNC += $$(eval $$(call CommonProductRules,src_EventFilter_L1TRawToDigi_python,src/EventFilter/L1TRawToDigi/python,PYTHON))
