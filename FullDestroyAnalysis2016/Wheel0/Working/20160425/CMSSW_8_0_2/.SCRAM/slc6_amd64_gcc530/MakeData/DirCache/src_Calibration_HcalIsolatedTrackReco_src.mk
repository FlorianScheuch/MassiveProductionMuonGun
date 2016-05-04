ifeq ($(strip $(Calibration/HcalIsolatedTrackReco)),)
ALL_COMMONRULES += src_Calibration_HcalIsolatedTrackReco_src
src_Calibration_HcalIsolatedTrackReco_src_parent := Calibration/HcalIsolatedTrackReco
src_Calibration_HcalIsolatedTrackReco_src_INIT_FUNC := $$(eval $$(call CommonProductRules,src_Calibration_HcalIsolatedTrackReco_src,src/Calibration/HcalIsolatedTrackReco/src,LIBRARY))
CalibrationHcalIsolatedTrackReco := self/Calibration/HcalIsolatedTrackReco
Calibration/HcalIsolatedTrackReco := CalibrationHcalIsolatedTrackReco
CalibrationHcalIsolatedTrackReco_files := $(patsubst src/Calibration/HcalIsolatedTrackReco/src/%,%,$(wildcard $(foreach dir,src/Calibration/HcalIsolatedTrackReco/src ,$(foreach ext,$(SRC_FILES_SUFFIXES),$(dir)/*.$(ext)))))
CalibrationHcalIsolatedTrackReco_BuildFile    := $(WORKINGDIR)/cache/bf/src/Calibration/HcalIsolatedTrackReco/BuildFile
CalibrationHcalIsolatedTrackReco_LOC_USE := self  DataFormats/Common DataFormats/HcalIsolatedTrack DataFormats/L1Trigger DataFormats/L1GlobalTrigger FWCore/Framework FWCore/MessageLogger FWCore/ParameterSet FWCore/PluginManager FWCore/Utilities DataFormats/DetId DataFormats/EcalRecHit DataFormats/EcalDetId Geometry/CaloGeometry Geometry/CaloTopology RecoPixelVertexing/PixelTrackFitting DataFormats/HLTReco DataFormats/VertexReco CondFormats/EcalObjects Geometry/EcalMapping Geometry/EcalAlgo DataFormats/EcalRawData DataFormats/FEDRawData RecoEcal/EgammaCoreTools MagneticField/VolumeBasedEngine rootmath
CalibrationHcalIsolatedTrackReco_PRE_INIT_FUNC += $$(eval $$(call edmPlugin,CalibrationHcalIsolatedTrackReco,CalibrationHcalIsolatedTrackReco,$(SCRAMSTORENAME_LIB),src/Calibration/HcalIsolatedTrackReco/src))
CalibrationHcalIsolatedTrackReco_PACKAGE := self/src/Calibration/HcalIsolatedTrackReco/src
ALL_PRODS += CalibrationHcalIsolatedTrackReco
CalibrationHcalIsolatedTrackReco_CLASS := LIBRARY
Calibration/HcalIsolatedTrackReco_forbigobj+=CalibrationHcalIsolatedTrackReco
CalibrationHcalIsolatedTrackReco_INIT_FUNC        += $$(eval $$(call Library,CalibrationHcalIsolatedTrackReco,src/Calibration/HcalIsolatedTrackReco/src,src_Calibration_HcalIsolatedTrackReco_src,$(SCRAMSTORENAME_BIN),,$(SCRAMSTORENAME_LIB),$(SCRAMSTORENAME_LOGS)))
endif
