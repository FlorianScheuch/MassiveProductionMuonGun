ifeq ($(strip $(CaloOnlineTools/EcalTools)),)
ALL_COMMONRULES += src_CaloOnlineTools_EcalTools_src
src_CaloOnlineTools_EcalTools_src_parent := CaloOnlineTools/EcalTools
src_CaloOnlineTools_EcalTools_src_INIT_FUNC := $$(eval $$(call CommonProductRules,src_CaloOnlineTools_EcalTools_src,src/CaloOnlineTools/EcalTools/src,LIBRARY))
CaloOnlineToolsEcalTools := self/CaloOnlineTools/EcalTools
CaloOnlineTools/EcalTools := CaloOnlineToolsEcalTools
CaloOnlineToolsEcalTools_files := $(patsubst src/CaloOnlineTools/EcalTools/src/%,%,$(wildcard $(foreach dir,src/CaloOnlineTools/EcalTools/src ,$(foreach ext,$(SRC_FILES_SUFFIXES),$(dir)/*.$(ext)))))
CaloOnlineToolsEcalTools_BuildFile    := $(WORKINGDIR)/cache/bf/src/CaloOnlineTools/EcalTools/BuildFile
CaloOnlineToolsEcalTools_LOC_USE := self  root
CaloOnlineToolsEcalTools_EX_LIB   := CaloOnlineToolsEcalTools
CaloOnlineToolsEcalTools_EX_USE   := $(foreach d,$(CaloOnlineToolsEcalTools_LOC_USE),$(if $($(d)_EX_FLAGS_NO_RECURSIVE_EXPORT),,$d))
CaloOnlineToolsEcalTools_PACKAGE := self/src/CaloOnlineTools/EcalTools/src
ALL_PRODS += CaloOnlineToolsEcalTools
CaloOnlineToolsEcalTools_CLASS := LIBRARY
CaloOnlineTools/EcalTools_forbigobj+=CaloOnlineToolsEcalTools
CaloOnlineToolsEcalTools_INIT_FUNC        += $$(eval $$(call Library,CaloOnlineToolsEcalTools,src/CaloOnlineTools/EcalTools/src,src_CaloOnlineTools_EcalTools_src,$(SCRAMSTORENAME_BIN),,$(SCRAMSTORENAME_LIB),$(SCRAMSTORENAME_LOGS)))
endif
