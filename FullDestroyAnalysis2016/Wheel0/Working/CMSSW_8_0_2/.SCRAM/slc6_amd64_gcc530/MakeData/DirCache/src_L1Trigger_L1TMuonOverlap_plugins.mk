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
