ifeq ($(strip $(PyCaloOnlineToolsEcalTools)),)
PyCaloOnlineToolsEcalTools := self/src/CaloOnlineTools/EcalTools/python
src_CaloOnlineTools_EcalTools_python_parent := 
ALL_PYTHON_DIRS += $(patsubst src/%,%,src/CaloOnlineTools/EcalTools/python)
PyCaloOnlineToolsEcalTools_files := $(patsubst src/CaloOnlineTools/EcalTools/python/%,%,$(wildcard $(foreach dir,src/CaloOnlineTools/EcalTools/python ,$(foreach ext,$(SRC_FILES_SUFFIXES),$(dir)/*.$(ext)))))
PyCaloOnlineToolsEcalTools_LOC_USE := self  
PyCaloOnlineToolsEcalTools_PACKAGE := self/src/CaloOnlineTools/EcalTools/python
ALL_PRODS += PyCaloOnlineToolsEcalTools
PyCaloOnlineToolsEcalTools_INIT_FUNC        += $$(eval $$(call PythonProduct,PyCaloOnlineToolsEcalTools,src/CaloOnlineTools/EcalTools/python,src_CaloOnlineTools_EcalTools_python,1,1,$(SCRAMSTORENAME_PYTHON),$(SCRAMSTORENAME_LIB),,))
else
$(eval $(call MultipleWarningMsg,PyCaloOnlineToolsEcalTools,src/CaloOnlineTools/EcalTools/python))
endif
ALL_COMMONRULES += src_CaloOnlineTools_EcalTools_python
src_CaloOnlineTools_EcalTools_python_INIT_FUNC += $$(eval $$(call CommonProductRules,src_CaloOnlineTools_EcalTools_python,src/CaloOnlineTools/EcalTools/python,PYTHON))
