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
