ALL_COMMONRULES += src_L1Trigger_L1TCalorimeter_test
src_L1Trigger_L1TCalorimeter_test_parent := L1Trigger/L1TCalorimeter
src_L1Trigger_L1TCalorimeter_test_INIT_FUNC += $$(eval $$(call CommonProductRules,src_L1Trigger_L1TCalorimeter_test,src/L1Trigger/L1TCalorimeter/test,TEST))
