ifeq ($(strip $(CalibrationHcalAlCaRecoProducersPlugins)),)
CalibrationHcalAlCaRecoProducersPlugins := self/src/Calibration/HcalAlCaRecoProducers/plugins
PLUGINS:=yes
CalibrationHcalAlCaRecoProducersPlugins_files := $(patsubst src/Calibration/HcalAlCaRecoProducers/plugins/%,%,$(foreach file,*.cc,$(eval xfile:=$(wildcard src/Calibration/HcalAlCaRecoProducers/plugins/$(file)))$(if $(xfile),$(xfile),$(warning No such file exists: src/Calibration/HcalAlCaRecoProducers/plugins/$(file). Please fix src/Calibration/HcalAlCaRecoProducers/plugins/BuildFile.))))
CalibrationHcalAlCaRecoProducersPlugins_BuildFile    := $(WORKINGDIR)/cache/bf/src/Calibration/HcalAlCaRecoProducers/plugins/BuildFile
CalibrationHcalAlCaRecoProducersPlugins_LOC_USE := self  FWCore/Framework FWCore/MessageLogger FWCore/ParameterSet HLTrigger/HLTcore Calibration/IsolatedParticles rootphysics
CalibrationHcalAlCaRecoProducersPlugins_PRE_INIT_FUNC += $$(eval $$(call edmPlugin,CalibrationHcalAlCaRecoProducersPlugins,CalibrationHcalAlCaRecoProducersPlugins,$(SCRAMSTORENAME_LIB),src/Calibration/HcalAlCaRecoProducers/plugins))
CalibrationHcalAlCaRecoProducersPlugins_PACKAGE := self/src/Calibration/HcalAlCaRecoProducers/plugins
ALL_PRODS += CalibrationHcalAlCaRecoProducersPlugins
Calibration/HcalAlCaRecoProducers_forbigobj+=CalibrationHcalAlCaRecoProducersPlugins
CalibrationHcalAlCaRecoProducersPlugins_INIT_FUNC        += $$(eval $$(call Library,CalibrationHcalAlCaRecoProducersPlugins,src/Calibration/HcalAlCaRecoProducers/plugins,src_Calibration_HcalAlCaRecoProducers_plugins,$(SCRAMSTORENAME_BIN),,$(SCRAMSTORENAME_LIB),$(SCRAMSTORENAME_LOGS)))
CalibrationHcalAlCaRecoProducersPlugins_CLASS := LIBRARY
else
$(eval $(call MultipleWarningMsg,CalibrationHcalAlCaRecoProducersPlugins,src/Calibration/HcalAlCaRecoProducers/plugins))
endif
ALL_COMMONRULES += src_Calibration_HcalAlCaRecoProducers_plugins
src_Calibration_HcalAlCaRecoProducers_plugins_parent := Calibration/HcalAlCaRecoProducers
src_Calibration_HcalAlCaRecoProducers_plugins_INIT_FUNC += $$(eval $$(call CommonProductRules,src_Calibration_HcalAlCaRecoProducers_plugins,src/Calibration/HcalAlCaRecoProducers/plugins,PLUGINS))
