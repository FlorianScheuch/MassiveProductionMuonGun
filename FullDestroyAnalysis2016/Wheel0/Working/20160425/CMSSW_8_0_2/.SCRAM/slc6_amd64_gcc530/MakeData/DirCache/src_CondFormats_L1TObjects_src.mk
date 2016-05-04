ifeq ($(strip $(CondFormats/L1TObjects)),)
ALL_COMMONRULES += src_CondFormats_L1TObjects_src
src_CondFormats_L1TObjects_src_parent := CondFormats/L1TObjects
src_CondFormats_L1TObjects_src_INIT_FUNC := $$(eval $$(call CommonProductRules,src_CondFormats_L1TObjects_src,src/CondFormats/L1TObjects/src,LIBRARY))
CondFormatsL1TObjects := self/CondFormats/L1TObjects
CondFormats/L1TObjects := CondFormatsL1TObjects
CondFormatsL1TObjects_files := $(patsubst src/CondFormats/L1TObjects/src/%,%,$(wildcard $(foreach dir,src/CondFormats/L1TObjects/src ,$(foreach ext,$(SRC_FILES_SUFFIXES),$(dir)/*.$(ext)))))
CondFormatsL1TObjects_BuildFile    := $(WORKINGDIR)/cache/bf/src/CondFormats/L1TObjects/BuildFile
CondFormatsL1TObjects_LOC_USE := self  boost CondFormats/Serialization boost_serialization DataFormats/MuonDetId FWCore/ParameterSet FWCore/Utilities DataFormats/L1GlobalMuonTrigger DataFormats/L1GlobalCaloTrigger DataFormats/L1GlobalTrigger DataFormats/StdDictionaries
CondFormatsL1TObjects_LCGDICTS  := x 
CondFormatsL1TObjects_PRE_INIT_FUNC += $$(eval $$(call LCGDict,CondFormatsL1TObjects,src/CondFormats/L1TObjects/src/classes.h,src/CondFormats/L1TObjects/src/classes_def.xml,$(SCRAMSTORENAME_LIB), --fail_on_warnings,))
CondFormatsL1TObjects_PRE_INIT_FUNC += $$(eval $$(call CondSerialization,CondFormatsL1TObjects,src/CondFormats/L1TObjects/src,src/CondFormats/L1TObjects/src/headers.h))
CondFormatsL1TObjects_EX_LIB   := CondFormatsL1TObjects
CondFormatsL1TObjects_EX_USE   := $(foreach d,$(CondFormatsL1TObjects_LOC_USE),$(if $($(d)_EX_FLAGS_NO_RECURSIVE_EXPORT),,$d))
CondFormatsL1TObjects_PACKAGE := self/src/CondFormats/L1TObjects/src
ALL_PRODS += CondFormatsL1TObjects
CondFormatsL1TObjects_CLASS := LIBRARY
CondFormats/L1TObjects_forbigobj+=CondFormatsL1TObjects
CondFormatsL1TObjects_INIT_FUNC        += $$(eval $$(call Library,CondFormatsL1TObjects,src/CondFormats/L1TObjects/src,src_CondFormats_L1TObjects_src,$(SCRAMSTORENAME_BIN),,$(SCRAMSTORENAME_LIB),$(SCRAMSTORENAME_LOGS)))
endif
