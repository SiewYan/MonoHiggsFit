# Configuration for a simple monojet topology. Use this as a template for your own Run-2 mono-X analysis

# First provide ouput file name in out_file_name field 
out_file_name = 'mono-x23.root'

# can define any thing useful here which may be common to several categories, eg binning in MET 
bins = [250,270,350,475,1000]

# will expect samples with sample_sys_Up/Down but will skip if not found 
systematics=["btag","mistag"]

# Define each of the categories in a dictionary of the following form .. 
#	'name' : the category name 
#	'in_file_name' : input ntuple file for this category 
#	'cutstring': add simple cutrstring, applicable to ALL regions in this category (eg mvamet > 200)
#	'varstring': the main variable to be fit in this category (eg mvamet), must be named as the branch in the ntuples
#	'weightname': name of the weight variable 
#	'bins': binning given as a python list
#	'additionalvars': list additional variables to be histogrammed by the first stage, give as a list of lists, each list element 
#			  as ['variablename',nbins,min,max]
#	'pdfmodel': integer --> N/A  redudant for now unless we move back to parameteric fitting estimates
# 	'samples' : define tree->region/process map given as a dictionary with each entry as follows 
#		TreeName : ['region','process',isMC,isSignal] --> Note isSignal means DM/Higgs etc for signal region but Z-jets/W-jets for the di/single-muon regions !!!

#  OPTIONAL --> 'extra_cuts': additional cuts maybe specific to this control region (eg ptpho cuts) if this key is missing, the code will not complain   
 
