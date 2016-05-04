ALL_COMMONRULES += src_HLTrigger_JSONMonitoring_test
src_HLTrigger_JSONMonitoring_test_parent := HLTrigger/JSONMonitoring
src_HLTrigger_JSONMonitoring_test_INIT_FUNC += $$(eval $$(call CommonProductRules,src_HLTrigger_JSONMonitoring_test,src/HLTrigger/JSONMonitoring/test,TEST))
