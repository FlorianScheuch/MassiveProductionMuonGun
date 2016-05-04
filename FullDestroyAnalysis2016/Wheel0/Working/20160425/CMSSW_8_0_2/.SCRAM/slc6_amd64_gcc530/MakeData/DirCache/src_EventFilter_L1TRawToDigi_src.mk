ifeq ($(strip $(EventFilter/L1TRawToDigi)),)
ALL_COMMONRULES += src_EventFilter_L1TRawToDigi_src
src_EventFilter_L1TRawToDigi_src_parent := EventFilter/L1TRawToDigi
src_EventFilter_L1TRawToDigi_src_INIT_FUNC := $$(eval $$(call CommonProductRules,src_EventFilter_L1TRawToDigi_src,src/EventFilter/L1TRawToDigi/src,LIBRARY))
EventFilterL1TRawToDigi := self/EventFilter/L1TRawToDigi
EventFilter/L1TRawToDigi := EventFilterL1TRawToDigi
EventFilterL1TRawToDigi_files := $(patsubst src/EventFilter/L1TRawToDigi/src/%,%,$(wildcard $(foreach dir,src/EventFilter/L1TRawToDigi/src src/EventFilter/L1TRawToDigi/src/implementations_stage1 src/EventFilter/L1TRawToDigi/src/implementations_stage2,$(foreach ext,$(SRC_FILES_SUFFIXES),$(dir)/*.$(ext)))))
EventFilterL1TRawToDigi_BuildFile    := $(WORKINGDIR)/cache/bf/src/EventFilter/L1TRawToDigi/BuildFile
EventFilterL1TRawToDigi_LOC_USE := self  FWCore/Framework DataFormats/FEDRawData DataFormats/L1Trigger DataFormats/L1TMuon DataFormats/L1TCalorimeter L1Trigger/L1TCalorimeter L1Trigger/L1TGlobal L1Trigger/L1TMuon
EventFilterL1TRawToDigi_EX_LIB   := EventFilterL1TRawToDigi
EventFilterL1TRawToDigi_EX_USE   := $(foreach d,$(EventFilterL1TRawToDigi_LOC_USE),$(if $($(d)_EX_FLAGS_NO_RECURSIVE_EXPORT),,$d))
EventFilterL1TRawToDigi_PACKAGE := self/src/EventFilter/L1TRawToDigi/src
ALL_PRODS += EventFilterL1TRawToDigi
EventFilterL1TRawToDigi_CLASS := LIBRARY
EventFilter/L1TRawToDigi_forbigobj+=EventFilterL1TRawToDigi
EventFilterL1TRawToDigi_INIT_FUNC        += $$(eval $$(call Library,EventFilterL1TRawToDigi,src/EventFilter/L1TRawToDigi/src,src_EventFilter_L1TRawToDigi_src,$(SCRAMSTORENAME_BIN),,$(SCRAMSTORENAME_LIB),$(SCRAMSTORENAME_LOGS)))
endif
