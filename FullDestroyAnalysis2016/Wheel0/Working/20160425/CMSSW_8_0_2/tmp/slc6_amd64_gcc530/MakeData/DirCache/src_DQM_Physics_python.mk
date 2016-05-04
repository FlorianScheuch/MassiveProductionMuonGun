ifeq ($(strip $(PyDQMPhysics)),)
PyDQMPhysics := self/src/DQM/Physics/python
src_DQM_Physics_python_parent := 
ALL_PYTHON_DIRS += $(patsubst src/%,%,src/DQM/Physics/python)
PyDQMPhysics_files := $(patsubst src/DQM/Physics/python/%,%,$(wildcard $(foreach dir,src/DQM/Physics/python ,$(foreach ext,$(SRC_FILES_SUFFIXES),$(dir)/*.$(ext)))))
PyDQMPhysics_LOC_USE := self  
PyDQMPhysics_PACKAGE := self/src/DQM/Physics/python
ALL_PRODS += PyDQMPhysics
PyDQMPhysics_INIT_FUNC        += $$(eval $$(call PythonProduct,PyDQMPhysics,src/DQM/Physics/python,src_DQM_Physics_python,1,1,$(SCRAMSTORENAME_PYTHON),$(SCRAMSTORENAME_LIB),,))
else
$(eval $(call MultipleWarningMsg,PyDQMPhysics,src/DQM/Physics/python))
endif
ALL_COMMONRULES += src_DQM_Physics_python
src_DQM_Physics_python_INIT_FUNC += $$(eval $$(call CommonProductRules,src_DQM_Physics_python,src/DQM/Physics/python,PYTHON))
