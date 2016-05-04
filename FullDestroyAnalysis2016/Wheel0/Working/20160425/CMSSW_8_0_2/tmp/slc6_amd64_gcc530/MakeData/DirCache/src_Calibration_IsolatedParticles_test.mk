ALL_COMMONRULES += src_Calibration_IsolatedParticles_test
src_Calibration_IsolatedParticles_test_parent := Calibration/IsolatedParticles
src_Calibration_IsolatedParticles_test_INIT_FUNC += $$(eval $$(call CommonProductRules,src_Calibration_IsolatedParticles_test,src/Calibration/IsolatedParticles/test,TEST))
