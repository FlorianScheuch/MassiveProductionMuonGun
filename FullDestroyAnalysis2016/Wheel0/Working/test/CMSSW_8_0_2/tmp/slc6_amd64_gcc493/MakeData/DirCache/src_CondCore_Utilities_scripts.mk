src_CondCore_Utilities_scripts_files := $(filter-out \#% %\#,$(notdir $(wildcard $(foreach dir,$(LOCALTOP)/src/CondCore/Utilities/scripts,$(dir)/*))))
$(eval $(call Src2StoreCopy,src_CondCore_Utilities_scripts,src/CondCore/Utilities/scripts,$(SCRAMSTORENAME_BIN),*))
