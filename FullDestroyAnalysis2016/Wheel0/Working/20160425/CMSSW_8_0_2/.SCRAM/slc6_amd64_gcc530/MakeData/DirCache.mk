ifeq ($(strip $(CalibrationIsoTrig)),)
CalibrationIsoTrig := self/src/Calibration/IsolatedParticles/plugins
PLUGINS:=yes
CalibrationIsoTrig_files := $(patsubst src/Calibration/IsolatedParticles/plugins/%,%,$(foreach file,IsoTrig.cc,$(eval xfile:=$(wildcard src/Calibration/IsolatedParticles/plugins/$(file)))$(if $(xfile),$(xfile),$(warning No such file exists: src/Calibration/IsolatedParticles/plugins/$(file). Please fix src/Calibration/IsolatedParticles/plugins/BuildFile.))))
CalibrationIsoTrig_BuildFile    := $(WORKINGDIR)/cache/bf/src/Calibration/IsolatedParticles/plugins/BuildFile
CalibrationIsoTrig_LOC_USE := self  clhep boost root rootgraphics DataFormats/Common DataFormats/DetId DataFormats/EgammaReco DataFormats/L1GlobalTrigger DataFormats/L1Trigger DataFormats/TrackReco DataFormats/VertexReco DataFormats/JetReco DataFormats/Luminosity L1Trigger/GlobalTriggerAnalyzer SimGeneral/HepPDTRecord SimDataFormats/GeneratorProducts SimDataFormats/Vertex CondFormats/DataRecord CondFormats/L1TObjects CondFormats/EcalObjects FWCore/Framework FWCore/ParameterSet FWCore/PluginManager FWCore/Services FWCore/ServiceRegistry FWCore/MessageLogger FWCore/Utilities CommonTools/UtilAlgos Geometry/TrackerGeometryBuilder Geometry/Records MagneticField/Engine MagneticField/Records TrackingTools/GeomPropagators TrackingTools/TrackAssociator TrackPropagation/SteppingHelixPropagator RecoJets/JetProducers HLTrigger/HLTcore HLTrigger/Timer Calibration/IsolatedParticles
CalibrationIsoTrig_PRE_INIT_FUNC += $$(eval $$(call edmPlugin,CalibrationIsoTrig,CalibrationIsoTrig,$(SCRAMSTORENAME_LIB),src/Calibration/IsolatedParticles/plugins))
CalibrationIsoTrig_PACKAGE := self/src/Calibration/IsolatedParticles/plugins
ALL_PRODS += CalibrationIsoTrig
Calibration/IsolatedParticles_forbigobj+=CalibrationIsoTrig
CalibrationIsoTrig_INIT_FUNC        += $$(eval $$(call Library,CalibrationIsoTrig,src/Calibration/IsolatedParticles/plugins,src_Calibration_IsolatedParticles_plugins,$(SCRAMSTORENAME_BIN),,$(SCRAMSTORENAME_LIB),$(SCRAMSTORENAME_LOGS)))
CalibrationIsoTrig_CLASS := LIBRARY
else
$(eval $(call MultipleWarningMsg,CalibrationIsoTrig,src/Calibration/IsolatedParticles/plugins))
endif
ifeq ($(strip $(CalibrationIsoTrackCalib)),)
CalibrationIsoTrackCalib := self/src/Calibration/IsolatedParticles/plugins
PLUGINS:=yes
CalibrationIsoTrackCalib_files := $(patsubst src/Calibration/IsolatedParticles/plugins/%,%,$(foreach file,IsoTrackCalib.cc,$(eval xfile:=$(wildcard src/Calibration/IsolatedParticles/plugins/$(file)))$(if $(xfile),$(xfile),$(warning No such file exists: src/Calibration/IsolatedParticles/plugins/$(file). Please fix src/Calibration/IsolatedParticles/plugins/BuildFile.))))
CalibrationIsoTrackCalib_BuildFile    := $(WORKINGDIR)/cache/bf/src/Calibration/IsolatedParticles/plugins/BuildFile
CalibrationIsoTrackCalib_LOC_USE := self  clhep boost root rootgraphics DataFormats/Common DataFormats/DetId DataFormats/EgammaReco DataFormats/L1GlobalTrigger DataFormats/L1Trigger DataFormats/TrackReco DataFormats/VertexReco DataFormats/JetReco DataFormats/Luminosity L1Trigger/GlobalTriggerAnalyzer SimGeneral/HepPDTRecord SimDataFormats/GeneratorProducts SimDataFormats/Vertex CondFormats/DataRecord CondFormats/L1TObjects CondFormats/EcalObjects FWCore/Framework FWCore/ParameterSet FWCore/PluginManager FWCore/Services FWCore/ServiceRegistry FWCore/MessageLogger FWCore/Utilities CommonTools/UtilAlgos Geometry/TrackerGeometryBuilder Geometry/Records MagneticField/Engine MagneticField/Records TrackingTools/GeomPropagators TrackingTools/TrackAssociator TrackPropagation/SteppingHelixPropagator RecoJets/JetProducers HLTrigger/HLTcore HLTrigger/Timer Calibration/IsolatedParticles
CalibrationIsoTrackCalib_PRE_INIT_FUNC += $$(eval $$(call edmPlugin,CalibrationIsoTrackCalib,CalibrationIsoTrackCalib,$(SCRAMSTORENAME_LIB),src/Calibration/IsolatedParticles/plugins))
CalibrationIsoTrackCalib_PACKAGE := self/src/Calibration/IsolatedParticles/plugins
ALL_PRODS += CalibrationIsoTrackCalib
Calibration/IsolatedParticles_forbigobj+=CalibrationIsoTrackCalib
CalibrationIsoTrackCalib_INIT_FUNC        += $$(eval $$(call Library,CalibrationIsoTrackCalib,src/Calibration/IsolatedParticles/plugins,src_Calibration_IsolatedParticles_plugins,$(SCRAMSTORENAME_BIN),,$(SCRAMSTORENAME_LIB),$(SCRAMSTORENAME_LOGS)))
CalibrationIsoTrackCalib_CLASS := LIBRARY
else
$(eval $(call MultipleWarningMsg,CalibrationIsoTrackCalib,src/Calibration/IsolatedParticles/plugins))
endif
ifeq ($(strip $(CalibrationIsoTrackCalibration)),)
CalibrationIsoTrackCalibration := self/src/Calibration/IsolatedParticles/plugins
PLUGINS:=yes
CalibrationIsoTrackCalibration_files := $(patsubst src/Calibration/IsolatedParticles/plugins/%,%,$(foreach file,IsoTrackCalibration.cc,$(eval xfile:=$(wildcard src/Calibration/IsolatedParticles/plugins/$(file)))$(if $(xfile),$(xfile),$(warning No such file exists: src/Calibration/IsolatedParticles/plugins/$(file). Please fix src/Calibration/IsolatedParticles/plugins/BuildFile.))))
CalibrationIsoTrackCalibration_BuildFile    := $(WORKINGDIR)/cache/bf/src/Calibration/IsolatedParticles/plugins/BuildFile
CalibrationIsoTrackCalibration_LOC_USE := self  clhep boost root rootgraphics DataFormats/Common DataFormats/DetId DataFormats/EgammaReco DataFormats/L1GlobalTrigger DataFormats/L1Trigger DataFormats/TrackReco DataFormats/VertexReco DataFormats/JetReco DataFormats/Luminosity L1Trigger/GlobalTriggerAnalyzer SimGeneral/HepPDTRecord SimDataFormats/GeneratorProducts SimDataFormats/Vertex CondFormats/DataRecord CondFormats/L1TObjects CondFormats/EcalObjects FWCore/Framework FWCore/ParameterSet FWCore/PluginManager FWCore/Services FWCore/ServiceRegistry FWCore/MessageLogger FWCore/Utilities CommonTools/UtilAlgos Geometry/TrackerGeometryBuilder Geometry/Records MagneticField/Engine MagneticField/Records TrackingTools/GeomPropagators TrackingTools/TrackAssociator TrackPropagation/SteppingHelixPropagator RecoJets/JetProducers HLTrigger/HLTcore HLTrigger/Timer Calibration/IsolatedParticles
CalibrationIsoTrackCalibration_PRE_INIT_FUNC += $$(eval $$(call edmPlugin,CalibrationIsoTrackCalibration,CalibrationIsoTrackCalibration,$(SCRAMSTORENAME_LIB),src/Calibration/IsolatedParticles/plugins))
CalibrationIsoTrackCalibration_PACKAGE := self/src/Calibration/IsolatedParticles/plugins
ALL_PRODS += CalibrationIsoTrackCalibration
Calibration/IsolatedParticles_forbigobj+=CalibrationIsoTrackCalibration
CalibrationIsoTrackCalibration_INIT_FUNC        += $$(eval $$(call Library,CalibrationIsoTrackCalibration,src/Calibration/IsolatedParticles/plugins,src_Calibration_IsolatedParticles_plugins,$(SCRAMSTORENAME_BIN),,$(SCRAMSTORENAME_LIB),$(SCRAMSTORENAME_LOGS)))
CalibrationIsoTrackCalibration_CLASS := LIBRARY
else
$(eval $(call MultipleWarningMsg,CalibrationIsoTrackCalibration,src/Calibration/IsolatedParticles/plugins))
endif
ifeq ($(strip $(CalibrationHcalRaddamMuon)),)
CalibrationHcalRaddamMuon := self/src/Calibration/IsolatedParticles/plugins
PLUGINS:=yes
CalibrationHcalRaddamMuon_files := $(patsubst src/Calibration/IsolatedParticles/plugins/%,%,$(foreach file,HcalRaddamMuon.cc,$(eval xfile:=$(wildcard src/Calibration/IsolatedParticles/plugins/$(file)))$(if $(xfile),$(xfile),$(warning No such file exists: src/Calibration/IsolatedParticles/plugins/$(file). Please fix src/Calibration/IsolatedParticles/plugins/BuildFile.))))
CalibrationHcalRaddamMuon_BuildFile    := $(WORKINGDIR)/cache/bf/src/Calibration/IsolatedParticles/plugins/BuildFile
CalibrationHcalRaddamMuon_LOC_USE := self  clhep boost root rootgraphics DataFormats/Common DataFormats/DetId DataFormats/EgammaReco DataFormats/L1GlobalTrigger DataFormats/L1Trigger DataFormats/TrackReco DataFormats/VertexReco DataFormats/JetReco DataFormats/Luminosity L1Trigger/GlobalTriggerAnalyzer SimGeneral/HepPDTRecord SimDataFormats/GeneratorProducts SimDataFormats/Vertex CondFormats/DataRecord CondFormats/L1TObjects CondFormats/EcalObjects FWCore/Framework FWCore/ParameterSet FWCore/PluginManager FWCore/Services FWCore/ServiceRegistry FWCore/MessageLogger FWCore/Utilities CommonTools/UtilAlgos Geometry/TrackerGeometryBuilder Geometry/Records MagneticField/Engine MagneticField/Records TrackingTools/GeomPropagators TrackingTools/TrackAssociator TrackPropagation/SteppingHelixPropagator RecoJets/JetProducers HLTrigger/HLTcore HLTrigger/Timer Calibration/IsolatedParticles
CalibrationHcalRaddamMuon_PRE_INIT_FUNC += $$(eval $$(call edmPlugin,CalibrationHcalRaddamMuon,CalibrationHcalRaddamMuon,$(SCRAMSTORENAME_LIB),src/Calibration/IsolatedParticles/plugins))
CalibrationHcalRaddamMuon_PACKAGE := self/src/Calibration/IsolatedParticles/plugins
ALL_PRODS += CalibrationHcalRaddamMuon
Calibration/IsolatedParticles_forbigobj+=CalibrationHcalRaddamMuon
CalibrationHcalRaddamMuon_INIT_FUNC        += $$(eval $$(call Library,CalibrationHcalRaddamMuon,src/Calibration/IsolatedParticles/plugins,src_Calibration_IsolatedParticles_plugins,$(SCRAMSTORENAME_BIN),,$(SCRAMSTORENAME_LIB),$(SCRAMSTORENAME_LOGS)))
CalibrationHcalRaddamMuon_CLASS := LIBRARY
else
$(eval $(call MultipleWarningMsg,CalibrationHcalRaddamMuon,src/Calibration/IsolatedParticles/plugins))
endif
ifeq ($(strip $(CalibrationIsolatedParticlesGeneratedJets)),)
CalibrationIsolatedParticlesGeneratedJets := self/src/Calibration/IsolatedParticles/plugins
PLUGINS:=yes
CalibrationIsolatedParticlesGeneratedJets_files := $(patsubst src/Calibration/IsolatedParticles/plugins/%,%,$(foreach file,IsolatedParticlesGeneratedJets.cc,$(eval xfile:=$(wildcard src/Calibration/IsolatedParticles/plugins/$(file)))$(if $(xfile),$(xfile),$(warning No such file exists: src/Calibration/IsolatedParticles/plugins/$(file). Please fix src/Calibration/IsolatedParticles/plugins/BuildFile.))))
CalibrationIsolatedParticlesGeneratedJets_BuildFile    := $(WORKINGDIR)/cache/bf/src/Calibration/IsolatedParticles/plugins/BuildFile
CalibrationIsolatedParticlesGeneratedJets_LOC_USE := self  clhep boost root rootgraphics DataFormats/Common DataFormats/DetId DataFormats/EgammaReco DataFormats/L1GlobalTrigger DataFormats/L1Trigger DataFormats/TrackReco DataFormats/VertexReco DataFormats/JetReco DataFormats/Luminosity L1Trigger/GlobalTriggerAnalyzer SimGeneral/HepPDTRecord SimDataFormats/GeneratorProducts SimDataFormats/Vertex CondFormats/DataRecord CondFormats/L1TObjects CondFormats/EcalObjects FWCore/Framework FWCore/ParameterSet FWCore/PluginManager FWCore/Services FWCore/ServiceRegistry FWCore/MessageLogger FWCore/Utilities CommonTools/UtilAlgos Geometry/TrackerGeometryBuilder Geometry/Records MagneticField/Engine MagneticField/Records TrackingTools/GeomPropagators TrackingTools/TrackAssociator TrackPropagation/SteppingHelixPropagator RecoJets/JetProducers HLTrigger/HLTcore HLTrigger/Timer Calibration/IsolatedParticles
CalibrationIsolatedParticlesGeneratedJets_PRE_INIT_FUNC += $$(eval $$(call edmPlugin,CalibrationIsolatedParticlesGeneratedJets,CalibrationIsolatedParticlesGeneratedJets,$(SCRAMSTORENAME_LIB),src/Calibration/IsolatedParticles/plugins))
CalibrationIsolatedParticlesGeneratedJets_PACKAGE := self/src/Calibration/IsolatedParticles/plugins
ALL_PRODS += CalibrationIsolatedParticlesGeneratedJets
Calibration/IsolatedParticles_forbigobj+=CalibrationIsolatedParticlesGeneratedJets
CalibrationIsolatedParticlesGeneratedJets_INIT_FUNC        += $$(eval $$(call Library,CalibrationIsolatedParticlesGeneratedJets,src/Calibration/IsolatedParticles/plugins,src_Calibration_IsolatedParticles_plugins,$(SCRAMSTORENAME_BIN),,$(SCRAMSTORENAME_LIB),$(SCRAMSTORENAME_LOGS)))
CalibrationIsolatedParticlesGeneratedJets_CLASS := LIBRARY
else
$(eval $(call MultipleWarningMsg,CalibrationIsolatedParticlesGeneratedJets,src/Calibration/IsolatedParticles/plugins))
endif
ifeq ($(strip $(CalibrationIsolatedTracksNxN)),)
CalibrationIsolatedTracksNxN := self/src/Calibration/IsolatedParticles/plugins
PLUGINS:=yes
CalibrationIsolatedTracksNxN_files := $(patsubst src/Calibration/IsolatedParticles/plugins/%,%,$(foreach file,IsolatedTracksNxN.cc,$(eval xfile:=$(wildcard src/Calibration/IsolatedParticles/plugins/$(file)))$(if $(xfile),$(xfile),$(warning No such file exists: src/Calibration/IsolatedParticles/plugins/$(file). Please fix src/Calibration/IsolatedParticles/plugins/BuildFile.))))
CalibrationIsolatedTracksNxN_BuildFile    := $(WORKINGDIR)/cache/bf/src/Calibration/IsolatedParticles/plugins/BuildFile
CalibrationIsolatedTracksNxN_LOC_USE := self  clhep boost root rootgraphics DataFormats/Common DataFormats/DetId DataFormats/EgammaReco DataFormats/L1GlobalTrigger DataFormats/L1Trigger DataFormats/TrackReco DataFormats/VertexReco DataFormats/JetReco DataFormats/Luminosity L1Trigger/GlobalTriggerAnalyzer SimGeneral/HepPDTRecord SimDataFormats/GeneratorProducts SimDataFormats/Vertex CondFormats/DataRecord CondFormats/L1TObjects CondFormats/EcalObjects FWCore/Framework FWCore/ParameterSet FWCore/PluginManager FWCore/Services FWCore/ServiceRegistry FWCore/MessageLogger FWCore/Utilities CommonTools/UtilAlgos Geometry/TrackerGeometryBuilder Geometry/Records MagneticField/Engine MagneticField/Records TrackingTools/GeomPropagators TrackingTools/TrackAssociator TrackPropagation/SteppingHelixPropagator RecoJets/JetProducers HLTrigger/HLTcore HLTrigger/Timer Calibration/IsolatedParticles
CalibrationIsolatedTracksNxN_PRE_INIT_FUNC += $$(eval $$(call edmPlugin,CalibrationIsolatedTracksNxN,CalibrationIsolatedTracksNxN,$(SCRAMSTORENAME_LIB),src/Calibration/IsolatedParticles/plugins))
CalibrationIsolatedTracksNxN_PACKAGE := self/src/Calibration/IsolatedParticles/plugins
ALL_PRODS += CalibrationIsolatedTracksNxN
Calibration/IsolatedParticles_forbigobj+=CalibrationIsolatedTracksNxN
CalibrationIsolatedTracksNxN_INIT_FUNC        += $$(eval $$(call Library,CalibrationIsolatedTracksNxN,src/Calibration/IsolatedParticles/plugins,src_Calibration_IsolatedParticles_plugins,$(SCRAMSTORENAME_BIN),,$(SCRAMSTORENAME_LIB),$(SCRAMSTORENAME_LOGS)))
CalibrationIsolatedTracksNxN_CLASS := LIBRARY
else
$(eval $(call MultipleWarningMsg,CalibrationIsolatedTracksNxN,src/Calibration/IsolatedParticles/plugins))
endif
ifeq ($(strip $(CalibrationElectronStudy)),)
CalibrationElectronStudy := self/src/Calibration/IsolatedParticles/plugins
PLUGINS:=yes
CalibrationElectronStudy_files := $(patsubst src/Calibration/IsolatedParticles/plugins/%,%,$(foreach file,ElectronStudy.cc,$(eval xfile:=$(wildcard src/Calibration/IsolatedParticles/plugins/$(file)))$(if $(xfile),$(xfile),$(warning No such file exists: src/Calibration/IsolatedParticles/plugins/$(file). Please fix src/Calibration/IsolatedParticles/plugins/BuildFile.))))
CalibrationElectronStudy_BuildFile    := $(WORKINGDIR)/cache/bf/src/Calibration/IsolatedParticles/plugins/BuildFile
CalibrationElectronStudy_LOC_USE := self  clhep boost root rootgraphics DataFormats/Common DataFormats/DetId DataFormats/EgammaReco DataFormats/L1GlobalTrigger DataFormats/L1Trigger DataFormats/TrackReco DataFormats/VertexReco DataFormats/JetReco DataFormats/Luminosity L1Trigger/GlobalTriggerAnalyzer SimGeneral/HepPDTRecord SimDataFormats/GeneratorProducts SimDataFormats/Vertex CondFormats/DataRecord CondFormats/L1TObjects CondFormats/EcalObjects FWCore/Framework FWCore/ParameterSet FWCore/PluginManager FWCore/Services FWCore/ServiceRegistry FWCore/MessageLogger FWCore/Utilities CommonTools/UtilAlgos Geometry/TrackerGeometryBuilder Geometry/Records MagneticField/Engine MagneticField/Records TrackingTools/GeomPropagators TrackingTools/TrackAssociator TrackPropagation/SteppingHelixPropagator RecoJets/JetProducers HLTrigger/HLTcore HLTrigger/Timer Calibration/IsolatedParticles
CalibrationElectronStudy_PRE_INIT_FUNC += $$(eval $$(call edmPlugin,CalibrationElectronStudy,CalibrationElectronStudy,$(SCRAMSTORENAME_LIB),src/Calibration/IsolatedParticles/plugins))
CalibrationElectronStudy_PACKAGE := self/src/Calibration/IsolatedParticles/plugins
ALL_PRODS += CalibrationElectronStudy
Calibration/IsolatedParticles_forbigobj+=CalibrationElectronStudy
CalibrationElectronStudy_INIT_FUNC        += $$(eval $$(call Library,CalibrationElectronStudy,src/Calibration/IsolatedParticles/plugins,src_Calibration_IsolatedParticles_plugins,$(SCRAMSTORENAME_BIN),,$(SCRAMSTORENAME_LIB),$(SCRAMSTORENAME_LOGS)))
CalibrationElectronStudy_CLASS := LIBRARY
else
$(eval $(call MultipleWarningMsg,CalibrationElectronStudy,src/Calibration/IsolatedParticles/plugins))
endif
ifeq ($(strip $(CalibrationIsolatedTracksHcalScale)),)
CalibrationIsolatedTracksHcalScale := self/src/Calibration/IsolatedParticles/plugins
PLUGINS:=yes
CalibrationIsolatedTracksHcalScale_files := $(patsubst src/Calibration/IsolatedParticles/plugins/%,%,$(foreach file,IsolatedTracksHcalScale.cc,$(eval xfile:=$(wildcard src/Calibration/IsolatedParticles/plugins/$(file)))$(if $(xfile),$(xfile),$(warning No such file exists: src/Calibration/IsolatedParticles/plugins/$(file). Please fix src/Calibration/IsolatedParticles/plugins/BuildFile.))))
CalibrationIsolatedTracksHcalScale_BuildFile    := $(WORKINGDIR)/cache/bf/src/Calibration/IsolatedParticles/plugins/BuildFile
CalibrationIsolatedTracksHcalScale_LOC_USE := self  clhep boost root rootgraphics DataFormats/Common DataFormats/DetId DataFormats/EgammaReco DataFormats/L1GlobalTrigger DataFormats/L1Trigger DataFormats/TrackReco DataFormats/VertexReco DataFormats/JetReco DataFormats/Luminosity L1Trigger/GlobalTriggerAnalyzer SimGeneral/HepPDTRecord SimDataFormats/GeneratorProducts SimDataFormats/Vertex CondFormats/DataRecord CondFormats/L1TObjects CondFormats/EcalObjects FWCore/Framework FWCore/ParameterSet FWCore/PluginManager FWCore/Services FWCore/ServiceRegistry FWCore/MessageLogger FWCore/Utilities CommonTools/UtilAlgos Geometry/TrackerGeometryBuilder Geometry/Records MagneticField/Engine MagneticField/Records TrackingTools/GeomPropagators TrackingTools/TrackAssociator TrackPropagation/SteppingHelixPropagator RecoJets/JetProducers HLTrigger/HLTcore HLTrigger/Timer Calibration/IsolatedParticles
CalibrationIsolatedTracksHcalScale_PRE_INIT_FUNC += $$(eval $$(call edmPlugin,CalibrationIsolatedTracksHcalScale,CalibrationIsolatedTracksHcalScale,$(SCRAMSTORENAME_LIB),src/Calibration/IsolatedParticles/plugins))
CalibrationIsolatedTracksHcalScale_PACKAGE := self/src/Calibration/IsolatedParticles/plugins
ALL_PRODS += CalibrationIsolatedTracksHcalScale
Calibration/IsolatedParticles_forbigobj+=CalibrationIsolatedTracksHcalScale
CalibrationIsolatedTracksHcalScale_INIT_FUNC        += $$(eval $$(call Library,CalibrationIsolatedTracksHcalScale,src/Calibration/IsolatedParticles/plugins,src_Calibration_IsolatedParticles_plugins,$(SCRAMSTORENAME_BIN),,$(SCRAMSTORENAME_LIB),$(SCRAMSTORENAME_LOGS)))
CalibrationIsolatedTracksHcalScale_CLASS := LIBRARY
else
$(eval $(call MultipleWarningMsg,CalibrationIsolatedTracksHcalScale,src/Calibration/IsolatedParticles/plugins))
endif
ifeq ($(strip $(CalibrationIsolatedTracksCone)),)
CalibrationIsolatedTracksCone := self/src/Calibration/IsolatedParticles/plugins
PLUGINS:=yes
CalibrationIsolatedTracksCone_files := $(patsubst src/Calibration/IsolatedParticles/plugins/%,%,$(foreach file,IsolatedTracksCone.cc,$(eval xfile:=$(wildcard src/Calibration/IsolatedParticles/plugins/$(file)))$(if $(xfile),$(xfile),$(warning No such file exists: src/Calibration/IsolatedParticles/plugins/$(file). Please fix src/Calibration/IsolatedParticles/plugins/BuildFile.))))
CalibrationIsolatedTracksCone_BuildFile    := $(WORKINGDIR)/cache/bf/src/Calibration/IsolatedParticles/plugins/BuildFile
CalibrationIsolatedTracksCone_LOC_USE := self  clhep boost root rootgraphics DataFormats/Common DataFormats/DetId DataFormats/EgammaReco DataFormats/L1GlobalTrigger DataFormats/L1Trigger DataFormats/TrackReco DataFormats/VertexReco DataFormats/JetReco DataFormats/Luminosity L1Trigger/GlobalTriggerAnalyzer SimGeneral/HepPDTRecord SimDataFormats/GeneratorProducts SimDataFormats/Vertex CondFormats/DataRecord CondFormats/L1TObjects CondFormats/EcalObjects FWCore/Framework FWCore/ParameterSet FWCore/PluginManager FWCore/Services FWCore/ServiceRegistry FWCore/MessageLogger FWCore/Utilities CommonTools/UtilAlgos Geometry/TrackerGeometryBuilder Geometry/Records MagneticField/Engine MagneticField/Records TrackingTools/GeomPropagators TrackingTools/TrackAssociator TrackPropagation/SteppingHelixPropagator RecoJets/JetProducers HLTrigger/HLTcore HLTrigger/Timer Calibration/IsolatedParticles
CalibrationIsolatedTracksCone_PRE_INIT_FUNC += $$(eval $$(call edmPlugin,CalibrationIsolatedTracksCone,CalibrationIsolatedTracksCone,$(SCRAMSTORENAME_LIB),src/Calibration/IsolatedParticles/plugins))
CalibrationIsolatedTracksCone_PACKAGE := self/src/Calibration/IsolatedParticles/plugins
ALL_PRODS += CalibrationIsolatedTracksCone
Calibration/IsolatedParticles_forbigobj+=CalibrationIsolatedTracksCone
CalibrationIsolatedTracksCone_INIT_FUNC        += $$(eval $$(call Library,CalibrationIsolatedTracksCone,src/Calibration/IsolatedParticles/plugins,src_Calibration_IsolatedParticles_plugins,$(SCRAMSTORENAME_BIN),,$(SCRAMSTORENAME_LIB),$(SCRAMSTORENAME_LOGS)))
CalibrationIsolatedTracksCone_CLASS := LIBRARY
else
$(eval $(call MultipleWarningMsg,CalibrationIsolatedTracksCone,src/Calibration/IsolatedParticles/plugins))
endif
ifeq ($(strip $(CalibrationIsolatedGenParticles)),)
CalibrationIsolatedGenParticles := self/src/Calibration/IsolatedParticles/plugins
PLUGINS:=yes
CalibrationIsolatedGenParticles_files := $(patsubst src/Calibration/IsolatedParticles/plugins/%,%,$(foreach file,IsolatedGenParticles.cc,$(eval xfile:=$(wildcard src/Calibration/IsolatedParticles/plugins/$(file)))$(if $(xfile),$(xfile),$(warning No such file exists: src/Calibration/IsolatedParticles/plugins/$(file). Please fix src/Calibration/IsolatedParticles/plugins/BuildFile.))))
CalibrationIsolatedGenParticles_BuildFile    := $(WORKINGDIR)/cache/bf/src/Calibration/IsolatedParticles/plugins/BuildFile
CalibrationIsolatedGenParticles_LOC_USE := self  clhep boost root rootgraphics DataFormats/Common DataFormats/DetId DataFormats/EgammaReco DataFormats/L1GlobalTrigger DataFormats/L1Trigger DataFormats/TrackReco DataFormats/VertexReco DataFormats/JetReco DataFormats/Luminosity L1Trigger/GlobalTriggerAnalyzer SimGeneral/HepPDTRecord SimDataFormats/GeneratorProducts SimDataFormats/Vertex CondFormats/DataRecord CondFormats/L1TObjects CondFormats/EcalObjects FWCore/Framework FWCore/ParameterSet FWCore/PluginManager FWCore/Services FWCore/ServiceRegistry FWCore/MessageLogger FWCore/Utilities CommonTools/UtilAlgos Geometry/TrackerGeometryBuilder Geometry/Records MagneticField/Engine MagneticField/Records TrackingTools/GeomPropagators TrackingTools/TrackAssociator TrackPropagation/SteppingHelixPropagator RecoJets/JetProducers HLTrigger/HLTcore HLTrigger/Timer Calibration/IsolatedParticles
CalibrationIsolatedGenParticles_PRE_INIT_FUNC += $$(eval $$(call edmPlugin,CalibrationIsolatedGenParticles,CalibrationIsolatedGenParticles,$(SCRAMSTORENAME_LIB),src/Calibration/IsolatedParticles/plugins))
CalibrationIsolatedGenParticles_PACKAGE := self/src/Calibration/IsolatedParticles/plugins
ALL_PRODS += CalibrationIsolatedGenParticles
Calibration/IsolatedParticles_forbigobj+=CalibrationIsolatedGenParticles
CalibrationIsolatedGenParticles_INIT_FUNC        += $$(eval $$(call Library,CalibrationIsolatedGenParticles,src/Calibration/IsolatedParticles/plugins,src_Calibration_IsolatedParticles_plugins,$(SCRAMSTORENAME_BIN),,$(SCRAMSTORENAME_LIB),$(SCRAMSTORENAME_LOGS)))
CalibrationIsolatedGenParticles_CLASS := LIBRARY
else
$(eval $(call MultipleWarningMsg,CalibrationIsolatedGenParticles,src/Calibration/IsolatedParticles/plugins))
endif
ifeq ($(strip $(CalibrationStudyHLT)),)
CalibrationStudyHLT := self/src/Calibration/IsolatedParticles/plugins
PLUGINS:=yes
CalibrationStudyHLT_files := $(patsubst src/Calibration/IsolatedParticles/plugins/%,%,$(foreach file,StudyHLT.cc,$(eval xfile:=$(wildcard src/Calibration/IsolatedParticles/plugins/$(file)))$(if $(xfile),$(xfile),$(warning No such file exists: src/Calibration/IsolatedParticles/plugins/$(file). Please fix src/Calibration/IsolatedParticles/plugins/BuildFile.))))
CalibrationStudyHLT_BuildFile    := $(WORKINGDIR)/cache/bf/src/Calibration/IsolatedParticles/plugins/BuildFile
CalibrationStudyHLT_LOC_USE := self  clhep boost root rootgraphics DataFormats/Common DataFormats/DetId DataFormats/EgammaReco DataFormats/L1GlobalTrigger DataFormats/L1Trigger DataFormats/TrackReco DataFormats/VertexReco DataFormats/JetReco DataFormats/Luminosity L1Trigger/GlobalTriggerAnalyzer SimGeneral/HepPDTRecord SimDataFormats/GeneratorProducts SimDataFormats/Vertex CondFormats/DataRecord CondFormats/L1TObjects CondFormats/EcalObjects FWCore/Framework FWCore/ParameterSet FWCore/PluginManager FWCore/Services FWCore/ServiceRegistry FWCore/MessageLogger FWCore/Utilities CommonTools/UtilAlgos Geometry/TrackerGeometryBuilder Geometry/Records MagneticField/Engine MagneticField/Records TrackingTools/GeomPropagators TrackingTools/TrackAssociator TrackPropagation/SteppingHelixPropagator RecoJets/JetProducers HLTrigger/HLTcore HLTrigger/Timer Calibration/IsolatedParticles
CalibrationStudyHLT_PRE_INIT_FUNC += $$(eval $$(call edmPlugin,CalibrationStudyHLT,CalibrationStudyHLT,$(SCRAMSTORENAME_LIB),src/Calibration/IsolatedParticles/plugins))
CalibrationStudyHLT_PACKAGE := self/src/Calibration/IsolatedParticles/plugins
ALL_PRODS += CalibrationStudyHLT
Calibration/IsolatedParticles_forbigobj+=CalibrationStudyHLT
CalibrationStudyHLT_INIT_FUNC        += $$(eval $$(call Library,CalibrationStudyHLT,src/Calibration/IsolatedParticles/plugins,src_Calibration_IsolatedParticles_plugins,$(SCRAMSTORENAME_BIN),,$(SCRAMSTORENAME_LIB),$(SCRAMSTORENAME_LOGS)))
CalibrationStudyHLT_CLASS := LIBRARY
else
$(eval $(call MultipleWarningMsg,CalibrationStudyHLT,src/Calibration/IsolatedParticles/plugins))
endif
ALL_COMMONRULES += src_Calibration_IsolatedParticles_plugins
src_Calibration_IsolatedParticles_plugins_parent := Calibration/IsolatedParticles
src_Calibration_IsolatedParticles_plugins_INIT_FUNC += $$(eval $$(call CommonProductRules,src_Calibration_IsolatedParticles_plugins,src/Calibration/IsolatedParticles/plugins,PLUGINS))
ifeq ($(strip $(HLTriggerOffline/JetMET)),)
ALL_COMMONRULES += src_HLTriggerOffline_JetMET_src
src_HLTriggerOffline_JetMET_src_parent := HLTriggerOffline/JetMET
src_HLTriggerOffline_JetMET_src_INIT_FUNC := $$(eval $$(call CommonProductRules,src_HLTriggerOffline_JetMET_src,src/HLTriggerOffline/JetMET/src,LIBRARY))
HLTriggerOfflineJetMET := self/HLTriggerOffline/JetMET
HLTriggerOffline/JetMET := HLTriggerOfflineJetMET
HLTriggerOfflineJetMET_files := $(patsubst src/HLTriggerOffline/JetMET/src/%,%,$(wildcard $(foreach dir,src/HLTriggerOffline/JetMET/src ,$(foreach ext,$(SRC_FILES_SUFFIXES),$(dir)/*.$(ext)))))
HLTriggerOfflineJetMET_BuildFile    := $(WORKINGDIR)/cache/bf/src/HLTriggerOffline/JetMET/BuildFile
HLTriggerOfflineJetMET_LOC_USE := self  FWCore/Framework FWCore/PluginManager FWCore/ParameterSet HLTrigger/HLTcore FWCore/ServiceRegistry DQMServices/Core DataFormats/Common DataFormats/CLHEP DataFormats/L1GlobalTrigger FWCore/MessageLogger
HLTriggerOfflineJetMET_PRE_INIT_FUNC += $$(eval $$(call edmPlugin,HLTriggerOfflineJetMET,HLTriggerOfflineJetMET,$(SCRAMSTORENAME_LIB),src/HLTriggerOffline/JetMET/src))
HLTriggerOfflineJetMET_PACKAGE := self/src/HLTriggerOffline/JetMET/src
ALL_PRODS += HLTriggerOfflineJetMET
HLTriggerOfflineJetMET_CLASS := LIBRARY
HLTriggerOffline/JetMET_forbigobj+=HLTriggerOfflineJetMET
HLTriggerOfflineJetMET_INIT_FUNC        += $$(eval $$(call Library,HLTriggerOfflineJetMET,src/HLTriggerOffline/JetMET/src,src_HLTriggerOffline_JetMET_src,$(SCRAMSTORENAME_BIN),,$(SCRAMSTORENAME_LIB),$(SCRAMSTORENAME_LOGS)))
endif
ifeq ($(strip $(HLTrigger/special)),)
ALL_COMMONRULES += src_HLTrigger_special_src
src_HLTrigger_special_src_parent := HLTrigger/special
src_HLTrigger_special_src_INIT_FUNC := $$(eval $$(call CommonProductRules,src_HLTrigger_special_src,src/HLTrigger/special/src,LIBRARY))
HLTriggerspecial := self/HLTrigger/special
HLTrigger/special := HLTriggerspecial
HLTriggerspecial_files := $(patsubst src/HLTrigger/special/src/%,%,$(wildcard $(foreach dir,src/HLTrigger/special/src ,$(foreach ext,$(SRC_FILES_SUFFIXES),$(dir)/*.$(ext)))))
HLTriggerspecial_BuildFile    := $(WORKINGDIR)/cache/bf/src/HLTrigger/special/BuildFile
HLTriggerspecial_LOC_USE := self  root CalibCalorimetry/EcalLaserCorrection Calibration/Tools CondFormats/DataRecord CondFormats/L1TObjects CondFormats/EcalObjects DataFormats/CSCDigi DataFormats/CSCRecHit DataFormats/TrackerRecHit2D DataFormats/Common DataFormats/DTDigi DataFormats/DetId DataFormats/EcalDetId DataFormats/EcalRecHit DataFormats/EcalDigi DataFormats/EgammaReco DataFormats/FEDRawData DataFormats/HLTReco DataFormats/HcalIsolatedTrack DataFormats/JetReco DataFormats/L1DTTrackFinder DataFormats/L1Trigger DataFormats/METReco DataFormats/Math DataFormats/MuonDetId DataFormats/RecoCandidate DataFormats/TrackReco DataFormats/VertexReco DataFormats/MuonReco EventFilter/HcalRawToDigi FWCore/Framework FWCore/MessageLogger FWCore/ParameterSet FWCore/ServiceRegistry Geometry/CommonTopologies Geometry/CSCGeometry Geometry/RPCGeometry Geometry/CaloGeometry Geometry/CaloTopology Geometry/EcalMapping Geometry/DTGeometry Geometry/Records Geometry/TrackerGeometryBuilder HLTrigger/HLTcore CommonTools/UtilAlgos RecoEcal/EgammaClusterAlgos RecoEcal/EgammaCoreTools RecoMuon/TrackingTools Geometry/EcalAlgo SimGeneral/HepPDTRecord TrackingTools/TransientTrack
HLTriggerspecial_PRE_INIT_FUNC += $$(eval $$(call edmPlugin,HLTriggerspecial,HLTriggerspecial,$(SCRAMSTORENAME_LIB),src/HLTrigger/special/src))
HLTriggerspecial_PACKAGE := self/src/HLTrigger/special/src
ALL_PRODS += HLTriggerspecial
HLTriggerspecial_CLASS := LIBRARY
HLTrigger/special_forbigobj+=HLTriggerspecial
HLTriggerspecial_INIT_FUNC        += $$(eval $$(call Library,HLTriggerspecial,src/HLTrigger/special/src,src_HLTrigger_special_src,$(SCRAMSTORENAME_BIN),,$(SCRAMSTORENAME_LIB),$(SCRAMSTORENAME_LOGS)))
endif
ifeq ($(strip $(EventFilter/L1TRawToDigi)),)
ALL_COMMONRULES += src_EventFilter_L1TRawToDigi_src
src_EventFilter_L1TRawToDigi_src_parent := EventFilter/L1TRawToDigi
src_EventFilter_L1TRawToDigi_src_INIT_FUNC := $$(eval $$(call CommonProductRules,src_EventFilter_L1TRawToDigi_src,src/EventFilter/L1TRawToDigi/src,LIBRARY))
EventFilterL1TRawToDigi := self/EventFilter/L1TRawToDigi
EventFilter/L1TRawToDigi := EventFilterL1TRawToDigi
EventFilterL1TRawToDigi_files := $(patsubst src/EventFilter/L1TRawToDigi/src/%,%,$(wildcard $(foreach dir,src/EventFilter/L1TRawToDigi/src src/EventFilter/L1TRawToDigi/src/implementations_stage1 src/EventFilter/L1TRawToDigi/src/implementations_stage2,$(foreach ext,$(SRC_FILES_SUFFIXES),$(dir)/*.$(ext)))))
EventFilterL1TRawToDigi_BuildFile    := $(WORKINGDIR)/cache/bf/src/EventFilter/L1TRawToDigi/BuildFile
EventFilterL1TRawToDigi_LOC_USE := self  FWCore/Framework DataFormats/FEDRawData DataFormats/L1Trigger DataFormats/L1TMuon DataFormats/L1TCalorimeter L1Trigger/L1TCalorimeter L1Trigger/L1TGlobal L1Trigger/L1TMuon
EventFilterL1TRawToDigi_EX_LIB   := EventFilterL1TRawToDigi
EventFilterL1TRawToDigi_EX_USE   := $(foreach d,$(EventFilterL1TRawToDigi_LOC_USE),$(if $($(d)_EX_FLAGS_NO_RECURSIVE_EXPORT),,$d))
EventFilterL1TRawToDigi_PACKAGE := self/src/EventFilter/L1TRawToDigi/src
ALL_PRODS += EventFilterL1TRawToDigi
EventFilterL1TRawToDigi_CLASS := LIBRARY
EventFilter/L1TRawToDigi_forbigobj+=EventFilterL1TRawToDigi
EventFilterL1TRawToDigi_INIT_FUNC        += $$(eval $$(call Library,EventFilterL1TRawToDigi,src/EventFilter/L1TRawToDigi/src,src_EventFilter_L1TRawToDigi_src,$(SCRAMSTORENAME_BIN),,$(SCRAMSTORENAME_LIB),$(SCRAMSTORENAME_LOGS)))
endif
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
ifeq ($(strip $(EventFilterL1TRawToDigiAuto)),)
EventFilterL1TRawToDigiAuto := self/src/EventFilter/L1TRawToDigi/plugins
PLUGINS:=yes
EventFilterL1TRawToDigiAuto_files := $(patsubst src/EventFilter/L1TRawToDigi/plugins/%,%,$(wildcard $(foreach dir,src/EventFilter/L1TRawToDigi/plugins ,$(foreach ext,$(SRC_FILES_SUFFIXES),$(dir)/*.$(ext)))))
EventFilterL1TRawToDigiAuto_BuildFile    := $(WORKINGDIR)/cache/bf/src/EventFilter/L1TRawToDigi/plugins/BuildFile
EventFilterL1TRawToDigiAuto_LOC_USE := self  FWCore/Framework FWCore/PluginManager FWCore/ParameterSet DataFormats/FEDRawData EventFilter/L1TRawToDigi
EventFilterL1TRawToDigiAuto_PRE_INIT_FUNC += $$(eval $$(call edmPlugin,EventFilterL1TRawToDigiAuto,EventFilterL1TRawToDigiAuto,$(SCRAMSTORENAME_LIB),src/EventFilter/L1TRawToDigi/plugins))
EventFilterL1TRawToDigiAuto_PACKAGE := self/src/EventFilter/L1TRawToDigi/plugins
ALL_PRODS += EventFilterL1TRawToDigiAuto
EventFilter/L1TRawToDigi_forbigobj+=EventFilterL1TRawToDigiAuto
EventFilterL1TRawToDigiAuto_INIT_FUNC        += $$(eval $$(call Library,EventFilterL1TRawToDigiAuto,src/EventFilter/L1TRawToDigi/plugins,src_EventFilter_L1TRawToDigi_plugins,$(SCRAMSTORENAME_BIN),,$(SCRAMSTORENAME_LIB),$(SCRAMSTORENAME_LOGS)))
EventFilterL1TRawToDigiAuto_CLASS := LIBRARY
else
$(eval $(call MultipleWarningMsg,EventFilterL1TRawToDigiAuto,src/EventFilter/L1TRawToDigi/plugins))
endif
ALL_COMMONRULES += src_EventFilter_L1TRawToDigi_plugins
src_EventFilter_L1TRawToDigi_plugins_parent := EventFilter/L1TRawToDigi
src_EventFilter_L1TRawToDigi_plugins_INIT_FUNC += $$(eval $$(call CommonProductRules,src_EventFilter_L1TRawToDigi_plugins,src/EventFilter/L1TRawToDigi/plugins,PLUGINS))
ifeq ($(strip $(DataFormats/L1TCalorimeter)),)
ALL_COMMONRULES += src_DataFormats_L1TCalorimeter_src
src_DataFormats_L1TCalorimeter_src_parent := DataFormats/L1TCalorimeter
src_DataFormats_L1TCalorimeter_src_INIT_FUNC := $$(eval $$(call CommonProductRules,src_DataFormats_L1TCalorimeter_src,src/DataFormats/L1TCalorimeter/src,LIBRARY))
DataFormatsL1TCalorimeter := self/DataFormats/L1TCalorimeter
DataFormats/L1TCalorimeter := DataFormatsL1TCalorimeter
DataFormatsL1TCalorimeter_files := $(patsubst src/DataFormats/L1TCalorimeter/src/%,%,$(wildcard $(foreach dir,src/DataFormats/L1TCalorimeter/src ,$(foreach ext,$(SRC_FILES_SUFFIXES),$(dir)/*.$(ext)))))
DataFormatsL1TCalorimeter_BuildFile    := $(WORKINGDIR)/cache/bf/src/DataFormats/L1TCalorimeter/BuildFile
DataFormatsL1TCalorimeter_LOC_USE := self  DataFormats/Candidate DataFormats/Common DataFormats/L1Trigger
DataFormatsL1TCalorimeter_LCGDICTS  := x 
DataFormatsL1TCalorimeter_PRE_INIT_FUNC += $$(eval $$(call LCGDict,DataFormatsL1TCalorimeter,src/DataFormats/L1TCalorimeter/src/classes.h,src/DataFormats/L1TCalorimeter/src/classes_def.xml,$(SCRAMSTORENAME_LIB),$(GENREFLEX_ARGS) --fail_on_warnings,))
DataFormatsL1TCalorimeter_EX_LIB   := DataFormatsL1TCalorimeter
DataFormatsL1TCalorimeter_EX_USE   := $(foreach d,$(DataFormatsL1TCalorimeter_LOC_USE),$(if $($(d)_EX_FLAGS_NO_RECURSIVE_EXPORT),,$d))
DataFormatsL1TCalorimeter_PACKAGE := self/src/DataFormats/L1TCalorimeter/src
ALL_PRODS += DataFormatsL1TCalorimeter
DataFormatsL1TCalorimeter_CLASS := LIBRARY
DataFormats/L1TCalorimeter_forbigobj+=DataFormatsL1TCalorimeter
DataFormatsL1TCalorimeter_INIT_FUNC        += $$(eval $$(call Library,DataFormatsL1TCalorimeter,src/DataFormats/L1TCalorimeter/src,src_DataFormats_L1TCalorimeter_src,$(SCRAMSTORENAME_BIN),,$(SCRAMSTORENAME_LIB),$(SCRAMSTORENAME_LOGS)))
endif
ifeq ($(strip $(DQMOfflineTriggerPlugins)),)
DQMOfflineTriggerPlugins := self/src/DQMOffline/Trigger/plugins
PLUGINS:=yes
DQMOfflineTriggerPlugins_files := $(patsubst src/DQMOffline/Trigger/plugins/%,%,$(foreach file,*.cc,$(eval xfile:=$(wildcard src/DQMOffline/Trigger/plugins/$(file)))$(if $(xfile),$(xfile),$(warning No such file exists: src/DQMOffline/Trigger/plugins/$(file). Please fix src/DQMOffline/Trigger/plugins/BuildFile.))))
DQMOfflineTriggerPlugins_BuildFile    := $(WORKINGDIR)/cache/bf/src/DQMOffline/Trigger/plugins/BuildFile
DQMOfflineTriggerPlugins_LOC_USE := self  FWCore/Framework FWCore/PluginManager FWCore/ParameterSet FWCore/ServiceRegistry DataFormats/RecoCandidate DataFormats/HLTReco DataFormats/MuonReco DataFormats/EgammaReco DataFormats/TrackReco DataFormats/TrajectorySeed DataFormats/BTauReco DataFormats/TauReco DataFormats/METReco DataFormats/JetReco RecoEcal/EgammaCoreTools RecoEgamma/EgammaHLTAlgos HLTrigger/HLTcore CondFormats/DataRecord DQMServices/Core root roofit boost
DQMOfflineTriggerPlugins_PRE_INIT_FUNC += $$(eval $$(call edmPlugin,DQMOfflineTriggerPlugins,DQMOfflineTriggerPlugins,$(SCRAMSTORENAME_LIB),src/DQMOffline/Trigger/plugins))
DQMOfflineTriggerPlugins_PACKAGE := self/src/DQMOffline/Trigger/plugins
ALL_PRODS += DQMOfflineTriggerPlugins
DQMOffline/Trigger_forbigobj+=DQMOfflineTriggerPlugins
DQMOfflineTriggerPlugins_INIT_FUNC        += $$(eval $$(call Library,DQMOfflineTriggerPlugins,src/DQMOffline/Trigger/plugins,src_DQMOffline_Trigger_plugins,$(SCRAMSTORENAME_BIN),,$(SCRAMSTORENAME_LIB),$(SCRAMSTORENAME_LOGS)))
DQMOfflineTriggerPlugins_CLASS := LIBRARY
else
$(eval $(call MultipleWarningMsg,DQMOfflineTriggerPlugins,src/DQMOffline/Trigger/plugins))
endif
ALL_COMMONRULES += src_DQMOffline_Trigger_plugins
src_DQMOffline_Trigger_plugins_parent := DQMOffline/Trigger
src_DQMOffline_Trigger_plugins_INIT_FUNC += $$(eval $$(call CommonProductRules,src_DQMOffline_Trigger_plugins,src/DQMOffline/Trigger/plugins,PLUGINS))
ifeq ($(strip $(L1Trigger/HardwareValidation)),)
ALL_COMMONRULES += src_L1Trigger_HardwareValidation_src
src_L1Trigger_HardwareValidation_src_parent := L1Trigger/HardwareValidation
src_L1Trigger_HardwareValidation_src_INIT_FUNC := $$(eval $$(call CommonProductRules,src_L1Trigger_HardwareValidation_src,src/L1Trigger/HardwareValidation/src,LIBRARY))
L1TriggerHardwareValidation := self/L1Trigger/HardwareValidation
L1Trigger/HardwareValidation := L1TriggerHardwareValidation
L1TriggerHardwareValidation_files := $(patsubst src/L1Trigger/HardwareValidation/src/%,%,$(wildcard $(foreach dir,src/L1Trigger/HardwareValidation/src ,$(foreach ext,$(SRC_FILES_SUFFIXES),$(dir)/*.$(ext)))))
L1TriggerHardwareValidation_BuildFile    := $(WORKINGDIR)/cache/bf/src/L1Trigger/HardwareValidation/BuildFile
L1TriggerHardwareValidation_LOC_USE := self  FWCore/Framework FWCore/PluginManager FWCore/ParameterSet FWCore/MessageLogger DataFormats/EcalDigi DataFormats/L1CaloTrigger DataFormats/CSCDigi DataFormats/L1DTTrackFinder DataFormats/L1GlobalMuonTrigger DataFormats/L1GlobalTrigger DataFormats/L1Trigger DataFormats/FEDRawData DataFormats/L1TCalorimeter CondTools/L1Trigger
L1TriggerHardwareValidation_EX_LIB   := L1TriggerHardwareValidation
L1TriggerHardwareValidation_EX_USE   := $(foreach d,$(L1TriggerHardwareValidation_LOC_USE),$(if $($(d)_EX_FLAGS_NO_RECURSIVE_EXPORT),,$d))
L1TriggerHardwareValidation_PACKAGE := self/src/L1Trigger/HardwareValidation/src
ALL_PRODS += L1TriggerHardwareValidation
L1TriggerHardwareValidation_CLASS := LIBRARY
L1Trigger/HardwareValidation_forbigobj+=L1TriggerHardwareValidation
L1TriggerHardwareValidation_INIT_FUNC        += $$(eval $$(call Library,L1TriggerHardwareValidation,src/L1Trigger/HardwareValidation/src,src_L1Trigger_HardwareValidation_src,$(SCRAMSTORENAME_BIN),,$(SCRAMSTORENAME_LIB),$(SCRAMSTORENAME_LOGS)))
endif
ifeq ($(strip $(DQMOffline/Trigger)),)
ALL_COMMONRULES += src_DQMOffline_Trigger_src
src_DQMOffline_Trigger_src_parent := DQMOffline/Trigger
src_DQMOffline_Trigger_src_INIT_FUNC := $$(eval $$(call CommonProductRules,src_DQMOffline_Trigger_src,src/DQMOffline/Trigger/src,LIBRARY))
DQMOfflineTrigger := self/DQMOffline/Trigger
DQMOffline/Trigger := DQMOfflineTrigger
DQMOfflineTrigger_files := $(patsubst src/DQMOffline/Trigger/src/%,%,$(wildcard $(foreach dir,src/DQMOffline/Trigger/src ,$(foreach ext,$(SRC_FILES_SUFFIXES),$(dir)/*.$(ext)))))
DQMOfflineTrigger_BuildFile    := $(WORKINGDIR)/cache/bf/src/DQMOffline/Trigger/BuildFile
DQMOfflineTrigger_LOC_USE := self  DQMServices/Core FWCore/Framework FWCore/PluginManager FWCore/ParameterSet FWCore/ServiceRegistry FWCore/Utilities DataFormats/RecoCandidate DataFormats/HLTReco DataFormats/MuonReco DataFormats/EgammaReco DataFormats/TrackReco DataFormats/TrajectorySeed DataFormats/BTauReco DataFormats/TauReco DataFormats/METReco DataFormats/JetReco DataFormats/CaloTowers DataFormats/HeavyIonEvent CommonTools/Utils RecoEcal/EgammaCoreTools RecoEgamma/EgammaHLTAlgos RecoEgamma/EgammaIsolationAlgos HLTrigger/HLTcore CondFormats/DataRecord RecoJets/JetAssociationAlgorithms RecoJets/JetAlgorithms RecoJets/JetProducers JetMETCorrections/Objects root boost
DQMOfflineTrigger_PRE_INIT_FUNC += $$(eval $$(call edmPlugin,DQMOfflineTrigger,DQMOfflineTrigger,$(SCRAMSTORENAME_LIB),src/DQMOffline/Trigger/src))
DQMOfflineTrigger_PACKAGE := self/src/DQMOffline/Trigger/src
ALL_PRODS += DQMOfflineTrigger
DQMOfflineTrigger_CLASS := LIBRARY
DQMOffline/Trigger_forbigobj+=DQMOfflineTrigger
DQMOfflineTrigger_INIT_FUNC        += $$(eval $$(call Library,DQMOfflineTrigger,src/DQMOffline/Trigger/src,src_DQMOffline_Trigger_src,$(SCRAMSTORENAME_BIN),,$(SCRAMSTORENAME_LIB),$(SCRAMSTORENAME_LOGS)))
endif
ifeq ($(strip $(QCDAnalysis/UEAnalysis)),)
ALL_COMMONRULES += src_QCDAnalysis_UEAnalysis_src
src_QCDAnalysis_UEAnalysis_src_parent := QCDAnalysis/UEAnalysis
src_QCDAnalysis_UEAnalysis_src_INIT_FUNC := $$(eval $$(call CommonProductRules,src_QCDAnalysis_UEAnalysis_src,src/QCDAnalysis/UEAnalysis/src,LIBRARY))
QCDAnalysisUEAnalysis := self/QCDAnalysis/UEAnalysis
QCDAnalysis/UEAnalysis := QCDAnalysisUEAnalysis
QCDAnalysisUEAnalysis_files := $(patsubst src/QCDAnalysis/UEAnalysis/src/%,%,$(wildcard $(foreach dir,src/QCDAnalysis/UEAnalysis/src ,$(foreach ext,$(SRC_FILES_SUFFIXES),$(dir)/*.$(ext)))))
QCDAnalysisUEAnalysis_BuildFile    := $(WORKINGDIR)/cache/bf/src/QCDAnalysis/UEAnalysis/BuildFile
QCDAnalysisUEAnalysis_LOC_USE := self  SimDataFormats/GeneratorProducts DataFormats/JetReco DataFormats/Candidate DataFormats/Common DataFormats/HepMCCandidate DataFormats/TrackCandidate DataFormats/HLTReco CommonTools/UtilAlgos FWCore/Framework FWCore/PluginManager FWCore/ServiceRegistry clhep root
QCDAnalysisUEAnalysis_PRE_INIT_FUNC += $$(eval $$(call edmPlugin,QCDAnalysisUEAnalysis,QCDAnalysisUEAnalysis,$(SCRAMSTORENAME_LIB),src/QCDAnalysis/UEAnalysis/src))
QCDAnalysisUEAnalysis_PACKAGE := self/src/QCDAnalysis/UEAnalysis/src
ALL_PRODS += QCDAnalysisUEAnalysis
QCDAnalysisUEAnalysis_CLASS := LIBRARY
QCDAnalysis/UEAnalysis_forbigobj+=QCDAnalysisUEAnalysis
QCDAnalysisUEAnalysis_INIT_FUNC        += $$(eval $$(call Library,QCDAnalysisUEAnalysis,src/QCDAnalysis/UEAnalysis/src,src_QCDAnalysis_UEAnalysis_src,$(SCRAMSTORENAME_BIN),,$(SCRAMSTORENAME_LIB),$(SCRAMSTORENAME_LOGS)))
endif
ifeq ($(strip $(DataFormats/HLTReco)),)
ALL_COMMONRULES += src_DataFormats_HLTReco_src
src_DataFormats_HLTReco_src_parent := DataFormats/HLTReco
src_DataFormats_HLTReco_src_INIT_FUNC := $$(eval $$(call CommonProductRules,src_DataFormats_HLTReco_src,src/DataFormats/HLTReco/src,LIBRARY))
DataFormatsHLTReco := self/DataFormats/HLTReco
DataFormats/HLTReco := DataFormatsHLTReco
DataFormatsHLTReco_files := $(patsubst src/DataFormats/HLTReco/src/%,%,$(wildcard $(foreach dir,src/DataFormats/HLTReco/src ,$(foreach ext,$(SRC_FILES_SUFFIXES),$(dir)/*.$(ext)))))
DataFormatsHLTReco_BuildFile    := $(WORKINGDIR)/cache/bf/src/DataFormats/HLTReco/BuildFile
DataFormatsHLTReco_LOC_USE := self  FWCore/Utilities DataFormats/Common DataFormats/CLHEP DataFormats/Candidate boost
DataFormatsHLTReco_LCGDICTS  := x 
DataFormatsHLTReco_PRE_INIT_FUNC += $$(eval $$(call LCGDict,DataFormatsHLTReco,src/DataFormats/HLTReco/src/classes.h,src/DataFormats/HLTReco/src/classes_def.xml,$(SCRAMSTORENAME_LIB),$(GENREFLEX_ARGS) --fail_on_warnings,))
DataFormatsHLTReco_EX_LIB   := DataFormatsHLTReco
DataFormatsHLTReco_EX_USE   := $(foreach d,$(DataFormatsHLTReco_LOC_USE),$(if $($(d)_EX_FLAGS_NO_RECURSIVE_EXPORT),,$d))
DataFormatsHLTReco_PACKAGE := self/src/DataFormats/HLTReco/src
ALL_PRODS += DataFormatsHLTReco
DataFormatsHLTReco_CLASS := LIBRARY
DataFormats/HLTReco_forbigobj+=DataFormatsHLTReco
DataFormatsHLTReco_INIT_FUNC        += $$(eval $$(call Library,DataFormatsHLTReco,src/DataFormats/HLTReco/src,src_DataFormats_HLTReco_src,$(SCRAMSTORENAME_BIN),,$(SCRAMSTORENAME_LIB),$(SCRAMSTORENAME_LOGS)))
endif
ifeq ($(strip $(HLTrigger/HLTcore)),)
ALL_COMMONRULES += src_HLTrigger_HLTcore_src
src_HLTrigger_HLTcore_src_parent := HLTrigger/HLTcore
src_HLTrigger_HLTcore_src_INIT_FUNC := $$(eval $$(call CommonProductRules,src_HLTrigger_HLTcore_src,src/HLTrigger/HLTcore/src,LIBRARY))
HLTriggerHLTcore := self/HLTrigger/HLTcore
HLTrigger/HLTcore := HLTriggerHLTcore
HLTriggerHLTcore_files := $(patsubst src/HLTrigger/HLTcore/src/%,%,$(wildcard $(foreach dir,src/HLTrigger/HLTcore/src ,$(foreach ext,$(SRC_FILES_SUFFIXES),$(dir)/*.$(ext)))))
HLTriggerHLTcore_BuildFile    := $(WORKINGDIR)/cache/bf/src/HLTrigger/HLTcore/BuildFile
HLTriggerHLTcore_LOC_USE := self  tbb boost DataFormats/Common FWCore/Framework FWCore/ParameterSet FWCore/ServiceRegistry FWCore/Services FWCore/MessageLogger L1Trigger/GlobalTriggerAnalyzer CondCore/DBOutputService CondFormats/HLTObjects CondFormats/DataRecord
HLTriggerHLTcore_EX_LIB   := HLTriggerHLTcore
HLTriggerHLTcore_EX_USE   := $(foreach d,$(HLTriggerHLTcore_LOC_USE),$(if $($(d)_EX_FLAGS_NO_RECURSIVE_EXPORT),,$d))
HLTriggerHLTcore_PACKAGE := self/src/HLTrigger/HLTcore/src
ALL_PRODS += HLTriggerHLTcore
HLTriggerHLTcore_CLASS := LIBRARY
HLTrigger/HLTcore_forbigobj+=HLTriggerHLTcore
HLTriggerHLTcore_INIT_FUNC        += $$(eval $$(call Library,HLTriggerHLTcore,src/HLTrigger/HLTcore/src,src_HLTrigger_HLTcore_src,$(SCRAMSTORENAME_BIN),,$(SCRAMSTORENAME_LIB),$(SCRAMSTORENAME_LOGS)))
endif
ifeq ($(strip $(CondCore/L1TPlugins)),)
ALL_COMMONRULES += src_CondCore_L1TPlugins_src
src_CondCore_L1TPlugins_src_parent := CondCore/L1TPlugins
src_CondCore_L1TPlugins_src_INIT_FUNC := $$(eval $$(call CommonProductRules,src_CondCore_L1TPlugins_src,src/CondCore/L1TPlugins/src,LIBRARY))
CondCoreL1TPlugins := self/CondCore/L1TPlugins
CondCore/L1TPlugins := CondCoreL1TPlugins
CondCoreL1TPlugins_files := $(patsubst src/CondCore/L1TPlugins/src/%,%,$(wildcard $(foreach dir,src/CondCore/L1TPlugins/src ,$(foreach ext,$(SRC_FILES_SUFFIXES),$(dir)/*.$(ext)))))
CondCoreL1TPlugins_BuildFile    := $(WORKINGDIR)/cache/bf/src/CondCore/L1TPlugins/BuildFile
CondCoreL1TPlugins_LOC_USE := self  FWCore/Framework FWCore/PluginManager CondCore/ESSources CondFormats/L1TObjects CondFormats/DataRecord
CondCoreL1TPlugins_PRE_INIT_FUNC += $$(eval $$(call edmPlugin,CondCoreL1TPlugins,CondCoreL1TPlugins,$(SCRAMSTORENAME_LIB),src/CondCore/L1TPlugins/src))
CondCoreL1TPlugins_PACKAGE := self/src/CondCore/L1TPlugins/src
ALL_PRODS += CondCoreL1TPlugins
CondCoreL1TPlugins_CLASS := LIBRARY
CondCore/L1TPlugins_forbigobj+=CondCoreL1TPlugins
CondCoreL1TPlugins_INIT_FUNC        += $$(eval $$(call Library,CondCoreL1TPlugins,src/CondCore/L1TPlugins/src,src_CondCore_L1TPlugins_src,$(SCRAMSTORENAME_BIN),,$(SCRAMSTORENAME_LIB),$(SCRAMSTORENAME_LOGS)))
endif
ifeq ($(strip $(HLTriggerOffline/Higgs)),)
ALL_COMMONRULES += src_HLTriggerOffline_Higgs_src
src_HLTriggerOffline_Higgs_src_parent := HLTriggerOffline/Higgs
src_HLTriggerOffline_Higgs_src_INIT_FUNC := $$(eval $$(call CommonProductRules,src_HLTriggerOffline_Higgs_src,src/HLTriggerOffline/Higgs/src,LIBRARY))
HLTriggerOfflineHiggs := self/HLTriggerOffline/Higgs
HLTriggerOffline/Higgs := HLTriggerOfflineHiggs
HLTriggerOfflineHiggs_files := $(patsubst src/HLTriggerOffline/Higgs/src/%,%,$(wildcard $(foreach dir,src/HLTriggerOffline/Higgs/src ,$(foreach ext,$(SRC_FILES_SUFFIXES),$(dir)/*.$(ext)))))
HLTriggerOfflineHiggs_BuildFile    := $(WORKINGDIR)/cache/bf/src/HLTriggerOffline/Higgs/BuildFile
HLTriggerOfflineHiggs_LOC_USE := self  root FWCore/Framework FWCore/PluginManager FWCore/ParameterSet FWCore/MessageLogger FWCore/Utilities HLTrigger/HLTcore CommonTools/Utils DQMServices/Core DataFormats/MuonReco DataFormats/EgammaCandidates DataFormats/METReco DataFormats/TauReco DataFormats/TrackReco DataFormats/HepMCCandidate hepmc
HLTriggerOfflineHiggs_PRE_INIT_FUNC += $$(eval $$(call edmPlugin,HLTriggerOfflineHiggs,HLTriggerOfflineHiggs,$(SCRAMSTORENAME_LIB),src/HLTriggerOffline/Higgs/src))
HLTriggerOfflineHiggs_PACKAGE := self/src/HLTriggerOffline/Higgs/src
ALL_PRODS += HLTriggerOfflineHiggs
HLTriggerOfflineHiggs_CLASS := LIBRARY
HLTriggerOffline/Higgs_forbigobj+=HLTriggerOfflineHiggs
HLTriggerOfflineHiggs_INIT_FUNC        += $$(eval $$(call Library,HLTriggerOfflineHiggs,src/HLTriggerOffline/Higgs/src,src_HLTriggerOffline_Higgs_src,$(SCRAMSTORENAME_BIN),,$(SCRAMSTORENAME_LIB),$(SCRAMSTORENAME_LOGS)))
endif
ifeq ($(strip $(L1Trigger/L1TCalorimeter)),)
ALL_COMMONRULES += src_L1Trigger_L1TCalorimeter_src
src_L1Trigger_L1TCalorimeter_src_parent := L1Trigger/L1TCalorimeter
src_L1Trigger_L1TCalorimeter_src_INIT_FUNC := $$(eval $$(call CommonProductRules,src_L1Trigger_L1TCalorimeter_src,src/L1Trigger/L1TCalorimeter/src,LIBRARY))
L1TriggerL1TCalorimeter := self/L1Trigger/L1TCalorimeter
L1Trigger/L1TCalorimeter := L1TriggerL1TCalorimeter
L1TriggerL1TCalorimeter_files := $(patsubst src/L1Trigger/L1TCalorimeter/src/%,%,$(wildcard $(foreach dir,src/L1Trigger/L1TCalorimeter/src src/L1Trigger/L1TCalorimeter/src/firmware,$(foreach ext,$(SRC_FILES_SUFFIXES),$(dir)/*.$(ext)))))
L1TriggerL1TCalorimeter_BuildFile    := $(WORKINGDIR)/cache/bf/src/L1Trigger/L1TCalorimeter/src/BuildFile
L1TriggerL1TCalorimeter_LOC_USE := self  FWCore/Framework FWCore/PluginManager FWCore/ParameterSet DataFormats/Math DataFormats/L1TCalorimeter DataFormats/L1GlobalCaloTrigger CondFormats/L1TObjects CondFormats/DataRecord
L1TriggerL1TCalorimeter_EX_LIB   := L1TriggerL1TCalorimeter
L1TriggerL1TCalorimeter_EX_USE   := $(foreach d,$(L1TriggerL1TCalorimeter_LOC_USE),$(if $($(d)_EX_FLAGS_NO_RECURSIVE_EXPORT),,$d))
L1TriggerL1TCalorimeter_PACKAGE := self/src/L1Trigger/L1TCalorimeter/src
ALL_PRODS += L1TriggerL1TCalorimeter
L1TriggerL1TCalorimeter_CLASS := LIBRARY
L1Trigger/L1TCalorimeter_forbigobj+=L1TriggerL1TCalorimeter
L1TriggerL1TCalorimeter_INIT_FUNC        += $$(eval $$(call Library,L1TriggerL1TCalorimeter,src/L1Trigger/L1TCalorimeter/src,src_L1Trigger_L1TCalorimeter_src,$(SCRAMSTORENAME_BIN),,$(SCRAMSTORENAME_LIB),$(SCRAMSTORENAME_LOGS)))
endif
ifeq ($(strip $(DataFormats/L1TMuon)),)
ALL_COMMONRULES += src_DataFormats_L1TMuon_src
src_DataFormats_L1TMuon_src_parent := DataFormats/L1TMuon
src_DataFormats_L1TMuon_src_INIT_FUNC := $$(eval $$(call CommonProductRules,src_DataFormats_L1TMuon_src,src/DataFormats/L1TMuon/src,LIBRARY))
DataFormatsL1TMuon := self/DataFormats/L1TMuon
DataFormats/L1TMuon := DataFormatsL1TMuon
DataFormatsL1TMuon_files := $(patsubst src/DataFormats/L1TMuon/src/%,%,$(wildcard $(foreach dir,src/DataFormats/L1TMuon/src ,$(foreach ext,$(SRC_FILES_SUFFIXES),$(dir)/*.$(ext)))))
DataFormatsL1TMuon_BuildFile    := $(WORKINGDIR)/cache/bf/src/DataFormats/L1TMuon/BuildFile
DataFormatsL1TMuon_LOC_USE := self  DataFormats/CSCDigi DataFormats/L1DTTrackFinder DataFormats/RPCDigi DataFormats/MuonDetId DataFormats/L1CSCTrackFinder DataFormats/Common L1Trigger/DTTrackFinder rootrflx
DataFormatsL1TMuon_LCGDICTS  := x 
DataFormatsL1TMuon_PRE_INIT_FUNC += $$(eval $$(call LCGDict,DataFormatsL1TMuon,src/DataFormats/L1TMuon/src/classes.h,src/DataFormats/L1TMuon/src/classes_def.xml,$(SCRAMSTORENAME_LIB),$(GENREFLEX_ARGS) --fail_on_warnings,))
DataFormatsL1TMuon_EX_LIB   := DataFormatsL1TMuon
DataFormatsL1TMuon_EX_USE   := $(foreach d,$(DataFormatsL1TMuon_LOC_USE),$(if $($(d)_EX_FLAGS_NO_RECURSIVE_EXPORT),,$d))
DataFormatsL1TMuon_PACKAGE := self/src/DataFormats/L1TMuon/src
ALL_PRODS += DataFormatsL1TMuon
DataFormatsL1TMuon_CLASS := LIBRARY
DataFormats/L1TMuon_forbigobj+=DataFormatsL1TMuon
DataFormatsL1TMuon_INIT_FUNC        += $$(eval $$(call Library,DataFormatsL1TMuon,src/DataFormats/L1TMuon/src,src_DataFormats_L1TMuon_src,$(SCRAMSTORENAME_BIN),,$(SCRAMSTORENAME_LIB),$(SCRAMSTORENAME_LOGS)))
endif
ifeq ($(strip $(EventFilter/CSCTFRawToDigi)),)
ALL_COMMONRULES += src_EventFilter_CSCTFRawToDigi_src
src_EventFilter_CSCTFRawToDigi_src_parent := EventFilter/CSCTFRawToDigi
src_EventFilter_CSCTFRawToDigi_src_INIT_FUNC := $$(eval $$(call CommonProductRules,src_EventFilter_CSCTFRawToDigi_src,src/EventFilter/CSCTFRawToDigi/src,LIBRARY))
EventFilterCSCTFRawToDigi := self/EventFilter/CSCTFRawToDigi
EventFilter/CSCTFRawToDigi := EventFilterCSCTFRawToDigi
EventFilterCSCTFRawToDigi_files := $(patsubst src/EventFilter/CSCTFRawToDigi/src/%,%,$(wildcard $(foreach dir,src/EventFilter/CSCTFRawToDigi/src ,$(foreach ext,$(SRC_FILES_SUFFIXES),$(dir)/*.$(ext)))))
EventFilterCSCTFRawToDigi_BuildFile    := $(WORKINGDIR)/cache/bf/src/EventFilter/CSCTFRawToDigi/BuildFile
EventFilterCSCTFRawToDigi_LOC_USE := self  DataFormats/CSCDigi FWCore/Framework DataFormats/FEDRawData DataFormats/MuonDetId DataFormats/L1CSCTrackFinder CondFormats/CSCObjects FWCore/MessageLogger
EventFilterCSCTFRawToDigi_EX_LIB   := EventFilterCSCTFRawToDigi
EventFilterCSCTFRawToDigi_EX_USE   := $(foreach d,$(EventFilterCSCTFRawToDigi_LOC_USE),$(if $($(d)_EX_FLAGS_NO_RECURSIVE_EXPORT),,$d))
EventFilterCSCTFRawToDigi_PACKAGE := self/src/EventFilter/CSCTFRawToDigi/src
ALL_PRODS += EventFilterCSCTFRawToDigi
EventFilterCSCTFRawToDigi_CLASS := LIBRARY
EventFilter/CSCTFRawToDigi_forbigobj+=EventFilterCSCTFRawToDigi
EventFilterCSCTFRawToDigi_INIT_FUNC        += $$(eval $$(call Library,EventFilterCSCTFRawToDigi,src/EventFilter/CSCTFRawToDigi/src,src_EventFilter_CSCTFRawToDigi_src,$(SCRAMSTORENAME_BIN),,$(SCRAMSTORENAME_LIB),$(SCRAMSTORENAME_LOGS)))
endif
ifeq ($(strip $(HLTriggerOffline/HeavyFlavor)),)
ALL_COMMONRULES += src_HLTriggerOffline_HeavyFlavor_src
src_HLTriggerOffline_HeavyFlavor_src_parent := HLTriggerOffline/HeavyFlavor
src_HLTriggerOffline_HeavyFlavor_src_INIT_FUNC := $$(eval $$(call CommonProductRules,src_HLTriggerOffline_HeavyFlavor_src,src/HLTriggerOffline/HeavyFlavor/src,LIBRARY))
HLTriggerOfflineHeavyFlavor := self/HLTriggerOffline/HeavyFlavor
HLTriggerOffline/HeavyFlavor := HLTriggerOfflineHeavyFlavor
HLTriggerOfflineHeavyFlavor_files := $(patsubst src/HLTriggerOffline/HeavyFlavor/src/%,%,$(wildcard $(foreach dir,src/HLTriggerOffline/HeavyFlavor/src ,$(foreach ext,$(SRC_FILES_SUFFIXES),$(dir)/*.$(ext)))))
HLTriggerOfflineHeavyFlavor_BuildFile    := $(WORKINGDIR)/cache/bf/src/HLTriggerOffline/HeavyFlavor/BuildFile
HLTriggerOfflineHeavyFlavor_LOC_USE := self  FWCore/Framework FWCore/MessageLogger FWCore/ServiceRegistry FWCore/ParameterSet DataFormats/Common DataFormats/TrackReco DataFormats/RecoCandidate DataFormats/L1Trigger DataFormats/Candidate DataFormats/HepMCCandidate DataFormats/MuonReco DataFormats/Math HLTrigger/HLTcore DQMServices/Core
HLTriggerOfflineHeavyFlavor_PRE_INIT_FUNC += $$(eval $$(call edmPlugin,HLTriggerOfflineHeavyFlavor,HLTriggerOfflineHeavyFlavor,$(SCRAMSTORENAME_LIB),src/HLTriggerOffline/HeavyFlavor/src))
HLTriggerOfflineHeavyFlavor_PACKAGE := self/src/HLTriggerOffline/HeavyFlavor/src
ALL_PRODS += HLTriggerOfflineHeavyFlavor
HLTriggerOfflineHeavyFlavor_CLASS := LIBRARY
HLTriggerOffline/HeavyFlavor_forbigobj+=HLTriggerOfflineHeavyFlavor
HLTriggerOfflineHeavyFlavor_INIT_FUNC        += $$(eval $$(call Library,HLTriggerOfflineHeavyFlavor,src/HLTriggerOffline/HeavyFlavor/src,src_HLTriggerOffline_HeavyFlavor_src,$(SCRAMSTORENAME_BIN),,$(SCRAMSTORENAME_LIB),$(SCRAMSTORENAME_LOGS)))
endif
ifeq ($(strip $(EcalPyUtils)),)
EcalPyUtils := self/src/CondCore/EcalPlugins/plugins
PLUGINS:=yes
EcalPyUtils_files := $(patsubst src/CondCore/EcalPlugins/plugins/%,%,$(foreach file,EcalPyUtils.cc,$(eval xfile:=$(wildcard src/CondCore/EcalPlugins/plugins/$(file)))$(if $(xfile),$(xfile),$(warning No such file exists: src/CondCore/EcalPlugins/plugins/$(file). Please fix src/CondCore/EcalPlugins/plugins/BuildFile.))))
EcalPyUtils_BuildFile    := $(WORKINGDIR)/cache/bf/src/CondCore/EcalPlugins/plugins/BuildFile
EcalPyUtils_LOC_FLAGS_CXXFLAGS   := -Wno-sign-compare -Wno-unused-variable
EcalPyUtils_LOC_USE := self  CondCore/Utilities CondFormats/EcalObjects CondTools/Ecal DataFormats/EcalDetId boost boost_python
EcalPyUtils_PRE_INIT_FUNC += $$(eval $$(call edmPlugin,EcalPyUtils,EcalPyUtils,$(SCRAMSTORENAME_LIB),src/CondCore/EcalPlugins/plugins))
EcalPyUtils_PACKAGE := self/src/CondCore/EcalPlugins/plugins
ALL_PRODS += EcalPyUtils
CondCore/EcalPlugins_forbigobj+=EcalPyUtils
EcalPyUtils_INIT_FUNC        += $$(eval $$(call Library,EcalPyUtils,src/CondCore/EcalPlugins/plugins,src_CondCore_EcalPlugins_plugins,$(SCRAMSTORENAME_BIN),,$(SCRAMSTORENAME_LIB),$(SCRAMSTORENAME_LOGS)))
EcalPyUtils_CLASS := LIBRARY
else
$(eval $(call MultipleWarningMsg,EcalPyUtils,src/CondCore/EcalPlugins/plugins))
endif
ifeq ($(strip $(EcalCondObjectContainer_EcalTPGCrystalStatusCode_toXML)),)
EcalCondObjectContainer_EcalTPGCrystalStatusCode_toXML := self/src/CondCore/EcalPlugins/plugins
PLUGINS:=yes
EcalCondObjectContainer_EcalTPGCrystalStatusCode_toXML_files := $(patsubst src/CondCore/EcalPlugins/plugins/%,%,$(foreach file,EcalCondObjectContainer_EcalTPGCrystalStatusCode_toXML.cc,$(eval xfile:=$(wildcard src/CondCore/EcalPlugins/plugins/$(file)))$(if $(xfile),$(xfile),$(warning No such file exists: src/CondCore/EcalPlugins/plugins/$(file). Please fix src/CondCore/EcalPlugins/plugins/BuildFile.))))
EcalCondObjectContainer_EcalTPGCrystalStatusCode_toXML_BuildFile    := $(WORKINGDIR)/cache/bf/src/CondCore/EcalPlugins/plugins/BuildFile
EcalCondObjectContainer_EcalTPGCrystalStatusCode_toXML_LOC_FLAGS_CXXFLAGS   := -Wno-sign-compare -Wno-unused-variable
EcalCondObjectContainer_EcalTPGCrystalStatusCode_toXML_LOC_USE := self  CondCore/Utilities CondCore/CondDB CondFormats/Common boost_python
EcalCondObjectContainer_EcalTPGCrystalStatusCode_toXML_PRE_INIT_FUNC += $$(eval $$(call edmPlugin,EcalCondObjectContainer_EcalTPGCrystalStatusCode_toXML,EcalCondObjectContainer_EcalTPGCrystalStatusCode_toXML,$(SCRAMSTORENAME_LIB),src/CondCore/EcalPlugins/plugins))
EcalCondObjectContainer_EcalTPGCrystalStatusCode_toXML_PACKAGE := self/src/CondCore/EcalPlugins/plugins
ALL_PRODS += EcalCondObjectContainer_EcalTPGCrystalStatusCode_toXML
CondCore/EcalPlugins_forbigobj+=EcalCondObjectContainer_EcalTPGCrystalStatusCode_toXML
EcalCondObjectContainer_EcalTPGCrystalStatusCode_toXML_INIT_FUNC        += $$(eval $$(call Library,EcalCondObjectContainer_EcalTPGCrystalStatusCode_toXML,src/CondCore/EcalPlugins/plugins,src_CondCore_EcalPlugins_plugins,$(SCRAMSTORENAME_BIN),,$(SCRAMSTORENAME_LIB),$(SCRAMSTORENAME_LOGS)))
EcalCondObjectContainer_EcalTPGCrystalStatusCode_toXML_CLASS := LIBRARY
else
$(eval $(call MultipleWarningMsg,EcalCondObjectContainer_EcalTPGCrystalStatusCode_toXML,src/CondCore/EcalPlugins/plugins))
endif
ALL_COMMONRULES += src_CondCore_EcalPlugins_plugins
src_CondCore_EcalPlugins_plugins_parent := CondCore/EcalPlugins
src_CondCore_EcalPlugins_plugins_INIT_FUNC += $$(eval $$(call CommonProductRules,src_CondCore_EcalPlugins_plugins,src/CondCore/EcalPlugins/plugins,PLUGINS))
ifeq ($(strip $(DataFormats/L1Trigger)),)
ALL_COMMONRULES += src_DataFormats_L1Trigger_src
src_DataFormats_L1Trigger_src_parent := DataFormats/L1Trigger
src_DataFormats_L1Trigger_src_INIT_FUNC := $$(eval $$(call CommonProductRules,src_DataFormats_L1Trigger_src,src/DataFormats/L1Trigger/src,LIBRARY))
DataFormatsL1Trigger := self/DataFormats/L1Trigger
DataFormats/L1Trigger := DataFormatsL1Trigger
DataFormatsL1Trigger_files := $(patsubst src/DataFormats/L1Trigger/src/%,%,$(wildcard $(foreach dir,src/DataFormats/L1Trigger/src ,$(foreach ext,$(SRC_FILES_SUFFIXES),$(dir)/*.$(ext)))))
DataFormatsL1Trigger_BuildFile    := $(WORKINGDIR)/cache/bf/src/DataFormats/L1Trigger/BuildFile
DataFormatsL1Trigger_LOC_USE := self  DataFormats/Candidate DataFormats/Common DataFormats/L1GlobalMuonTrigger
DataFormatsL1Trigger_LCGDICTS  := x 
DataFormatsL1Trigger_PRE_INIT_FUNC += $$(eval $$(call LCGDict,DataFormatsL1Trigger,src/DataFormats/L1Trigger/src/classes.h,src/DataFormats/L1Trigger/src/classes_def.xml,$(SCRAMSTORENAME_LIB),$(GENREFLEX_ARGS) --fail_on_warnings,))
DataFormatsL1Trigger_EX_LIB   := DataFormatsL1Trigger
DataFormatsL1Trigger_EX_USE   := $(foreach d,$(DataFormatsL1Trigger_LOC_USE),$(if $($(d)_EX_FLAGS_NO_RECURSIVE_EXPORT),,$d))
DataFormatsL1Trigger_PACKAGE := self/src/DataFormats/L1Trigger/src
ALL_PRODS += DataFormatsL1Trigger
DataFormatsL1Trigger_CLASS := LIBRARY
DataFormats/L1Trigger_forbigobj+=DataFormatsL1Trigger
DataFormatsL1Trigger_INIT_FUNC        += $$(eval $$(call Library,DataFormatsL1Trigger,src/DataFormats/L1Trigger/src,src_DataFormats_L1Trigger_src,$(SCRAMSTORENAME_BIN),,$(SCRAMSTORENAME_LIB),$(SCRAMSTORENAME_LOGS)))
endif
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
ifeq ($(strip $(L1TriggerL1TCaloLayer1Auto)),)
L1TriggerL1TCaloLayer1Auto := self/src/L1Trigger/L1TCaloLayer1/plugins
PLUGINS:=yes
L1TriggerL1TCaloLayer1Auto_files := $(patsubst src/L1Trigger/L1TCaloLayer1/plugins/%,%,$(wildcard $(foreach dir,src/L1Trigger/L1TCaloLayer1/plugins ,$(foreach ext,$(SRC_FILES_SUFFIXES),$(dir)/*.$(ext)))))
L1TriggerL1TCaloLayer1Auto_BuildFile    := $(WORKINGDIR)/cache/bf/src/L1Trigger/L1TCaloLayer1/plugins/BuildFile
L1TriggerL1TCaloLayer1Auto_LOC_USE := self  FWCore/Framework FWCore/ParameterSet FWCore/PluginManager FWCore/MessageLogger DataFormats/HcalDigi DataFormats/EcalDigi CondFormats/L1TObjects CondFormats/DataRecord DataFormats/L1TCalorimeter L1Trigger/L1TCalorimeter L1Trigger/L1TCaloLayer1
L1TriggerL1TCaloLayer1Auto_PRE_INIT_FUNC += $$(eval $$(call edmPlugin,L1TriggerL1TCaloLayer1Auto,L1TriggerL1TCaloLayer1Auto,$(SCRAMSTORENAME_LIB),src/L1Trigger/L1TCaloLayer1/plugins))
L1TriggerL1TCaloLayer1Auto_PACKAGE := self/src/L1Trigger/L1TCaloLayer1/plugins
ALL_PRODS += L1TriggerL1TCaloLayer1Auto
L1Trigger/L1TCaloLayer1_forbigobj+=L1TriggerL1TCaloLayer1Auto
L1TriggerL1TCaloLayer1Auto_INIT_FUNC        += $$(eval $$(call Library,L1TriggerL1TCaloLayer1Auto,src/L1Trigger/L1TCaloLayer1/plugins,src_L1Trigger_L1TCaloLayer1_plugins,$(SCRAMSTORENAME_BIN),,$(SCRAMSTORENAME_LIB),$(SCRAMSTORENAME_LOGS)))
L1TriggerL1TCaloLayer1Auto_CLASS := LIBRARY
else
$(eval $(call MultipleWarningMsg,L1TriggerL1TCaloLayer1Auto,src/L1Trigger/L1TCaloLayer1/plugins))
endif
ALL_COMMONRULES += src_L1Trigger_L1TCaloLayer1_plugins
src_L1Trigger_L1TCaloLayer1_plugins_parent := L1Trigger/L1TCaloLayer1
src_L1Trigger_L1TCaloLayer1_plugins_INIT_FUNC += $$(eval $$(call CommonProductRules,src_L1Trigger_L1TCaloLayer1_plugins,src/L1Trigger/L1TCaloLayer1/plugins,PLUGINS))
ifeq ($(strip $(EventFilterCSCTFRawToDigiPlugins)),)
EventFilterCSCTFRawToDigiPlugins := self/src/EventFilter/CSCTFRawToDigi/plugins
PLUGINS:=yes
EventFilterCSCTFRawToDigiPlugins_files := $(patsubst src/EventFilter/CSCTFRawToDigi/plugins/%,%,$(foreach file,*.cc,$(eval xfile:=$(wildcard src/EventFilter/CSCTFRawToDigi/plugins/$(file)))$(if $(xfile),$(xfile),$(warning No such file exists: src/EventFilter/CSCTFRawToDigi/plugins/$(file). Please fix src/EventFilter/CSCTFRawToDigi/plugins/BuildFile.))))
EventFilterCSCTFRawToDigiPlugins_BuildFile    := $(WORKINGDIR)/cache/bf/src/EventFilter/CSCTFRawToDigi/plugins/BuildFile
EventFilterCSCTFRawToDigiPlugins_LOC_USE := self  EventFilter/CSCTFRawToDigi FWCore/Utilities
EventFilterCSCTFRawToDigiPlugins_PRE_INIT_FUNC += $$(eval $$(call edmPlugin,EventFilterCSCTFRawToDigiPlugins,EventFilterCSCTFRawToDigiPlugins,$(SCRAMSTORENAME_LIB),src/EventFilter/CSCTFRawToDigi/plugins))
EventFilterCSCTFRawToDigiPlugins_PACKAGE := self/src/EventFilter/CSCTFRawToDigi/plugins
ALL_PRODS += EventFilterCSCTFRawToDigiPlugins
EventFilter/CSCTFRawToDigi_forbigobj+=EventFilterCSCTFRawToDigiPlugins
EventFilterCSCTFRawToDigiPlugins_INIT_FUNC        += $$(eval $$(call Library,EventFilterCSCTFRawToDigiPlugins,src/EventFilter/CSCTFRawToDigi/plugins,src_EventFilter_CSCTFRawToDigi_plugins,$(SCRAMSTORENAME_BIN),,$(SCRAMSTORENAME_LIB),$(SCRAMSTORENAME_LOGS)))
EventFilterCSCTFRawToDigiPlugins_CLASS := LIBRARY
else
$(eval $(call MultipleWarningMsg,EventFilterCSCTFRawToDigiPlugins,src/EventFilter/CSCTFRawToDigi/plugins))
endif
ALL_COMMONRULES += src_EventFilter_CSCTFRawToDigi_plugins
src_EventFilter_CSCTFRawToDigi_plugins_parent := EventFilter/CSCTFRawToDigi
src_EventFilter_CSCTFRawToDigi_plugins_INIT_FUNC += $$(eval $$(call CommonProductRules,src_EventFilter_CSCTFRawToDigi_plugins,src/EventFilter/CSCTFRawToDigi/plugins,PLUGINS))
ifeq ($(strip $(L1TriggerL1TMuonEndCapPlugins)),)
L1TriggerL1TMuonEndCapPlugins := self/src/L1Trigger/L1TMuonEndCap/plugins
PLUGINS:=yes
L1TriggerL1TMuonEndCapPlugins_files := $(patsubst src/L1Trigger/L1TMuonEndCap/plugins/%,%,$(foreach file,*.cc,$(eval xfile:=$(wildcard src/L1Trigger/L1TMuonEndCap/plugins/$(file)))$(if $(xfile),$(xfile),$(warning No such file exists: src/L1Trigger/L1TMuonEndCap/plugins/$(file). Please fix src/L1Trigger/L1TMuonEndCap/plugins/BuildFile.))))
L1TriggerL1TMuonEndCapPlugins_BuildFile    := $(WORKINGDIR)/cache/bf/src/L1Trigger/L1TMuonEndCap/plugins/BuildFile
L1TriggerL1TMuonEndCapPlugins_LOC_USE := self  L1Trigger/L1TMuonEndCap CondFormats/L1TObjects CondFormats/DataRecord FWCore/ServiceRegistry CondCore/DBOutputService root
L1TriggerL1TMuonEndCapPlugins_PRE_INIT_FUNC += $$(eval $$(call edmPlugin,L1TriggerL1TMuonEndCapPlugins,L1TriggerL1TMuonEndCapPlugins,$(SCRAMSTORENAME_LIB),src/L1Trigger/L1TMuonEndCap/plugins))
L1TriggerL1TMuonEndCapPlugins_PACKAGE := self/src/L1Trigger/L1TMuonEndCap/plugins
ALL_PRODS += L1TriggerL1TMuonEndCapPlugins
L1Trigger/L1TMuonEndCap_forbigobj+=L1TriggerL1TMuonEndCapPlugins
L1TriggerL1TMuonEndCapPlugins_INIT_FUNC        += $$(eval $$(call Library,L1TriggerL1TMuonEndCapPlugins,src/L1Trigger/L1TMuonEndCap/plugins,src_L1Trigger_L1TMuonEndCap_plugins,$(SCRAMSTORENAME_BIN),,$(SCRAMSTORENAME_LIB),$(SCRAMSTORENAME_LOGS)))
L1TriggerL1TMuonEndCapPlugins_CLASS := LIBRARY
else
$(eval $(call MultipleWarningMsg,L1TriggerL1TMuonEndCapPlugins,src/L1Trigger/L1TMuonEndCap/plugins))
endif
ALL_COMMONRULES += src_L1Trigger_L1TMuonEndCap_plugins
src_L1Trigger_L1TMuonEndCap_plugins_parent := L1Trigger/L1TMuonEndCap
src_L1Trigger_L1TMuonEndCap_plugins_INIT_FUNC += $$(eval $$(call CommonProductRules,src_L1Trigger_L1TMuonEndCap_plugins,src/L1Trigger/L1TMuonEndCap/plugins,PLUGINS))
ifeq ($(strip $(HLTriggerOffline/Muon)),)
ALL_COMMONRULES += src_HLTriggerOffline_Muon_src
src_HLTriggerOffline_Muon_src_parent := HLTriggerOffline/Muon
src_HLTriggerOffline_Muon_src_INIT_FUNC := $$(eval $$(call CommonProductRules,src_HLTriggerOffline_Muon_src,src/HLTriggerOffline/Muon/src,LIBRARY))
HLTriggerOfflineMuon := self/HLTriggerOffline/Muon
HLTriggerOffline/Muon := HLTriggerOfflineMuon
HLTriggerOfflineMuon_files := $(patsubst src/HLTriggerOffline/Muon/src/%,%,$(wildcard $(foreach dir,src/HLTriggerOffline/Muon/src ,$(foreach ext,$(SRC_FILES_SUFFIXES),$(dir)/*.$(ext)))))
HLTriggerOfflineMuon_BuildFile    := $(WORKINGDIR)/cache/bf/src/HLTriggerOffline/Muon/BuildFile
HLTriggerOfflineMuon_LOC_USE := self  DQMServices/Core FWCore/Framework FWCore/PluginManager FWCore/ParameterSet DataFormats/MuonReco DataFormats/HepMCCandidate DataFormats/RecoCandidate DataFormats/L1GlobalMuonTrigger HLTrigger/HLTcore CommonTools/Utils root DataFormats/CLHEP DataFormats/GeometrySurface DataFormats/L1Trigger DataFormats/Math DataFormats/TrackReco FWCore/MessageLogger FWCore/Utilities Geometry/CommonDetUnit Geometry/Records MagneticField/Engine MagneticField/Records RecoMuon/DetLayers RecoMuon/Records TrackingTools/DetLayers TrackingTools/GeomPropagators TrackingTools/KalmanUpdators TrackingTools/PatternTools TrackingTools/Records TrackingTools/TrajectoryState
HLTriggerOfflineMuon_PRE_INIT_FUNC += $$(eval $$(call edmPlugin,HLTriggerOfflineMuon,HLTriggerOfflineMuon,$(SCRAMSTORENAME_LIB),src/HLTriggerOffline/Muon/src))
HLTriggerOfflineMuon_PACKAGE := self/src/HLTriggerOffline/Muon/src
ALL_PRODS += HLTriggerOfflineMuon
HLTriggerOfflineMuon_CLASS := LIBRARY
HLTriggerOffline/Muon_forbigobj+=HLTriggerOfflineMuon
HLTriggerOfflineMuon_INIT_FUNC        += $$(eval $$(call Library,HLTriggerOfflineMuon,src/HLTriggerOffline/Muon/src,src_HLTriggerOffline_Muon_src,$(SCRAMSTORENAME_BIN),,$(SCRAMSTORENAME_LIB),$(SCRAMSTORENAME_LOGS)))
endif
ifeq ($(strip $(CondCore/Utilities)),)
ALL_COMMONRULES += src_CondCore_Utilities_src
src_CondCore_Utilities_src_parent := CondCore/Utilities
src_CondCore_Utilities_src_INIT_FUNC := $$(eval $$(call CommonProductRules,src_CondCore_Utilities_src,src/CondCore/Utilities/src,LIBRARY))
CondCoreUtilities := self/CondCore/Utilities
CondCore/Utilities := CondCoreUtilities
CondCoreUtilities_files := $(patsubst src/CondCore/Utilities/src/%,%,$(wildcard $(foreach dir,src/CondCore/Utilities/src ,$(foreach ext,$(SRC_FILES_SUFFIXES),$(dir)/*.$(ext)))))
CondCoreUtilities_BuildFile    := $(WORKINGDIR)/cache/bf/src/CondCore/Utilities/BuildFile
CondCoreUtilities_LOC_FLAGS_CXXFLAGS   := -Wno-sign-compare -Wno-unused-variable -Os
CondCoreUtilities_LOC_USE := self  FWCore/Utilities FWCore/PluginManager FWCore/MessageLogger FWCore/Framework FWCore/Concurrency boost boost_program_options CondCore/CondDB CondFormats/HLTObjects CondFormats/Alignment CondFormats/BeamSpotObjects CondFormats/CastorObjects CondFormats/HIObjects CondFormats/CSCObjects CondFormats/DTObjects CondFormats/ESObjects CondFormats/EcalObjects CondFormats/EgammaObjects CondFormats/Luminosity CondFormats/HcalObjects CondFormats/JetMETObjects CondFormats/L1TObjects CondFormats/PhysicsToolsObjects CondFormats/GeometryObjects CondFormats/RecoMuonObjects CondFormats/RPCObjects CondFormats/RunInfo CondFormats/SiPixelObjects CondFormats/SiStripObjects CondFormats/Common CondFormats/BTauObjects CondFormats/MFObjects
CondCoreUtilities_LCGDICTS  := x 
CondCoreUtilities_PRE_INIT_FUNC += $$(eval $$(call LCGDict,CondCoreUtilities,src/CondCore/Utilities/src/classes.h,src/CondCore/Utilities/src/classes_def.xml,$(SCRAMSTORENAME_LIB),$(GENREFLEX_ARGS) --fail_on_warnings,))
CondCoreUtilities_EX_LIB   := CondCoreUtilities
CondCoreUtilities_EX_USE   := $(foreach d,$(CondCoreUtilities_LOC_USE),$(if $($(d)_EX_FLAGS_NO_RECURSIVE_EXPORT),,$d))
CondCoreUtilities_PACKAGE := self/src/CondCore/Utilities/src
ALL_PRODS += CondCoreUtilities
CondCoreUtilities_CLASS := LIBRARY
CondCore/Utilities_forbigobj+=CondCoreUtilities
CondCoreUtilities_INIT_FUNC        += $$(eval $$(call Library,CondCoreUtilities,src/CondCore/Utilities/src,src_CondCore_Utilities_src,$(SCRAMSTORENAME_BIN),,$(SCRAMSTORENAME_LIB),$(SCRAMSTORENAME_LOGS)))
endif
ifeq ($(strip $(CaloOnlineToolsEcalToolsPlugins)),)
CaloOnlineToolsEcalToolsPlugins := self/src/CaloOnlineTools/EcalTools/plugins
PLUGINS:=yes
CaloOnlineToolsEcalToolsPlugins_files := $(patsubst src/CaloOnlineTools/EcalTools/plugins/%,%,$(foreach file,*.cc,$(eval xfile:=$(wildcard src/CaloOnlineTools/EcalTools/plugins/$(file)))$(if $(xfile),$(xfile),$(warning No such file exists: src/CaloOnlineTools/EcalTools/plugins/$(file). Please fix src/CaloOnlineTools/EcalTools/plugins/BuildFile.))))
CaloOnlineToolsEcalToolsPlugins_BuildFile    := $(WORKINGDIR)/cache/bf/src/CaloOnlineTools/EcalTools/plugins/BuildFile
CaloOnlineToolsEcalToolsPlugins_LOC_USE := self  CaloOnlineTools/EcalTools FWCore/Framework FWCore/ParameterSet FWCore/Utilities CondFormats/EcalObjects CondFormats/L1TObjects DataFormats/DetId DataFormats/EcalDigi DataFormats/EcalRawData DataFormats/EcalRecHit DataFormats/FEDRawData DataFormats/L1GlobalMuonTrigger DataFormats/L1GlobalTrigger Geometry/EcalMapping Geometry/CaloTopology HLTrigger/HLTcore CommonTools/UtilAlgos TrackingTools/TrackAssociator rootgraphics rootcore
CaloOnlineToolsEcalToolsPlugins_PRE_INIT_FUNC += $$(eval $$(call edmPlugin,CaloOnlineToolsEcalToolsPlugins,CaloOnlineToolsEcalToolsPlugins,$(SCRAMSTORENAME_LIB),src/CaloOnlineTools/EcalTools/plugins))
CaloOnlineToolsEcalToolsPlugins_PACKAGE := self/src/CaloOnlineTools/EcalTools/plugins
ALL_PRODS += CaloOnlineToolsEcalToolsPlugins
CaloOnlineTools/EcalTools_forbigobj+=CaloOnlineToolsEcalToolsPlugins
CaloOnlineToolsEcalToolsPlugins_INIT_FUNC        += $$(eval $$(call Library,CaloOnlineToolsEcalToolsPlugins,src/CaloOnlineTools/EcalTools/plugins,src_CaloOnlineTools_EcalTools_plugins,$(SCRAMSTORENAME_BIN),,$(SCRAMSTORENAME_LIB),$(SCRAMSTORENAME_LOGS)))
CaloOnlineToolsEcalToolsPlugins_CLASS := LIBRARY
else
$(eval $(call MultipleWarningMsg,CaloOnlineToolsEcalToolsPlugins,src/CaloOnlineTools/EcalTools/plugins))
endif
ALL_COMMONRULES += src_CaloOnlineTools_EcalTools_plugins
src_CaloOnlineTools_EcalTools_plugins_parent := CaloOnlineTools/EcalTools
src_CaloOnlineTools_EcalTools_plugins_INIT_FUNC += $$(eval $$(call CommonProductRules,src_CaloOnlineTools_EcalTools_plugins,src/CaloOnlineTools/EcalTools/plugins,PLUGINS))
ifeq ($(strip $(HLTrigger/JetMET)),)
ALL_COMMONRULES += src_HLTrigger_JetMET_src
src_HLTrigger_JetMET_src_parent := HLTrigger/JetMET
src_HLTrigger_JetMET_src_INIT_FUNC := $$(eval $$(call CommonProductRules,src_HLTrigger_JetMET_src,src/HLTrigger/JetMET/src,LIBRARY))
HLTriggerJetMET := self/HLTrigger/JetMET
HLTrigger/JetMET := HLTriggerJetMET
HLTriggerJetMET_files := $(patsubst src/HLTrigger/JetMET/src/%,%,$(wildcard $(foreach dir,src/HLTrigger/JetMET/src ,$(foreach ext,$(SRC_FILES_SUFFIXES),$(dir)/*.$(ext)))))
HLTriggerJetMET_BuildFile    := $(WORKINGDIR)/cache/bf/src/HLTrigger/JetMET/BuildFile
HLTriggerJetMET_LOC_USE := self  DataFormats/Common DataFormats/BTauReco DataFormats/HLTReco DataFormats/HcalRecHit DataFormats/JetReco DataFormats/METReco DataFormats/Scouting DataFormats/Math Geometry/Records Geometry/CaloTopology FWCore/Framework FWCore/MessageLogger FWCore/ParameterSet FWCore/PluginManager FWCore/Utilities RecoMET/METAlgorithms HLTrigger/HLTcore RecoJets/JetProducers TrackingTools/IPTools TrackingTools/TransientTrack
HLTriggerJetMET_EX_LIB   := HLTriggerJetMET
HLTriggerJetMET_EX_USE   := $(foreach d,$(HLTriggerJetMET_LOC_USE),$(if $($(d)_EX_FLAGS_NO_RECURSIVE_EXPORT),,$d))
HLTriggerJetMET_PACKAGE := self/src/HLTrigger/JetMET/src
ALL_PRODS += HLTriggerJetMET
HLTriggerJetMET_CLASS := LIBRARY
HLTrigger/JetMET_forbigobj+=HLTriggerJetMET
HLTriggerJetMET_INIT_FUNC        += $$(eval $$(call Library,HLTriggerJetMET,src/HLTrigger/JetMET/src,src_HLTrigger_JetMET_src,$(SCRAMSTORENAME_BIN),,$(SCRAMSTORENAME_LIB),$(SCRAMSTORENAME_LOGS)))
endif
ifeq ($(strip $(L1TriggerL1TCalorimeterPlugins)),)
L1TriggerL1TCalorimeterPlugins := self/src/L1Trigger/L1TCalorimeter/plugins
PLUGINS:=yes
L1TriggerL1TCalorimeterPlugins_files := $(patsubst src/L1Trigger/L1TCalorimeter/plugins/%,%,$(foreach file,*.cc,$(eval xfile:=$(wildcard src/L1Trigger/L1TCalorimeter/plugins/$(file)))$(if $(xfile),$(xfile),$(warning No such file exists: src/L1Trigger/L1TCalorimeter/plugins/$(file). Please fix src/L1Trigger/L1TCalorimeter/plugins/BuildFile.))))
L1TriggerL1TCalorimeterPlugins_BuildFile    := $(WORKINGDIR)/cache/bf/src/L1Trigger/L1TCalorimeter/plugins/BuildFile
L1TriggerL1TCalorimeterPlugins_LOC_USE := self  FWCore/Framework FWCore/PluginManager FWCore/ParameterSet FWCore/Utilities FWCore/ServiceRegistry CommonTools/UtilAlgos DataFormats/EcalDigi DataFormats/EcalDetId DataFormats/HcalDigi DataFormats/HcalDetId CalibFormats/CaloTPG CalibCalorimetry/EcalTPGTools DataFormats/L1Trigger DataFormats/L1CaloTrigger DataFormats/L1TCalorimeter DataFormats/JetReco DataFormats/METReco CondFormats/L1TObjects CondFormats/DataRecord L1Trigger/L1TCalorimeter CondTools/L1Trigger
L1TriggerL1TCalorimeterPlugins_PRE_INIT_FUNC += $$(eval $$(call edmPlugin,L1TriggerL1TCalorimeterPlugins,L1TriggerL1TCalorimeterPlugins,$(SCRAMSTORENAME_LIB),src/L1Trigger/L1TCalorimeter/plugins))
L1TriggerL1TCalorimeterPlugins_PACKAGE := self/src/L1Trigger/L1TCalorimeter/plugins
ALL_PRODS += L1TriggerL1TCalorimeterPlugins
L1Trigger/L1TCalorimeter_forbigobj+=L1TriggerL1TCalorimeterPlugins
L1TriggerL1TCalorimeterPlugins_INIT_FUNC        += $$(eval $$(call Library,L1TriggerL1TCalorimeterPlugins,src/L1Trigger/L1TCalorimeter/plugins,src_L1Trigger_L1TCalorimeter_plugins,$(SCRAMSTORENAME_BIN),,$(SCRAMSTORENAME_LIB),$(SCRAMSTORENAME_LOGS)))
L1TriggerL1TCalorimeterPlugins_CLASS := LIBRARY
else
$(eval $(call MultipleWarningMsg,L1TriggerL1TCalorimeterPlugins,src/L1Trigger/L1TCalorimeter/plugins))
endif
ALL_COMMONRULES += src_L1Trigger_L1TCalorimeter_plugins
src_L1Trigger_L1TCalorimeter_plugins_parent := L1Trigger/L1TCalorimeter
src_L1Trigger_L1TCalorimeter_plugins_INIT_FUNC += $$(eval $$(call CommonProductRules,src_L1Trigger_L1TCalorimeter_plugins,src/L1Trigger/L1TCalorimeter/plugins,PLUGINS))
ifeq ($(strip $(L1TriggerL1TNtuplePlugins)),)
L1TriggerL1TNtuplePlugins := self/src/L1Trigger/L1TNtuples/plugins
PLUGINS:=yes
L1TriggerL1TNtuplePlugins_files := $(patsubst src/L1Trigger/L1TNtuples/plugins/%,%,$(foreach file,*.cc,$(eval xfile:=$(wildcard src/L1Trigger/L1TNtuples/plugins/$(file)))$(if $(xfile),$(xfile),$(warning No such file exists: src/L1Trigger/L1TNtuples/plugins/$(file). Please fix src/L1Trigger/L1TNtuples/plugins/BuildFile.))))
L1TriggerL1TNtuplePlugins_BuildFile    := $(WORKINGDIR)/cache/bf/src/L1Trigger/L1TNtuples/plugins/BuildFile
L1TriggerL1TNtuplePlugins_LOC_USE := self  root boost FWCore/Framework FWCore/PluginManager FWCore/ParameterSet CommonTools/UtilAlgos CondFormats/DataRecord CondFormats/EcalObjects CondFormats/L1TObjects DataFormats/L1Trigger DataFormats/L1TMuon DataFormats/L1GlobalTrigger DataFormats/L1TCalorimeter DataFormats/L1TGlobal DataFormats/L1GlobalMuonTrigger DataFormats/L1GlobalCaloTrigger DataFormats/L1CSCTrackFinder DataFormats/L1DTTrackFinder DataFormats/HcalDigi DataFormats/EcalDigi DataFormats/EcalRecHit DataFormats/RPCRecHit DataFormats/CSCRecHit DataFormats/JetReco DataFormats/METReco DataFormats/EgammaReco DataFormats/VertexReco DataFormats/MuonReco DataFormats/TrackReco RecoLocalCalo/EcalRecAlgos Geometry/DTGeometry Geometry/DTGeometryBuilder Geometry/CSCGeometry Geometry/CSCGeometryBuilder Geometry/RPCGeometry Geometry/TrackerGeometryBuilder TrackingTools/TransientTrack TrackingTools/TrajectoryState RecoVertex/KalmanVertexFit RecoMuon/TrackingTools L1Trigger/CSCTrackFinder L1Trigger/GlobalTriggerAnalyzer JetMETCorrections/Objects JetMETCorrections/Algorithms PhysicsTools/Utilities HLTrigger/HLTcore L1Trigger/L1TNtuples
L1TriggerL1TNtuplePlugins_PRE_INIT_FUNC += $$(eval $$(call edmPlugin,L1TriggerL1TNtuplePlugins,L1TriggerL1TNtuplePlugins,$(SCRAMSTORENAME_LIB),src/L1Trigger/L1TNtuples/plugins))
L1TriggerL1TNtuplePlugins_PACKAGE := self/src/L1Trigger/L1TNtuples/plugins
ALL_PRODS += L1TriggerL1TNtuplePlugins
L1Trigger/L1TNtuples_forbigobj+=L1TriggerL1TNtuplePlugins
L1TriggerL1TNtuplePlugins_INIT_FUNC        += $$(eval $$(call Library,L1TriggerL1TNtuplePlugins,src/L1Trigger/L1TNtuples/plugins,src_L1Trigger_L1TNtuples_plugins,$(SCRAMSTORENAME_BIN),,$(SCRAMSTORENAME_LIB),$(SCRAMSTORENAME_LOGS)))
L1TriggerL1TNtuplePlugins_CLASS := LIBRARY
else
$(eval $(call MultipleWarningMsg,L1TriggerL1TNtuplePlugins,src/L1Trigger/L1TNtuples/plugins))
endif
ALL_COMMONRULES += src_L1Trigger_L1TNtuples_plugins
src_L1Trigger_L1TNtuples_plugins_parent := L1Trigger/L1TNtuples
src_L1Trigger_L1TNtuples_plugins_INIT_FUNC += $$(eval $$(call CommonProductRules,src_L1Trigger_L1TNtuples_plugins,src/L1Trigger/L1TNtuples/plugins,PLUGINS))
ifeq ($(strip $(HLTrigger/HLTfilters)),)
ALL_COMMONRULES += src_HLTrigger_HLTfilters_src
src_HLTrigger_HLTfilters_src_parent := HLTrigger/HLTfilters
src_HLTrigger_HLTfilters_src_INIT_FUNC := $$(eval $$(call CommonProductRules,src_HLTrigger_HLTfilters_src,src/HLTrigger/HLTfilters/src,LIBRARY))
HLTriggerHLTfilters := self/HLTrigger/HLTfilters
HLTrigger/HLTfilters := HLTriggerHLTfilters
HLTriggerHLTfilters_files := $(patsubst src/HLTrigger/HLTfilters/src/%,%,$(wildcard $(foreach dir,src/HLTrigger/HLTfilters/src ,$(foreach ext,$(SRC_FILES_SUFFIXES),$(dir)/*.$(ext)))))
HLTriggerHLTfilters_BuildFile    := $(WORKINGDIR)/cache/bf/src/HLTrigger/HLTfilters/BuildFile
HLTriggerHLTfilters_LOC_USE := self  boost CommonTools/Utils CondFormats/DataRecord CondFormats/L1TObjects DataFormats/Candidate DataFormats/Common DataFormats/EgammaCandidates DataFormats/HLTReco DataFormats/TauReco DataFormats/JetReco DataFormats/L1GlobalTrigger DataFormats/L1Trigger DataFormats/L1TGlobal DataFormats/METReco DataFormats/RecoCandidate FWCore/Framework FWCore/MessageLogger FWCore/ParameterSet FWCore/Utilities HLTrigger/HLTcore CondFormats/HLTObjects
HLTriggerHLTfilters_PRE_INIT_FUNC += $$(eval $$(call edmPlugin,HLTriggerHLTfilters,HLTriggerHLTfilters,$(SCRAMSTORENAME_LIB),src/HLTrigger/HLTfilters/src))
HLTriggerHLTfilters_PACKAGE := self/src/HLTrigger/HLTfilters/src
ALL_PRODS += HLTriggerHLTfilters
HLTriggerHLTfilters_CLASS := LIBRARY
HLTrigger/HLTfilters_forbigobj+=HLTriggerHLTfilters
HLTriggerHLTfilters_INIT_FUNC        += $$(eval $$(call Library,HLTriggerHLTfilters,src/HLTrigger/HLTfilters/src,src_HLTrigger_HLTfilters_src,$(SCRAMSTORENAME_BIN),,$(SCRAMSTORENAME_LIB),$(SCRAMSTORENAME_LOGS)))
endif
ifeq ($(strip $(ElectroWeakAnalysis/WENu)),)
ALL_COMMONRULES += src_ElectroWeakAnalysis_WENu_src
src_ElectroWeakAnalysis_WENu_src_parent := ElectroWeakAnalysis/WENu
src_ElectroWeakAnalysis_WENu_src_INIT_FUNC := $$(eval $$(call CommonProductRules,src_ElectroWeakAnalysis_WENu_src,src/ElectroWeakAnalysis/WENu/src,LIBRARY))
ElectroWeakAnalysisWENu := self/ElectroWeakAnalysis/WENu
ElectroWeakAnalysis/WENu := ElectroWeakAnalysisWENu
ElectroWeakAnalysisWENu_files := $(patsubst src/ElectroWeakAnalysis/WENu/src/%,%,$(wildcard $(foreach dir,src/ElectroWeakAnalysis/WENu/src ,$(foreach ext,$(SRC_FILES_SUFFIXES),$(dir)/*.$(ext)))))
ElectroWeakAnalysisWENu_BuildFile    := $(WORKINGDIR)/cache/bf/src/ElectroWeakAnalysis/WENu/BuildFile
ElectroWeakAnalysisWENu_LOC_USE := self  FWCore/Framework FWCore/PluginManager FWCore/ParameterSet DataFormats/PatCandidates DataFormats/Common RecoEgamma/EgammaTools RecoLocalCalo/EcalRecAlgos root rootmath rootcore
ElectroWeakAnalysisWENu_PRE_INIT_FUNC += $$(eval $$(call edmPlugin,ElectroWeakAnalysisWENu,ElectroWeakAnalysisWENu,$(SCRAMSTORENAME_LIB),src/ElectroWeakAnalysis/WENu/src))
ElectroWeakAnalysisWENu_PACKAGE := self/src/ElectroWeakAnalysis/WENu/src
ALL_PRODS += ElectroWeakAnalysisWENu
ElectroWeakAnalysisWENu_CLASS := LIBRARY
ElectroWeakAnalysis/WENu_forbigobj+=ElectroWeakAnalysisWENu
ElectroWeakAnalysisWENu_INIT_FUNC        += $$(eval $$(call Library,ElectroWeakAnalysisWENu,src/ElectroWeakAnalysis/WENu/src,src_ElectroWeakAnalysis_WENu_src,$(SCRAMSTORENAME_BIN),,$(SCRAMSTORENAME_LIB),$(SCRAMSTORENAME_LOGS)))
endif
ifeq ($(strip $(L1TriggerL1TCommonAuto)),)
L1TriggerL1TCommonAuto := self/src/L1Trigger/L1TCommon/plugins
PLUGINS:=yes
L1TriggerL1TCommonAuto_files := $(patsubst src/L1Trigger/L1TCommon/plugins/%,%,$(wildcard $(foreach dir,src/L1Trigger/L1TCommon/plugins ,$(foreach ext,$(SRC_FILES_SUFFIXES),$(dir)/*.$(ext)))))
L1TriggerL1TCommonAuto_BuildFile    := $(WORKINGDIR)/cache/bf/src/L1Trigger/L1TCommon/plugins/BuildFile
L1TriggerL1TCommonAuto_LOC_USE := self  FWCore/Framework FWCore/PluginManager FWCore/ParameterSet CondFormats/L1TObjects CondFormats/DataRecord DataFormats/L1Trigger DataFormats/L1TCalorimeter DataFormats/L1TMuon
L1TriggerL1TCommonAuto_PRE_INIT_FUNC += $$(eval $$(call edmPlugin,L1TriggerL1TCommonAuto,L1TriggerL1TCommonAuto,$(SCRAMSTORENAME_LIB),src/L1Trigger/L1TCommon/plugins))
L1TriggerL1TCommonAuto_PACKAGE := self/src/L1Trigger/L1TCommon/plugins
ALL_PRODS += L1TriggerL1TCommonAuto
L1Trigger/L1TCommon_forbigobj+=L1TriggerL1TCommonAuto
L1TriggerL1TCommonAuto_INIT_FUNC        += $$(eval $$(call Library,L1TriggerL1TCommonAuto,src/L1Trigger/L1TCommon/plugins,src_L1Trigger_L1TCommon_plugins,$(SCRAMSTORENAME_BIN),,$(SCRAMSTORENAME_LIB),$(SCRAMSTORENAME_LOGS)))
L1TriggerL1TCommonAuto_CLASS := LIBRARY
else
$(eval $(call MultipleWarningMsg,L1TriggerL1TCommonAuto,src/L1Trigger/L1TCommon/plugins))
endif
ALL_COMMONRULES += src_L1Trigger_L1TCommon_plugins
src_L1Trigger_L1TCommon_plugins_parent := L1Trigger/L1TCommon
src_L1Trigger_L1TCommon_plugins_INIT_FUNC += $$(eval $$(call CommonProductRules,src_L1Trigger_L1TCommon_plugins,src/L1Trigger/L1TCommon/plugins,PLUGINS))
ifeq ($(strip $(L1TriggerHardwareValidationPlugins)),)
L1TriggerHardwareValidationPlugins := self/src/L1Trigger/HardwareValidation/plugins
PLUGINS:=yes
L1TriggerHardwareValidationPlugins_files := $(patsubst src/L1Trigger/HardwareValidation/plugins/%,%,$(foreach file,*.cc,$(eval xfile:=$(wildcard src/L1Trigger/HardwareValidation/plugins/$(file)))$(if $(xfile),$(xfile),$(warning No such file exists: src/L1Trigger/HardwareValidation/plugins/$(file). Please fix src/L1Trigger/HardwareValidation/plugins/BuildFile.))))
L1TriggerHardwareValidationPlugins_BuildFile    := $(WORKINGDIR)/cache/bf/src/L1Trigger/HardwareValidation/plugins/BuildFile
L1TriggerHardwareValidationPlugins_LOC_USE := self  FWCore/Framework FWCore/PluginManager FWCore/ParameterSet FWCore/MessageLogger L1Trigger/HardwareValidation DataFormats/EcalDigi DataFormats/HcalDigi DataFormats/L1CaloTrigger DataFormats/CSCDigi DataFormats/LTCDigi DataFormats/L1DTTrackFinder DataFormats/L1CSCTrackFinder DataFormats/L1GlobalMuonTrigger DataFormats/L1GlobalTrigger DataFormats/L1Trigger DataFormats/FEDRawData L1Trigger/CSCTrackFinder
L1TriggerHardwareValidationPlugins_PRE_INIT_FUNC += $$(eval $$(call edmPlugin,L1TriggerHardwareValidationPlugins,L1TriggerHardwareValidationPlugins,$(SCRAMSTORENAME_LIB),src/L1Trigger/HardwareValidation/plugins))
L1TriggerHardwareValidationPlugins_PACKAGE := self/src/L1Trigger/HardwareValidation/plugins
ALL_PRODS += L1TriggerHardwareValidationPlugins
L1Trigger/HardwareValidation_forbigobj+=L1TriggerHardwareValidationPlugins
L1TriggerHardwareValidationPlugins_INIT_FUNC        += $$(eval $$(call Library,L1TriggerHardwareValidationPlugins,src/L1Trigger/HardwareValidation/plugins,src_L1Trigger_HardwareValidation_plugins,$(SCRAMSTORENAME_BIN),,$(SCRAMSTORENAME_LIB),$(SCRAMSTORENAME_LOGS)))
L1TriggerHardwareValidationPlugins_CLASS := LIBRARY
else
$(eval $(call MultipleWarningMsg,L1TriggerHardwareValidationPlugins,src/L1Trigger/HardwareValidation/plugins))
endif
ALL_COMMONRULES += src_L1Trigger_HardwareValidation_plugins
src_L1Trigger_HardwareValidation_plugins_parent := L1Trigger/HardwareValidation
src_L1Trigger_HardwareValidation_plugins_INIT_FUNC += $$(eval $$(call CommonProductRules,src_L1Trigger_HardwareValidation_plugins,src/L1Trigger/HardwareValidation/plugins,PLUGINS))
ifeq ($(strip $(DataFormats/L1TGlobal)),)
ALL_COMMONRULES += src_DataFormats_L1TGlobal_src
src_DataFormats_L1TGlobal_src_parent := DataFormats/L1TGlobal
src_DataFormats_L1TGlobal_src_INIT_FUNC := $$(eval $$(call CommonProductRules,src_DataFormats_L1TGlobal_src,src/DataFormats/L1TGlobal/src,LIBRARY))
DataFormatsL1TGlobal := self/DataFormats/L1TGlobal
DataFormats/L1TGlobal := DataFormatsL1TGlobal
DataFormatsL1TGlobal_files := $(patsubst src/DataFormats/L1TGlobal/src/%,%,$(wildcard $(foreach dir,src/DataFormats/L1TGlobal/src ,$(foreach ext,$(SRC_FILES_SUFFIXES),$(dir)/*.$(ext)))))
DataFormatsL1TGlobal_BuildFile    := $(WORKINGDIR)/cache/bf/src/DataFormats/L1TGlobal/BuildFile
DataFormatsL1TGlobal_LOC_USE := self  DataFormats/Candidate DataFormats/Common DataFormats/L1Trigger
DataFormatsL1TGlobal_LCGDICTS  := x 
DataFormatsL1TGlobal_PRE_INIT_FUNC += $$(eval $$(call LCGDict,DataFormatsL1TGlobal,src/DataFormats/L1TGlobal/src/classes.h,src/DataFormats/L1TGlobal/src/classes_def.xml,$(SCRAMSTORENAME_LIB),$(GENREFLEX_ARGS) --fail_on_warnings,))
DataFormatsL1TGlobal_EX_LIB   := DataFormatsL1TGlobal
DataFormatsL1TGlobal_EX_USE   := $(foreach d,$(DataFormatsL1TGlobal_LOC_USE),$(if $($(d)_EX_FLAGS_NO_RECURSIVE_EXPORT),,$d))
DataFormatsL1TGlobal_PACKAGE := self/src/DataFormats/L1TGlobal/src
ALL_PRODS += DataFormatsL1TGlobal
DataFormatsL1TGlobal_CLASS := LIBRARY
DataFormats/L1TGlobal_forbigobj+=DataFormatsL1TGlobal
DataFormatsL1TGlobal_INIT_FUNC        += $$(eval $$(call Library,DataFormatsL1TGlobal,src/DataFormats/L1TGlobal/src,src_DataFormats_L1TGlobal_src,$(SCRAMSTORENAME_BIN),,$(SCRAMSTORENAME_LIB),$(SCRAMSTORENAME_LOGS)))
endif
ifeq ($(strip $(L1TriggerL1TGlobalPlugins)),)
L1TriggerL1TGlobalPlugins := self/src/L1Trigger/L1TGlobal/plugins
PLUGINS:=yes
L1TriggerL1TGlobalPlugins_files := $(patsubst src/L1Trigger/L1TGlobal/plugins/%,%,$(foreach file,*.cc,$(eval xfile:=$(wildcard src/L1Trigger/L1TGlobal/plugins/$(file)))$(if $(xfile),$(xfile),$(warning No such file exists: src/L1Trigger/L1TGlobal/plugins/$(file). Please fix src/L1Trigger/L1TGlobal/plugins/BuildFile.))))
L1TriggerL1TGlobalPlugins_BuildFile    := $(WORKINGDIR)/cache/bf/src/L1Trigger/L1TGlobal/plugins/BuildFile
L1TriggerL1TGlobalPlugins_LOC_USE := self  FWCore/Framework FWCore/PluginManager FWCore/ParameterSet DataFormats/L1Trigger CondFormats/L1TObjects CondFormats/DataRecord CondTools/L1Trigger xerces-c utm L1TriggerConfig/L1GtConfigProducers L1Trigger/L1TGlobal L1Trigger/GlobalTrigger
L1TriggerL1TGlobalPlugins_PRE_INIT_FUNC += $$(eval $$(call edmPlugin,L1TriggerL1TGlobalPlugins,L1TriggerL1TGlobalPlugins,$(SCRAMSTORENAME_LIB),src/L1Trigger/L1TGlobal/plugins))
L1TriggerL1TGlobalPlugins_PACKAGE := self/src/L1Trigger/L1TGlobal/plugins
ALL_PRODS += L1TriggerL1TGlobalPlugins
L1Trigger/L1TGlobal_forbigobj+=L1TriggerL1TGlobalPlugins
L1TriggerL1TGlobalPlugins_INIT_FUNC        += $$(eval $$(call Library,L1TriggerL1TGlobalPlugins,src/L1Trigger/L1TGlobal/plugins,src_L1Trigger_L1TGlobal_plugins,$(SCRAMSTORENAME_BIN),,$(SCRAMSTORENAME_LIB),$(SCRAMSTORENAME_LOGS)))
L1TriggerL1TGlobalPlugins_CLASS := LIBRARY
else
$(eval $(call MultipleWarningMsg,L1TriggerL1TGlobalPlugins,src/L1Trigger/L1TGlobal/plugins))
endif
ALL_COMMONRULES += src_L1Trigger_L1TGlobal_plugins
src_L1Trigger_L1TGlobal_plugins_parent := L1Trigger/L1TGlobal
src_L1Trigger_L1TGlobal_plugins_INIT_FUNC += $$(eval $$(call CommonProductRules,src_L1Trigger_L1TGlobal_plugins,src/L1Trigger/L1TGlobal/plugins,PLUGINS))
ifeq ($(strip $(L1Trigger/L1TNtuples)),)
ALL_COMMONRULES += src_L1Trigger_L1TNtuples_src
src_L1Trigger_L1TNtuples_src_parent := L1Trigger/L1TNtuples
src_L1Trigger_L1TNtuples_src_INIT_FUNC := $$(eval $$(call CommonProductRules,src_L1Trigger_L1TNtuples_src,src/L1Trigger/L1TNtuples/src,LIBRARY))
L1TriggerL1TNtuples := self/L1Trigger/L1TNtuples
L1Trigger/L1TNtuples := L1TriggerL1TNtuples
L1TriggerL1TNtuples_files := $(patsubst src/L1Trigger/L1TNtuples/src/%,%,$(wildcard $(foreach dir,src/L1Trigger/L1TNtuples/src ,$(foreach ext,$(SRC_FILES_SUFFIXES),$(dir)/*.$(ext)))))
L1TriggerL1TNtuples_BuildFile    := $(WORKINGDIR)/cache/bf/src/L1Trigger/L1TNtuples/BuildFile
L1TriggerL1TNtuples_LOC_USE := self  FWCore/Framework FWCore/PluginManager FWCore/ParameterSet CommonTools/UtilAlgos root CondFormats/DataRecord CondFormats/EcalObjects DataFormats/L1Trigger DataFormats/L1TMuon DataFormats/L1GlobalTrigger DataFormats/L1GlobalMuonTrigger DataFormats/L1GlobalCaloTrigger DataFormats/L1CSCTrackFinder DataFormats/L1DTTrackFinder DataFormats/HcalDigi DataFormats/EcalDigi DataFormats/EcalRecHit DataFormats/RPCRecHit DataFormats/CSCRecHit DataFormats/JetReco DataFormats/METReco DataFormats/EgammaReco DataFormats/VertexReco DataFormats/MuonReco RecoEgamma/EgammaTools DataFormats/TrackReco RecoLocalCalo/EcalRecAlgos Geometry/DTGeometry Geometry/DTGeometryBuilder Geometry/CSCGeometry Geometry/CSCGeometryBuilder Geometry/RPCGeometry Geometry/TrackerGeometryBuilder TrackingTools/TransientTrack TrackingTools/TrajectoryState RecoVertex/KalmanVertexFit RecoMuon/TrackingTools L1Trigger/CSCTrackFinder L1Trigger/GlobalTriggerAnalyzer JetMETCorrections/Objects JetMETCorrections/Algorithms PhysicsTools/Utilities HLTrigger/HLTcore
L1TriggerL1TNtuples_LCGDICTS  := x 
L1TriggerL1TNtuples_PRE_INIT_FUNC += $$(eval $$(call LCGDict,L1TriggerL1TNtuples,src/L1Trigger/L1TNtuples/src/classes.h,src/L1Trigger/L1TNtuples/src/classes_def.xml,$(SCRAMSTORENAME_LIB),$(GENREFLEX_ARGS) --fail_on_warnings,))
L1TriggerL1TNtuples_EX_LIB   := L1TriggerL1TNtuples
L1TriggerL1TNtuples_EX_USE   := $(foreach d,$(L1TriggerL1TNtuples_LOC_USE),$(if $($(d)_EX_FLAGS_NO_RECURSIVE_EXPORT),,$d))
L1TriggerL1TNtuples_PACKAGE := self/src/L1Trigger/L1TNtuples/src
ALL_PRODS += L1TriggerL1TNtuples
L1TriggerL1TNtuples_CLASS := LIBRARY
L1Trigger/L1TNtuples_forbigobj+=L1TriggerL1TNtuples
L1TriggerL1TNtuples_INIT_FUNC        += $$(eval $$(call Library,L1TriggerL1TNtuples,src/L1Trigger/L1TNtuples/src,src_L1Trigger_L1TNtuples_src,$(SCRAMSTORENAME_BIN),,$(SCRAMSTORENAME_LIB),$(SCRAMSTORENAME_LOGS)))
endif
ifeq ($(strip $(CondFormats/L1TObjects)),)
ALL_COMMONRULES += src_CondFormats_L1TObjects_src
src_CondFormats_L1TObjects_src_parent := CondFormats/L1TObjects
src_CondFormats_L1TObjects_src_INIT_FUNC := $$(eval $$(call CommonProductRules,src_CondFormats_L1TObjects_src,src/CondFormats/L1TObjects/src,LIBRARY))
CondFormatsL1TObjects := self/CondFormats/L1TObjects
CondFormats/L1TObjects := CondFormatsL1TObjects
CondFormatsL1TObjects_files := $(patsubst src/CondFormats/L1TObjects/src/%,%,$(wildcard $(foreach dir,src/CondFormats/L1TObjects/src ,$(foreach ext,$(SRC_FILES_SUFFIXES),$(dir)/*.$(ext)))))
CondFormatsL1TObjects_BuildFile    := $(WORKINGDIR)/cache/bf/src/CondFormats/L1TObjects/BuildFile
CondFormatsL1TObjects_LOC_USE := self  boost CondFormats/Serialization boost_serialization DataFormats/MuonDetId FWCore/ParameterSet FWCore/Utilities DataFormats/L1GlobalMuonTrigger DataFormats/L1GlobalCaloTrigger DataFormats/L1GlobalTrigger DataFormats/StdDictionaries
CondFormatsL1TObjects_LCGDICTS  := x 
CondFormatsL1TObjects_PRE_INIT_FUNC += $$(eval $$(call LCGDict,CondFormatsL1TObjects,src/CondFormats/L1TObjects/src/classes.h,src/CondFormats/L1TObjects/src/classes_def.xml,$(SCRAMSTORENAME_LIB), --fail_on_warnings,))
CondFormatsL1TObjects_PRE_INIT_FUNC += $$(eval $$(call CondSerialization,CondFormatsL1TObjects,src/CondFormats/L1TObjects/src,src/CondFormats/L1TObjects/src/headers.h))
CondFormatsL1TObjects_EX_LIB   := CondFormatsL1TObjects
CondFormatsL1TObjects_EX_USE   := $(foreach d,$(CondFormatsL1TObjects_LOC_USE),$(if $($(d)_EX_FLAGS_NO_RECURSIVE_EXPORT),,$d))
CondFormatsL1TObjects_PACKAGE := self/src/CondFormats/L1TObjects/src
ALL_PRODS += CondFormatsL1TObjects
CondFormatsL1TObjects_CLASS := LIBRARY
CondFormats/L1TObjects_forbigobj+=CondFormatsL1TObjects
CondFormatsL1TObjects_INIT_FUNC        += $$(eval $$(call Library,CondFormatsL1TObjects,src/CondFormats/L1TObjects/src,src_CondFormats_L1TObjects_src,$(SCRAMSTORENAME_BIN),,$(SCRAMSTORENAME_LIB),$(SCRAMSTORENAME_LOGS)))
endif
ifeq ($(strip $(DQM/L1TMonitor)),)
ALL_COMMONRULES += src_DQM_L1TMonitor_src
src_DQM_L1TMonitor_src_parent := DQM/L1TMonitor
src_DQM_L1TMonitor_src_INIT_FUNC := $$(eval $$(call CommonProductRules,src_DQM_L1TMonitor_src,src/DQM/L1TMonitor/src,LIBRARY))
DQML1TMonitor := self/DQM/L1TMonitor
DQM/L1TMonitor := DQML1TMonitor
DQML1TMonitor_files := $(patsubst src/DQM/L1TMonitor/src/%,%,$(wildcard $(foreach dir,src/DQM/L1TMonitor/src ,$(foreach ext,$(SRC_FILES_SUFFIXES),$(dir)/*.$(ext)))))
DQML1TMonitor_BuildFile    := $(WORKINGDIR)/cache/bf/src/DQM/L1TMonitor/BuildFile
DQML1TMonitor_LOC_USE := self  FWCore/Framework FWCore/PluginManager FWCore/ParameterSet DQMServices/Core DQMServices/Components DQMServices/ClientConfig DataFormats/L1Trigger DataFormats/LTCDigi DataFormats/CSCDigi DataFormats/L1CSCTrackFinder DataFormats/L1DTTrackFinder DataFormats/RPCDigi DataFormats/RPCRecHit DataFormats/L1GlobalMuonTrigger DataFormats/L1GlobalTrigger DataFormats/FEDRawData DataFormats/HcalDetId DataFormats/HcalDigi DataFormats/HcalRecHit DataFormats/CSCRecHit DataFormats/DTRecHit Geometry/EcalMapping Geometry/CaloGeometry Geometry/CaloTopology Geometry/HcalTowerAlgo Geometry/RPCGeometry RecoMuon/DetLayers Geometry/Records DataFormats/EcalDigi CondFormats/DataRecord CondFormats/L1TObjects L1Trigger/CSCTrackFinder L1Trigger/GlobalTriggerAnalyzer CondTools/L1Trigger root boost
DQML1TMonitor_EX_LIB   := DQML1TMonitor
DQML1TMonitor_EX_USE   := $(foreach d,$(DQML1TMonitor_LOC_USE),$(if $($(d)_EX_FLAGS_NO_RECURSIVE_EXPORT),,$d))
DQML1TMonitor_PACKAGE := self/src/DQM/L1TMonitor/src
ALL_PRODS += DQML1TMonitor
DQML1TMonitor_CLASS := LIBRARY
DQM/L1TMonitor_forbigobj+=DQML1TMonitor
DQML1TMonitor_INIT_FUNC        += $$(eval $$(call Library,DQML1TMonitor,src/DQM/L1TMonitor/src,src_DQM_L1TMonitor_src,$(SCRAMSTORENAME_BIN),,$(SCRAMSTORENAME_LIB),$(SCRAMSTORENAME_LOGS)))
endif
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
ifeq ($(strip $(ElectroWeakAnalysis/ZMuMu)),)
ALL_COMMONRULES += src_ElectroWeakAnalysis_ZMuMu_src
src_ElectroWeakAnalysis_ZMuMu_src_parent := ElectroWeakAnalysis/ZMuMu
src_ElectroWeakAnalysis_ZMuMu_src_INIT_FUNC := $$(eval $$(call CommonProductRules,src_ElectroWeakAnalysis_ZMuMu_src,src/ElectroWeakAnalysis/ZMuMu/src,LIBRARY))
ElectroWeakAnalysisZMuMu := self/ElectroWeakAnalysis/ZMuMu
ElectroWeakAnalysis/ZMuMu := ElectroWeakAnalysisZMuMu
ElectroWeakAnalysisZMuMu_files := $(patsubst src/ElectroWeakAnalysis/ZMuMu/src/%,%,$(wildcard $(foreach dir,src/ElectroWeakAnalysis/ZMuMu/src ,$(foreach ext,$(SRC_FILES_SUFFIXES),$(dir)/*.$(ext)))))
ElectroWeakAnalysisZMuMu_BuildFile    := $(WORKINGDIR)/cache/bf/src/ElectroWeakAnalysis/ZMuMu/BuildFile
ElectroWeakAnalysisZMuMu_LOC_USE := self  PhysicsTools/Utilities
ElectroWeakAnalysisZMuMu_EX_LIB   := ElectroWeakAnalysisZMuMu
ElectroWeakAnalysisZMuMu_EX_USE   := $(foreach d,$(ElectroWeakAnalysisZMuMu_LOC_USE),$(if $($(d)_EX_FLAGS_NO_RECURSIVE_EXPORT),,$d))
ElectroWeakAnalysisZMuMu_PACKAGE := self/src/ElectroWeakAnalysis/ZMuMu/src
ALL_PRODS += ElectroWeakAnalysisZMuMu
ElectroWeakAnalysisZMuMu_CLASS := LIBRARY
ElectroWeakAnalysis/ZMuMu_forbigobj+=ElectroWeakAnalysisZMuMu
ElectroWeakAnalysisZMuMu_INIT_FUNC        += $$(eval $$(call Library,ElectroWeakAnalysisZMuMu,src/ElectroWeakAnalysis/ZMuMu/src,src_ElectroWeakAnalysis_ZMuMu_src,$(SCRAMSTORENAME_BIN),,$(SCRAMSTORENAME_LIB),$(SCRAMSTORENAME_LOGS)))
endif
ifeq ($(strip $(L1Trigger/L1TCommon)),)
ALL_COMMONRULES += src_L1Trigger_L1TCommon_src
src_L1Trigger_L1TCommon_src_parent := L1Trigger/L1TCommon
src_L1Trigger_L1TCommon_src_INIT_FUNC := $$(eval $$(call CommonProductRules,src_L1Trigger_L1TCommon_src,src/L1Trigger/L1TCommon/src,LIBRARY))
L1TriggerL1TCommon := self/L1Trigger/L1TCommon
L1Trigger/L1TCommon := L1TriggerL1TCommon
L1TriggerL1TCommon_files := $(patsubst src/L1Trigger/L1TCommon/src/%,%,$(wildcard $(foreach dir,src/L1Trigger/L1TCommon/src ,$(foreach ext,$(SRC_FILES_SUFFIXES),$(dir)/*.$(ext)))))
L1TriggerL1TCommon_BuildFile    := $(WORKINGDIR)/cache/bf/src/L1Trigger/L1TCommon/BuildFile
L1TriggerL1TCommon_LOC_USE := self  xerces-c CondFormats/L1TObjects
L1TriggerL1TCommon_EX_LIB   := L1TriggerL1TCommon
L1TriggerL1TCommon_EX_USE   := $(foreach d,$(L1TriggerL1TCommon_LOC_USE),$(if $($(d)_EX_FLAGS_NO_RECURSIVE_EXPORT),,$d))
L1TriggerL1TCommon_PACKAGE := self/src/L1Trigger/L1TCommon/src
ALL_PRODS += L1TriggerL1TCommon
L1TriggerL1TCommon_CLASS := LIBRARY
L1Trigger/L1TCommon_forbigobj+=L1TriggerL1TCommon
L1TriggerL1TCommon_INIT_FUNC        += $$(eval $$(call Library,L1TriggerL1TCommon,src/L1Trigger/L1TCommon/src,src_L1Trigger_L1TCommon_src,$(SCRAMSTORENAME_BIN),,$(SCRAMSTORENAME_LIB),$(SCRAMSTORENAME_LOGS)))
endif
ifeq ($(strip $(HLTrigger/Muon)),)
ALL_COMMONRULES += src_HLTrigger_Muon_src
src_HLTrigger_Muon_src_parent := HLTrigger/Muon
src_HLTrigger_Muon_src_INIT_FUNC := $$(eval $$(call CommonProductRules,src_HLTrigger_Muon_src,src/HLTrigger/Muon/src,LIBRARY))
HLTriggerMuon := self/HLTrigger/Muon
HLTrigger/Muon := HLTriggerMuon
HLTriggerMuon_files := $(patsubst src/HLTrigger/Muon/src/%,%,$(wildcard $(foreach dir,src/HLTrigger/Muon/src ,$(foreach ext,$(SRC_FILES_SUFFIXES),$(dir)/*.$(ext)))))
HLTriggerMuon_BuildFile    := $(WORKINGDIR)/cache/bf/src/HLTrigger/Muon/BuildFile
HLTriggerMuon_LOC_USE := self  DataFormats/Common DataFormats/HLTReco DataFormats/L1GlobalMuonTrigger DataFormats/L1Trigger DataFormats/MuonReco DataFormats/MuonSeed DataFormats/RecoCandidate DataFormats/TrackReco DataFormats/TrajectorySeed DataFormats/BeamSpot DataFormats/Scouting FWCore/Framework FWCore/MessageLogger FWCore/ParameterSet FWCore/PluginManager FWCore/Utilities HLTrigger/HLTcore RecoMuon/MuonIsolation L1Trigger/CSCTrackFinder TrackingTools/PatternTools TrackingTools/TransientTrack MagneticField/Engine MagneticField/Records
HLTriggerMuon_PRE_INIT_FUNC += $$(eval $$(call edmPlugin,HLTriggerMuon,HLTriggerMuon,$(SCRAMSTORENAME_LIB),src/HLTrigger/Muon/src))
HLTriggerMuon_PACKAGE := self/src/HLTrigger/Muon/src
ALL_PRODS += HLTriggerMuon
HLTriggerMuon_CLASS := LIBRARY
HLTrigger/Muon_forbigobj+=HLTriggerMuon
HLTriggerMuon_INIT_FUNC        += $$(eval $$(call Library,HLTriggerMuon,src/HLTrigger/Muon/src,src_HLTrigger_Muon_src,$(SCRAMSTORENAME_BIN),,$(SCRAMSTORENAME_LIB),$(SCRAMSTORENAME_LOGS)))
endif
ifeq ($(strip $(MuonAnalysis/MuonAssociators)),)
ALL_COMMONRULES += src_MuonAnalysis_MuonAssociators_src
src_MuonAnalysis_MuonAssociators_src_parent := MuonAnalysis/MuonAssociators
src_MuonAnalysis_MuonAssociators_src_INIT_FUNC := $$(eval $$(call CommonProductRules,src_MuonAnalysis_MuonAssociators_src,src/MuonAnalysis/MuonAssociators/src,LIBRARY))
MuonAnalysisMuonAssociators := self/MuonAnalysis/MuonAssociators
MuonAnalysis/MuonAssociators := MuonAnalysisMuonAssociators
MuonAnalysisMuonAssociators_files := $(patsubst src/MuonAnalysis/MuonAssociators/src/%,%,$(wildcard $(foreach dir,src/MuonAnalysis/MuonAssociators/src ,$(foreach ext,$(SRC_FILES_SUFFIXES),$(dir)/*.$(ext)))))
MuonAnalysisMuonAssociators_BuildFile    := $(WORKINGDIR)/cache/bf/src/MuonAnalysis/MuonAssociators/BuildFile
MuonAnalysisMuonAssociators_LOC_USE := self  CommonTools/Utils DataFormats/CLHEP DataFormats/Candidate DataFormats/GeometrySurface DataFormats/HepMCCandidate DataFormats/L1Trigger DataFormats/Math DataFormats/RecoCandidate DataFormats/TrackReco DataFormats/CSCRecHit DataFormats/CSCDigi DataFormats/L1CSCTrackFinder FWCore/Framework FWCore/MessageLogger FWCore/ParameterSet FWCore/Utilities Geometry/CommonDetUnit Geometry/Records L1Trigger/CSCTrackFinder MagneticField/Engine MagneticField/Records RecoMuon/DetLayers RecoMuon/Records TrackingTools/DetLayers TrackingTools/GeomPropagators TrackingTools/KalmanUpdators TrackingTools/PatternTools TrackingTools/Records TrackingTools/TrajectoryState SimDataFormats/Track SimDataFormats/Vertex
MuonAnalysisMuonAssociators_EX_LIB   := MuonAnalysisMuonAssociators
MuonAnalysisMuonAssociators_EX_USE   := $(foreach d,$(MuonAnalysisMuonAssociators_LOC_USE),$(if $($(d)_EX_FLAGS_NO_RECURSIVE_EXPORT),,$d))
MuonAnalysisMuonAssociators_PACKAGE := self/src/MuonAnalysis/MuonAssociators/src
ALL_PRODS += MuonAnalysisMuonAssociators
MuonAnalysisMuonAssociators_CLASS := LIBRARY
MuonAnalysis/MuonAssociators_forbigobj+=MuonAnalysisMuonAssociators
MuonAnalysisMuonAssociators_INIT_FUNC        += $$(eval $$(call Library,MuonAnalysisMuonAssociators,src/MuonAnalysis/MuonAssociators/src,src_MuonAnalysis_MuonAssociators_src,$(SCRAMSTORENAME_BIN),,$(SCRAMSTORENAME_LIB),$(SCRAMSTORENAME_LOGS)))
endif
ifeq ($(strip $(CondCore/SiStripPlugins)),)
ALL_COMMONRULES += src_CondCore_SiStripPlugins_src
src_CondCore_SiStripPlugins_src_parent := CondCore/SiStripPlugins
src_CondCore_SiStripPlugins_src_INIT_FUNC := $$(eval $$(call CommonProductRules,src_CondCore_SiStripPlugins_src,src/CondCore/SiStripPlugins/src,LIBRARY))
CondCoreSiStripPlugins := self/CondCore/SiStripPlugins
CondCore/SiStripPlugins := CondCoreSiStripPlugins
CondCoreSiStripPlugins_files := $(patsubst src/CondCore/SiStripPlugins/src/%,%,$(wildcard $(foreach dir,src/CondCore/SiStripPlugins/src ,$(foreach ext,$(SRC_FILES_SUFFIXES),$(dir)/*.$(ext)))))
CondCoreSiStripPlugins_BuildFile    := $(WORKINGDIR)/cache/bf/src/CondCore/SiStripPlugins/BuildFile
CondCoreSiStripPlugins_LOC_USE := self  FWCore/Framework FWCore/PluginManager CondCore/ESSources CondFormats/SiStripObjects CondFormats/DataRecord
CondCoreSiStripPlugins_PRE_INIT_FUNC += $$(eval $$(call edmPlugin,CondCoreSiStripPlugins,CondCoreSiStripPlugins,$(SCRAMSTORENAME_LIB),src/CondCore/SiStripPlugins/src))
CondCoreSiStripPlugins_PACKAGE := self/src/CondCore/SiStripPlugins/src
ALL_PRODS += CondCoreSiStripPlugins
CondCoreSiStripPlugins_CLASS := LIBRARY
CondCore/SiStripPlugins_forbigobj+=CondCoreSiStripPlugins
CondCoreSiStripPlugins_INIT_FUNC        += $$(eval $$(call Library,CondCoreSiStripPlugins,src/CondCore/SiStripPlugins/src,src_CondCore_SiStripPlugins_src,$(SCRAMSTORENAME_BIN),,$(SCRAMSTORENAME_LIB),$(SCRAMSTORENAME_LOGS)))
endif
ifeq ($(strip $(MuonAnalysisMuonAssociators_plugins)),)
MuonAnalysisMuonAssociators_plugins := self/src/MuonAnalysis/MuonAssociators/plugins
PLUGINS:=yes
MuonAnalysisMuonAssociators_plugins_files := $(patsubst src/MuonAnalysis/MuonAssociators/plugins/%,%,$(foreach file,*.cc,$(eval xfile:=$(wildcard src/MuonAnalysis/MuonAssociators/plugins/$(file)))$(if $(xfile),$(xfile),$(warning No such file exists: src/MuonAnalysis/MuonAssociators/plugins/$(file). Please fix src/MuonAnalysis/MuonAssociators/plugins/BuildFile.))))
MuonAnalysisMuonAssociators_plugins_BuildFile    := $(WORKINGDIR)/cache/bf/src/MuonAnalysis/MuonAssociators/plugins/BuildFile
MuonAnalysisMuonAssociators_plugins_LOC_USE := self  CommonTools/Utils DataFormats/PatCandidates FWCore/MessageLogger SimMuon/MCTruth SimTracker/Records SimTracker/TrackAssociation MuonAnalysis/MuonAssociators
MuonAnalysisMuonAssociators_plugins_PRE_INIT_FUNC += $$(eval $$(call edmPlugin,MuonAnalysisMuonAssociators_plugins,MuonAnalysisMuonAssociators_plugins,$(SCRAMSTORENAME_LIB),src/MuonAnalysis/MuonAssociators/plugins))
MuonAnalysisMuonAssociators_plugins_PACKAGE := self/src/MuonAnalysis/MuonAssociators/plugins
ALL_PRODS += MuonAnalysisMuonAssociators_plugins
MuonAnalysis/MuonAssociators_forbigobj+=MuonAnalysisMuonAssociators_plugins
MuonAnalysisMuonAssociators_plugins_INIT_FUNC        += $$(eval $$(call Library,MuonAnalysisMuonAssociators_plugins,src/MuonAnalysis/MuonAssociators/plugins,src_MuonAnalysis_MuonAssociators_plugins,$(SCRAMSTORENAME_BIN),,$(SCRAMSTORENAME_LIB),$(SCRAMSTORENAME_LOGS)))
MuonAnalysisMuonAssociators_plugins_CLASS := LIBRARY
else
$(eval $(call MultipleWarningMsg,MuonAnalysisMuonAssociators_plugins,src/MuonAnalysis/MuonAssociators/plugins))
endif
ALL_COMMONRULES += src_MuonAnalysis_MuonAssociators_plugins
src_MuonAnalysis_MuonAssociators_plugins_parent := MuonAnalysis/MuonAssociators
src_MuonAnalysis_MuonAssociators_plugins_INIT_FUNC += $$(eval $$(call CommonProductRules,src_MuonAnalysis_MuonAssociators_plugins,src/MuonAnalysis/MuonAssociators/plugins,PLUGINS))
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
ifeq ($(strip $(L1TriggerL1TMuonBarrelPlugins)),)
L1TriggerL1TMuonBarrelPlugins := self/src/L1Trigger/L1TMuonBarrel/plugins
PLUGINS:=yes
L1TriggerL1TMuonBarrelPlugins_files := $(patsubst src/L1Trigger/L1TMuonBarrel/plugins/%,%,$(foreach file,*.cc,$(eval xfile:=$(wildcard src/L1Trigger/L1TMuonBarrel/plugins/$(file)))$(if $(xfile),$(xfile),$(warning No such file exists: src/L1Trigger/L1TMuonBarrel/plugins/$(file). Please fix src/L1Trigger/L1TMuonBarrel/plugins/BuildFile.))))
L1TriggerL1TMuonBarrelPlugins_BuildFile    := $(WORKINGDIR)/cache/bf/src/L1Trigger/L1TMuonBarrel/plugins/BuildFile
L1TriggerL1TMuonBarrelPlugins_LOC_FLAGS_LDFLAGS   := -fPIC
L1TriggerL1TMuonBarrelPlugins_LOC_USE := self  L1Trigger/L1TMuonEndCap L1Trigger/DTTrackFinder FWCore/ServiceRegistry CommonTools/UtilAlgos DataFormats/HepMCCandidate DataFormats/L1TMuon DQM/DTMonitorModule CondFormats/DataRecord CondFormats/L1TObjects L1Trigger/L1TMuonBarrel
L1TriggerL1TMuonBarrelPlugins_PRE_INIT_FUNC += $$(eval $$(call edmPlugin,L1TriggerL1TMuonBarrelPlugins,L1TriggerL1TMuonBarrelPlugins,$(SCRAMSTORENAME_LIB),src/L1Trigger/L1TMuonBarrel/plugins))
L1TriggerL1TMuonBarrelPlugins_PACKAGE := self/src/L1Trigger/L1TMuonBarrel/plugins
ALL_PRODS += L1TriggerL1TMuonBarrelPlugins
L1Trigger/L1TMuonBarrel_forbigobj+=L1TriggerL1TMuonBarrelPlugins
L1TriggerL1TMuonBarrelPlugins_INIT_FUNC        += $$(eval $$(call Library,L1TriggerL1TMuonBarrelPlugins,src/L1Trigger/L1TMuonBarrel/plugins,src_L1Trigger_L1TMuonBarrel_plugins,$(SCRAMSTORENAME_BIN),,$(SCRAMSTORENAME_LIB),$(SCRAMSTORENAME_LOGS)))
L1TriggerL1TMuonBarrelPlugins_CLASS := LIBRARY
else
$(eval $(call MultipleWarningMsg,L1TriggerL1TMuonBarrelPlugins,src/L1Trigger/L1TMuonBarrel/plugins))
endif
ALL_COMMONRULES += src_L1Trigger_L1TMuonBarrel_plugins
src_L1Trigger_L1TMuonBarrel_plugins_parent := L1Trigger/L1TMuonBarrel
src_L1Trigger_L1TMuonBarrel_plugins_INIT_FUNC += $$(eval $$(call CommonProductRules,src_L1Trigger_L1TMuonBarrel_plugins,src/L1Trigger/L1TMuonBarrel/plugins,PLUGINS))
ifeq ($(strip $(DPGAnalysis/Skims)),)
ALL_COMMONRULES += src_DPGAnalysis_Skims_src
src_DPGAnalysis_Skims_src_parent := DPGAnalysis/Skims
src_DPGAnalysis_Skims_src_INIT_FUNC := $$(eval $$(call CommonProductRules,src_DPGAnalysis_Skims_src,src/DPGAnalysis/Skims/src,LIBRARY))
DPGAnalysisSkims := self/DPGAnalysis/Skims
DPGAnalysis/Skims := DPGAnalysisSkims
DPGAnalysisSkims_files := $(patsubst src/DPGAnalysis/Skims/src/%,%,$(wildcard $(foreach dir,src/DPGAnalysis/Skims/src ,$(foreach ext,$(SRC_FILES_SUFFIXES),$(dir)/*.$(ext)))))
DPGAnalysisSkims_BuildFile    := $(WORKINGDIR)/cache/bf/src/DPGAnalysis/Skims/BuildFile
DPGAnalysisSkims_LOC_USE := self  FWCore/Framework FWCore/PluginManager FWCore/ParameterSet FWCore/MessageLogger FWCore/Utilities Geometry/Records Geometry/CSCGeometry DataFormats/CSCDigi DataFormats/CSCRecHit DataFormats/Common DataFormats/MuonDetId CondFormats/CSCObjects DataFormats/DTDigi CondFormats/DTObjects DataFormats/RPCRecHit DataFormats/EcalDetId DataFormats/EcalRecHit DataFormats/L1GlobalTrigger DataFormats/Scalers Geometry/EcalMapping DataFormats/TrackReco DataFormats/MuonReco DataFormats/VertexReco DataFormats/METReco DataFormats/JetReco DataFormats/EgammaCandidates DataFormats/HcalIsolatedTrack Geometry/RPCGeometry DataFormats/L1Trigger DataFormats/TrackerRecHit2D root HLTrigger/HLTcore DataFormats/HcalRecHit RecoEcal/EgammaCoreTools DataFormats/EgammaReco PhysicsTools/SelectorUtils DataFormats/Provenance
DPGAnalysisSkims_PRE_INIT_FUNC += $$(eval $$(call edmPlugin,DPGAnalysisSkims,DPGAnalysisSkims,$(SCRAMSTORENAME_LIB),src/DPGAnalysis/Skims/src))
DPGAnalysisSkims_PACKAGE := self/src/DPGAnalysis/Skims/src
ALL_PRODS += DPGAnalysisSkims
DPGAnalysisSkims_CLASS := LIBRARY
DPGAnalysis/Skims_forbigobj+=DPGAnalysisSkims
DPGAnalysisSkims_INIT_FUNC        += $$(eval $$(call Library,DPGAnalysisSkims,src/DPGAnalysis/Skims/src,src_DPGAnalysis_Skims_src,$(SCRAMSTORENAME_BIN),,$(SCRAMSTORENAME_LIB),$(SCRAMSTORENAME_LOGS)))
endif
ifeq ($(strip $(RecoTrackerDeDxPlugins)),)
RecoTrackerDeDxPlugins := self/src/RecoTracker/DeDx/plugins
PLUGINS:=yes
RecoTrackerDeDxPlugins_files := $(patsubst src/RecoTracker/DeDx/plugins/%,%,$(foreach file,*.cc,$(eval xfile:=$(wildcard src/RecoTracker/DeDx/plugins/$(file)))$(if $(xfile),$(xfile),$(warning No such file exists: src/RecoTracker/DeDx/plugins/$(file). Please fix src/RecoTracker/DeDx/plugins/BuildFile.))))
RecoTrackerDeDxPlugins_BuildFile    := $(WORKINGDIR)/cache/bf/src/RecoTracker/DeDx/plugins/BuildFile
RecoTrackerDeDxPlugins_LOC_USE := self  RecoTracker/DeDx
RecoTrackerDeDxPlugins_PRE_INIT_FUNC += $$(eval $$(call edmPlugin,RecoTrackerDeDxPlugins,RecoTrackerDeDxPlugins,$(SCRAMSTORENAME_LIB),src/RecoTracker/DeDx/plugins))
RecoTrackerDeDxPlugins_PACKAGE := self/src/RecoTracker/DeDx/plugins
ALL_PRODS += RecoTrackerDeDxPlugins
RecoTracker/DeDx_forbigobj+=RecoTrackerDeDxPlugins
RecoTrackerDeDxPlugins_INIT_FUNC        += $$(eval $$(call Library,RecoTrackerDeDxPlugins,src/RecoTracker/DeDx/plugins,src_RecoTracker_DeDx_plugins,$(SCRAMSTORENAME_BIN),,$(SCRAMSTORENAME_LIB),$(SCRAMSTORENAME_LOGS)))
RecoTrackerDeDxPlugins_CLASS := LIBRARY
else
$(eval $(call MultipleWarningMsg,RecoTrackerDeDxPlugins,src/RecoTracker/DeDx/plugins))
endif
ALL_COMMONRULES += src_RecoTracker_DeDx_plugins
src_RecoTracker_DeDx_plugins_parent := RecoTracker/DeDx
src_RecoTracker_DeDx_plugins_INIT_FUNC += $$(eval $$(call CommonProductRules,src_RecoTracker_DeDx_plugins,src/RecoTracker/DeDx/plugins,PLUGINS))
ifeq ($(strip $(L1Trigger/L1TGlobal)),)
ALL_COMMONRULES += src_L1Trigger_L1TGlobal_src
src_L1Trigger_L1TGlobal_src_parent := L1Trigger/L1TGlobal
src_L1Trigger_L1TGlobal_src_INIT_FUNC := $$(eval $$(call CommonProductRules,src_L1Trigger_L1TGlobal_src,src/L1Trigger/L1TGlobal/src,LIBRARY))
L1TriggerL1TGlobal := self/L1Trigger/L1TGlobal
L1Trigger/L1TGlobal := L1TriggerL1TGlobal
L1TriggerL1TGlobal_files := $(patsubst src/L1Trigger/L1TGlobal/src/%,%,$(wildcard $(foreach dir,src/L1Trigger/L1TGlobal/src src/L1Trigger/L1TGlobal/src/L1TMenuEditor src/L1Trigger/L1TGlobal/src/L1TMenuEditor/xsd src/L1Trigger/L1TGlobal/src/L1TMenuEditor/xsd/cxx src/L1Trigger/L1TGlobal/src/L1TMenuEditor/xsd/cxx/compilers src/L1Trigger/L1TGlobal/src/L1TMenuEditor/xsd/cxx/compilers/vc-7 src/L1Trigger/L1TGlobal/src/L1TMenuEditor/xsd/cxx/compilers/vc-8 src/L1Trigger/L1TGlobal/src/L1TMenuEditor/xsd/cxx/parser src/L1Trigger/L1TGlobal/src/L1TMenuEditor/xsd/cxx/parser/expat src/L1Trigger/L1TGlobal/src/L1TMenuEditor/xsd/cxx/parser/non-validating src/L1Trigger/L1TGlobal/src/L1TMenuEditor/xsd/cxx/parser/validating src/L1Trigger/L1TGlobal/src/L1TMenuEditor/xsd/cxx/parser/xerces src/L1Trigger/L1TGlobal/src/L1TMenuEditor/xsd/cxx/tree src/L1Trigger/L1TGlobal/src/L1TMenuEditor/xsd/cxx/tree/bits src/L1Trigger/L1TGlobal/src/L1TMenuEditor/xsd/cxx/tree/parsing src/L1Trigger/L1TGlobal/src/L1TMenuEditor/xsd/cxx/tree/serialization src/L1Trigger/L1TGlobal/src/L1TMenuEditor/xsd/cxx/xml src/L1Trigger/L1TGlobal/src/L1TMenuEditor/xsd/cxx/xml/bits src/L1Trigger/L1TGlobal/src/L1TMenuEditor/xsd/cxx/xml/dom src/L1Trigger/L1TGlobal/src/L1TMenuEditor/xsd/cxx/xml/dom/bits src/L1Trigger/L1TGlobal/src/L1TMenuEditor/xsd/cxx/xml/sax src/L1Trigger/L1TGlobal/src/L1TMenuEditor/xsd/cxx/xml/sax/bits,$(foreach ext,$(SRC_FILES_SUFFIXES),$(dir)/*.$(ext)))))
L1TriggerL1TGlobal_BuildFile    := $(WORKINGDIR)/cache/bf/src/L1Trigger/L1TGlobal/src/BuildFile
L1TriggerL1TGlobal_LOC_USE := self  FWCore/Framework FWCore/PluginManager FWCore/ParameterSet DataFormats/L1TCalorimeter DataFormats/L1TGlobal CondFormats/L1TObjects CondFormats/DataRecord xerces-c
L1TriggerL1TGlobal_LCGDICTS  := x 
L1TriggerL1TGlobal_PRE_INIT_FUNC += $$(eval $$(call LCGDict,L1TriggerL1TGlobal,src/L1Trigger/L1TGlobal/src/classes.h,src/L1Trigger/L1TGlobal/src/classes_def.xml,$(SCRAMSTORENAME_LIB),$(GENREFLEX_ARGS) --fail_on_warnings,))
L1TriggerL1TGlobal_EX_LIB   := L1TriggerL1TGlobal
L1TriggerL1TGlobal_EX_USE   := $(foreach d,$(L1TriggerL1TGlobal_LOC_USE),$(if $($(d)_EX_FLAGS_NO_RECURSIVE_EXPORT),,$d))
L1TriggerL1TGlobal_PACKAGE := self/src/L1Trigger/L1TGlobal/src
ALL_PRODS += L1TriggerL1TGlobal
L1TriggerL1TGlobal_CLASS := LIBRARY
L1Trigger/L1TGlobal_forbigobj+=L1TriggerL1TGlobal
L1TriggerL1TGlobal_INIT_FUNC        += $$(eval $$(call Library,L1TriggerL1TGlobal,src/L1Trigger/L1TGlobal/src,src_L1Trigger_L1TGlobal_src,$(SCRAMSTORENAME_BIN),,$(SCRAMSTORENAME_LIB),$(SCRAMSTORENAME_LOGS)))
endif
ifeq ($(strip $(HLTriggerOffline/SUSYBSM)),)
ALL_COMMONRULES += src_HLTriggerOffline_SUSYBSM_src
src_HLTriggerOffline_SUSYBSM_src_parent := HLTriggerOffline/SUSYBSM
src_HLTriggerOffline_SUSYBSM_src_INIT_FUNC := $$(eval $$(call CommonProductRules,src_HLTriggerOffline_SUSYBSM_src,src/HLTriggerOffline/SUSYBSM/src,LIBRARY))
HLTriggerOfflineSUSYBSM := self/HLTriggerOffline/SUSYBSM
HLTriggerOffline/SUSYBSM := HLTriggerOfflineSUSYBSM
HLTriggerOfflineSUSYBSM_files := $(patsubst src/HLTriggerOffline/SUSYBSM/src/%,%,$(wildcard $(foreach dir,src/HLTriggerOffline/SUSYBSM/src ,$(foreach ext,$(SRC_FILES_SUFFIXES),$(dir)/*.$(ext)))))
HLTriggerOfflineSUSYBSM_BuildFile    := $(WORKINGDIR)/cache/bf/src/HLTriggerOffline/SUSYBSM/BuildFile
HLTriggerOfflineSUSYBSM_LOC_USE := self  DataFormats/BeamSpot DataFormats/BTauReco DataFormats/Candidate DataFormats/Common DataFormats/EgammaCandidates DataFormats/HepMCCandidate DataFormats/HLTReco DataFormats/JetReco DataFormats/L1GlobalTrigger DataFormats/L1Trigger DataFormats/Math DataFormats/METReco DataFormats/MuonReco DataFormats/VertexReco DQMServices/Core FWCore/Common FWCore/Framework FWCore/MessageLogger FWCore/ParameterSet FWCore/ServiceRegistry HLTrigger/HLTcore HLTrigger/JetMET RecoEgamma/EgammaTools rootgraphics
HLTriggerOfflineSUSYBSM_PRE_INIT_FUNC += $$(eval $$(call edmPlugin,HLTriggerOfflineSUSYBSM,HLTriggerOfflineSUSYBSM,$(SCRAMSTORENAME_LIB),src/HLTriggerOffline/SUSYBSM/src))
HLTriggerOfflineSUSYBSM_PACKAGE := self/src/HLTriggerOffline/SUSYBSM/src
ALL_PRODS += HLTriggerOfflineSUSYBSM
HLTriggerOfflineSUSYBSM_CLASS := LIBRARY
HLTriggerOffline/SUSYBSM_forbigobj+=HLTriggerOfflineSUSYBSM
HLTriggerOfflineSUSYBSM_INIT_FUNC        += $$(eval $$(call Library,HLTriggerOfflineSUSYBSM,src/HLTriggerOffline/SUSYBSM/src,src_HLTriggerOffline_SUSYBSM_src,$(SCRAMSTORENAME_BIN),,$(SCRAMSTORENAME_LIB),$(SCRAMSTORENAME_LOGS)))
endif
ifeq ($(strip $(ElectroWeakAnalysisZMuMu_plugins)),)
ElectroWeakAnalysisZMuMu_plugins := self/src/ElectroWeakAnalysis/ZMuMu/plugins
PLUGINS:=yes
ElectroWeakAnalysisZMuMu_plugins_files := $(patsubst src/ElectroWeakAnalysis/ZMuMu/plugins/%,%,$(foreach file,*.cc,$(eval xfile:=$(wildcard src/ElectroWeakAnalysis/ZMuMu/plugins/$(file)))$(if $(xfile),$(xfile),$(warning No such file exists: src/ElectroWeakAnalysis/ZMuMu/plugins/$(file). Please fix src/ElectroWeakAnalysis/ZMuMu/plugins/BuildFile.))))
ElectroWeakAnalysisZMuMu_plugins_BuildFile    := $(WORKINGDIR)/cache/bf/src/ElectroWeakAnalysis/ZMuMu/plugins/BuildFile
ElectroWeakAnalysisZMuMu_plugins_LOC_USE := self  PhysicsTools/RooStatsCms CommonTools/Utils FWCore/Framework CommonTools/UtilAlgos DataFormats/MuonReco FWCore/ParameterSet FWCore/Utilities DataFormats/HepMCCandidate DataFormats/Candidate DataFormats/PatCandidates root DataFormats/BTauReco
ElectroWeakAnalysisZMuMu_plugins_PRE_INIT_FUNC += $$(eval $$(call edmPlugin,ElectroWeakAnalysisZMuMu_plugins,ElectroWeakAnalysisZMuMu_plugins,$(SCRAMSTORENAME_LIB),src/ElectroWeakAnalysis/ZMuMu/plugins))
ElectroWeakAnalysisZMuMu_plugins_PACKAGE := self/src/ElectroWeakAnalysis/ZMuMu/plugins
ALL_PRODS += ElectroWeakAnalysisZMuMu_plugins
ElectroWeakAnalysis/ZMuMu_forbigobj+=ElectroWeakAnalysisZMuMu_plugins
ElectroWeakAnalysisZMuMu_plugins_INIT_FUNC        += $$(eval $$(call Library,ElectroWeakAnalysisZMuMu_plugins,src/ElectroWeakAnalysis/ZMuMu/plugins,src_ElectroWeakAnalysis_ZMuMu_plugins,$(SCRAMSTORENAME_BIN),,$(SCRAMSTORENAME_LIB),$(SCRAMSTORENAME_LOGS)))
ElectroWeakAnalysisZMuMu_plugins_CLASS := LIBRARY
else
$(eval $(call MultipleWarningMsg,ElectroWeakAnalysisZMuMu_plugins,src/ElectroWeakAnalysis/ZMuMu/plugins))
endif
ALL_COMMONRULES += src_ElectroWeakAnalysis_ZMuMu_plugins
src_ElectroWeakAnalysis_ZMuMu_plugins_parent := ElectroWeakAnalysis/ZMuMu
src_ElectroWeakAnalysis_ZMuMu_plugins_INIT_FUNC += $$(eval $$(call CommonProductRules,src_ElectroWeakAnalysis_ZMuMu_plugins,src/ElectroWeakAnalysis/ZMuMu/plugins,PLUGINS))
ifeq ($(strip $(HLTriggerJetMETPlugins)),)
HLTriggerJetMETPlugins := self/src/HLTrigger/JetMET/plugins
PLUGINS:=yes
HLTriggerJetMETPlugins_files := $(patsubst src/HLTrigger/JetMET/plugins/%,%,$(foreach file,*.cc,$(eval xfile:=$(wildcard src/HLTrigger/JetMET/plugins/$(file)))$(if $(xfile),$(xfile),$(warning No such file exists: src/HLTrigger/JetMET/plugins/$(file). Please fix src/HLTrigger/JetMET/plugins/BuildFile.))))
HLTriggerJetMETPlugins_BuildFile    := $(WORKINGDIR)/cache/bf/src/HLTrigger/JetMET/plugins/BuildFile
HLTriggerJetMETPlugins_LOC_USE := self  DataFormats/Common DataFormats/HLTReco DataFormats/HcalRecHit DataFormats/JetReco DataFormats/METReco DataFormats/Scouting DataFormats/Math Geometry/Records Geometry/CaloTopology FWCore/Framework FWCore/MessageLogger FWCore/ParameterSet FWCore/PluginManager FWCore/Utilities RecoMET/METAlgorithms HLTrigger/HLTcore RecoJets/JetProducers TrackingTools/IPTools TrackingTools/TransientTrack HLTrigger/JetMET
HLTriggerJetMETPlugins_PRE_INIT_FUNC += $$(eval $$(call edmPlugin,HLTriggerJetMETPlugins,HLTriggerJetMETPlugins,$(SCRAMSTORENAME_LIB),src/HLTrigger/JetMET/plugins))
HLTriggerJetMETPlugins_PACKAGE := self/src/HLTrigger/JetMET/plugins
ALL_PRODS += HLTriggerJetMETPlugins
HLTrigger/JetMET_forbigobj+=HLTriggerJetMETPlugins
HLTriggerJetMETPlugins_INIT_FUNC        += $$(eval $$(call Library,HLTriggerJetMETPlugins,src/HLTrigger/JetMET/plugins,src_HLTrigger_JetMET_plugins,$(SCRAMSTORENAME_BIN),,$(SCRAMSTORENAME_LIB),$(SCRAMSTORENAME_LOGS)))
HLTriggerJetMETPlugins_CLASS := LIBRARY
else
$(eval $(call MultipleWarningMsg,HLTriggerJetMETPlugins,src/HLTrigger/JetMET/plugins))
endif
ALL_COMMONRULES += src_HLTrigger_JetMET_plugins
src_HLTrigger_JetMET_plugins_parent := HLTrigger/JetMET
src_HLTrigger_JetMET_plugins_INIT_FUNC += $$(eval $$(call CommonProductRules,src_HLTrigger_JetMET_plugins,src/HLTrigger/JetMET/plugins,PLUGINS))
ifeq ($(strip $(L1TriggerL1TMuonOverlapPlugins)),)
L1TriggerL1TMuonOverlapPlugins := self/src/L1Trigger/L1TMuonOverlap/plugins
PLUGINS:=yes
L1TriggerL1TMuonOverlapPlugins_files := $(patsubst src/L1Trigger/L1TMuonOverlap/plugins/%,%,$(foreach file,*.cc,$(eval xfile:=$(wildcard src/L1Trigger/L1TMuonOverlap/plugins/$(file)))$(if $(xfile),$(xfile),$(warning No such file exists: src/L1Trigger/L1TMuonOverlap/plugins/$(file). Please fix src/L1Trigger/L1TMuonOverlap/plugins/BuildFile.))))
L1TriggerL1TMuonOverlapPlugins_BuildFile    := $(WORKINGDIR)/cache/bf/src/L1Trigger/L1TMuonOverlap/plugins/BuildFile
L1TriggerL1TMuonOverlapPlugins_LOC_FLAGS_LDFLAGS   := -lXMLIO
L1TriggerL1TMuonOverlapPlugins_LOC_USE := self  L1Trigger/L1TMuonOverlap CondFormats/L1TObjects CondFormats/DataRecord FWCore/ServiceRegistry CondCore/DBOutputService SimDataFormats/Track root
L1TriggerL1TMuonOverlapPlugins_PRE_INIT_FUNC += $$(eval $$(call edmPlugin,L1TriggerL1TMuonOverlapPlugins,L1TriggerL1TMuonOverlapPlugins,$(SCRAMSTORENAME_LIB),src/L1Trigger/L1TMuonOverlap/plugins))
L1TriggerL1TMuonOverlapPlugins_PACKAGE := self/src/L1Trigger/L1TMuonOverlap/plugins
ALL_PRODS += L1TriggerL1TMuonOverlapPlugins
L1Trigger/L1TMuonOverlap_forbigobj+=L1TriggerL1TMuonOverlapPlugins
L1TriggerL1TMuonOverlapPlugins_INIT_FUNC        += $$(eval $$(call Library,L1TriggerL1TMuonOverlapPlugins,src/L1Trigger/L1TMuonOverlap/plugins,src_L1Trigger_L1TMuonOverlap_plugins,$(SCRAMSTORENAME_BIN),,$(SCRAMSTORENAME_LIB),$(SCRAMSTORENAME_LOGS)))
L1TriggerL1TMuonOverlapPlugins_CLASS := LIBRARY
else
$(eval $(call MultipleWarningMsg,L1TriggerL1TMuonOverlapPlugins,src/L1Trigger/L1TMuonOverlap/plugins))
endif
ALL_COMMONRULES += src_L1Trigger_L1TMuonOverlap_plugins
src_L1Trigger_L1TMuonOverlap_plugins_parent := L1Trigger/L1TMuonOverlap
src_L1Trigger_L1TMuonOverlap_plugins_INIT_FUNC += $$(eval $$(call CommonProductRules,src_L1Trigger_L1TMuonOverlap_plugins,src/L1Trigger/L1TMuonOverlap/plugins,PLUGINS))
ifeq ($(strip $(CaloOnlineTools/EcalTools)),)
ALL_COMMONRULES += src_CaloOnlineTools_EcalTools_src
src_CaloOnlineTools_EcalTools_src_parent := CaloOnlineTools/EcalTools
src_CaloOnlineTools_EcalTools_src_INIT_FUNC := $$(eval $$(call CommonProductRules,src_CaloOnlineTools_EcalTools_src,src/CaloOnlineTools/EcalTools/src,LIBRARY))
CaloOnlineToolsEcalTools := self/CaloOnlineTools/EcalTools
CaloOnlineTools/EcalTools := CaloOnlineToolsEcalTools
CaloOnlineToolsEcalTools_files := $(patsubst src/CaloOnlineTools/EcalTools/src/%,%,$(wildcard $(foreach dir,src/CaloOnlineTools/EcalTools/src ,$(foreach ext,$(SRC_FILES_SUFFIXES),$(dir)/*.$(ext)))))
CaloOnlineToolsEcalTools_BuildFile    := $(WORKINGDIR)/cache/bf/src/CaloOnlineTools/EcalTools/BuildFile
CaloOnlineToolsEcalTools_LOC_USE := self  root
CaloOnlineToolsEcalTools_EX_LIB   := CaloOnlineToolsEcalTools
CaloOnlineToolsEcalTools_EX_USE   := $(foreach d,$(CaloOnlineToolsEcalTools_LOC_USE),$(if $($(d)_EX_FLAGS_NO_RECURSIVE_EXPORT),,$d))
CaloOnlineToolsEcalTools_PACKAGE := self/src/CaloOnlineTools/EcalTools/src
ALL_PRODS += CaloOnlineToolsEcalTools
CaloOnlineToolsEcalTools_CLASS := LIBRARY
CaloOnlineTools/EcalTools_forbigobj+=CaloOnlineToolsEcalTools
CaloOnlineToolsEcalTools_INIT_FUNC        += $$(eval $$(call Library,CaloOnlineToolsEcalTools,src/CaloOnlineTools/EcalTools/src,src_CaloOnlineTools_EcalTools_src,$(SCRAMSTORENAME_BIN),,$(SCRAMSTORENAME_LIB),$(SCRAMSTORENAME_LOGS)))
endif
ifeq ($(strip $(HLTrigger/Egamma)),)
ALL_COMMONRULES += src_HLTrigger_Egamma_src
src_HLTrigger_Egamma_src_parent := HLTrigger/Egamma
src_HLTrigger_Egamma_src_INIT_FUNC := $$(eval $$(call CommonProductRules,src_HLTrigger_Egamma_src,src/HLTrigger/Egamma/src,LIBRARY))
HLTriggerEgamma := self/HLTrigger/Egamma
HLTrigger/Egamma := HLTriggerEgamma
HLTriggerEgamma_files := $(patsubst src/HLTrigger/Egamma/src/%,%,$(wildcard $(foreach dir,src/HLTrigger/Egamma/src ,$(foreach ext,$(SRC_FILES_SUFFIXES),$(dir)/*.$(ext)))))
HLTriggerEgamma_BuildFile    := $(WORKINGDIR)/cache/bf/src/HLTrigger/Egamma/BuildFile
HLTriggerEgamma_LOC_USE := self  DataFormats/Candidate DataFormats/Common DataFormats/EgammaCandidates DataFormats/EgammaReco DataFormats/HLTReco DataFormats/JetReco DataFormats/L1Trigger DataFormats/Scouting DataFormats/Math DataFormats/RecoCandidate DataFormats/TrackReco DataFormats/TrajectorySeed FWCore/Framework FWCore/MessageLogger FWCore/PluginManager HLTrigger/HLTcore CondFormats/L1TObjects CondFormats/DataRecord RecoEgamma/EgammaTools MagneticField/Engine MagneticField/Records RecoEcal/EgammaCoreTools RecoEgamma/EgammaElectronAlgos
HLTriggerEgamma_PRE_INIT_FUNC += $$(eval $$(call edmPlugin,HLTriggerEgamma,HLTriggerEgamma,$(SCRAMSTORENAME_LIB),src/HLTrigger/Egamma/src))
HLTriggerEgamma_PACKAGE := self/src/HLTrigger/Egamma/src
ALL_PRODS += HLTriggerEgamma
HLTriggerEgamma_CLASS := LIBRARY
HLTrigger/Egamma_forbigobj+=HLTriggerEgamma
HLTriggerEgamma_INIT_FUNC        += $$(eval $$(call Library,HLTriggerEgamma,src/HLTrigger/Egamma/src,src_HLTrigger_Egamma_src,$(SCRAMSTORENAME_BIN),,$(SCRAMSTORENAME_LIB),$(SCRAMSTORENAME_LOGS)))
endif
ifeq ($(strip $(DQM/Physics)),)
ALL_COMMONRULES += src_DQM_Physics_src
src_DQM_Physics_src_parent := DQM/Physics
src_DQM_Physics_src_INIT_FUNC := $$(eval $$(call CommonProductRules,src_DQM_Physics_src,src/DQM/Physics/src,LIBRARY))
DQMPhysics := self/DQM/Physics
DQM/Physics := DQMPhysics
DQMPhysics_files := $(patsubst src/DQM/Physics/src/%,%,$(wildcard $(foreach dir,src/DQM/Physics/src ,$(foreach ext,$(SRC_FILES_SUFFIXES),$(dir)/*.$(ext)))))
DQMPhysics_BuildFile    := $(WORKINGDIR)/cache/bf/src/DQM/Physics/BuildFile
DQMPhysics_LOC_USE := self  DQMServices/Core FWCore/Framework DataFormats/MuonReco DataFormats/EgammaCandidates DataFormats/EgammaReco DataFormats/BTauReco DataFormats/TauReco DataFormats/JetReco DataFormats/METReco DataFormats/VertexReco DataFormats/TrackerRecHit2D DataFormats/HeavyIonEvent HLTrigger/HLTcore Geometry/Records Geometry/TrackerGeometryBuilder JetMETCorrections/Objects RecoEcal/EgammaCoreTools DataFormats/EcalRecHit CondFormats/DataRecord CondFormats/EcalObjects RecoJets/JetProducers RecoJets/JetAlgorithms
DQMPhysics_PRE_INIT_FUNC += $$(eval $$(call edmPlugin,DQMPhysics,DQMPhysics,$(SCRAMSTORENAME_LIB),src/DQM/Physics/src))
DQMPhysics_PACKAGE := self/src/DQM/Physics/src
ALL_PRODS += DQMPhysics
DQMPhysics_CLASS := LIBRARY
DQM/Physics_forbigobj+=DQMPhysics
DQMPhysics_INIT_FUNC        += $$(eval $$(call Library,DQMPhysics,src/DQM/Physics/src,src_DQM_Physics_src,$(SCRAMSTORENAME_BIN),,$(SCRAMSTORENAME_LIB),$(SCRAMSTORENAME_LOGS)))
endif
ifeq ($(strip $(CalibrationHcalAlCaRecoProducersPlugins)),)
CalibrationHcalAlCaRecoProducersPlugins := self/src/Calibration/HcalAlCaRecoProducers/plugins
PLUGINS:=yes
CalibrationHcalAlCaRecoProducersPlugins_files := $(patsubst src/Calibration/HcalAlCaRecoProducers/plugins/%,%,$(foreach file,*.cc,$(eval xfile:=$(wildcard src/Calibration/HcalAlCaRecoProducers/plugins/$(file)))$(if $(xfile),$(xfile),$(warning No such file exists: src/Calibration/HcalAlCaRecoProducers/plugins/$(file). Please fix src/Calibration/HcalAlCaRecoProducers/plugins/BuildFile.))))
CalibrationHcalAlCaRecoProducersPlugins_BuildFile    := $(WORKINGDIR)/cache/bf/src/Calibration/HcalAlCaRecoProducers/plugins/BuildFile
CalibrationHcalAlCaRecoProducersPlugins_LOC_USE := self  FWCore/Framework FWCore/MessageLogger FWCore/ParameterSet HLTrigger/HLTcore Calibration/IsolatedParticles rootphysics
CalibrationHcalAlCaRecoProducersPlugins_PRE_INIT_FUNC += $$(eval $$(call edmPlugin,CalibrationHcalAlCaRecoProducersPlugins,CalibrationHcalAlCaRecoProducersPlugins,$(SCRAMSTORENAME_LIB),src/Calibration/HcalAlCaRecoProducers/plugins))
CalibrationHcalAlCaRecoProducersPlugins_PACKAGE := self/src/Calibration/HcalAlCaRecoProducers/plugins
ALL_PRODS += CalibrationHcalAlCaRecoProducersPlugins
Calibration/HcalAlCaRecoProducers_forbigobj+=CalibrationHcalAlCaRecoProducersPlugins
CalibrationHcalAlCaRecoProducersPlugins_INIT_FUNC        += $$(eval $$(call Library,CalibrationHcalAlCaRecoProducersPlugins,src/Calibration/HcalAlCaRecoProducers/plugins,src_Calibration_HcalAlCaRecoProducers_plugins,$(SCRAMSTORENAME_BIN),,$(SCRAMSTORENAME_LIB),$(SCRAMSTORENAME_LOGS)))
CalibrationHcalAlCaRecoProducersPlugins_CLASS := LIBRARY
else
$(eval $(call MultipleWarningMsg,CalibrationHcalAlCaRecoProducersPlugins,src/Calibration/HcalAlCaRecoProducers/plugins))
endif
ALL_COMMONRULES += src_Calibration_HcalAlCaRecoProducers_plugins
src_Calibration_HcalAlCaRecoProducers_plugins_parent := Calibration/HcalAlCaRecoProducers
src_Calibration_HcalAlCaRecoProducers_plugins_INIT_FUNC += $$(eval $$(call CommonProductRules,src_Calibration_HcalAlCaRecoProducers_plugins,src/Calibration/HcalAlCaRecoProducers/plugins,PLUGINS))
ifeq ($(strip $(L1Trigger/L1TCaloLayer1)),)
ALL_COMMONRULES += src_L1Trigger_L1TCaloLayer1_src
src_L1Trigger_L1TCaloLayer1_src_parent := L1Trigger/L1TCaloLayer1
src_L1Trigger_L1TCaloLayer1_src_INIT_FUNC := $$(eval $$(call CommonProductRules,src_L1Trigger_L1TCaloLayer1_src,src/L1Trigger/L1TCaloLayer1/src,LIBRARY))
L1TriggerL1TCaloLayer1 := self/L1Trigger/L1TCaloLayer1
L1Trigger/L1TCaloLayer1 := L1TriggerL1TCaloLayer1
L1TriggerL1TCaloLayer1_files := $(patsubst src/L1Trigger/L1TCaloLayer1/src/%,%,$(wildcard $(foreach dir,src/L1Trigger/L1TCaloLayer1/src ,$(foreach ext,$(SRC_FILES_SUFFIXES),$(dir)/*.$(ext)))))
L1TriggerL1TCaloLayer1_BuildFile    := $(WORKINGDIR)/cache/bf/src/L1Trigger/L1TCaloLayer1/BuildFile
L1TriggerL1TCaloLayer1_LOC_USE := self  FWCore/Framework FWCore/ParameterSet FWCore/PluginManager FWCore/MessageLogger DataFormats/HcalDigi DataFormats/EcalDigi CondFormats/L1TObjects CalibFormats/CaloTPG L1Trigger/L1TCalorimeter CondFormats/DataRecord DataFormats/L1TCalorimeter
L1TriggerL1TCaloLayer1_EX_LIB   := L1TriggerL1TCaloLayer1
L1TriggerL1TCaloLayer1_EX_USE   := $(foreach d,$(L1TriggerL1TCaloLayer1_LOC_USE),$(if $($(d)_EX_FLAGS_NO_RECURSIVE_EXPORT),,$d))
L1TriggerL1TCaloLayer1_PACKAGE := self/src/L1Trigger/L1TCaloLayer1/src
ALL_PRODS += L1TriggerL1TCaloLayer1
L1TriggerL1TCaloLayer1_CLASS := LIBRARY
L1Trigger/L1TCaloLayer1_forbigobj+=L1TriggerL1TCaloLayer1
L1TriggerL1TCaloLayer1_INIT_FUNC        += $$(eval $$(call Library,L1TriggerL1TCaloLayer1,src/L1Trigger/L1TCaloLayer1/src,src_L1Trigger_L1TCaloLayer1_src,$(SCRAMSTORENAME_BIN),,$(SCRAMSTORENAME_LIB),$(SCRAMSTORENAME_LOGS)))
endif
ifeq ($(strip $(L1Trigger/L1TMuonOverlap)),)
ALL_COMMONRULES += src_L1Trigger_L1TMuonOverlap_src
src_L1Trigger_L1TMuonOverlap_src_parent := L1Trigger/L1TMuonOverlap
src_L1Trigger_L1TMuonOverlap_src_INIT_FUNC := $$(eval $$(call CommonProductRules,src_L1Trigger_L1TMuonOverlap_src,src/L1Trigger/L1TMuonOverlap/src,LIBRARY))
L1TriggerL1TMuonOverlap := self/L1Trigger/L1TMuonOverlap
L1Trigger/L1TMuonOverlap := L1TriggerL1TMuonOverlap
L1TriggerL1TMuonOverlap_files := $(patsubst src/L1Trigger/L1TMuonOverlap/src/%,%,$(wildcard $(foreach dir,src/L1Trigger/L1TMuonOverlap/src ,$(foreach ext,$(SRC_FILES_SUFFIXES),$(dir)/*.$(ext)))))
L1TriggerL1TMuonOverlap_BuildFile    := $(WORKINGDIR)/cache/bf/src/L1Trigger/L1TMuonOverlap/BuildFile
L1TriggerL1TMuonOverlap_LOC_USE := self  xerces-c root L1Trigger/RPCTrigger DataFormats/L1TMuon Geometry/Records Geometry/DTGeometry Geometry/CSCGeometry Geometry/RPCGeometry L1Trigger/CSCCommonTrigger L1Trigger/DTUtilities
L1TriggerL1TMuonOverlap_EX_LIB   := L1TriggerL1TMuonOverlap
L1TriggerL1TMuonOverlap_EX_USE   := $(foreach d,$(L1TriggerL1TMuonOverlap_LOC_USE),$(if $($(d)_EX_FLAGS_NO_RECURSIVE_EXPORT),,$d))
L1TriggerL1TMuonOverlap_PACKAGE := self/src/L1Trigger/L1TMuonOverlap/src
ALL_PRODS += L1TriggerL1TMuonOverlap
L1TriggerL1TMuonOverlap_CLASS := LIBRARY
L1Trigger/L1TMuonOverlap_forbigobj+=L1TriggerL1TMuonOverlap
L1TriggerL1TMuonOverlap_INIT_FUNC        += $$(eval $$(call Library,L1TriggerL1TMuonOverlap,src/L1Trigger/L1TMuonOverlap/src,src_L1Trigger_L1TMuonOverlap_src,$(SCRAMSTORENAME_BIN),,$(SCRAMSTORENAME_LIB),$(SCRAMSTORENAME_LOGS)))
endif
ifeq ($(strip $(HLTriggerOffline/Egamma)),)
ALL_COMMONRULES += src_HLTriggerOffline_Egamma_src
src_HLTriggerOffline_Egamma_src_parent := HLTriggerOffline/Egamma
src_HLTriggerOffline_Egamma_src_INIT_FUNC := $$(eval $$(call CommonProductRules,src_HLTriggerOffline_Egamma_src,src/HLTriggerOffline/Egamma/src,LIBRARY))
HLTriggerOfflineEgamma := self/HLTriggerOffline/Egamma
HLTriggerOffline/Egamma := HLTriggerOfflineEgamma
HLTriggerOfflineEgamma_files := $(patsubst src/HLTriggerOffline/Egamma/src/%,%,$(wildcard $(foreach dir,src/HLTriggerOffline/Egamma/src ,$(foreach ext,$(SRC_FILES_SUFFIXES),$(dir)/*.$(ext)))))
HLTriggerOfflineEgamma_BuildFile    := $(WORKINGDIR)/cache/bf/src/HLTriggerOffline/Egamma/BuildFile
HLTriggerOfflineEgamma_LOC_USE := self  FWCore/Framework FWCore/PluginManager FWCore/ParameterSet FWCore/ServiceRegistry DQMServices/Core DataFormats/HepMCCandidate DataFormats/CLHEP SimDataFormats/GeneratorProducts HLTrigger/HLTcore boost
HLTriggerOfflineEgamma_PRE_INIT_FUNC += $$(eval $$(call edmPlugin,HLTriggerOfflineEgamma,HLTriggerOfflineEgamma,$(SCRAMSTORENAME_LIB),src/HLTriggerOffline/Egamma/src))
HLTriggerOfflineEgamma_PACKAGE := self/src/HLTriggerOffline/Egamma/src
ALL_PRODS += HLTriggerOfflineEgamma
HLTriggerOfflineEgamma_CLASS := LIBRARY
HLTriggerOffline/Egamma_forbigobj+=HLTriggerOfflineEgamma
HLTriggerOfflineEgamma_INIT_FUNC        += $$(eval $$(call Library,HLTriggerOfflineEgamma,src/HLTriggerOffline/Egamma/src,src_HLTriggerOffline_Egamma_src,$(SCRAMSTORENAME_BIN),,$(SCRAMSTORENAME_LIB),$(SCRAMSTORENAME_LOGS)))
endif
ifeq ($(strip $(L1Trigger/L1TMuonEndCap)),)
ALL_COMMONRULES += src_L1Trigger_L1TMuonEndCap_src
src_L1Trigger_L1TMuonEndCap_src_parent := L1Trigger/L1TMuonEndCap
src_L1Trigger_L1TMuonEndCap_src_INIT_FUNC := $$(eval $$(call CommonProductRules,src_L1Trigger_L1TMuonEndCap_src,src/L1Trigger/L1TMuonEndCap/src,LIBRARY))
L1TriggerL1TMuonEndCap := self/L1Trigger/L1TMuonEndCap
L1Trigger/L1TMuonEndCap := L1TriggerL1TMuonEndCap
L1TriggerL1TMuonEndCap_files := $(patsubst src/L1Trigger/L1TMuonEndCap/src/%,%,$(wildcard $(foreach dir,src/L1Trigger/L1TMuonEndCap/src src/L1Trigger/L1TMuonEndCap/src/core_gen_summer_2013,$(foreach ext,$(SRC_FILES_SUFFIXES),$(dir)/*.$(ext)))))
L1TriggerL1TMuonEndCap_BuildFile    := $(WORKINGDIR)/cache/bf/src/L1Trigger/L1TMuonEndCap/BuildFile
L1TriggerL1TMuonEndCap_LOC_FLAGS_LDFLAGS   := -lXMLIO
L1TriggerL1TMuonEndCap_LOC_USE := self  DataFormats/L1TMuon Geometry/Records L1Trigger/DTTrackFinder Geometry/DTGeometry L1Trigger/DTUtilities Geometry/CSCGeometry L1Trigger/CSCCommonTrigger Geometry/RPCGeometry FWCore/PluginManager rootrflx PhysicsTools/UtilAlgos rootgraphics root rootmath L1Trigger/CSCTrackFinder DataFormats/ParticleFlowCandidate DataFormats/ParticleFlowReco L1Trigger/RPCTrigger L1Trigger/L1TMuon
L1TriggerL1TMuonEndCap_EX_LIB   := L1TriggerL1TMuonEndCap
L1TriggerL1TMuonEndCap_EX_USE   := $(foreach d,$(L1TriggerL1TMuonEndCap_LOC_USE),$(if $($(d)_EX_FLAGS_NO_RECURSIVE_EXPORT),,$d))
L1TriggerL1TMuonEndCap_PACKAGE := self/src/L1Trigger/L1TMuonEndCap/src
ALL_PRODS += L1TriggerL1TMuonEndCap
L1TriggerL1TMuonEndCap_CLASS := LIBRARY
L1Trigger/L1TMuonEndCap_forbigobj+=L1TriggerL1TMuonEndCap
L1TriggerL1TMuonEndCap_INIT_FUNC        += $$(eval $$(call Library,L1TriggerL1TMuonEndCap,src/L1Trigger/L1TMuonEndCap/src,src_L1Trigger_L1TMuonEndCap_src,$(SCRAMSTORENAME_BIN),,$(SCRAMSTORENAME_LIB),$(SCRAMSTORENAME_LOGS)))
endif
ifeq ($(strip $(HLTrigger/btau)),)
ALL_COMMONRULES += src_HLTrigger_btau_src
src_HLTrigger_btau_src_parent := HLTrigger/btau
src_HLTrigger_btau_src_INIT_FUNC := $$(eval $$(call CommonProductRules,src_HLTrigger_btau_src,src/HLTrigger/btau/src,LIBRARY))
HLTriggerbtau := self/HLTrigger/btau
HLTrigger/btau := HLTriggerbtau
HLTriggerbtau_files := $(patsubst src/HLTrigger/btau/src/%,%,$(wildcard $(foreach dir,src/HLTrigger/btau/src ,$(foreach ext,$(SRC_FILES_SUFFIXES),$(dir)/*.$(ext)))))
HLTriggerbtau_BuildFile    := $(WORKINGDIR)/cache/bf/src/HLTrigger/btau/BuildFile
HLTriggerbtau_LOC_USE := self  DataFormats/BTauReco DataFormats/Candidate DataFormats/Common DataFormats/HLTReco DataFormats/JetReco DataFormats/RecoCandidate DataFormats/TrackReco DataFormats/VertexReco FWCore/Framework FWCore/MessageLogger FWCore/ParameterSet HLTrigger/HLTcore RecoTracker/TkTrackingRegions RecoVertex/KalmanVertexFit RecoVertex/VertexPrimitives TrackingTools/Records TrackingTools/TransientTrack
HLTriggerbtau_PRE_INIT_FUNC += $$(eval $$(call edmPlugin,HLTriggerbtau,HLTriggerbtau,$(SCRAMSTORENAME_LIB),src/HLTrigger/btau/src))
HLTriggerbtau_PACKAGE := self/src/HLTrigger/btau/src
ALL_PRODS += HLTriggerbtau
HLTriggerbtau_CLASS := LIBRARY
HLTrigger/btau_forbigobj+=HLTriggerbtau
HLTriggerbtau_INIT_FUNC        += $$(eval $$(call Library,HLTriggerbtau,src/HLTrigger/btau/src,src_HLTrigger_btau_src,$(SCRAMSTORENAME_BIN),,$(SCRAMSTORENAME_LIB),$(SCRAMSTORENAME_LOGS)))
endif
ifeq ($(strip $(HLTrigger/HLTanalyzers)),)
ALL_COMMONRULES += src_HLTrigger_HLTanalyzers_src
src_HLTrigger_HLTanalyzers_src_parent := HLTrigger/HLTanalyzers
src_HLTrigger_HLTanalyzers_src_INIT_FUNC := $$(eval $$(call CommonProductRules,src_HLTrigger_HLTanalyzers_src,src/HLTrigger/HLTanalyzers/src,LIBRARY))
HLTriggerHLTanalyzers := self/HLTrigger/HLTanalyzers
HLTrigger/HLTanalyzers := HLTriggerHLTanalyzers
HLTriggerHLTanalyzers_files := $(patsubst src/HLTrigger/HLTanalyzers/src/%,%,$(wildcard $(foreach dir,src/HLTrigger/HLTanalyzers/src ,$(foreach ext,$(SRC_FILES_SUFFIXES),$(dir)/*.$(ext)))))
HLTriggerHLTanalyzers_BuildFile    := $(WORKINGDIR)/cache/bf/src/HLTrigger/HLTanalyzers/BuildFile
HLTriggerHLTanalyzers_LOC_USE := self  CondFormats/DataRecord CondFormats/L1TObjects DataFormats/BTauReco DataFormats/CSCDigi DataFormats/CaloTowers DataFormats/Candidate DataFormats/Common DataFormats/DTDigi DataFormats/EcalDigi DataFormats/EgammaCandidates DataFormats/EgammaReco DataFormats/FEDRawData DataFormats/GeometryVector DataFormats/HcalDigi DataFormats/JetReco DataFormats/L1CaloTrigger DataFormats/L1GlobalCaloTrigger DataFormats/L1GlobalMuonTrigger DataFormats/L1GlobalTrigger DataFormats/L1Trigger DataFormats/METReco DataFormats/MuonData DataFormats/MuonReco DataFormats/RPCDigi DataFormats/RecoCandidate DataFormats/SiPixelDigi DataFormats/SiStripDigi DataFormats/TauReco DataFormats/TrackReco DataFormats/TrajectorySeed DataFormats/HeavyIonEvent DataFormats/Luminosity SimDataFormats/HiGenData FWCore/Framework FWCore/MessageLogger FWCore/ParameterSet FWCore/PluginManager Geometry/CaloGeometry Geometry/CommonDetUnit Geometry/Records Geometry/EcalMapping HLTrigger/HLTcore L1Trigger/RegionalCaloTrigger MagneticField/Engine MagneticField/Records SimDataFormats/GeneratorProducts SimDataFormats/Track SimDataFormats/Vertex TrackingTools/TrajectoryState RecoEcal/EgammaCoreTools RecoEgamma/EgammaTools RecoHI/HiEgammaAlgos RecoJets/JetProducers TrackingTools/TransientTrack DQMServices/Core rootcore
HLTriggerHLTanalyzers_PRE_INIT_FUNC += $$(eval $$(call edmPlugin,HLTriggerHLTanalyzers,HLTriggerHLTanalyzers,$(SCRAMSTORENAME_LIB),src/HLTrigger/HLTanalyzers/src))
HLTriggerHLTanalyzers_PACKAGE := self/src/HLTrigger/HLTanalyzers/src
ALL_PRODS += HLTriggerHLTanalyzers
HLTriggerHLTanalyzers_CLASS := LIBRARY
HLTrigger/HLTanalyzers_forbigobj+=HLTriggerHLTanalyzers
HLTriggerHLTanalyzers_INIT_FUNC        += $$(eval $$(call Library,HLTriggerHLTanalyzers,src/HLTrigger/HLTanalyzers/src,src_HLTrigger_HLTanalyzers_src,$(SCRAMSTORENAME_BIN),,$(SCRAMSTORENAME_LIB),$(SCRAMSTORENAME_LOGS)))
endif
ifeq ($(strip $(RecoTracker/DeDx)),)
ALL_COMMONRULES += src_RecoTracker_DeDx_src
src_RecoTracker_DeDx_src_parent := RecoTracker/DeDx
src_RecoTracker_DeDx_src_INIT_FUNC := $$(eval $$(call CommonProductRules,src_RecoTracker_DeDx_src,src/RecoTracker/DeDx/src,LIBRARY))
RecoTrackerDeDx := self/RecoTracker/DeDx
RecoTracker/DeDx := RecoTrackerDeDx
RecoTrackerDeDx_files := $(patsubst src/RecoTracker/DeDx/src/%,%,$(wildcard $(foreach dir,src/RecoTracker/DeDx/src ,$(foreach ext,$(SRC_FILES_SUFFIXES),$(dir)/*.$(ext)))))
RecoTrackerDeDx_BuildFile    := $(WORKINGDIR)/cache/bf/src/RecoTracker/DeDx/BuildFile
RecoTrackerDeDx_LOC_USE := self  FWCore/Framework FWCore/PluginManager FWCore/ParameterSet FWCore/ServiceRegistry DataFormats/TrackReco DataFormats/DetId DataFormats/TrackerRecHit2D Geometry/Records Geometry/TrackerGeometryBuilder CondCore/DBOutputService CondFormats/PhysicsToolsObjects CondFormats/DataRecord TrackingTools/TrajectoryState PhysicsTools/UtilAlgos HLTrigger/HLTcore rootcore root clhep
RecoTrackerDeDx_EX_LIB   := RecoTrackerDeDx
RecoTrackerDeDx_EX_USE   := $(foreach d,$(RecoTrackerDeDx_LOC_USE),$(if $($(d)_EX_FLAGS_NO_RECURSIVE_EXPORT),,$d))
RecoTrackerDeDx_PACKAGE := self/src/RecoTracker/DeDx/src
ALL_PRODS += RecoTrackerDeDx
RecoTrackerDeDx_CLASS := LIBRARY
RecoTracker/DeDx_forbigobj+=RecoTrackerDeDx
RecoTrackerDeDx_INIT_FUNC        += $$(eval $$(call Library,RecoTrackerDeDx,src/RecoTracker/DeDx/src,src_RecoTracker_DeDx_src,$(SCRAMSTORENAME_BIN),,$(SCRAMSTORENAME_LIB),$(SCRAMSTORENAME_LOGS)))
endif
ifeq ($(strip $(L1Trigger/L1TMuonBarrel)),)
ALL_COMMONRULES += src_L1Trigger_L1TMuonBarrel_src
src_L1Trigger_L1TMuonBarrel_src_parent := L1Trigger/L1TMuonBarrel
src_L1Trigger_L1TMuonBarrel_src_INIT_FUNC := $$(eval $$(call CommonProductRules,src_L1Trigger_L1TMuonBarrel_src,src/L1Trigger/L1TMuonBarrel/src,LIBRARY))
L1TriggerL1TMuonBarrel := self/L1Trigger/L1TMuonBarrel
L1Trigger/L1TMuonBarrel := L1TriggerL1TMuonBarrel
L1TriggerL1TMuonBarrel_files := $(patsubst src/L1Trigger/L1TMuonBarrel/src/%,%,$(wildcard $(foreach dir,src/L1Trigger/L1TMuonBarrel/src src/L1Trigger/L1TMuonBarrel/src/Twinmux_v1,$(foreach ext,$(SRC_FILES_SUFFIXES),$(dir)/*.$(ext)))))
L1TriggerL1TMuonBarrel_BuildFile    := $(WORKINGDIR)/cache/bf/src/L1Trigger/L1TMuonBarrel/src/BuildFile
L1TriggerL1TMuonBarrel_LOC_USE := self  L1Trigger/L1TMuon L1Trigger/L1TMuonEndCap L1Trigger/DTTrackFinder FWCore/ServiceRegistry FWCore/Framework CommonTools/UtilAlgos DataFormats/HepMCCandidate DataFormats/L1TMuon DQM/DTMonitorModule CondFormats/L1TObjects CondFormats/DataRecord
L1TriggerL1TMuonBarrel_EX_LIB   := L1TriggerL1TMuonBarrel
L1TriggerL1TMuonBarrel_EX_USE   := $(foreach d,$(L1TriggerL1TMuonBarrel_LOC_USE),$(if $($(d)_EX_FLAGS_NO_RECURSIVE_EXPORT),,$d))
L1TriggerL1TMuonBarrel_PACKAGE := self/src/L1Trigger/L1TMuonBarrel/src
ALL_PRODS += L1TriggerL1TMuonBarrel
L1TriggerL1TMuonBarrel_CLASS := LIBRARY
L1Trigger/L1TMuonBarrel_forbigobj+=L1TriggerL1TMuonBarrel
L1TriggerL1TMuonBarrel_INIT_FUNC        += $$(eval $$(call Library,L1TriggerL1TMuonBarrel,src/L1Trigger/L1TMuonBarrel/src,src_L1Trigger_L1TMuonBarrel_src,$(SCRAMSTORENAME_BIN),,$(SCRAMSTORENAME_LIB),$(SCRAMSTORENAME_LOGS)))
endif
ifeq ($(strip $(L1TriggerL1TMuonPlugins)),)
L1TriggerL1TMuonPlugins := self/src/L1Trigger/L1TMuon/plugins
PLUGINS:=yes
L1TriggerL1TMuonPlugins_files := $(patsubst src/L1Trigger/L1TMuon/plugins/%,%,$(foreach file,*.cc,$(eval xfile:=$(wildcard src/L1Trigger/L1TMuon/plugins/$(file)))$(if $(xfile),$(xfile),$(warning No such file exists: src/L1Trigger/L1TMuon/plugins/$(file). Please fix src/L1Trigger/L1TMuon/plugins/BuildFile.))))
L1TriggerL1TMuonPlugins_BuildFile    := $(WORKINGDIR)/cache/bf/src/L1Trigger/L1TMuon/plugins/BuildFile
L1TriggerL1TMuonPlugins_LOC_USE := self  FWCore/Framework FWCore/PluginManager FWCore/ParameterSet FWCore/Utilities L1Trigger/L1TMuon DataFormats/L1Trigger CondFormats/L1TObjects CondFormats/DataRecord
L1TriggerL1TMuonPlugins_PRE_INIT_FUNC += $$(eval $$(call edmPlugin,L1TriggerL1TMuonPlugins,L1TriggerL1TMuonPlugins,$(SCRAMSTORENAME_LIB),src/L1Trigger/L1TMuon/plugins))
L1TriggerL1TMuonPlugins_PACKAGE := self/src/L1Trigger/L1TMuon/plugins
ALL_PRODS += L1TriggerL1TMuonPlugins
L1Trigger/L1TMuon_forbigobj+=L1TriggerL1TMuonPlugins
L1TriggerL1TMuonPlugins_INIT_FUNC        += $$(eval $$(call Library,L1TriggerL1TMuonPlugins,src/L1Trigger/L1TMuon/plugins,src_L1Trigger_L1TMuon_plugins,$(SCRAMSTORENAME_BIN),,$(SCRAMSTORENAME_LIB),$(SCRAMSTORENAME_LOGS)))
L1TriggerL1TMuonPlugins_CLASS := LIBRARY
else
$(eval $(call MultipleWarningMsg,L1TriggerL1TMuonPlugins,src/L1Trigger/L1TMuon/plugins))
endif
ALL_COMMONRULES += src_L1Trigger_L1TMuon_plugins
src_L1Trigger_L1TMuon_plugins_parent := L1Trigger/L1TMuon
src_L1Trigger_L1TMuon_plugins_INIT_FUNC += $$(eval $$(call CommonProductRules,src_L1Trigger_L1TMuon_plugins,src/L1Trigger/L1TMuon/plugins,PLUGINS))
ifeq ($(strip $(CondEmptyIOVSource)),)
CondEmptyIOVSource := self/src/CondCore/Utilities/plugins
PLUGINS:=yes
CondEmptyIOVSource_files := $(patsubst src/CondCore/Utilities/plugins/%,%,$(foreach file,EmptyIOVSource.cc,$(eval xfile:=$(wildcard src/CondCore/Utilities/plugins/$(file)))$(if $(xfile),$(xfile),$(warning No such file exists: src/CondCore/Utilities/plugins/$(file). Please fix src/CondCore/Utilities/plugins/BuildFile.))))
CondEmptyIOVSource_BuildFile    := $(WORKINGDIR)/cache/bf/src/CondCore/Utilities/plugins/BuildFile
CondEmptyIOVSource_LOC_USE := self  CondCore/CondDB FWCore/Sources
CondEmptyIOVSource_PRE_INIT_FUNC += $$(eval $$(call edmPlugin,CondEmptyIOVSource,CondEmptyIOVSource,$(SCRAMSTORENAME_LIB),src/CondCore/Utilities/plugins))
CondEmptyIOVSource_PACKAGE := self/src/CondCore/Utilities/plugins
ALL_PRODS += CondEmptyIOVSource
CondCore/Utilities_forbigobj+=CondEmptyIOVSource
CondEmptyIOVSource_INIT_FUNC        += $$(eval $$(call Library,CondEmptyIOVSource,src/CondCore/Utilities/plugins,src_CondCore_Utilities_plugins,$(SCRAMSTORENAME_BIN),,$(SCRAMSTORENAME_LIB),$(SCRAMSTORENAME_LOGS)))
CondEmptyIOVSource_CLASS := LIBRARY
else
$(eval $(call MultipleWarningMsg,CondEmptyIOVSource,src/CondCore/Utilities/plugins))
endif
ifeq ($(strip $(BasicPayload_PayloadInspector)),)
BasicPayload_PayloadInspector := self/src/CondCore/Utilities/plugins
PLUGINS:=yes
BasicPayload_PayloadInspector_files := $(patsubst src/CondCore/Utilities/plugins/%,%,$(foreach file,BasicP_PayloadInspector.cc,$(eval xfile:=$(wildcard src/CondCore/Utilities/plugins/$(file)))$(if $(xfile),$(xfile),$(warning No such file exists: src/CondCore/Utilities/plugins/$(file). Please fix src/CondCore/Utilities/plugins/BuildFile.))))
BasicPayload_PayloadInspector_BuildFile    := $(WORKINGDIR)/cache/bf/src/CondCore/Utilities/plugins/BuildFile
BasicPayload_PayloadInspector_LOC_USE := self  CondCore/Utilities CondCore/CondDB CondFormats/Common boost_python
BasicPayload_PayloadInspector_PRE_INIT_FUNC += $$(eval $$(call edmPlugin,BasicPayload_PayloadInspector,BasicPayload_PayloadInspector,$(SCRAMSTORENAME_LIB),src/CondCore/Utilities/plugins))
BasicPayload_PayloadInspector_PACKAGE := self/src/CondCore/Utilities/plugins
ALL_PRODS += BasicPayload_PayloadInspector
CondCore/Utilities_forbigobj+=BasicPayload_PayloadInspector
BasicPayload_PayloadInspector_INIT_FUNC        += $$(eval $$(call Library,BasicPayload_PayloadInspector,src/CondCore/Utilities/plugins,src_CondCore_Utilities_plugins,$(SCRAMSTORENAME_BIN),,$(SCRAMSTORENAME_LIB),$(SCRAMSTORENAME_LOGS)))
BasicPayload_PayloadInspector_CLASS := LIBRARY
else
$(eval $(call MultipleWarningMsg,BasicPayload_PayloadInspector,src/CondCore/Utilities/plugins))
endif
ALL_COMMONRULES += src_CondCore_Utilities_plugins
src_CondCore_Utilities_plugins_parent := CondCore/Utilities
src_CondCore_Utilities_plugins_INIT_FUNC += $$(eval $$(call CommonProductRules,src_CondCore_Utilities_plugins,src/CondCore/Utilities/plugins,PLUGINS))
ifeq ($(strip $(EventFilterL1TXRawToDigiAuto)),)
EventFilterL1TXRawToDigiAuto := self/src/EventFilter/L1TXRawToDigi/plugins
PLUGINS:=yes
EventFilterL1TXRawToDigiAuto_files := $(patsubst src/EventFilter/L1TXRawToDigi/plugins/%,%,$(wildcard $(foreach dir,src/EventFilter/L1TXRawToDigi/plugins ,$(foreach ext,$(SRC_FILES_SUFFIXES),$(dir)/*.$(ext)))))
EventFilterL1TXRawToDigiAuto_BuildFile    := $(WORKINGDIR)/cache/bf/src/EventFilter/L1TXRawToDigi/plugins/BuildFile
EventFilterL1TXRawToDigiAuto_LOC_USE := self  FWCore/Framework FWCore/ParameterSet FWCore/PluginManager FWCore/MessageLogger DataFormats/FEDRawData DataFormats/HcalDigi DataFormats/EcalDigi DataFormats/L1CaloTrigger DataFormats/L1DTTrackFinder DataFormats/L1GlobalMuonTrigger
EventFilterL1TXRawToDigiAuto_PRE_INIT_FUNC += $$(eval $$(call edmPlugin,EventFilterL1TXRawToDigiAuto,EventFilterL1TXRawToDigiAuto,$(SCRAMSTORENAME_LIB),src/EventFilter/L1TXRawToDigi/plugins))
EventFilterL1TXRawToDigiAuto_PACKAGE := self/src/EventFilter/L1TXRawToDigi/plugins
ALL_PRODS += EventFilterL1TXRawToDigiAuto
EventFilter/L1TXRawToDigi_forbigobj+=EventFilterL1TXRawToDigiAuto
EventFilterL1TXRawToDigiAuto_INIT_FUNC        += $$(eval $$(call Library,EventFilterL1TXRawToDigiAuto,src/EventFilter/L1TXRawToDigi/plugins,src_EventFilter_L1TXRawToDigi_plugins,$(SCRAMSTORENAME_BIN),,$(SCRAMSTORENAME_LIB),$(SCRAMSTORENAME_LOGS)))
EventFilterL1TXRawToDigiAuto_CLASS := LIBRARY
else
$(eval $(call MultipleWarningMsg,EventFilterL1TXRawToDigiAuto,src/EventFilter/L1TXRawToDigi/plugins))
endif
ALL_COMMONRULES += src_EventFilter_L1TXRawToDigi_plugins
src_EventFilter_L1TXRawToDigi_plugins_parent := EventFilter/L1TXRawToDigi
src_EventFilter_L1TXRawToDigi_plugins_INIT_FUNC += $$(eval $$(call CommonProductRules,src_EventFilter_L1TXRawToDigi_plugins,src/EventFilter/L1TXRawToDigi/plugins,PLUGINS))
ifeq ($(strip $(SiStrip_PayloadInspector)),)
SiStrip_PayloadInspector := self/src/CondCore/SiStripPlugins/plugins
PLUGINS:=yes
SiStrip_PayloadInspector_files := $(patsubst src/CondCore/SiStripPlugins/plugins/%,%,$(foreach file,SiStrip*_PayloadInspector.cc,$(eval xfile:=$(wildcard src/CondCore/SiStripPlugins/plugins/$(file)))$(if $(xfile),$(xfile),$(warning No such file exists: src/CondCore/SiStripPlugins/plugins/$(file). Please fix src/CondCore/SiStripPlugins/plugins/BuildFile.))))
SiStrip_PayloadInspector_BuildFile    := $(WORKINGDIR)/cache/bf/src/CondCore/SiStripPlugins/plugins/BuildFile
SiStrip_PayloadInspector_LOC_USE := self  CondCore/Utilities CondCore/CondDB CondFormats/Common boost_python
SiStrip_PayloadInspector_PRE_INIT_FUNC += $$(eval $$(call edmPlugin,SiStrip_PayloadInspector,SiStrip_PayloadInspector,$(SCRAMSTORENAME_LIB),src/CondCore/SiStripPlugins/plugins))
SiStrip_PayloadInspector_PACKAGE := self/src/CondCore/SiStripPlugins/plugins
ALL_PRODS += SiStrip_PayloadInspector
CondCore/SiStripPlugins_forbigobj+=SiStrip_PayloadInspector
SiStrip_PayloadInspector_INIT_FUNC        += $$(eval $$(call Library,SiStrip_PayloadInspector,src/CondCore/SiStripPlugins/plugins,src_CondCore_SiStripPlugins_plugins,$(SCRAMSTORENAME_BIN),,$(SCRAMSTORENAME_LIB),$(SCRAMSTORENAME_LOGS)))
SiStrip_PayloadInspector_CLASS := LIBRARY
else
$(eval $(call MultipleWarningMsg,SiStrip_PayloadInspector,src/CondCore/SiStripPlugins/plugins))
endif
ifeq ($(strip $(SiStripObjects_toXML)),)
SiStripObjects_toXML := self/src/CondCore/SiStripPlugins/plugins
PLUGINS:=yes
SiStripObjects_toXML_files := $(patsubst src/CondCore/SiStripPlugins/plugins/%,%,$(foreach file,SiStripObjects_toXML.cc,$(eval xfile:=$(wildcard src/CondCore/SiStripPlugins/plugins/$(file)))$(if $(xfile),$(xfile),$(warning No such file exists: src/CondCore/SiStripPlugins/plugins/$(file). Please fix src/CondCore/SiStripPlugins/plugins/BuildFile.))))
SiStripObjects_toXML_BuildFile    := $(WORKINGDIR)/cache/bf/src/CondCore/SiStripPlugins/plugins/BuildFile
SiStripObjects_toXML_LOC_USE := self  CondCore/Utilities CondCore/CondDB CondFormats/Common boost_python
SiStripObjects_toXML_PRE_INIT_FUNC += $$(eval $$(call edmPlugin,SiStripObjects_toXML,SiStripObjects_toXML,$(SCRAMSTORENAME_LIB),src/CondCore/SiStripPlugins/plugins))
SiStripObjects_toXML_PACKAGE := self/src/CondCore/SiStripPlugins/plugins
ALL_PRODS += SiStripObjects_toXML
CondCore/SiStripPlugins_forbigobj+=SiStripObjects_toXML
SiStripObjects_toXML_INIT_FUNC        += $$(eval $$(call Library,SiStripObjects_toXML,src/CondCore/SiStripPlugins/plugins,src_CondCore_SiStripPlugins_plugins,$(SCRAMSTORENAME_BIN),,$(SCRAMSTORENAME_LIB),$(SCRAMSTORENAME_LOGS)))
SiStripObjects_toXML_CLASS := LIBRARY
else
$(eval $(call MultipleWarningMsg,SiStripObjects_toXML,src/CondCore/SiStripPlugins/plugins))
endif
ALL_COMMONRULES += src_CondCore_SiStripPlugins_plugins
src_CondCore_SiStripPlugins_plugins_parent := CondCore/SiStripPlugins
src_CondCore_SiStripPlugins_plugins_INIT_FUNC += $$(eval $$(call CommonProductRules,src_CondCore_SiStripPlugins_plugins,src/CondCore/SiStripPlugins/plugins,PLUGINS))
ifeq ($(strip $(HLTriggerJSONMonitoringPlugins)),)
HLTriggerJSONMonitoringPlugins := self/src/HLTrigger/JSONMonitoring/plugins
PLUGINS:=yes
HLTriggerJSONMonitoringPlugins_files := $(patsubst src/HLTrigger/JSONMonitoring/plugins/%,%,$(foreach file,*.cc,$(eval xfile:=$(wildcard src/HLTrigger/JSONMonitoring/plugins/$(file)))$(if $(xfile),$(xfile),$(warning No such file exists: src/HLTrigger/JSONMonitoring/plugins/$(file). Please fix src/HLTrigger/JSONMonitoring/plugins/BuildFile.))))
HLTriggerJSONMonitoringPlugins_BuildFile    := $(WORKINGDIR)/cache/bf/src/HLTrigger/JSONMonitoring/plugins/BuildFile
HLTriggerJSONMonitoringPlugins_LOC_USE := self  FWCore/PrescaleService FWCore/ServiceRegistry FWCore/Utilities HLTrigger/HLTcore EventFilter/Utilities
HLTriggerJSONMonitoringPlugins_PRE_INIT_FUNC += $$(eval $$(call edmPlugin,HLTriggerJSONMonitoringPlugins,HLTriggerJSONMonitoringPlugins,$(SCRAMSTORENAME_LIB),src/HLTrigger/JSONMonitoring/plugins))
HLTriggerJSONMonitoringPlugins_PACKAGE := self/src/HLTrigger/JSONMonitoring/plugins
ALL_PRODS += HLTriggerJSONMonitoringPlugins
HLTrigger/JSONMonitoring_forbigobj+=HLTriggerJSONMonitoringPlugins
HLTriggerJSONMonitoringPlugins_INIT_FUNC        += $$(eval $$(call Library,HLTriggerJSONMonitoringPlugins,src/HLTrigger/JSONMonitoring/plugins,src_HLTrigger_JSONMonitoring_plugins,$(SCRAMSTORENAME_BIN),,$(SCRAMSTORENAME_LIB),$(SCRAMSTORENAME_LOGS)))
HLTriggerJSONMonitoringPlugins_CLASS := LIBRARY
else
$(eval $(call MultipleWarningMsg,HLTriggerJSONMonitoringPlugins,src/HLTrigger/JSONMonitoring/plugins))
endif
ALL_COMMONRULES += src_HLTrigger_JSONMonitoring_plugins
src_HLTrigger_JSONMonitoring_plugins_parent := HLTrigger/JSONMonitoring
src_HLTrigger_JSONMonitoring_plugins_INIT_FUNC += $$(eval $$(call CommonProductRules,src_HLTrigger_JSONMonitoring_plugins,src/HLTrigger/JSONMonitoring/plugins,PLUGINS))
ifeq ($(strip $(RecoTauTag/HLTProducers)),)
ALL_COMMONRULES += src_RecoTauTag_HLTProducers_src
src_RecoTauTag_HLTProducers_src_parent := RecoTauTag/HLTProducers
src_RecoTauTag_HLTProducers_src_INIT_FUNC := $$(eval $$(call CommonProductRules,src_RecoTauTag_HLTProducers_src,src/RecoTauTag/HLTProducers/src,LIBRARY))
RecoTauTagHLTProducers := self/RecoTauTag/HLTProducers
RecoTauTag/HLTProducers := RecoTauTagHLTProducers
RecoTauTagHLTProducers_files := $(patsubst src/RecoTauTag/HLTProducers/src/%,%,$(wildcard $(foreach dir,src/RecoTauTag/HLTProducers/src ,$(foreach ext,$(SRC_FILES_SUFFIXES),$(dir)/*.$(ext)))))
RecoTauTagHLTProducers_BuildFile    := $(WORKINGDIR)/cache/bf/src/RecoTauTag/HLTProducers/BuildFile
RecoTauTagHLTProducers_LOC_USE := self  FWCore/Framework FWCore/PluginManager FWCore/ParameterSet DataFormats/Common DataFormats/BTauReco DataFormats/TauReco DataFormats/TrackReco DataFormats/Math DataFormats/Candidate DataFormats/JetReco DataFormats/GeometryVector DataFormats/CaloTowers DataFormats/DetId DataFormats/EcalDetId DataFormats/EcalRecHit DataFormats/EgammaReco Geometry/CaloGeometry Geometry/Records DataFormats/VertexReco DataFormats/L1Trigger DataFormats/HLTReco HLTrigger/HLTcore DataFormats/L1GlobalTrigger RecoPixelVertexing/PixelTrackFitting root
RecoTauTagHLTProducers_PRE_INIT_FUNC += $$(eval $$(call edmPlugin,RecoTauTagHLTProducers,RecoTauTagHLTProducers,$(SCRAMSTORENAME_LIB),src/RecoTauTag/HLTProducers/src))
RecoTauTagHLTProducers_PACKAGE := self/src/RecoTauTag/HLTProducers/src
ALL_PRODS += RecoTauTagHLTProducers
RecoTauTagHLTProducers_CLASS := LIBRARY
RecoTauTag/HLTProducers_forbigobj+=RecoTauTagHLTProducers
RecoTauTagHLTProducers_INIT_FUNC        += $$(eval $$(call Library,RecoTauTagHLTProducers,src/RecoTauTag/HLTProducers/src,src_RecoTauTag_HLTProducers_src,$(SCRAMSTORENAME_BIN),,$(SCRAMSTORENAME_LIB),$(SCRAMSTORENAME_LOGS)))
endif
ifeq ($(strip $(HLTriggerHLTcorePlugins)),)
HLTriggerHLTcorePlugins := self/src/HLTrigger/HLTcore/plugins
PLUGINS:=yes
HLTriggerHLTcorePlugins_files := $(patsubst src/HLTrigger/HLTcore/plugins/%,%,$(foreach file,*.cc,$(eval xfile:=$(wildcard src/HLTrigger/HLTcore/plugins/$(file)))$(if $(xfile),$(xfile),$(warning No such file exists: src/HLTrigger/HLTcore/plugins/$(file). Please fix src/HLTrigger/HLTcore/plugins/BuildFile.))))
HLTriggerHLTcorePlugins_BuildFile    := $(WORKINGDIR)/cache/bf/src/HLTrigger/HLTcore/plugins/BuildFile
HLTriggerHLTcorePlugins_LOC_USE := self  DataFormats/Candidate DataFormats/EgammaCandidates DataFormats/HcalIsolatedTrack DataFormats/HLTReco DataFormats/JetReco DataFormats/L1Trigger DataFormats/METReco DataFormats/Provenance DataFormats/RecoCandidate DataFormats/TauReco HLTrigger/HLTcore FWCore/PrescaleService FWCore/ServiceRegistry FWCore/Utilities
HLTriggerHLTcorePlugins_PRE_INIT_FUNC += $$(eval $$(call edmPlugin,HLTriggerHLTcorePlugins,HLTriggerHLTcorePlugins,$(SCRAMSTORENAME_LIB),src/HLTrigger/HLTcore/plugins))
HLTriggerHLTcorePlugins_PACKAGE := self/src/HLTrigger/HLTcore/plugins
ALL_PRODS += HLTriggerHLTcorePlugins
HLTrigger/HLTcore_forbigobj+=HLTriggerHLTcorePlugins
HLTriggerHLTcorePlugins_INIT_FUNC        += $$(eval $$(call Library,HLTriggerHLTcorePlugins,src/HLTrigger/HLTcore/plugins,src_HLTrigger_HLTcore_plugins,$(SCRAMSTORENAME_BIN),,$(SCRAMSTORENAME_LIB),$(SCRAMSTORENAME_LOGS)))
HLTriggerHLTcorePlugins_CLASS := LIBRARY
else
$(eval $(call MultipleWarningMsg,HLTriggerHLTcorePlugins,src/HLTrigger/HLTcore/plugins))
endif
ALL_COMMONRULES += src_HLTrigger_HLTcore_plugins
src_HLTrigger_HLTcore_plugins_parent := HLTrigger/HLTcore
src_HLTrigger_HLTcore_plugins_INIT_FUNC += $$(eval $$(call CommonProductRules,src_HLTrigger_HLTcore_plugins,src/HLTrigger/HLTcore/plugins,PLUGINS))
ifeq ($(strip $(CondCore/EcalPlugins)),)
ALL_COMMONRULES += src_CondCore_EcalPlugins_src
src_CondCore_EcalPlugins_src_parent := CondCore/EcalPlugins
src_CondCore_EcalPlugins_src_INIT_FUNC := $$(eval $$(call CommonProductRules,src_CondCore_EcalPlugins_src,src/CondCore/EcalPlugins/src,LIBRARY))
CondCoreEcalPlugins := self/CondCore/EcalPlugins
CondCore/EcalPlugins := CondCoreEcalPlugins
CondCoreEcalPlugins_files := $(patsubst src/CondCore/EcalPlugins/src/%,%,$(wildcard $(foreach dir,src/CondCore/EcalPlugins/src ,$(foreach ext,$(SRC_FILES_SUFFIXES),$(dir)/*.$(ext)))))
CondCoreEcalPlugins_BuildFile    := $(WORKINGDIR)/cache/bf/src/CondCore/EcalPlugins/BuildFile
CondCoreEcalPlugins_LOC_USE := self  FWCore/Framework FWCore/PluginManager CondCore/ESSources CondFormats/EcalObjects CondFormats/DataRecord
CondCoreEcalPlugins_PRE_INIT_FUNC += $$(eval $$(call edmPlugin,CondCoreEcalPlugins,CondCoreEcalPlugins,$(SCRAMSTORENAME_LIB),src/CondCore/EcalPlugins/src))
CondCoreEcalPlugins_PACKAGE := self/src/CondCore/EcalPlugins/src
ALL_PRODS += CondCoreEcalPlugins
CondCoreEcalPlugins_CLASS := LIBRARY
CondCore/EcalPlugins_forbigobj+=CondCoreEcalPlugins
CondCoreEcalPlugins_INIT_FUNC        += $$(eval $$(call Library,CondCoreEcalPlugins,src/CondCore/EcalPlugins/src,src_CondCore_EcalPlugins_src,$(SCRAMSTORENAME_BIN),,$(SCRAMSTORENAME_LIB),$(SCRAMSTORENAME_LOGS)))
endif
ifeq ($(strip $(L1Trigger/L1TMuon)),)
ALL_COMMONRULES += src_L1Trigger_L1TMuon_src
src_L1Trigger_L1TMuon_src_parent := L1Trigger/L1TMuon
src_L1Trigger_L1TMuon_src_INIT_FUNC := $$(eval $$(call CommonProductRules,src_L1Trigger_L1TMuon_src,src/L1Trigger/L1TMuon/src,LIBRARY))
L1TriggerL1TMuon := self/L1Trigger/L1TMuon
L1Trigger/L1TMuon := L1TriggerL1TMuon
L1TriggerL1TMuon_files := $(patsubst src/L1Trigger/L1TMuon/src/%,%,$(wildcard $(foreach dir,src/L1Trigger/L1TMuon/src ,$(foreach ext,$(SRC_FILES_SUFFIXES),$(dir)/*.$(ext)))))
L1TriggerL1TMuon_BuildFile    := $(WORKINGDIR)/cache/bf/src/L1Trigger/L1TMuon/BuildFile
L1TriggerL1TMuon_LOC_USE := self  DataFormats/L1TMuon Geometry/Records L1Trigger/DTTrackFinder Geometry/DTGeometry L1Trigger/DTUtilities Geometry/CSCGeometry L1Trigger/CSCCommonTrigger Geometry/RPCGeometry FWCore/PluginManager rootrflx PhysicsTools/UtilAlgos rootgraphics root rootmath L1Trigger/CSCTrackFinder DataFormats/ParticleFlowCandidate DataFormats/ParticleFlowReco L1Trigger/RPCTrigger
L1TriggerL1TMuon_EX_LIB   := L1TriggerL1TMuon
L1TriggerL1TMuon_EX_USE   := $(foreach d,$(L1TriggerL1TMuon_LOC_USE),$(if $($(d)_EX_FLAGS_NO_RECURSIVE_EXPORT),,$d))
L1TriggerL1TMuon_PACKAGE := self/src/L1Trigger/L1TMuon/src
ALL_PRODS += L1TriggerL1TMuon
L1TriggerL1TMuon_CLASS := LIBRARY
L1Trigger/L1TMuon_forbigobj+=L1TriggerL1TMuon
L1TriggerL1TMuon_INIT_FUNC        += $$(eval $$(call Library,L1TriggerL1TMuon,src/L1Trigger/L1TMuon/src,src_L1Trigger_L1TMuon_src,$(SCRAMSTORENAME_BIN),,$(SCRAMSTORENAME_LIB),$(SCRAMSTORENAME_LOGS)))
endif
