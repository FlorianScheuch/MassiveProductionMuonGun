ifeq ($(strip $(CaloOnlineToolsEcalToolsPlugins)),)
CaloOnlineToolsEcalToolsPlugins := self/src/CaloOnlineTools/EcalTools/plugins
PLUGINS:=yes
CaloOnlineToolsEcalToolsPlugins_files := $(patsubst src/CaloOnlineTools/EcalTools/plugins/%,%,$(foreach file,*.cc,$(eval xfile:=$(wildcard src/CaloOnlineTools/EcalTools/plugins/$(file)))$(if $(xfile),$(xfile),$(warning No such file exists: src/CaloOnlineTools/EcalTools/plugins/$(file). Please fix src/CaloOnlineTools/EcalTools/plugins/BuildFile.))))
CaloOnlineToolsEcalToolsPlugins_BuildFile    := $(WORKINGDIR)/cache/bf/src/CaloOnlineTools/EcalTools/plugins/BuildFile
CaloOnlineToolsEcalToolsPlugins_LOC_USE := self  CaloOnlineTools/EcalTools FWCore/Framework FWCore/ParameterSet FWCore/Utilities CondFormats/EcalObjects CondFormats/L1TObjects DataFormats/DetId DataFormats/EcalDigi DataFormats/EcalRawData DataFormats/EcalRecHit DataFormats/FEDRawData DataFormats/L1GlobalMuonTrigger DataFormats/L1GlobalTrigger Geometry/EcalMapping Geometry/CaloTopology HLTrigger/HLTcore CommonTools/UtilAlgos TrackingTools/TrackAssociator rootgraphics rootcore
CaloOnlineToolsEcalToolsPlugins_PRE_INIT_FUNC += $$(eval $$(call edmPlugin,CaloOnlineToolsEcalToolsPlugins,CaloOnlineToolsEcalToolsPlugins,$(SCRAMSTORENAME_LIB),src/CaloOnlineTools/EcalTools/plugins))
CaloOnlineToolsEcalToolsPlugins_PACKAGE := self/src/CaloOnlineTools/EcalTools/plugins
ALL_PRODS += CaloOnlineToolsEcalToolsPlugins
CaloOnlineTools/EcalTools_forbigobj+=CaloOnlineToolsEcalToolsPlugins
CaloOnlineToolsEcalToolsPlugins_INIT_FUNC        += $$(eval $$(call Library,CaloOnlineToolsEcalToolsPlugins,src/CaloOnlineTools/EcalTools/plugins,src_CaloOnlineTools_EcalTools_plugins,$(SCRAMSTORENAME_BIN),,$(SCRAMSTORENAME_LIB),$(SCRAMSTORENAME_LOGS)))
CaloOnlineToolsEcalToolsPlugins_CLASS := LIBRARY
else
$(eval $(call MultipleWarningMsg,CaloOnlineToolsEcalToolsPlugins,src/CaloOnlineTools/EcalTools/plugins))
endif
ALL_COMMONRULES += src_CaloOnlineTools_EcalTools_plugins
src_CaloOnlineTools_EcalTools_plugins_parent := CaloOnlineTools/EcalTools
src_CaloOnlineTools_EcalTools_plugins_INIT_FUNC += $$(eval $$(call CommonProductRules,src_CaloOnlineTools_EcalTools_plugins,src/CaloOnlineTools/EcalTools/plugins,PLUGINS))
