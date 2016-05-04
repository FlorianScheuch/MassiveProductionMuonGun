ifeq ($(strip $(ElectroWeakAnalysisZMuMu_plugins)),)
ElectroWeakAnalysisZMuMu_plugins := self/src/ElectroWeakAnalysis/ZMuMu/plugins
PLUGINS:=yes
ElectroWeakAnalysisZMuMu_plugins_files := $(patsubst src/ElectroWeakAnalysis/ZMuMu/plugins/%,%,$(foreach file,*.cc,$(eval xfile:=$(wildcard src/ElectroWeakAnalysis/ZMuMu/plugins/$(file)))$(if $(xfile),$(xfile),$(warning No such file exists: src/ElectroWeakAnalysis/ZMuMu/plugins/$(file). Please fix src/ElectroWeakAnalysis/ZMuMu/plugins/BuildFile.))))
ElectroWeakAnalysisZMuMu_plugins_BuildFile    := $(WORKINGDIR)/cache/bf/src/ElectroWeakAnalysis/ZMuMu/plugins/BuildFile
ElectroWeakAnalysisZMuMu_plugins_LOC_USE := self  PhysicsTools/RooStatsCms CommonTools/Utils FWCore/Framework CommonTools/UtilAlgos DataFormats/MuonReco FWCore/ParameterSet FWCore/Utilities DataFormats/HepMCCandidate DataFormats/Candidate DataFormats/PatCandidates root DataFormats/BTauReco
ElectroWeakAnalysisZMuMu_plugins_PRE_INIT_FUNC += $$(eval $$(call edmPlugin,ElectroWeakAnalysisZMuMu_plugins,ElectroWeakAnalysisZMuMu_plugins,$(SCRAMSTORENAME_LIB),src/ElectroWeakAnalysis/ZMuMu/plugins))
ElectroWeakAnalysisZMuMu_plugins_PACKAGE := self/src/ElectroWeakAnalysis/ZMuMu/plugins
ALL_PRODS += ElectroWeakAnalysisZMuMu_plugins
ElectroWeakAnalysis/ZMuMu_forbigobj+=ElectroWeakAnalysisZMuMu_plugins
ElectroWeakAnalysisZMuMu_plugins_INIT_FUNC        += $$(eval $$(call Library,ElectroWeakAnalysisZMuMu_plugins,src/ElectroWeakAnalysis/ZMuMu/plugins,src_ElectroWeakAnalysis_ZMuMu_plugins,$(SCRAMSTORENAME_BIN),,$(SCRAMSTORENAME_LIB),$(SCRAMSTORENAME_LOGS)))
ElectroWeakAnalysisZMuMu_plugins_CLASS := LIBRARY
else
$(eval $(call MultipleWarningMsg,ElectroWeakAnalysisZMuMu_plugins,src/ElectroWeakAnalysis/ZMuMu/plugins))
endif
ALL_COMMONRULES += src_ElectroWeakAnalysis_ZMuMu_plugins
src_ElectroWeakAnalysis_ZMuMu_plugins_parent := ElectroWeakAnalysis/ZMuMu
src_ElectroWeakAnalysis_ZMuMu_plugins_INIT_FUNC += $$(eval $$(call CommonProductRules,src_ElectroWeakAnalysis_ZMuMu_plugins,src/ElectroWeakAnalysis/ZMuMu/plugins,PLUGINS))
