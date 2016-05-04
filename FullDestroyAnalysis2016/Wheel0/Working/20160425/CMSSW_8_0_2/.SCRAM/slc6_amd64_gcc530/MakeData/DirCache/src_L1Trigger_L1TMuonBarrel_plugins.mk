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
