ALL_COMMONRULES += src_CondCore_EcalPlugins_test
src_CondCore_EcalPlugins_test_parent := CondCore/EcalPlugins
src_CondCore_EcalPlugins_test_INIT_FUNC += $$(eval $$(call CommonProductRules,src_CondCore_EcalPlugins_test,src/CondCore/EcalPlugins/test,TEST))
