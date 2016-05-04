ifeq ($(strip $(HLTriggerJSONMonitoringPlugins)),)
HLTriggerJSONMonitoringPlugins := self/src/HLTrigger/JSONMonitoring/plugins
PLUGINS:=yes
HLTriggerJSONMonitoringPlugins_files := $(patsubst src/HLTrigger/JSONMonitoring/plugins/%,%,$(foreach file,*.cc,$(eval xfile:=$(wildcard src/HLTrigger/JSONMonitoring/plugins/$(file)))$(if $(xfile),$(xfile),$(warning No such file exists: src/HLTrigger/JSONMonitoring/plugins/$(file). Please fix src/HLTrigger/JSONMonitoring/plugins/BuildFile.))))
HLTriggerJSONMonitoringPlugins_BuildFile    := $(WORKINGDIR)/cache/bf/src/HLTrigger/JSONMonitoring/plugins/BuildFile
HLTriggerJSONMonitoringPlugins_LOC_USE := self  FWCore/PrescaleService FWCore/ServiceRegistry FWCore/Utilities HLTrigger/HLTcore EventFilter/Utilities
HLTriggerJSONMonitoringPlugins_PRE_INIT_FUNC += $$(eval $$(call edmPlugin,HLTriggerJSONMonitoringPlugins,HLTriggerJSONMonitoringPlugins,$(SCRAMSTORENAME_LIB),src/HLTrigger/JSONMonitoring/plugins))
HLTriggerJSONMonitoringPlugins_PACKAGE := self/src/HLTrigger/JSONMonitoring/plugins
ALL_PRODS += HLTriggerJSONMonitoringPlugins
HLTrigger/JSONMonitoring_forbigobj+=HLTriggerJSONMonitoringPlugins
HLTriggerJSONMonitoringPlugins_INIT_FUNC        += $$(eval $$(call Library,HLTriggerJSONMonitoringPlugins,src/HLTrigger/JSONMonitoring/plugins,src_HLTrigger_JSONMonitoring_plugins,$(SCRAMSTORENAME_BIN),,$(SCRAMSTORENAME_LIB),$(SCRAMSTORENAME_LOGS)))
HLTriggerJSONMonitoringPlugins_CLASS := LIBRARY
else
$(eval $(call MultipleWarningMsg,HLTriggerJSONMonitoringPlugins,src/HLTrigger/JSONMonitoring/plugins))
endif
ALL_COMMONRULES += src_HLTrigger_JSONMonitoring_plugins
src_HLTrigger_JSONMonitoring_plugins_parent := HLTrigger/JSONMonitoring
src_HLTrigger_JSONMonitoring_plugins_INIT_FUNC += $$(eval $$(call CommonProductRules,src_HLTrigger_JSONMonitoring_plugins,src/HLTrigger/JSONMonitoring/plugins,PLUGINS))
