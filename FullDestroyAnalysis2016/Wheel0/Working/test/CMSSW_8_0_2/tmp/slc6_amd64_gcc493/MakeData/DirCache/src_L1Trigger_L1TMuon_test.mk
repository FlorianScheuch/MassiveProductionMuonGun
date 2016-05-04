ALL_COMMONRULES += src_L1Trigger_L1TMuon_test
src_L1Trigger_L1TMuon_test_parent := L1Trigger/L1TMuon
src_L1Trigger_L1TMuon_test_INIT_FUNC += $$(eval $$(call CommonProductRules,src_L1Trigger_L1TMuon_test,src/L1Trigger/L1TMuon/test,TEST))
