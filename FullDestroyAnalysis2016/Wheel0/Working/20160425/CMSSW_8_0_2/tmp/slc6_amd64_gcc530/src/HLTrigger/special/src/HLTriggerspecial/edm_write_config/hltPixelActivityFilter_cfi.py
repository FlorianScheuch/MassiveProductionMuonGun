import FWCore.ParameterSet.Config as cms

hltPixelActivityFilter = cms.EDFilter('HLTPixelActivityFilter',
  saveTags = cms.bool(False),
  inputTag = cms.InputTag('hltSiPixelClusters'),
  minClusters = cms.uint32(3),
  maxClusters = cms.uint32(0)
)
