ifeq ($(strip $(QCDAnalysis/UEAnalysis)),)
ALL_COMMONRULES += src_QCDAnalysis_UEAnalysis_src
src_QCDAnalysis_UEAnalysis_src_parent := QCDAnalysis/UEAnalysis
src_QCDAnalysis_UEAnalysis_src_INIT_FUNC := $$(eval $$(call CommonProductRules,src_QCDAnalysis_UEAnalysis_src,src/QCDAnalysis/UEAnalysis/src,LIBRARY))
QCDAnalysisUEAnalysis := self/QCDAnalysis/UEAnalysis
QCDAnalysis/UEAnalysis := QCDAnalysisUEAnalysis
QCDAnalysisUEAnalysis_files := $(patsubst src/QCDAnalysis/UEAnalysis/src/%,%,$(wildcard $(foreach dir,src/QCDAnalysis/UEAnalysis/src ,$(foreach ext,$(SRC_FILES_SUFFIXES),$(dir)/*.$(ext)))))
QCDAnalysisUEAnalysis_BuildFile    := $(WORKINGDIR)/cache/bf/src/QCDAnalysis/UEAnalysis/BuildFile
QCDAnalysisUEAnalysis_LOC_USE := self  SimDataFormats/GeneratorProducts DataFormats/JetReco DataFormats/Candidate DataFormats/Common DataFormats/HepMCCandidate DataFormats/TrackCandidate DataFormats/HLTReco CommonTools/UtilAlgos FWCore/Framework FWCore/PluginManager FWCore/ServiceRegistry clhep root
QCDAnalysisUEAnalysis_PRE_INIT_FUNC += $$(eval $$(call edmPlugin,QCDAnalysisUEAnalysis,QCDAnalysisUEAnalysis,$(SCRAMSTORENAME_LIB),src/QCDAnalysis/UEAnalysis/src))
QCDAnalysisUEAnalysis_PACKAGE := self/src/QCDAnalysis/UEAnalysis/src
ALL_PRODS += QCDAnalysisUEAnalysis
QCDAnalysisUEAnalysis_CLASS := LIBRARY
QCDAnalysis/UEAnalysis_forbigobj+=QCDAnalysisUEAnalysis
QCDAnalysisUEAnalysis_INIT_FUNC        += $$(eval $$(call Library,QCDAnalysisUEAnalysis,src/QCDAnalysis/UEAnalysis/src,src_QCDAnalysis_UEAnalysis_src,$(SCRAMSTORENAME_BIN),,$(SCRAMSTORENAME_LIB),$(SCRAMSTORENAME_LOGS)))
endif
