ifeq ($(strip $(PyCalibrationEcalAlCaRecoProducers)),)
PyCalibrationEcalAlCaRecoProducers := self/src/Calibration/EcalAlCaRecoProducers/python
src_Calibration_EcalAlCaRecoProducers_python_parent := 
ALL_PYTHON_DIRS += $(patsubst src/%,%,src/Calibration/EcalAlCaRecoProducers/python)
PyCalibrationEcalAlCaRecoProducers_files := $(patsubst src/Calibration/EcalAlCaRecoProducers/python/%,%,$(wildcard $(foreach dir,src/Calibration/EcalAlCaRecoProducers/python ,$(foreach ext,$(SRC_FILES_SUFFIXES),$(dir)/*.$(ext)))))
PyCalibrationEcalAlCaRecoProducers_LOC_USE := self  
PyCalibrationEcalAlCaRecoProducers_PACKAGE := self/src/Calibration/EcalAlCaRecoProducers/python
ALL_PRODS += PyCalibrationEcalAlCaRecoProducers
PyCalibrationEcalAlCaRecoProducers_INIT_FUNC        += $$(eval $$(call PythonProduct,PyCalibrationEcalAlCaRecoProducers,src/Calibration/EcalAlCaRecoProducers/python,src_Calibration_EcalAlCaRecoProducers_python,1,1,$(SCRAMSTORENAME_PYTHON),$(SCRAMSTORENAME_LIB),,))
else
$(eval $(call MultipleWarningMsg,PyCalibrationEcalAlCaRecoProducers,src/Calibration/EcalAlCaRecoProducers/python))
endif
ALL_COMMONRULES += src_Calibration_EcalAlCaRecoProducers_python
src_Calibration_EcalAlCaRecoProducers_python_INIT_FUNC += $$(eval $$(call CommonProductRules,src_Calibration_EcalAlCaRecoProducers_python,src/Calibration/EcalAlCaRecoProducers/python,PYTHON))
