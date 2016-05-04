ifeq ($(strip $(PyRecoTrackerDeDx)),)
PyRecoTrackerDeDx := self/src/RecoTracker/DeDx/python
src_RecoTracker_DeDx_python_parent := 
ALL_PYTHON_DIRS += $(patsubst src/%,%,src/RecoTracker/DeDx/python)
PyRecoTrackerDeDx_files := $(patsubst src/RecoTracker/DeDx/python/%,%,$(wildcard $(foreach dir,src/RecoTracker/DeDx/python ,$(foreach ext,$(SRC_FILES_SUFFIXES),$(dir)/*.$(ext)))))
PyRecoTrackerDeDx_LOC_USE := self  
PyRecoTrackerDeDx_PACKAGE := self/src/RecoTracker/DeDx/python
ALL_PRODS += PyRecoTrackerDeDx
PyRecoTrackerDeDx_INIT_FUNC        += $$(eval $$(call PythonProduct,PyRecoTrackerDeDx,src/RecoTracker/DeDx/python,src_RecoTracker_DeDx_python,1,1,$(SCRAMSTORENAME_PYTHON),$(SCRAMSTORENAME_LIB),,))
else
$(eval $(call MultipleWarningMsg,PyRecoTrackerDeDx,src/RecoTracker/DeDx/python))
endif
ALL_COMMONRULES += src_RecoTracker_DeDx_python
src_RecoTracker_DeDx_python_INIT_FUNC += $$(eval $$(call CommonProductRules,src_RecoTracker_DeDx_python,src/RecoTracker/DeDx/python,PYTHON))
