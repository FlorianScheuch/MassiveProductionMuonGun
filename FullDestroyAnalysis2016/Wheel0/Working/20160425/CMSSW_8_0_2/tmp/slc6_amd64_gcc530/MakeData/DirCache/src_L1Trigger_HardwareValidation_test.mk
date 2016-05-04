ALL_COMMONRULES += src_L1Trigger_HardwareValidation_test
src_L1Trigger_HardwareValidation_test_parent := L1Trigger/HardwareValidation
src_L1Trigger_HardwareValidation_test_INIT_FUNC += $$(eval $$(call CommonProductRules,src_L1Trigger_HardwareValidation_test,src/L1Trigger/HardwareValidation/test,TEST))
