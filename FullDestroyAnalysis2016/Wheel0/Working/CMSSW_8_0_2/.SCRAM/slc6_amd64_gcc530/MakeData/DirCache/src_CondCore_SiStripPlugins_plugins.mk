ifeq ($(strip $(SiStrip_PayloadInspector)),)
SiStrip_PayloadInspector := self/src/CondCore/SiStripPlugins/plugins
PLUGINS:=yes
SiStrip_PayloadInspector_files := $(patsubst src/CondCore/SiStripPlugins/plugins/%,%,$(foreach file,SiStrip*_PayloadInspector.cc,$(eval xfile:=$(wildcard src/CondCore/SiStripPlugins/plugins/$(file)))$(if $(xfile),$(xfile),$(warning No such file exists: src/CondCore/SiStripPlugins/plugins/$(file). Please fix src/CondCore/SiStripPlugins/plugins/BuildFile.))))
SiStrip_PayloadInspector_BuildFile    := $(WORKINGDIR)/cache/bf/src/CondCore/SiStripPlugins/plugins/BuildFile
SiStrip_PayloadInspector_LOC_USE := self  CondCore/Utilities CondCore/CondDB CondFormats/Common boost_python
SiStrip_PayloadInspector_PRE_INIT_FUNC += $$(eval $$(call edmPlugin,SiStrip_PayloadInspector,SiStrip_PayloadInspector,$(SCRAMSTORENAME_LIB),src/CondCore/SiStripPlugins/plugins))
SiStrip_PayloadInspector_PACKAGE := self/src/CondCore/SiStripPlugins/plugins
ALL_PRODS += SiStrip_PayloadInspector
CondCore/SiStripPlugins_forbigobj+=SiStrip_PayloadInspector
SiStrip_PayloadInspector_INIT_FUNC        += $$(eval $$(call Library,SiStrip_PayloadInspector,src/CondCore/SiStripPlugins/plugins,src_CondCore_SiStripPlugins_plugins,$(SCRAMSTORENAME_BIN),,$(SCRAMSTORENAME_LIB),$(SCRAMSTORENAME_LOGS)))
SiStrip_PayloadInspector_CLASS := LIBRARY
else
$(eval $(call MultipleWarningMsg,SiStrip_PayloadInspector,src/CondCore/SiStripPlugins/plugins))
endif
ifeq ($(strip $(SiStripObjects_toXML)),)
SiStripObjects_toXML := self/src/CondCore/SiStripPlugins/plugins
PLUGINS:=yes
SiStripObjects_toXML_files := $(patsubst src/CondCore/SiStripPlugins/plugins/%,%,$(foreach file,SiStripObjects_toXML.cc,$(eval xfile:=$(wildcard src/CondCore/SiStripPlugins/plugins/$(file)))$(if $(xfile),$(xfile),$(warning No such file exists: src/CondCore/SiStripPlugins/plugins/$(file). Please fix src/CondCore/SiStripPlugins/plugins/BuildFile.))))
SiStripObjects_toXML_BuildFile    := $(WORKINGDIR)/cache/bf/src/CondCore/SiStripPlugins/plugins/BuildFile
SiStripObjects_toXML_LOC_USE := self  CondCore/Utilities CondCore/CondDB CondFormats/Common boost_python
SiStripObjects_toXML_PRE_INIT_FUNC += $$(eval $$(call edmPlugin,SiStripObjects_toXML,SiStripObjects_toXML,$(SCRAMSTORENAME_LIB),src/CondCore/SiStripPlugins/plugins))
SiStripObjects_toXML_PACKAGE := self/src/CondCore/SiStripPlugins/plugins
ALL_PRODS += SiStripObjects_toXML
CondCore/SiStripPlugins_forbigobj+=SiStripObjects_toXML
SiStripObjects_toXML_INIT_FUNC        += $$(eval $$(call Library,SiStripObjects_toXML,src/CondCore/SiStripPlugins/plugins,src_CondCore_SiStripPlugins_plugins,$(SCRAMSTORENAME_BIN),,$(SCRAMSTORENAME_LIB),$(SCRAMSTORENAME_LOGS)))
SiStripObjects_toXML_CLASS := LIBRARY
else
$(eval $(call MultipleWarningMsg,SiStripObjects_toXML,src/CondCore/SiStripPlugins/plugins))
endif
ALL_COMMONRULES += src_CondCore_SiStripPlugins_plugins
src_CondCore_SiStripPlugins_plugins_parent := CondCore/SiStripPlugins
src_CondCore_SiStripPlugins_plugins_INIT_FUNC += $$(eval $$(call CommonProductRules,src_CondCore_SiStripPlugins_plugins,src/CondCore/SiStripPlugins/plugins,PLUGINS))
