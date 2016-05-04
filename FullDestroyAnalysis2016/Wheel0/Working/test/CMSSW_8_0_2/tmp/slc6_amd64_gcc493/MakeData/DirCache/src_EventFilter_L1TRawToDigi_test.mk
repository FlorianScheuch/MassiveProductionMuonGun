ALL_COMMONRULES += src_EventFilter_L1TRawToDigi_test
src_EventFilter_L1TRawToDigi_test_parent := EventFilter/L1TRawToDigi
src_EventFilter_L1TRawToDigi_test_INIT_FUNC += $$(eval $$(call CommonProductRules,src_EventFilter_L1TRawToDigi_test,src/EventFilter/L1TRawToDigi/test,TEST))
