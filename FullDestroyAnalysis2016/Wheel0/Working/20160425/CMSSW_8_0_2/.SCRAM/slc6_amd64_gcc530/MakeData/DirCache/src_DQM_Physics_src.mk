ifeq ($(strip $(DQM/Physics)),)
ALL_COMMONRULES += src_DQM_Physics_src
src_DQM_Physics_src_parent := DQM/Physics
src_DQM_Physics_src_INIT_FUNC := $$(eval $$(call CommonProductRules,src_DQM_Physics_src,src/DQM/Physics/src,LIBRARY))
DQMPhysics := self/DQM/Physics
DQM/Physics := DQMPhysics
DQMPhysics_files := $(patsubst src/DQM/Physics/src/%,%,$(wildcard $(foreach dir,src/DQM/Physics/src ,$(foreach ext,$(SRC_FILES_SUFFIXES),$(dir)/*.$(ext)))))
DQMPhysics_BuildFile    := $(WORKINGDIR)/cache/bf/src/DQM/Physics/BuildFile
DQMPhysics_LOC_USE := self  DQMServices/Core FWCore/Framework DataFormats/MuonReco DataFormats/EgammaCandidates DataFormats/EgammaReco DataFormats/BTauReco DataFormats/TauReco DataFormats/JetReco DataFormats/METReco DataFormats/VertexReco DataFormats/TrackerRecHit2D DataFormats/HeavyIonEvent HLTrigger/HLTcore Geometry/Records Geometry/TrackerGeometryBuilder JetMETCorrections/Objects RecoEcal/EgammaCoreTools DataFormats/EcalRecHit CondFormats/DataRecord CondFormats/EcalObjects RecoJets/JetProducers RecoJets/JetAlgorithms
DQMPhysics_PRE_INIT_FUNC += $$(eval $$(call edmPlugin,DQMPhysics,DQMPhysics,$(SCRAMSTORENAME_LIB),src/DQM/Physics/src))
DQMPhysics_PACKAGE := self/src/DQM/Physics/src
ALL_PRODS += DQMPhysics
DQMPhysics_CLASS := LIBRARY
DQM/Physics_forbigobj+=DQMPhysics
DQMPhysics_INIT_FUNC        += $$(eval $$(call Library,DQMPhysics,src/DQM/Physics/src,src_DQM_Physics_src,$(SCRAMSTORENAME_BIN),,$(SCRAMSTORENAME_LIB),$(SCRAMSTORENAME_LOGS)))
endif
