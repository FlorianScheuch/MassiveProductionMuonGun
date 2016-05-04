ifeq ($(strip $(EventFilterL1TRawToDigiAuto)),)
EventFilterL1TRawToDigiAuto := self/src/EventFilter/L1TRawToDigi/plugins
PLUGINS:=yes
EventFilterL1TRawToDigiAuto_files := $(patsubst src/EventFilter/L1TRawToDigi/plugins/%,%,$(wildcard $(foreach dir,src/EventFilter/L1TRawToDigi/plugins ,$(foreach ext,$(SRC_FILES_SUFFIXES),$(dir)/*.$(ext)))))
EventFilterL1TRawToDigiAuto_BuildFile    := $(WORKINGDIR)/cache/bf/src/EventFilter/L1TRawToDigi/plugins/BuildFile
EventFilterL1TRawToDigiAuto_LOC_USE := self  FWCore/Framework FWCore/PluginManager FWCore/ParameterSet DataFormats/FEDRawData EventFilter/L1TRawToDigi
EventFilterL1TRawToDigiAuto_PRE_INIT_FUNC += $$(eval $$(call edmPlugin,EventFilterL1TRawToDigiAuto,EventFilterL1TRawToDigiAuto,$(SCRAMSTORENAME_LIB),src/EventFilter/L1TRawToDigi/plugins))
EventFilterL1TRawToDigiAuto_PACKAGE := self/src/EventFilter/L1TRawToDigi/plugins
ALL_PRODS += EventFilterL1TRawToDigiAuto
EventFilter/L1TRawToDigi_forbigobj+=EventFilterL1TRawToDigiAuto
EventFilterL1TRawToDigiAuto_INIT_FUNC        += $$(eval $$(call Library,EventFilterL1TRawToDigiAuto,src/EventFilter/L1TRawToDigi/plugins,src_EventFilter_L1TRawToDigi_plugins,$(SCRAMSTORENAME_BIN),,$(SCRAMSTORENAME_LIB),$(SCRAMSTORENAME_LOGS)))
EventFilterL1TRawToDigiAuto_CLASS := LIBRARY
else
$(eval $(call MultipleWarningMsg,EventFilterL1TRawToDigiAuto,src/EventFilter/L1TRawToDigi/plugins))
endif
ALL_COMMONRULES += src_EventFilter_L1TRawToDigi_plugins
src_EventFilter_L1TRawToDigi_plugins_parent := EventFilter/L1TRawToDigi
src_EventFilter_L1TRawToDigi_plugins_INIT_FUNC += $$(eval $$(call CommonProductRules,src_EventFilter_L1TRawToDigi_plugins,src/EventFilter/L1TRawToDigi/plugins,PLUGINS))
