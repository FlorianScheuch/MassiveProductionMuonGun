ifeq ($(strip $(PyDQML1TMonitor)),)
PyDQML1TMonitor := self/src/DQM/L1TMonitor/python
src_DQM_L1TMonitor_python_parent := 
ALL_PYTHON_DIRS += $(patsubst src/%,%,src/DQM/L1TMonitor/python)
PyDQML1TMonitor_files := $(patsubst src/DQM/L1TMonitor/python/%,%,$(wildcard $(foreach dir,src/DQM/L1TMonitor/python ,$(foreach ext,$(SRC_FILES_SUFFIXES),$(dir)/*.$(ext)))))
PyDQML1TMonitor_LOC_USE := self  
PyDQML1TMonitor_PACKAGE := self/src/DQM/L1TMonitor/python
ALL_PRODS += PyDQML1TMonitor
PyDQML1TMonitor_INIT_FUNC        += $$(eval $$(call PythonProduct,PyDQML1TMonitor,src/DQM/L1TMonitor/python,src_DQM_L1TMonitor_python,1,1,$(SCRAMSTORENAME_PYTHON),$(SCRAMSTORENAME_LIB),,))
else
$(eval $(call MultipleWarningMsg,PyDQML1TMonitor,src/DQM/L1TMonitor/python))
endif
ALL_COMMONRULES += src_DQM_L1TMonitor_python
src_DQM_L1TMonitor_python_INIT_FUNC += $$(eval $$(call CommonProductRules,src_DQM_L1TMonitor_python,src/DQM/L1TMonitor/python,PYTHON))
