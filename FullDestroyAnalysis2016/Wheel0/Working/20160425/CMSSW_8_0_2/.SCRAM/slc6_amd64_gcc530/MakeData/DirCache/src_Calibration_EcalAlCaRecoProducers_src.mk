ifeq ($(strip $(Calibration/EcalAlCaRecoProducers)),)
ALL_COMMONRULES += src_Calibration_EcalAlCaRecoProducers_src
src_Calibration_EcalAlCaRecoProducers_src_parent := Calibration/EcalAlCaRecoProducers
src_Calibration_EcalAlCaRecoProducers_src_INIT_FUNC := $$(eval $$(call CommonProductRules,src_Calibration_EcalAlCaRecoProducers_src,src/Calibration/EcalAlCaRecoProducers/src,LIBRARY))
CalibrationEcalAlCaRecoProducers := self/Calibration/EcalAlCaRecoProducers
Calibration/EcalAlCaRecoProducers := CalibrationEcalAlCaRecoProducers
CalibrationEcalAlCaRecoProducers_files := $(patsubst src/Calibration/EcalAlCaRecoProducers/src/%,%,$(wildcard $(foreach dir,src/Calibration/EcalAlCaRecoProducers/src ,$(foreach ext,$(SRC_FILES_SUFFIXES),$(dir)/*.$(ext)))))
CalibrationEcalAlCaRecoProducers_BuildFile    := $(WORKINGDIR)/cache/bf/src/Calibration/EcalAlCaRecoProducers/BuildFile
CalibrationEcalAlCaRecoProducers_LOC_USE := self  FWCore/Framework FWCore/MessageLogger FWCore/PluginManager FWCore/ParameterSet DataFormats/EgammaCandidates DataFormats/HLTReco DataFormats/Math DataFormats/EcalDetId DataFormats/TrackReco
CalibrationEcalAlCaRecoProducers_PACKAGE := self/src/Calibration/EcalAlCaRecoProducers/src
ALL_PRODS += CalibrationEcalAlCaRecoProducers
CalibrationEcalAlCaRecoProducers_CLASS := LIBRARY
Calibration/EcalAlCaRecoProducers_forbigobj+=CalibrationEcalAlCaRecoProducers
CalibrationEcalAlCaRecoProducers_INIT_FUNC        += $$(eval $$(call Library,CalibrationEcalAlCaRecoProducers,src/Calibration/EcalAlCaRecoProducers/src,src_Calibration_EcalAlCaRecoProducers_src,$(SCRAMSTORENAME_BIN),,$(SCRAMSTORENAME_LIB),$(SCRAMSTORENAME_LOGS)))
endif
