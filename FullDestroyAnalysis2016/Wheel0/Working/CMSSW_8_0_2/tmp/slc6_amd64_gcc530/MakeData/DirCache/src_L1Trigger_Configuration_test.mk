ALL_COMMONRULES += src_L1Trigger_Configuration_test
src_L1Trigger_Configuration_test_parent := L1Trigger/Configuration
src_L1Trigger_Configuration_test_INIT_FUNC += $$(eval $$(call CommonProductRules,src_L1Trigger_Configuration_test,src/L1Trigger/Configuration/test,TEST))
