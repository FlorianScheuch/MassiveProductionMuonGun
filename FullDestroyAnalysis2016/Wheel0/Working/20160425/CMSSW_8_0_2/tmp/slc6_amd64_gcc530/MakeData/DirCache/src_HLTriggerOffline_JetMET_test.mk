ALL_COMMONRULES += src_HLTriggerOffline_JetMET_test
src_HLTriggerOffline_JetMET_test_parent := HLTriggerOffline/JetMET
src_HLTriggerOffline_JetMET_test_INIT_FUNC += $$(eval $$(call CommonProductRules,src_HLTriggerOffline_JetMET_test,src/HLTriggerOffline/JetMET/test,TEST))
