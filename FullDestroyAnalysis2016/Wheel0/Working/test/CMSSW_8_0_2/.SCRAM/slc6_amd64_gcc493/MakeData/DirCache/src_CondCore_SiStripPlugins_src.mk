ifeq ($(strip $(CondCore/SiStripPlugins)),)
ALL_COMMONRULES += src_CondCore_SiStripPlugins_src
src_CondCore_SiStripPlugins_src_parent := CondCore/SiStripPlugins
src_CondCore_SiStripPlugins_src_INIT_FUNC := $$(eval $$(call CommonProductRules,src_CondCore_SiStripPlugins_src,src/CondCore/SiStripPlugins/src,LIBRARY))
CondCoreSiStripPlugins := self/CondCore/SiStripPlugins
CondCore/SiStripPlugins := CondCoreSiStripPlugins
CondCoreSiStripPlugins_files := $(patsubst src/CondCore/SiStripPlugins/src/%,%,$(wildcard $(foreach dir,src/CondCore/SiStripPlugins/src ,$(foreach ext,$(SRC_FILES_SUFFIXES),$(dir)/*.$(ext)))))
CondCoreSiStripPlugins_BuildFile    := $(WORKINGDIR)/cache/bf/src/CondCore/SiStripPlugins/BuildFile
CondCoreSiStripPlugins_LOC_USE := self  FWCore/Framework FWCore/PluginManager CondCore/ESSources CondFormats/SiStripObjects CondFormats/DataRecord
CondCoreSiStripPlugins_PRE_INIT_FUNC += $$(eval $$(call edmPlugin,CondCoreSiStripPlugins,CondCoreSiStripPlugins,$(SCRAMSTORENAME_LIB),src/CondCore/SiStripPlugins/src))
CondCoreSiStripPlugins_PACKAGE := self/src/CondCore/SiStripPlugins/src
ALL_PRODS += CondCoreSiStripPlugins
CondCoreSiStripPlugins_CLASS := LIBRARY
CondCore/SiStripPlugins_forbigobj+=CondCoreSiStripPlugins
CondCoreSiStripPlugins_INIT_FUNC        += $$(eval $$(call Library,CondCoreSiStripPlugins,src/CondCore/SiStripPlugins/src,src_CondCore_SiStripPlugins_src,$(SCRAMSTORENAME_BIN),,$(SCRAMSTORENAME_LIB),$(SCRAMSTORENAME_LOGS)))
endif
