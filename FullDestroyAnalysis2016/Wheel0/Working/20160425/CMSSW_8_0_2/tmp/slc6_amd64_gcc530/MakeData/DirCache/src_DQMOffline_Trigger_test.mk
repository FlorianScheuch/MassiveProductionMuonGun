ALL_COMMONRULES += src_DQMOffline_Trigger_test
src_DQMOffline_Trigger_test_parent := DQMOffline/Trigger
src_DQMOffline_Trigger_test_INIT_FUNC += $$(eval $$(call CommonProductRules,src_DQMOffline_Trigger_test,src/DQMOffline/Trigger/test,TEST))
