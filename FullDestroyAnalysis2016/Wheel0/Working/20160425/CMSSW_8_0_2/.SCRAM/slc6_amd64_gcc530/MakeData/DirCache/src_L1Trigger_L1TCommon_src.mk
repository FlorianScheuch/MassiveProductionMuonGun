ifeq ($(strip $(L1Trigger/L1TCommon)),)
ALL_COMMONRULES += src_L1Trigger_L1TCommon_src
src_L1Trigger_L1TCommon_src_parent := L1Trigger/L1TCommon
src_L1Trigger_L1TCommon_src_INIT_FUNC := $$(eval $$(call CommonProductRules,src_L1Trigger_L1TCommon_src,src/L1Trigger/L1TCommon/src,LIBRARY))
L1TriggerL1TCommon := self/L1Trigger/L1TCommon
L1Trigger/L1TCommon := L1TriggerL1TCommon
L1TriggerL1TCommon_files := $(patsubst src/L1Trigger/L1TCommon/src/%,%,$(wildcard $(foreach dir,src/L1Trigger/L1TCommon/src ,$(foreach ext,$(SRC_FILES_SUFFIXES),$(dir)/*.$(ext)))))
L1TriggerL1TCommon_BuildFile    := $(WORKINGDIR)/cache/bf/src/L1Trigger/L1TCommon/BuildFile
L1TriggerL1TCommon_LOC_USE := self  xerces-c CondFormats/L1TObjects
L1TriggerL1TCommon_EX_LIB   := L1TriggerL1TCommon
L1TriggerL1TCommon_EX_USE   := $(foreach d,$(L1TriggerL1TCommon_LOC_USE),$(if $($(d)_EX_FLAGS_NO_RECURSIVE_EXPORT),,$d))
L1TriggerL1TCommon_PACKAGE := self/src/L1Trigger/L1TCommon/src
ALL_PRODS += L1TriggerL1TCommon
L1TriggerL1TCommon_CLASS := LIBRARY
L1Trigger/L1TCommon_forbigobj+=L1TriggerL1TCommon
L1TriggerL1TCommon_INIT_FUNC        += $$(eval $$(call Library,L1TriggerL1TCommon,src/L1Trigger/L1TCommon/src,src_L1Trigger_L1TCommon_src,$(SCRAMSTORENAME_BIN),,$(SCRAMSTORENAME_LIB),$(SCRAMSTORENAME_LOGS)))
endif
