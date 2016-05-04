ALL_COMMONRULES += src_L1Trigger_L1TMuonEndCap_test
src_L1Trigger_L1TMuonEndCap_test_parent := L1Trigger/L1TMuonEndCap
src_L1Trigger_L1TMuonEndCap_test_INIT_FUNC += $$(eval $$(call CommonProductRules,src_L1Trigger_L1TMuonEndCap_test,src/L1Trigger/L1TMuonEndCap/test,TEST))
