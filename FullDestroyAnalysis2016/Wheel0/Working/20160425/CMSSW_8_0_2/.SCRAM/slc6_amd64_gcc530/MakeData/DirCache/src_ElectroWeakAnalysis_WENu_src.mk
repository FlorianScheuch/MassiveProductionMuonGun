ifeq ($(strip $(ElectroWeakAnalysis/WENu)),)
ALL_COMMONRULES += src_ElectroWeakAnalysis_WENu_src
src_ElectroWeakAnalysis_WENu_src_parent := ElectroWeakAnalysis/WENu
src_ElectroWeakAnalysis_WENu_src_INIT_FUNC := $$(eval $$(call CommonProductRules,src_ElectroWeakAnalysis_WENu_src,src/ElectroWeakAnalysis/WENu/src,LIBRARY))
ElectroWeakAnalysisWENu := self/ElectroWeakAnalysis/WENu
ElectroWeakAnalysis/WENu := ElectroWeakAnalysisWENu
ElectroWeakAnalysisWENu_files := $(patsubst src/ElectroWeakAnalysis/WENu/src/%,%,$(wildcard $(foreach dir,src/ElectroWeakAnalysis/WENu/src ,$(foreach ext,$(SRC_FILES_SUFFIXES),$(dir)/*.$(ext)))))
ElectroWeakAnalysisWENu_BuildFile    := $(WORKINGDIR)/cache/bf/src/ElectroWeakAnalysis/WENu/BuildFile
ElectroWeakAnalysisWENu_LOC_USE := self  FWCore/Framework FWCore/PluginManager FWCore/ParameterSet DataFormats/PatCandidates DataFormats/Common RecoEgamma/EgammaTools RecoLocalCalo/EcalRecAlgos root rootmath rootcore
ElectroWeakAnalysisWENu_PRE_INIT_FUNC += $$(eval $$(call edmPlugin,ElectroWeakAnalysisWENu,ElectroWeakAnalysisWENu,$(SCRAMSTORENAME_LIB),src/ElectroWeakAnalysis/WENu/src))
ElectroWeakAnalysisWENu_PACKAGE := self/src/ElectroWeakAnalysis/WENu/src
ALL_PRODS += ElectroWeakAnalysisWENu
ElectroWeakAnalysisWENu_CLASS := LIBRARY
ElectroWeakAnalysis/WENu_forbigobj+=ElectroWeakAnalysisWENu
ElectroWeakAnalysisWENu_INIT_FUNC        += $$(eval $$(call Library,ElectroWeakAnalysisWENu,src/ElectroWeakAnalysis/WENu/src,src_ElectroWeakAnalysis_WENu_src,$(SCRAMSTORENAME_BIN),,$(SCRAMSTORENAME_LIB),$(SCRAMSTORENAME_LOGS)))
endif
