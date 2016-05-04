import FWCore.ParameterSet.Config as cms

hltMuonL1TFilter = cms.EDFilter('HLTMuonL1TFilter',
  saveTags = cms.bool(False),
  CandTag = cms.InputTag('hltGmtStage2Digis'),
  PreviousCandTag = cms.InputTag(''),
  MaxEta = cms.double(2.5),
  MinPt = cms.double(0),
  MinN = cms.int32(1)
)
