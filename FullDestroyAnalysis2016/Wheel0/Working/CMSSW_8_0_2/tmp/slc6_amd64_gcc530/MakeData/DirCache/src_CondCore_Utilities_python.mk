ifeq ($(strip $(PyCondCoreUtilities)),)
PyCondCoreUtilities := self/src/CondCore/Utilities/python
src_CondCore_Utilities_python_parent := 
ALL_PYTHON_DIRS += $(patsubst src/%,%,src/CondCore/Utilities/python)
PyCondCoreUtilities_files := $(patsubst src/CondCore/Utilities/python/%,%,$(wildcard $(foreach dir,src/CondCore/Utilities/python ,$(foreach ext,$(SRC_FILES_SUFFIXES),$(dir)/*.$(ext)))))
PyCondCoreUtilities_LOC_USE := self  
PyCondCoreUtilities_PACKAGE := self/src/CondCore/Utilities/python
ALL_PRODS += PyCondCoreUtilities
PyCondCoreUtilities_INIT_FUNC        += $$(eval $$(call PythonProduct,PyCondCoreUtilities,src/CondCore/Utilities/python,src_CondCore_Utilities_python,1,1,$(SCRAMSTORENAME_PYTHON),$(SCRAMSTORENAME_LIB),,))
else
$(eval $(call MultipleWarningMsg,PyCondCoreUtilities,src/CondCore/Utilities/python))
endif
ALL_COMMONRULES += src_CondCore_Utilities_python
src_CondCore_Utilities_python_INIT_FUNC += $$(eval $$(call CommonProductRules,src_CondCore_Utilities_python,src/CondCore/Utilities/python,PYTHON))
