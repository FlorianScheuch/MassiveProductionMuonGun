ifeq ($(strip $(HLTrigger/HLTcore)),)
ALL_COMMONRULES += src_HLTrigger_HLTcore_src
src_HLTrigger_HLTcore_src_parent := HLTrigger/HLTcore
src_HLTrigger_HLTcore_src_INIT_FUNC := $$(eval $$(call CommonProductRules,src_HLTrigger_HLTcore_src,src/HLTrigger/HLTcore/src,LIBRARY))
HLTriggerHLTcore := self/HLTrigger/HLTcore
HLTrigger/HLTcore := HLTriggerHLTcore
HLTriggerHLTcore_files := $(patsubst src/HLTrigger/HLTcore/src/%,%,$(wildcard $(foreach dir,src/HLTrigger/HLTcore/src ,$(foreach ext,$(SRC_FILES_SUFFIXES),$(dir)/*.$(ext)))))
HLTriggerHLTcore_BuildFile    := $(WORKINGDIR)/cache/bf/src/HLTrigger/HLTcore/BuildFile
HLTriggerHLTcore_LOC_USE := self  tbb boost DataFormats/Common FWCore/Framework FWCore/ParameterSet FWCore/ServiceRegistry FWCore/Services FWCore/MessageLogger L1Trigger/GlobalTriggerAnalyzer CondCore/DBOutputService CondFormats/HLTObjects CondFormats/DataRecord
HLTriggerHLTcore_EX_LIB   := HLTriggerHLTcore
HLTriggerHLTcore_EX_USE   := $(foreach d,$(HLTriggerHLTcore_LOC_USE),$(if $($(d)_EX_FLAGS_NO_RECURSIVE_EXPORT),,$d))
HLTriggerHLTcore_PACKAGE := self/src/HLTrigger/HLTcore/src
ALL_PRODS += HLTriggerHLTcore
HLTriggerHLTcore_CLASS := LIBRARY
HLTrigger/HLTcore_forbigobj+=HLTriggerHLTcore
HLTriggerHLTcore_INIT_FUNC        += $$(eval $$(call Library,HLTriggerHLTcore,src/HLTrigger/HLTcore/src,src_HLTrigger_HLTcore_src,$(SCRAMSTORENAME_BIN),,$(SCRAMSTORENAME_LIB),$(SCRAMSTORENAME_LOGS)))
endif
