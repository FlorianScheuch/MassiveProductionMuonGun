ALL_COMMONRULES += src_HLTrigger_HLTcore_test
src_HLTrigger_HLTcore_test_parent := HLTrigger/HLTcore
src_HLTrigger_HLTcore_test_INIT_FUNC += $$(eval $$(call CommonProductRules,src_HLTrigger_HLTcore_test,src/HLTrigger/HLTcore/test,TEST))
