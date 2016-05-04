ifeq ($(strip $(CondCore/Utilities)),)
ALL_COMMONRULES += src_CondCore_Utilities_src
src_CondCore_Utilities_src_parent := CondCore/Utilities
src_CondCore_Utilities_src_INIT_FUNC := $$(eval $$(call CommonProductRules,src_CondCore_Utilities_src,src/CondCore/Utilities/src,LIBRARY))
CondCoreUtilities := self/CondCore/Utilities
CondCore/Utilities := CondCoreUtilities
CondCoreUtilities_files := $(patsubst src/CondCore/Utilities/src/%,%,$(wildcard $(foreach dir,src/CondCore/Utilities/src ,$(foreach ext,$(SRC_FILES_SUFFIXES),$(dir)/*.$(ext)))))
CondCoreUtilities_BuildFile    := $(WORKINGDIR)/cache/bf/src/CondCore/Utilities/BuildFile
CondCoreUtilities_LOC_FLAGS_CXXFLAGS   := -Wno-sign-compare -Wno-unused-variable -Os
CondCoreUtilities_LOC_USE := self  FWCore/Utilities FWCore/PluginManager FWCore/MessageLogger FWCore/Framework FWCore/Concurrency boost boost_program_options CondCore/CondDB CondFormats/HLTObjects CondFormats/Alignment CondFormats/BeamSpotObjects CondFormats/CastorObjects CondFormats/HIObjects CondFormats/CSCObjects CondFormats/DTObjects CondFormats/ESObjects CondFormats/EcalObjects CondFormats/EgammaObjects CondFormats/Luminosity CondFormats/HcalObjects CondFormats/JetMETObjects CondFormats/L1TObjects CondFormats/PhysicsToolsObjects CondFormats/GeometryObjects CondFormats/RecoMuonObjects CondFormats/RPCObjects CondFormats/RunInfo CondFormats/SiPixelObjects CondFormats/SiStripObjects CondFormats/Common CondFormats/BTauObjects CondFormats/MFObjects
CondCoreUtilities_LCGDICTS  := x 
CondCoreUtilities_PRE_INIT_FUNC += $$(eval $$(call LCGDict,CondCoreUtilities,src/CondCore/Utilities/src/classes.h,src/CondCore/Utilities/src/classes_def.xml,$(SCRAMSTORENAME_LIB),$(GENREFLEX_ARGS) --fail_on_warnings,))
CondCoreUtilities_EX_LIB   := CondCoreUtilities
CondCoreUtilities_EX_USE   := $(foreach d,$(CondCoreUtilities_LOC_USE),$(if $($(d)_EX_FLAGS_NO_RECURSIVE_EXPORT),,$d))
CondCoreUtilities_PACKAGE := self/src/CondCore/Utilities/src
ALL_PRODS += CondCoreUtilities
CondCoreUtilities_CLASS := LIBRARY
CondCore/Utilities_forbigobj+=CondCoreUtilities
CondCoreUtilities_INIT_FUNC        += $$(eval $$(call Library,CondCoreUtilities,src/CondCore/Utilities/src,src_CondCore_Utilities_src,$(SCRAMSTORENAME_BIN),,$(SCRAMSTORENAME_LIB),$(SCRAMSTORENAME_LOGS)))
endif
