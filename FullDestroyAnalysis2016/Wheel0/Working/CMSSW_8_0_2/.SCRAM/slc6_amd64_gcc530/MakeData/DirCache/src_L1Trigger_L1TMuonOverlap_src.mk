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
