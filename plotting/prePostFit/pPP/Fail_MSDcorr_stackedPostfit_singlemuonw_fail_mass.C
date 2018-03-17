void Fail_MSDcorr_stackedPostfit_singlemuonw_fail_mass()
{
//=========Macro generated from canvas: c/c
//=========  (Tue Feb 13 18:07:02 2018) by ROOT version6.06/09
   TCanvas *c = new TCanvas("c", "c",0,0,720,800);
   gStyle->SetOptFit(1);
   gStyle->SetOptStat(0);
   gStyle->SetOptTitle(0);
   c->SetHighLightColor(2);
   c->Range(-60.18518,-4.614383,649.6914,4.587319);
   c->SetFillColor(0);
   c->SetBorderMode(0);
   c->SetBorderSize(10);
   c->SetLogy();
   c->SetTickx(1);
   c->SetTicky(1);
   c->SetLeftMargin(0.12);
   c->SetRightMargin(0.07);
   c->SetTopMargin(0.04838082);
   c->SetBottomMargin(0.3);
   c->SetFrameFillStyle(0);
   c->SetFrameBorderMode(0);
   c->SetFrameFillStyle(0);
   c->SetFrameBorderMode(0);
   Double_t xAxis14[5] = {25, 75, 100, 150, 600}; 
   
   TH1F *dummy__13 = new TH1F("dummy__13","h_all_prefit",4, xAxis14);
   dummy__13->SetBinContent(1,277.4364);
   dummy__13->SetBinContent(2,225.1506);
   dummy__13->SetBinContent(3,125.8241);
   dummy__13->SetBinContent(4,16.11437);
   dummy__13->SetBinError(1,20.99517);
   dummy__13->SetBinError(2,12.15403);
   dummy__13->SetBinError(3,7.427865);
   dummy__13->SetBinError(4,1.049087);
   dummy__13->SetMinimum(0.014);
   dummy__13->SetMaximum(13871.82);
   dummy__13->SetEntries(24);
   dummy__13->SetLineColor(0);
   dummy__13->SetLineStyle(0);
   dummy__13->SetLineWidth(0);
   dummy__13->SetMarkerColor(0);
   dummy__13->SetMarkerSize(0);
   dummy__13->GetXaxis()->SetNdivisions(405);
   dummy__13->GetXaxis()->SetLabelFont(42);
   dummy__13->GetXaxis()->SetLabelOffset(0.007);
   dummy__13->GetXaxis()->SetLabelSize(0);
   dummy__13->GetXaxis()->SetTitleSize(0);
   dummy__13->GetXaxis()->SetTickLength(0.025);
   dummy__13->GetXaxis()->SetTitleOffset(0.9);
   dummy__13->GetXaxis()->SetTitleFont(42);
   dummy__13->GetYaxis()->SetTitle("Events / GeV");
   dummy__13->GetYaxis()->SetNdivisions(405);
   dummy__13->GetYaxis()->SetLabelFont(42);
   dummy__13->GetYaxis()->SetLabelOffset(0.007);
   dummy__13->GetYaxis()->SetTitleSize(0.05);
   dummy__13->GetYaxis()->SetTickLength(0.025);
   dummy__13->GetYaxis()->SetTitleOffset(1.21);
   dummy__13->GetYaxis()->SetTitleFont(42);
   dummy__13->GetZaxis()->SetNdivisions(405);
   dummy__13->GetZaxis()->SetLabelFont(42);
   dummy__13->GetZaxis()->SetLabelOffset(0.007);
   dummy__13->GetZaxis()->SetTitleSize(0.05);
   dummy__13->GetZaxis()->SetTickLength(0.025);
   dummy__13->GetZaxis()->SetTitleFont(42);
   dummy__13->Draw("");
   
   THStack *h_stack_postfit = new THStack();
   h_stack_postfit->SetName("h_stack_postfit");
   h_stack_postfit->SetTitle("h_stack_postfit");
   Double_t xAxis15[5] = {25, 75, 100, 150, 600}; 
   
   TH1F *h_stack_postfit_stack_2 = new TH1F("h_stack_postfit_stack_2","h_stack_postfit",4, xAxis15);
   h_stack_postfit_stack_2->SetMinimum(0.1177559);
   h_stack_postfit_stack_2->SetMaximum(471.0237);
   h_stack_postfit_stack_2->SetDirectory(0);
   h_stack_postfit_stack_2->SetStats(0);
   h_stack_postfit_stack_2->SetLineStyle(0);
   h_stack_postfit_stack_2->GetXaxis()->SetNdivisions(405);
   h_stack_postfit_stack_2->GetXaxis()->SetLabelFont(42);
   h_stack_postfit_stack_2->GetXaxis()->SetLabelOffset(0.007);
   h_stack_postfit_stack_2->GetXaxis()->SetTitleSize(0.05);
   h_stack_postfit_stack_2->GetXaxis()->SetTickLength(0.025);
   h_stack_postfit_stack_2->GetXaxis()->SetTitleOffset(0.9);
   h_stack_postfit_stack_2->GetXaxis()->SetTitleFont(42);
   h_stack_postfit_stack_2->GetYaxis()->SetNdivisions(405);
   h_stack_postfit_stack_2->GetYaxis()->SetLabelFont(42);
   h_stack_postfit_stack_2->GetYaxis()->SetLabelOffset(0.007);
   h_stack_postfit_stack_2->GetYaxis()->SetTitleSize(0.05);
   h_stack_postfit_stack_2->GetYaxis()->SetTickLength(0.025);
   h_stack_postfit_stack_2->GetYaxis()->SetTitleOffset(1.05);
   h_stack_postfit_stack_2->GetYaxis()->SetTitleFont(42);
   h_stack_postfit_stack_2->GetZaxis()->SetNdivisions(405);
   h_stack_postfit_stack_2->GetZaxis()->SetLabelFont(42);
   h_stack_postfit_stack_2->GetZaxis()->SetLabelOffset(0.007);
   h_stack_postfit_stack_2->GetZaxis()->SetTitleSize(0.05);
   h_stack_postfit_stack_2->GetZaxis()->SetTickLength(0.025);
   h_stack_postfit_stack_2->GetZaxis()->SetTitleFont(42);
   h_stack_postfit->SetHistogram(h_stack_postfit_stack_2);
   
   Double_t xAxis16[5] = {25, 75, 100, 150, 600}; 
   
   TH1F *qcd__14 = new TH1F("qcd__14","qcd in mass0_wmn_fail",4, xAxis16);
   qcd__14->SetBinContent(1,8.884691);
   qcd__14->SetBinContent(2,2.08853);
   qcd__14->SetBinContent(3,2.158675);
   qcd__14->SetBinContent(4,0.1461555);
   qcd__14->SetBinError(1,10.14578);
   qcd__14->SetBinError(2,2.384493);
   qcd__14->SetBinError(3,2.465841);
   qcd__14->SetBinError(4,0.166964);
   qcd__14->SetEntries(4);

   Int_t ci;      // for color index setting
   TColor *color; // for color definition with alpha
   ci = TColor::GetColor("#ffccff");
   qcd__14->SetFillColor(ci);
   qcd__14->GetXaxis()->SetTitle("min(999.9999,fjmass)");
   qcd__14->GetXaxis()->SetLabelFont(42);
   qcd__14->GetXaxis()->SetLabelSize(0.035);
   qcd__14->GetXaxis()->SetTitleSize(0.035);
   qcd__14->GetXaxis()->SetTitleFont(42);
   qcd__14->GetYaxis()->SetTitle("Events / ( 143.75 )");
   qcd__14->GetYaxis()->SetLabelFont(42);
   qcd__14->GetYaxis()->SetLabelSize(0.035);
   qcd__14->GetYaxis()->SetTitleSize(0.035);
   qcd__14->GetYaxis()->SetTitleFont(42);
   qcd__14->GetZaxis()->SetLabelFont(42);
   qcd__14->GetZaxis()->SetLabelSize(0.035);
   qcd__14->GetZaxis()->SetTitleSize(0.035);
   qcd__14->GetZaxis()->SetTitleFont(42);
   h_stack_postfit->Add(qcd,"");
   Double_t xAxis17[5] = {25, 75, 100, 150, 600}; 
   
   TH1F *zll__15 = new TH1F("zll__15","zll in mass0_wmn_fail",4, xAxis17);
   zll__15->SetBinContent(1,6.364727);
   zll__15->SetBinContent(2,3.098768);
   zll__15->SetBinContent(3,2.56512);
   zll__15->SetBinContent(4,0.3333838);
   zll__15->SetBinError(1,0.1850314);
   zll__15->SetBinError(2,0.09025384);
   zll__15->SetBinError(3,0.07456177);
   zll__15->SetBinError(4,0.009743748);
   zll__15->SetEntries(4);

   ci = TColor::GetColor("#99ffff");
   zll__15->SetFillColor(ci);
   zll__15->GetXaxis()->SetTitle("min(999.9999,fjmass)");
   zll__15->GetXaxis()->SetLabelFont(42);
   zll__15->GetXaxis()->SetLabelSize(0.035);
   zll__15->GetXaxis()->SetTitleSize(0.035);
   zll__15->GetXaxis()->SetTitleFont(42);
   zll__15->GetYaxis()->SetTitle("Events / ( 143.75 )");
   zll__15->GetYaxis()->SetLabelFont(42);
   zll__15->GetYaxis()->SetLabelSize(0.035);
   zll__15->GetYaxis()->SetTitleSize(0.035);
   zll__15->GetYaxis()->SetTitleFont(42);
   zll__15->GetZaxis()->SetLabelFont(42);
   zll__15->GetZaxis()->SetLabelSize(0.035);
   zll__15->GetZaxis()->SetTitleSize(0.035);
   zll__15->GetZaxis()->SetTitleFont(42);
   h_stack_postfit->Add(zll,"");
   Double_t xAxis18[5] = {25, 75, 100, 150, 600}; 
   
   TH1F *dibosons__16 = new TH1F("dibosons__16","dibosons in mass0_wmn_fail",4, xAxis18);
   dibosons__16->SetBinContent(1,6.529192);
   dibosons__16->SetBinContent(2,28.36196);
   dibosons__16->SetBinContent(3,2.308034);
   dibosons__16->SetBinContent(4,0.2080192);
   dibosons__16->SetBinError(1,0.653082);
   dibosons__16->SetBinError(2,2.836708);
   dibosons__16->SetBinError(3,0.2308296);
   dibosons__16->SetBinError(4,0.02080949);
   dibosons__16->SetEntries(4);

   ci = TColor::GetColor("#ffff99");
   dibosons__16->SetFillColor(ci);
   dibosons__16->GetXaxis()->SetTitle("min(999.9999,fjmass)");
   dibosons__16->GetXaxis()->SetLabelFont(42);
   dibosons__16->GetXaxis()->SetLabelSize(0.035);
   dibosons__16->GetXaxis()->SetTitleSize(0.035);
   dibosons__16->GetXaxis()->SetTitleFont(42);
   dibosons__16->GetYaxis()->SetTitle("Events / ( 143.75 )");
   dibosons__16->GetYaxis()->SetLabelFont(42);
   dibosons__16->GetYaxis()->SetLabelSize(0.035);
   dibosons__16->GetYaxis()->SetTitleSize(0.035);
   dibosons__16->GetYaxis()->SetTitleFont(42);
   dibosons__16->GetZaxis()->SetLabelFont(42);
   dibosons__16->GetZaxis()->SetLabelSize(0.035);
   dibosons__16->GetZaxis()->SetTitleSize(0.035);
   dibosons__16->GetZaxis()->SetTitleFont(42);
   h_stack_postfit->Add(dibosons,"");
   Double_t xAxis19[5] = {25, 75, 100, 150, 600}; 
   
   TH1F *stop__17 = new TH1F("stop__17","stop in mass0_wmn_fail",4, xAxis19);
   stop__17->SetBinContent(1,3.674201);
   stop__17->SetBinContent(2,14.36953);
   stop__17->SetBinContent(3,4.723723);
   stop__17->SetBinContent(4,0.2370124);
   stop__17->SetBinError(1,0.4417584);
   stop__17->SetBinError(2,1.728038);
   stop__17->SetBinError(3,0.5670928);
   stop__17->SetBinError(4,0.02849261);
   stop__17->SetEntries(4);

   ci = TColor::GetColor("#ff9999");
   stop__17->SetFillColor(ci);
   stop__17->GetXaxis()->SetTitle("min(999.9999,fjmass)");
   stop__17->GetXaxis()->SetLabelFont(42);
   stop__17->GetXaxis()->SetLabelSize(0.035);
   stop__17->GetXaxis()->SetTitleSize(0.035);
   stop__17->GetXaxis()->SetTitleFont(42);
   stop__17->GetYaxis()->SetTitle("Events / ( 143.75 )");
   stop__17->GetYaxis()->SetLabelFont(42);
   stop__17->GetYaxis()->SetLabelSize(0.035);
   stop__17->GetYaxis()->SetTitleSize(0.035);
   stop__17->GetYaxis()->SetTitleFont(42);
   stop__17->GetZaxis()->SetLabelFont(42);
   stop__17->GetZaxis()->SetLabelSize(0.035);
   stop__17->GetZaxis()->SetTitleSize(0.035);
   stop__17->GetZaxis()->SetTitleFont(42);
   h_stack_postfit->Add(stop,"");
   Double_t xAxis20[5] = {25, 75, 100, 150, 600}; 
   
   TH1F *wjets__18 = new TH1F("wjets__18","wjets in mass0_wmn_fail",4, xAxis20);
   wjets__18->SetBinContent(1,257.7104);
   wjets__18->SetBinContent(2,123.3701);
   wjets__18->SetBinContent(3,100.152);
   wjets__18->SetBinContent(4,15.70529);
   wjets__18->SetBinError(1,11.52111);
   wjets__18->SetBinError(2,4.395737);
   wjets__18->SetBinError(3,2.047826);
   wjets__18->SetBinError(4,0.2271536);
   wjets__18->SetEntries(4);

   ci = TColor::GetColor("#ccffcc");
   wjets__18->SetFillColor(ci);
   wjets__18->GetXaxis()->SetTitle("min(999.9999,fjmass)");
   wjets__18->GetXaxis()->SetLabelFont(42);
   wjets__18->GetXaxis()->SetLabelSize(0.035);
   wjets__18->GetXaxis()->SetTitleSize(0.035);
   wjets__18->GetXaxis()->SetTitleFont(42);
   wjets__18->GetYaxis()->SetTitle("Events / ( 143.75 )");
   wjets__18->GetYaxis()->SetLabelFont(42);
   wjets__18->GetYaxis()->SetLabelSize(0.035);
   wjets__18->GetYaxis()->SetTitleSize(0.035);
   wjets__18->GetYaxis()->SetTitleFont(42);
   wjets__18->GetZaxis()->SetLabelFont(42);
   wjets__18->GetZaxis()->SetLabelSize(0.035);
   wjets__18->GetZaxis()->SetTitleSize(0.035);
   wjets__18->GetZaxis()->SetTitleFont(42);
   h_stack_postfit->Add(wjets,"");
   Double_t xAxis21[5] = {25, 75, 100, 150, 600}; 
   
   TH1F *ttbar__19 = new TH1F("ttbar__19","ttbar in mass0_wmn_fail",4, xAxis21);
   ttbar__19->SetBinContent(1,11.22657);
   ttbar__19->SetBinContent(2,51.39575);
   ttbar__19->SetBinContent(3,22.39365);
   ttbar__19->SetBinContent(4,0.9017456);
   ttbar__19->SetBinError(1,0.3330144);
   ttbar__19->SetBinError(2,1.523565);
   ttbar__19->SetBinError(3,0.663831);
   ttbar__19->SetBinError(4,0.02675792);
   ttbar__19->SetEntries(4);

   ci = TColor::GetColor("#ffcc66");
   ttbar__19->SetFillColor(ci);
   ttbar__19->GetXaxis()->SetTitle("min(999.9999,fjmass)");
   ttbar__19->GetXaxis()->SetLabelFont(42);
   ttbar__19->GetXaxis()->SetLabelSize(0.035);
   ttbar__19->GetXaxis()->SetTitleSize(0.035);
   ttbar__19->GetXaxis()->SetTitleFont(42);
   ttbar__19->GetYaxis()->SetTitle("Events / ( 143.75 )");
   ttbar__19->GetYaxis()->SetLabelFont(42);
   ttbar__19->GetYaxis()->SetLabelSize(0.035);
   ttbar__19->GetYaxis()->SetTitleSize(0.035);
   ttbar__19->GetYaxis()->SetTitleFont(42);
   ttbar__19->GetZaxis()->SetLabelFont(42);
   ttbar__19->GetZaxis()->SetLabelSize(0.035);
   ttbar__19->GetZaxis()->SetTitleSize(0.035);
   ttbar__19->GetZaxis()->SetTitleFont(42);
   h_stack_postfit->Add(ttbar,"");
   h_stack_postfit->Draw("hist same");
   Double_t xAxis22[5] = {25, 75, 100, 150, 600}; 
   
   TH1F *h_all_prefit__20 = new TH1F("h_all_prefit__20","h_all_prefit",4, xAxis22);
   h_all_prefit__20->SetBinContent(1,277.4364);
   h_all_prefit__20->SetBinContent(2,225.1506);
   h_all_prefit__20->SetBinContent(3,125.8241);
   h_all_prefit__20->SetBinContent(4,16.11437);
   h_all_prefit__20->SetBinError(1,20.99517);
   h_all_prefit__20->SetBinError(2,12.15403);
   h_all_prefit__20->SetBinError(3,7.427865);
   h_all_prefit__20->SetBinError(4,1.049087);
   h_all_prefit__20->SetEntries(24);
   h_all_prefit__20->SetLineColor(2);
   h_all_prefit__20->SetLineStyle(7);
   h_all_prefit__20->SetLineWidth(2);
   h_all_prefit__20->GetXaxis()->SetNdivisions(405);
   h_all_prefit__20->GetXaxis()->SetLabelFont(42);
   h_all_prefit__20->GetXaxis()->SetLabelOffset(0.007);
   h_all_prefit__20->GetXaxis()->SetTitleSize(0.05);
   h_all_prefit__20->GetXaxis()->SetTickLength(0.025);
   h_all_prefit__20->GetXaxis()->SetTitleOffset(0.9);
   h_all_prefit__20->GetXaxis()->SetTitleFont(42);
   h_all_prefit__20->GetYaxis()->SetNdivisions(405);
   h_all_prefit__20->GetYaxis()->SetLabelFont(42);
   h_all_prefit__20->GetYaxis()->SetLabelOffset(0.007);
   h_all_prefit__20->GetYaxis()->SetTitleSize(0.05);
   h_all_prefit__20->GetYaxis()->SetTickLength(0.025);
   h_all_prefit__20->GetYaxis()->SetTitleOffset(1.05);
   h_all_prefit__20->GetYaxis()->SetTitleFont(42);
   h_all_prefit__20->GetZaxis()->SetNdivisions(405);
   h_all_prefit__20->GetZaxis()->SetLabelFont(42);
   h_all_prefit__20->GetZaxis()->SetLabelOffset(0.007);
   h_all_prefit__20->GetZaxis()->SetTitleSize(0.05);
   h_all_prefit__20->GetZaxis()->SetTickLength(0.025);
   h_all_prefit__20->GetZaxis()->SetTitleFont(42);
   h_all_prefit__20->Draw("histsame");
   Double_t xAxis23[5] = {25, 75, 100, 150, 600}; 
   
   TH1F *singlemuonw_data__21 = new TH1F("singlemuonw_data__21","base",4, xAxis23);
   singlemuonw_data__21->SetBinContent(1,294.38);
   singlemuonw_data__21->SetBinContent(2,222.68);
   singlemuonw_data__21->SetBinContent(3,134.3);
   singlemuonw_data__21->SetBinContent(4,17.53111);
   singlemuonw_data__21->SetBinContent(5,0.02444444);
   singlemuonw_data__21->SetBinError(1,2.426438);
   singlemuonw_data__21->SetBinError(2,2.984493);
   singlemuonw_data__21->SetBinError(3,1.638902);
   singlemuonw_data__21->SetBinError(4,0.1973779);
   singlemuonw_data__21->SetBinError(5,0.007370277);
   singlemuonw_data__21->SetEntries(25537.76);
   singlemuonw_data__21->SetMarkerStyle(20);
   singlemuonw_data__21->SetMarkerSize(1.2);
   singlemuonw_data__21->GetXaxis()->SetTitle("min(999.9999,fjmass)");
   singlemuonw_data__21->GetXaxis()->SetLabelFont(42);
   singlemuonw_data__21->GetXaxis()->SetLabelSize(0.035);
   singlemuonw_data__21->GetXaxis()->SetTitleSize(0.035);
   singlemuonw_data__21->GetXaxis()->SetTitleFont(42);
   singlemuonw_data__21->GetYaxis()->SetLabelFont(42);
   singlemuonw_data__21->GetYaxis()->SetLabelSize(0.035);
   singlemuonw_data__21->GetYaxis()->SetTitleSize(0.035);
   singlemuonw_data__21->GetYaxis()->SetTitleFont(42);
   singlemuonw_data__21->GetZaxis()->SetLabelFont(42);
   singlemuonw_data__21->GetZaxis()->SetLabelSize(0.035);
   singlemuonw_data__21->GetZaxis()->SetTitleSize(0.035);
   singlemuonw_data__21->GetZaxis()->SetTitleFont(42);
   singlemuonw_data__21->Draw("epsame e0");
   
   TLegend *leg = new TLegend(0.55,0.65,0.88,0.93,NULL,"brNDC");
   leg->SetBorderSize(0);
   leg->SetTextSize(0.035);
   leg->SetLineColor(0);
   leg->SetLineStyle(1);
   leg->SetLineWidth(1);
   leg->SetFillColor(0);
   leg->SetFillStyle(0);
   TLegendEntry *entry=leg->AddEntry("singlemuonw_data","Data","elp");
   entry->SetLineColor(1);
   entry->SetLineStyle(1);
   entry->SetLineWidth(1);
   entry->SetMarkerColor(1);
   entry->SetMarkerStyle(20);
   entry->SetMarkerSize(1.2);
   entry->SetTextFont(42);
   entry=leg->AddEntry("h_all_prefit","#Sigma SM (pre-fit)","l");
   entry->SetLineColor(2);
   entry->SetLineStyle(7);
   entry->SetLineWidth(2);
   entry->SetMarkerColor(1);
   entry->SetMarkerStyle(21);
   entry->SetMarkerSize(1);
   entry->SetTextFont(42);
   entry=leg->AddEntry("ttbar","t#bar{t}","f");

   ci = TColor::GetColor("#ffcc66");
   entry->SetFillColor(ci);
   entry->SetFillStyle(1001);
   entry->SetLineColor(1);
   entry->SetLineStyle(1);
   entry->SetLineWidth(1);
   entry->SetMarkerColor(1);
   entry->SetMarkerStyle(21);
   entry->SetMarkerSize(1);
   entry->SetTextFont(42);
   entry=leg->AddEntry("wjets","W+jets","f");

   ci = TColor::GetColor("#ccffcc");
   entry->SetFillColor(ci);
   entry->SetFillStyle(1001);
   entry->SetLineColor(1);
   entry->SetLineStyle(1);
   entry->SetLineWidth(1);
   entry->SetMarkerColor(1);
   entry->SetMarkerStyle(21);
   entry->SetMarkerSize(1);
   entry->SetTextFont(42);
   entry=leg->AddEntry("stop","t","f");

   ci = TColor::GetColor("#ff9999");
   entry->SetFillColor(ci);
   entry->SetFillStyle(1001);
   entry->SetLineColor(1);
   entry->SetLineStyle(1);
   entry->SetLineWidth(1);
   entry->SetMarkerColor(1);
   entry->SetMarkerStyle(21);
   entry->SetMarkerSize(1);
   entry->SetTextFont(42);
   entry=leg->AddEntry("dibosons","Diboson","f");

   ci = TColor::GetColor("#ffff99");
   entry->SetFillColor(ci);
   entry->SetFillStyle(1001);
   entry->SetLineColor(1);
   entry->SetLineStyle(1);
   entry->SetLineWidth(1);
   entry->SetMarkerColor(1);
   entry->SetMarkerStyle(21);
   entry->SetMarkerSize(1);
   entry->SetTextFont(42);
   entry=leg->AddEntry("zll","Z+jets","f");

   ci = TColor::GetColor("#99ffff");
   entry->SetFillColor(ci);
   entry->SetFillStyle(1001);
   entry->SetLineColor(1);
   entry->SetLineStyle(1);
   entry->SetLineWidth(1);
   entry->SetMarkerColor(1);
   entry->SetMarkerStyle(21);
   entry->SetMarkerSize(1);
   entry->SetTextFont(42);
   entry=leg->AddEntry("qcd","QCD","f");

   ci = TColor::GetColor("#ffccff");
   entry->SetFillColor(ci);
   entry->SetFillStyle(1001);
   entry->SetLineColor(1);
   entry->SetLineStyle(1);
   entry->SetLineWidth(1);
   entry->SetMarkerColor(1);
   entry->SetMarkerStyle(21);
   entry->SetMarkerSize(1);
   entry->SetTextFont(42);
   leg->Draw();
   TLatex *   tex = new TLatex(0.16,0.825,"W CR (#mu) fail");
tex->SetNDC();
   tex->SetTextFont(42);
   tex->SetTextSize(0.0411237);
   tex->SetLineWidth(2);
   tex->Draw();
      tex = new TLatex(0.92,0.963,"35.9 fb^{-1} (13 TeV)");
tex->SetNDC();
   tex->SetTextAlign(31);
   tex->SetTextFont(42);
   tex->SetTextSize(0.04451035);
   tex->SetLineWidth(2);
   tex->Draw();
      tex = new TLatex(0.16,0.87715,"#bf{CMS}");
tex->SetNDC();
   tex->SetTextFont(42);
   tex->SetTextSize(0.06);
   tex->SetLineWidth(2);
   tex->Draw();
   Double_t xAxis24[5] = {25, 75, 100, 150, 600}; 
   
   TH1F *dummy_copy__22 = new TH1F("dummy_copy__22","h_all_prefit",4, xAxis24);
   dummy_copy__22->SetBinContent(1,277.4364);
   dummy_copy__22->SetBinContent(2,225.1506);
   dummy_copy__22->SetBinContent(3,125.8241);
   dummy_copy__22->SetBinContent(4,16.11437);
   dummy_copy__22->SetBinError(1,20.99517);
   dummy_copy__22->SetBinError(2,12.15403);
   dummy_copy__22->SetBinError(3,7.427865);
   dummy_copy__22->SetBinError(4,1.049087);
   dummy_copy__22->SetMinimum(0.014);
   dummy_copy__22->SetMaximum(13871.82);
   dummy_copy__22->SetEntries(24);
   dummy_copy__22->SetDirectory(0);
   dummy_copy__22->SetLineColor(0);
   dummy_copy__22->SetLineStyle(0);
   dummy_copy__22->SetLineWidth(0);
   dummy_copy__22->SetMarkerColor(0);
   dummy_copy__22->SetMarkerSize(0);
   dummy_copy__22->GetXaxis()->SetNdivisions(405);
   dummy_copy__22->GetXaxis()->SetLabelFont(42);
   dummy_copy__22->GetXaxis()->SetLabelOffset(0.007);
   dummy_copy__22->GetXaxis()->SetLabelSize(0);
   dummy_copy__22->GetXaxis()->SetTitleSize(0);
   dummy_copy__22->GetXaxis()->SetTickLength(0.025);
   dummy_copy__22->GetXaxis()->SetTitleOffset(0.9);
   dummy_copy__22->GetXaxis()->SetTitleFont(42);
   dummy_copy__22->GetYaxis()->SetTitle("Events / GeV");
   dummy_copy__22->GetYaxis()->SetNdivisions(405);
   dummy_copy__22->GetYaxis()->SetLabelFont(42);
   dummy_copy__22->GetYaxis()->SetLabelOffset(0.007);
   dummy_copy__22->GetYaxis()->SetTitleSize(0.05);
   dummy_copy__22->GetYaxis()->SetTickLength(0.025);
   dummy_copy__22->GetYaxis()->SetTitleOffset(1.21);
   dummy_copy__22->GetYaxis()->SetTitleFont(42);
   dummy_copy__22->GetZaxis()->SetNdivisions(405);
   dummy_copy__22->GetZaxis()->SetLabelFont(42);
   dummy_copy__22->GetZaxis()->SetLabelOffset(0.007);
   dummy_copy__22->GetZaxis()->SetTitleSize(0.05);
   dummy_copy__22->GetZaxis()->SetTickLength(0.025);
   dummy_copy__22->GetZaxis()->SetTitleFont(42);
   dummy_copy__22->Draw("sameaxis");
  
// ------------>Primitives in pad: pad
   TPad *pad = new TPad("pad", "pad",0,0,1,0.9);
   pad->Draw();
   pad->cd();
   pad->Range(-60.18518,-1.429412,649.6914,10.33529);
   pad->SetFillColor(0);
   pad->SetFillStyle(4000);
   pad->SetBorderMode(0);
   pad->SetBorderSize(2);
   pad->SetTickx(1);
   pad->SetTicky(1);
   pad->SetLeftMargin(0.12);
   pad->SetRightMargin(0.07);
   pad->SetTopMargin(0.7);
   pad->SetBottomMargin(0.13);
   pad->SetFrameFillStyle(0);
   pad->SetFrameBorderMode(0);
   pad->SetFrameFillStyle(0);
   pad->SetFrameBorderMode(0);
   Double_t xAxis25[5] = {25, 75, 100, 150, 600}; 
   
   TH1F *dummy2__23 = new TH1F("dummy2__23","dummy2",4, xAxis25);
   dummy2__23->SetBinContent(1,1);
   dummy2__23->SetBinContent(2,1);
   dummy2__23->SetBinContent(3,1);
   dummy2__23->SetMinimum(0.1);
   dummy2__23->SetMaximum(2.1);
   dummy2__23->SetEntries(3);
   dummy2__23->SetLineColor(0);
   dummy2__23->SetLineStyle(0);
   dummy2__23->SetLineWidth(0);
   dummy2__23->SetMarkerColor(0);
   dummy2__23->SetMarkerSize(0);
   dummy2__23->GetXaxis()->SetTitle("Fatjet m_{SD} (GeV)");
   dummy2__23->GetXaxis()->SetLabelFont(42);
   dummy2__23->GetXaxis()->SetLabelOffset(0.007);
   dummy2__23->GetXaxis()->SetTitleSize(0.05);
   dummy2__23->GetXaxis()->SetTickLength(0.025);
   dummy2__23->GetXaxis()->SetTitleOffset(0.9);
   dummy2__23->GetXaxis()->SetTitleFont(42);
   dummy2__23->GetYaxis()->SetTitle("Data / Pred.");
   dummy2__23->GetYaxis()->CenterTitle(true);
   dummy2__23->GetYaxis()->SetNdivisions(5);
   dummy2__23->GetYaxis()->SetLabelFont(42);
   dummy2__23->GetYaxis()->SetLabelOffset(0.007);
   dummy2__23->GetYaxis()->SetLabelSize(0.03);
   dummy2__23->GetYaxis()->SetTickLength(0.025);
   dummy2__23->GetYaxis()->SetTitleOffset(1.5);
   dummy2__23->GetYaxis()->SetTitleFont(42);
   dummy2__23->GetZaxis()->SetNdivisions(405);
   dummy2__23->GetZaxis()->SetLabelFont(42);
   dummy2__23->GetZaxis()->SetLabelOffset(0.007);
   dummy2__23->GetZaxis()->SetTitleSize(0.05);
   dummy2__23->GetZaxis()->SetTickLength(0.025);
   dummy2__23->GetZaxis()->SetTitleFont(42);
   dummy2__23->Draw("hist");
   Double_t xAxis26[5] = {25, 75, 100, 150, 600}; 
   
   TH1F *total_background__24 = new TH1F("total_background__24","Total background in mass0_wmn_fail",4, xAxis26);
   total_background__24->SetBinContent(1,1);
   total_background__24->SetBinContent(2,1);
   total_background__24->SetBinContent(3,1);
   total_background__24->SetBinContent(4,1);
   total_background__24->SetBinContent(5,1);
   total_background__24->SetBinError(1,0.06934545);
   total_background__24->SetBinError(2,0.01548945);
   total_background__24->SetBinError(3,0.02011001);
   total_background__24->SetBinError(4,0.01590383);
   total_background__24->SetEntries(29);

   ci = TColor::GetColor("#f4eb99");
   total_background__24->SetFillColor(ci);

   ci = TColor::GetColor("#f4eb99");
   total_background__24->SetLineColor(ci);
   total_background__24->SetMarkerSize(0);
   total_background__24->GetXaxis()->SetTitle("min(999.9999,fjmass)");
   total_background__24->GetXaxis()->SetLabelFont(42);
   total_background__24->GetXaxis()->SetLabelSize(0.035);
   total_background__24->GetXaxis()->SetTitleSize(0.035);
   total_background__24->GetXaxis()->SetTitleFont(42);
   total_background__24->GetYaxis()->SetTitle("Events / ( 143.75 )");
   total_background__24->GetYaxis()->SetLabelFont(42);
   total_background__24->GetYaxis()->SetLabelSize(0.035);
   total_background__24->GetYaxis()->SetTitleSize(0.035);
   total_background__24->GetYaxis()->SetTitleFont(42);
   total_background__24->GetZaxis()->SetLabelFont(42);
   total_background__24->GetZaxis()->SetLabelSize(0.035);
   total_background__24->GetZaxis()->SetTitleSize(0.035);
   total_background__24->GetZaxis()->SetTitleFont(42);
   total_background__24->Draw("e2same");
   
   TF1 *f12 = new TF1("f1","1",-5000,5000);
   f12->SetFillColor(19);
   f12->SetFillStyle(0);
   f12->SetLineWidth(2);
   f12->SetLineStyle(2);
   f12->GetXaxis()->SetNdivisions(405);
   f12->GetXaxis()->SetLabelFont(42);
   f12->GetXaxis()->SetLabelOffset(0.007);
   f12->GetXaxis()->SetTitleSize(0.05);
   f12->GetXaxis()->SetTickLength(0.025);
   f12->GetXaxis()->SetTitleOffset(0.9);
   f12->GetXaxis()->SetTitleFont(42);
   f12->GetYaxis()->SetNdivisions(405);
   f12->GetYaxis()->SetLabelFont(42);
   f12->GetYaxis()->SetLabelOffset(0.007);
   f12->GetYaxis()->SetTitleSize(0.05);
   f12->GetYaxis()->SetTickLength(0.025);
   f12->GetYaxis()->SetTitleOffset(1.05);
   f12->GetYaxis()->SetTitleFont(42);
   f12->Draw("same");
   
   Double_t _fx3003[4] = {
   50,
   87.5,
   125,
   375};
   Double_t _fy3003[4] = {
   1.061072,
   0.9890268,
   1.067363,
   1.087918};
   Double_t _felx3003[4] = {
   25,
   12.5,
   25,
   225};
   Double_t _fely3003[4] = {
   0.008745925,
   0.01325554,
   0.01302535,
   0.01224856};
   Double_t _fehx3003[4] = {
   25,
   12.5,
   25,
   225};
   Double_t _fehy3003[4] = {
   0.008745925,
   0.01325554,
   0.01302535,
   0.01224856};
   TGraphAsymmErrors *grae = new TGraphAsymmErrors(4,_fx3003,_fy3003,_felx3003,_fehx3003,_fely3003,_fehy3003);
   grae->SetName("");
   grae->SetTitle("");
   grae->SetFillColor(1);
   grae->SetLineColor(2);
   grae->SetLineStyle(7);
   grae->SetMarkerColor(2);
   grae->SetMarkerStyle(24);
   
   TH1F *Graph_Graph3003 = new TH1F("Graph_Graph3003","",100,0,657.5);
   Graph_Graph3003->SetMinimum(0.9633318);
   Graph_Graph3003->SetMaximum(1.112606);
   Graph_Graph3003->SetDirectory(0);
   Graph_Graph3003->SetStats(0);
   Graph_Graph3003->SetLineStyle(0);
   Graph_Graph3003->GetXaxis()->SetNdivisions(405);
   Graph_Graph3003->GetXaxis()->SetLabelFont(42);
   Graph_Graph3003->GetXaxis()->SetLabelOffset(0.007);
   Graph_Graph3003->GetXaxis()->SetTitleSize(0.05);
   Graph_Graph3003->GetXaxis()->SetTickLength(0.025);
   Graph_Graph3003->GetXaxis()->SetTitleOffset(0.9);
   Graph_Graph3003->GetXaxis()->SetTitleFont(42);
   Graph_Graph3003->GetYaxis()->SetNdivisions(405);
   Graph_Graph3003->GetYaxis()->SetLabelFont(42);
   Graph_Graph3003->GetYaxis()->SetLabelOffset(0.007);
   Graph_Graph3003->GetYaxis()->SetTitleSize(0.05);
   Graph_Graph3003->GetYaxis()->SetTickLength(0.025);
   Graph_Graph3003->GetYaxis()->SetTitleOffset(1.05);
   Graph_Graph3003->GetYaxis()->SetTitleFont(42);
   Graph_Graph3003->GetZaxis()->SetNdivisions(405);
   Graph_Graph3003->GetZaxis()->SetLabelFont(42);
   Graph_Graph3003->GetZaxis()->SetLabelOffset(0.007);
   Graph_Graph3003->GetZaxis()->SetTitleSize(0.05);
   Graph_Graph3003->GetZaxis()->SetTickLength(0.025);
   Graph_Graph3003->GetZaxis()->SetTitleFont(42);
   grae->SetHistogram(Graph_Graph3003);
   
   grae->Draw("ep 0");
   
   Double_t _fx3004[4] = {
   50,
   87.5,
   125,
   375};
   Double_t _fy3004[4] = {
   0.9999667,
   0.9999792,
   0.9999908,
   0.9999719};
   Double_t _felx3004[4] = {
   25,
   12.5,
   25,
   225};
   Double_t _fely3004[4] = {
   0.008242261,
   0.01340233,
   0.01220318,
   0.0112584};
   Double_t _fehx3004[4] = {
   25,
   12.5,
   25,
   225};
   Double_t _fehy3004[4] = {
   0.008242261,
   0.01340233,
   0.01220318,
   0.0112584};
   grae = new TGraphAsymmErrors(4,_fx3004,_fy3004,_felx3004,_fehx3004,_fely3004,_fehy3004);
   grae->SetName("");
   grae->SetTitle("");
   grae->SetFillColor(1);
   grae->SetMarkerStyle(20);
   
   TH1F *Graph_Graph3004 = new TH1F("Graph_Graph3004","",100,0,657.5);
   Graph_Graph3004->SetMinimum(0.9838964);
   Graph_Graph3004->SetMaximum(1.016062);
   Graph_Graph3004->SetDirectory(0);
   Graph_Graph3004->SetStats(0);
   Graph_Graph3004->SetLineStyle(0);
   Graph_Graph3004->GetXaxis()->SetNdivisions(405);
   Graph_Graph3004->GetXaxis()->SetLabelFont(42);
   Graph_Graph3004->GetXaxis()->SetLabelOffset(0.007);
   Graph_Graph3004->GetXaxis()->SetTitleSize(0.05);
   Graph_Graph3004->GetXaxis()->SetTickLength(0.025);
   Graph_Graph3004->GetXaxis()->SetTitleOffset(0.9);
   Graph_Graph3004->GetXaxis()->SetTitleFont(42);
   Graph_Graph3004->GetYaxis()->SetNdivisions(405);
   Graph_Graph3004->GetYaxis()->SetLabelFont(42);
   Graph_Graph3004->GetYaxis()->SetLabelOffset(0.007);
   Graph_Graph3004->GetYaxis()->SetTitleSize(0.05);
   Graph_Graph3004->GetYaxis()->SetTickLength(0.025);
   Graph_Graph3004->GetYaxis()->SetTitleOffset(1.05);
   Graph_Graph3004->GetYaxis()->SetTitleFont(42);
   Graph_Graph3004->GetZaxis()->SetNdivisions(405);
   Graph_Graph3004->GetZaxis()->SetLabelFont(42);
   Graph_Graph3004->GetZaxis()->SetLabelOffset(0.007);
   Graph_Graph3004->GetZaxis()->SetTitleSize(0.05);
   Graph_Graph3004->GetZaxis()->SetTickLength(0.025);
   Graph_Graph3004->GetZaxis()->SetTitleFont(42);
   grae->SetHistogram(Graph_Graph3004);
   
   grae->Draw("ep 0");
   
   leg = new TLegend(0.671,0.25,0.821,0.29,NULL,"brNDC");
   leg->SetBorderSize(0);
   leg->SetLineColor(0);
   leg->SetLineStyle(1);
   leg->SetLineWidth(1);
   leg->SetFillColor(0);
   leg->SetFillStyle(0);
   entry=leg->AddEntry("","pre-fit","elp");
   entry->SetLineColor(2);
   entry->SetLineStyle(7);
   entry->SetLineWidth(1);
   entry->SetMarkerColor(2);
   entry->SetMarkerStyle(24);
   entry->SetMarkerSize(1);
   entry->SetTextFont(42);
   leg->Draw();
   
   leg = new TLegend(0.792,0.25,0.942,0.29,NULL,"brNDC");
   leg->SetBorderSize(0);
   leg->SetLineColor(0);
   leg->SetLineStyle(1);
   leg->SetLineWidth(1);
   leg->SetFillColor(0);
   leg->SetFillStyle(0);
   entry=leg->AddEntry("","post-fit","elp");
   entry->SetLineColor(1);
   entry->SetLineStyle(1);
   entry->SetLineWidth(1);
   entry->SetMarkerColor(1);
   entry->SetMarkerStyle(20);
   entry->SetMarkerSize(1);
   entry->SetTextFont(42);
   leg->Draw();
   
   leg = new TLegend(0.26,0.25,0.41,0.29,NULL,"brNDC");
   leg->SetBorderSize(0);
   leg->SetLineColor(0);
   leg->SetLineStyle(1);
   leg->SetLineWidth(1);
   leg->SetFillColor(0);
   leg->SetFillStyle(0);
   leg->Draw();
   
   leg = new TLegend(0.13,0.25,0.28,0.29,NULL,"brNDC");
   leg->SetBorderSize(0);
   leg->SetLineColor(0);
   leg->SetLineStyle(1);
   leg->SetLineWidth(1);
   leg->SetFillColor(0);
   leg->SetFillStyle(0);
   entry=leg->AddEntry("total_background","post-fit unc.","f");

   ci = TColor::GetColor("#f4eb99");
   entry->SetFillColor(ci);
   entry->SetFillStyle(1001);

   ci = TColor::GetColor("#f4eb99");
   entry->SetLineColor(ci);
   entry->SetLineStyle(1);
   entry->SetLineWidth(1);
   entry->SetMarkerColor(1);
   entry->SetMarkerStyle(21);
   entry->SetMarkerSize(1);
   entry->SetTextFont(42);
   leg->Draw();
   pad->Modified();
   c->cd();
   c->Modified();
   c->cd();
   c->SetSelected(c);
}
