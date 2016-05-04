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
