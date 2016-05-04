ifeq ($(strip $(Calibration/IsolatedParticles)),)
ALL_COMMONRULES += src_Calibration_IsolatedParticles_src
src_Calibration_IsolatedParticles_src_parent := Calibration/IsolatedParticles
src_Calibration_IsolatedParticles_src_INIT_FUNC := $$(eval $$(call CommonProductRules,src_Calibration_IsolatedParticles_src,src/Calibration/IsolatedParticles/src,LIBRARY))
CalibrationIsolatedParticles := self/Calibration/IsolatedParticles
Calibration/IsolatedParticles := CalibrationIsolatedParticles
CalibrationIsolatedParticles_files := $(patsubst src/Calibration/IsolatedParticles/src/%,%,$(wildcard $(foreach dir,src/Calibration/IsolatedParticles/src ,$(foreach ext,$(SRC_FILES_SUFFIXES),$(dir)/*.$(ext)))))
CalibrationIsolatedParticles_BuildFile    := $(WORKINGDIR)/cache/bf/src/Calibration/IsolatedParticles/BuildFile
CalibrationIsolatedParticles_LOC_USE := self  clhep boost root FWCore/Utilities FWCore/Framework FWCore/PluginManager FWCore/ParameterSet FWCore/Services FWCore/ServiceRegistry FWCore/MessageLogger CondFormats/DataRecord MagneticField/Engine MagneticField/Records DataFormats/DetId DataFormats/EcalDetId DataFormats/HcalDetId DataFormats/EcalRecHit DataFormats/HcalRecHit DataFormats/Common DataFormats/TrackReco DataFormats/EgammaReco DataFormats/Provenance SimDataFormats/CaloHit SimDataFormats/Track SimDataFormats/GeneratorProducts SimDataFormats/Vertex SimTracker/TrackerHitAssociation SimGeneral/HepPDTRecord Geometry/CaloGeometry Geometry/CommonDetUnit Geometry/TrackerGeometryBuilder Geometry/EcalAlgo Geometry/CaloTopology Geometry/Records RecoLocalCalo/EcalRecAlgos TrackingTools/TrajectoryState TrackingTools/GeomPropagators TrackingTools/TrackAssociator
CalibrationIsolatedParticles_EX_LIB   := CalibrationIsolatedParticles
CalibrationIsolatedParticles_EX_USE   := $(foreach d,$(CalibrationIsolatedParticles_LOC_USE),$(if $($(d)_EX_FLAGS_NO_RECURSIVE_EXPORT),,$d))
CalibrationIsolatedParticles_PACKAGE := self/src/Calibration/IsolatedParticles/src
ALL_PRODS += CalibrationIsolatedParticles
CalibrationIsolatedParticles_CLASS := LIBRARY
Calibration/IsolatedParticles_forbigobj+=CalibrationIsolatedParticles
CalibrationIsolatedParticles_INIT_FUNC        += $$(eval $$(call Library,CalibrationIsolatedParticles,src/Calibration/IsolatedParticles/src,src_Calibration_IsolatedParticles_src,$(SCRAMSTORENAME_BIN),,$(SCRAMSTORENAME_LIB),$(SCRAMSTORENAME_LOGS)))
endif
