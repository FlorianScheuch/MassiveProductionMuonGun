ifeq ($(strip $(conddb_test_gt_load)),)
conddb_test_gt_load_files := $(patsubst src/CondCore/Utilities/bin/%,%,$(foreach file,conddb_test_gt_load.cpp,$(eval xfile:=$(wildcard src/CondCore/Utilities/bin/$(file)))$(if $(xfile),$(xfile),$(warning No such file exists: src/CondCore/Utilities/bin/$(file). Please fix src/CondCore/Utilities/bin/BuildFile.))))
conddb_test_gt_load := self/src/CondCore/Utilities/bin
conddb_test_gt_load_BuildFile    := $(WORKINGDIR)/cache/bf/src/CondCore/Utilities/bin/BuildFile
conddb_test_gt_load_LOC_FLAGS_CXXFLAGS   := -Wno-sign-compare -Wno-unused-variable -ftemplate-depth=600
conddb_test_gt_load_LOC_USE := self  CondCore/Utilities FWCore/Concurrency CondCore/CondDB
conddb_test_gt_load_PACKAGE := self/src/CondCore/Utilities/bin
ALL_PRODS += conddb_test_gt_load
conddb_test_gt_load_INIT_FUNC        += $$(eval $$(call Binary,conddb_test_gt_load,src/CondCore/Utilities/bin,src_CondCore_Utilities_bin,$(SCRAMSTORENAME_BIN),,$(SCRAMSTORENAME_BIN),bin,$(SCRAMSTORENAME_LOGS)))
conddb_test_gt_load_CLASS := BINARY
else
$(eval $(call MultipleWarningMsg,conddb_test_gt_load,src/CondCore/Utilities/bin))
endif
ifeq ($(strip $(conddb_test)),)
conddb_test_files := $(patsubst src/CondCore/Utilities/bin/%,%,$(foreach file,conddb_test.cpp,$(eval xfile:=$(wildcard src/CondCore/Utilities/bin/$(file)))$(if $(xfile),$(xfile),$(warning No such file exists: src/CondCore/Utilities/bin/$(file). Please fix src/CondCore/Utilities/bin/BuildFile.))))
conddb_test := self/src/CondCore/Utilities/bin
conddb_test_BuildFile    := $(WORKINGDIR)/cache/bf/src/CondCore/Utilities/bin/BuildFile
conddb_test_LOC_FLAGS_CXXFLAGS   := -Wno-sign-compare -Wno-unused-variable -ftemplate-depth=600
conddb_test_LOC_USE := self  CondCore/Utilities FWCore/Concurrency CondCore/CondDB
conddb_test_PACKAGE := self/src/CondCore/Utilities/bin
ALL_PRODS += conddb_test
conddb_test_INIT_FUNC        += $$(eval $$(call Binary,conddb_test,src/CondCore/Utilities/bin,src_CondCore_Utilities_bin,$(SCRAMSTORENAME_BIN),,$(SCRAMSTORENAME_BIN),bin,$(SCRAMSTORENAME_LOGS)))
conddb_test_CLASS := BINARY
else
$(eval $(call MultipleWarningMsg,conddb_test,src/CondCore/Utilities/bin))
endif
ifeq ($(strip $(conddb_import)),)
conddb_import_files := $(patsubst src/CondCore/Utilities/bin/%,%,$(foreach file,conddb_import.cpp,$(eval xfile:=$(wildcard src/CondCore/Utilities/bin/$(file)))$(if $(xfile),$(xfile),$(warning No such file exists: src/CondCore/Utilities/bin/$(file). Please fix src/CondCore/Utilities/bin/BuildFile.))))
conddb_import := self/src/CondCore/Utilities/bin
conddb_import_BuildFile    := $(WORKINGDIR)/cache/bf/src/CondCore/Utilities/bin/BuildFile
conddb_import_LOC_FLAGS_CXXFLAGS   := -Wno-sign-compare -Wno-unused-variable -ftemplate-depth=600
conddb_import_LOC_USE := self  CondCore/Utilities FWCore/Concurrency CondCore/CondDB
conddb_import_PACKAGE := self/src/CondCore/Utilities/bin
ALL_PRODS += conddb_import
conddb_import_INIT_FUNC        += $$(eval $$(call Binary,conddb_import,src/CondCore/Utilities/bin,src_CondCore_Utilities_bin,$(SCRAMSTORENAME_BIN),,$(SCRAMSTORENAME_BIN),bin,$(SCRAMSTORENAME_LOGS)))
conddb_import_CLASS := BINARY
else
$(eval $(call MultipleWarningMsg,conddb_import,src/CondCore/Utilities/bin))
endif
ifeq ($(strip $(conddb_copy_iov)),)
conddb_copy_iov_files := $(patsubst src/CondCore/Utilities/bin/%,%,$(foreach file,conddb_copy_iov.cpp,$(eval xfile:=$(wildcard src/CondCore/Utilities/bin/$(file)))$(if $(xfile),$(xfile),$(warning No such file exists: src/CondCore/Utilities/bin/$(file). Please fix src/CondCore/Utilities/bin/BuildFile.))))
conddb_copy_iov := self/src/CondCore/Utilities/bin
conddb_copy_iov_BuildFile    := $(WORKINGDIR)/cache/bf/src/CondCore/Utilities/bin/BuildFile
conddb_copy_iov_LOC_FLAGS_CXXFLAGS   := -Wno-sign-compare -Wno-unused-variable -ftemplate-depth=600
conddb_copy_iov_LOC_USE := self  CondCore/Utilities FWCore/Concurrency CondCore/CondDB
conddb_copy_iov_PACKAGE := self/src/CondCore/Utilities/bin
ALL_PRODS += conddb_copy_iov
conddb_copy_iov_INIT_FUNC        += $$(eval $$(call Binary,conddb_copy_iov,src/CondCore/Utilities/bin,src_CondCore_Utilities_bin,$(SCRAMSTORENAME_BIN),,$(SCRAMSTORENAME_BIN),bin,$(SCRAMSTORENAME_LOGS)))
conddb_copy_iov_CLASS := BINARY
else
$(eval $(call MultipleWarningMsg,conddb_copy_iov,src/CondCore/Utilities/bin))
endif
ifeq ($(strip $(conddb_test_gt_perf)),)
conddb_test_gt_perf_files := $(patsubst src/CondCore/Utilities/bin/%,%,$(foreach file,conddb_test_gt_perf.cpp,$(eval xfile:=$(wildcard src/CondCore/Utilities/bin/$(file)))$(if $(xfile),$(xfile),$(warning No such file exists: src/CondCore/Utilities/bin/$(file). Please fix src/CondCore/Utilities/bin/BuildFile.))))
conddb_test_gt_perf := self/src/CondCore/Utilities/bin
conddb_test_gt_perf_BuildFile    := $(WORKINGDIR)/cache/bf/src/CondCore/Utilities/bin/BuildFile
conddb_test_gt_perf_LOC_FLAGS_CXXFLAGS   := -Wno-sign-compare -Wno-unused-variable -ftemplate-depth=600
conddb_test_gt_perf_LOC_USE := self  CondCore/Utilities FWCore/Concurrency CondCore/CondDB
conddb_test_gt_perf_PACKAGE := self/src/CondCore/Utilities/bin
ALL_PRODS += conddb_test_gt_perf
conddb_test_gt_perf_INIT_FUNC        += $$(eval $$(call Binary,conddb_test_gt_perf,src/CondCore/Utilities/bin,src_CondCore_Utilities_bin,$(SCRAMSTORENAME_BIN),,$(SCRAMSTORENAME_BIN),bin,$(SCRAMSTORENAME_LOGS)))
conddb_test_gt_perf_CLASS := BINARY
else
$(eval $(call MultipleWarningMsg,conddb_test_gt_perf,src/CondCore/Utilities/bin))
endif
ifeq ($(strip $(cmscond_authentication_manager)),)
cmscond_authentication_manager_files := $(patsubst src/CondCore/Utilities/bin/%,%,$(foreach file,cmscond_authentication_manager.cpp,$(eval xfile:=$(wildcard src/CondCore/Utilities/bin/$(file)))$(if $(xfile),$(xfile),$(warning No such file exists: src/CondCore/Utilities/bin/$(file). Please fix src/CondCore/Utilities/bin/BuildFile.))))
cmscond_authentication_manager := self/src/CondCore/Utilities/bin
cmscond_authentication_manager_BuildFile    := $(WORKINGDIR)/cache/bf/src/CondCore/Utilities/bin/BuildFile
cmscond_authentication_manager_LOC_FLAGS_CXXFLAGS   := -Wno-sign-compare -Wno-unused-variable -ftemplate-depth=600
cmscond_authentication_manager_LOC_USE := self  CondCore/Utilities FWCore/Concurrency
cmscond_authentication_manager_PACKAGE := self/src/CondCore/Utilities/bin
ALL_PRODS += cmscond_authentication_manager
cmscond_authentication_manager_INIT_FUNC        += $$(eval $$(call Binary,cmscond_authentication_manager,src/CondCore/Utilities/bin,src_CondCore_Utilities_bin,$(SCRAMSTORENAME_BIN),,$(SCRAMSTORENAME_BIN),bin,$(SCRAMSTORENAME_LOGS)))
cmscond_authentication_manager_CLASS := BINARY
else
$(eval $(call MultipleWarningMsg,cmscond_authentication_manager,src/CondCore/Utilities/bin))
endif
ifeq ($(strip $(cmscond_key_mgr)),)
cmscond_key_mgr_files := $(patsubst src/CondCore/Utilities/bin/%,%,$(foreach file,cmscond_key_mgr.cpp,$(eval xfile:=$(wildcard src/CondCore/Utilities/bin/$(file)))$(if $(xfile),$(xfile),$(warning No such file exists: src/CondCore/Utilities/bin/$(file). Please fix src/CondCore/Utilities/bin/BuildFile.))))
cmscond_key_mgr := self/src/CondCore/Utilities/bin
cmscond_key_mgr_BuildFile    := $(WORKINGDIR)/cache/bf/src/CondCore/Utilities/bin/BuildFile
cmscond_key_mgr_LOC_FLAGS_CXXFLAGS   := -Wno-sign-compare -Wno-unused-variable -ftemplate-depth=600
cmscond_key_mgr_LOC_USE := self  CondCore/Utilities FWCore/Concurrency
cmscond_key_mgr_PACKAGE := self/src/CondCore/Utilities/bin
ALL_PRODS += cmscond_key_mgr
cmscond_key_mgr_INIT_FUNC        += $$(eval $$(call Binary,cmscond_key_mgr,src/CondCore/Utilities/bin,src_CondCore_Utilities_bin,$(SCRAMSTORENAME_BIN),,$(SCRAMSTORENAME_BIN),bin,$(SCRAMSTORENAME_LOGS)))
cmscond_key_mgr_CLASS := BINARY
else
$(eval $(call MultipleWarningMsg,cmscond_key_mgr,src/CondCore/Utilities/bin))
endif
ifeq ($(strip $(cmscond_from_lumiid)),)
cmscond_from_lumiid_files := $(patsubst src/CondCore/Utilities/bin/%,%,$(foreach file,cmscond_from_lumiid.cpp,$(eval xfile:=$(wildcard src/CondCore/Utilities/bin/$(file)))$(if $(xfile),$(xfile),$(warning No such file exists: src/CondCore/Utilities/bin/$(file). Please fix src/CondCore/Utilities/bin/BuildFile.))))
cmscond_from_lumiid := self/src/CondCore/Utilities/bin
cmscond_from_lumiid_BuildFile    := $(WORKINGDIR)/cache/bf/src/CondCore/Utilities/bin/BuildFile
cmscond_from_lumiid_LOC_FLAGS_CXXFLAGS   := -Wno-sign-compare -Wno-unused-variable -ftemplate-depth=600
cmscond_from_lumiid_LOC_USE := self  CondCore/Utilities FWCore/Concurrency DataFormats/Provenance
cmscond_from_lumiid_PACKAGE := self/src/CondCore/Utilities/bin
ALL_PRODS += cmscond_from_lumiid
cmscond_from_lumiid_INIT_FUNC        += $$(eval $$(call Binary,cmscond_from_lumiid,src/CondCore/Utilities/bin,src_CondCore_Utilities_bin,$(SCRAMSTORENAME_BIN),,$(SCRAMSTORENAME_BIN),bin,$(SCRAMSTORENAME_LOGS)))
cmscond_from_lumiid_CLASS := BINARY
else
$(eval $(call MultipleWarningMsg,cmscond_from_lumiid,src/CondCore/Utilities/bin))
endif
ifeq ($(strip $(cmscond_to_lumiid)),)
cmscond_to_lumiid_files := $(patsubst src/CondCore/Utilities/bin/%,%,$(foreach file,cmscond_to_lumiid.cpp,$(eval xfile:=$(wildcard src/CondCore/Utilities/bin/$(file)))$(if $(xfile),$(xfile),$(warning No such file exists: src/CondCore/Utilities/bin/$(file). Please fix src/CondCore/Utilities/bin/BuildFile.))))
cmscond_to_lumiid := self/src/CondCore/Utilities/bin
cmscond_to_lumiid_BuildFile    := $(WORKINGDIR)/cache/bf/src/CondCore/Utilities/bin/BuildFile
cmscond_to_lumiid_LOC_FLAGS_CXXFLAGS   := -Wno-sign-compare -Wno-unused-variable -ftemplate-depth=600
cmscond_to_lumiid_LOC_USE := self  CondCore/Utilities FWCore/Concurrency DataFormats/Provenance
cmscond_to_lumiid_PACKAGE := self/src/CondCore/Utilities/bin
ALL_PRODS += cmscond_to_lumiid
cmscond_to_lumiid_INIT_FUNC        += $$(eval $$(call Binary,cmscond_to_lumiid,src/CondCore/Utilities/bin,src_CondCore_Utilities_bin,$(SCRAMSTORENAME_BIN),,$(SCRAMSTORENAME_BIN),bin,$(SCRAMSTORENAME_LOGS)))
cmscond_to_lumiid_CLASS := BINARY
else
$(eval $(call MultipleWarningMsg,cmscond_to_lumiid,src/CondCore/Utilities/bin))
endif
ALL_COMMONRULES += src_CondCore_Utilities_bin
src_CondCore_Utilities_bin_parent := CondCore/Utilities
src_CondCore_Utilities_bin_INIT_FUNC += $$(eval $$(call CommonProductRules,src_CondCore_Utilities_bin,src/CondCore/Utilities/bin,BINARY))
