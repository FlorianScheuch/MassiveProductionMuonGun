ifeq ($(strip $(RecoTracker/DeDx)),)
ALL_COMMONRULES += src_RecoTracker_DeDx_src
src_RecoTracker_DeDx_src_parent := RecoTracker/DeDx
src_RecoTracker_DeDx_src_INIT_FUNC := $$(eval $$(call CommonProductRules,src_RecoTracker_DeDx_src,src/RecoTracker/DeDx/src,LIBRARY))
RecoTrackerDeDx := self/RecoTracker/DeDx
RecoTracker/DeDx := RecoTrackerDeDx
RecoTrackerDeDx_files := $(patsubst src/RecoTracker/DeDx/src/%,%,$(wildcard $(foreach dir,src/RecoTracker/DeDx/src ,$(foreach ext,$(SRC_FILES_SUFFIXES),$(dir)/*.$(ext)))))
RecoTrackerDeDx_BuildFile    := $(WORKINGDIR)/cache/bf/src/RecoTracker/DeDx/BuildFile
RecoTrackerDeDx_LOC_USE := self  FWCore/Framework FWCore/PluginManager FWCore/ParameterSet FWCore/ServiceRegistry DataFormats/TrackReco DataFormats/DetId DataFormats/TrackerRecHit2D Geometry/Records Geometry/TrackerGeometryBuilder CondCore/DBOutputService CondFormats/PhysicsToolsObjects CondFormats/DataRecord TrackingTools/TrajectoryState PhysicsTools/UtilAlgos HLTrigger/HLTcore rootcore root clhep
RecoTrackerDeDx_EX_LIB   := RecoTrackerDeDx
RecoTrackerDeDx_EX_USE   := $(foreach d,$(RecoTrackerDeDx_LOC_USE),$(if $($(d)_EX_FLAGS_NO_RECURSIVE_EXPORT),,$d))
RecoTrackerDeDx_PACKAGE := self/src/RecoTracker/DeDx/src
ALL_PRODS += RecoTrackerDeDx
RecoTrackerDeDx_CLASS := LIBRARY
RecoTracker/DeDx_forbigobj+=RecoTrackerDeDx
RecoTrackerDeDx_INIT_FUNC        += $$(eval $$(call Library,RecoTrackerDeDx,src/RecoTracker/DeDx/src,src_RecoTracker_DeDx_src,$(SCRAMSTORENAME_BIN),,$(SCRAMSTORENAME_LIB),$(SCRAMSTORENAME_LOGS)))
endif
