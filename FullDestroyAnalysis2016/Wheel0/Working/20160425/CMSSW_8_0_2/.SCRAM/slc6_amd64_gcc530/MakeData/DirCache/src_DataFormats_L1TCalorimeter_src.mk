ifeq ($(strip $(DataFormats/L1TCalorimeter)),)
ALL_COMMONRULES += src_DataFormats_L1TCalorimeter_src
src_DataFormats_L1TCalorimeter_src_parent := DataFormats/L1TCalorimeter
src_DataFormats_L1TCalorimeter_src_INIT_FUNC := $$(eval $$(call CommonProductRules,src_DataFormats_L1TCalorimeter_src,src/DataFormats/L1TCalorimeter/src,LIBRARY))
DataFormatsL1TCalorimeter := self/DataFormats/L1TCalorimeter
DataFormats/L1TCalorimeter := DataFormatsL1TCalorimeter
DataFormatsL1TCalorimeter_files := $(patsubst src/DataFormats/L1TCalorimeter/src/%,%,$(wildcard $(foreach dir,src/DataFormats/L1TCalorimeter/src ,$(foreach ext,$(SRC_FILES_SUFFIXES),$(dir)/*.$(ext)))))
DataFormatsL1TCalorimeter_BuildFile    := $(WORKINGDIR)/cache/bf/src/DataFormats/L1TCalorimeter/BuildFile
DataFormatsL1TCalorimeter_LOC_USE := self  DataFormats/Candidate DataFormats/Common DataFormats/L1Trigger
DataFormatsL1TCalorimeter_LCGDICTS  := x 
DataFormatsL1TCalorimeter_PRE_INIT_FUNC += $$(eval $$(call LCGDict,DataFormatsL1TCalorimeter,src/DataFormats/L1TCalorimeter/src/classes.h,src/DataFormats/L1TCalorimeter/src/classes_def.xml,$(SCRAMSTORENAME_LIB),$(GENREFLEX_ARGS) --fail_on_warnings,))
DataFormatsL1TCalorimeter_EX_LIB   := DataFormatsL1TCalorimeter
DataFormatsL1TCalorimeter_EX_USE   := $(foreach d,$(DataFormatsL1TCalorimeter_LOC_USE),$(if $($(d)_EX_FLAGS_NO_RECURSIVE_EXPORT),,$d))
DataFormatsL1TCalorimeter_PACKAGE := self/src/DataFormats/L1TCalorimeter/src
ALL_PRODS += DataFormatsL1TCalorimeter
DataFormatsL1TCalorimeter_CLASS := LIBRARY
DataFormats/L1TCalorimeter_forbigobj+=DataFormatsL1TCalorimeter
DataFormatsL1TCalorimeter_INIT_FUNC        += $$(eval $$(call Library,DataFormatsL1TCalorimeter,src/DataFormats/L1TCalorimeter/src,src_DataFormats_L1TCalorimeter_src,$(SCRAMSTORENAME_BIN),,$(SCRAMSTORENAME_LIB),$(SCRAMSTORENAME_LOGS)))
endif
