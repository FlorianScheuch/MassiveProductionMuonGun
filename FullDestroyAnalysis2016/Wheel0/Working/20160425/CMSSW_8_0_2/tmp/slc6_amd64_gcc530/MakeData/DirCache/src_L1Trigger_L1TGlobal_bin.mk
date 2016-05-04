ifeq ($(strip $(readTestVector)),)
readTestVector_files := $(patsubst src/L1Trigger/L1TGlobal/bin/%,%,$(foreach file,readTestVector.cc,$(eval xfile:=$(wildcard src/L1Trigger/L1TGlobal/bin/$(file)))$(if $(xfile),$(xfile),$(warning No such file exists: src/L1Trigger/L1TGlobal/bin/$(file). Please fix src/L1Trigger/L1TGlobal/bin/BuildFile.))))
readTestVector := self/src/L1Trigger/L1TGlobal/bin
readTestVector_BuildFile    := $(WORKINGDIR)/cache/bf/src/L1Trigger/L1TGlobal/bin/BuildFile
readTestVector_LOC_USE := self  xerces-c L1Trigger/L1TGlobal boost_program_options root
readTestVector_PACKAGE := self/src/L1Trigger/L1TGlobal/bin
ALL_PRODS += readTestVector
readTestVector_INIT_FUNC        += $$(eval $$(call Binary,readTestVector,src/L1Trigger/L1TGlobal/bin,src_L1Trigger_L1TGlobal_bin,$(SCRAMSTORENAME_BIN),,$(SCRAMSTORENAME_BIN),bin,$(SCRAMSTORENAME_LOGS)))
readTestVector_CLASS := BINARY
else
$(eval $(call MultipleWarningMsg,readTestVector,src/L1Trigger/L1TGlobal/bin))
endif
ALL_COMMONRULES += src_L1Trigger_L1TGlobal_bin
src_L1Trigger_L1TGlobal_bin_parent := L1Trigger/L1TGlobal
src_L1Trigger_L1TGlobal_bin_INIT_FUNC += $$(eval $$(call CommonProductRules,src_L1Trigger_L1TGlobal_bin,src/L1Trigger/L1TGlobal/bin,BINARY))
