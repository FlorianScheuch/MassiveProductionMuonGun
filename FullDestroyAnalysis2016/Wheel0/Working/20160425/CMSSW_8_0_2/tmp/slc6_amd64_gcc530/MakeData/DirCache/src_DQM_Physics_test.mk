ALL_COMMONRULES += src_DQM_Physics_test
src_DQM_Physics_test_parent := DQM/Physics
src_DQM_Physics_test_INIT_FUNC += $$(eval $$(call CommonProductRules,src_DQM_Physics_test,src/DQM/Physics/test,TEST))
