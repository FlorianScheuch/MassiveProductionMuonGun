src_CaloOnlineTools_EcalTools_scripts_files := $(filter-out \#% %\#,$(notdir $(wildcard $(foreach dir,$(LOCALTOP)/src/CaloOnlineTools/EcalTools/scripts,$(dir)/*))))
$(eval $(call Src2StoreCopy,src_CaloOnlineTools_EcalTools_scripts,src/CaloOnlineTools/EcalTools/scripts,$(SCRAMSTORENAME_BIN),*))
