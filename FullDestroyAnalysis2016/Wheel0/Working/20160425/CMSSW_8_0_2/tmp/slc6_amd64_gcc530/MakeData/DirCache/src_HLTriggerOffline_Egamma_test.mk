ALL_COMMONRULES += src_HLTriggerOffline_Egamma_test
src_HLTriggerOffline_Egamma_test_parent := HLTriggerOffline/Egamma
src_HLTriggerOffline_Egamma_test_INIT_FUNC += $$(eval $$(call CommonProductRules,src_HLTriggerOffline_Egamma_test,src/HLTriggerOffline/Egamma/test,TEST))
