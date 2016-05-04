ifeq ($(strip $(PyHLTriggerspecial)),)
PyHLTriggerspecial := self/src/HLTrigger/special/python
src_HLTrigger_special_python_parent := 
ALL_PYTHON_DIRS += $(patsubst src/%,%,src/HLTrigger/special/python)
PyHLTriggerspecial_files := $(patsubst src/HLTrigger/special/python/%,%,$(wildcard $(foreach dir,src/HLTrigger/special/python ,$(foreach ext,$(SRC_FILES_SUFFIXES),$(dir)/*.$(ext)))))
PyHLTriggerspecial_LOC_USE := self  
PyHLTriggerspecial_PACKAGE := self/src/HLTrigger/special/python
ALL_PRODS += PyHLTriggerspecial
PyHLTriggerspecial_INIT_FUNC        += $$(eval $$(call PythonProduct,PyHLTriggerspecial,src/HLTrigger/special/python,src_HLTrigger_special_python,1,1,$(SCRAMSTORENAME_PYTHON),$(SCRAMSTORENAME_LIB),,))
else
$(eval $(call MultipleWarningMsg,PyHLTriggerspecial,src/HLTrigger/special/python))
endif
ALL_COMMONRULES += src_HLTrigger_special_python
src_HLTrigger_special_python_INIT_FUNC += $$(eval $$(call CommonProductRules,src_HLTrigger_special_python,src/HLTrigger/special/python,PYTHON))