monox_doublebp_mass2_category = {
	    'name':"monox_mass2"
            ,'in_file_name':"/uscms_data/d1/shoh/panda/v_8029_DarkHiggs_v2/flat/limits/fittingForest_all.root"
            ,"cutstring":"n2ddt56<0 && fjmass>100 && fjmass<150"
            ,"varstring":["min(999.9999,met)",200,1000]
       	    ,"weightname":"weight"
	    ,"bins":bins[:]
	    ,"additionalvars":[]
            ,"pdfmodel":0
	    ,"samples":
	   	{  
		  # Signal Region
#		   "VH_signal"    	       :['signal','vh',1,0]
		  "Zvv_signal"    	       :['signal','zjets',1,0]
                  ,"Zll_signal"	               :['signal','zll',1,0]
 		  ,"Wlv_signal"  	       :['signal','wjets',1,0]
		  ,"Diboson_signal"  	       :['signal','dibosons',1,0]
		  ,"ttbar_signal"   	       :['signal','ttbar',1,0]
		  ,"ST_signal"                 :['signal','stop',1,0]
		  ,"QCD_signal"		       :['signal','qcd',1,0]
		  ,"Data_signal"	       :['signal','data',0,0]
		 
		  # Di muon-Control
#                  ,"VH_zmm"                    :['dimuon','vh',1,0] 
                  ,"Zll_zmm"	               :['dimuon','zll',1,1]
 		  ,"Wlv_zmm"      	       :['dimuon','wjets',1,0]
		  ,"Diboson_zmm"    	       :['dimuon','dibosons',1,0]
		  ,"ttbar_zmm"    	       :['dimuon','ttbar',1,0]
		  ,"ST_zmm"                    :['dimuon','stop',1,0]
		  ,"QCD_zmm"		       :['dimuon','qcd',1,0]
		  ,"Data_zmm"    	       :['dimuon','data',0,0]
		  # Single muon (top) control
#                  ,"VH_tm"                     :['singlemuontop','vh',1,0] 
#                  ,"ttH_tm"                    :['singlemuontop','tth',1,0] 
                  ,"Zll_tmn"       	       :['singlemuontop','zll',1,0]
 		  ,"Wlv_tmn"                    :['singlemuontop','wjets',1,0]
		  ,"Diboson_tmn"                :['singlemuontop','dibosons',1,0]
		  ,"ttbar_tmn"                  :['singlemuontop','ttbar',1,1]
		  ,"ST_tmn"                     :['singlemuontop','stop',1,0]
		  ,"QCD_tmn"                    :['singlemuontop','qcd',1,0]
		  ,"Data_tmn"        	       :['singlemuontop','data',0,0]

                   # Single muon (w) control
#                  ,"VH_wmn"                    :['singlemuonw','vh',1,0] 
                  ,"Zll_wmn"     	       :['singlemuonw','zll',1,0]
 		  ,"Wlv_wmn"      	       :['singlemuonw','wjets',1,0]
		  ,"Diboson_wmn"               :['singlemuonw','dibosons',1,0]
		  ,"ttbar_wmn"                 :['singlemuonw','ttbar',1,0]
		  ,"ST_wmn"                    :['singlemuonw','stop',1,0]
		  ,"QCD_wmn"	               :['singlemuonw','qcd',1,0]
		  ,"Data_wmn"	               :['singlemuonw','data',0,0]

		  # Di electron-Control
#                  ,"VH_zee"                    :['dielectron','vh',1,0] 
                  ,"Zll_zee"	               :['dielectron','zll',1,0]
 		  ,"Wlv_zee"  	               :['dielectron','wjets',1,0]
		  ,"Diboson_zee"               :['dielectron','dibosons',1,0]
		  ,"ttbar_zee"                 :['dielectron','ttbar',1,0]
		  ,"ST_zee"                    :['dielectron','stop',1,0]
		  ,"QCD_zee"                   :['dielectron','qcd',1,0]
		  ,"Data_zee"	               :['dielectron','data',0,0]


		  # Single electron (top) control
#                  ,"VH_te"                     :['singleelectrontop','vh',1,0] 
#                  ,"ttH_te"                    :['singleelectrontop','tth',1,0] 
                  ,"Zll_ten"                    :['singleelectrontop','zll',1,0]
                  ,"Wlv_ten"                    :['singleelectrontop','wjets',1,0]
		  ,"Diboson_ten"                :['singleelectrontop','dibosons',1,0]
		  ,"ttbar_ten"                  :['singleelectrontop','ttbar',1,0]
		  ,"ST_ten"                     :['singleelectrontop','stop',1,0]
		  ,"QCD_ten"                    :['singleelectrontop','qcd',1,0]
		  ,"Data_ten"                   :['singleelectrontop','data',0,0]

                   # Single electron (w) control
#                  ,"VH_wen"                    :['singleelectronw','vh',1,0] 
                  ,"Zll_wen"                   :['singleelectronw','zll',1,0]
 		  ,"Wlv_wen"                   :['singleelectronw','wjets',1,0]
		  ,"Diboson_wen"               :['singleelectronw','dibosons',1,0]
		  ,"ttbar_wen"                 :['singleelectronw','ttbar',1,0]
		  ,"ST_wen"                    :['singleelectronw','stop',1,0]
		  ,"QCD_wen"                   :['singleelectronw','qcd',1,0]
		  ,"Data_wen"                  :['singleelectronw','data',0,0]
    }
}
monox_doublebf_mass2_category = {
	    'name':"monox_mass2_fail"
            ,'in_file_name':"/uscms_data/d1/shoh/panda/v_8029_DarkHiggs_v2/flat/limits/fittingForest_all.root"
            ,"cutstring":"n2ddt56<0 && fjmass>100 && fjmass<150"
            ,"varstring":["min(999.9999,met)",200,1000]
       	    ,"weightname":"weight"
	    ,"bins":bins[:]
	    ,"additionalvars":[]
            ,"pdfmodel":0
	    ,"samples":
	   	{  
		  # signal fail 
#		  ,"VH_signal"    	       :['signal','vh',1,0]
		  "Zvv_signal_fail"    	       :['signal','zjets',1,0]
                  ,"Zll_signal_fail"	               :['signal','zll',1,0]
 		  ,"Wlv_signal_fail"  	       :['signal','wjets',1,0]
		  ,"Diboson_signal_fail"  	       :['signal','dibosons',1,0]
		  ,"ttbar_signal_fail"   	       :['signal','ttbar',1,0]
		  ,"ST_signal_fail"                 :['signal','stop',1,0]
		  ,"QCD_signal_fail"		       :['signal','qcd',1,0]
		  ,"Data_signal_fail"	       :['signal','data',0,0]
                  #Mono-hs
                  #Zprime --> 500 GeV
                  ,"hsDM_500_50_50_signal_fail"    :['signal','hsDM-500-50-50_signal',1,1]
                  ,"hsDM_500_50_100_signal_fail"    :['signal','hsDM-500-50-100_signal',1,1]
                  ,"hsDM_500_50_150_signal_fail"    :['signal','hsDM-500-50-150_signal',1,1]
                  ,"hsDM_500_50_200_signal_fail"    :['signal','hsDM-500-50-200_signal',1,1]
                  ,"hsDM_495_50_250_signal_fail"    :['signal','hsDM-495-50-250_signal',1,1]

                  ,"hsDM_500_70_50_signal_fail"    :['signal','hsDM-500-70-50_signal',1,1]
                  ,"hsDM_500_70_100_signal_fail"    :['signal','hsDM-500-70-100_signal',1,1]
                  ,"hsDM_500_70_150_signal_fail"    :['signal','hsDM-500-70-150_signal',1,1]
                  ,"hsDM_500_70_200_signal_fail"    :['signal','hsDM-500-70-200_signal',1,1]
                  ,"hsDM_495_70_250_signal_fail"    :['signal','hsDM-495-70-250_signal',1,1]

                  ,"hsDM_500_90_50_signal_fail"    :['signal','hsDM-500-90-50_signal',1,1]
                  ,"hsDM_500_90_100_signal_fail"    :['signal','hsDM-500-90-100_signal',1,1]
                  ,"hsDM_500_90_150_signal_fail"    :['signal','hsDM-500-90-150_signal',1,1]
                  ,"hsDM_500_90_200_signal_fail"    :['signal','hsDM-500-90-200_signal',1,1]
                  ,"hsDM_495_90_250_signal_fail"    :['signal','hsDM-495-90-250_signal',1,1]
                  
                  #Zprime --> 1000 GeV
                  ,"hsDM_1000_50_50_signal_fail"    :['signal','hsDM-1000-50-50_signal',1,1]
                  ,"hsDM_1000_50_100_signal_fail"    :['signal','hsDM-1000-50-100_signal',1,1]
                  ,"hsDM_1000_50_150_signal_fail"    :['signal','hsDM-1000-50-150_signal',1,1]
                  ,"hsDM_1000_50_200_signal_fail"    :['signal','hsDM-1000-50-200_signal',1,1]
                  ,"hsDM_1000_50_250_signal_fail"    :['signal','hsDM-1000-50-250_signal',1,1]
                  ,"hsDM_1000_50_300_signal_fail"    :['signal','hsDM-1000-50-300_signal',1,1]
                  ,"hsDM_1000_50_400_signal_fail"    :['signal','hsDM-1000-50-400_signal',1,1]

                  ,"hsDM_1000_70_50_signal_fail"    :['signal','hsDM-1000-70-50_signal',1,1]
                  ,"hsDM_1000_70_100_signal_fail"    :['signal','hsDM-1000-70-100_signal',1,1]
                  ,"hsDM_1000_70_150_signal_fail"    :['signal','hsDM-1000-70-150_signal',1,1]
                  ,"hsDM_1000_70_200_signal_fail"    :['signal','hsDM-1000-70-200_signal',1,1]
                  ,"hsDM_1000_70_250_signal_fail"    :['signal','hsDM-1000-70-250_signal',1,1]
                  ,"hsDM_1000_70_300_signal_fail"    :['signal','hsDM-1000-70-300_signal',1,1]
                  ,"hsDM_1000_70_400_signal_fail"    :['signal','hsDM-1000-70-400_signal',1,1]

                  ,"hsDM_1000_90_50_signal_fail"    :['signal','hsDM-1000-90-50_signal',1,1]
                  ,"hsDM_1000_90_100_signal_fail"    :['signal','hsDM-1000-90-100_signal',1,1]
                  ,"hsDM_1000_90_150_signal_fail"    :['signal','hsDM-1000-90-150_signal',1,1]
                  ,"hsDM_1000_90_200_signal_fail"    :['signal','hsDM-1000-90-200_signal',1,1]
                  ,"hsDM_1000_90_250_signal_fail"    :['signal','hsDM-1000-90-250_signal',1,1]
                  ,"hsDM_1000_90_300_signal_fail"    :['signal','hsDM-1000-90-300_signal',1,1]
                  ,"hsDM_1000_90_400_signal_fail"    :['signal','hsDM-1000-90-400_signal',1,1]

                   #Zprime --> 1500 GeV                                                                                                                                                                                      
                  ,"hsDM_1500_50_50_signal_fail"    :['signal','hsDM-1500-50-50_signal',1,1]
                  ,"hsDM_1500_50_100_signal_fail"    :['signal','hsDM-1500-50-100_signal',1,1]
                  ,"hsDM_1500_50_150_signal_fail"    :['signal','hsDM-1500-50-150_signal',1,1]
                  ,"hsDM_1500_50_200_signal_fail"    :['signal','hsDM-1500-50-200_signal',1,1]
                  ,"hsDM_1500_50_250_signal_fail"    :['signal','hsDM-1500-50-250_signal',1,1]
                  ,"hsDM_1500_50_300_signal_fail"    :['signal','hsDM-1500-50-300_signal',1,1]
                  ,"hsDM_1500_50_400_signal_fail"    :['signal','hsDM-1500-50-400_signal',1,1]

                  ,"hsDM_1500_70_50_signal_fail"    :['signal','hsDM-1500-70-50_signal',1,1]
                  ,"hsDM_1500_70_100_signal_fail"    :['signal','hsDM-1500-70-100_signal',1,1]
                  ,"hsDM_1500_70_150_signal_fail"    :['signal','hsDM-1500-70-150_signal',1,1]
                  ,"hsDM_1500_70_200_signal_fail"    :['signal','hsDM-1500-70-200_signal',1,1]
                  ,"hsDM_1500_70_250_signal_fail"    :['signal','hsDM-1500-70-250_signal',1,1]
                  ,"hsDM_1500_70_300_signal_fail"    :['signal','hsDM-1500-70-300_signal',1,1]
                  ,"hsDM_1500_70_400_signal_fail"    :['signal','hsDM-1500-70-400_signal',1,1]

                  ,"hsDM_1500_90_50_signal_fail"    :['signal','hsDM-1500-90-50_signal',1,1]
                  ,"hsDM_1500_90_100_signal_fail"    :['signal','hsDM-1500-90-100_signal',1,1]
                  ,"hsDM_1500_90_150_signal_fail"    :['signal','hsDM-1500-90-150_signal',1,1]
                  ,"hsDM_1500_90_200_signal_fail"    :['signal','hsDM-1500-90-200_signal',1,1]
                  ,"hsDM_1500_90_250_signal_fail"    :['signal','hsDM-1500-90-250_signal',1,1]
                  ,"hsDM_1500_90_300_signal_fail"    :['signal','hsDM-1500-90-300_signal',1,1]
                  ,"hsDM_1500_90_400_signal_fail"    :['signal','hsDM-1500-90-400_signal',1,1]

                  #Zprime --> 2000 GeV                                                                                                                                                 
                  ,"hsDM_2000_50_50_signal_fail"    :['signal','hsDM-2000-50-50_signal',1,1]
                  ,"hsDM_2000_50_100_signal_fail"    :['signal','hsDM-2000-50-100_signal',1,1]
                  ,"hsDM_2000_50_150_signal_fail"    :['signal','hsDM-2000-50-150_signal',1,1]
                  ,"hsDM_2000_50_200_signal_fail"    :['signal','hsDM-2000-50-200_signal',1,1]
                  ,"hsDM_2000_50_250_signal_fail"    :['signal','hsDM-2000-50-250_signal',1,1]
                  ,"hsDM_2000_50_300_signal_fail"    :['signal','hsDM-2000-50-300_signal',1,1]
                  ,"hsDM_2000_50_400_signal_fail"    :['signal','hsDM-2000-50-400_signal',1,1]

                  ,"hsDM_2000_70_50_signal_fail"    :['signal','hsDM-2000-70-50_signal',1,1]
                  ,"hsDM_2000_70_100_signal_fail"    :['signal','hsDM-2000-70-100_signal',1,1]
                  ,"hsDM_2000_70_150_signal_fail"    :['signal','hsDM-2000-70-150_signal',1,1]
                  ,"hsDM_2000_70_200_signal_fail"    :['signal','hsDM-2000-70-200_signal',1,1]
                  ,"hsDM_2000_70_250_signal_fail"    :['signal','hsDM-2000-70-250_signal',1,1]
                  ,"hsDM_2000_70_300_signal_fail"    :['signal','hsDM-2000-70-300_signal',1,1]
                  ,"hsDM_2000_70_400_signal_fail"    :['signal','hsDM-2000-70-400_signal',1,1]

                  ,"hsDM_2000_90_50_signal_fail"    :['signal','hsDM-2000-90-50_signal',1,1]
                  ,"hsDM_2000_90_100_signal_fail"    :['signal','hsDM-2000-90-100_signal',1,1]
                  ,"hsDM_2000_90_150_signal_fail"    :['signal','hsDM-2000-90-150_signal',1,1]
                  ,"hsDM_2000_90_200_signal_fail"    :['signal','hsDM-2000-90-200_signal',1,1]
                  ,"hsDM_2000_90_250_signal_fail"    :['signal','hsDM-2000-90-250_signal',1,1]
                  ,"hsDM_2000_90_300_signal_fail"    :['signal','hsDM-2000-90-300_signal',1,1]
                  ,"hsDM_2000_90_400_signal_fail"    :['signal','hsDM-2000-90-400_signal',1,1]

                  #Zprime --> 2500 GeV                                                                                                                                                                                            
                  ,"hsDM_2500_50_50_signal_fail"    :['signal','hsDM-2500-50-50_signal',1,1]
                  ,"hsDM_2500_50_100_signal_fail"    :['signal','hsDM-2500-50-100_signal',1,1]
                  ,"hsDM_2500_50_150_signal_fail"    :['signal','hsDM-2500-50-150_signal',1,1]
                  ,"hsDM_2500_50_200_signal_fail"    :['signal','hsDM-2500-50-200_signal',1,1]
                  ,"hsDM_2500_50_250_signal_fail"    :['signal','hsDM-2500-50-250_signal',1,1]
                  ,"hsDM_2500_50_300_signal_fail"    :['signal','hsDM-2500-50-300_signal',1,1]
                  ,"hsDM_2500_50_400_signal_fail"    :['signal','hsDM-2500-50-400_signal',1,1]

                  ,"hsDM_2500_70_50_signal_fail"    :['signal','hsDM-2500-70-50_signal',1,1]
                  ,"hsDM_2500_70_100_signal_fail"    :['signal','hsDM-2500-70-100_signal',1,1]
                  ,"hsDM_2500_70_150_signal_fail"    :['signal','hsDM-2500-70-150_signal',1,1]
                  ,"hsDM_2500_70_200_signal_fail"    :['signal','hsDM-2500-70-200_signal',1,1]
                  ,"hsDM_2500_70_250_signal_fail"    :['signal','hsDM-2500-70-250_signal',1,1]
                  ,"hsDM_2500_70_300_signal_fail"    :['signal','hsDM-2500-70-300_signal',1,1]
                  ,"hsDM_2500_70_400_signal_fail"    :['signal','hsDM-2500-70-400_signal',1,1]

                  ,"hsDM_2500_90_50_signal_fail"    :['signal','hsDM-2500-90-50_signal',1,1]
                  ,"hsDM_2500_90_100_signal_fail"    :['signal','hsDM-2500-90-100_signal',1,1]
                  ,"hsDM_2500_90_150_signal_fail"    :['signal','hsDM-2500-90-150_signal',1,1]
                  ,"hsDM_2500_90_200_signal_fail"    :['signal','hsDM-2500-90-200_signal',1,1]
                  ,"hsDM_2500_90_250_signal_fail"    :['signal','hsDM-2500-90-250_signal',1,1]
                  ,"hsDM_2500_90_300_signal_fail"    :['signal','hsDM-2500-90-300_signal',1,1]
                  ,"hsDM_2500_90_400_signal_fail"    :['signal','hsDM-2500-90-400_signal',1,1]


		  # Di muon-Control_fail
                  ,"Zll_zmm_fail"	       :['dimuon','zll',1,1]
 		  ,"Wlv_zmm_fail"      	       :['dimuon','wjets',1,0]
		  ,"Diboson_zmm_fail" 	       :['dimuon','dibosons',1,0]
		  ,"ttbar_zmm_fail"    	       :['dimuon','ttbar',1,0]
		  ,"ST_zmm_fail"               :['dimuon','stop',1,0]
		  ,"QCD_zmm_fail"              :['dimuon','qcd',1,0]
		  ,"Data_zmm_fail"    	       :['dimuon','data',0,0]

		  # Single muon (top) fail control
                  ,"Zll_tmn_fail"       	       :['singlemuontop','zll',1,0]
 		  ,"Wlv_tmn_fail"               :['singlemuontop','wjets',1,0]
		  ,"Diboson_tmn_fail"           :['singlemuontop','dibosons',1,0]
		  ,"ttbar_tmn_fail"             :['singlemuontop','ttbar',1,1]
		  ,"ST_tmn_fail"                :['singlemuontop','stop',1,0]
		  ,"QCD_tmn_fail"               :['singlemuontop','qcd',1,0]
		  ,"Data_tmn_fail"     	       :['singlemuontop','data',0,0]

                   # Single muon (w) fail control
                  ,"Zll_wmn_fail"     	       :['singlemuonw','zll',1,0]
 		  ,"Wlv_wmn_fail"      	       :['singlemuonw','wjets',1,0]
		  ,"Diboson_wmn_fail"          :['singlemuonw','dibosons',1,0]
		  ,"ttbar_wmn_fail"            :['singlemuonw','ttbar',1,0]
		  ,"ST_wmn_fail"               :['singlemuonw','stop',1,0]
		  ,"QCD_wmn_fail"              :['singlemuonw','qcd',1,0]
		  ,"Data_wmn_fail"             :['singlemuonw','data',0,0]

		  # Di electron-Control_fail
                  ,"Zll_zee_fail"	       :['dielectron','zll',1,0]
 		  ,"Wlv_zee_fail"  	       :['dielectron','wjets',1,0]
		  ,"Diboson_zee_fail"          :['dielectron','dibosons',1,0]
		  ,"ttbar_zee_fail"            :['dielectron','ttbar',1,0]
		  ,"ST_zee_fail"               :['dielectron','stop',1,0]
		  ,"QCD_zee_fail"              :['dielectron','qcd',1,0]
		  ,"Data_zee_fail"	       :['dielectron','data',0,0]

		  # Single electron (top) fail control
                  ,"Zll_ten_fail"               :['singleelectrontop','zll',1,0]
                  ,"Wlv_ten_fail"               :['singleelectrontop','wjets',1,0]
		  ,"Diboson_ten_fail"           :['singleelectrontop','dibosons',1,0]
		  ,"ttbar_ten_fail"             :['singleelectrontop','ttbar',1,0]
		  ,"ST_ten_fail"                :['singleelectrontop','stop',1,0]
		  ,"QCD_ten_fail"               :['singleelectrontop','qcd',1,0]
		  ,"Data_ten_fail"              :['singleelectrontop','data',0,0]

                   # Single electron (w) fail control
                  ,"Zll_wen_fail"              :['singleelectronw','zll',1,0]
 		  ,"Wlv_wen_fail"              :['singleelectronw','wjets',1,0]
		  ,"Diboson_wen_fail"          :['singleelectronw','dibosons',1,0]
		  ,"ttbar_wen_fail"            :['singleelectronw','ttbar',1,0]
		  ,"ST_wen_fail"               :['singleelectronw','stop',1,0]
		  ,"QCD_wen_fail"              :['singleelectronw','qcd',1,0]
		  ,"Data_wen_fail"             :['singleelectronw','data',0,0]

    }
}
categories = [monox_doublebp_mass2_category,monox_doublebf_mass2_category]
