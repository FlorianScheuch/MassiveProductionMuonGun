ifeq ($(strip $(PyCalibrationIsolatedParticles)),)
PyCalibrationIsolatedParticles := self/src/Calibration/IsolatedParticles/python
src_Calibration_IsolatedParticles_python_parent := 
ALL_PYTHON_DIRS += $(patsubst src/%,%,src/Calibration/IsolatedParticles/python)
PyCalibrationIsolatedParticles_files := $(patsubst src/Calibration/IsolatedParticles/python/%,%,$(wildcard $(foreach dir,src/Calibration/IsolatedParticles/python ,$(foreach ext,$(SRC_FILES_SUFFIXES),$(dir)/*.$(ext)))))
PyCalibrationIsolatedParticles_LOC_USE := self  
PyCalibrationIsolatedParticles_PACKAGE := self/src/Calibration/IsolatedParticles/python
ALL_PRODS += PyCalibrationIsolatedParticles
PyCalibrationIsolatedParticles_INIT_FUNC        += $$(eval $$(call PythonProduct,PyCalibrationIsolatedParticles,src/Calibration/IsolatedParticles/python,src_Calibration_IsolatedParticles_python,1,1,$(SCRAMSTORENAME_PYTHON),$(SCRAMSTORENAME_LIB),,))
else
$(eval $(call MultipleWarningMsg,PyCalibrationIsolatedParticles,src/Calibration/IsolatedParticles/python))
endif
ALL_COMMONRULES += src_Calibration_IsolatedParticles_python
src_Calibration_IsolatedParticles_python_INIT_FUNC += $$(eval $$(call CommonProductRules,src_Calibration_IsolatedParticles_python,src/Calibration/IsolatedParticles/python,PYTHON))
