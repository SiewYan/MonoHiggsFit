# Configuration for a simple monojet topology. Use this as a template for your own Run-2 mono-X analysis

# First provide ouput file name in out_file_name field 
out_file_name = 'mono-x2.root'

# can define any thing useful here which may be common to several categories, eg binning in MET 
bins = [200,270,350,475,1000]

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
	    'name':"monox_doublebp_mass2"
            ,'in_file_name':"/uscms_data/d3/matteoc/panda/v_8026_0_4/flat//limits//fittingForest_all.root"
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
		  # signals 
                  ,"ZpA0_600_signal"       :['signal','ZpA0-600-300_signal',1,1]
                  ,"ZpA0_800_signal"       :['signal','ZpA0-800-300_signal',1,1]
                  ,"ZpA0_1000_signal"      :['signal','ZpA0-1000-300_signal',1,1]
                  ,"ZpA0_1400_signal"      :['signal','ZpA0-1400-300_signal',1,1]
                  ,"ZpA0_1700_signal"      :['signal','ZpA0-1700-300_signal',1,1]
                  ,"ZpA0_2000_signal"      :['signal','ZpA0-2000-300_signal',1,1]
                  ,"ZpA0_2500_signal"      :['signal','ZpA0-2500-300_signal',1,1]
                  ,"BarZp_10_1_signal"         :['signal','BarZp-10-1_signal',1,1] 
                  ,"BarZp_10_10_signal"        :['signal','BarZp-10-10_signal',1,1] 
                  ,"BarZp_10_50_signal"        :['signal','BarZp-10-50_signal',1,1] 
                  ,"BarZp_10_150_signal"       :['signal','BarZp-10-150_signal',1,1] 
                  ,"BarZp_10_500_signal"       :['signal','BarZp-10-500_signal',1,1] 
#                  ,"BarZp_10_1000_signal"      :['signal','BarZp-10-1000_signal',1,1] 
                  ,"BarZp_15_10_signal"        :['signal','BarZp-15-10_signal',1,1] 
                  ,"BarZp_20_1_signal"         :['signal','BarZp-20-1_signal',1,1] 
                  ,"BarZp_50_1_signal"         :['signal','BarZp-50-1_signal',1,1] 
                  ,"BarZp_50_10_signal"        :['signal','BarZp-50-10_signal',1,1] 
                  ,"BarZp_50_50_signal"        :['signal','BarZp-50-50_signal',1,1] 
                  ,"BarZp_95_50_signal"        :['signal','BarZp-95-50_signal',1,1] 
                  ,"BarZp_100_1_signal"        :['signal','BarZp-100-1_signal',1,1] 
                  ,"BarZp_100_10_signal"       :['signal','BarZp-100-10_signal',1,1] 
                  ,"BarZp_200_1_signal"        :['signal','BarZp-200-1_signal',1,1] 
                  ,"BarZp_200_50_signal"       :['signal','BarZp-200-50_signal',1,1] 
                  ,"BarZp_200_150_signal"      :['signal','BarZp-200-150_signal',1,1] 
                  ,"BarZp_295_150_signal"      :['signal','BarZp-295-150_signal',1,1] 
                  ,"BarZp_300_1_signal"        :['signal','BarZp-300-1_signal',1,1] 
                  ,"BarZp_300_50_signal"       :['signal','BarZp-300-50_signal',1,1] 
                  ,"BarZp_500_1_signal"        :['signal','BarZp-500-1_signal',1,1] 
                  ,"BarZp_500_150_signal"      :['signal','BarZp-500-150_signal',1,1] 
#                  ,"BarZp_500_500_signal"      :['signal','BarZp-500-500_signal',1,1] 
                  ,"BarZp_995_500_signal"      :['signal','BarZp-995-500_signal',1,1] 
                  ,"BarZp_1000_1_signal"       :['signal','BarZp-1000-1_signal',1,1] 
                  ,"BarZp_1000_150_signal"     :['signal','BarZp-1000-150_signal',1,1] 
                  ,"BarZp_1000_1000_signal"    :['signal','BarZp-1000-1000_signal',1,1] 
                  ,"BarZp_1995_1000_signal"    :['signal','BarZp-1995-1000_signal',1,1] 
                  ,"BarZp_2000_1_signal"       :['signal','BarZp-2000-1_signal',1,1] 
