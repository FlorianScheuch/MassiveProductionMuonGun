ALL_COMMONRULES += src_L1Trigger_L1TCommon_test
src_L1Trigger_L1TCommon_test_parent := L1Trigger/L1TCommon
src_L1Trigger_L1TCommon_test_INIT_FUNC += $$(eval $$(call CommonProductRules,src_L1Trigger_L1TCommon_test,src/L1Trigger/L1TCommon/test,TEST))
