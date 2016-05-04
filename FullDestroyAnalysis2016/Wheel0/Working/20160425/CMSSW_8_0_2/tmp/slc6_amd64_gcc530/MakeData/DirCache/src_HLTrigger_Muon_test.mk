ifeq ($(strip $(MuEnrichRenormalizer)),)
MuEnrichRenormalizer := self/src/HLTrigger/Muon/test
MuEnrichRenormalizer_files := $(patsubst src/HLTrigger/Muon/test/%,%,$(foreach file,MuEnrichRenormalizer.cc,$(eval xfile:=$(wildcard src/HLTrigger/Muon/test/$(file)))$(if $(xfile),$(xfile),$(warning No such file exists: src/HLTrigger/Muon/test/$(file). Please fix src/HLTrigger/Muon/test/BuildFile.))))
MuEnrichRenormalizer_BuildFile    := $(WORKINGDIR)/cache/bf/src/HLTrigger/Muon/test/BuildFile
MuEnrichRenormalizer_LOC_USE := self  FWCore/Framework FWCore/PluginManager FWCore/ParameterSet DataFormats/Common HLTrigger/HLTcore SimDataFormats/GeneratorProducts DataFormats/RecoCandidate root
MuEnrichRenormalizer_PRE_INIT_FUNC += $$(eval $$(call edmPlugin,MuEnrichRenormalizer,MuEnrichRenormalizer,$(SCRAMSTORENAME_LIB),src/HLTrigger/Muon/test))
MuEnrichRenormalizer_PACKAGE := self/src/HLTrigger/Muon/test
ALL_PRODS += MuEnrichRenormalizer
MuEnrichRenormalizer_INIT_FUNC        += $$(eval $$(call Library,MuEnrichRenormalizer,src/HLTrigger/Muon/test,src_HLTrigger_Muon_test,$(SCRAMSTORENAME_BIN),,$(SCRAMSTORENAME_LIB),$(SCRAMSTORENAME_LOGS)))
MuEnrichRenormalizer_CLASS := TEST_LIBRARY
else
$(eval $(call MultipleWarningMsg,MuEnrichRenormalizer,src/HLTrigger/Muon/test))
endif
ifeq ($(strip $(HLTMuonRateAnalyzerWithWeight)),)
HLTMuonRateAnalyzerWithWeight := self/src/HLTrigger/Muon/test
HLTMuonRateAnalyzerWithWeight_files := $(patsubst src/HLTrigger/Muon/test/%,%,$(foreach file,HLTMuonRateAnalyzerWithWeight.cc,$(eval xfile:=$(wildcard src/HLTrigger/Muon/test/$(file)))$(if $(xfile),$(xfile),$(warning No such file exists: src/HLTrigger/Muon/test/$(file). Please fix src/HLTrigger/Muon/test/BuildFile.))))
HLTMuonRateAnalyzerWithWeight_BuildFile    := $(WORKINGDIR)/cache/bf/src/HLTrigger/Muon/test/BuildFile
HLTMuonRateAnalyzerWithWeight_LOC_USE := self  FWCore/Framework FWCore/PluginManager FWCore/ParameterSet DataFormats/Common HLTrigger/HLTcore SimDataFormats/GeneratorProducts DataFormats/RecoCandidate root
HLTMuonRateAnalyzerWithWeight_PRE_INIT_FUNC += $$(eval $$(call edmPlugin,HLTMuonRateAnalyzerWithWeight,HLTMuonRateAnalyzerWithWeight,$(SCRAMSTORENAME_LIB),src/HLTrigger/Muon/test))
HLTMuonRateAnalyzerWithWeight_PACKAGE := self/src/HLTrigger/Muon/test
ALL_PRODS += HLTMuonRateAnalyzerWithWeight
HLTMuonRateAnalyzerWithWeight_INIT_FUNC        += $$(eval $$(call Library,HLTMuonRateAnalyzerWithWeight,src/HLTrigger/Muon/test,src_HLTrigger_Muon_test,$(SCRAMSTORENAME_BIN),,$(SCRAMSTORENAME_LIB),$(SCRAMSTORENAME_LOGS)))
HLTMuonRateAnalyzerWithWeight_CLASS := TEST_LIBRARY
else
$(eval $(call MultipleWarningMsg,HLTMuonRateAnalyzerWithWeight,src/HLTrigger/Muon/test))
endif
ifeq ($(strip $(HLTMuonRateAnalyzer)),)
HLTMuonRateAnalyzer := self/src/HLTrigger/Muon/test
HLTMuonRateAnalyzer_files := $(patsubst src/HLTrigger/Muon/test/%,%,$(foreach file,HLTMuonRateAnalyzer.cc,$(eval xfile:=$(wildcard src/HLTrigger/Muon/test/$(file)))$(if $(xfile),$(xfile),$(warning No such file exists: src/HLTrigger/Muon/test/$(file). Please fix src/HLTrigger/Muon/test/BuildFile.))))
HLTMuonRateAnalyzer_BuildFile    := $(WORKINGDIR)/cache/bf/src/HLTrigger/Muon/test/BuildFile
HLTMuonRateAnalyzer_LOC_USE := self  FWCore/Framework FWCore/PluginManager FWCore/ParameterSet DataFormats/Common HLTrigger/HLTcore SimDataFormats/GeneratorProducts DataFormats/RecoCandidate root
HLTMuonRateAnalyzer_PRE_INIT_FUNC += $$(eval $$(call edmPlugin,HLTMuonRateAnalyzer,HLTMuonRateAnalyzer,$(SCRAMSTORENAME_LIB),src/HLTrigger/Muon/test))
HLTMuonRateAnalyzer_PACKAGE := self/src/HLTrigger/Muon/test
ALL_PRODS += HLTMuonRateAnalyzer
HLTMuonRateAnalyzer_INIT_FUNC        += $$(eval $$(call Library,HLTMuonRateAnalyzer,src/HLTrigger/Muon/test,src_HLTrigger_Muon_test,$(SCRAMSTORENAME_BIN),,$(SCRAMSTORENAME_LIB),$(SCRAMSTORENAME_LOGS)))
HLTMuonRateAnalyzer_CLASS := TEST_LIBRARY
else
$(eval $(call MultipleWarningMsg,HLTMuonRateAnalyzer,src/HLTrigger/Muon/test))
endif
ifeq ($(strip $(HLTMuonTurnOnAnalyzer)),)
HLTMuonTurnOnAnalyzer := self/src/HLTrigger/Muon/test
HLTMuonTurnOnAnalyzer_files := $(patsubst src/HLTrigger/Muon/test/%,%,$(foreach file,HLTMuonTurnOnAnalyzer.cc,$(eval xfile:=$(wildcard src/HLTrigger/Muon/test/$(file)))$(if $(xfile),$(xfile),$(warning No such file exists: src/HLTrigger/Muon/test/$(file). Please fix src/HLTrigger/Muon/test/BuildFile.))))
HLTMuonTurnOnAnalyzer_BuildFile    := $(WORKINGDIR)/cache/bf/src/HLTrigger/Muon/test/BuildFile
HLTMuonTurnOnAnalyzer_LOC_USE := self  FWCore/Framework FWCore/PluginManager FWCore/ParameterSet DataFormats/Common HLTrigger/HLTcore SimDataFormats/GeneratorProducts DataFormats/RecoCandidate root
HLTMuonTurnOnAnalyzer_PRE_INIT_FUNC += $$(eval $$(call edmPlugin,HLTMuonTurnOnAnalyzer,HLTMuonTurnOnAnalyzer,$(SCRAMSTORENAME_LIB),src/HLTrigger/Muon/test))
HLTMuonTurnOnAnalyzer_PACKAGE := self/src/HLTrigger/Muon/test
ALL_PRODS += HLTMuonTurnOnAnalyzer
HLTMuonTurnOnAnalyzer_INIT_FUNC        += $$(eval $$(call Library,HLTMuonTurnOnAnalyzer,src/HLTrigger/Muon/test,src_HLTrigger_Muon_test,$(SCRAMSTORENAME_BIN),,$(SCRAMSTORENAME_LIB),$(SCRAMSTORENAME_LOGS)))
HLTMuonTurnOnAnalyzer_CLASS := TEST_LIBRARY
else
$(eval $(call MultipleWarningMsg,HLTMuonTurnOnAnalyzer,src/HLTrigger/Muon/test))
endif
ifeq ($(strip $(MuEnrichType1Filter)),)
MuEnrichType1Filter := self/src/HLTrigger/Muon/test
MuEnrichType1Filter_files := $(patsubst src/HLTrigger/Muon/test/%,%,$(foreach file,MuEnrichType1Filter.cc,$(eval xfile:=$(wildcard src/HLTrigger/Muon/test/$(file)))$(if $(xfile),$(xfile),$(warning No such file exists: src/HLTrigger/Muon/test/$(file). Please fix src/HLTrigger/Muon/test/BuildFile.))))
MuEnrichType1Filter_BuildFile    := $(WORKINGDIR)/cache/bf/src/HLTrigger/Muon/test/BuildFile
MuEnrichType1Filter_LOC_USE := self  FWCore/Framework FWCore/PluginManager FWCore/ParameterSet DataFormats/Common HLTrigger/HLTcore SimDataFormats/GeneratorProducts DataFormats/RecoCandidate root
MuEnrichType1Filter_PRE_INIT_FUNC += $$(eval $$(call edmPlugin,MuEnrichType1Filter,MuEnrichType1Filter,$(SCRAMSTORENAME_LIB),src/HLTrigger/Muon/test))
MuEnrichType1Filter_PACKAGE := self/src/HLTrigger/Muon/test
ALL_PRODS += MuEnrichType1Filter
MuEnrichType1Filter_INIT_FUNC        += $$(eval $$(call Library,MuEnrichType1Filter,src/HLTrigger/Muon/test,src_HLTrigger_Muon_test,$(SCRAMSTORENAME_BIN),,$(SCRAMSTORENAME_LIB),$(SCRAMSTORENAME_LOGS)))
MuEnrichType1Filter_CLASS := TEST_LIBRARY
else
$(eval $(call MultipleWarningMsg,MuEnrichType1Filter,src/HLTrigger/Muon/test))
endif
ALL_COMMONRULES += src_HLTrigger_Muon_test
src_HLTrigger_Muon_test_parent := HLTrigger/Muon
src_HLTrigger_Muon_test_INIT_FUNC += $$(eval $$(call CommonProductRules,src_HLTrigger_Muon_test,src/HLTrigger/Muon/test,TEST))
