ALL_COMMONRULES += src_L1Trigger_L1TNtuples_test
src_L1Trigger_L1TNtuples_test_parent := L1Trigger/L1TNtuples
src_L1Trigger_L1TNtuples_test_INIT_FUNC += $$(eval $$(call CommonProductRules,src_L1Trigger_L1TNtuples_test,src/L1Trigger/L1TNtuples/test,TEST))
