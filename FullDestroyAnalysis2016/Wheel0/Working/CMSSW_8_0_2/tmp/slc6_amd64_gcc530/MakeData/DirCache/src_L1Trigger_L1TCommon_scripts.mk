src_L1Trigger_L1TCommon_scripts_files := $(filter-out \#% %\#,$(notdir $(wildcard $(foreach dir,$(LOCALTOP)/src/L1Trigger/L1TCommon/scripts,$(dir)/*))))
$(eval $(call Src2StoreCopy,src_L1Trigger_L1TCommon_scripts,src/L1Trigger/L1TCommon/scripts,$(SCRAMSTORENAME_BIN),*))
