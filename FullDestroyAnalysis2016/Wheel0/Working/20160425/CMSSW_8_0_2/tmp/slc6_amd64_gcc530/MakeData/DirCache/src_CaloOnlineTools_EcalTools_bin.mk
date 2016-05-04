ifeq ($(strip $(TPGTreeReader)),)
TPGTreeReader_files := $(patsubst src/CaloOnlineTools/EcalTools/bin/%,%,$(foreach file,TPGTreeReader.cpp,$(eval xfile:=$(wildcard src/CaloOnlineTools/EcalTools/bin/$(file)))$(if $(xfile),$(xfile),$(warning No such file exists: src/CaloOnlineTools/EcalTools/bin/$(file). Please fix src/CaloOnlineTools/EcalTools/bin/BuildFile.))))
TPGTreeReader := self/src/CaloOnlineTools/EcalTools/bin
TPGTreeReader_BuildFile    := $(WORKINGDIR)/cache/bf/src/CaloOnlineTools/EcalTools/bin/BuildFile
TPGTreeReader_LOC_USE := self  CaloOnlineTools/EcalTools boost_header
TPGTreeReader_PACKAGE := self/src/CaloOnlineTools/EcalTools/bin
ALL_PRODS += TPGTreeReader
TPGTreeReader_INIT_FUNC        += $$(eval $$(call Binary,TPGTreeReader,src/CaloOnlineTools/EcalTools/bin,src_CaloOnlineTools_EcalTools_bin,$(SCRAMSTORENAME_BIN),,$(SCRAMSTORENAME_BIN),bin,$(SCRAMSTORENAME_LOGS)))
TPGTreeReader_CLASS := BINARY
else
$(eval $(call MultipleWarningMsg,TPGTreeReader,src/CaloOnlineTools/EcalTools/bin))
endif
ALL_COMMONRULES += src_CaloOnlineTools_EcalTools_bin
src_CaloOnlineTools_EcalTools_bin_parent := CaloOnlineTools/EcalTools
src_CaloOnlineTools_EcalTools_bin_INIT_FUNC += $$(eval $$(call CommonProductRules,src_CaloOnlineTools_EcalTools_bin,src/CaloOnlineTools/EcalTools/bin,BINARY))
