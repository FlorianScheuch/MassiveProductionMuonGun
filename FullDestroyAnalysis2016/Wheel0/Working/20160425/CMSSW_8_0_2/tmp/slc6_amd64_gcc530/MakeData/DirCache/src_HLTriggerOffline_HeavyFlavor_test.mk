ALL_COMMONRULES += src_HLTriggerOffline_HeavyFlavor_test
src_HLTriggerOffline_HeavyFlavor_test_parent := HLTriggerOffline/HeavyFlavor
src_HLTriggerOffline_HeavyFlavor_test_INIT_FUNC += $$(eval $$(call CommonProductRules,src_HLTriggerOffline_HeavyFlavor_test,src/HLTriggerOffline/HeavyFlavor/test,TEST))
