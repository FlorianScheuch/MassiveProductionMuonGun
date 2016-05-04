ifeq ($(strip $(DataFormats/HLTReco)),)
ALL_COMMONRULES += src_DataFormats_HLTReco_src
src_DataFormats_HLTReco_src_parent := DataFormats/HLTReco
src_DataFormats_HLTReco_src_INIT_FUNC := $$(eval $$(call CommonProductRules,src_DataFormats_HLTReco_src,src/DataFormats/HLTReco/src,LIBRARY))
DataFormatsHLTReco := self/DataFormats/HLTReco
DataFormats/HLTReco := DataFormatsHLTReco
DataFormatsHLTReco_files := $(patsubst src/DataFormats/HLTReco/src/%,%,$(wildcard $(foreach dir,src/DataFormats/HLTReco/src ,$(foreach ext,$(SRC_FILES_SUFFIXES),$(dir)/*.$(ext)))))
DataFormatsHLTReco_BuildFile    := $(WORKINGDIR)/cache/bf/src/DataFormats/HLTReco/BuildFile
DataFormatsHLTReco_LOC_USE := self  FWCore/Utilities DataFormats/Common DataFormats/CLHEP DataFormats/Candidate boost
DataFormatsHLTReco_LCGDICTS  := x 
DataFormatsHLTReco_PRE_INIT_FUNC += $$(eval $$(call LCGDict,DataFormatsHLTReco,src/DataFormats/HLTReco/src/classes.h,src/DataFormats/HLTReco/src/classes_def.xml,$(SCRAMSTORENAME_LIB),$(GENREFLEX_ARGS) --fail_on_warnings,))
DataFormatsHLTReco_EX_LIB   := DataFormatsHLTReco
DataFormatsHLTReco_EX_USE   := $(foreach d,$(DataFormatsHLTReco_LOC_USE),$(if $($(d)_EX_FLAGS_NO_RECURSIVE_EXPORT),,$d))
DataFormatsHLTReco_PACKAGE := self/src/DataFormats/HLTReco/src
ALL_PRODS += DataFormatsHLTReco
DataFormatsHLTReco_CLASS := LIBRARY
DataFormats/HLTReco_forbigobj+=DataFormatsHLTReco
DataFormatsHLTReco_INIT_FUNC        += $$(eval $$(call Library,DataFormatsHLTReco,src/DataFormats/HLTReco/src,src_DataFormats_HLTReco_src,$(SCRAMSTORENAME_BIN),,$(SCRAMSTORENAME_LIB),$(SCRAMSTORENAME_LOGS)))
endif
