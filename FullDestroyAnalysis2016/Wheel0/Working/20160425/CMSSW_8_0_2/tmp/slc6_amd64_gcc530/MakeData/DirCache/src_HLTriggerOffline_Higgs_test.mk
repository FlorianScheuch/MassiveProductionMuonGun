ALL_COMMONRULES += src_HLTriggerOffline_Higgs_test
src_HLTriggerOffline_Higgs_test_parent := HLTriggerOffline/Higgs
src_HLTriggerOffline_Higgs_test_INIT_FUNC += $$(eval $$(call CommonProductRules,src_HLTriggerOffline_Higgs_test,src/HLTriggerOffline/Higgs/test,TEST))
