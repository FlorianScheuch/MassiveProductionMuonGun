ifeq ($(strip $(PyCalibrationHcalAlCaRecoProducers)),)
PyCalibrationHcalAlCaRecoProducers := self/src/Calibration/HcalAlCaRecoProducers/python
src_Calibration_HcalAlCaRecoProducers_python_parent := 
ALL_PYTHON_DIRS += $(patsubst src/%,%,src/Calibration/HcalAlCaRecoProducers/python)
PyCalibrationHcalAlCaRecoProducers_files := $(patsubst src/Calibration/HcalAlCaRecoProducers/python/%,%,$(wildcard $(foreach dir,src/Calibration/HcalAlCaRecoProducers/python ,$(foreach ext,$(SRC_FILES_SUFFIXES),$(dir)/*.$(ext)))))
PyCalibrationHcalAlCaRecoProducers_LOC_USE := self  
PyCalibrationHcalAlCaRecoProducers_PACKAGE := self/src/Calibration/HcalAlCaRecoProducers/python
ALL_PRODS += PyCalibrationHcalAlCaRecoProducers
PyCalibrationHcalAlCaRecoProducers_INIT_FUNC        += $$(eval $$(call PythonProduct,PyCalibrationHcalAlCaRecoProducers,src/Calibration/HcalAlCaRecoProducers/python,src_Calibration_HcalAlCaRecoProducers_python,1,1,$(SCRAMSTORENAME_PYTHON),$(SCRAMSTORENAME_LIB),,))
else
$(eval $(call MultipleWarningMsg,PyCalibrationHcalAlCaRecoProducers,src/Calibration/HcalAlCaRecoProducers/python))
endif
ALL_COMMONRULES += src_Calibration_HcalAlCaRecoProducers_python
src_Calibration_HcalAlCaRecoProducers_python_INIT_FUNC += $$(eval $$(call CommonProductRules,src_Calibration_HcalAlCaRecoProducers_python,src/Calibration/HcalAlCaRecoProducers/python,PYTHON))
