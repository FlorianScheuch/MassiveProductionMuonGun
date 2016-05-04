ALL_COMMONRULES += src_DQM_L1TMonitor_test
src_DQM_L1TMonitor_test_parent := DQM/L1TMonitor
src_DQM_L1TMonitor_test_INIT_FUNC += $$(eval $$(call CommonProductRules,src_DQM_L1TMonitor_test,src/DQM/L1TMonitor/test,TEST))
