ifeq ($(strip $(RecoTrackerDeDxPlugins)),)
RecoTrackerDeDxPlugins := self/src/RecoTracker/DeDx/plugins
PLUGINS:=yes
RecoTrackerDeDxPlugins_files := $(patsubst src/RecoTracker/DeDx/plugins/%,%,$(foreach file,*.cc,$(eval xfile:=$(wildcard src/RecoTracker/DeDx/plugins/$(file)))$(if $(xfile),$(xfile),$(warning No such file exists: src/RecoTracker/DeDx/plugins/$(file). Please fix src/RecoTracker/DeDx/plugins/BuildFile.))))
RecoTrackerDeDxPlugins_BuildFile    := $(WORKINGDIR)/cache/bf/src/RecoTracker/DeDx/plugins/BuildFile
RecoTrackerDeDxPlugins_LOC_USE := self  RecoTracker/DeDx
RecoTrackerDeDxPlugins_PRE_INIT_FUNC += $$(eval $$(call edmPlugin,RecoTrackerDeDxPlugins,RecoTrackerDeDxPlugins,$(SCRAMSTORENAME_LIB),src/RecoTracker/DeDx/plugins))
RecoTrackerDeDxPlugins_PACKAGE := self/src/RecoTracker/DeDx/plugins
ALL_PRODS += RecoTrackerDeDxPlugins
RecoTracker/DeDx_forbigobj+=RecoTrackerDeDxPlugins
RecoTrackerDeDxPlugins_INIT_FUNC        += $$(eval $$(call Library,RecoTrackerDeDxPlugins,src/RecoTracker/DeDx/plugins,src_RecoTracker_DeDx_plugins,$(SCRAMSTORENAME_BIN),,$(SCRAMSTORENAME_LIB),$(SCRAMSTORENAME_LOGS)))
RecoTrackerDeDxPlugins_CLASS := LIBRARY
else
$(eval $(call MultipleWarningMsg,RecoTrackerDeDxPlugins,src/RecoTracker/DeDx/plugins))
endif
ALL_COMMONRULES += src_RecoTracker_DeDx_plugins
src_RecoTracker_DeDx_plugins_parent := RecoTracker/DeDx
src_RecoTracker_DeDx_plugins_INIT_FUNC += $$(eval $$(call CommonProductRules,src_RecoTracker_DeDx_plugins,src/RecoTracker/DeDx/plugins,PLUGINS))
