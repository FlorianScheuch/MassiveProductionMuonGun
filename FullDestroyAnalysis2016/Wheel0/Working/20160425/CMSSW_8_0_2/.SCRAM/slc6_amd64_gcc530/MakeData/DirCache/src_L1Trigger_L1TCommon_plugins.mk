ifeq ($(strip $(L1TriggerL1TCommonAuto)),)
L1TriggerL1TCommonAuto := self/src/L1Trigger/L1TCommon/plugins
PLUGINS:=yes
L1TriggerL1TCommonAuto_files := $(patsubst src/L1Trigger/L1TCommon/plugins/%,%,$(wildcard $(foreach dir,src/L1Trigger/L1TCommon/plugins ,$(foreach ext,$(SRC_FILES_SUFFIXES),$(dir)/*.$(ext)))))
L1TriggerL1TCommonAuto_BuildFile    := $(WORKINGDIR)/cache/bf/src/L1Trigger/L1TCommon/plugins/BuildFile
L1TriggerL1TCommonAuto_LOC_USE := self  FWCore/Framework FWCore/PluginManager FWCore/ParameterSet CondFormats/L1TObjects CondFormats/DataRecord DataFormats/L1Trigger DataFormats/L1TCalorimeter DataFormats/L1TMuon
L1TriggerL1TCommonAuto_PRE_INIT_FUNC += $$(eval $$(call edmPlugin,L1TriggerL1TCommonAuto,L1TriggerL1TCommonAuto,$(SCRAMSTORENAME_LIB),src/L1Trigger/L1TCommon/plugins))
L1TriggerL1TCommonAuto_PACKAGE := self/src/L1Trigger/L1TCommon/plugins
ALL_PRODS += L1TriggerL1TCommonAuto
L1Trigger/L1TCommon_forbigobj+=L1TriggerL1TCommonAuto
L1TriggerL1TCommonAuto_INIT_FUNC        += $$(eval $$(call Library,L1TriggerL1TCommonAuto,src/L1Trigger/L1TCommon/plugins,src_L1Trigger_L1TCommon_plugins,$(SCRAMSTORENAME_BIN),,$(SCRAMSTORENAME_LIB),$(SCRAMSTORENAME_LOGS)))
L1TriggerL1TCommonAuto_CLASS := LIBRARY
else
$(eval $(call MultipleWarningMsg,L1TriggerL1TCommonAuto,src/L1Trigger/L1TCommon/plugins))
endif
ALL_COMMONRULES += src_L1Trigger_L1TCommon_plugins
src_L1Trigger_L1TCommon_plugins_parent := L1Trigger/L1TCommon
src_L1Trigger_L1TCommon_plugins_INIT_FUNC += $$(eval $$(call CommonProductRules,src_L1Trigger_L1TCommon_plugins,src/L1Trigger/L1TCommon/plugins,PLUGINS))
