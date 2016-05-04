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
