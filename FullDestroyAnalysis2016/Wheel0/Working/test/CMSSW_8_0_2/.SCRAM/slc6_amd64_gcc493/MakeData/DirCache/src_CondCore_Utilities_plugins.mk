ifeq ($(strip $(CondEmptyIOVSource)),)
CondEmptyIOVSource := self/src/CondCore/Utilities/plugins
PLUGINS:=yes
CondEmptyIOVSource_files := $(patsubst src/CondCore/Utilities/plugins/%,%,$(foreach file,EmptyIOVSource.cc,$(eval xfile:=$(wildcard src/CondCore/Utilities/plugins/$(file)))$(if $(xfile),$(xfile),$(warning No such file exists: src/CondCore/Utilities/plugins/$(file). Please fix src/CondCore/Utilities/plugins/BuildFile.))))
CondEmptyIOVSource_BuildFile    := $(WORKINGDIR)/cache/bf/src/CondCore/Utilities/plugins/BuildFile
CondEmptyIOVSource_LOC_USE := self  CondCore/CondDB FWCore/Sources
CondEmptyIOVSource_PRE_INIT_FUNC += $$(eval $$(call edmPlugin,CondEmptyIOVSource,CondEmptyIOVSource,$(SCRAMSTORENAME_LIB),src/CondCore/Utilities/plugins))
CondEmptyIOVSource_PACKAGE := self/src/CondCore/Utilities/plugins
ALL_PRODS += CondEmptyIOVSource
CondCore/Utilities_forbigobj+=CondEmptyIOVSource
CondEmptyIOVSource_INIT_FUNC        += $$(eval $$(call Library,CondEmptyIOVSource,src/CondCore/Utilities/plugins,src_CondCore_Utilities_plugins,$(SCRAMSTORENAME_BIN),,$(SCRAMSTORENAME_LIB),$(SCRAMSTORENAME_LOGS)))
CondEmptyIOVSource_CLASS := LIBRARY
else
$(eval $(call MultipleWarningMsg,CondEmptyIOVSource,src/CondCore/Utilities/plugins))
endif
ifeq ($(strip $(BasicPayload_PayloadInspector)),)
BasicPayload_PayloadInspector := self/src/CondCore/Utilities/plugins
PLUGINS:=yes
BasicPayload_PayloadInspector_files := $(patsubst src/CondCore/Utilities/plugins/%,%,$(foreach file,BasicP_PayloadInspector.cc,$(eval xfile:=$(wildcard src/CondCore/Utilities/plugins/$(file)))$(if $(xfile),$(xfile),$(warning No such file exists: src/CondCore/Utilities/plugins/$(file). Please fix src/CondCore/Utilities/plugins/BuildFile.))))
BasicPayload_PayloadInspector_BuildFile    := $(WORKINGDIR)/cache/bf/src/CondCore/Utilities/plugins/BuildFile
BasicPayload_PayloadInspector_LOC_USE := self  CondCore/Utilities CondCore/CondDB CondFormats/Common boost_python
BasicPayload_PayloadInspector_PRE_INIT_FUNC += $$(eval $$(call edmPlugin,BasicPayload_PayloadInspector,BasicPayload_PayloadInspector,$(SCRAMSTORENAME_LIB),src/CondCore/Utilities/plugins))
BasicPayload_PayloadInspector_PACKAGE := self/src/CondCore/Utilities/plugins
ALL_PRODS += BasicPayload_PayloadInspector
CondCore/Utilities_forbigobj+=BasicPayload_PayloadInspector
BasicPayload_PayloadInspector_INIT_FUNC        += $$(eval $$(call Library,BasicPayload_PayloadInspector,src/CondCore/Utilities/plugins,src_CondCore_Utilities_plugins,$(SCRAMSTORENAME_BIN),,$(SCRAMSTORENAME_LIB),$(SCRAMSTORENAME_LOGS)))
BasicPayload_PayloadInspector_CLASS := LIBRARY
else
$(eval $(call MultipleWarningMsg,BasicPayload_PayloadInspector,src/CondCore/Utilities/plugins))
endif
ALL_COMMONRULES += src_CondCore_Utilities_plugins
src_CondCore_Utilities_plugins_parent := CondCore/Utilities
src_CondCore_Utilities_plugins_INIT_FUNC += $$(eval $$(call CommonProductRules,src_CondCore_Utilities_plugins,src/CondCore/Utilities/plugins,PLUGINS))
