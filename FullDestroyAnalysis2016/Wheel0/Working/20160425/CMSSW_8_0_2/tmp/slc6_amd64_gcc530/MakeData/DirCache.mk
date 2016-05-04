ALL_COMMONRULES += src_HLTriggerOffline_Higgs_test
src_HLTriggerOffline_Higgs_test_parent := HLTriggerOffline/Higgs
src_HLTriggerOffline_Higgs_test_INIT_FUNC += $$(eval $$(call CommonProductRules,src_HLTriggerOffline_Higgs_test,src/HLTriggerOffline/Higgs/test,TEST))
ALL_COMMONRULES += src_L1Trigger_L1TMuonEndCap_test
src_L1Trigger_L1TMuonEndCap_test_parent := L1Trigger/L1TMuonEndCap
src_L1Trigger_L1TMuonEndCap_test_INIT_FUNC += $$(eval $$(call CommonProductRules,src_L1Trigger_L1TMuonEndCap_test,src/L1Trigger/L1TMuonEndCap/test,TEST))
ifeq ($(strip $(PyCaloOnlineToolsEcalTools)),)
PyCaloOnlineToolsEcalTools := self/src/CaloOnlineTools/EcalTools/python
src_CaloOnlineTools_EcalTools_python_parent := 
ALL_PYTHON_DIRS += $(patsubst src/%,%,src/CaloOnlineTools/EcalTools/python)
PyCaloOnlineToolsEcalTools_files := $(patsubst src/CaloOnlineTools/EcalTools/python/%,%,$(wildcard $(foreach dir,src/CaloOnlineTools/EcalTools/python ,$(foreach ext,$(SRC_FILES_SUFFIXES),$(dir)/*.$(ext)))))
PyCaloOnlineToolsEcalTools_LOC_USE := self  
PyCaloOnlineToolsEcalTools_PACKAGE := self/src/CaloOnlineTools/EcalTools/python
ALL_PRODS += PyCaloOnlineToolsEcalTools
PyCaloOnlineToolsEcalTools_INIT_FUNC        += $$(eval $$(call PythonProduct,PyCaloOnlineToolsEcalTools,src/CaloOnlineTools/EcalTools/python,src_CaloOnlineTools_EcalTools_python,1,1,$(SCRAMSTORENAME_PYTHON),$(SCRAMSTORENAME_LIB),,))
else
$(eval $(call MultipleWarningMsg,PyCaloOnlineToolsEcalTools,src/CaloOnlineTools/EcalTools/python))
endif
ALL_COMMONRULES += src_CaloOnlineTools_EcalTools_python
src_CaloOnlineTools_EcalTools_python_INIT_FUNC += $$(eval $$(call CommonProductRules,src_CaloOnlineTools_EcalTools_python,src/CaloOnlineTools/EcalTools/python,PYTHON))
ALL_PACKAGES += HLTrigger/JetMET
subdirs_src_HLTrigger_JetMET := src_HLTrigger_JetMET_python src_HLTrigger_JetMET_src src_HLTrigger_JetMET_plugins
ALL_SUBSYSTEMS+=DPGAnalysis
subdirs_src_DPGAnalysis = src_DPGAnalysis_Skims
ALL_COMMONRULES += src_L1Trigger_L1TGlobal_test
src_L1Trigger_L1TGlobal_test_parent := L1Trigger/L1TGlobal
src_L1Trigger_L1TGlobal_test_INIT_FUNC += $$(eval $$(call CommonProductRules,src_L1Trigger_L1TGlobal_test,src/L1Trigger/L1TGlobal/test,TEST))
ALL_PACKAGES += CaloOnlineTools/EcalTools
subdirs_src_CaloOnlineTools_EcalTools := src_CaloOnlineTools_EcalTools_scripts src_CaloOnlineTools_EcalTools_python src_CaloOnlineTools_EcalTools_src src_CaloOnlineTools_EcalTools_plugins src_CaloOnlineTools_EcalTools_interface src_CaloOnlineTools_EcalTools_doc src_CaloOnlineTools_EcalTools_bin
ALL_SUBSYSTEMS+=HLTriggerOffline
subdirs_src_HLTriggerOffline = src_HLTriggerOffline_SUSYBSM src_HLTriggerOffline_HeavyFlavor src_HLTriggerOffline_Higgs src_HLTriggerOffline_Egamma src_HLTriggerOffline_Muon src_HLTriggerOffline_JetMET
ALL_PACKAGES += MuonAnalysis/MuonAssociators
subdirs_src_MuonAnalysis_MuonAssociators := src_MuonAnalysis_MuonAssociators_python src_MuonAnalysis_MuonAssociators_src src_MuonAnalysis_MuonAssociators_test src_MuonAnalysis_MuonAssociators_plugins src_MuonAnalysis_MuonAssociators_interface
ALL_COMMONRULES += src_ElectroWeakAnalysis_WENu_test
src_ElectroWeakAnalysis_WENu_test_parent := ElectroWeakAnalysis/WENu
src_ElectroWeakAnalysis_WENu_test_INIT_FUNC += $$(eval $$(call CommonProductRules,src_ElectroWeakAnalysis_WENu_test,src/ElectroWeakAnalysis/WENu/test,TEST))
ifeq ($(strip $(PyL1TriggerL1TNtuples)),)
PyL1TriggerL1TNtuples := self/src/L1Trigger/L1TNtuples/python
src_L1Trigger_L1TNtuples_python_parent := 
ALL_PYTHON_DIRS += $(patsubst src/%,%,src/L1Trigger/L1TNtuples/python)
PyL1TriggerL1TNtuples_files := $(patsubst src/L1Trigger/L1TNtuples/python/%,%,$(wildcard $(foreach dir,src/L1Trigger/L1TNtuples/python ,$(foreach ext,$(SRC_FILES_SUFFIXES),$(dir)/*.$(ext)))))
PyL1TriggerL1TNtuples_LOC_USE := self  
PyL1TriggerL1TNtuples_PACKAGE := self/src/L1Trigger/L1TNtuples/python
ALL_PRODS += PyL1TriggerL1TNtuples
PyL1TriggerL1TNtuples_INIT_FUNC        += $$(eval $$(call PythonProduct,PyL1TriggerL1TNtuples,src/L1Trigger/L1TNtuples/python,src_L1Trigger_L1TNtuples_python,1,1,$(SCRAMSTORENAME_PYTHON),$(SCRAMSTORENAME_LIB),,))
else
$(eval $(call MultipleWarningMsg,PyL1TriggerL1TNtuples,src/L1Trigger/L1TNtuples/python))
endif
ALL_COMMONRULES += src_L1Trigger_L1TNtuples_python
src_L1Trigger_L1TNtuples_python_INIT_FUNC += $$(eval $$(call CommonProductRules,src_L1Trigger_L1TNtuples_python,src/L1Trigger/L1TNtuples/python,PYTHON))
ALL_COMMONRULES += src_HLTriggerOffline_Egamma_test
src_HLTriggerOffline_Egamma_test_parent := HLTriggerOffline/Egamma
src_HLTriggerOffline_Egamma_test_INIT_FUNC += $$(eval $$(call CommonProductRules,src_HLTriggerOffline_Egamma_test,src/HLTriggerOffline/Egamma/test,TEST))
ALL_PACKAGES += RecoTauTag/HLTProducers
subdirs_src_RecoTauTag_HLTProducers := src_RecoTauTag_HLTProducers_python src_RecoTauTag_HLTProducers_src src_RecoTauTag_HLTProducers_interface
ALL_PACKAGES += L1Trigger/L1TCaloLayer1
subdirs_src_L1Trigger_L1TCaloLayer1 := src_L1Trigger_L1TCaloLayer1_python src_L1Trigger_L1TCaloLayer1_src src_L1Trigger_L1TCaloLayer1_test src_L1Trigger_L1TCaloLayer1_plugins
ALL_PACKAGES += L1Trigger/HardwareValidation
subdirs_src_L1Trigger_HardwareValidation := src_L1Trigger_HardwareValidation_python src_L1Trigger_HardwareValidation_src src_L1Trigger_HardwareValidation_test src_L1Trigger_HardwareValidation_plugins src_L1Trigger_HardwareValidation_hwtest
ALL_SUBSYSTEMS+=DataFormats
subdirs_src_DataFormats = src_DataFormats_L1TGlobal src_DataFormats_L1TMuon src_DataFormats_L1Trigger src_DataFormats_L1TCalorimeter src_DataFormats_HLTReco
ifeq ($(strip $(PyElectroWeakAnalysisZMuMu)),)
PyElectroWeakAnalysisZMuMu := self/src/ElectroWeakAnalysis/ZMuMu/python
src_ElectroWeakAnalysis_ZMuMu_python_parent := 
ALL_PYTHON_DIRS += $(patsubst src/%,%,src/ElectroWeakAnalysis/ZMuMu/python)
PyElectroWeakAnalysisZMuMu_files := $(patsubst src/ElectroWeakAnalysis/ZMuMu/python/%,%,$(wildcard $(foreach dir,src/ElectroWeakAnalysis/ZMuMu/python ,$(foreach ext,$(SRC_FILES_SUFFIXES),$(dir)/*.$(ext)))))
PyElectroWeakAnalysisZMuMu_LOC_USE := self  
PyElectroWeakAnalysisZMuMu_PACKAGE := self/src/ElectroWeakAnalysis/ZMuMu/python
ALL_PRODS += PyElectroWeakAnalysisZMuMu
PyElectroWeakAnalysisZMuMu_INIT_FUNC        += $$(eval $$(call PythonProduct,PyElectroWeakAnalysisZMuMu,src/ElectroWeakAnalysis/ZMuMu/python,src_ElectroWeakAnalysis_ZMuMu_python,1,1,$(SCRAMSTORENAME_PYTHON),$(SCRAMSTORENAME_LIB),,))
else
$(eval $(call MultipleWarningMsg,PyElectroWeakAnalysisZMuMu,src/ElectroWeakAnalysis/ZMuMu/python))
endif
ALL_COMMONRULES += src_ElectroWeakAnalysis_ZMuMu_python
src_ElectroWeakAnalysis_ZMuMu_python_INIT_FUNC += $$(eval $$(call CommonProductRules,src_ElectroWeakAnalysis_ZMuMu_python,src/ElectroWeakAnalysis/ZMuMu/python,PYTHON))
ALL_COMMONRULES += src_HLTriggerOffline_JetMET_test
src_HLTriggerOffline_JetMET_test_parent := HLTriggerOffline/JetMET
src_HLTriggerOffline_JetMET_test_INIT_FUNC += $$(eval $$(call CommonProductRules,src_HLTriggerOffline_JetMET_test,src/HLTriggerOffline/JetMET/test,TEST))
ifeq ($(strip $(PyHLTriggerspecial)),)
PyHLTriggerspecial := self/src/HLTrigger/special/python
src_HLTrigger_special_python_parent := 
ALL_PYTHON_DIRS += $(patsubst src/%,%,src/HLTrigger/special/python)
PyHLTriggerspecial_files := $(patsubst src/HLTrigger/special/python/%,%,$(wildcard $(foreach dir,src/HLTrigger/special/python ,$(foreach ext,$(SRC_FILES_SUFFIXES),$(dir)/*.$(ext)))))
PyHLTriggerspecial_LOC_USE := self  
PyHLTriggerspecial_PACKAGE := self/src/HLTrigger/special/python
ALL_PRODS += PyHLTriggerspecial
PyHLTriggerspecial_INIT_FUNC        += $$(eval $$(call PythonProduct,PyHLTriggerspecial,src/HLTrigger/special/python,src_HLTrigger_special_python,1,1,$(SCRAMSTORENAME_PYTHON),$(SCRAMSTORENAME_LIB),,))
else
$(eval $(call MultipleWarningMsg,PyHLTriggerspecial,src/HLTrigger/special/python))
endif
ALL_COMMONRULES += src_HLTrigger_special_python
src_HLTrigger_special_python_INIT_FUNC += $$(eval $$(call CommonProductRules,src_HLTrigger_special_python,src/HLTrigger/special/python,PYTHON))
ALL_PACKAGES += HLTrigger/special
subdirs_src_HLTrigger_special := src_HLTrigger_special_python src_HLTrigger_special_src src_HLTrigger_special_test src_HLTrigger_special_interface
ALL_PACKAGES += HLTrigger/JSONMonitoring
subdirs_src_HLTrigger_JSONMonitoring := src_HLTrigger_JSONMonitoring_test src_HLTrigger_JSONMonitoring_plugins src_HLTrigger_JSONMonitoring_interface
ALL_SUBSYSTEMS+=HLTrigger
subdirs_src_HLTrigger = src_HLTrigger_special src_HLTrigger_HLTanalyzers src_HLTrigger_JSONMonitoring src_HLTrigger_Egamma src_HLTrigger_Muon src_HLTrigger_JetMET src_HLTrigger_HLTcore src_HLTrigger_btau src_HLTrigger_HLTfilters
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
ALL_COMMONRULES += src_HLTrigger_HLTcore_test
src_HLTrigger_HLTcore_test_parent := HLTrigger/HLTcore
src_HLTrigger_HLTcore_test_INIT_FUNC += $$(eval $$(call CommonProductRules,src_HLTrigger_HLTcore_test,src/HLTrigger/HLTcore/test,TEST))
ALL_PACKAGES += ElectroWeakAnalysis/ZMuMu
subdirs_src_ElectroWeakAnalysis_ZMuMu := src_ElectroWeakAnalysis_ZMuMu_python src_ElectroWeakAnalysis_ZMuMu_src src_ElectroWeakAnalysis_ZMuMu_test src_ElectroWeakAnalysis_ZMuMu_plugins src_ElectroWeakAnalysis_ZMuMu_bin
ifeq ($(strip $(PyHLTriggerOfflineHeavyFlavor)),)
PyHLTriggerOfflineHeavyFlavor := self/src/HLTriggerOffline/HeavyFlavor/python
src_HLTriggerOffline_HeavyFlavor_python_parent := 
ALL_PYTHON_DIRS += $(patsubst src/%,%,src/HLTriggerOffline/HeavyFlavor/python)
PyHLTriggerOfflineHeavyFlavor_files := $(patsubst src/HLTriggerOffline/HeavyFlavor/python/%,%,$(wildcard $(foreach dir,src/HLTriggerOffline/HeavyFlavor/python ,$(foreach ext,$(SRC_FILES_SUFFIXES),$(dir)/*.$(ext)))))
PyHLTriggerOfflineHeavyFlavor_LOC_USE := self  
PyHLTriggerOfflineHeavyFlavor_PACKAGE := self/src/HLTriggerOffline/HeavyFlavor/python
ALL_PRODS += PyHLTriggerOfflineHeavyFlavor
PyHLTriggerOfflineHeavyFlavor_INIT_FUNC        += $$(eval $$(call PythonProduct,PyHLTriggerOfflineHeavyFlavor,src/HLTriggerOffline/HeavyFlavor/python,src_HLTriggerOffline_HeavyFlavor_python,1,1,$(SCRAMSTORENAME_PYTHON),$(SCRAMSTORENAME_LIB),,))
else
$(eval $(call MultipleWarningMsg,PyHLTriggerOfflineHeavyFlavor,src/HLTriggerOffline/HeavyFlavor/python))
endif
ALL_COMMONRULES += src_HLTriggerOffline_HeavyFlavor_python
src_HLTriggerOffline_HeavyFlavor_python_INIT_FUNC += $$(eval $$(call CommonProductRules,src_HLTriggerOffline_HeavyFlavor_python,src/HLTriggerOffline/HeavyFlavor/python,PYTHON))
ifeq ($(strip $(testHLTriggerspecial)),)
testHLTriggerspecial := self/src/HLTrigger/special/test
testHLTriggerspecial_files := $(patsubst src/HLTrigger/special/test/%,%,$(foreach file,*.cc,$(eval xfile:=$(wildcard src/HLTrigger/special/test/$(file)))$(if $(xfile),$(xfile),$(warning No such file exists: src/HLTrigger/special/test/$(file). Please fix src/HLTrigger/special/test/BuildFile.))))
testHLTriggerspecial_BuildFile    := $(WORKINGDIR)/cache/bf/src/HLTrigger/special/test/BuildFile
testHLTriggerspecial_LOC_USE := self  FWCore/Framework FWCore/MessageLogger FWCore/ParameterSet
testHLTriggerspecial_PRE_INIT_FUNC += $$(eval $$(call edmPlugin,testHLTriggerspecial,testHLTriggerspecial,$(SCRAMSTORENAME_LIB),src/HLTrigger/special/test))
testHLTriggerspecial_PACKAGE := self/src/HLTrigger/special/test
ALL_PRODS += testHLTriggerspecial
testHLTriggerspecial_INIT_FUNC        += $$(eval $$(call Library,testHLTriggerspecial,src/HLTrigger/special/test,src_HLTrigger_special_test,$(SCRAMSTORENAME_BIN),,$(SCRAMSTORENAME_LIB),$(SCRAMSTORENAME_LOGS)))
testHLTriggerspecial_CLASS := TEST_LIBRARY
else
$(eval $(call MultipleWarningMsg,testHLTriggerspecial,src/HLTrigger/special/test))
endif
ALL_COMMONRULES += src_HLTrigger_special_test
src_HLTrigger_special_test_parent := HLTrigger/special
src_HLTrigger_special_test_INIT_FUNC += $$(eval $$(call CommonProductRules,src_HLTrigger_special_test,src/HLTrigger/special/test,TEST))
ifeq ($(strip $(PyQCDAnalysisUEAnalysis)),)
PyQCDAnalysisUEAnalysis := self/src/QCDAnalysis/UEAnalysis/python
src_QCDAnalysis_UEAnalysis_python_parent := 
ALL_PYTHON_DIRS += $(patsubst src/%,%,src/QCDAnalysis/UEAnalysis/python)
PyQCDAnalysisUEAnalysis_files := $(patsubst src/QCDAnalysis/UEAnalysis/python/%,%,$(wildcard $(foreach dir,src/QCDAnalysis/UEAnalysis/python ,$(foreach ext,$(SRC_FILES_SUFFIXES),$(dir)/*.$(ext)))))
PyQCDAnalysisUEAnalysis_LOC_USE := self  
PyQCDAnalysisUEAnalysis_PACKAGE := self/src/QCDAnalysis/UEAnalysis/python
ALL_PRODS += PyQCDAnalysisUEAnalysis
PyQCDAnalysisUEAnalysis_INIT_FUNC        += $$(eval $$(call PythonProduct,PyQCDAnalysisUEAnalysis,src/QCDAnalysis/UEAnalysis/python,src_QCDAnalysis_UEAnalysis_python,1,1,$(SCRAMSTORENAME_PYTHON),$(SCRAMSTORENAME_LIB),,))
else
$(eval $(call MultipleWarningMsg,PyQCDAnalysisUEAnalysis,src/QCDAnalysis/UEAnalysis/python))
endif
ALL_COMMONRULES += src_QCDAnalysis_UEAnalysis_python
src_QCDAnalysis_UEAnalysis_python_INIT_FUNC += $$(eval $$(call CommonProductRules,src_QCDAnalysis_UEAnalysis_python,src/QCDAnalysis/UEAnalysis/python,PYTHON))
src_CaloOnlineTools_EcalTools_scripts_files := $(filter-out \#% %\#,$(notdir $(wildcard $(foreach dir,$(LOCALTOP)/src/CaloOnlineTools/EcalTools/scripts,$(dir)/*))))
$(eval $(call Src2StoreCopy,src_CaloOnlineTools_EcalTools_scripts,src/CaloOnlineTools/EcalTools/scripts,$(SCRAMSTORENAME_BIN),*))
ifeq ($(strip $(errorMatrix)),)
errorMatrix_files := $(patsubst src/ElectroWeakAnalysis/ZMuMu/test/%,%,$(foreach file,errorMatrix.cpp,$(eval xfile:=$(wildcard src/ElectroWeakAnalysis/ZMuMu/test/$(file)))$(if $(xfile),$(xfile),$(warning No such file exists: src/ElectroWeakAnalysis/ZMuMu/test/$(file). Please fix src/ElectroWeakAnalysis/ZMuMu/test/BuildFile.))))
errorMatrix := self/src/ElectroWeakAnalysis/ZMuMu/test
errorMatrix_TEST_RUNNER_CMD := echo
errorMatrix_NO_TESTRUN := yes
errorMatrix_BuildFile    := $(WORKINGDIR)/cache/bf/src/ElectroWeakAnalysis/ZMuMu/test/BuildFile
errorMatrix_LOC_USE := self  
errorMatrix_PACKAGE := self/src/ElectroWeakAnalysis/ZMuMu/test
ALL_PRODS += errorMatrix
errorMatrix_INIT_FUNC        += $$(eval $$(call Binary,errorMatrix,src/ElectroWeakAnalysis/ZMuMu/test,src_ElectroWeakAnalysis_ZMuMu_test,$(SCRAMSTORENAME_BIN),,$(SCRAMSTORENAME_TEST),test,$(SCRAMSTORENAME_LOGS)))
errorMatrix_CLASS := TEST
else
$(eval $(call MultipleWarningMsg,errorMatrix,src/ElectroWeakAnalysis/ZMuMu/test))
endif
ALL_COMMONRULES += src_ElectroWeakAnalysis_ZMuMu_test
src_ElectroWeakAnalysis_ZMuMu_test_parent := ElectroWeakAnalysis/ZMuMu
src_ElectroWeakAnalysis_ZMuMu_test_INIT_FUNC += $$(eval $$(call CommonProductRules,src_ElectroWeakAnalysis_ZMuMu_test,src/ElectroWeakAnalysis/ZMuMu/test,TEST))
ifeq ($(strip $(PyCalibrationHcalIsolatedTrackReco)),)
PyCalibrationHcalIsolatedTrackReco := self/src/Calibration/HcalIsolatedTrackReco/python
src_Calibration_HcalIsolatedTrackReco_python_parent := 
ALL_PYTHON_DIRS += $(patsubst src/%,%,src/Calibration/HcalIsolatedTrackReco/python)
PyCalibrationHcalIsolatedTrackReco_files := $(patsubst src/Calibration/HcalIsolatedTrackReco/python/%,%,$(wildcard $(foreach dir,src/Calibration/HcalIsolatedTrackReco/python ,$(foreach ext,$(SRC_FILES_SUFFIXES),$(dir)/*.$(ext)))))
PyCalibrationHcalIsolatedTrackReco_LOC_USE := self  
PyCalibrationHcalIsolatedTrackReco_PACKAGE := self/src/Calibration/HcalIsolatedTrackReco/python
ALL_PRODS += PyCalibrationHcalIsolatedTrackReco
PyCalibrationHcalIsolatedTrackReco_INIT_FUNC        += $$(eval $$(call PythonProduct,PyCalibrationHcalIsolatedTrackReco,src/Calibration/HcalIsolatedTrackReco/python,src_Calibration_HcalIsolatedTrackReco_python,1,1,$(SCRAMSTORENAME_PYTHON),$(SCRAMSTORENAME_LIB),,))
else
$(eval $(call MultipleWarningMsg,PyCalibrationHcalIsolatedTrackReco,src/Calibration/HcalIsolatedTrackReco/python))
endif
ALL_COMMONRULES += src_Calibration_HcalIsolatedTrackReco_python
src_Calibration_HcalIsolatedTrackReco_python_INIT_FUNC += $$(eval $$(call CommonProductRules,src_Calibration_HcalIsolatedTrackReco_python,src/Calibration/HcalIsolatedTrackReco/python,PYTHON))
ALL_PACKAGES += Calibration/EcalAlCaRecoProducers
subdirs_src_Calibration_EcalAlCaRecoProducers := src_Calibration_EcalAlCaRecoProducers_python src_Calibration_EcalAlCaRecoProducers_src src_Calibration_EcalAlCaRecoProducers_test src_Calibration_EcalAlCaRecoProducers_plugins
ALL_SUBSYSTEMS+=QCDAnalysis
subdirs_src_QCDAnalysis = src_QCDAnalysis_UEAnalysis
ALL_PACKAGES += CondCore/L1TPlugins
subdirs_src_CondCore_L1TPlugins := src_CondCore_L1TPlugins_src
ALL_PACKAGES += HLTriggerOffline/SUSYBSM
subdirs_src_HLTriggerOffline_SUSYBSM := src_HLTriggerOffline_SUSYBSM_python src_HLTriggerOffline_SUSYBSM_src src_HLTriggerOffline_SUSYBSM_test src_HLTriggerOffline_SUSYBSM_interface src_HLTriggerOffline_SUSYBSM_data
ALL_SUBSYSTEMS+=CondFormats
subdirs_src_CondFormats = src_CondFormats_L1TObjects
ALL_COMMONRULES += src_Calibration_IsolatedParticles_test
src_Calibration_IsolatedParticles_test_parent := Calibration/IsolatedParticles
src_Calibration_IsolatedParticles_test_INIT_FUNC += $$(eval $$(call CommonProductRules,src_Calibration_IsolatedParticles_test,src/Calibration/IsolatedParticles/test,TEST))
ifeq ($(strip $(PyHLTriggerOfflineEgamma)),)
PyHLTriggerOfflineEgamma := self/src/HLTriggerOffline/Egamma/python
src_HLTriggerOffline_Egamma_python_parent := 
ALL_PYTHON_DIRS += $(patsubst src/%,%,src/HLTriggerOffline/Egamma/python)
PyHLTriggerOfflineEgamma_files := $(patsubst src/HLTriggerOffline/Egamma/python/%,%,$(wildcard $(foreach dir,src/HLTriggerOffline/Egamma/python ,$(foreach ext,$(SRC_FILES_SUFFIXES),$(dir)/*.$(ext)))))
PyHLTriggerOfflineEgamma_LOC_USE := self  
PyHLTriggerOfflineEgamma_PACKAGE := self/src/HLTriggerOffline/Egamma/python
ALL_PRODS += PyHLTriggerOfflineEgamma
PyHLTriggerOfflineEgamma_INIT_FUNC        += $$(eval $$(call PythonProduct,PyHLTriggerOfflineEgamma,src/HLTriggerOffline/Egamma/python,src_HLTriggerOffline_Egamma_python,1,1,$(SCRAMSTORENAME_PYTHON),$(SCRAMSTORENAME_LIB),,))
else
$(eval $(call MultipleWarningMsg,PyHLTriggerOfflineEgamma,src/HLTriggerOffline/Egamma/python))
endif
ALL_COMMONRULES += src_HLTriggerOffline_Egamma_python
src_HLTriggerOffline_Egamma_python_INIT_FUNC += $$(eval $$(call CommonProductRules,src_HLTriggerOffline_Egamma_python,src/HLTriggerOffline/Egamma/python,PYTHON))
ifeq ($(strip $(PyRecoTauTagHLTProducers)),)
PyRecoTauTagHLTProducers := self/src/RecoTauTag/HLTProducers/python
src_RecoTauTag_HLTProducers_python_parent := 
ALL_PYTHON_DIRS += $(patsubst src/%,%,src/RecoTauTag/HLTProducers/python)
PyRecoTauTagHLTProducers_files := $(patsubst src/RecoTauTag/HLTProducers/python/%,%,$(wildcard $(foreach dir,src/RecoTauTag/HLTProducers/python ,$(foreach ext,$(SRC_FILES_SUFFIXES),$(dir)/*.$(ext)))))
PyRecoTauTagHLTProducers_LOC_USE := self  
PyRecoTauTagHLTProducers_PACKAGE := self/src/RecoTauTag/HLTProducers/python
ALL_PRODS += PyRecoTauTagHLTProducers
PyRecoTauTagHLTProducers_INIT_FUNC        += $$(eval $$(call PythonProduct,PyRecoTauTagHLTProducers,src/RecoTauTag/HLTProducers/python,src_RecoTauTag_HLTProducers_python,1,1,$(SCRAMSTORENAME_PYTHON),$(SCRAMSTORENAME_LIB),,))
else
$(eval $(call MultipleWarningMsg,PyRecoTauTagHLTProducers,src/RecoTauTag/HLTProducers/python))
endif
ALL_COMMONRULES += src_RecoTauTag_HLTProducers_python
src_RecoTauTag_HLTProducers_python_INIT_FUNC += $$(eval $$(call CommonProductRules,src_RecoTauTag_HLTProducers_python,src/RecoTauTag/HLTProducers/python,PYTHON))
ALL_COMMONRULES += src_Calibration_EcalAlCaRecoProducers_test
src_Calibration_EcalAlCaRecoProducers_test_parent := Calibration/EcalAlCaRecoProducers
src_Calibration_EcalAlCaRecoProducers_test_INIT_FUNC += $$(eval $$(call CommonProductRules,src_Calibration_EcalAlCaRecoProducers_test,src/Calibration/EcalAlCaRecoProducers/test,TEST))
ALL_PACKAGES += HLTrigger/Muon
subdirs_src_HLTrigger_Muon := src_HLTrigger_Muon_python src_HLTrigger_Muon_src src_HLTrigger_Muon_test
ALL_PACKAGES += DataFormats/HLTReco
subdirs_src_DataFormats_HLTReco := src_DataFormats_HLTReco_src src_DataFormats_HLTReco_doc
ifeq ($(strip $(PyCalibrationHcalAlCaRecoProducers)),)
PyCalibrationHcalAlCaRecoProducers := self/src/Calibration/HcalAlCaRecoProducers/python
src_Calibration_HcalAlCaRecoProducers_python_parent := 
ALL_PYTHON_DIRS += $(patsubst src/%,%,src/Calibration/HcalAlCaRecoProducers/python)
PyCalibrationHcalAlCaRecoProducers_files := $(patsubst src/Calibration/HcalAlCaRecoProducers/python/%,%,$(wildcard $(foreach dir,src/Calibration/HcalAlCaRecoProducers/python ,$(foreach ext,$(SRC_FILES_SUFFIXES),$(dir)/*.$(ext)))))
PyCalibrationHcalAlCaRecoProducers_LOC_USE := self  
PyCalibrationHcalAlCaRecoProducers_PACKAGE := self/src/Calibration/HcalAlCaRecoProducers/python
ALL_PRODS += PyCalibrationHcalAlCaRecoProducers
PyCalibrationHcalAlCaRecoProducers_INIT_FUNC        += $$(eval $$(call PythonProduct,PyCalibrationHcalAlCaRecoProducers,src/Calibration/HcalAlCaRecoProducers/python,src_Calibration_HcalAlCaRecoProducers_python,1,1,$(SCRAMSTORENAME_PYTHON),$(SCRAMSTORENAME_LIB),,))
else
$(eval $(call MultipleWarningMsg,PyCalibrationHcalAlCaRecoProducers,src/Calibration/HcalAlCaRecoProducers/python))
endif
ALL_COMMONRULES += src_Calibration_HcalAlCaRecoProducers_python
src_Calibration_HcalAlCaRecoProducers_python_INIT_FUNC += $$(eval $$(call CommonProductRules,src_Calibration_HcalAlCaRecoProducers_python,src/Calibration/HcalAlCaRecoProducers/python,PYTHON))
ALL_PACKAGES += HLTriggerOffline/Muon
subdirs_src_HLTriggerOffline_Muon := src_HLTriggerOffline_Muon_python src_HLTriggerOffline_Muon_src src_HLTriggerOffline_Muon_test src_HLTriggerOffline_Muon_data
ifeq ($(strip $(PyConfigurationStandardSequences)),)
PyConfigurationStandardSequences := self/src/Configuration/StandardSequences/python
src_Configuration_StandardSequences_python_parent := 
ALL_PYTHON_DIRS += $(patsubst src/%,%,src/Configuration/StandardSequences/python)
PyConfigurationStandardSequences_files := $(patsubst src/Configuration/StandardSequences/python/%,%,$(wildcard $(foreach dir,src/Configuration/StandardSequences/python ,$(foreach ext,$(SRC_FILES_SUFFIXES),$(dir)/*.$(ext)))))
PyConfigurationStandardSequences_LOC_USE := self  
PyConfigurationStandardSequences_PACKAGE := self/src/Configuration/StandardSequences/python
ALL_PRODS += PyConfigurationStandardSequences
PyConfigurationStandardSequences_INIT_FUNC        += $$(eval $$(call PythonProduct,PyConfigurationStandardSequences,src/Configuration/StandardSequences/python,src_Configuration_StandardSequences_python,1,1,$(SCRAMSTORENAME_PYTHON),$(SCRAMSTORENAME_LIB),,))
else
$(eval $(call MultipleWarningMsg,PyConfigurationStandardSequences,src/Configuration/StandardSequences/python))
endif
ALL_COMMONRULES += src_Configuration_StandardSequences_python
src_Configuration_StandardSequences_python_INIT_FUNC += $$(eval $$(call CommonProductRules,src_Configuration_StandardSequences_python,src/Configuration/StandardSequences/python,PYTHON))
ifeq ($(strip $(PyL1TriggerL1TGlobal)),)
PyL1TriggerL1TGlobal := self/src/L1Trigger/L1TGlobal/python
src_L1Trigger_L1TGlobal_python_parent := 
ALL_PYTHON_DIRS += $(patsubst src/%,%,src/L1Trigger/L1TGlobal/python)
PyL1TriggerL1TGlobal_files := $(patsubst src/L1Trigger/L1TGlobal/python/%,%,$(wildcard $(foreach dir,src/L1Trigger/L1TGlobal/python ,$(foreach ext,$(SRC_FILES_SUFFIXES),$(dir)/*.$(ext)))))
PyL1TriggerL1TGlobal_LOC_USE := self  
PyL1TriggerL1TGlobal_PACKAGE := self/src/L1Trigger/L1TGlobal/python
ALL_PRODS += PyL1TriggerL1TGlobal
PyL1TriggerL1TGlobal_INIT_FUNC        += $$(eval $$(call PythonProduct,PyL1TriggerL1TGlobal,src/L1Trigger/L1TGlobal/python,src_L1Trigger_L1TGlobal_python,1,1,$(SCRAMSTORENAME_PYTHON),$(SCRAMSTORENAME_LIB),,))
else
$(eval $(call MultipleWarningMsg,PyL1TriggerL1TGlobal,src/L1Trigger/L1TGlobal/python))
endif
ALL_COMMONRULES += src_L1Trigger_L1TGlobal_python
src_L1Trigger_L1TGlobal_python_INIT_FUNC += $$(eval $$(call CommonProductRules,src_L1Trigger_L1TGlobal_python,src/L1Trigger/L1TGlobal/python,PYTHON))
ALL_COMMONRULES += src_HLTriggerOffline_Muon_test
src_HLTriggerOffline_Muon_test_parent := HLTriggerOffline/Muon
src_HLTriggerOffline_Muon_test_INIT_FUNC += $$(eval $$(call CommonProductRules,src_HLTriggerOffline_Muon_test,src/HLTriggerOffline/Muon/test,TEST))
ALL_PACKAGES += HLTriggerOffline/JetMET
subdirs_src_HLTriggerOffline_JetMET := src_HLTriggerOffline_JetMET_python src_HLTriggerOffline_JetMET_src src_HLTriggerOffline_JetMET_test
ALL_PACKAGES += Configuration/StandardSequences
subdirs_src_Configuration_StandardSequences := src_Configuration_StandardSequences_python
ALL_PACKAGES += HLTriggerOffline/HeavyFlavor
subdirs_src_HLTriggerOffline_HeavyFlavor := src_HLTriggerOffline_HeavyFlavor_python src_HLTriggerOffline_HeavyFlavor_src src_HLTriggerOffline_HeavyFlavor_test
ALL_SUBSYSTEMS+=Configuration
subdirs_src_Configuration = src_Configuration_StandardSequences
ifeq ($(strip $(PyL1TriggerL1TMuonBarrel)),)
PyL1TriggerL1TMuonBarrel := self/src/L1Trigger/L1TMuonBarrel/python
src_L1Trigger_L1TMuonBarrel_python_parent := 
ALL_PYTHON_DIRS += $(patsubst src/%,%,src/L1Trigger/L1TMuonBarrel/python)
PyL1TriggerL1TMuonBarrel_files := $(patsubst src/L1Trigger/L1TMuonBarrel/python/%,%,$(wildcard $(foreach dir,src/L1Trigger/L1TMuonBarrel/python ,$(foreach ext,$(SRC_FILES_SUFFIXES),$(dir)/*.$(ext)))))
PyL1TriggerL1TMuonBarrel_LOC_USE := self  
PyL1TriggerL1TMuonBarrel_PACKAGE := self/src/L1Trigger/L1TMuonBarrel/python
ALL_PRODS += PyL1TriggerL1TMuonBarrel
PyL1TriggerL1TMuonBarrel_INIT_FUNC        += $$(eval $$(call PythonProduct,PyL1TriggerL1TMuonBarrel,src/L1Trigger/L1TMuonBarrel/python,src_L1Trigger_L1TMuonBarrel_python,1,1,$(SCRAMSTORENAME_PYTHON),$(SCRAMSTORENAME_LIB),,))
else
$(eval $(call MultipleWarningMsg,PyL1TriggerL1TMuonBarrel,src/L1Trigger/L1TMuonBarrel/python))
endif
ALL_COMMONRULES += src_L1Trigger_L1TMuonBarrel_python
src_L1Trigger_L1TMuonBarrel_python_INIT_FUNC += $$(eval $$(call CommonProductRules,src_L1Trigger_L1TMuonBarrel_python,src/L1Trigger/L1TMuonBarrel/python,PYTHON))
ifeq ($(strip $(PyL1TriggerHardwareValidation)),)
PyL1TriggerHardwareValidation := self/src/L1Trigger/HardwareValidation/python
src_L1Trigger_HardwareValidation_python_parent := 
ALL_PYTHON_DIRS += $(patsubst src/%,%,src/L1Trigger/HardwareValidation/python)
PyL1TriggerHardwareValidation_files := $(patsubst src/L1Trigger/HardwareValidation/python/%,%,$(wildcard $(foreach dir,src/L1Trigger/HardwareValidation/python ,$(foreach ext,$(SRC_FILES_SUFFIXES),$(dir)/*.$(ext)))))
PyL1TriggerHardwareValidation_LOC_USE := self  
PyL1TriggerHardwareValidation_PACKAGE := self/src/L1Trigger/HardwareValidation/python
ALL_PRODS += PyL1TriggerHardwareValidation
PyL1TriggerHardwareValidation_INIT_FUNC        += $$(eval $$(call PythonProduct,PyL1TriggerHardwareValidation,src/L1Trigger/HardwareValidation/python,src_L1Trigger_HardwareValidation_python,1,1,$(SCRAMSTORENAME_PYTHON),$(SCRAMSTORENAME_LIB),,))
else
$(eval $(call MultipleWarningMsg,PyL1TriggerHardwareValidation,src/L1Trigger/HardwareValidation/python))
endif
ALL_COMMONRULES += src_L1Trigger_HardwareValidation_python
src_L1Trigger_HardwareValidation_python_INIT_FUNC += $$(eval $$(call CommonProductRules,src_L1Trigger_HardwareValidation_python,src/L1Trigger/HardwareValidation/python,PYTHON))
ifeq ($(strip $(PyHLTriggerHLTcore)),)
PyHLTriggerHLTcore := self/src/HLTrigger/HLTcore/python
src_HLTrigger_HLTcore_python_parent := 
ALL_PYTHON_DIRS += $(patsubst src/%,%,src/HLTrigger/HLTcore/python)
PyHLTriggerHLTcore_files := $(patsubst src/HLTrigger/HLTcore/python/%,%,$(wildcard $(foreach dir,src/HLTrigger/HLTcore/python ,$(foreach ext,$(SRC_FILES_SUFFIXES),$(dir)/*.$(ext)))))
PyHLTriggerHLTcore_LOC_USE := self  
PyHLTriggerHLTcore_PACKAGE := self/src/HLTrigger/HLTcore/python
ALL_PRODS += PyHLTriggerHLTcore
PyHLTriggerHLTcore_INIT_FUNC        += $$(eval $$(call PythonProduct,PyHLTriggerHLTcore,src/HLTrigger/HLTcore/python,src_HLTrigger_HLTcore_python,1,1,$(SCRAMSTORENAME_PYTHON),$(SCRAMSTORENAME_LIB),,))
else
$(eval $(call MultipleWarningMsg,PyHLTriggerHLTcore,src/HLTrigger/HLTcore/python))
endif
ALL_COMMONRULES += src_HLTrigger_HLTcore_python
src_HLTrigger_HLTcore_python_INIT_FUNC += $$(eval $$(call CommonProductRules,src_HLTrigger_HLTcore_python,src/HLTrigger/HLTcore/python,PYTHON))
ALL_PACKAGES += CondCore/Utilities
subdirs_src_CondCore_Utilities := src_CondCore_Utilities_scripts src_CondCore_Utilities_python src_CondCore_Utilities_src src_CondCore_Utilities_test src_CondCore_Utilities_plugins src_CondCore_Utilities_bin
ifeq ($(strip $(PyHLTriggerMuon)),)
PyHLTriggerMuon := self/src/HLTrigger/Muon/python
src_HLTrigger_Muon_python_parent := 
ALL_PYTHON_DIRS += $(patsubst src/%,%,src/HLTrigger/Muon/python)
PyHLTriggerMuon_files := $(patsubst src/HLTrigger/Muon/python/%,%,$(wildcard $(foreach dir,src/HLTrigger/Muon/python ,$(foreach ext,$(SRC_FILES_SUFFIXES),$(dir)/*.$(ext)))))
PyHLTriggerMuon_LOC_USE := self  
PyHLTriggerMuon_PACKAGE := self/src/HLTrigger/Muon/python
ALL_PRODS += PyHLTriggerMuon
PyHLTriggerMuon_INIT_FUNC        += $$(eval $$(call PythonProduct,PyHLTriggerMuon,src/HLTrigger/Muon/python,src_HLTrigger_Muon_python,1,1,$(SCRAMSTORENAME_PYTHON),$(SCRAMSTORENAME_LIB),,))
else
$(eval $(call MultipleWarningMsg,PyHLTriggerMuon,src/HLTrigger/Muon/python))
endif
ALL_COMMONRULES += src_HLTrigger_Muon_python
src_HLTrigger_Muon_python_INIT_FUNC += $$(eval $$(call CommonProductRules,src_HLTrigger_Muon_python,src/HLTrigger/Muon/python,PYTHON))
src_L1Trigger_L1TCommon_scripts_files := $(filter-out \#% %\#,$(notdir $(wildcard $(foreach dir,$(LOCALTOP)/src/L1Trigger/L1TCommon/scripts,$(dir)/*))))
$(eval $(call Src2StoreCopy,src_L1Trigger_L1TCommon_scripts,src/L1Trigger/L1TCommon/scripts,$(SCRAMSTORENAME_BIN),*))
ALL_COMMONRULES += src_EventFilter_L1TRawToDigi_test
src_EventFilter_L1TRawToDigi_test_parent := EventFilter/L1TRawToDigi
src_EventFilter_L1TRawToDigi_test_INIT_FUNC += $$(eval $$(call CommonProductRules,src_EventFilter_L1TRawToDigi_test,src/EventFilter/L1TRawToDigi/test,TEST))
ifeq ($(strip $(PyCondCoreUtilities)),)
PyCondCoreUtilities := self/src/CondCore/Utilities/python
src_CondCore_Utilities_python_parent := 
ALL_PYTHON_DIRS += $(patsubst src/%,%,src/CondCore/Utilities/python)
PyCondCoreUtilities_files := $(patsubst src/CondCore/Utilities/python/%,%,$(wildcard $(foreach dir,src/CondCore/Utilities/python ,$(foreach ext,$(SRC_FILES_SUFFIXES),$(dir)/*.$(ext)))))
PyCondCoreUtilities_LOC_USE := self  
PyCondCoreUtilities_PACKAGE := self/src/CondCore/Utilities/python
ALL_PRODS += PyCondCoreUtilities
PyCondCoreUtilities_INIT_FUNC        += $$(eval $$(call PythonProduct,PyCondCoreUtilities,src/CondCore/Utilities/python,src_CondCore_Utilities_python,1,1,$(SCRAMSTORENAME_PYTHON),$(SCRAMSTORENAME_LIB),,))
else
$(eval $(call MultipleWarningMsg,PyCondCoreUtilities,src/CondCore/Utilities/python))
endif
ALL_COMMONRULES += src_CondCore_Utilities_python
src_CondCore_Utilities_python_INIT_FUNC += $$(eval $$(call CommonProductRules,src_CondCore_Utilities_python,src/CondCore/Utilities/python,PYTHON))
ifeq ($(strip $(PyHLTriggerOfflineJetMET)),)
PyHLTriggerOfflineJetMET := self/src/HLTriggerOffline/JetMET/python
src_HLTriggerOffline_JetMET_python_parent := 
ALL_PYTHON_DIRS += $(patsubst src/%,%,src/HLTriggerOffline/JetMET/python)
PyHLTriggerOfflineJetMET_files := $(patsubst src/HLTriggerOffline/JetMET/python/%,%,$(wildcard $(foreach dir,src/HLTriggerOffline/JetMET/python ,$(foreach ext,$(SRC_FILES_SUFFIXES),$(dir)/*.$(ext)))))
PyHLTriggerOfflineJetMET_LOC_USE := self  
PyHLTriggerOfflineJetMET_PACKAGE := self/src/HLTriggerOffline/JetMET/python
ALL_PRODS += PyHLTriggerOfflineJetMET
PyHLTriggerOfflineJetMET_INIT_FUNC        += $$(eval $$(call PythonProduct,PyHLTriggerOfflineJetMET,src/HLTriggerOffline/JetMET/python,src_HLTriggerOffline_JetMET_python,1,1,$(SCRAMSTORENAME_PYTHON),$(SCRAMSTORENAME_LIB),,))
else
$(eval $(call MultipleWarningMsg,PyHLTriggerOfflineJetMET,src/HLTriggerOffline/JetMET/python))
endif
ALL_COMMONRULES += src_HLTriggerOffline_JetMET_python
src_HLTriggerOffline_JetMET_python_INIT_FUNC += $$(eval $$(call CommonProductRules,src_HLTriggerOffline_JetMET_python,src/HLTriggerOffline/JetMET/python,PYTHON))
ifeq ($(strip $(PyMuonAnalysisMuonAssociators)),)
PyMuonAnalysisMuonAssociators := self/src/MuonAnalysis/MuonAssociators/python
src_MuonAnalysis_MuonAssociators_python_parent := 
ALL_PYTHON_DIRS += $(patsubst src/%,%,src/MuonAnalysis/MuonAssociators/python)
PyMuonAnalysisMuonAssociators_files := $(patsubst src/MuonAnalysis/MuonAssociators/python/%,%,$(wildcard $(foreach dir,src/MuonAnalysis/MuonAssociators/python ,$(foreach ext,$(SRC_FILES_SUFFIXES),$(dir)/*.$(ext)))))
PyMuonAnalysisMuonAssociators_LOC_USE := self  
PyMuonAnalysisMuonAssociators_PACKAGE := self/src/MuonAnalysis/MuonAssociators/python
ALL_PRODS += PyMuonAnalysisMuonAssociators
PyMuonAnalysisMuonAssociators_INIT_FUNC        += $$(eval $$(call PythonProduct,PyMuonAnalysisMuonAssociators,src/MuonAnalysis/MuonAssociators/python,src_MuonAnalysis_MuonAssociators_python,1,1,$(SCRAMSTORENAME_PYTHON),$(SCRAMSTORENAME_LIB),,))
else
$(eval $(call MultipleWarningMsg,PyMuonAnalysisMuonAssociators,src/MuonAnalysis/MuonAssociators/python))
endif
ALL_COMMONRULES += src_MuonAnalysis_MuonAssociators_python
src_MuonAnalysis_MuonAssociators_python_INIT_FUNC += $$(eval $$(call CommonProductRules,src_MuonAnalysis_MuonAssociators_python,src/MuonAnalysis/MuonAssociators/python,PYTHON))
ALL_PACKAGES += L1Trigger/Configuration
subdirs_src_L1Trigger_Configuration := src_L1Trigger_Configuration_python src_L1Trigger_Configuration_test
ALL_COMMONRULES += src_DQM_Physics_test
src_DQM_Physics_test_parent := DQM/Physics
src_DQM_Physics_test_INIT_FUNC += $$(eval $$(call CommonProductRules,src_DQM_Physics_test,src/DQM/Physics/test,TEST))
ALL_COMMONRULES += src_L1Trigger_L1TCalorimeter_test
src_L1Trigger_L1TCalorimeter_test_parent := L1Trigger/L1TCalorimeter
src_L1Trigger_L1TCalorimeter_test_INIT_FUNC += $$(eval $$(call CommonProductRules,src_L1Trigger_L1TCalorimeter_test,src/L1Trigger/L1TCalorimeter/test,TEST))
ALL_COMMONRULES += src_L1Trigger_Configuration_test
src_L1Trigger_Configuration_test_parent := L1Trigger/Configuration
src_L1Trigger_Configuration_test_INIT_FUNC += $$(eval $$(call CommonProductRules,src_L1Trigger_Configuration_test,src/L1Trigger/Configuration/test,TEST))
ALL_PACKAGES += DQM/Physics
subdirs_src_DQM_Physics := src_DQM_Physics_python src_DQM_Physics_src src_DQM_Physics_test src_DQM_Physics_interface src_DQM_Physics_doc
ifeq ($(strip $(PyHLTriggerOfflineSUSYBSM)),)
PyHLTriggerOfflineSUSYBSM := self/src/HLTriggerOffline/SUSYBSM/python
src_HLTriggerOffline_SUSYBSM_python_parent := 
ALL_PYTHON_DIRS += $(patsubst src/%,%,src/HLTriggerOffline/SUSYBSM/python)
PyHLTriggerOfflineSUSYBSM_files := $(patsubst src/HLTriggerOffline/SUSYBSM/python/%,%,$(wildcard $(foreach dir,src/HLTriggerOffline/SUSYBSM/python ,$(foreach ext,$(SRC_FILES_SUFFIXES),$(dir)/*.$(ext)))))
PyHLTriggerOfflineSUSYBSM_LOC_USE := self  
PyHLTriggerOfflineSUSYBSM_PACKAGE := self/src/HLTriggerOffline/SUSYBSM/python
ALL_PRODS += PyHLTriggerOfflineSUSYBSM
PyHLTriggerOfflineSUSYBSM_INIT_FUNC        += $$(eval $$(call PythonProduct,PyHLTriggerOfflineSUSYBSM,src/HLTriggerOffline/SUSYBSM/python,src_HLTriggerOffline_SUSYBSM_python,1,1,$(SCRAMSTORENAME_PYTHON),$(SCRAMSTORENAME_LIB),,))
else
$(eval $(call MultipleWarningMsg,PyHLTriggerOfflineSUSYBSM,src/HLTriggerOffline/SUSYBSM/python))
endif
ALL_COMMONRULES += src_HLTriggerOffline_SUSYBSM_python
src_HLTriggerOffline_SUSYBSM_python_INIT_FUNC += $$(eval $$(call CommonProductRules,src_HLTriggerOffline_SUSYBSM_python,src/HLTriggerOffline/SUSYBSM/python,PYTHON))
ALL_SUBSYSTEMS+=L1Trigger
subdirs_src_L1Trigger = src_L1Trigger_L1TMuonBarrel src_L1Trigger_L1TNtuples src_L1Trigger_L1TGlobal src_L1Trigger_L1TMuon src_L1Trigger_L1TCaloLayer1 src_L1Trigger_L1TCalorimeter src_L1Trigger_L1TMuonOverlap src_L1Trigger_L1TMuonEndCap src_L1Trigger_L1TCommon src_L1Trigger_HardwareValidation src_L1Trigger_Configuration
ALL_PACKAGES += ElectroWeakAnalysis/WENu
subdirs_src_ElectroWeakAnalysis_WENu := src_ElectroWeakAnalysis_WENu_python src_ElectroWeakAnalysis_WENu_src src_ElectroWeakAnalysis_WENu_test src_ElectroWeakAnalysis_WENu_doc
ALL_SUBSYSTEMS+=CaloOnlineTools
subdirs_src_CaloOnlineTools = src_CaloOnlineTools_EcalTools
ALL_COMMONRULES += src_HLTrigger_JSONMonitoring_test
src_HLTrigger_JSONMonitoring_test_parent := HLTrigger/JSONMonitoring
src_HLTrigger_JSONMonitoring_test_INIT_FUNC += $$(eval $$(call CommonProductRules,src_HLTrigger_JSONMonitoring_test,src/HLTrigger/JSONMonitoring/test,TEST))
ALL_COMMONRULES += src_CondCore_EcalPlugins_test
src_CondCore_EcalPlugins_test_parent := CondCore/EcalPlugins
src_CondCore_EcalPlugins_test_INIT_FUNC += $$(eval $$(call CommonProductRules,src_CondCore_EcalPlugins_test,src/CondCore/EcalPlugins/test,TEST))
ifeq ($(strip $(PyDQMOfflineTrigger)),)
PyDQMOfflineTrigger := self/src/DQMOffline/Trigger/python
src_DQMOffline_Trigger_python_parent := 
ALL_PYTHON_DIRS += $(patsubst src/%,%,src/DQMOffline/Trigger/python)
PyDQMOfflineTrigger_files := $(patsubst src/DQMOffline/Trigger/python/%,%,$(wildcard $(foreach dir,src/DQMOffline/Trigger/python ,$(foreach ext,$(SRC_FILES_SUFFIXES),$(dir)/*.$(ext)))))
PyDQMOfflineTrigger_LOC_USE := self  
PyDQMOfflineTrigger_PACKAGE := self/src/DQMOffline/Trigger/python
ALL_PRODS += PyDQMOfflineTrigger
PyDQMOfflineTrigger_INIT_FUNC        += $$(eval $$(call PythonProduct,PyDQMOfflineTrigger,src/DQMOffline/Trigger/python,src_DQMOffline_Trigger_python,1,1,$(SCRAMSTORENAME_PYTHON),$(SCRAMSTORENAME_LIB),,))
else
$(eval $(call MultipleWarningMsg,PyDQMOfflineTrigger,src/DQMOffline/Trigger/python))
endif
ALL_COMMONRULES += src_DQMOffline_Trigger_python
src_DQMOffline_Trigger_python_INIT_FUNC += $$(eval $$(call CommonProductRules,src_DQMOffline_Trigger_python,src/DQMOffline/Trigger/python,PYTHON))
ALL_PACKAGES += HLTriggerOffline/Egamma
subdirs_src_HLTriggerOffline_Egamma := src_HLTriggerOffline_Egamma_python src_HLTriggerOffline_Egamma_src src_HLTriggerOffline_Egamma_test src_HLTriggerOffline_Egamma_interface
ifeq ($(strip $(PyHLTriggerHLTfilters)),)
PyHLTriggerHLTfilters := self/src/HLTrigger/HLTfilters/python
src_HLTrigger_HLTfilters_python_parent := 
ALL_PYTHON_DIRS += $(patsubst src/%,%,src/HLTrigger/HLTfilters/python)
PyHLTriggerHLTfilters_files := $(patsubst src/HLTrigger/HLTfilters/python/%,%,$(wildcard $(foreach dir,src/HLTrigger/HLTfilters/python ,$(foreach ext,$(SRC_FILES_SUFFIXES),$(dir)/*.$(ext)))))
PyHLTriggerHLTfilters_LOC_USE := self  
PyHLTriggerHLTfilters_PACKAGE := self/src/HLTrigger/HLTfilters/python
ALL_PRODS += PyHLTriggerHLTfilters
PyHLTriggerHLTfilters_INIT_FUNC        += $$(eval $$(call PythonProduct,PyHLTriggerHLTfilters,src/HLTrigger/HLTfilters/python,src_HLTrigger_HLTfilters_python,1,1,$(SCRAMSTORENAME_PYTHON),$(SCRAMSTORENAME_LIB),,))
else
$(eval $(call MultipleWarningMsg,PyHLTriggerHLTfilters,src/HLTrigger/HLTfilters/python))
endif
ALL_COMMONRULES += src_HLTrigger_HLTfilters_python
src_HLTrigger_HLTfilters_python_INIT_FUNC += $$(eval $$(call CommonProductRules,src_HLTrigger_HLTfilters_python,src/HLTrigger/HLTfilters/python,PYTHON))
ALL_PACKAGES += L1Trigger/L1TCalorimeter
subdirs_src_L1Trigger_L1TCalorimeter := src_L1Trigger_L1TCalorimeter_python src_L1Trigger_L1TCalorimeter_src src_L1Trigger_L1TCalorimeter_test src_L1Trigger_L1TCalorimeter_plugins
ALL_COMMONRULES += src_HLTrigger_HLTfilters_test
src_HLTrigger_HLTfilters_test_parent := HLTrigger/HLTfilters
src_HLTrigger_HLTfilters_test_INIT_FUNC += $$(eval $$(call CommonProductRules,src_HLTrigger_HLTfilters_test,src/HLTrigger/HLTfilters/test,TEST))
ifeq ($(strip $(PyEventFilterCSCTFRawToDigi)),)
PyEventFilterCSCTFRawToDigi := self/src/EventFilter/CSCTFRawToDigi/python
src_EventFilter_CSCTFRawToDigi_python_parent := 
ALL_PYTHON_DIRS += $(patsubst src/%,%,src/EventFilter/CSCTFRawToDigi/python)
PyEventFilterCSCTFRawToDigi_files := $(patsubst src/EventFilter/CSCTFRawToDigi/python/%,%,$(wildcard $(foreach dir,src/EventFilter/CSCTFRawToDigi/python ,$(foreach ext,$(SRC_FILES_SUFFIXES),$(dir)/*.$(ext)))))
PyEventFilterCSCTFRawToDigi_LOC_USE := self  
PyEventFilterCSCTFRawToDigi_PACKAGE := self/src/EventFilter/CSCTFRawToDigi/python
ALL_PRODS += PyEventFilterCSCTFRawToDigi
PyEventFilterCSCTFRawToDigi_INIT_FUNC        += $$(eval $$(call PythonProduct,PyEventFilterCSCTFRawToDigi,src/EventFilter/CSCTFRawToDigi/python,src_EventFilter_CSCTFRawToDigi_python,1,1,$(SCRAMSTORENAME_PYTHON),$(SCRAMSTORENAME_LIB),,))
else
$(eval $(call MultipleWarningMsg,PyEventFilterCSCTFRawToDigi,src/EventFilter/CSCTFRawToDigi/python))
endif
ALL_COMMONRULES += src_EventFilter_CSCTFRawToDigi_python
src_EventFilter_CSCTFRawToDigi_python_INIT_FUNC += $$(eval $$(call CommonProductRules,src_EventFilter_CSCTFRawToDigi_python,src/EventFilter/CSCTFRawToDigi/python,PYTHON))
ALL_PACKAGES += DataFormats/L1TCalorimeter
subdirs_src_DataFormats_L1TCalorimeter := src_DataFormats_L1TCalorimeter_src src_DataFormats_L1TCalorimeter_interface
ifeq ($(strip $(PyElectroWeakAnalysisWENu)),)
PyElectroWeakAnalysisWENu := self/src/ElectroWeakAnalysis/WENu/python
src_ElectroWeakAnalysis_WENu_python_parent := 
ALL_PYTHON_DIRS += $(patsubst src/%,%,src/ElectroWeakAnalysis/WENu/python)
PyElectroWeakAnalysisWENu_files := $(patsubst src/ElectroWeakAnalysis/WENu/python/%,%,$(wildcard $(foreach dir,src/ElectroWeakAnalysis/WENu/python ,$(foreach ext,$(SRC_FILES_SUFFIXES),$(dir)/*.$(ext)))))
PyElectroWeakAnalysisWENu_LOC_USE := self  
PyElectroWeakAnalysisWENu_PACKAGE := self/src/ElectroWeakAnalysis/WENu/python
ALL_PRODS += PyElectroWeakAnalysisWENu
PyElectroWeakAnalysisWENu_INIT_FUNC        += $$(eval $$(call PythonProduct,PyElectroWeakAnalysisWENu,src/ElectroWeakAnalysis/WENu/python,src_ElectroWeakAnalysis_WENu_python,1,1,$(SCRAMSTORENAME_PYTHON),$(SCRAMSTORENAME_LIB),,))
else
$(eval $(call MultipleWarningMsg,PyElectroWeakAnalysisWENu,src/ElectroWeakAnalysis/WENu/python))
endif
ALL_COMMONRULES += src_ElectroWeakAnalysis_WENu_python
src_ElectroWeakAnalysis_WENu_python_INIT_FUNC += $$(eval $$(call CommonProductRules,src_ElectroWeakAnalysis_WENu_python,src/ElectroWeakAnalysis/WENu/python,PYTHON))
ALL_PACKAGES += HLTriggerOffline/Higgs
subdirs_src_HLTriggerOffline_Higgs := src_HLTriggerOffline_Higgs_python src_HLTriggerOffline_Higgs_src src_HLTriggerOffline_Higgs_test src_HLTriggerOffline_Higgs_interface src_HLTriggerOffline_Higgs_doc src_HLTriggerOffline_Higgs_data
ALL_PACKAGES += HLTrigger/HLTcore
subdirs_src_HLTrigger_HLTcore := src_HLTrigger_HLTcore_python src_HLTrigger_HLTcore_src src_HLTrigger_HLTcore_test src_HLTrigger_HLTcore_plugins src_HLTrigger_HLTcore_interface
ifeq ($(strip $(PyEventFilterL1TRawToDigi)),)
PyEventFilterL1TRawToDigi := self/src/EventFilter/L1TRawToDigi/python
src_EventFilter_L1TRawToDigi_python_parent := 
ALL_PYTHON_DIRS += $(patsubst src/%,%,src/EventFilter/L1TRawToDigi/python)
PyEventFilterL1TRawToDigi_files := $(patsubst src/EventFilter/L1TRawToDigi/python/%,%,$(wildcard $(foreach dir,src/EventFilter/L1TRawToDigi/python ,$(foreach ext,$(SRC_FILES_SUFFIXES),$(dir)/*.$(ext)))))
PyEventFilterL1TRawToDigi_LOC_USE := self  
PyEventFilterL1TRawToDigi_PACKAGE := self/src/EventFilter/L1TRawToDigi/python
ALL_PRODS += PyEventFilterL1TRawToDigi
PyEventFilterL1TRawToDigi_INIT_FUNC        += $$(eval $$(call PythonProduct,PyEventFilterL1TRawToDigi,src/EventFilter/L1TRawToDigi/python,src_EventFilter_L1TRawToDigi_python,1,1,$(SCRAMSTORENAME_PYTHON),$(SCRAMSTORENAME_LIB),,))
else
$(eval $(call MultipleWarningMsg,PyEventFilterL1TRawToDigi,src/EventFilter/L1TRawToDigi/python))
endif
ALL_COMMONRULES += src_EventFilter_L1TRawToDigi_python
src_EventFilter_L1TRawToDigi_python_INIT_FUNC += $$(eval $$(call CommonProductRules,src_EventFilter_L1TRawToDigi_python,src/EventFilter/L1TRawToDigi/python,PYTHON))
ifeq ($(strip $(PyHLTriggerJetMET)),)
PyHLTriggerJetMET := self/src/HLTrigger/JetMET/python
src_HLTrigger_JetMET_python_parent := 
ALL_PYTHON_DIRS += $(patsubst src/%,%,src/HLTrigger/JetMET/python)
PyHLTriggerJetMET_files := $(patsubst src/HLTrigger/JetMET/python/%,%,$(wildcard $(foreach dir,src/HLTrigger/JetMET/python ,$(foreach ext,$(SRC_FILES_SUFFIXES),$(dir)/*.$(ext)))))
PyHLTriggerJetMET_LOC_USE := self  
PyHLTriggerJetMET_PACKAGE := self/src/HLTrigger/JetMET/python
ALL_PRODS += PyHLTriggerJetMET
PyHLTriggerJetMET_INIT_FUNC        += $$(eval $$(call PythonProduct,PyHLTriggerJetMET,src/HLTrigger/JetMET/python,src_HLTrigger_JetMET_python,1,1,$(SCRAMSTORENAME_PYTHON),$(SCRAMSTORENAME_LIB),,))
else
$(eval $(call MultipleWarningMsg,PyHLTriggerJetMET,src/HLTrigger/JetMET/python))
endif
ALL_COMMONRULES += src_HLTrigger_JetMET_python
src_HLTrigger_JetMET_python_INIT_FUNC += $$(eval $$(call CommonProductRules,src_HLTrigger_JetMET_python,src/HLTrigger/JetMET/python,PYTHON))
ifeq ($(strip $(PyL1TriggerL1TMuon)),)
PyL1TriggerL1TMuon := self/src/L1Trigger/L1TMuon/python
src_L1Trigger_L1TMuon_python_parent := 
ALL_PYTHON_DIRS += $(patsubst src/%,%,src/L1Trigger/L1TMuon/python)
PyL1TriggerL1TMuon_files := $(patsubst src/L1Trigger/L1TMuon/python/%,%,$(wildcard $(foreach dir,src/L1Trigger/L1TMuon/python ,$(foreach ext,$(SRC_FILES_SUFFIXES),$(dir)/*.$(ext)))))
PyL1TriggerL1TMuon_LOC_USE := self  
PyL1TriggerL1TMuon_PACKAGE := self/src/L1Trigger/L1TMuon/python
ALL_PRODS += PyL1TriggerL1TMuon
PyL1TriggerL1TMuon_INIT_FUNC        += $$(eval $$(call PythonProduct,PyL1TriggerL1TMuon,src/L1Trigger/L1TMuon/python,src_L1Trigger_L1TMuon_python,1,1,$(SCRAMSTORENAME_PYTHON),$(SCRAMSTORENAME_LIB),,))
else
$(eval $(call MultipleWarningMsg,PyL1TriggerL1TMuon,src/L1Trigger/L1TMuon/python))
endif
ALL_COMMONRULES += src_L1Trigger_L1TMuon_python
src_L1Trigger_L1TMuon_python_INIT_FUNC += $$(eval $$(call CommonProductRules,src_L1Trigger_L1TMuon_python,src/L1Trigger/L1TMuon/python,PYTHON))
ALL_SUBSYSTEMS+=EventFilter
subdirs_src_EventFilter = src_EventFilter_L1TRawToDigi src_EventFilter_CSCTFRawToDigi src_EventFilter_L1TXRawToDigi
ALL_PACKAGES += EventFilter/L1TXRawToDigi
subdirs_src_EventFilter_L1TXRawToDigi := src_EventFilter_L1TXRawToDigi_python src_EventFilter_L1TXRawToDigi_test src_EventFilter_L1TXRawToDigi_plugins
ALL_PACKAGES += EventFilter/L1TRawToDigi
subdirs_src_EventFilter_L1TRawToDigi := src_EventFilter_L1TRawToDigi_python src_EventFilter_L1TRawToDigi_src src_EventFilter_L1TRawToDigi_test src_EventFilter_L1TRawToDigi_plugins
ifeq ($(strip $(PyL1TriggerL1TMuonEndCap)),)
PyL1TriggerL1TMuonEndCap := self/src/L1Trigger/L1TMuonEndCap/python
src_L1Trigger_L1TMuonEndCap_python_parent := 
ALL_PYTHON_DIRS += $(patsubst src/%,%,src/L1Trigger/L1TMuonEndCap/python)
PyL1TriggerL1TMuonEndCap_files := $(patsubst src/L1Trigger/L1TMuonEndCap/python/%,%,$(wildcard $(foreach dir,src/L1Trigger/L1TMuonEndCap/python ,$(foreach ext,$(SRC_FILES_SUFFIXES),$(dir)/*.$(ext)))))
PyL1TriggerL1TMuonEndCap_LOC_USE := self  
PyL1TriggerL1TMuonEndCap_PACKAGE := self/src/L1Trigger/L1TMuonEndCap/python
ALL_PRODS += PyL1TriggerL1TMuonEndCap
PyL1TriggerL1TMuonEndCap_INIT_FUNC        += $$(eval $$(call PythonProduct,PyL1TriggerL1TMuonEndCap,src/L1Trigger/L1TMuonEndCap/python,src_L1Trigger_L1TMuonEndCap_python,1,1,$(SCRAMSTORENAME_PYTHON),$(SCRAMSTORENAME_LIB),,))
else
$(eval $(call MultipleWarningMsg,PyL1TriggerL1TMuonEndCap,src/L1Trigger/L1TMuonEndCap/python))
endif
ALL_COMMONRULES += src_L1Trigger_L1TMuonEndCap_python
src_L1Trigger_L1TMuonEndCap_python_INIT_FUNC += $$(eval $$(call CommonProductRules,src_L1Trigger_L1TMuonEndCap_python,src/L1Trigger/L1TMuonEndCap/python,PYTHON))
ALL_PACKAGES += HLTrigger/Egamma
subdirs_src_HLTrigger_Egamma := src_HLTrigger_Egamma_python src_HLTrigger_Egamma_src src_HLTrigger_Egamma_interface
ifeq ($(strip $(testSerializationL1TObjects)),)
testSerializationL1TObjects_files := $(patsubst src/CondFormats/L1TObjects/test/%,%,$(foreach file,testSerializationL1TObjects.cpp,$(eval xfile:=$(wildcard src/CondFormats/L1TObjects/test/$(file)))$(if $(xfile),$(xfile),$(warning No such file exists: src/CondFormats/L1TObjects/test/$(file). Please fix src/CondFormats/L1TObjects/test/BuildFile.))))
testSerializationL1TObjects := self/src/CondFormats/L1TObjects/test
testSerializationL1TObjects_TEST_RUNNER_CMD :=  testSerializationL1TObjects 
testSerializationL1TObjects_BuildFile    := $(WORKINGDIR)/cache/bf/src/CondFormats/L1TObjects/test/BuildFile
testSerializationL1TObjects_LOC_USE := self  CondFormats/L1TObjects
testSerializationL1TObjects_PACKAGE := self/src/CondFormats/L1TObjects/test
ALL_PRODS += testSerializationL1TObjects
testSerializationL1TObjects_INIT_FUNC        += $$(eval $$(call Binary,testSerializationL1TObjects,src/CondFormats/L1TObjects/test,src_CondFormats_L1TObjects_test,$(SCRAMSTORENAME_BIN),,$(SCRAMSTORENAME_TEST),test,$(SCRAMSTORENAME_LOGS)))
testSerializationL1TObjects_CLASS := TEST
else
$(eval $(call MultipleWarningMsg,testSerializationL1TObjects,src/CondFormats/L1TObjects/test))
endif
ifeq ($(strip $(test_L1GtDefinitions)),)
test_L1GtDefinitions_files := $(patsubst src/CondFormats/L1TObjects/test/%,%,$(foreach file,test_L1GtDefinitions.cc,$(eval xfile:=$(wildcard src/CondFormats/L1TObjects/test/$(file)))$(if $(xfile),$(xfile),$(warning No such file exists: src/CondFormats/L1TObjects/test/$(file). Please fix src/CondFormats/L1TObjects/test/BuildFile.))))
test_L1GtDefinitions := self/src/CondFormats/L1TObjects/test
test_L1GtDefinitions_TEST_RUNNER_CMD :=  test_L1GtDefinitions 
test_L1GtDefinitions_BuildFile    := $(WORKINGDIR)/cache/bf/src/CondFormats/L1TObjects/test/BuildFile
test_L1GtDefinitions_LOC_USE := self  CondFormats/L1TObjects
test_L1GtDefinitions_PACKAGE := self/src/CondFormats/L1TObjects/test
ALL_PRODS += test_L1GtDefinitions
test_L1GtDefinitions_INIT_FUNC        += $$(eval $$(call Binary,test_L1GtDefinitions,src/CondFormats/L1TObjects/test,src_CondFormats_L1TObjects_test,$(SCRAMSTORENAME_BIN),,$(SCRAMSTORENAME_TEST),test,$(SCRAMSTORENAME_LOGS)))
test_L1GtDefinitions_CLASS := TEST
else
$(eval $(call MultipleWarningMsg,test_L1GtDefinitions,src/CondFormats/L1TObjects/test))
endif
ALL_COMMONRULES += src_CondFormats_L1TObjects_test
src_CondFormats_L1TObjects_test_parent := CondFormats/L1TObjects
src_CondFormats_L1TObjects_test_INIT_FUNC += $$(eval $$(call CommonProductRules,src_CondFormats_L1TObjects_test,src/CondFormats/L1TObjects/test,TEST))
ifeq ($(strip $(conddb_test_gt_load)),)
conddb_test_gt_load_files := $(patsubst src/CondCore/Utilities/bin/%,%,$(foreach file,conddb_test_gt_load.cpp,$(eval xfile:=$(wildcard src/CondCore/Utilities/bin/$(file)))$(if $(xfile),$(xfile),$(warning No such file exists: src/CondCore/Utilities/bin/$(file). Please fix src/CondCore/Utilities/bin/BuildFile.))))
conddb_test_gt_load := self/src/CondCore/Utilities/bin
conddb_test_gt_load_BuildFile    := $(WORKINGDIR)/cache/bf/src/CondCore/Utilities/bin/BuildFile
conddb_test_gt_load_LOC_FLAGS_CXXFLAGS   := -Wno-sign-compare -Wno-unused-variable -ftemplate-depth=600
conddb_test_gt_load_LOC_USE := self  CondCore/Utilities FWCore/Concurrency CondCore/CondDB
conddb_test_gt_load_PACKAGE := self/src/CondCore/Utilities/bin
ALL_PRODS += conddb_test_gt_load
conddb_test_gt_load_INIT_FUNC        += $$(eval $$(call Binary,conddb_test_gt_load,src/CondCore/Utilities/bin,src_CondCore_Utilities_bin,$(SCRAMSTORENAME_BIN),,$(SCRAMSTORENAME_BIN),bin,$(SCRAMSTORENAME_LOGS)))
conddb_test_gt_load_CLASS := BINARY
else
$(eval $(call MultipleWarningMsg,conddb_test_gt_load,src/CondCore/Utilities/bin))
endif
ifeq ($(strip $(conddb_test)),)
conddb_test_files := $(patsubst src/CondCore/Utilities/bin/%,%,$(foreach file,conddb_test.cpp,$(eval xfile:=$(wildcard src/CondCore/Utilities/bin/$(file)))$(if $(xfile),$(xfile),$(warning No such file exists: src/CondCore/Utilities/bin/$(file). Please fix src/CondCore/Utilities/bin/BuildFile.))))
conddb_test := self/src/CondCore/Utilities/bin
conddb_test_BuildFile    := $(WORKINGDIR)/cache/bf/src/CondCore/Utilities/bin/BuildFile
conddb_test_LOC_FLAGS_CXXFLAGS   := -Wno-sign-compare -Wno-unused-variable -ftemplate-depth=600
conddb_test_LOC_USE := self  CondCore/Utilities FWCore/Concurrency CondCore/CondDB
conddb_test_PACKAGE := self/src/CondCore/Utilities/bin
ALL_PRODS += conddb_test
conddb_test_INIT_FUNC        += $$(eval $$(call Binary,conddb_test,src/CondCore/Utilities/bin,src_CondCore_Utilities_bin,$(SCRAMSTORENAME_BIN),,$(SCRAMSTORENAME_BIN),bin,$(SCRAMSTORENAME_LOGS)))
conddb_test_CLASS := BINARY
else
$(eval $(call MultipleWarningMsg,conddb_test,src/CondCore/Utilities/bin))
endif
ifeq ($(strip $(conddb_import)),)
conddb_import_files := $(patsubst src/CondCore/Utilities/bin/%,%,$(foreach file,conddb_import.cpp,$(eval xfile:=$(wildcard src/CondCore/Utilities/bin/$(file)))$(if $(xfile),$(xfile),$(warning No such file exists: src/CondCore/Utilities/bin/$(file). Please fix src/CondCore/Utilities/bin/BuildFile.))))
conddb_import := self/src/CondCore/Utilities/bin
conddb_import_BuildFile    := $(WORKINGDIR)/cache/bf/src/CondCore/Utilities/bin/BuildFile
conddb_import_LOC_FLAGS_CXXFLAGS   := -Wno-sign-compare -Wno-unused-variable -ftemplate-depth=600
conddb_import_LOC_USE := self  CondCore/Utilities FWCore/Concurrency CondCore/CondDB
conddb_import_PACKAGE := self/src/CondCore/Utilities/bin
ALL_PRODS += conddb_import
conddb_import_INIT_FUNC        += $$(eval $$(call Binary,conddb_import,src/CondCore/Utilities/bin,src_CondCore_Utilities_bin,$(SCRAMSTORENAME_BIN),,$(SCRAMSTORENAME_BIN),bin,$(SCRAMSTORENAME_LOGS)))
conddb_import_CLASS := BINARY
else
$(eval $(call MultipleWarningMsg,conddb_import,src/CondCore/Utilities/bin))
endif
ifeq ($(strip $(conddb_copy_iov)),)
conddb_copy_iov_files := $(patsubst src/CondCore/Utilities/bin/%,%,$(foreach file,conddb_copy_iov.cpp,$(eval xfile:=$(wildcard src/CondCore/Utilities/bin/$(file)))$(if $(xfile),$(xfile),$(warning No such file exists: src/CondCore/Utilities/bin/$(file). Please fix src/CondCore/Utilities/bin/BuildFile.))))
conddb_copy_iov := self/src/CondCore/Utilities/bin
conddb_copy_iov_BuildFile    := $(WORKINGDIR)/cache/bf/src/CondCore/Utilities/bin/BuildFile
conddb_copy_iov_LOC_FLAGS_CXXFLAGS   := -Wno-sign-compare -Wno-unused-variable -ftemplate-depth=600
conddb_copy_iov_LOC_USE := self  CondCore/Utilities FWCore/Concurrency CondCore/CondDB
conddb_copy_iov_PACKAGE := self/src/CondCore/Utilities/bin
ALL_PRODS += conddb_copy_iov
conddb_copy_iov_INIT_FUNC        += $$(eval $$(call Binary,conddb_copy_iov,src/CondCore/Utilities/bin,src_CondCore_Utilities_bin,$(SCRAMSTORENAME_BIN),,$(SCRAMSTORENAME_BIN),bin,$(SCRAMSTORENAME_LOGS)))
conddb_copy_iov_CLASS := BINARY
else
$(eval $(call MultipleWarningMsg,conddb_copy_iov,src/CondCore/Utilities/bin))
endif
ifeq ($(strip $(conddb_test_gt_perf)),)
conddb_test_gt_perf_files := $(patsubst src/CondCore/Utilities/bin/%,%,$(foreach file,conddb_test_gt_perf.cpp,$(eval xfile:=$(wildcard src/CondCore/Utilities/bin/$(file)))$(if $(xfile),$(xfile),$(warning No such file exists: src/CondCore/Utilities/bin/$(file). Please fix src/CondCore/Utilities/bin/BuildFile.))))
conddb_test_gt_perf := self/src/CondCore/Utilities/bin
conddb_test_gt_perf_BuildFile    := $(WORKINGDIR)/cache/bf/src/CondCore/Utilities/bin/BuildFile
conddb_test_gt_perf_LOC_FLAGS_CXXFLAGS   := -Wno-sign-compare -Wno-unused-variable -ftemplate-depth=600
conddb_test_gt_perf_LOC_USE := self  CondCore/Utilities FWCore/Concurrency CondCore/CondDB
conddb_test_gt_perf_PACKAGE := self/src/CondCore/Utilities/bin
ALL_PRODS += conddb_test_gt_perf
conddb_test_gt_perf_INIT_FUNC        += $$(eval $$(call Binary,conddb_test_gt_perf,src/CondCore/Utilities/bin,src_CondCore_Utilities_bin,$(SCRAMSTORENAME_BIN),,$(SCRAMSTORENAME_BIN),bin,$(SCRAMSTORENAME_LOGS)))
conddb_test_gt_perf_CLASS := BINARY
else
$(eval $(call MultipleWarningMsg,conddb_test_gt_perf,src/CondCore/Utilities/bin))
endif
ifeq ($(strip $(cmscond_authentication_manager)),)
cmscond_authentication_manager_files := $(patsubst src/CondCore/Utilities/bin/%,%,$(foreach file,cmscond_authentication_manager.cpp,$(eval xfile:=$(wildcard src/CondCore/Utilities/bin/$(file)))$(if $(xfile),$(xfile),$(warning No such file exists: src/CondCore/Utilities/bin/$(file). Please fix src/CondCore/Utilities/bin/BuildFile.))))
cmscond_authentication_manager := self/src/CondCore/Utilities/bin
cmscond_authentication_manager_BuildFile    := $(WORKINGDIR)/cache/bf/src/CondCore/Utilities/bin/BuildFile
cmscond_authentication_manager_LOC_FLAGS_CXXFLAGS   := -Wno-sign-compare -Wno-unused-variable -ftemplate-depth=600
cmscond_authentication_manager_LOC_USE := self  CondCore/Utilities FWCore/Concurrency
cmscond_authentication_manager_PACKAGE := self/src/CondCore/Utilities/bin
ALL_PRODS += cmscond_authentication_manager
cmscond_authentication_manager_INIT_FUNC        += $$(eval $$(call Binary,cmscond_authentication_manager,src/CondCore/Utilities/bin,src_CondCore_Utilities_bin,$(SCRAMSTORENAME_BIN),,$(SCRAMSTORENAME_BIN),bin,$(SCRAMSTORENAME_LOGS)))
cmscond_authentication_manager_CLASS := BINARY
else
$(eval $(call MultipleWarningMsg,cmscond_authentication_manager,src/CondCore/Utilities/bin))
endif
ifeq ($(strip $(cmscond_key_mgr)),)
cmscond_key_mgr_files := $(patsubst src/CondCore/Utilities/bin/%,%,$(foreach file,cmscond_key_mgr.cpp,$(eval xfile:=$(wildcard src/CondCore/Utilities/bin/$(file)))$(if $(xfile),$(xfile),$(warning No such file exists: src/CondCore/Utilities/bin/$(file). Please fix src/CondCore/Utilities/bin/BuildFile.))))
cmscond_key_mgr := self/src/CondCore/Utilities/bin
cmscond_key_mgr_BuildFile    := $(WORKINGDIR)/cache/bf/src/CondCore/Utilities/bin/BuildFile
cmscond_key_mgr_LOC_FLAGS_CXXFLAGS   := -Wno-sign-compare -Wno-unused-variable -ftemplate-depth=600
cmscond_key_mgr_LOC_USE := self  CondCore/Utilities FWCore/Concurrency
cmscond_key_mgr_PACKAGE := self/src/CondCore/Utilities/bin
ALL_PRODS += cmscond_key_mgr
cmscond_key_mgr_INIT_FUNC        += $$(eval $$(call Binary,cmscond_key_mgr,src/CondCore/Utilities/bin,src_CondCore_Utilities_bin,$(SCRAMSTORENAME_BIN),,$(SCRAMSTORENAME_BIN),bin,$(SCRAMSTORENAME_LOGS)))
cmscond_key_mgr_CLASS := BINARY
else
$(eval $(call MultipleWarningMsg,cmscond_key_mgr,src/CondCore/Utilities/bin))
endif
ifeq ($(strip $(cmscond_from_lumiid)),)
cmscond_from_lumiid_files := $(patsubst src/CondCore/Utilities/bin/%,%,$(foreach file,cmscond_from_lumiid.cpp,$(eval xfile:=$(wildcard src/CondCore/Utilities/bin/$(file)))$(if $(xfile),$(xfile),$(warning No such file exists: src/CondCore/Utilities/bin/$(file). Please fix src/CondCore/Utilities/bin/BuildFile.))))
cmscond_from_lumiid := self/src/CondCore/Utilities/bin
cmscond_from_lumiid_BuildFile    := $(WORKINGDIR)/cache/bf/src/CondCore/Utilities/bin/BuildFile
cmscond_from_lumiid_LOC_FLAGS_CXXFLAGS   := -Wno-sign-compare -Wno-unused-variable -ftemplate-depth=600
cmscond_from_lumiid_LOC_USE := self  CondCore/Utilities FWCore/Concurrency DataFormats/Provenance
cmscond_from_lumiid_PACKAGE := self/src/CondCore/Utilities/bin
ALL_PRODS += cmscond_from_lumiid
cmscond_from_lumiid_INIT_FUNC        += $$(eval $$(call Binary,cmscond_from_lumiid,src/CondCore/Utilities/bin,src_CondCore_Utilities_bin,$(SCRAMSTORENAME_BIN),,$(SCRAMSTORENAME_BIN),bin,$(SCRAMSTORENAME_LOGS)))
cmscond_from_lumiid_CLASS := BINARY
else
$(eval $(call MultipleWarningMsg,cmscond_from_lumiid,src/CondCore/Utilities/bin))
endif
ifeq ($(strip $(cmscond_to_lumiid)),)
cmscond_to_lumiid_files := $(patsubst src/CondCore/Utilities/bin/%,%,$(foreach file,cmscond_to_lumiid.cpp,$(eval xfile:=$(wildcard src/CondCore/Utilities/bin/$(file)))$(if $(xfile),$(xfile),$(warning No such file exists: src/CondCore/Utilities/bin/$(file). Please fix src/CondCore/Utilities/bin/BuildFile.))))
cmscond_to_lumiid := self/src/CondCore/Utilities/bin
cmscond_to_lumiid_BuildFile    := $(WORKINGDIR)/cache/bf/src/CondCore/Utilities/bin/BuildFile
cmscond_to_lumiid_LOC_FLAGS_CXXFLAGS   := -Wno-sign-compare -Wno-unused-variable -ftemplate-depth=600
cmscond_to_lumiid_LOC_USE := self  CondCore/Utilities FWCore/Concurrency DataFormats/Provenance
cmscond_to_lumiid_PACKAGE := self/src/CondCore/Utilities/bin
ALL_PRODS += cmscond_to_lumiid
cmscond_to_lumiid_INIT_FUNC        += $$(eval $$(call Binary,cmscond_to_lumiid,src/CondCore/Utilities/bin,src_CondCore_Utilities_bin,$(SCRAMSTORENAME_BIN),,$(SCRAMSTORENAME_BIN),bin,$(SCRAMSTORENAME_LOGS)))
cmscond_to_lumiid_CLASS := BINARY
else
$(eval $(call MultipleWarningMsg,cmscond_to_lumiid,src/CondCore/Utilities/bin))
endif
ALL_COMMONRULES += src_CondCore_Utilities_bin
src_CondCore_Utilities_bin_parent := CondCore/Utilities
src_CondCore_Utilities_bin_INIT_FUNC += $$(eval $$(call CommonProductRules,src_CondCore_Utilities_bin,src/CondCore/Utilities/bin,BINARY))
ifeq ($(strip $(PyDPGAnalysisSkims)),)
PyDPGAnalysisSkims := self/src/DPGAnalysis/Skims/python
src_DPGAnalysis_Skims_python_parent := 
ALL_PYTHON_DIRS += $(patsubst src/%,%,src/DPGAnalysis/Skims/python)
PyDPGAnalysisSkims_files := $(patsubst src/DPGAnalysis/Skims/python/%,%,$(wildcard $(foreach dir,src/DPGAnalysis/Skims/python ,$(foreach ext,$(SRC_FILES_SUFFIXES),$(dir)/*.$(ext)))))
PyDPGAnalysisSkims_LOC_USE := self  
PyDPGAnalysisSkims_PACKAGE := self/src/DPGAnalysis/Skims/python
ALL_PRODS += PyDPGAnalysisSkims
PyDPGAnalysisSkims_INIT_FUNC        += $$(eval $$(call PythonProduct,PyDPGAnalysisSkims,src/DPGAnalysis/Skims/python,src_DPGAnalysis_Skims_python,1,1,$(SCRAMSTORENAME_PYTHON),$(SCRAMSTORENAME_LIB),,))
else
$(eval $(call MultipleWarningMsg,PyDPGAnalysisSkims,src/DPGAnalysis/Skims/python))
endif
ALL_COMMONRULES += src_DPGAnalysis_Skims_python
src_DPGAnalysis_Skims_python_INIT_FUNC += $$(eval $$(call CommonProductRules,src_DPGAnalysis_Skims_python,src/DPGAnalysis/Skims/python,PYTHON))
ALL_SUBSYSTEMS+=RecoTauTag
subdirs_src_RecoTauTag = src_RecoTauTag_HLTProducers
ALL_PACKAGES += L1Trigger/L1TMuon
subdirs_src_L1Trigger_L1TMuon := src_L1Trigger_L1TMuon_python src_L1Trigger_L1TMuon_src src_L1Trigger_L1TMuon_test src_L1Trigger_L1TMuon_plugins src_L1Trigger_L1TMuon_interface src_L1Trigger_L1TMuon_data
ifeq ($(strip $(PyL1TriggerL1TMuonOverlap)),)
PyL1TriggerL1TMuonOverlap := self/src/L1Trigger/L1TMuonOverlap/python
src_L1Trigger_L1TMuonOverlap_python_parent := 
ALL_PYTHON_DIRS += $(patsubst src/%,%,src/L1Trigger/L1TMuonOverlap/python)
PyL1TriggerL1TMuonOverlap_files := $(patsubst src/L1Trigger/L1TMuonOverlap/python/%,%,$(wildcard $(foreach dir,src/L1Trigger/L1TMuonOverlap/python ,$(foreach ext,$(SRC_FILES_SUFFIXES),$(dir)/*.$(ext)))))
PyL1TriggerL1TMuonOverlap_LOC_USE := self  
PyL1TriggerL1TMuonOverlap_PACKAGE := self/src/L1Trigger/L1TMuonOverlap/python
ALL_PRODS += PyL1TriggerL1TMuonOverlap
PyL1TriggerL1TMuonOverlap_INIT_FUNC        += $$(eval $$(call PythonProduct,PyL1TriggerL1TMuonOverlap,src/L1Trigger/L1TMuonOverlap/python,src_L1Trigger_L1TMuonOverlap_python,1,1,$(SCRAMSTORENAME_PYTHON),$(SCRAMSTORENAME_LIB),,))
else
$(eval $(call MultipleWarningMsg,PyL1TriggerL1TMuonOverlap,src/L1Trigger/L1TMuonOverlap/python))
endif
ALL_COMMONRULES += src_L1Trigger_L1TMuonOverlap_python
src_L1Trigger_L1TMuonOverlap_python_INIT_FUNC += $$(eval $$(call CommonProductRules,src_L1Trigger_L1TMuonOverlap_python,src/L1Trigger/L1TMuonOverlap/python,PYTHON))
ALL_SUBSYSTEMS+=ElectroWeakAnalysis
subdirs_src_ElectroWeakAnalysis = src_ElectroWeakAnalysis_WENu src_ElectroWeakAnalysis_ZMuMu
ifeq ($(strip $(PyRecoTrackerDeDx)),)
PyRecoTrackerDeDx := self/src/RecoTracker/DeDx/python
src_RecoTracker_DeDx_python_parent := 
ALL_PYTHON_DIRS += $(patsubst src/%,%,src/RecoTracker/DeDx/python)
PyRecoTrackerDeDx_files := $(patsubst src/RecoTracker/DeDx/python/%,%,$(wildcard $(foreach dir,src/RecoTracker/DeDx/python ,$(foreach ext,$(SRC_FILES_SUFFIXES),$(dir)/*.$(ext)))))
PyRecoTrackerDeDx_LOC_USE := self  
PyRecoTrackerDeDx_PACKAGE := self/src/RecoTracker/DeDx/python
ALL_PRODS += PyRecoTrackerDeDx
PyRecoTrackerDeDx_INIT_FUNC        += $$(eval $$(call PythonProduct,PyRecoTrackerDeDx,src/RecoTracker/DeDx/python,src_RecoTracker_DeDx_python,1,1,$(SCRAMSTORENAME_PYTHON),$(SCRAMSTORENAME_LIB),,))
else
$(eval $(call MultipleWarningMsg,PyRecoTrackerDeDx,src/RecoTracker/DeDx/python))
endif
ALL_COMMONRULES += src_RecoTracker_DeDx_python
src_RecoTracker_DeDx_python_INIT_FUNC += $$(eval $$(call CommonProductRules,src_RecoTracker_DeDx_python,src/RecoTracker/DeDx/python,PYTHON))
ALL_SUBSYSTEMS+=Calibration
subdirs_src_Calibration = src_Calibration_HcalAlCaRecoProducers src_Calibration_IsolatedParticles src_Calibration_HcalIsolatedTrackReco src_Calibration_EcalAlCaRecoProducers
ALL_COMMONRULES += src_HLTrigger_HLTanalyzers_test
src_HLTrigger_HLTanalyzers_test_parent := HLTrigger/HLTanalyzers
src_HLTrigger_HLTanalyzers_test_INIT_FUNC += $$(eval $$(call CommonProductRules,src_HLTrigger_HLTanalyzers_test,src/HLTrigger/HLTanalyzers/test,TEST))
ifeq ($(strip $(PyL1TriggerConfiguration)),)
PyL1TriggerConfiguration := self/src/L1Trigger/Configuration/python
src_L1Trigger_Configuration_python_parent := 
ALL_PYTHON_DIRS += $(patsubst src/%,%,src/L1Trigger/Configuration/python)
PyL1TriggerConfiguration_files := $(patsubst src/L1Trigger/Configuration/python/%,%,$(wildcard $(foreach dir,src/L1Trigger/Configuration/python ,$(foreach ext,$(SRC_FILES_SUFFIXES),$(dir)/*.$(ext)))))
PyL1TriggerConfiguration_LOC_USE := self  
PyL1TriggerConfiguration_PACKAGE := self/src/L1Trigger/Configuration/python
ALL_PRODS += PyL1TriggerConfiguration
PyL1TriggerConfiguration_INIT_FUNC        += $$(eval $$(call PythonProduct,PyL1TriggerConfiguration,src/L1Trigger/Configuration/python,src_L1Trigger_Configuration_python,1,1,$(SCRAMSTORENAME_PYTHON),$(SCRAMSTORENAME_LIB),,))
else
$(eval $(call MultipleWarningMsg,PyL1TriggerConfiguration,src/L1Trigger/Configuration/python))
endif
ALL_COMMONRULES += src_L1Trigger_Configuration_python
src_L1Trigger_Configuration_python_INIT_FUNC += $$(eval $$(call CommonProductRules,src_L1Trigger_Configuration_python,src/L1Trigger/Configuration/python,PYTHON))
ifeq ($(strip $(PyHLTriggerOfflineMuon)),)
PyHLTriggerOfflineMuon := self/src/HLTriggerOffline/Muon/python
src_HLTriggerOffline_Muon_python_parent := 
ALL_PYTHON_DIRS += $(patsubst src/%,%,src/HLTriggerOffline/Muon/python)
PyHLTriggerOfflineMuon_files := $(patsubst src/HLTriggerOffline/Muon/python/%,%,$(wildcard $(foreach dir,src/HLTriggerOffline/Muon/python ,$(foreach ext,$(SRC_FILES_SUFFIXES),$(dir)/*.$(ext)))))
PyHLTriggerOfflineMuon_LOC_USE := self  
PyHLTriggerOfflineMuon_PACKAGE := self/src/HLTriggerOffline/Muon/python
ALL_PRODS += PyHLTriggerOfflineMuon
PyHLTriggerOfflineMuon_INIT_FUNC        += $$(eval $$(call PythonProduct,PyHLTriggerOfflineMuon,src/HLTriggerOffline/Muon/python,src_HLTriggerOffline_Muon_python,1,1,$(SCRAMSTORENAME_PYTHON),$(SCRAMSTORENAME_LIB),,))
else
$(eval $(call MultipleWarningMsg,PyHLTriggerOfflineMuon,src/HLTriggerOffline/Muon/python))
endif
ALL_COMMONRULES += src_HLTriggerOffline_Muon_python
src_HLTriggerOffline_Muon_python_INIT_FUNC += $$(eval $$(call CommonProductRules,src_HLTriggerOffline_Muon_python,src/HLTriggerOffline/Muon/python,PYTHON))
ALL_PACKAGES += DataFormats/L1Trigger
subdirs_src_DataFormats_L1Trigger := src_DataFormats_L1Trigger_src
ifeq ($(strip $(PyHLTriggerEgamma)),)
PyHLTriggerEgamma := self/src/HLTrigger/Egamma/python
src_HLTrigger_Egamma_python_parent := 
ALL_PYTHON_DIRS += $(patsubst src/%,%,src/HLTrigger/Egamma/python)
PyHLTriggerEgamma_files := $(patsubst src/HLTrigger/Egamma/python/%,%,$(wildcard $(foreach dir,src/HLTrigger/Egamma/python ,$(foreach ext,$(SRC_FILES_SUFFIXES),$(dir)/*.$(ext)))))
PyHLTriggerEgamma_LOC_USE := self  
PyHLTriggerEgamma_PACKAGE := self/src/HLTrigger/Egamma/python
ALL_PRODS += PyHLTriggerEgamma
PyHLTriggerEgamma_INIT_FUNC        += $$(eval $$(call PythonProduct,PyHLTriggerEgamma,src/HLTrigger/Egamma/python,src_HLTrigger_Egamma_python,1,1,$(SCRAMSTORENAME_PYTHON),$(SCRAMSTORENAME_LIB),,))
else
$(eval $(call MultipleWarningMsg,PyHLTriggerEgamma,src/HLTrigger/Egamma/python))
endif
ALL_COMMONRULES += src_HLTrigger_Egamma_python
src_HLTrigger_Egamma_python_INIT_FUNC += $$(eval $$(call CommonProductRules,src_HLTrigger_Egamma_python,src/HLTrigger/Egamma/python,PYTHON))
ALL_PACKAGES += L1Trigger/L1TNtuples
subdirs_src_L1Trigger_L1TNtuples := src_L1Trigger_L1TNtuples_python src_L1Trigger_L1TNtuples_src src_L1Trigger_L1TNtuples_test src_L1Trigger_L1TNtuples_plugins
ALL_PACKAGES += HLTrigger/HLTfilters
subdirs_src_HLTrigger_HLTfilters := src_HLTrigger_HLTfilters_python src_HLTrigger_HLTfilters_src src_HLTrigger_HLTfilters_test src_HLTrigger_HLTfilters_interface
ALL_PACKAGES += L1Trigger/L1TMuonOverlap
subdirs_src_L1Trigger_L1TMuonOverlap := src_L1Trigger_L1TMuonOverlap_python src_L1Trigger_L1TMuonOverlap_src src_L1Trigger_L1TMuonOverlap_test src_L1Trigger_L1TMuonOverlap_plugins
ALL_PACKAGES += L1Trigger/L1TMuonEndCap
subdirs_src_L1Trigger_L1TMuonEndCap := src_L1Trigger_L1TMuonEndCap_python src_L1Trigger_L1TMuonEndCap_src src_L1Trigger_L1TMuonEndCap_test src_L1Trigger_L1TMuonEndCap_plugins src_L1Trigger_L1TMuonEndCap_interface
ALL_COMMONRULES += src_Calibration_HcalAlCaRecoProducers_test
src_Calibration_HcalAlCaRecoProducers_test_parent := Calibration/HcalAlCaRecoProducers
src_Calibration_HcalAlCaRecoProducers_test_INIT_FUNC += $$(eval $$(call CommonProductRules,src_Calibration_HcalAlCaRecoProducers_test,src/Calibration/HcalAlCaRecoProducers/test,TEST))
ALL_COMMONRULES += src_HLTriggerOffline_HeavyFlavor_test
src_HLTriggerOffline_HeavyFlavor_test_parent := HLTriggerOffline/HeavyFlavor
src_HLTriggerOffline_HeavyFlavor_test_INIT_FUNC += $$(eval $$(call CommonProductRules,src_HLTriggerOffline_HeavyFlavor_test,src/HLTriggerOffline/HeavyFlavor/test,TEST))
ALL_COMMONRULES += src_L1Trigger_L1TNtuples_test
src_L1Trigger_L1TNtuples_test_parent := L1Trigger/L1TNtuples
src_L1Trigger_L1TNtuples_test_INIT_FUNC += $$(eval $$(call CommonProductRules,src_L1Trigger_L1TNtuples_test,src/L1Trigger/L1TNtuples/test,TEST))
ifeq ($(strip $(PyHLTriggerbtau)),)
PyHLTriggerbtau := self/src/HLTrigger/btau/python
src_HLTrigger_btau_python_parent := 
ALL_PYTHON_DIRS += $(patsubst src/%,%,src/HLTrigger/btau/python)
PyHLTriggerbtau_files := $(patsubst src/HLTrigger/btau/python/%,%,$(wildcard $(foreach dir,src/HLTrigger/btau/python ,$(foreach ext,$(SRC_FILES_SUFFIXES),$(dir)/*.$(ext)))))
PyHLTriggerbtau_LOC_USE := self  
PyHLTriggerbtau_PACKAGE := self/src/HLTrigger/btau/python
ALL_PRODS += PyHLTriggerbtau
PyHLTriggerbtau_INIT_FUNC        += $$(eval $$(call PythonProduct,PyHLTriggerbtau,src/HLTrigger/btau/python,src_HLTrigger_btau_python,1,1,$(SCRAMSTORENAME_PYTHON),$(SCRAMSTORENAME_LIB),,))
else
$(eval $(call MultipleWarningMsg,PyHLTriggerbtau,src/HLTrigger/btau/python))
endif
ALL_COMMONRULES += src_HLTrigger_btau_python
src_HLTrigger_btau_python_INIT_FUNC += $$(eval $$(call CommonProductRules,src_HLTrigger_btau_python,src/HLTrigger/btau/python,PYTHON))
ALL_COMMONRULES += src_DQMOffline_Trigger_test
src_DQMOffline_Trigger_test_parent := DQMOffline/Trigger
src_DQMOffline_Trigger_test_INIT_FUNC += $$(eval $$(call CommonProductRules,src_DQMOffline_Trigger_test,src/DQMOffline/Trigger/test,TEST))
ALL_PACKAGES += CondCore/EcalPlugins
subdirs_src_CondCore_EcalPlugins := src_CondCore_EcalPlugins_src src_CondCore_EcalPlugins_test src_CondCore_EcalPlugins_plugins
ifeq ($(strip $(MuEnrichRenormalizer)),)
MuEnrichRenormalizer := self/src/HLTrigger/Muon/test
MuEnrichRenormalizer_files := $(patsubst src/HLTrigger/Muon/test/%,%,$(foreach file,MuEnrichRenormalizer.cc,$(eval xfile:=$(wildcard src/HLTrigger/Muon/test/$(file)))$(if $(xfile),$(xfile),$(warning No such file exists: src/HLTrigger/Muon/test/$(file). Please fix src/HLTrigger/Muon/test/BuildFile.))))
MuEnrichRenormalizer_BuildFile    := $(WORKINGDIR)/cache/bf/src/HLTrigger/Muon/test/BuildFile
MuEnrichRenormalizer_LOC_USE := self  FWCore/Framework FWCore/PluginManager FWCore/ParameterSet DataFormats/Common HLTrigger/HLTcore SimDataFormats/GeneratorProducts DataFormats/RecoCandidate root
MuEnrichRenormalizer_PRE_INIT_FUNC += $$(eval $$(call edmPlugin,MuEnrichRenormalizer,MuEnrichRenormalizer,$(SCRAMSTORENAME_LIB),src/HLTrigger/Muon/test))
MuEnrichRenormalizer_PACKAGE := self/src/HLTrigger/Muon/test
ALL_PRODS += MuEnrichRenormalizer
MuEnrichRenormalizer_INIT_FUNC        += $$(eval $$(call Library,MuEnrichRenormalizer,src/HLTrigger/Muon/test,src_HLTrigger_Muon_test,$(SCRAMSTORENAME_BIN),,$(SCRAMSTORENAME_LIB),$(SCRAMSTORENAME_LOGS)))
MuEnrichRenormalizer_CLASS := TEST_LIBRARY
else
$(eval $(call MultipleWarningMsg,MuEnrichRenormalizer,src/HLTrigger/Muon/test))
endif
ifeq ($(strip $(HLTMuonRateAnalyzerWithWeight)),)
HLTMuonRateAnalyzerWithWeight := self/src/HLTrigger/Muon/test
HLTMuonRateAnalyzerWithWeight_files := $(patsubst src/HLTrigger/Muon/test/%,%,$(foreach file,HLTMuonRateAnalyzerWithWeight.cc,$(eval xfile:=$(wildcard src/HLTrigger/Muon/test/$(file)))$(if $(xfile),$(xfile),$(warning No such file exists: src/HLTrigger/Muon/test/$(file). Please fix src/HLTrigger/Muon/test/BuildFile.))))
HLTMuonRateAnalyzerWithWeight_BuildFile    := $(WORKINGDIR)/cache/bf/src/HLTrigger/Muon/test/BuildFile
HLTMuonRateAnalyzerWithWeight_LOC_USE := self  FWCore/Framework FWCore/PluginManager FWCore/ParameterSet DataFormats/Common HLTrigger/HLTcore SimDataFormats/GeneratorProducts DataFormats/RecoCandidate root
HLTMuonRateAnalyzerWithWeight_PRE_INIT_FUNC += $$(eval $$(call edmPlugin,HLTMuonRateAnalyzerWithWeight,HLTMuonRateAnalyzerWithWeight,$(SCRAMSTORENAME_LIB),src/HLTrigger/Muon/test))
HLTMuonRateAnalyzerWithWeight_PACKAGE := self/src/HLTrigger/Muon/test
ALL_PRODS += HLTMuonRateAnalyzerWithWeight
HLTMuonRateAnalyzerWithWeight_INIT_FUNC        += $$(eval $$(call Library,HLTMuonRateAnalyzerWithWeight,src/HLTrigger/Muon/test,src_HLTrigger_Muon_test,$(SCRAMSTORENAME_BIN),,$(SCRAMSTORENAME_LIB),$(SCRAMSTORENAME_LOGS)))
HLTMuonRateAnalyzerWithWeight_CLASS := TEST_LIBRARY
else
$(eval $(call MultipleWarningMsg,HLTMuonRateAnalyzerWithWeight,src/HLTrigger/Muon/test))
endif
ifeq ($(strip $(HLTMuonRateAnalyzer)),)
HLTMuonRateAnalyzer := self/src/HLTrigger/Muon/test
HLTMuonRateAnalyzer_files := $(patsubst src/HLTrigger/Muon/test/%,%,$(foreach file,HLTMuonRateAnalyzer.cc,$(eval xfile:=$(wildcard src/HLTrigger/Muon/test/$(file)))$(if $(xfile),$(xfile),$(warning No such file exists: src/HLTrigger/Muon/test/$(file). Please fix src/HLTrigger/Muon/test/BuildFile.))))
HLTMuonRateAnalyzer_BuildFile    := $(WORKINGDIR)/cache/bf/src/HLTrigger/Muon/test/BuildFile
HLTMuonRateAnalyzer_LOC_USE := self  FWCore/Framework FWCore/PluginManager FWCore/ParameterSet DataFormats/Common HLTrigger/HLTcore SimDataFormats/GeneratorProducts DataFormats/RecoCandidate root
HLTMuonRateAnalyzer_PRE_INIT_FUNC += $$(eval $$(call edmPlugin,HLTMuonRateAnalyzer,HLTMuonRateAnalyzer,$(SCRAMSTORENAME_LIB),src/HLTrigger/Muon/test))
HLTMuonRateAnalyzer_PACKAGE := self/src/HLTrigger/Muon/test
ALL_PRODS += HLTMuonRateAnalyzer
HLTMuonRateAnalyzer_INIT_FUNC        += $$(eval $$(call Library,HLTMuonRateAnalyzer,src/HLTrigger/Muon/test,src_HLTrigger_Muon_test,$(SCRAMSTORENAME_BIN),,$(SCRAMSTORENAME_LIB),$(SCRAMSTORENAME_LOGS)))
HLTMuonRateAnalyzer_CLASS := TEST_LIBRARY
else
$(eval $(call MultipleWarningMsg,HLTMuonRateAnalyzer,src/HLTrigger/Muon/test))
endif
ifeq ($(strip $(HLTMuonTurnOnAnalyzer)),)
HLTMuonTurnOnAnalyzer := self/src/HLTrigger/Muon/test
HLTMuonTurnOnAnalyzer_files := $(patsubst src/HLTrigger/Muon/test/%,%,$(foreach file,HLTMuonTurnOnAnalyzer.cc,$(eval xfile:=$(wildcard src/HLTrigger/Muon/test/$(file)))$(if $(xfile),$(xfile),$(warning No such file exists: src/HLTrigger/Muon/test/$(file). Please fix src/HLTrigger/Muon/test/BuildFile.))))
HLTMuonTurnOnAnalyzer_BuildFile    := $(WORKINGDIR)/cache/bf/src/HLTrigger/Muon/test/BuildFile
HLTMuonTurnOnAnalyzer_LOC_USE := self  FWCore/Framework FWCore/PluginManager FWCore/ParameterSet DataFormats/Common HLTrigger/HLTcore SimDataFormats/GeneratorProducts DataFormats/RecoCandidate root
HLTMuonTurnOnAnalyzer_PRE_INIT_FUNC += $$(eval $$(call edmPlugin,HLTMuonTurnOnAnalyzer,HLTMuonTurnOnAnalyzer,$(SCRAMSTORENAME_LIB),src/HLTrigger/Muon/test))
HLTMuonTurnOnAnalyzer_PACKAGE := self/src/HLTrigger/Muon/test
ALL_PRODS += HLTMuonTurnOnAnalyzer
HLTMuonTurnOnAnalyzer_INIT_FUNC        += $$(eval $$(call Library,HLTMuonTurnOnAnalyzer,src/HLTrigger/Muon/test,src_HLTrigger_Muon_test,$(SCRAMSTORENAME_BIN),,$(SCRAMSTORENAME_LIB),$(SCRAMSTORENAME_LOGS)))
HLTMuonTurnOnAnalyzer_CLASS := TEST_LIBRARY
else
$(eval $(call MultipleWarningMsg,HLTMuonTurnOnAnalyzer,src/HLTrigger/Muon/test))
endif
ifeq ($(strip $(MuEnrichType1Filter)),)
MuEnrichType1Filter := self/src/HLTrigger/Muon/test
MuEnrichType1Filter_files := $(patsubst src/HLTrigger/Muon/test/%,%,$(foreach file,MuEnrichType1Filter.cc,$(eval xfile:=$(wildcard src/HLTrigger/Muon/test/$(file)))$(if $(xfile),$(xfile),$(warning No such file exists: src/HLTrigger/Muon/test/$(file). Please fix src/HLTrigger/Muon/test/BuildFile.))))
MuEnrichType1Filter_BuildFile    := $(WORKINGDIR)/cache/bf/src/HLTrigger/Muon/test/BuildFile
MuEnrichType1Filter_LOC_USE := self  FWCore/Framework FWCore/PluginManager FWCore/ParameterSet DataFormats/Common HLTrigger/HLTcore SimDataFormats/GeneratorProducts DataFormats/RecoCandidate root
MuEnrichType1Filter_PRE_INIT_FUNC += $$(eval $$(call edmPlugin,MuEnrichType1Filter,MuEnrichType1Filter,$(SCRAMSTORENAME_LIB),src/HLTrigger/Muon/test))
MuEnrichType1Filter_PACKAGE := self/src/HLTrigger/Muon/test
ALL_PRODS += MuEnrichType1Filter
MuEnrichType1Filter_INIT_FUNC        += $$(eval $$(call Library,MuEnrichType1Filter,src/HLTrigger/Muon/test,src_HLTrigger_Muon_test,$(SCRAMSTORENAME_BIN),,$(SCRAMSTORENAME_LIB),$(SCRAMSTORENAME_LOGS)))
MuEnrichType1Filter_CLASS := TEST_LIBRARY
else
$(eval $(call MultipleWarningMsg,MuEnrichType1Filter,src/HLTrigger/Muon/test))
endif
ALL_COMMONRULES += src_HLTrigger_Muon_test
src_HLTrigger_Muon_test_parent := HLTrigger/Muon
src_HLTrigger_Muon_test_INIT_FUNC += $$(eval $$(call CommonProductRules,src_HLTrigger_Muon_test,src/HLTrigger/Muon/test,TEST))
ALL_PACKAGES += L1Trigger/L1TGlobal
subdirs_src_L1Trigger_L1TGlobal := src_L1Trigger_L1TGlobal_scripts src_L1Trigger_L1TGlobal_python src_L1Trigger_L1TGlobal_src src_L1Trigger_L1TGlobal_test src_L1Trigger_L1TGlobal_plugins src_L1Trigger_L1TGlobal_interface src_L1Trigger_L1TGlobal_data src_L1Trigger_L1TGlobal_bin
ifeq ($(strip $(PyCalibrationIsolatedParticles)),)
PyCalibrationIsolatedParticles := self/src/Calibration/IsolatedParticles/python
src_Calibration_IsolatedParticles_python_parent := 
ALL_PYTHON_DIRS += $(patsubst src/%,%,src/Calibration/IsolatedParticles/python)
PyCalibrationIsolatedParticles_files := $(patsubst src/Calibration/IsolatedParticles/python/%,%,$(wildcard $(foreach dir,src/Calibration/IsolatedParticles/python ,$(foreach ext,$(SRC_FILES_SUFFIXES),$(dir)/*.$(ext)))))
PyCalibrationIsolatedParticles_LOC_USE := self  
PyCalibrationIsolatedParticles_PACKAGE := self/src/Calibration/IsolatedParticles/python
ALL_PRODS += PyCalibrationIsolatedParticles
PyCalibrationIsolatedParticles_INIT_FUNC        += $$(eval $$(call PythonProduct,PyCalibrationIsolatedParticles,src/Calibration/IsolatedParticles/python,src_Calibration_IsolatedParticles_python,1,1,$(SCRAMSTORENAME_PYTHON),$(SCRAMSTORENAME_LIB),,))
else
$(eval $(call MultipleWarningMsg,PyCalibrationIsolatedParticles,src/Calibration/IsolatedParticles/python))
endif
ALL_COMMONRULES += src_Calibration_IsolatedParticles_python
src_Calibration_IsolatedParticles_python_INIT_FUNC += $$(eval $$(call CommonProductRules,src_Calibration_IsolatedParticles_python,src/Calibration/IsolatedParticles/python,PYTHON))
ALL_SUBSYSTEMS+=MuonAnalysis
subdirs_src_MuonAnalysis = src_MuonAnalysis_MuonAssociators
ALL_PACKAGES += HLTrigger/HLTanalyzers
subdirs_src_HLTrigger_HLTanalyzers := src_HLTrigger_HLTanalyzers_python src_HLTrigger_HLTanalyzers_src src_HLTrigger_HLTanalyzers_test
ALL_PACKAGES += Calibration/HcalAlCaRecoProducers
subdirs_src_Calibration_HcalAlCaRecoProducers := src_Calibration_HcalAlCaRecoProducers_python src_Calibration_HcalAlCaRecoProducers_src src_Calibration_HcalAlCaRecoProducers_test src_Calibration_HcalAlCaRecoProducers_plugins
ifeq ($(strip $(PyL1TriggerL1TCaloLayer1)),)
PyL1TriggerL1TCaloLayer1 := self/src/L1Trigger/L1TCaloLayer1/python
src_L1Trigger_L1TCaloLayer1_python_parent := 
ALL_PYTHON_DIRS += $(patsubst src/%,%,src/L1Trigger/L1TCaloLayer1/python)
PyL1TriggerL1TCaloLayer1_files := $(patsubst src/L1Trigger/L1TCaloLayer1/python/%,%,$(wildcard $(foreach dir,src/L1Trigger/L1TCaloLayer1/python ,$(foreach ext,$(SRC_FILES_SUFFIXES),$(dir)/*.$(ext)))))
PyL1TriggerL1TCaloLayer1_LOC_USE := self  
PyL1TriggerL1TCaloLayer1_PACKAGE := self/src/L1Trigger/L1TCaloLayer1/python
ALL_PRODS += PyL1TriggerL1TCaloLayer1
PyL1TriggerL1TCaloLayer1_INIT_FUNC        += $$(eval $$(call PythonProduct,PyL1TriggerL1TCaloLayer1,src/L1Trigger/L1TCaloLayer1/python,src_L1Trigger_L1TCaloLayer1_python,1,1,$(SCRAMSTORENAME_PYTHON),$(SCRAMSTORENAME_LIB),,))
else
$(eval $(call MultipleWarningMsg,PyL1TriggerL1TCaloLayer1,src/L1Trigger/L1TCaloLayer1/python))
endif
ALL_COMMONRULES += src_L1Trigger_L1TCaloLayer1_python
src_L1Trigger_L1TCaloLayer1_python_INIT_FUNC += $$(eval $$(call CommonProductRules,src_L1Trigger_L1TCaloLayer1_python,src/L1Trigger/L1TCaloLayer1/python,PYTHON))
ALL_PACKAGES += DQMOffline/Trigger
subdirs_src_DQMOffline_Trigger := src_DQMOffline_Trigger_python src_DQMOffline_Trigger_src src_DQMOffline_Trigger_test src_DQMOffline_Trigger_plugins src_DQMOffline_Trigger_data
ALL_SUBSYSTEMS+=DQMOffline
subdirs_src_DQMOffline = src_DQMOffline_Trigger
ALL_PACKAGES += Calibration/IsolatedParticles
subdirs_src_Calibration_IsolatedParticles := src_Calibration_IsolatedParticles_python src_Calibration_IsolatedParticles_src src_Calibration_IsolatedParticles_test src_Calibration_IsolatedParticles_plugins
ALL_COMMONRULES += src_L1Trigger_L1TMuonBarrel_test
src_L1Trigger_L1TMuonBarrel_test_parent := L1Trigger/L1TMuonBarrel
src_L1Trigger_L1TMuonBarrel_test_INIT_FUNC += $$(eval $$(call CommonProductRules,src_L1Trigger_L1TMuonBarrel_test,src/L1Trigger/L1TMuonBarrel/test,TEST))
ALL_PACKAGES += L1Trigger/L1TCommon
subdirs_src_L1Trigger_L1TCommon := src_L1Trigger_L1TCommon_scripts src_L1Trigger_L1TCommon_python src_L1Trigger_L1TCommon_src src_L1Trigger_L1TCommon_test src_L1Trigger_L1TCommon_plugins src_L1Trigger_L1TCommon_macros
ALL_PACKAGES += QCDAnalysis/UEAnalysis
subdirs_src_QCDAnalysis_UEAnalysis := src_QCDAnalysis_UEAnalysis_python src_QCDAnalysis_UEAnalysis_src
ifeq ($(strip $(testUCTUnpacker)),)
testUCTUnpacker_files := $(patsubst src/EventFilter/L1TXRawToDigi/test/%,%,$(foreach file,testUCTUnpacker.cpp,$(eval xfile:=$(wildcard src/EventFilter/L1TXRawToDigi/test/$(file)))$(if $(xfile),$(xfile),$(warning No such file exists: src/EventFilter/L1TXRawToDigi/test/$(file). Please fix src/EventFilter/L1TXRawToDigi/test/BuildFile.))))
testUCTUnpacker := self/src/EventFilter/L1TXRawToDigi/test
testUCTUnpacker_TEST_RUNNER_CMD :=  testUCTUnpacker 
testUCTUnpacker_BuildFile    := $(WORKINGDIR)/cache/bf/src/EventFilter/L1TXRawToDigi/test/BuildFile
testUCTUnpacker_LOC_USE := self  FWCore/Framework FWCore/ParameterSet FWCore/PluginManager FWCore/MessageLogger DataFormats/FEDRawData EventFilter/L1TXRawToDigi
testUCTUnpacker_PACKAGE := self/src/EventFilter/L1TXRawToDigi/test
ALL_PRODS += testUCTUnpacker
testUCTUnpacker_INIT_FUNC        += $$(eval $$(call Binary,testUCTUnpacker,src/EventFilter/L1TXRawToDigi/test,src_EventFilter_L1TXRawToDigi_test,$(SCRAMSTORENAME_BIN),,$(SCRAMSTORENAME_TEST),test,$(SCRAMSTORENAME_LOGS)))
testUCTUnpacker_CLASS := TEST
else
$(eval $(call MultipleWarningMsg,testUCTUnpacker,src/EventFilter/L1TXRawToDigi/test))
endif
ALL_COMMONRULES += src_EventFilter_L1TXRawToDigi_test
src_EventFilter_L1TXRawToDigi_test_parent := EventFilter/L1TXRawToDigi
src_EventFilter_L1TXRawToDigi_test_INIT_FUNC += $$(eval $$(call CommonProductRules,src_EventFilter_L1TXRawToDigi_test,src/EventFilter/L1TXRawToDigi/test,TEST))
ALL_PACKAGES += DQM/L1TMonitor
subdirs_src_DQM_L1TMonitor := src_DQM_L1TMonitor_python src_DQM_L1TMonitor_src src_DQM_L1TMonitor_test
ALL_COMMONRULES += src_L1Trigger_HardwareValidation_test
src_L1Trigger_HardwareValidation_test_parent := L1Trigger/HardwareValidation
src_L1Trigger_HardwareValidation_test_INIT_FUNC += $$(eval $$(call CommonProductRules,src_L1Trigger_HardwareValidation_test,src/L1Trigger/HardwareValidation/test,TEST))
ifeq ($(strip $(PyHLTriggerHLTanalyzers)),)
PyHLTriggerHLTanalyzers := self/src/HLTrigger/HLTanalyzers/python
src_HLTrigger_HLTanalyzers_python_parent := 
ALL_PYTHON_DIRS += $(patsubst src/%,%,src/HLTrigger/HLTanalyzers/python)
PyHLTriggerHLTanalyzers_files := $(patsubst src/HLTrigger/HLTanalyzers/python/%,%,$(wildcard $(foreach dir,src/HLTrigger/HLTanalyzers/python ,$(foreach ext,$(SRC_FILES_SUFFIXES),$(dir)/*.$(ext)))))
PyHLTriggerHLTanalyzers_LOC_USE := self  
PyHLTriggerHLTanalyzers_PACKAGE := self/src/HLTrigger/HLTanalyzers/python
ALL_PRODS += PyHLTriggerHLTanalyzers
PyHLTriggerHLTanalyzers_INIT_FUNC        += $$(eval $$(call PythonProduct,PyHLTriggerHLTanalyzers,src/HLTrigger/HLTanalyzers/python,src_HLTrigger_HLTanalyzers_python,1,1,$(SCRAMSTORENAME_PYTHON),$(SCRAMSTORENAME_LIB),,))
else
$(eval $(call MultipleWarningMsg,PyHLTriggerHLTanalyzers,src/HLTrigger/HLTanalyzers/python))
endif
ALL_COMMONRULES += src_HLTrigger_HLTanalyzers_python
src_HLTrigger_HLTanalyzers_python_INIT_FUNC += $$(eval $$(call CommonProductRules,src_HLTrigger_HLTanalyzers_python,src/HLTrigger/HLTanalyzers/python,PYTHON))
ALL_PACKAGES += DataFormats/L1TMuon
subdirs_src_DataFormats_L1TMuon := src_DataFormats_L1TMuon_src
ALL_SUBSYSTEMS+=RecoTracker
subdirs_src_RecoTracker = src_RecoTracker_DeDx
ALL_COMMONRULES += src_DQM_L1TMonitor_test
src_DQM_L1TMonitor_test_parent := DQM/L1TMonitor
src_DQM_L1TMonitor_test_INIT_FUNC += $$(eval $$(call CommonProductRules,src_DQM_L1TMonitor_test,src/DQM/L1TMonitor/test,TEST))
ifeq ($(strip $(PyEventFilterL1TXRawToDigi)),)
PyEventFilterL1TXRawToDigi := self/src/EventFilter/L1TXRawToDigi/python
src_EventFilter_L1TXRawToDigi_python_parent := 
ALL_PYTHON_DIRS += $(patsubst src/%,%,src/EventFilter/L1TXRawToDigi/python)
PyEventFilterL1TXRawToDigi_files := $(patsubst src/EventFilter/L1TXRawToDigi/python/%,%,$(wildcard $(foreach dir,src/EventFilter/L1TXRawToDigi/python ,$(foreach ext,$(SRC_FILES_SUFFIXES),$(dir)/*.$(ext)))))
PyEventFilterL1TXRawToDigi_LOC_USE := self  
PyEventFilterL1TXRawToDigi_PACKAGE := self/src/EventFilter/L1TXRawToDigi/python
ALL_PRODS += PyEventFilterL1TXRawToDigi
PyEventFilterL1TXRawToDigi_INIT_FUNC        += $$(eval $$(call PythonProduct,PyEventFilterL1TXRawToDigi,src/EventFilter/L1TXRawToDigi/python,src_EventFilter_L1TXRawToDigi_python,1,1,$(SCRAMSTORENAME_PYTHON),$(SCRAMSTORENAME_LIB),,))
else
$(eval $(call MultipleWarningMsg,PyEventFilterL1TXRawToDigi,src/EventFilter/L1TXRawToDigi/python))
endif
ALL_COMMONRULES += src_EventFilter_L1TXRawToDigi_python
src_EventFilter_L1TXRawToDigi_python_INIT_FUNC += $$(eval $$(call CommonProductRules,src_EventFilter_L1TXRawToDigi_python,src/EventFilter/L1TXRawToDigi/python,PYTHON))
ifeq ($(strip $(PyCalibrationEcalAlCaRecoProducers)),)
PyCalibrationEcalAlCaRecoProducers := self/src/Calibration/EcalAlCaRecoProducers/python
src_Calibration_EcalAlCaRecoProducers_python_parent := 
ALL_PYTHON_DIRS += $(patsubst src/%,%,src/Calibration/EcalAlCaRecoProducers/python)
PyCalibrationEcalAlCaRecoProducers_files := $(patsubst src/Calibration/EcalAlCaRecoProducers/python/%,%,$(wildcard $(foreach dir,src/Calibration/EcalAlCaRecoProducers/python ,$(foreach ext,$(SRC_FILES_SUFFIXES),$(dir)/*.$(ext)))))
PyCalibrationEcalAlCaRecoProducers_LOC_USE := self  
PyCalibrationEcalAlCaRecoProducers_PACKAGE := self/src/Calibration/EcalAlCaRecoProducers/python
ALL_PRODS += PyCalibrationEcalAlCaRecoProducers
PyCalibrationEcalAlCaRecoProducers_INIT_FUNC        += $$(eval $$(call PythonProduct,PyCalibrationEcalAlCaRecoProducers,src/Calibration/EcalAlCaRecoProducers/python,src_Calibration_EcalAlCaRecoProducers_python,1,1,$(SCRAMSTORENAME_PYTHON),$(SCRAMSTORENAME_LIB),,))
else
$(eval $(call MultipleWarningMsg,PyCalibrationEcalAlCaRecoProducers,src/Calibration/EcalAlCaRecoProducers/python))
endif
ALL_COMMONRULES += src_Calibration_EcalAlCaRecoProducers_python
src_Calibration_EcalAlCaRecoProducers_python_INIT_FUNC += $$(eval $$(call CommonProductRules,src_Calibration_EcalAlCaRecoProducers_python,src/Calibration/EcalAlCaRecoProducers/python,PYTHON))
ifeq ($(strip $(PyHLTriggerOfflineHiggs)),)
PyHLTriggerOfflineHiggs := self/src/HLTriggerOffline/Higgs/python
src_HLTriggerOffline_Higgs_python_parent := 
ALL_PYTHON_DIRS += $(patsubst src/%,%,src/HLTriggerOffline/Higgs/python)
PyHLTriggerOfflineHiggs_files := $(patsubst src/HLTriggerOffline/Higgs/python/%,%,$(wildcard $(foreach dir,src/HLTriggerOffline/Higgs/python ,$(foreach ext,$(SRC_FILES_SUFFIXES),$(dir)/*.$(ext)))))
PyHLTriggerOfflineHiggs_LOC_USE := self  
PyHLTriggerOfflineHiggs_PACKAGE := self/src/HLTriggerOffline/Higgs/python
ALL_PRODS += PyHLTriggerOfflineHiggs
PyHLTriggerOfflineHiggs_INIT_FUNC        += $$(eval $$(call PythonProduct,PyHLTriggerOfflineHiggs,src/HLTriggerOffline/Higgs/python,src_HLTriggerOffline_Higgs_python,1,1,$(SCRAMSTORENAME_PYTHON),$(SCRAMSTORENAME_LIB),,))
else
$(eval $(call MultipleWarningMsg,PyHLTriggerOfflineHiggs,src/HLTriggerOffline/Higgs/python))
endif
ALL_COMMONRULES += src_HLTriggerOffline_Higgs_python
src_HLTriggerOffline_Higgs_python_INIT_FUNC += $$(eval $$(call CommonProductRules,src_HLTriggerOffline_Higgs_python,src/HLTriggerOffline/Higgs/python,PYTHON))
ALL_PACKAGES += Calibration/HcalIsolatedTrackReco
subdirs_src_Calibration_HcalIsolatedTrackReco := src_Calibration_HcalIsolatedTrackReco_python src_Calibration_HcalIsolatedTrackReco_src src_Calibration_HcalIsolatedTrackReco_interface
ALL_PACKAGES += DPGAnalysis/Skims
subdirs_src_DPGAnalysis_Skims := src_DPGAnalysis_Skims_python src_DPGAnalysis_Skims_src src_DPGAnalysis_Skims_interface src_DPGAnalysis_Skims_data
ALL_COMMONRULES += src_L1Trigger_L1TMuon_test
src_L1Trigger_L1TMuon_test_parent := L1Trigger/L1TMuon
src_L1Trigger_L1TMuon_test_INIT_FUNC += $$(eval $$(call CommonProductRules,src_L1Trigger_L1TMuon_test,src/L1Trigger/L1TMuon/test,TEST))
ALL_PACKAGES += L1Trigger/L1TMuonBarrel
subdirs_src_L1Trigger_L1TMuonBarrel := src_L1Trigger_L1TMuonBarrel_python src_L1Trigger_L1TMuonBarrel_src src_L1Trigger_L1TMuonBarrel_test src_L1Trigger_L1TMuonBarrel_plugins src_L1Trigger_L1TMuonBarrel_interface
ALL_PACKAGES += DataFormats/L1TGlobal
subdirs_src_DataFormats_L1TGlobal := src_DataFormats_L1TGlobal_src
ALL_PACKAGES += HLTrigger/btau
subdirs_src_HLTrigger_btau := src_HLTrigger_btau_python src_HLTrigger_btau_src
ALL_COMMONRULES += src_MuonAnalysis_MuonAssociators_test
src_MuonAnalysis_MuonAssociators_test_parent := MuonAnalysis/MuonAssociators
src_MuonAnalysis_MuonAssociators_test_INIT_FUNC += $$(eval $$(call CommonProductRules,src_MuonAnalysis_MuonAssociators_test,src/MuonAnalysis/MuonAssociators/test,TEST))
ALL_PACKAGES += CondCore/SiStripPlugins
subdirs_src_CondCore_SiStripPlugins := src_CondCore_SiStripPlugins_src src_CondCore_SiStripPlugins_plugins
ALL_SUBSYSTEMS+=DQM
subdirs_src_DQM = src_DQM_L1TMonitor src_DQM_Physics
ifeq ($(strip $(PyL1TriggerL1TCalorimeter)),)
PyL1TriggerL1TCalorimeter := self/src/L1Trigger/L1TCalorimeter/python
src_L1Trigger_L1TCalorimeter_python_parent := 
ALL_PYTHON_DIRS += $(patsubst src/%,%,src/L1Trigger/L1TCalorimeter/python)
PyL1TriggerL1TCalorimeter_files := $(patsubst src/L1Trigger/L1TCalorimeter/python/%,%,$(wildcard $(foreach dir,src/L1Trigger/L1TCalorimeter/python ,$(foreach ext,$(SRC_FILES_SUFFIXES),$(dir)/*.$(ext)))))
PyL1TriggerL1TCalorimeter_LOC_USE := self  
PyL1TriggerL1TCalorimeter_PACKAGE := self/src/L1Trigger/L1TCalorimeter/python
ALL_PRODS += PyL1TriggerL1TCalorimeter
PyL1TriggerL1TCalorimeter_INIT_FUNC        += $$(eval $$(call PythonProduct,PyL1TriggerL1TCalorimeter,src/L1Trigger/L1TCalorimeter/python,src_L1Trigger_L1TCalorimeter_python,1,1,$(SCRAMSTORENAME_PYTHON),$(SCRAMSTORENAME_LIB),,))
else
$(eval $(call MultipleWarningMsg,PyL1TriggerL1TCalorimeter,src/L1Trigger/L1TCalorimeter/python))
endif
ALL_COMMONRULES += src_L1Trigger_L1TCalorimeter_python
src_L1Trigger_L1TCalorimeter_python_INIT_FUNC += $$(eval $$(call CommonProductRules,src_L1Trigger_L1TCalorimeter_python,src/L1Trigger/L1TCalorimeter/python,PYTHON))
ifeq ($(strip $(PyL1TriggerL1TCommon)),)
PyL1TriggerL1TCommon := self/src/L1Trigger/L1TCommon/python
src_L1Trigger_L1TCommon_python_parent := 
ALL_PYTHON_DIRS += $(patsubst src/%,%,src/L1Trigger/L1TCommon/python)
PyL1TriggerL1TCommon_files := $(patsubst src/L1Trigger/L1TCommon/python/%,%,$(wildcard $(foreach dir,src/L1Trigger/L1TCommon/python ,$(foreach ext,$(SRC_FILES_SUFFIXES),$(dir)/*.$(ext)))))
PyL1TriggerL1TCommon_LOC_USE := self  
PyL1TriggerL1TCommon_PACKAGE := self/src/L1Trigger/L1TCommon/python
ALL_PRODS += PyL1TriggerL1TCommon
PyL1TriggerL1TCommon_INIT_FUNC        += $$(eval $$(call PythonProduct,PyL1TriggerL1TCommon,src/L1Trigger/L1TCommon/python,src_L1Trigger_L1TCommon_python,1,1,$(SCRAMSTORENAME_PYTHON),$(SCRAMSTORENAME_LIB),,))
else
$(eval $(call MultipleWarningMsg,PyL1TriggerL1TCommon,src/L1Trigger/L1TCommon/python))
endif
ALL_COMMONRULES += src_L1Trigger_L1TCommon_python
src_L1Trigger_L1TCommon_python_INIT_FUNC += $$(eval $$(call CommonProductRules,src_L1Trigger_L1TCommon_python,src/L1Trigger/L1TCommon/python,PYTHON))
ALL_PACKAGES += EventFilter/CSCTFRawToDigi
subdirs_src_EventFilter_CSCTFRawToDigi := src_EventFilter_CSCTFRawToDigi_python src_EventFilter_CSCTFRawToDigi_src src_EventFilter_CSCTFRawToDigi_test src_EventFilter_CSCTFRawToDigi_plugins src_EventFilter_CSCTFRawToDigi_interface src_EventFilter_CSCTFRawToDigi_doc
ifeq ($(strip $(readTestVector)),)
readTestVector_files := $(patsubst src/L1Trigger/L1TGlobal/bin/%,%,$(foreach file,readTestVector.cc,$(eval xfile:=$(wildcard src/L1Trigger/L1TGlobal/bin/$(file)))$(if $(xfile),$(xfile),$(warning No such file exists: src/L1Trigger/L1TGlobal/bin/$(file). Please fix src/L1Trigger/L1TGlobal/bin/BuildFile.))))
readTestVector := self/src/L1Trigger/L1TGlobal/bin
readTestVector_BuildFile    := $(WORKINGDIR)/cache/bf/src/L1Trigger/L1TGlobal/bin/BuildFile
readTestVector_LOC_USE := self  xerces-c L1Trigger/L1TGlobal boost_program_options root
readTestVector_PACKAGE := self/src/L1Trigger/L1TGlobal/bin
ALL_PRODS += readTestVector
readTestVector_INIT_FUNC        += $$(eval $$(call Binary,readTestVector,src/L1Trigger/L1TGlobal/bin,src_L1Trigger_L1TGlobal_bin,$(SCRAMSTORENAME_BIN),,$(SCRAMSTORENAME_BIN),bin,$(SCRAMSTORENAME_LOGS)))
readTestVector_CLASS := BINARY
else
$(eval $(call MultipleWarningMsg,readTestVector,src/L1Trigger/L1TGlobal/bin))
endif
ALL_COMMONRULES += src_L1Trigger_L1TGlobal_bin
src_L1Trigger_L1TGlobal_bin_parent := L1Trigger/L1TGlobal
src_L1Trigger_L1TGlobal_bin_INIT_FUNC += $$(eval $$(call CommonProductRules,src_L1Trigger_L1TGlobal_bin,src/L1Trigger/L1TGlobal/bin,BINARY))
ifeq ($(strip $(PyDQMPhysics)),)
PyDQMPhysics := self/src/DQM/Physics/python
src_DQM_Physics_python_parent := 
ALL_PYTHON_DIRS += $(patsubst src/%,%,src/DQM/Physics/python)
PyDQMPhysics_files := $(patsubst src/DQM/Physics/python/%,%,$(wildcard $(foreach dir,src/DQM/Physics/python ,$(foreach ext,$(SRC_FILES_SUFFIXES),$(dir)/*.$(ext)))))
PyDQMPhysics_LOC_USE := self  
PyDQMPhysics_PACKAGE := self/src/DQM/Physics/python
ALL_PRODS += PyDQMPhysics
PyDQMPhysics_INIT_FUNC        += $$(eval $$(call PythonProduct,PyDQMPhysics,src/DQM/Physics/python,src_DQM_Physics_python,1,1,$(SCRAMSTORENAME_PYTHON),$(SCRAMSTORENAME_LIB),,))
else
$(eval $(call MultipleWarningMsg,PyDQMPhysics,src/DQM/Physics/python))
endif
ALL_COMMONRULES += src_DQM_Physics_python
src_DQM_Physics_python_INIT_FUNC += $$(eval $$(call CommonProductRules,src_DQM_Physics_python,src/DQM/Physics/python,PYTHON))
src_CondCore_Utilities_scripts_files := $(filter-out \#% %\#,$(notdir $(wildcard $(foreach dir,$(LOCALTOP)/src/CondCore/Utilities/scripts,$(dir)/*))))
$(eval $(call Src2StoreCopy,src_CondCore_Utilities_scripts,src/CondCore/Utilities/scripts,$(SCRAMSTORENAME_BIN),*))
ifeq ($(strip $(PyDQML1TMonitor)),)
PyDQML1TMonitor := self/src/DQM/L1TMonitor/python
src_DQM_L1TMonitor_python_parent := 
ALL_PYTHON_DIRS += $(patsubst src/%,%,src/DQM/L1TMonitor/python)
PyDQML1TMonitor_files := $(patsubst src/DQM/L1TMonitor/python/%,%,$(wildcard $(foreach dir,src/DQM/L1TMonitor/python ,$(foreach ext,$(SRC_FILES_SUFFIXES),$(dir)/*.$(ext)))))
PyDQML1TMonitor_LOC_USE := self  
PyDQML1TMonitor_PACKAGE := self/src/DQM/L1TMonitor/python
ALL_PRODS += PyDQML1TMonitor
PyDQML1TMonitor_INIT_FUNC        += $$(eval $$(call PythonProduct,PyDQML1TMonitor,src/DQM/L1TMonitor/python,src_DQM_L1TMonitor_python,1,1,$(SCRAMSTORENAME_PYTHON),$(SCRAMSTORENAME_LIB),,))
else
$(eval $(call MultipleWarningMsg,PyDQML1TMonitor,src/DQM/L1TMonitor/python))
endif
ALL_COMMONRULES += src_DQM_L1TMonitor_python
src_DQM_L1TMonitor_python_INIT_FUNC += $$(eval $$(call CommonProductRules,src_DQM_L1TMonitor_python,src/DQM/L1TMonitor/python,PYTHON))
ALL_PACKAGES += RecoTracker/DeDx
subdirs_src_RecoTracker_DeDx := src_RecoTracker_DeDx_python src_RecoTracker_DeDx_src src_RecoTracker_DeDx_plugins
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
ALL_PACKAGES += CondFormats/L1TObjects
subdirs_src_CondFormats_L1TObjects := src_CondFormats_L1TObjects_src src_CondFormats_L1TObjects_test src_CondFormats_L1TObjects_interface src_CondFormats_L1TObjects_doc
src_L1Trigger_L1TGlobal_scripts_files := $(filter-out \#% %\#,$(notdir $(wildcard $(foreach dir,$(LOCALTOP)/src/L1Trigger/L1TGlobal/scripts,$(dir)/*))))
$(eval $(call Src2StoreCopy,src_L1Trigger_L1TGlobal_scripts,src/L1Trigger/L1TGlobal/scripts,$(SCRAMSTORENAME_BIN),*))
ifeq ($(strip $(testCSCTFRawToDigi)),)
testCSCTFRawToDigi_files := $(patsubst src/EventFilter/CSCTFRawToDigi/test/%,%,$(foreach file,testCSCTFRawToDigi.cpp,$(eval xfile:=$(wildcard src/EventFilter/CSCTFRawToDigi/test/$(file)))$(if $(xfile),$(xfile),$(warning No such file exists: src/EventFilter/CSCTFRawToDigi/test/$(file). Please fix src/EventFilter/CSCTFRawToDigi/test/BuildFile.))))
testCSCTFRawToDigi := self/src/EventFilter/CSCTFRawToDigi/test
testCSCTFRawToDigi_TEST_RUNNER_CMD :=  testCSCTFRawToDigi 
testCSCTFRawToDigi_BuildFile    := $(WORKINGDIR)/cache/bf/src/EventFilter/CSCTFRawToDigi/test/BuildFile
testCSCTFRawToDigi_LOC_USE := self  FWCore/Framework FWCore/Utilities FWCore/PluginManager cppunit
testCSCTFRawToDigi_PACKAGE := self/src/EventFilter/CSCTFRawToDigi/test
ALL_PRODS += testCSCTFRawToDigi
testCSCTFRawToDigi_INIT_FUNC        += $$(eval $$(call Binary,testCSCTFRawToDigi,src/EventFilter/CSCTFRawToDigi/test,src_EventFilter_CSCTFRawToDigi_test,$(SCRAMSTORENAME_BIN),,$(SCRAMSTORENAME_TEST),test,$(SCRAMSTORENAME_LOGS)))
testCSCTFRawToDigi_CLASS := TEST
else
$(eval $(call MultipleWarningMsg,testCSCTFRawToDigi,src/EventFilter/CSCTFRawToDigi/test))
endif
ifeq ($(strip $(EventFilterCSCTFSingleGen_test)),)
EventFilterCSCTFSingleGen_test := self/src/EventFilter/CSCTFRawToDigi/test
EventFilterCSCTFSingleGen_test_files := $(patsubst src/EventFilter/CSCTFRawToDigi/test/%,%,$(foreach file,CSCTFSingleGen.cc,$(eval xfile:=$(wildcard src/EventFilter/CSCTFRawToDigi/test/$(file)))$(if $(xfile),$(xfile),$(warning No such file exists: src/EventFilter/CSCTFRawToDigi/test/$(file). Please fix src/EventFilter/CSCTFRawToDigi/test/BuildFile.))))
EventFilterCSCTFSingleGen_test_BuildFile    := $(WORKINGDIR)/cache/bf/src/EventFilter/CSCTFRawToDigi/test/BuildFile
EventFilterCSCTFSingleGen_test_LOC_USE := self  FWCore/Framework FWCore/Utilities FWCore/PluginManager DataFormats/CSCDigi DataFormats/MuonDetId DataFormats/L1CSCTrackFinder CondFormats/CSCObjects
EventFilterCSCTFSingleGen_test_PRE_INIT_FUNC += $$(eval $$(call edmPlugin,EventFilterCSCTFSingleGen_test,EventFilterCSCTFSingleGen_test,$(SCRAMSTORENAME_LIB),src/EventFilter/CSCTFRawToDigi/test))
EventFilterCSCTFSingleGen_test_PACKAGE := self/src/EventFilter/CSCTFRawToDigi/test
ALL_PRODS += EventFilterCSCTFSingleGen_test
EventFilterCSCTFSingleGen_test_INIT_FUNC        += $$(eval $$(call Library,EventFilterCSCTFSingleGen_test,src/EventFilter/CSCTFRawToDigi/test,src_EventFilter_CSCTFRawToDigi_test,$(SCRAMSTORENAME_BIN),,$(SCRAMSTORENAME_LIB),$(SCRAMSTORENAME_LOGS)))
EventFilterCSCTFSingleGen_test_CLASS := TEST_LIBRARY
else
$(eval $(call MultipleWarningMsg,EventFilterCSCTFSingleGen_test,src/EventFilter/CSCTFRawToDigi/test))
endif
ALL_COMMONRULES += src_EventFilter_CSCTFRawToDigi_test
src_EventFilter_CSCTFRawToDigi_test_parent := EventFilter/CSCTFRawToDigi
src_EventFilter_CSCTFRawToDigi_test_INIT_FUNC += $$(eval $$(call CommonProductRules,src_EventFilter_CSCTFRawToDigi_test,src/EventFilter/CSCTFRawToDigi/test,TEST))
ALL_COMMONRULES += src_L1Trigger_L1TMuonOverlap_test
src_L1Trigger_L1TMuonOverlap_test_parent := L1Trigger/L1TMuonOverlap
src_L1Trigger_L1TMuonOverlap_test_INIT_FUNC += $$(eval $$(call CommonProductRules,src_L1Trigger_L1TMuonOverlap_test,src/L1Trigger/L1TMuonOverlap/test,TEST))
ifeq ($(strip $(testUCTLayer1)),)
testUCTLayer1_files := $(patsubst src/L1Trigger/L1TCaloLayer1/test/%,%,$(foreach file,testUCTLayer1.cpp,$(eval xfile:=$(wildcard src/L1Trigger/L1TCaloLayer1/test/$(file)))$(if $(xfile),$(xfile),$(warning No such file exists: src/L1Trigger/L1TCaloLayer1/test/$(file). Please fix src/L1Trigger/L1TCaloLayer1/test/BuildFile.))))
testUCTLayer1 := self/src/L1Trigger/L1TCaloLayer1/test
testUCTLayer1_TEST_RUNNER_CMD :=  testUCTLayer1 
testUCTLayer1_BuildFile    := $(WORKINGDIR)/cache/bf/src/L1Trigger/L1TCaloLayer1/test/BuildFile
testUCTLayer1_LOC_USE := self  L1Trigger/L1TCaloLayer1
testUCTLayer1_PACKAGE := self/src/L1Trigger/L1TCaloLayer1/test
ALL_PRODS += testUCTLayer1
testUCTLayer1_INIT_FUNC        += $$(eval $$(call Binary,testUCTLayer1,src/L1Trigger/L1TCaloLayer1/test,src_L1Trigger_L1TCaloLayer1_test,$(SCRAMSTORENAME_BIN),,$(SCRAMSTORENAME_TEST),test,$(SCRAMSTORENAME_LOGS)))
testUCTLayer1_CLASS := TEST
else
$(eval $(call MultipleWarningMsg,testUCTLayer1,src/L1Trigger/L1TCaloLayer1/test))
endif
ifeq ($(strip $(testUCTGeometry)),)
testUCTGeometry_files := $(patsubst src/L1Trigger/L1TCaloLayer1/test/%,%,$(foreach file,testUCTGeometry.cpp,$(eval xfile:=$(wildcard src/L1Trigger/L1TCaloLayer1/test/$(file)))$(if $(xfile),$(xfile),$(warning No such file exists: src/L1Trigger/L1TCaloLayer1/test/$(file). Please fix src/L1Trigger/L1TCaloLayer1/test/BuildFile.))))
testUCTGeometry := self/src/L1Trigger/L1TCaloLayer1/test
testUCTGeometry_TEST_RUNNER_CMD :=  testUCTGeometry 
testUCTGeometry_BuildFile    := $(WORKINGDIR)/cache/bf/src/L1Trigger/L1TCaloLayer1/test/BuildFile
testUCTGeometry_LOC_USE := self  L1Trigger/L1TCaloLayer1
testUCTGeometry_PACKAGE := self/src/L1Trigger/L1TCaloLayer1/test
ALL_PRODS += testUCTGeometry
testUCTGeometry_INIT_FUNC        += $$(eval $$(call Binary,testUCTGeometry,src/L1Trigger/L1TCaloLayer1/test,src_L1Trigger_L1TCaloLayer1_test,$(SCRAMSTORENAME_BIN),,$(SCRAMSTORENAME_TEST),test,$(SCRAMSTORENAME_LOGS)))
testUCTGeometry_CLASS := TEST
else
$(eval $(call MultipleWarningMsg,testUCTGeometry,src/L1Trigger/L1TCaloLayer1/test))
endif
ifeq ($(strip $(testUCTLayer1HF)),)
testUCTLayer1HF_files := $(patsubst src/L1Trigger/L1TCaloLayer1/test/%,%,$(foreach file,testUCTLayer1HF.cpp,$(eval xfile:=$(wildcard src/L1Trigger/L1TCaloLayer1/test/$(file)))$(if $(xfile),$(xfile),$(warning No such file exists: src/L1Trigger/L1TCaloLayer1/test/$(file). Please fix src/L1Trigger/L1TCaloLayer1/test/BuildFile.))))
testUCTLayer1HF := self/src/L1Trigger/L1TCaloLayer1/test
testUCTLayer1HF_TEST_RUNNER_CMD :=  testUCTLayer1HF 
testUCTLayer1HF_BuildFile    := $(WORKINGDIR)/cache/bf/src/L1Trigger/L1TCaloLayer1/test/BuildFile
testUCTLayer1HF_LOC_USE := self  L1Trigger/L1TCaloLayer1
testUCTLayer1HF_PACKAGE := self/src/L1Trigger/L1TCaloLayer1/test
ALL_PRODS += testUCTLayer1HF
testUCTLayer1HF_INIT_FUNC        += $$(eval $$(call Binary,testUCTLayer1HF,src/L1Trigger/L1TCaloLayer1/test,src_L1Trigger_L1TCaloLayer1_test,$(SCRAMSTORENAME_BIN),,$(SCRAMSTORENAME_TEST),test,$(SCRAMSTORENAME_LOGS)))
testUCTLayer1HF_CLASS := TEST
else
$(eval $(call MultipleWarningMsg,testUCTLayer1HF,src/L1Trigger/L1TCaloLayer1/test))
endif
ALL_COMMONRULES += src_L1Trigger_L1TCaloLayer1_test
src_L1Trigger_L1TCaloLayer1_test_parent := L1Trigger/L1TCaloLayer1
src_L1Trigger_L1TCaloLayer1_test_INIT_FUNC += $$(eval $$(call CommonProductRules,src_L1Trigger_L1TCaloLayer1_test,src/L1Trigger/L1TCaloLayer1/test,TEST))
ifeq ($(strip $(testBasicPayload)),)
testBasicPayload_files := $(patsubst src/CondCore/Utilities/test/%,%,$(foreach file,testBasicPayload.cpp,$(eval xfile:=$(wildcard src/CondCore/Utilities/test/$(file)))$(if $(xfile),$(xfile),$(warning No such file exists: src/CondCore/Utilities/test/$(file). Please fix src/CondCore/Utilities/test/BuildFile.))))
testBasicPayload := self/src/CondCore/Utilities/test
testBasicPayload_TEST_RUNNER_CMD :=  testBasicPayload 
testBasicPayload_BuildFile    := $(WORKINGDIR)/cache/bf/src/CondCore/Utilities/test/BuildFile
testBasicPayload_LOC_USE := self  CondCore/CondDB CondFormats/Common FWCore/PluginManager FWCore/Utilities
testBasicPayload_PACKAGE := self/src/CondCore/Utilities/test
ALL_PRODS += testBasicPayload
testBasicPayload_INIT_FUNC        += $$(eval $$(call Binary,testBasicPayload,src/CondCore/Utilities/test,src_CondCore_Utilities_test,$(SCRAMSTORENAME_BIN),,$(SCRAMSTORENAME_TEST),test,$(SCRAMSTORENAME_LOGS)))
testBasicPayload_CLASS := TEST
else
$(eval $(call MultipleWarningMsg,testBasicPayload,src/CondCore/Utilities/test))
endif
ALL_COMMONRULES += src_CondCore_Utilities_test
src_CondCore_Utilities_test_parent := CondCore/Utilities
src_CondCore_Utilities_test_INIT_FUNC += $$(eval $$(call CommonProductRules,src_CondCore_Utilities_test,src/CondCore/Utilities/test,TEST))
ALL_COMMONRULES += src_HLTriggerOffline_SUSYBSM_test
src_HLTriggerOffline_SUSYBSM_test_parent := HLTriggerOffline/SUSYBSM
src_HLTriggerOffline_SUSYBSM_test_INIT_FUNC += $$(eval $$(call CommonProductRules,src_HLTriggerOffline_SUSYBSM_test,src/HLTriggerOffline/SUSYBSM/test,TEST))
ALL_COMMONRULES += src_L1Trigger_L1TCommon_test
src_L1Trigger_L1TCommon_test_parent := L1Trigger/L1TCommon
src_L1Trigger_L1TCommon_test_INIT_FUNC += $$(eval $$(call CommonProductRules,src_L1Trigger_L1TCommon_test,src/L1Trigger/L1TCommon/test,TEST))
ALL_SUBSYSTEMS+=CondCore
subdirs_src_CondCore = src_CondCore_Utilities src_CondCore_L1TPlugins src_CondCore_SiStripPlugins src_CondCore_EcalPlugins
