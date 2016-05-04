ifeq ($(strip $(Calibration/HcalAlCaRecoProducers)),)
ALL_COMMONRULES += src_Calibration_HcalAlCaRecoProducers_src
src_Calibration_HcalAlCaRecoProducers_src_parent := Calibration/HcalAlCaRecoProducers
src_Calibration_HcalAlCaRecoProducers_src_INIT_FUNC := $$(eval $$(call CommonProductRules,src_Calibration_HcalAlCaRecoProducers_src,src/Calibration/HcalAlCaRecoProducers/src,LIBRARY))
CalibrationHcalAlCaRecoProducers := self/Calibration/HcalAlCaRecoProducers
Calibration/HcalAlCaRecoProducers := CalibrationHcalAlCaRecoProducers
CalibrationHcalAlCaRecoProducers_files := $(patsubst src/Calibration/HcalAlCaRecoProducers/src/%,%,$(wildcard $(foreach dir,src/Calibration/HcalAlCaRecoProducers/src ,$(foreach ext,$(SRC_FILES_SUFFIXES),$(dir)/*.$(ext)))))
CalibrationHcalAlCaRecoProducers_BuildFile    := $(WORKINGDIR)/cache/bf/src/Calibration/HcalAlCaRecoProducers/BuildFile
CalibrationHcalAlCaRecoProducers_LOC_USE := self  CalibFormats/HcalObjects Calibration/IsolatedParticles CommonTools/UtilAlgos CondFormats/DataRecord CondFormats/EcalObjects CondFormats/HcalObjects DataFormats/CaloTowers DataFormats/DetId DataFormats/EcalDetId DataFormats/EcalDigi DataFormats/EcalRecHit DataFormats/EgammaReco DataFormats/FEDRawData DataFormats/HcalCalibObjects DataFormats/HcalDigi DataFormats/HcalIsolatedTrack DataFormats/HcalRecHit DataFormats/JetReco DataFormats/L1GlobalTrigger DataFormats/Luminosity DataFormats/Math DataFormats/METReco DataFormats/MuonReco DataFormats/RecoCandidate Geometry/CaloGeometry Geometry/CaloTopology Geometry/EcalAlgo HLTrigger/HLTcore FWCore/Framework FWCore/ParameterSet FWCore/PluginManager RecoLocalCalo/EcalRecAlgos RecoEcal/EgammaClusterAlgos RecoEcal/EgammaCoreTools RecoLocalCalo/HcalRecAlgos TrackingTools/TrackAssociator TrackPropagation/SteppingHelixPropagator DataFormats/Scalers boost clhep root
CalibrationHcalAlCaRecoProducers_PRE_INIT_FUNC += $$(eval $$(call edmPlugin,CalibrationHcalAlCaRecoProducers,CalibrationHcalAlCaRecoProducers,$(SCRAMSTORENAME_LIB),src/Calibration/HcalAlCaRecoProducers/src))
CalibrationHcalAlCaRecoProducers_PACKAGE := self/src/Calibration/HcalAlCaRecoProducers/src
ALL_PRODS += CalibrationHcalAlCaRecoProducers
CalibrationHcalAlCaRecoProducers_CLASS := LIBRARY
Calibration/HcalAlCaRecoProducers_forbigobj+=CalibrationHcalAlCaRecoProducers
CalibrationHcalAlCaRecoProducers_INIT_FUNC        += $$(eval $$(call Library,CalibrationHcalAlCaRecoProducers,src/Calibration/HcalAlCaRecoProducers/src,src_Calibration_HcalAlCaRecoProducers_src,$(SCRAMSTORENAME_BIN),,$(SCRAMSTORENAME_LIB),$(SCRAMSTORENAME_LOGS)))
endif
