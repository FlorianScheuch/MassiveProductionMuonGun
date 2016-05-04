ifeq ($(strip $(CondCore/L1TPlugins)),)
ALL_COMMONRULES += src_CondCore_L1TPlugins_src
src_CondCore_L1TPlugins_src_parent := CondCore/L1TPlugins
src_CondCore_L1TPlugins_src_INIT_FUNC := $$(eval $$(call CommonProductRules,src_CondCore_L1TPlugins_src,src/CondCore/L1TPlugins/src,LIBRARY))
CondCoreL1TPlugins := self/CondCore/L1TPlugins
CondCore/L1TPlugins := CondCoreL1TPlugins
CondCoreL1TPlugins_files := $(patsubst src/CondCore/L1TPlugins/src/%,%,$(wildcard $(foreach dir,src/CondCore/L1TPlugins/src ,$(foreach ext,$(SRC_FILES_SUFFIXES),$(dir)/*.$(ext)))))
CondCoreL1TPlugins_BuildFile    := $(WORKINGDIR)/cache/bf/src/CondCore/L1TPlugins/BuildFile
CondCoreL1TPlugins_LOC_USE := self  FWCore/Framework FWCore/PluginManager CondCore/ESSources CondFormats/L1TObjects CondFormats/DataRecord
CondCoreL1TPlugins_PRE_INIT_FUNC += $$(eval $$(call edmPlugin,CondCoreL1TPlugins,CondCoreL1TPlugins,$(SCRAMSTORENAME_LIB),src/CondCore/L1TPlugins/src))
CondCoreL1TPlugins_PACKAGE := self/src/CondCore/L1TPlugins/src
ALL_PRODS += CondCoreL1TPlugins
CondCoreL1TPlugins_CLASS := LIBRARY
CondCore/L1TPlugins_forbigobj+=CondCoreL1TPlugins
CondCoreL1TPlugins_INIT_FUNC        += $$(eval $$(call Library,CondCoreL1TPlugins,src/CondCore/L1TPlugins/src,src_CondCore_L1TPlugins_src,$(SCRAMSTORENAME_BIN),,$(SCRAMSTORENAME_LIB),$(SCRAMSTORENAME_LOGS)))
endif
