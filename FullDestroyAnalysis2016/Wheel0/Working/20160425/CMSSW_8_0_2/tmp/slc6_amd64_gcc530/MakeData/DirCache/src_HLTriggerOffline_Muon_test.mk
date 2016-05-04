ALL_COMMONRULES += src_HLTriggerOffline_Muon_test
src_HLTriggerOffline_Muon_test_parent := HLTriggerOffline/Muon
src_HLTriggerOffline_Muon_test_INIT_FUNC += $$(eval $$(call CommonProductRules,src_HLTriggerOffline_Muon_test,src/HLTriggerOffline/Muon/test,TEST))
