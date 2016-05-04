ALL_COMMONRULES += src_L1Trigger_L1TMuonBarrel_test
src_L1Trigger_L1TMuonBarrel_test_parent := L1Trigger/L1TMuonBarrel
src_L1Trigger_L1TMuonBarrel_test_INIT_FUNC += $$(eval $$(call CommonProductRules,src_L1Trigger_L1TMuonBarrel_test,src/L1Trigger/L1TMuonBarrel/test,TEST))
