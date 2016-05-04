ifeq ($(strip $(DataFormats/L1Trigger)),)
ALL_COMMONRULES += src_DataFormats_L1Trigger_src
src_DataFormats_L1Trigger_src_parent := DataFormats/L1Trigger
src_DataFormats_L1Trigger_src_INIT_FUNC := $$(eval $$(call CommonProductRules,src_DataFormats_L1Trigger_src,src/DataFormats/L1Trigger/src,LIBRARY))
DataFormatsL1Trigger := self/DataFormats/L1Trigger
DataFormats/L1Trigger := DataFormatsL1Trigger
DataFormatsL1Trigger_files := $(patsubst src/DataFormats/L1Trigger/src/%,%,$(wildcard $(foreach dir,src/DataFormats/L1Trigger/src ,$(foreach ext,$(SRC_FILES_SUFFIXES),$(dir)/*.$(ext)))))
DataFormatsL1Trigger_BuildFile    := $(WORKINGDIR)/cache/bf/src/DataFormats/L1Trigger/BuildFile
DataFormatsL1Trigger_LOC_USE := self  DataFormats/Candidate DataFormats/Common DataFormats/L1GlobalMuonTrigger
DataFormatsL1Trigger_LCGDICTS  := x 
DataFormatsL1Trigger_PRE_INIT_FUNC += $$(eval $$(call LCGDict,DataFormatsL1Trigger,src/DataFormats/L1Trigger/src/classes.h,src/DataFormats/L1Trigger/src/classes_def.xml,$(SCRAMSTORENAME_LIB),$(GENREFLEX_ARGS) --fail_on_warnings,))
DataFormatsL1Trigger_EX_LIB   := DataFormatsL1Trigger
DataFormatsL1Trigger_EX_USE   := $(foreach d,$(DataFormatsL1Trigger_LOC_USE),$(if $($(d)_EX_FLAGS_NO_RECURSIVE_EXPORT),,$d))
DataFormatsL1Trigger_PACKAGE := self/src/DataFormats/L1Trigger/src
ALL_PRODS += DataFormatsL1Trigger
DataFormatsL1Trigger_CLASS := LIBRARY
DataFormats/L1Trigger_forbigobj+=DataFormatsL1Trigger
DataFormatsL1Trigger_INIT_FUNC        += $$(eval $$(call Library,DataFormatsL1Trigger,src/DataFormats/L1Trigger/src,src_DataFormats_L1Trigger_src,$(SCRAMSTORENAME_BIN),,$(SCRAMSTORENAME_LIB),$(SCRAMSTORENAME_LOGS)))
endif