#                  ,"BarZp_2000_500_signal"     :['signal','BarZp-2000-500_signal',1,1] 
                  ,"BarZp_10000_1_signal"      :['signal','BarZp-10000-1_signal',1,1] 
                  ,"BarZp_10000_10_signal"     :['signal','BarZp-10000-10_signal',1,1] 
                  ,"BarZp_10000_50_signal"     :['signal','BarZp-10000-50_signal',1,1] 
                  ,"BarZp_10000_150_signal"    :['signal','BarZp-10000-150_signal',1,1] 
                  ,"BarZp_10000_500_signal"    :['signal','BarZp-10000-500_signal',1,1] 
#                  ,"BarZp_10000_1000_signal"    :['signal','BarZp-10000-1000_signal',1,1] 


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
                  ,"Zll_tm"       	       :['singlemuontop','zll',1,0]
 		  ,"Wlv_tm"                    :['singlemuontop','wjets',1,0]
		  ,"Diboson_tm"                :['singlemuontop','dibosons',1,0]
		  ,"ttbar_tm"                  :['singlemuontop','ttbar',1,1]
		  ,"ST_tm"                     :['singlemuontop','stop',1,0]
		  ,"QCD_tm"                    :['singlemuontop','qcd',1,0]
		  ,"Data_tm"        	       :['singlemuontop','data',0,0]

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
                  ,"Zll_te"                    :['singleelectrontop','zll',1,0]
                  ,"Wlv_te"                    :['singleelectrontop','wjets',1,0]
		  ,"Diboson_te"                :['singleelectrontop','dibosons',1,0]
		  ,"ttbar_te"                  :['singleelectrontop','ttbar',1,0]
		  ,"ST_te"                     :['singleelectrontop','stop',1,0]
		  ,"QCD_te"                    :['singleelectrontop','qcd',1,0]
		  ,"Data_te"                   :['singleelectrontop','data',0,0]

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
	    'name':"monox_doublebf_mass2"
            ,'in_file_name':"/uscms_data/d3/matteoc/panda/v_8026_0_4/flat//limits//fittingForest_all.root"
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
                  ,"ZpA0_600_signal_fail"       :['signal','ZpA0-600-300_signal',1,1]
                  ,"ZpA0_800_signal_fail"       :['signal','ZpA0-800-300_signal',1,1]
                  ,"ZpA0_1000_signal_fail"      :['signal','ZpA0-1000-300_signal',1,1]
                  ,"ZpA0_1400_signal_fail"      :['signal','ZpA0-1400-300_signal',1,1]
                  ,"ZpA0_1700_signal_fail"      :['signal','ZpA0-1700-300_signal',1,1]
                  ,"ZpA0_2000_signal_fail"      :['signal','ZpA0-2000-300_signal',1,1]
                  ,"ZpA0_2500_signal_fail"      :['signal','ZpA0-2500-300_signal',1,1]
                  ,"BarZp_10_1_signal_fail"         :['signal','BarZp-10-1_signal',1,1] 
                  ,"BarZp_10_10_signal_fail"        :['signal','BarZp-10-10_signal',1,1] 
                  ,"BarZp_10_50_signal_fail"        :['signal','BarZp-10-50_signal',1,1] 
                  ,"BarZp_10_150_signal_fail"       :['signal','BarZp-10-150_signal',1,1] 
                  ,"BarZp_10_500_signal_fail"       :['signal','BarZp-10-500_signal',1,1] 
#                  ,"BarZp_10_1000_signal_fail"      :['signal','BarZp-10-1000_signal',1,1] 
                  ,"BarZp_15_10_signal_fail"        :['signal','BarZp-15-10_signal',1,1] 
                  ,"BarZp_20_1_signal_fail"         :['signal','BarZp-20-1_signal',1,1] 
                  ,"BarZp_50_1_signal_fail"         :['signal','BarZp-50-1_signal',1,1] 
                  ,"BarZp_50_10_signal_fail"        :['signal','BarZp-50-10_signal',1,1] 
                  ,"BarZp_50_50_signal_fail"        :['signal','BarZp-50-50_signal',1,1] 
                  ,"BarZp_95_50_signal_fail"        :['signal','BarZp-95-50_signal',1,1] 
                  ,"BarZp_100_1_signal_fail"        :['signal','BarZp-100-1_signal',1,1] 
                  ,"BarZp_100_10_signal_fail"       :['signal','BarZp-100-10_signal',1,1] 
                  ,"BarZp_200_1_signal_fail"        :['signal','BarZp-200-1_signal',1,1] 
                  ,"BarZp_200_50_signal_fail"       :['signal','BarZp-200-50_signal',1,1] 
                  ,"BarZp_200_150_signal_fail"      :['signal','BarZp-200-150_signal',1,1] 
                  ,"BarZp_295_150_signal_fail"      :['signal','BarZp-295-150_signal',1,1] 
                  ,"BarZp_300_1_signal_fail"        :['signal','BarZp-300-1_signal',1,1] 
                  ,"BarZp_300_50_signal_fail"       :['signal','BarZp-300-50_signal',1,1] 
                  ,"BarZp_500_1_signal_fail"        :['signal','BarZp-500-1_signal',1,1] 
                  ,"BarZp_500_150_signal_fail"      :['signal','BarZp-500-150_signal',1,1] 
