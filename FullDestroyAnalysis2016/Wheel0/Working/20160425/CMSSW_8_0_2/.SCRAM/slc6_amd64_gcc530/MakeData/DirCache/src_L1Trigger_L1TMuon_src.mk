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
