ifeq ($(strip $(EcalPyUtils)),)
EcalPyUtils := self/src/CondCore/EcalPlugins/plugins
PLUGINS:=yes
EcalPyUtils_files := $(patsubst src/CondCore/EcalPlugins/plugins/%,%,$(foreach file,EcalPyUtils.cc,$(eval xfile:=$(wildcard src/CondCore/EcalPlugins/plugins/$(file)))$(if $(xfile),$(xfile),$(warning No such file exists: src/CondCore/EcalPlugins/plugins/$(file). Please fix src/CondCore/EcalPlugins/plugins/BuildFile.))))
EcalPyUtils_BuildFile    := $(WORKINGDIR)/cache/bf/src/CondCore/EcalPlugins/plugins/BuildFile
EcalPyUtils_LOC_FLAGS_CXXFLAGS   := -Wno-sign-compare -Wno-unused-variable
EcalPyUtils_LOC_USE := self  CondCore/Utilities CondFormats/EcalObjects CondTools/Ecal DataFormats/EcalDetId boost boost_python
EcalPyUtils_PRE_INIT_FUNC += $$(eval $$(call edmPlugin,EcalPyUtils,EcalPyUtils,$(SCRAMSTORENAME_LIB),src/CondCore/EcalPlugins/plugins))
EcalPyUtils_PACKAGE := self/src/CondCore/EcalPlugins/plugins
ALL_PRODS += EcalPyUtils
CondCore/EcalPlugins_forbigobj+=EcalPyUtils
EcalPyUtils_INIT_FUNC        += $$(eval $$(call Library,EcalPyUtils,src/CondCore/EcalPlugins/plugins,src_CondCore_EcalPlugins_plugins,$(SCRAMSTORENAME_BIN),,$(SCRAMSTORENAME_LIB),$(SCRAMSTORENAME_LOGS)))
EcalPyUtils_CLASS := LIBRARY
else
$(eval $(call MultipleWarningMsg,EcalPyUtils,src/CondCore/EcalPlugins/plugins))
endif
ifeq ($(strip $(EcalCondObjectContainer_EcalTPGCrystalStatusCode_toXML)),)
EcalCondObjectContainer_EcalTPGCrystalStatusCode_toXML := self/src/CondCore/EcalPlugins/plugins
PLUGINS:=yes
EcalCondObjectContainer_EcalTPGCrystalStatusCode_toXML_files := $(patsubst src/CondCore/EcalPlugins/plugins/%,%,$(foreach file,EcalCondObjectContainer_EcalTPGCrystalStatusCode_toXML.cc,$(eval xfile:=$(wildcard src/CondCore/EcalPlugins/plugins/$(file)))$(if $(xfile),$(xfile),$(warning No such file exists: src/CondCore/EcalPlugins/plugins/$(file). Please fix src/CondCore/EcalPlugins/plugins/BuildFile.))))
EcalCondObjectContainer_EcalTPGCrystalStatusCode_toXML_BuildFile    := $(WORKINGDIR)/cache/bf/src/CondCore/EcalPlugins/plugins/BuildFile
EcalCondObjectContainer_EcalTPGCrystalStatusCode_toXML_LOC_FLAGS_CXXFLAGS   := -Wno-sign-compare -Wno-unused-variable
EcalCondObjectContainer_EcalTPGCrystalStatusCode_toXML_LOC_USE := self  CondCore/Utilities CondCore/CondDB CondFormats/Common boost_python
EcalCondObjectContainer_EcalTPGCrystalStatusCode_toXML_PRE_INIT_FUNC += $$(eval $$(call edmPlugin,EcalCondObjectContainer_EcalTPGCrystalStatusCode_toXML,EcalCondObjectContainer_EcalTPGCrystalStatusCode_toXML,$(SCRAMSTORENAME_LIB),src/CondCore/EcalPlugins/plugins))
EcalCondObjectContainer_EcalTPGCrystalStatusCode_toXML_PACKAGE := self/src/CondCore/EcalPlugins/plugins
ALL_PRODS += EcalCondObjectContainer_EcalTPGCrystalStatusCode_toXML
CondCore/EcalPlugins_forbigobj+=EcalCondObjectContainer_EcalTPGCrystalStatusCode_toXML
EcalCondObjectContainer_EcalTPGCrystalStatusCode_toXML_INIT_FUNC        += $$(eval $$(call Library,EcalCondObjectContainer_EcalTPGCrystalStatusCode_toXML,src/CondCore/EcalPlugins/plugins,src_CondCore_EcalPlugins_plugins,$(SCRAMSTORENAME_BIN),,$(SCRAMSTORENAME_LIB),$(SCRAMSTORENAME_LOGS)))
EcalCondObjectContainer_EcalTPGCrystalStatusCode_toXML_CLASS := LIBRARY
else
$(eval $(call MultipleWarningMsg,EcalCondObjectContainer_EcalTPGCrystalStatusCode_toXML,src/CondCore/EcalPlugins/plugins))
endif
ALL_COMMONRULES += src_CondCore_EcalPlugins_plugins
src_CondCore_EcalPlugins_plugins_parent := CondCore/EcalPlugins
src_CondCore_EcalPlugins_plugins_INIT_FUNC += $$(eval $$(call CommonProductRules,src_CondCore_EcalPlugins_plugins,src/CondCore/EcalPlugins/plugins,PLUGINS))
