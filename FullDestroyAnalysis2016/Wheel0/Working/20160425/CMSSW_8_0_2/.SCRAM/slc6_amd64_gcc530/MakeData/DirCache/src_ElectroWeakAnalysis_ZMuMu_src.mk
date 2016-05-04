ifeq ($(strip $(ElectroWeakAnalysis/ZMuMu)),)
ALL_COMMONRULES += src_ElectroWeakAnalysis_ZMuMu_src
src_ElectroWeakAnalysis_ZMuMu_src_parent := ElectroWeakAnalysis/ZMuMu
src_ElectroWeakAnalysis_ZMuMu_src_INIT_FUNC := $$(eval $$(call CommonProductRules,src_ElectroWeakAnalysis_ZMuMu_src,src/ElectroWeakAnalysis/ZMuMu/src,LIBRARY))
ElectroWeakAnalysisZMuMu := self/ElectroWeakAnalysis/ZMuMu
ElectroWeakAnalysis/ZMuMu := ElectroWeakAnalysisZMuMu
ElectroWeakAnalysisZMuMu_files := $(patsubst src/ElectroWeakAnalysis/ZMuMu/src/%,%,$(wildcard $(foreach dir,src/ElectroWeakAnalysis/ZMuMu/src ,$(foreach ext,$(SRC_FILES_SUFFIXES),$(dir)/*.$(ext)))))
ElectroWeakAnalysisZMuMu_BuildFile    := $(WORKINGDIR)/cache/bf/src/ElectroWeakAnalysis/ZMuMu/BuildFile
ElectroWeakAnalysisZMuMu_LOC_USE := self  PhysicsTools/Utilities
ElectroWeakAnalysisZMuMu_EX_LIB   := ElectroWeakAnalysisZMuMu
ElectroWeakAnalysisZMuMu_EX_USE   := $(foreach d,$(ElectroWeakAnalysisZMuMu_LOC_USE),$(if $($(d)_EX_FLAGS_NO_RECURSIVE_EXPORT),,$d))
ElectroWeakAnalysisZMuMu_PACKAGE := self/src/ElectroWeakAnalysis/ZMuMu/src
ALL_PRODS += ElectroWeakAnalysisZMuMu
ElectroWeakAnalysisZMuMu_CLASS := LIBRARY
ElectroWeakAnalysis/ZMuMu_forbigobj+=ElectroWeakAnalysisZMuMu
ElectroWeakAnalysisZMuMu_INIT_FUNC        += $$(eval $$(call Library,ElectroWeakAnalysisZMuMu,src/ElectroWeakAnalysis/ZMuMu/src,src_ElectroWeakAnalysis_ZMuMu_src,$(SCRAMSTORENAME_BIN),,$(SCRAMSTORENAME_LIB),$(SCRAMSTORENAME_LOGS)))
endif
