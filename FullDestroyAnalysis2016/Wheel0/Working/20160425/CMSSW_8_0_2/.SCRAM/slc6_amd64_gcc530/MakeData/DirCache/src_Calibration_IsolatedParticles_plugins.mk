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
