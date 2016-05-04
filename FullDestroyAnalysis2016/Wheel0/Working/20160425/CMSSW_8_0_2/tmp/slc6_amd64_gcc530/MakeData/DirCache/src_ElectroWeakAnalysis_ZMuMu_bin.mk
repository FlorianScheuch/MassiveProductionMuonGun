ifeq ($(strip $(zMuMuRooFit)),)
zMuMuRooFit_files := $(patsubst src/ElectroWeakAnalysis/ZMuMu/bin/%,%,$(foreach file,zMuMuRooFit.cpp,$(eval xfile:=$(wildcard src/ElectroWeakAnalysis/ZMuMu/bin/$(file)))$(if $(xfile),$(xfile),$(warning No such file exists: src/ElectroWeakAnalysis/ZMuMu/bin/$(file). Please fix src/ElectroWeakAnalysis/ZMuMu/bin/BuildFile.))))
zMuMuRooFit := self/src/ElectroWeakAnalysis/ZMuMu/bin
zMuMuRooFit_BuildFile    := $(WORKINGDIR)/cache/bf/src/ElectroWeakAnalysis/ZMuMu/bin/BuildFile
zMuMuRooFit_LOC_USE := self  rootgraphics rootminuit rootminuit2 Utilities/General roofit boost_program_options
zMuMuRooFit_PACKAGE := self/src/ElectroWeakAnalysis/ZMuMu/bin
ALL_PRODS += zMuMuRooFit
zMuMuRooFit_INIT_FUNC        += $$(eval $$(call Binary,zMuMuRooFit,src/ElectroWeakAnalysis/ZMuMu/bin,src_ElectroWeakAnalysis_ZMuMu_bin,$(SCRAMSTORENAME_BIN),,$(SCRAMSTORENAME_BIN),bin,$(SCRAMSTORENAME_LOGS)))
zMuMuRooFit_CLASS := BINARY
else
$(eval $(call MultipleWarningMsg,zMuMuRooFit,src/ElectroWeakAnalysis/ZMuMu/bin))
endif
ifeq ($(strip $(hltEffwithCPErrorMCvsDATA)),)
hltEffwithCPErrorMCvsDATA_files := $(patsubst src/ElectroWeakAnalysis/ZMuMu/bin/%,%,$(foreach file,hltEffwithCPErrorMCvsDATA.cpp,$(eval xfile:=$(wildcard src/ElectroWeakAnalysis/ZMuMu/bin/$(file)))$(if $(xfile),$(xfile),$(warning No such file exists: src/ElectroWeakAnalysis/ZMuMu/bin/$(file). Please fix src/ElectroWeakAnalysis/ZMuMu/bin/BuildFile.))))
hltEffwithCPErrorMCvsDATA := self/src/ElectroWeakAnalysis/ZMuMu/bin
hltEffwithCPErrorMCvsDATA_BuildFile    := $(WORKINGDIR)/cache/bf/src/ElectroWeakAnalysis/ZMuMu/bin/BuildFile
hltEffwithCPErrorMCvsDATA_LOC_USE := self  rootgraphics rootminuit rootminuit2 Utilities/General root PhysicsTools/RooStatsCms rootmath boost_program_options
hltEffwithCPErrorMCvsDATA_PACKAGE := self/src/ElectroWeakAnalysis/ZMuMu/bin
ALL_PRODS += hltEffwithCPErrorMCvsDATA
hltEffwithCPErrorMCvsDATA_INIT_FUNC        += $$(eval $$(call Binary,hltEffwithCPErrorMCvsDATA,src/ElectroWeakAnalysis/ZMuMu/bin,src_ElectroWeakAnalysis_ZMuMu_bin,$(SCRAMSTORENAME_BIN),,$(SCRAMSTORENAME_BIN),bin,$(SCRAMSTORENAME_LOGS)))
hltEffwithCPErrorMCvsDATA_CLASS := BINARY
else
$(eval $(call MultipleWarningMsg,hltEffwithCPErrorMCvsDATA,src/ElectroWeakAnalysis/ZMuMu/bin))
endif
ifeq ($(strip $(zFitToyMc)),)
zFitToyMc_files := $(patsubst src/ElectroWeakAnalysis/ZMuMu/bin/%,%,$(foreach file,zFitToyMc.cpp,$(eval xfile:=$(wildcard src/ElectroWeakAnalysis/ZMuMu/bin/$(file)))$(if $(xfile),$(xfile),$(warning No such file exists: src/ElectroWeakAnalysis/ZMuMu/bin/$(file). Please fix src/ElectroWeakAnalysis/ZMuMu/bin/BuildFile.))))
zFitToyMc := self/src/ElectroWeakAnalysis/ZMuMu/bin
zFitToyMc_BuildFile    := $(WORKINGDIR)/cache/bf/src/ElectroWeakAnalysis/ZMuMu/bin/BuildFile
zFitToyMc_LOC_USE := self  rootgraphics rootminuit rootminuit2 Utilities/General PhysicsTools/Utilities boost_program_options
zFitToyMc_PACKAGE := self/src/ElectroWeakAnalysis/ZMuMu/bin
ALL_PRODS += zFitToyMc
zFitToyMc_INIT_FUNC        += $$(eval $$(call Binary,zFitToyMc,src/ElectroWeakAnalysis/ZMuMu/bin,src_ElectroWeakAnalysis_ZMuMu_bin,$(SCRAMSTORENAME_BIN),,$(SCRAMSTORENAME_BIN),bin,$(SCRAMSTORENAME_LOGS)))
zFitToyMc_CLASS := BINARY
else
$(eval $(call MultipleWarningMsg,zFitToyMc,src/ElectroWeakAnalysis/ZMuMu/bin))
endif
ifeq ($(strip $(hltEffwithCPError)),)
hltEffwithCPError_files := $(patsubst src/ElectroWeakAnalysis/ZMuMu/bin/%,%,$(foreach file,hltEffwithCPError.cpp,$(eval xfile:=$(wildcard src/ElectroWeakAnalysis/ZMuMu/bin/$(file)))$(if $(xfile),$(xfile),$(warning No such file exists: src/ElectroWeakAnalysis/ZMuMu/bin/$(file). Please fix src/ElectroWeakAnalysis/ZMuMu/bin/BuildFile.))))
hltEffwithCPError := self/src/ElectroWeakAnalysis/ZMuMu/bin
hltEffwithCPError_BuildFile    := $(WORKINGDIR)/cache/bf/src/ElectroWeakAnalysis/ZMuMu/bin/BuildFile
hltEffwithCPError_LOC_USE := self  rootgraphics rootminuit rootminuit2 Utilities/General root PhysicsTools/RooStatsCms rootmath boost_program_options
hltEffwithCPError_PACKAGE := self/src/ElectroWeakAnalysis/ZMuMu/bin
ALL_PRODS += hltEffwithCPError
hltEffwithCPError_INIT_FUNC        += $$(eval $$(call Binary,hltEffwithCPError,src/ElectroWeakAnalysis/ZMuMu/bin,src_ElectroWeakAnalysis_ZMuMu_bin,$(SCRAMSTORENAME_BIN),,$(SCRAMSTORENAME_BIN),bin,$(SCRAMSTORENAME_LOGS)))
hltEffwithCPError_CLASS := BINARY
else
$(eval $(call MultipleWarningMsg,hltEffwithCPError,src/ElectroWeakAnalysis/ZMuMu/bin))
endif
ifeq ($(strip $(csa08HLTFit)),)
csa08HLTFit_files := $(patsubst src/ElectroWeakAnalysis/ZMuMu/bin/%,%,$(foreach file,csa08HLTFit.cpp,$(eval xfile:=$(wildcard src/ElectroWeakAnalysis/ZMuMu/bin/$(file)))$(if $(xfile),$(xfile),$(warning No such file exists: src/ElectroWeakAnalysis/ZMuMu/bin/$(file). Please fix src/ElectroWeakAnalysis/ZMuMu/bin/BuildFile.))))
csa08HLTFit := self/src/ElectroWeakAnalysis/ZMuMu/bin
csa08HLTFit_BuildFile    := $(WORKINGDIR)/cache/bf/src/ElectroWeakAnalysis/ZMuMu/bin/BuildFile
csa08HLTFit_LOC_USE := self  rootgraphics rootminuit rootminuit2 Utilities/General PhysicsTools/Utilities boost_program_options
csa08HLTFit_PACKAGE := self/src/ElectroWeakAnalysis/ZMuMu/bin
ALL_PRODS += csa08HLTFit
csa08HLTFit_INIT_FUNC        += $$(eval $$(call Binary,csa08HLTFit,src/ElectroWeakAnalysis/ZMuMu/bin,src_ElectroWeakAnalysis_ZMuMu_bin,$(SCRAMSTORENAME_BIN),,$(SCRAMSTORENAME_BIN),bin,$(SCRAMSTORENAME_LOGS)))
csa08HLTFit_CLASS := BINARY
else
$(eval $(call MultipleWarningMsg,csa08HLTFit,src/ElectroWeakAnalysis/ZMuMu/bin))
endif
ifeq ($(strip $(zUMLChi2Fit)),)
zUMLChi2Fit_files := $(patsubst src/ElectroWeakAnalysis/ZMuMu/bin/%,%,$(foreach file,zUMLChi2Fit.cpp,$(eval xfile:=$(wildcard src/ElectroWeakAnalysis/ZMuMu/bin/$(file)))$(if $(xfile),$(xfile),$(warning No such file exists: src/ElectroWeakAnalysis/ZMuMu/bin/$(file). Please fix src/ElectroWeakAnalysis/ZMuMu/bin/BuildFile.))))
zUMLChi2Fit := self/src/ElectroWeakAnalysis/ZMuMu/bin
zUMLChi2Fit_BuildFile    := $(WORKINGDIR)/cache/bf/src/ElectroWeakAnalysis/ZMuMu/bin/BuildFile
zUMLChi2Fit_LOC_USE := self  rootgraphics rootminuit rootminuit2 Utilities/General PhysicsTools/Utilities boost_program_options FWCore/FWLite DataFormats/FWLite
zUMLChi2Fit_PACKAGE := self/src/ElectroWeakAnalysis/ZMuMu/bin
ALL_PRODS += zUMLChi2Fit
zUMLChi2Fit_INIT_FUNC        += $$(eval $$(call Binary,zUMLChi2Fit,src/ElectroWeakAnalysis/ZMuMu/bin,src_ElectroWeakAnalysis_ZMuMu_bin,$(SCRAMSTORENAME_BIN),,$(SCRAMSTORENAME_BIN),bin,$(SCRAMSTORENAME_LOGS)))
zUMLChi2Fit_CLASS := BINARY
else
$(eval $(call MultipleWarningMsg,zUMLChi2Fit,src/ElectroWeakAnalysis/ZMuMu/bin))
endif
ifeq ($(strip $(toyMonteCarlo)),)
toyMonteCarlo_files := $(patsubst src/ElectroWeakAnalysis/ZMuMu/bin/%,%,$(foreach file,toyMonteCarlo.cpp,$(eval xfile:=$(wildcard src/ElectroWeakAnalysis/ZMuMu/bin/$(file)))$(if $(xfile),$(xfile),$(warning No such file exists: src/ElectroWeakAnalysis/ZMuMu/bin/$(file). Please fix src/ElectroWeakAnalysis/ZMuMu/bin/BuildFile.))))
toyMonteCarlo := self/src/ElectroWeakAnalysis/ZMuMu/bin
toyMonteCarlo_BuildFile    := $(WORKINGDIR)/cache/bf/src/ElectroWeakAnalysis/ZMuMu/bin/BuildFile
toyMonteCarlo_LOC_USE := self  rootgraphics rootminuit rootminuit2 Utilities/General boost_program_options
toyMonteCarlo_PACKAGE := self/src/ElectroWeakAnalysis/ZMuMu/bin
ALL_PRODS += toyMonteCarlo
toyMonteCarlo_INIT_FUNC        += $$(eval $$(call Binary,toyMonteCarlo,src/ElectroWeakAnalysis/ZMuMu/bin,src_ElectroWeakAnalysis_ZMuMu_bin,$(SCRAMSTORENAME_BIN),,$(SCRAMSTORENAME_BIN),bin,$(SCRAMSTORENAME_LOGS)))
toyMonteCarlo_CLASS := BINARY
else
$(eval $(call MultipleWarningMsg,toyMonteCarlo,src/ElectroWeakAnalysis/ZMuMu/bin))
endif
ifeq ($(strip $(zChi2Fit)),)
zChi2Fit_files := $(patsubst src/ElectroWeakAnalysis/ZMuMu/bin/%,%,$(foreach file,zChi2Fit.cpp,$(eval xfile:=$(wildcard src/ElectroWeakAnalysis/ZMuMu/bin/$(file)))$(if $(xfile),$(xfile),$(warning No such file exists: src/ElectroWeakAnalysis/ZMuMu/bin/$(file). Please fix src/ElectroWeakAnalysis/ZMuMu/bin/BuildFile.))))
zChi2Fit := self/src/ElectroWeakAnalysis/ZMuMu/bin
zChi2Fit_BuildFile    := $(WORKINGDIR)/cache/bf/src/ElectroWeakAnalysis/ZMuMu/bin/BuildFile
zChi2Fit_LOC_USE := self  rootgraphics rootminuit rootminuit2 Utilities/General PhysicsTools/Utilities boost_program_options
zChi2Fit_PACKAGE := self/src/ElectroWeakAnalysis/ZMuMu/bin
ALL_PRODS += zChi2Fit
zChi2Fit_INIT_FUNC        += $$(eval $$(call Binary,zChi2Fit,src/ElectroWeakAnalysis/ZMuMu/bin,src_ElectroWeakAnalysis_ZMuMu_bin,$(SCRAMSTORENAME_BIN),,$(SCRAMSTORENAME_BIN),bin,$(SCRAMSTORENAME_LOGS)))
zChi2Fit_CLASS := BINARY
else
$(eval $(call MultipleWarningMsg,zChi2Fit,src/ElectroWeakAnalysis/ZMuMu/bin))
endif
ALL_COMMONRULES += src_ElectroWeakAnalysis_ZMuMu_bin
src_ElectroWeakAnalysis_ZMuMu_bin_parent := ElectroWeakAnalysis/ZMuMu
src_ElectroWeakAnalysis_ZMuMu_bin_INIT_FUNC += $$(eval $$(call CommonProductRules,src_ElectroWeakAnalysis_ZMuMu_bin,src/ElectroWeakAnalysis/ZMuMu/bin,BINARY))
