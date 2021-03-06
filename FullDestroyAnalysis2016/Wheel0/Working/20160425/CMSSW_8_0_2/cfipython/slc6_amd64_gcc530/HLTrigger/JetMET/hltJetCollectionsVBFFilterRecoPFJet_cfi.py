import FWCore.ParameterSet.Config as cms

hltJetCollectionsVBFFilterRecoPFJet = cms.EDFilter('HLTPFJetCollectionsVBFFilter',
  saveTags = cms.bool(False),
  inputTag = cms.InputTag('hltIterativeCone5CaloJets'),
  originalTag = cms.InputTag('hltIterativeCone5CaloJets'),
  SoftJetPt = cms.double(25),
  HardJetPt = cms.double(35),
  MinDeltaEta = cms.double(3),
  ThirdJetPt = cms.double(20),
  MaxAbsJetEta = cms.double(9999),
  MaxAbsThirdJetEta = cms.double(2.6),
  MinNJets = cms.uint32(2),
  TriggerType = cms.int32(85)
)
