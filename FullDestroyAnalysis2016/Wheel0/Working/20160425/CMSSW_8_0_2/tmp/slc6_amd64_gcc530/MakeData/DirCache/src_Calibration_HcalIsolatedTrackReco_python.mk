ifeq ($(strip $(PyCalibrationHcalIsolatedTrackReco)),)
PyCalibrationHcalIsolatedTrackReco := self/src/Calibration/HcalIsolatedTrackReco/python
src_Calibration_HcalIsolatedTrackReco_python_parent := 
ALL_PYTHON_DIRS += $(patsubst src/%,%,src/Calibration/HcalIsolatedTrackReco/python)
PyCalibrationHcalIsolatedTrackReco_files := $(patsubst src/Calibration/HcalIsolatedTrackReco/python/%,%,$(wildcard $(foreach dir,src/Calibration/HcalIsolatedTrackReco/python ,$(foreach ext,$(SRC_FILES_SUFFIXES),$(dir)/*.$(ext)))))
PyCalibrationHcalIsolatedTrackReco_LOC_USE := self  
PyCalibrationHcalIsolatedTrackReco_PACKAGE := self/src/Calibration/HcalIsolatedTrackReco/python
ALL_PRODS += PyCalibrationHcalIsolatedTrackReco
PyCalibrationHcalIsolatedTrackReco_INIT_FUNC        += $$(eval $$(call PythonProduct,PyCalibrationHcalIsolatedTrackReco,src/Calibration/HcalIsolatedTrackReco/python,src_Calibration_HcalIsolatedTrackReco_python,1,1,$(SCRAMSTORENAME_PYTHON),$(SCRAMSTORENAME_LIB),,))
else
$(eval $(call MultipleWarningMsg,PyCalibrationHcalIsolatedTrackReco,src/Calibration/HcalIsolatedTrackReco/python))
endif
ALL_COMMONRULES += src_Calibration_HcalIsolatedTrackReco_python
src_Calibration_HcalIsolatedTrackReco_python_INIT_FUNC += $$(eval $$(call CommonProductRules,src_Calibration_HcalIsolatedTrackReco_python,src/Calibration/HcalIsolatedTrackReco/python,PYTHON))
