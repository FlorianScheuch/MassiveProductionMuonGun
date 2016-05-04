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