#                  ,"BarZp_500_500_signal_fail"      :['signal','BarZp-500-500_signal',1,1] 
                  ,"BarZp_995_500_signal_fail"      :['signal','BarZp-995-500_signal',1,1] 
                  ,"BarZp_1000_1_signal_fail"       :['signal','BarZp-1000-1_signal',1,1] 
                  ,"BarZp_1000_150_signal_fail"     :['signal','BarZp-1000-150_signal',1,1] 
                  ,"BarZp_1000_1000_signal_fail"    :['signal','BarZp-1000-1000_signal',1,1] 
                  ,"BarZp_1995_1000_signal_fail"    :['signal','BarZp-1995-1000_signal',1,1] 
                  ,"BarZp_2000_1_signal_fail"       :['signal','BarZp-2000-1_signal',1,1] 
#                  ,"BarZp_2000_500_signal_fail"     :['signal','BarZp-2000-500_signal',1,1] 
                  ,"BarZp_10000_1_signal_fail"      :['signal','BarZp-10000-1_signal',1,1] 
                  ,"BarZp_10000_10_signal_fail"     :['signal','BarZp-10000-10_signal',1,1] 
                  ,"BarZp_10000_50_signal_fail"     :['signal','BarZp-10000-50_signal',1,1] 
                  ,"BarZp_10000_150_signal_fail"    :['signal','BarZp-10000-150_signal',1,1] 
                  ,"BarZp_10000_500_signal_fail"    :['signal','BarZp-10000-500_signal',1,1] 
#                  ,"BarZp_10000_1000_signal_fail"    :['signal','BarZp-10000-1000_signal',1,1] 

		  # Di muon-Control_fail
                  ,"Zll_zmm_fail"	       :['dimuon','zll',1,1]
 		  ,"Wlv_zmm_fail"      	       :['dimuon','wjets',1,0]
		  ,"Diboson_zmm_fail" 	       :['dimuon','dibosons',1,0]
		  ,"ttbar_zmm_fail"    	       :['dimuon','ttbar',1,0]
		  ,"ST_zmm_fail"               :['dimuon','stop',1,0]
		  ,"QCD_zmm_fail"              :['dimuon','qcd',1,0]
		  ,"Data_zmm_fail"    	       :['dimuon','data',0,0]

		  # Single muon (top) fail control
                  ,"Zll_tm_fail"       	       :['singlemuontop','zll',1,0]
 		  ,"Wlv_tm_fail"               :['singlemuontop','wjets',1,0]
		  ,"Diboson_tm_fail"           :['singlemuontop','dibosons',1,0]
		  ,"ttbar_tm_fail"             :['singlemuontop','ttbar',1,1]
		  ,"ST_tm_fail"                :['singlemuontop','stop',1,0]
		  ,"QCD_tm_fail"               :['singlemuontop','qcd',1,0]
		  ,"Data_tm_fail"     	       :['singlemuontop','data',0,0]

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
                  ,"Zll_te_fail"               :['singleelectrontop','zll',1,0]
                  ,"Wlv_te_fail"               :['singleelectrontop','wjets',1,0]
		  ,"Diboson_te_fail"           :['singleelectrontop','dibosons',1,0]
		  ,"ttbar_te_fail"             :['singleelectrontop','ttbar',1,0]
		  ,"ST_te_fail"                :['singleelectrontop','stop',1,0]
		  ,"QCD_te_fail"               :['singleelectrontop','qcd',1,0]
		  ,"Data_te_fail"              :['singleelectrontop','data',0,0]

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
