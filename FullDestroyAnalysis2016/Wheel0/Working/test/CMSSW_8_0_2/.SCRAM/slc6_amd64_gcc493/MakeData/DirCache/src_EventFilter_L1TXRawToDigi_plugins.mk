ifeq ($(strip $(EventFilterL1TXRawToDigiAuto)),)
EventFilterL1TXRawToDigiAuto := self/src/EventFilter/L1TXRawToDigi/plugins
PLUGINS:=yes
EventFilterL1TXRawToDigiAuto_files := $(patsubst src/EventFilter/L1TXRawToDigi/plugins/%,%,$(wildcard $(foreach dir,src/EventFilter/L1TXRawToDigi/plugins ,$(foreach ext,$(SRC_FILES_SUFFIXES),$(dir)/*.$(ext)))))
EventFilterL1TXRawToDigiAuto_BuildFile    := $(WORKINGDIR)/cache/bf/src/EventFilter/L1TXRawToDigi/plugins/BuildFile
EventFilterL1TXRawToDigiAuto_LOC_USE := self  FWCore/Framework FWCore/ParameterSet FWCore/PluginManager FWCore/MessageLogger DataFormats/FEDRawData DataFormats/HcalDigi DataFormats/EcalDigi DataFormats/L1CaloTrigger DataFormats/L1DTTrackFinder DataFormats/L1GlobalMuonTrigger
EventFilterL1TXRawToDigiAuto_PRE_INIT_FUNC += $$(eval $$(call edmPlugin,EventFilterL1TXRawToDigiAuto,EventFilterL1TXRawToDigiAuto,$(SCRAMSTORENAME_LIB),src/EventFilter/L1TXRawToDigi/plugins))
EventFilterL1TXRawToDigiAuto_PACKAGE := self/src/EventFilter/L1TXRawToDigi/plugins
ALL_PRODS += EventFilterL1TXRawToDigiAuto
EventFilter/L1TXRawToDigi_forbigobj+=EventFilterL1TXRawToDigiAuto
EventFilterL1TXRawToDigiAuto_INIT_FUNC        += $$(eval $$(call Library,EventFilterL1TXRawToDigiAuto,src/EventFilter/L1TXRawToDigi/plugins,src_EventFilter_L1TXRawToDigi_plugins,$(SCRAMSTORENAME_BIN),,$(SCRAMSTORENAME_LIB),$(SCRAMSTORENAME_LOGS)))
EventFilterL1TXRawToDigiAuto_CLASS := LIBRARY
else
$(eval $(call MultipleWarningMsg,EventFilterL1TXRawToDigiAuto,src/EventFilter/L1TXRawToDigi/plugins))
endif
ALL_COMMONRULES += src_EventFilter_L1TXRawToDigi_plugins
src_EventFilter_L1TXRawToDigi_plugins_parent := EventFilter/L1TXRawToDigi
src_EventFilter_L1TXRawToDigi_plugins_INIT_FUNC += $$(eval $$(call CommonProductRules,src_EventFilter_L1TXRawToDigi_plugins,src/EventFilter/L1TXRawToDigi/plugins,PLUGINS))
