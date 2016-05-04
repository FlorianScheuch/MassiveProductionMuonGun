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
