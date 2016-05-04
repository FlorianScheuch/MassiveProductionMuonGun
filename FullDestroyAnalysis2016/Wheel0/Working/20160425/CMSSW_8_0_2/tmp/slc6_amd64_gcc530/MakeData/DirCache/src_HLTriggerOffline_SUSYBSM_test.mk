ALL_COMMONRULES += src_HLTriggerOffline_SUSYBSM_test
src_HLTriggerOffline_SUSYBSM_test_parent := HLTriggerOffline/SUSYBSM
src_HLTriggerOffline_SUSYBSM_test_INIT_FUNC += $$(eval $$(call CommonProductRules,src_HLTriggerOffline_SUSYBSM_test,src/HLTriggerOffline/SUSYBSM/test,TEST))
