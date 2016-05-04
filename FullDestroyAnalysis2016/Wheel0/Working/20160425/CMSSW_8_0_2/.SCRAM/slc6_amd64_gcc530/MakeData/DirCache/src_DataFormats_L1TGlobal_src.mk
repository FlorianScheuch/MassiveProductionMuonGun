ifeq ($(strip $(DataFormats/L1TGlobal)),)
ALL_COMMONRULES += src_DataFormats_L1TGlobal_src
src_DataFormats_L1TGlobal_src_parent := DataFormats/L1TGlobal
src_DataFormats_L1TGlobal_src_INIT_FUNC := $$(eval $$(call CommonProductRules,src_DataFormats_L1TGlobal_src,src/DataFormats/L1TGlobal/src,LIBRARY))
DataFormatsL1TGlobal := self/DataFormats/L1TGlobal
DataFormats/L1TGlobal := DataFormatsL1TGlobal
DataFormatsL1TGlobal_files := $(patsubst src/DataFormats/L1TGlobal/src/%,%,$(wildcard $(foreach dir,src/DataFormats/L1TGlobal/src ,$(foreach ext,$(SRC_FILES_SUFFIXES),$(dir)/*.$(ext)))))
DataFormatsL1TGlobal_BuildFile    := $(WORKINGDIR)/cache/bf/src/DataFormats/L1TGlobal/BuildFile
DataFormatsL1TGlobal_LOC_USE := self  DataFormats/Candidate DataFormats/Common DataFormats/L1Trigger
DataFormatsL1TGlobal_LCGDICTS  := x 
DataFormatsL1TGlobal_PRE_INIT_FUNC += $$(eval $$(call LCGDict,DataFormatsL1TGlobal,src/DataFormats/L1TGlobal/src/classes.h,src/DataFormats/L1TGlobal/src/classes_def.xml,$(SCRAMSTORENAME_LIB),$(GENREFLEX_ARGS) --fail_on_warnings,))
DataFormatsL1TGlobal_EX_LIB   := DataFormatsL1TGlobal
DataFormatsL1TGlobal_EX_USE   := $(foreach d,$(DataFormatsL1TGlobal_LOC_USE),$(if $($(d)_EX_FLAGS_NO_RECURSIVE_EXPORT),,$d))
DataFormatsL1TGlobal_PACKAGE := self/src/DataFormats/L1TGlobal/src
ALL_PRODS += DataFormatsL1TGlobal
DataFormatsL1TGlobal_CLASS := LIBRARY
DataFormats/L1TGlobal_forbigobj+=DataFormatsL1TGlobal
DataFormatsL1TGlobal_INIT_FUNC        += $$(eval $$(call Library,DataFormatsL1TGlobal,src/DataFormats/L1TGlobal/src,src_DataFormats_L1TGlobal_src,$(SCRAMSTORENAME_BIN),,$(SCRAMSTORENAME_LIB),$(SCRAMSTORENAME_LOGS)))
endif
