ifeq ($(strip $(CondCore/EcalPlugins)),)
ALL_COMMONRULES += src_CondCore_EcalPlugins_src
src_CondCore_EcalPlugins_src_parent := CondCore/EcalPlugins
src_CondCore_EcalPlugins_src_INIT_FUNC := $$(eval $$(call CommonProductRules,src_CondCore_EcalPlugins_src,src/CondCore/EcalPlugins/src,LIBRARY))
CondCoreEcalPlugins := self/CondCore/EcalPlugins
CondCore/EcalPlugins := CondCoreEcalPlugins
CondCoreEcalPlugins_files := $(patsubst src/CondCore/EcalPlugins/src/%,%,$(wildcard $(foreach dir,src/CondCore/EcalPlugins/src ,$(foreach ext,$(SRC_FILES_SUFFIXES),$(dir)/*.$(ext)))))
CondCoreEcalPlugins_BuildFile    := $(WORKINGDIR)/cache/bf/src/CondCore/EcalPlugins/BuildFile
CondCoreEcalPlugins_LOC_USE := self  FWCore/Framework FWCore/PluginManager CondCore/ESSources CondFormats/EcalObjects CondFormats/DataRecord
CondCoreEcalPlugins_PRE_INIT_FUNC += $$(eval $$(call edmPlugin,CondCoreEcalPlugins,CondCoreEcalPlugins,$(SCRAMSTORENAME_LIB),src/CondCore/EcalPlugins/src))
CondCoreEcalPlugins_PACKAGE := self/src/CondCore/EcalPlugins/src
ALL_PRODS += CondCoreEcalPlugins
CondCoreEcalPlugins_CLASS := LIBRARY
CondCore/EcalPlugins_forbigobj+=CondCoreEcalPlugins
CondCoreEcalPlugins_INIT_FUNC        += $$(eval $$(call Library,CondCoreEcalPlugins,src/CondCore/EcalPlugins/src,src_CondCore_EcalPlugins_src,$(SCRAMSTORENAME_BIN),,$(SCRAMSTORENAME_LIB),$(SCRAMSTORENAME_LOGS)))
endif
