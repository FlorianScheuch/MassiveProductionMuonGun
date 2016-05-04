ifeq ($(strip $(EventFilterCSCTFRawToDigiPlugins)),)
EventFilterCSCTFRawToDigiPlugins := self/src/EventFilter/CSCTFRawToDigi/plugins
PLUGINS:=yes
EventFilterCSCTFRawToDigiPlugins_files := $(patsubst src/EventFilter/CSCTFRawToDigi/plugins/%,%,$(foreach file,*.cc,$(eval xfile:=$(wildcard src/EventFilter/CSCTFRawToDigi/plugins/$(file)))$(if $(xfile),$(xfile),$(warning No such file exists: src/EventFilter/CSCTFRawToDigi/plugins/$(file). Please fix src/EventFilter/CSCTFRawToDigi/plugins/BuildFile.))))
EventFilterCSCTFRawToDigiPlugins_BuildFile    := $(WORKINGDIR)/cache/bf/src/EventFilter/CSCTFRawToDigi/plugins/BuildFile
EventFilterCSCTFRawToDigiPlugins_LOC_USE := self  EventFilter/CSCTFRawToDigi FWCore/Utilities
EventFilterCSCTFRawToDigiPlugins_PRE_INIT_FUNC += $$(eval $$(call edmPlugin,EventFilterCSCTFRawToDigiPlugins,EventFilterCSCTFRawToDigiPlugins,$(SCRAMSTORENAME_LIB),src/EventFilter/CSCTFRawToDigi/plugins))
EventFilterCSCTFRawToDigiPlugins_PACKAGE := self/src/EventFilter/CSCTFRawToDigi/plugins
ALL_PRODS += EventFilterCSCTFRawToDigiPlugins
EventFilter/CSCTFRawToDigi_forbigobj+=EventFilterCSCTFRawToDigiPlugins
EventFilterCSCTFRawToDigiPlugins_INIT_FUNC        += $$(eval $$(call Library,EventFilterCSCTFRawToDigiPlugins,src/EventFilter/CSCTFRawToDigi/plugins,src_EventFilter_CSCTFRawToDigi_plugins,$(SCRAMSTORENAME_BIN),,$(SCRAMSTORENAME_LIB),$(SCRAMSTORENAME_LOGS)))
EventFilterCSCTFRawToDigiPlugins_CLASS := LIBRARY
else
$(eval $(call MultipleWarningMsg,EventFilterCSCTFRawToDigiPlugins,src/EventFilter/CSCTFRawToDigi/plugins))
endif
ALL_COMMONRULES += src_EventFilter_CSCTFRawToDigi_plugins
src_EventFilter_CSCTFRawToDigi_plugins_parent := EventFilter/CSCTFRawToDigi
src_EventFilter_CSCTFRawToDigi_plugins_INIT_FUNC += $$(eval $$(call CommonProductRules,src_EventFilter_CSCTFRawToDigi_plugins,src/EventFilter/CSCTFRawToDigi/plugins,PLUGINS))
