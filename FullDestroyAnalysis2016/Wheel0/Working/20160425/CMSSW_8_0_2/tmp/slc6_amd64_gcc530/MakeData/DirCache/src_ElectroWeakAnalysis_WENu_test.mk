ALL_COMMONRULES += src_ElectroWeakAnalysis_WENu_test
src_ElectroWeakAnalysis_WENu_test_parent := ElectroWeakAnalysis/WENu
src_ElectroWeakAnalysis_WENu_test_INIT_FUNC += $$(eval $$(call CommonProductRules,src_ElectroWeakAnalysis_WENu_test,src/ElectroWeakAnalysis/WENu/test,TEST))
