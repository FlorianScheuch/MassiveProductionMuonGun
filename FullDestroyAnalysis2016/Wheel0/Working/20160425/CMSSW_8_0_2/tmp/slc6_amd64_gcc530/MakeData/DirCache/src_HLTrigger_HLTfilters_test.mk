ALL_COMMONRULES += src_HLTrigger_HLTfilters_test
src_HLTrigger_HLTfilters_test_parent := HLTrigger/HLTfilters
src_HLTrigger_HLTfilters_test_INIT_FUNC += $$(eval $$(call CommonProductRules,src_HLTrigger_HLTfilters_test,src/HLTrigger/HLTfilters/test,TEST))
