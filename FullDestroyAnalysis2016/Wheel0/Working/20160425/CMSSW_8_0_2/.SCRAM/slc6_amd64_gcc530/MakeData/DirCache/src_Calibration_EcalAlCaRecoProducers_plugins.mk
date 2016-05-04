ifeq ($(strip $(CalibrationEcalAlCaRecoProducersAuto)),)
CalibrationEcalAlCaRecoProducersAuto := self/src/Calibration/EcalAlCaRecoProducers/plugins
PLUGINS:=yes
CalibrationEcalAlCaRecoProducersAuto_files := $(patsubst src/Calibration/EcalAlCaRecoProducers/plugins/%,%,$(wildcard $(foreach dir,src/Calibration/EcalAlCaRecoProducers/plugins ,$(foreach ext,$(SRC_FILES_SUFFIXES),$(dir)/*.$(ext)))))
CalibrationEcalAlCaRecoProducersAuto_BuildFile    := $(WORKINGDIR)/cache/bf/src/Calibration/EcalAlCaRecoProducers/plugins/BuildFile
CalibrationEcalAlCaRecoProducersAuto_LOC_USE := self  FWCore/Framework FWCore/MessageLogger FWCore/PluginManager FWCore/ParameterSet clhep Geometry/CaloTopology Geometry/Records DataFormats/TrackReco CommonTools/UtilAlgos DataFormats/RecoCandidate DataFormats/EgammaCandidates CondFormats/SiPixelObjects CalibFormats/SiStripObjects CalibFormats/HcalObjects Geometry/EcalMapping Geometry/CaloGeometry RecoEcal/EgammaCoreTools CalibTracker/Records
CalibrationEcalAlCaRecoProducersAuto_PRE_INIT_FUNC += $$(eval $$(call edmPlugin,CalibrationEcalAlCaRecoProducersAuto,CalibrationEcalAlCaRecoProducersAuto,$(SCRAMSTORENAME_LIB),src/Calibration/EcalAlCaRecoProducers/plugins))
CalibrationEcalAlCaRecoProducersAuto_PACKAGE := self/src/Calibration/EcalAlCaRecoProducers/plugins
ALL_PRODS += CalibrationEcalAlCaRecoProducersAuto
Calibration/EcalAlCaRecoProducers_forbigobj+=CalibrationEcalAlCaRecoProducersAuto
CalibrationEcalAlCaRecoProducersAuto_INIT_FUNC        += $$(eval $$(call Library,CalibrationEcalAlCaRecoProducersAuto,src/Calibration/EcalAlCaRecoProducers/plugins,src_Calibration_EcalAlCaRecoProducers_plugins,$(SCRAMSTORENAME_BIN),,$(SCRAMSTORENAME_LIB),$(SCRAMSTORENAME_LOGS)))
CalibrationEcalAlCaRecoProducersAuto_CLASS := LIBRARY
else
$(eval $(call MultipleWarningMsg,CalibrationEcalAlCaRecoProducersAuto,src/Calibration/EcalAlCaRecoProducers/plugins))
endif
ALL_COMMONRULES += src_Calibration_EcalAlCaRecoProducers_plugins
src_Calibration_EcalAlCaRecoProducers_plugins_parent := Calibration/EcalAlCaRecoProducers
src_Calibration_EcalAlCaRecoProducers_plugins_INIT_FUNC += $$(eval $$(call CommonProductRules,src_Calibration_EcalAlCaRecoProducers_plugins,src/Calibration/EcalAlCaRecoProducers/plugins,PLUGINS))
