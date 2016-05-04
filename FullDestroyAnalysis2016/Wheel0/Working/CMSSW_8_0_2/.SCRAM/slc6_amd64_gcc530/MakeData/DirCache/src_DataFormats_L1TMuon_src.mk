ifeq ($(strip $(DataFormats/L1TMuon)),)
ALL_COMMONRULES += src_DataFormats_L1TMuon_src
src_DataFormats_L1TMuon_src_parent := DataFormats/L1TMuon
src_DataFormats_L1TMuon_src_INIT_FUNC := $$(eval $$(call CommonProductRules,src_DataFormats_L1TMuon_src,src/DataFormats/L1TMuon/src,LIBRARY))
DataFormatsL1TMuon := self/DataFormats/L1TMuon
DataFormats/L1TMuon := DataFormatsL1TMuon
DataFormatsL1TMuon_files := $(patsubst src/DataFormats/L1TMuon/src/%,%,$(wildcard $(foreach dir,src/DataFormats/L1TMuon/src ,$(foreach ext,$(SRC_FILES_SUFFIXES),$(dir)/*.$(ext)))))
DataFormatsL1TMuon_BuildFile    := $(WORKINGDIR)/cache/bf/src/DataFormats/L1TMuon/BuildFile
DataFormatsL1TMuon_LOC_USE := self  DataFormats/CSCDigi DataFormats/L1DTTrackFinder DataFormats/RPCDigi DataFormats/MuonDetId DataFormats/L1CSCTrackFinder DataFormats/Common L1Trigger/DTTrackFinder rootrflx
DataFormatsL1TMuon_LCGDICTS  := x 
DataFormatsL1TMuon_PRE_INIT_FUNC += $$(eval $$(call LCGDict,DataFormatsL1TMuon,src/DataFormats/L1TMuon/src/classes.h,src/DataFormats/L1TMuon/src/classes_def.xml,$(SCRAMSTORENAME_LIB),$(GENREFLEX_ARGS) --fail_on_warnings,))
DataFormatsL1TMuon_EX_LIB   := DataFormatsL1TMuon
DataFormatsL1TMuon_EX_USE   := $(foreach d,$(DataFormatsL1TMuon_LOC_USE),$(if $($(d)_EX_FLAGS_NO_RECURSIVE_EXPORT),,$d))
DataFormatsL1TMuon_PACKAGE := self/src/DataFormats/L1TMuon/src
ALL_PRODS += DataFormatsL1TMuon
DataFormatsL1TMuon_CLASS := LIBRARY
DataFormats/L1TMuon_forbigobj+=DataFormatsL1TMuon
DataFormatsL1TMuon_INIT_FUNC        += $$(eval $$(call Library,DataFormatsL1TMuon,src/DataFormats/L1TMuon/src,src_DataFormats_L1TMuon_src,$(SCRAMSTORENAME_BIN),,$(SCRAMSTORENAME_LIB),$(SCRAMSTORENAME_LOGS)))
endif
