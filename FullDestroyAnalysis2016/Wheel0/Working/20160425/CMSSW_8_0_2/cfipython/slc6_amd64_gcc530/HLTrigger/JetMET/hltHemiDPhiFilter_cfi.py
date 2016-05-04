import FWCore.ParameterSet.Config as cms

hltHemiDPhiFilter = cms.EDFilter('HLTHemiDPhiFilter',
  saveTags = cms.bool(False),
  inputTag = cms.InputTag('hltRHemisphere'),
  minDPhi = cms.double(2.9415),
  acceptNJ = cms.bool(True)
)