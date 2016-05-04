ALL_COMMONRULES += src_L1Trigger_L1TMuonOverlap_test
src_L1Trigger_L1TMuonOverlap_test_parent := L1Trigger/L1TMuonOverlap
src_L1Trigger_L1TMuonOverlap_test_INIT_FUNC += $$(eval $$(call CommonProductRules,src_L1Trigger_L1TMuonOverlap_test,src/L1Trigger/L1TMuonOverlap/test,TEST))
