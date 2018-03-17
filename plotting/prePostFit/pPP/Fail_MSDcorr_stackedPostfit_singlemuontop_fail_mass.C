void Fail_MSDcorr_stackedPostfit_singlemuontop_fail_mass()
{
//=========Macro generated from canvas: c/c
//=========  (Tue Feb 13 18:07:02 2018) by ROOT version6.06/09
   TCanvas *c = new TCanvas("c", "c",0,0,720,800);
   gStyle->SetOptFit(1);
   gStyle->SetOptStat(0);
   gStyle->SetOptTitle(0);
   c->SetHighLightColor(2);
   c->Range(-60.18518,-6.321467,649.6914,3.746655);
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
   Double_t xAxis40[5] = {25, 75, 100, 150, 600}; 
   
   TH1F *dummy__37 = new TH1F("dummy__37","h_all_prefit",4, xAxis40);
   dummy__37->SetBinContent(1,17.73138);
   dummy__37->SetBinContent(2,36.35645);
   dummy__37->SetBinContent(3,15.47453);
   dummy__37->SetBinContent(4,1.13428);
   dummy__37->SetBinError(1,1.114193);
   dummy__37->SetBinError(2,1.958866);
   dummy__37->SetBinError(3,0.7333218);
   dummy__37->SetBinError(4,0.04685156);
   dummy__37->SetMinimum(0.0005);
   dummy__37->SetMaximum(1817.823);
   dummy__37->SetEntries(24);
   dummy__37->SetLineColor(0);
   dummy__37->SetLineStyle(0);
   dummy__37->SetLineWidth(0);
   dummy__37->SetMarkerColor(0);
   dummy__37->SetMarkerSize(0);
   dummy__37->GetXaxis()->SetNdivisions(405);
   dummy__37->GetXaxis()->SetLabelFont(42);
   dummy__37->GetXaxis()->SetLabelOffset(0.007);
   dummy__37->GetXaxis()->SetLabelSize(0);
   dummy__37->GetXaxis()->SetTitleSize(0);
   dummy__37->GetXaxis()->SetTickLength(0.025);
   dummy__37->GetXaxis()->SetTitleOffset(0.9);
   dummy__37->GetXaxis()->SetTitleFont(42);
   dummy__37->GetYaxis()->SetTitle("Events / GeV");
   dummy__37->GetYaxis()->SetNdivisions(405);
   dummy__37->GetYaxis()->SetLabelFont(42);
   dummy__37->GetYaxis()->SetLabelOffset(0.007);
   dummy__37->GetYaxis()->SetTitleSize(0.05);
   dummy__37->GetYaxis()->SetTickLength(0.025);
   dummy__37->GetYaxis()->SetTitleOffset(1.21);
   dummy__37->GetYaxis()->SetTitleFont(42);
   dummy__37->GetZaxis()->SetNdivisions(405);
   dummy__37->GetZaxis()->SetLabelFont(42);
   dummy__37->GetZaxis()->SetLabelOffset(0.007);
   dummy__37->GetZaxis()->SetTitleSize(0.05);
   dummy__37->GetZaxis()->SetTickLength(0.025);
   dummy__37->GetZaxis()->SetTitleFont(42);
   dummy__37->Draw("");
   
   THStack *h_stack_postfit = new THStack();
   h_stack_postfit->SetName("h_stack_postfit");
   h_stack_postfit->SetTitle("h_stack_postfit");
   Double_t xAxis41[5] = {25, 75, 100, 150, 600}; 
   
   TH1F *h_stack_postfit_stack_4 = new TH1F("h_stack_postfit_stack_4","h_stack_postfit",4, xAxis41);
   h_stack_postfit_stack_4->SetMinimum(0.01233674);
   h_stack_postfit_stack_4->SetMaximum(49.34695);
   h_stack_postfit_stack_4->SetDirectory(0);
   h_stack_postfit_stack_4->SetStats(0);
   h_stack_postfit_stack_4->SetLineStyle(0);
   h_stack_postfit_stack_4->GetXaxis()->SetNdivisions(405);
   h_stack_postfit_stack_4->GetXaxis()->SetLabelFont(42);
   h_stack_postfit_stack_4->GetXaxis()->SetLabelOffset(0.007);
   h_stack_postfit_stack_4->GetXaxis()->SetTitleSize(0.05);
   h_stack_postfit_stack_4->GetXaxis()->SetTickLength(0.025);
   h_stack_postfit_stack_4->GetXaxis()->SetTitleOffset(0.9);
   h_stack_postfit_stack_4->GetXaxis()->SetTitleFont(42);
   h_stack_postfit_stack_4->GetYaxis()->SetNdivisions(405);
   h_stack_postfit_stack_4->GetYaxis()->SetLabelFont(42);
   h_stack_postfit_stack_4->GetYaxis()->SetLabelOffset(0.007);
   h_stack_postfit_stack_4->GetYaxis()->SetTitleSize(0.05);
   h_stack_postfit_stack_4->GetYaxis()->SetTickLength(0.025);
   h_stack_postfit_stack_4->GetYaxis()->SetTitleOffset(1.05);
   h_stack_postfit_stack_4->GetYaxis()->SetTitleFont(42);
   h_stack_postfit_stack_4->GetZaxis()->SetNdivisions(405);
   h_stack_postfit_stack_4->GetZaxis()->SetLabelFont(42);
   h_stack_postfit_stack_4->GetZaxis()->SetLabelOffset(0.007);
   h_stack_postfit_stack_4->GetZaxis()->SetTitleSize(0.05);
   h_stack_postfit_stack_4->GetZaxis()->SetTickLength(0.025);
   h_stack_postfit_stack_4->GetZaxis()->SetTitleFont(42);
   h_stack_postfit->SetHistogram(h_stack_postfit_stack_4);
   
   Double_t xAxis42[5] = {25, 75, 100, 150, 600}; 
   
   TH1F *qcd__38 = new TH1F("qcd__38","qcd in mass0_tmn_fail",4, xAxis42);
   qcd__38->SetBinContent(1,0.6246074);
   qcd__38->SetBinContent(2,0.1094583);
   qcd__38->SetBinContent(3,0.003098205);
   qcd__38->SetBinContent(4,0.00525045);
   qcd__38->SetBinError(1,0.7073749);
   qcd__38->SetBinError(2,0.1241287);
   qcd__38->SetBinError(3,0.003465425);
   qcd__38->SetBinError(4,0.005944619);
   qcd__38->SetEntries(4);

   Int_t ci;      // for color index setting
   TColor *color; // for color definition with alpha
   ci = TColor::GetColor("#ffccff");
   qcd__38->SetFillColor(ci);
   qcd__38->GetXaxis()->SetTitle("min(999.9999,fjmass)");
   qcd__38->GetXaxis()->SetLabelFont(42);
   qcd__38->GetXaxis()->SetLabelSize(0.035);
   qcd__38->GetXaxis()->SetTitleSize(0.035);
   qcd__38->GetXaxis()->SetTitleFont(42);
   qcd__38->GetYaxis()->SetTitle("Events / ( 143.75 )");
   qcd__38->GetYaxis()->SetLabelFont(42);
   qcd__38->GetYaxis()->SetLabelSize(0.035);
   qcd__38->GetYaxis()->SetTitleSize(0.035);
   qcd__38->GetYaxis()->SetTitleFont(42);
   qcd__38->GetZaxis()->SetLabelFont(42);
   qcd__38->GetZaxis()->SetLabelSize(0.035);
   qcd__38->GetZaxis()->SetTitleSize(0.035);
   qcd__38->GetZaxis()->SetTitleFont(42);
   h_stack_postfit->Add(qcd,"");
   Double_t xAxis43[5] = {25, 75, 100, 150, 600}; 
   
   TH1F *zll__39 = new TH1F("zll__39","zll in mass0_tmn_fail",4, xAxis43);
   zll__39->SetBinContent(1,0.3121378);
   zll__39->SetBinContent(2,0.1766925);
   zll__39->SetBinContent(3,0.107129);
   zll__39->SetBinContent(4,0.01992455);
   zll__39->SetBinError(1,0.02029105);
   zll__39->SetBinError(2,0.01342033);
   zll__39->SetBinError(3,0.00690262);
   zll__39->SetBinError(4,0.001198757);
   zll__39->SetEntries(4);

   ci = TColor::GetColor("#99ffff");
   zll__39->SetFillColor(ci);
   zll__39->GetXaxis()->SetTitle("min(999.9999,fjmass)");
   zll__39->GetXaxis()->SetLabelFont(42);
   zll__39->GetXaxis()->SetLabelSize(0.035);
   zll__39->GetXaxis()->SetTitleSize(0.035);
   zll__39->GetXaxis()->SetTitleFont(42);
   zll__39->GetYaxis()->SetTitle("Events / ( 143.75 )");
   zll__39->GetYaxis()->SetLabelFont(42);
   zll__39->GetYaxis()->SetLabelSize(0.035);
   zll__39->GetYaxis()->SetTitleSize(0.035);
   zll__39->GetYaxis()->SetTitleFont(42);
   zll__39->GetZaxis()->SetLabelFont(42);
   zll__39->GetZaxis()->SetLabelSize(0.035);
   zll__39->GetZaxis()->SetTitleSize(0.035);
   zll__39->GetZaxis()->SetTitleFont(42);
   h_stack_postfit->Add(zll,"");
   Double_t xAxis44[5] = {25, 75, 100, 150, 600}; 
   
   TH1F *dibosons__40 = new TH1F("dibosons__40","dibosons in mass0_tmn_fail",4, xAxis44);
   dibosons__40->SetBinContent(1,0.2406606);
   dibosons__40->SetBinContent(2,0.8804524);
   dibosons__40->SetBinContent(3,0.1317386);
   dibosons__40->SetBinContent(4,0.01363304);
   dibosons__40->SetBinError(1,0.02897718);
   dibosons__40->SetBinError(2,0.107662);
   dibosons__40->SetBinError(3,0.01472044);
   dibosons__40->SetBinError(4,0.001525326);
   dibosons__40->SetEntries(4);

   ci = TColor::GetColor("#ffff99");
   dibosons__40->SetFillColor(ci);
   dibosons__40->GetXaxis()->SetTitle("min(999.9999,fjmass)");
   dibosons__40->GetXaxis()->SetLabelFont(42);
   dibosons__40->GetXaxis()->SetLabelSize(0.035);
   dibosons__40->GetXaxis()->SetTitleSize(0.035);
   dibosons__40->GetXaxis()->SetTitleFont(42);
   dibosons__40->GetYaxis()->SetTitle("Events / ( 143.75 )");
   dibosons__40->GetYaxis()->SetLabelFont(42);
   dibosons__40->GetYaxis()->SetLabelSize(0.035);
   dibosons__40->GetYaxis()->SetTitleSize(0.035);
   dibosons__40->GetYaxis()->SetTitleFont(42);
   dibosons__40->GetZaxis()->SetLabelFont(42);
   dibosons__40->GetZaxis()->SetLabelSize(0.035);
   dibosons__40->GetZaxis()->SetTitleSize(0.035);
   dibosons__40->GetZaxis()->SetTitleFont(42);
   h_stack_postfit->Add(dibosons,"");
   Double_t xAxis45[5] = {25, 75, 100, 150, 600}; 
   
   TH1F *stop__41 = new TH1F("stop__41","stop in mass0_tmn_fail",4, xAxis45);
   stop__41->SetBinContent(1,1.378998);
   stop__41->SetBinContent(2,4.671328);
   stop__41->SetBinContent(3,0.8882167);
   stop__41->SetBinContent(4,0.06861039);
   stop__41->SetBinError(1,0.1636452);
   stop__41->SetBinError(2,0.554394);
   stop__41->SetBinError(3,0.1050701);
   stop__41->SetBinError(4,0.00813163);
   stop__41->SetEntries(4);

   ci = TColor::GetColor("#ff9999");
   stop__41->SetFillColor(ci);
   stop__41->GetXaxis()->SetTitle("min(999.9999,fjmass)");
   stop__41->GetXaxis()->SetLabelFont(42);
   stop__41->GetXaxis()->SetLabelSize(0.035);
   stop__41->GetXaxis()->SetTitleSize(0.035);
   stop__41->GetXaxis()->SetTitleFont(42);
   stop__41->GetYaxis()->SetTitle("Events / ( 143.75 )");
   stop__41->GetYaxis()->SetLabelFont(42);
   stop__41->GetYaxis()->SetLabelSize(0.035);
   stop__41->GetYaxis()->SetTitleSize(0.035);
   stop__41->GetYaxis()->SetTitleFont(42);
   stop__41->GetZaxis()->SetLabelFont(42);
   stop__41->GetZaxis()->SetLabelSize(0.035);
   stop__41->GetZaxis()->SetTitleSize(0.035);
   stop__41->GetZaxis()->SetTitleFont(42);
   h_stack_postfit->Add(stop,"");
   Double_t xAxis46[5] = {25, 75, 100, 150, 600}; 
   
   TH1F *wjets__42 = new TH1F("wjets__42","wjets in mass0_tmn_fail",4, xAxis46);
   wjets__42->SetBinContent(1,9.242015);
   wjets__42->SetBinContent(2,4.953792);
   wjets__42->SetBinContent(3,3.493823);
   wjets__42->SetBinContent(4,0.5661792);
   wjets__42->SetBinError(1,0.1183823);
   wjets__42->SetBinError(2,0.06345383);
   wjets__42->SetBinError(3,0.04475286);
   wjets__42->SetBinError(4,0.007252268);
   wjets__42->SetEntries(4);

   ci = TColor::GetColor("#ccffcc");
   wjets__42->SetFillColor(ci);
   wjets__42->GetXaxis()->SetTitle("min(999.9999,fjmass)");
   wjets__42->GetXaxis()->SetLabelFont(42);
   wjets__42->GetXaxis()->SetLabelSize(0.035);
   wjets__42->GetXaxis()->SetTitleSize(0.035);
   wjets__42->GetXaxis()->SetTitleFont(42);
   wjets__42->GetYaxis()->SetTitle("Events / ( 143.75 )");
   wjets__42->GetYaxis()->SetLabelFont(42);
   wjets__42->GetYaxis()->SetLabelSize(0.035);
   wjets__42->GetYaxis()->SetTitleSize(0.035);
   wjets__42->GetYaxis()->SetTitleFont(42);
   wjets__42->GetZaxis()->SetLabelFont(42);
   wjets__42->GetZaxis()->SetLabelSize(0.035);
   wjets__42->GetZaxis()->SetTitleSize(0.035);
   wjets__42->GetZaxis()->SetTitleFont(42);
   h_stack_postfit->Add(wjets,"");
   Double_t xAxis47[5] = {25, 75, 100, 150, 600}; 
   
   TH1F *ttbar__43 = new TH1F("ttbar__43","ttbar in mass0_tmn_fail",4, xAxis47);
   ttbar__43->SetBinContent(1,5.31946);
   ttbar__43->SetBinContent(2,20.05012);
   ttbar__43->SetBinContent(3,9.998354);
   ttbar__43->SetBinContent(4,0.4777882);
   ttbar__43->SetBinError(1,0.6134138);
   ttbar__43->SetBinError(2,1.14226);
   ttbar__43->SetBinError(3,0.4881416);
   ttbar__43->SetBinError(4,0.05708247);
   ttbar__43->SetEntries(4);

   ci = TColor::GetColor("#ffcc66");
   ttbar__43->SetFillColor(ci);
   ttbar__43->GetXaxis()->SetTitle("min(999.9999,fjmass)");
   ttbar__43->GetXaxis()->SetLabelFont(42);
   ttbar__43->GetXaxis()->SetLabelSize(0.035);
   ttbar__43->GetXaxis()->SetTitleSize(0.035);
   ttbar__43->GetXaxis()->SetTitleFont(42);
   ttbar__43->GetYaxis()->SetTitle("Events / ( 143.75 )");
   ttbar__43->GetYaxis()->SetLabelFont(42);
   ttbar__43->GetYaxis()->SetLabelSize(0.035);
   ttbar__43->GetYaxis()->SetTitleSize(0.035);
   ttbar__43->GetYaxis()->SetTitleFont(42);
   ttbar__43->GetZaxis()->SetLabelFont(42);
   ttbar__43->GetZaxis()->SetLabelSize(0.035);
   ttbar__43->GetZaxis()->SetTitleSize(0.035);
   ttbar__43->GetZaxis()->SetTitleFont(42);
   h_stack_postfit->Add(ttbar,"");
   h_stack_postfit->Draw("hist same");
   Double_t xAxis48[5] = {25, 75, 100, 150, 600}; 
   
   TH1F *h_all_prefit__44 = new TH1F("h_all_prefit__44","h_all_prefit",4, xAxis48);
   h_all_prefit__44->SetBinContent(1,17.73138);
   h_all_prefit__44->SetBinContent(2,36.35645);
   h_all_prefit__44->SetBinContent(3,15.47453);
   h_all_prefit__44->SetBinContent(4,1.13428);
   h_all_prefit__44->SetBinError(1,1.114193);
   h_all_prefit__44->SetBinError(2,1.958866);
   h_all_prefit__44->SetBinError(3,0.7333218);
   h_all_prefit__44->SetBinError(4,0.04685156);
   h_all_prefit__44->SetEntries(24);
   h_all_prefit__44->SetLineColor(2);
   h_all_prefit__44->SetLineStyle(7);
   h_all_prefit__44->SetLineWidth(2);
   h_all_prefit__44->GetXaxis()->SetNdivisions(405);
   h_all_prefit__44->GetXaxis()->SetLabelFont(42);
   h_all_prefit__44->GetXaxis()->SetLabelOffset(0.007);
   h_all_prefit__44->GetXaxis()->SetTitleSize(0.05);
   h_all_prefit__44->GetXaxis()->SetTickLength(0.025);
   h_all_prefit__44->GetXaxis()->SetTitleOffset(0.9);
   h_all_prefit__44->GetXaxis()->SetTitleFont(42);
   h_all_prefit__44->GetYaxis()->SetNdivisions(405);
   h_all_prefit__44->GetYaxis()->SetLabelFont(42);
   h_all_prefit__44->GetYaxis()->SetLabelOffset(0.007);
   h_all_prefit__44->GetYaxis()->SetTitleSize(0.05);
   h_all_prefit__44->GetYaxis()->SetTickLength(0.025);
   h_all_prefit__44->GetYaxis()->SetTitleOffset(1.05);
   h_all_prefit__44->GetYaxis()->SetTitleFont(42);
   h_all_prefit__44->GetZaxis()->SetNdivisions(405);
   h_all_prefit__44->GetZaxis()->SetLabelFont(42);
   h_all_prefit__44->GetZaxis()->SetLabelOffset(0.007);
   h_all_prefit__44->GetZaxis()->SetTitleSize(0.05);
   h_all_prefit__44->GetZaxis()->SetTickLength(0.025);
   h_all_prefit__44->GetZaxis()->SetTitleFont(42);
   h_all_prefit__44->Draw("histsame");
   Double_t xAxis49[5] = {25, 75, 100, 150, 600}; 
   
   TH1F *singlemuontop_data__45 = new TH1F("singlemuontop_data__45","base",4, xAxis49);
   singlemuontop_data__45->SetBinContent(1,17.42);
   singlemuontop_data__45->SetBinContent(2,30.84);
   singlemuontop_data__45->SetBinContent(3,14.62);
   singlemuontop_data__45->SetBinContent(4,1.151111);
   singlemuontop_data__45->SetBinContent(5,0.002222222);
   singlemuontop_data__45->SetBinError(1,0.5902542);
   singlemuontop_data__45->SetBinError(2,1.110675);
   singlemuontop_data__45->SetBinError(3,0.5407402);
   singlemuontop_data__45->SetBinError(4,0.05057692);
   singlemuontop_data__45->SetBinError(5,0.002222222);
   singlemuontop_data__45->SetEntries(2184.377);
   singlemuontop_data__45->SetMarkerStyle(20);
   singlemuontop_data__45->SetMarkerSize(1.2);
   singlemuontop_data__45->GetXaxis()->SetTitle("min(999.9999,fjmass)");
   singlemuontop_data__45->GetXaxis()->SetLabelFont(42);
   singlemuontop_data__45->GetXaxis()->SetLabelSize(0.035);
   singlemuontop_data__45->GetXaxis()->SetTitleSize(0.035);
   singlemuontop_data__45->GetXaxis()->SetTitleFont(42);
   singlemuontop_data__45->GetYaxis()->SetLabelFont(42);
   singlemuontop_data__45->GetYaxis()->SetLabelSize(0.035);
   singlemuontop_data__45->GetYaxis()->SetTitleSize(0.035);
   singlemuontop_data__45->GetYaxis()->SetTitleFont(42);
   singlemuontop_data__45->GetZaxis()->SetLabelFont(42);
   singlemuontop_data__45->GetZaxis()->SetLabelSize(0.035);
   singlemuontop_data__45->GetZaxis()->SetTitleSize(0.035);
   singlemuontop_data__45->GetZaxis()->SetTitleFont(42);
   singlemuontop_data__45->Draw("epsame e0");
   
   TLegend *leg = new TLegend(0.55,0.61,0.88,0.93,NULL,"brNDC");
   leg->SetBorderSize(0);
   leg->SetTextSize(0.035);
   leg->SetLineColor(0);
   leg->SetLineStyle(1);
   leg->SetLineWidth(1);
   leg->SetFillColor(0);
   leg->SetFillStyle(0);
   TLegendEntry *entry=leg->AddEntry("singlemuontop_data","Data","elp");
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
   TLatex *   tex = new TLatex(0.16,0.825,"t#bar{t} CR (#mu) fail");
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
   Double_t xAxis50[5] = {25, 75, 100, 150, 600}; 
   
   TH1F *dummy_copy__46 = new TH1F("dummy_copy__46","h_all_prefit",4, xAxis50);
   dummy_copy__46->SetBinContent(1,17.73138);
   dummy_copy__46->SetBinContent(2,36.35645);
   dummy_copy__46->SetBinContent(3,15.47453);
   dummy_copy__46->SetBinContent(4,1.13428);
   dummy_copy__46->SetBinError(1,1.114193);
   dummy_copy__46->SetBinError(2,1.958866);
   dummy_copy__46->SetBinError(3,0.7333218);
   dummy_copy__46->SetBinError(4,0.04685156);
   dummy_copy__46->SetMinimum(0.0005);
   dummy_copy__46->SetMaximum(1817.823);
   dummy_copy__46->SetEntries(24);
   dummy_copy__46->SetDirectory(0);
   dummy_copy__46->SetLineColor(0);
   dummy_copy__46->SetLineStyle(0);
   dummy_copy__46->SetLineWidth(0);
   dummy_copy__46->SetMarkerColor(0);
   dummy_copy__46->SetMarkerSize(0);
   dummy_copy__46->GetXaxis()->SetNdivisions(405);
   dummy_copy__46->GetXaxis()->SetLabelFont(42);
   dummy_copy__46->GetXaxis()->SetLabelOffset(0.007);
   dummy_copy__46->GetXaxis()->SetLabelSize(0);
   dummy_copy__46->GetXaxis()->SetTitleSize(0);
   dummy_copy__46->GetXaxis()->SetTickLength(0.025);
   dummy_copy__46->GetXaxis()->SetTitleOffset(0.9);
   dummy_copy__46->GetXaxis()->SetTitleFont(42);
   dummy_copy__46->GetYaxis()->SetTitle("Events / GeV");
   dummy_copy__46->GetYaxis()->SetNdivisions(405);
   dummy_copy__46->GetYaxis()->SetLabelFont(42);
   dummy_copy__46->GetYaxis()->SetLabelOffset(0.007);
   dummy_copy__46->GetYaxis()->SetTitleSize(0.05);
   dummy_copy__46->GetYaxis()->SetTickLength(0.025);
   dummy_copy__46->GetYaxis()->SetTitleOffset(1.21);
   dummy_copy__46->GetYaxis()->SetTitleFont(42);
   dummy_copy__46->GetZaxis()->SetNdivisions(405);
   dummy_copy__46->GetZaxis()->SetLabelFont(42);
   dummy_copy__46->GetZaxis()->SetLabelOffset(0.007);
   dummy_copy__46->GetZaxis()->SetTitleSize(0.05);
   dummy_copy__46->GetZaxis()->SetTickLength(0.025);
   dummy_copy__46->GetZaxis()->SetTitleFont(42);
   dummy_copy__46->Draw("sameaxis");
  
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
   Double_t xAxis51[5] = {25, 75, 100, 150, 600}; 
   
   TH1F *dummy2__47 = new TH1F("dummy2__47","dummy2",4, xAxis51);
   dummy2__47->SetBinContent(1,1);
   dummy2__47->SetBinContent(2,1);
   dummy2__47->SetBinContent(3,1);
   dummy2__47->SetMinimum(0.1);
   dummy2__47->SetMaximum(2.1);
   dummy2__47->SetEntries(3);
   dummy2__47->SetLineColor(0);
   dummy2__47->SetLineStyle(0);
   dummy2__47->SetLineWidth(0);
   dummy2__47->SetMarkerColor(0);
   dummy2__47->SetMarkerSize(0);
   dummy2__47->GetXaxis()->SetTitle("Fatjet m_{SD} (GeV)");
   dummy2__47->GetXaxis()->SetLabelFont(42);
   dummy2__47->GetXaxis()->SetLabelOffset(0.007);
   dummy2__47->GetXaxis()->SetTitleSize(0.05);
   dummy2__47->GetXaxis()->SetTickLength(0.025);
   dummy2__47->GetXaxis()->SetTitleOffset(0.9);
   dummy2__47->GetXaxis()->SetTitleFont(42);
   dummy2__47->GetYaxis()->SetTitle("Data / Pred.");
   dummy2__47->GetYaxis()->CenterTitle(true);
   dummy2__47->GetYaxis()->SetNdivisions(5);
   dummy2__47->GetYaxis()->SetLabelFont(42);
   dummy2__47->GetYaxis()->SetLabelOffset(0.007);
   dummy2__47->GetYaxis()->SetLabelSize(0.03);
   dummy2__47->GetYaxis()->SetTickLength(0.025);
   dummy2__47->GetYaxis()->SetTitleOffset(1.5);
   dummy2__47->GetYaxis()->SetTitleFont(42);
   dummy2__47->GetZaxis()->SetNdivisions(405);
   dummy2__47->GetZaxis()->SetLabelFont(42);
   dummy2__47->GetZaxis()->SetLabelOffset(0.007);
   dummy2__47->GetZaxis()->SetTitleSize(0.05);
   dummy2__47->GetZaxis()->SetTickLength(0.025);
   dummy2__47->GetZaxis()->SetTitleFont(42);
   dummy2__47->Draw("hist");
   Double_t xAxis52[5] = {25, 75, 100, 150, 600}; 
   
   TH1F *total_background__48 = new TH1F("total_background__48","Total background in mass0_tmn_fail",4, xAxis52);
   total_background__48->SetBinContent(1,1);
   total_background__48->SetBinContent(2,1);
   total_background__48->SetBinContent(3,1);
   total_background__48->SetBinContent(4,1);
   total_background__48->SetBinContent(5,1);
   total_background__48->SetBinError(1,0.03860029);
   total_background__48->SetBinError(2,0.03630372);
   total_background__48->SetBinError(3,0.03401058);
   total_background__48->SetBinError(4,0.04900623);
   total_background__48->SetEntries(29);

   ci = TColor::GetColor("#f4eb99");
   total_background__48->SetFillColor(ci);

   ci = TColor::GetColor("#f4eb99");
   total_background__48->SetLineColor(ci);
   total_background__48->SetMarkerSize(0);
   total_background__48->GetXaxis()->SetTitle("min(999.9999,fjmass)");
   total_background__48->GetXaxis()->SetLabelFont(42);
   total_background__48->GetXaxis()->SetLabelSize(0.035);
   total_background__48->GetXaxis()->SetTitleSize(0.035);
   total_background__48->GetXaxis()->SetTitleFont(42);
   total_background__48->GetYaxis()->SetTitle("Events / ( 143.75 )");
   total_background__48->GetYaxis()->SetLabelFont(42);
   total_background__48->GetYaxis()->SetLabelSize(0.035);
   total_background__48->GetYaxis()->SetTitleSize(0.035);
   total_background__48->GetYaxis()->SetTitleFont(42);
   total_background__48->GetZaxis()->SetLabelFont(42);
   total_background__48->GetZaxis()->SetLabelSize(0.035);
   total_background__48->GetZaxis()->SetTitleSize(0.035);
   total_background__48->GetZaxis()->SetTitleFont(42);
   total_background__48->Draw("e2same");
   
   TF1 *f14 = new TF1("f1","1",-5000,5000);
   f14->SetFillColor(19);
   f14->SetFillStyle(0);
   f14->SetLineWidth(2);
   f14->SetLineStyle(2);
   f14->GetXaxis()->SetNdivisions(405);
   f14->GetXaxis()->SetLabelFont(42);
   f14->GetXaxis()->SetLabelOffset(0.007);
   f14->GetXaxis()->SetTitleSize(0.05);
   f14->GetXaxis()->SetTickLength(0.025);
   f14->GetXaxis()->SetTitleOffset(0.9);
   f14->GetXaxis()->SetTitleFont(42);
   f14->GetYaxis()->SetNdivisions(405);
   f14->GetYaxis()->SetLabelFont(42);
   f14->GetYaxis()->SetLabelOffset(0.007);
   f14->GetYaxis()->SetTitleSize(0.05);
   f14->GetYaxis()->SetTickLength(0.025);
   f14->GetYaxis()->SetTitleOffset(1.05);
   f14->GetYaxis()->SetTitleFont(42);
   f14->Draw("same");
   
   Double_t _fx3007[4] = {
   50,
   87.5,
   125,
   375};
   Double_t _fy3007[4] = {
   0.9824388,
   0.8482676,
   0.9447783,
   1.014839};
   Double_t _felx3007[4] = {
   25,
   12.5,
   25,
   225};
   Double_t _fely3007[4] = {
   0.03328867,
   0.03054961,
   0.03494389,
   0.04458946};
   Double_t _fehx3007[4] = {
   25,
   12.5,
   25,
   225};
   Double_t _fehy3007[4] = {
   0.03328867,
   0.03054961,
   0.03494389,
   0.04458946};
   TGraphAsymmErrors *grae = new TGraphAsymmErrors(4,_fx3007,_fy3007,_felx3007,_fehx3007,_fely3007,_fehy3007);
   grae->SetName("");
   grae->SetTitle("");
   grae->SetFillColor(1);
   grae->SetLineColor(2);
   grae->SetLineStyle(7);
   grae->SetMarkerColor(2);
   grae->SetMarkerStyle(24);
   
   TH1F *Graph_Graph3007 = new TH1F("Graph_Graph3007","",100,0,657.5);
   Graph_Graph3007->SetMinimum(0.7935469);
   Graph_Graph3007->SetMaximum(1.083599);
   Graph_Graph3007->SetDirectory(0);
   Graph_Graph3007->SetStats(0);
   Graph_Graph3007->SetLineStyle(0);
   Graph_Graph3007->GetXaxis()->SetNdivisions(405);
   Graph_Graph3007->GetXaxis()->SetLabelFont(42);
   Graph_Graph3007->GetXaxis()->SetLabelOffset(0.007);
   Graph_Graph3007->GetXaxis()->SetTitleSize(0.05);
   Graph_Graph3007->GetXaxis()->SetTickLength(0.025);
   Graph_Graph3007->GetXaxis()->SetTitleOffset(0.9);
   Graph_Graph3007->GetXaxis()->SetTitleFont(42);
   Graph_Graph3007->GetYaxis()->SetNdivisions(405);
   Graph_Graph3007->GetYaxis()->SetLabelFont(42);
   Graph_Graph3007->GetYaxis()->SetLabelOffset(0.007);
   Graph_Graph3007->GetYaxis()->SetTitleSize(0.05);
   Graph_Graph3007->GetYaxis()->SetTickLength(0.025);
   Graph_Graph3007->GetYaxis()->SetTitleOffset(1.05);
   Graph_Graph3007->GetYaxis()->SetTitleFont(42);
   Graph_Graph3007->GetZaxis()->SetNdivisions(405);
   Graph_Graph3007->GetZaxis()->SetLabelFont(42);
   Graph_Graph3007->GetZaxis()->SetLabelOffset(0.007);
   Graph_Graph3007->GetZaxis()->SetTitleSize(0.05);
   Graph_Graph3007->GetZaxis()->SetTickLength(0.025);
   Graph_Graph3007->GetZaxis()->SetTitleFont(42);
   grae->SetHistogram(Graph_Graph3007);
   
   grae->Draw("ep 0");
   
   Double_t _fx3008[4] = {
   50,
   87.5,
   125,
   375};
   Double_t _fy3008[4] = {
   1.01765,
   0.9999402,
   0.9998386,
   0.9997615};
   Double_t _felx3008[4] = {
   25,
   12.5,
   25,
   225};
   Double_t _fely3008[4] = {
   0.03448174,
   0.03601197,
   0.03698037,
   0.043927};
   Double_t _fehx3008[4] = {
   25,
   12.5,
   25,
   225};
   Double_t _fehy3008[4] = {
   0.03448174,
   0.03601197,
   0.03698037,
   0.043927};
   grae = new TGraphAsymmErrors(4,_fx3008,_fy3008,_felx3008,_fehx3008,_fely3008,_fehy3008);
   grae->SetName("");
   grae->SetTitle("");
   grae->SetFillColor(1);
   grae->SetMarkerStyle(20);
   
   TH1F *Graph_Graph3008 = new TH1F("Graph_Graph3008","",100,0,657.5);
   Graph_Graph3008->SetMinimum(0.9462048);
   Graph_Graph3008->SetMaximum(1.061761);
   Graph_Graph3008->SetDirectory(0);
   Graph_Graph3008->SetStats(0);
   Graph_Graph3008->SetLineStyle(0);
   Graph_Graph3008->GetXaxis()->SetNdivisions(405);
   Graph_Graph3008->GetXaxis()->SetLabelFont(42);
   Graph_Graph3008->GetXaxis()->SetLabelOffset(0.007);
   Graph_Graph3008->GetXaxis()->SetTitleSize(0.05);
   Graph_Graph3008->GetXaxis()->SetTickLength(0.025);
   Graph_Graph3008->GetXaxis()->SetTitleOffset(0.9);
   Graph_Graph3008->GetXaxis()->SetTitleFont(42);
   Graph_Graph3008->GetYaxis()->SetNdivisions(405);
   Graph_Graph3008->GetYaxis()->SetLabelFont(42);
   Graph_Graph3008->GetYaxis()->SetLabelOffset(0.007);
   Graph_Graph3008->GetYaxis()->SetTitleSize(0.05);
   Graph_Graph3008->GetYaxis()->SetTickLength(0.025);
   Graph_Graph3008->GetYaxis()->SetTitleOffset(1.05);
   Graph_Graph3008->GetYaxis()->SetTitleFont(42);
   Graph_Graph3008->GetZaxis()->SetNdivisions(405);
   Graph_Graph3008->GetZaxis()->SetLabelFont(42);
   Graph_Graph3008->GetZaxis()->SetLabelOffset(0.007);
   Graph_Graph3008->GetZaxis()->SetTitleSize(0.05);
   Graph_Graph3008->GetZaxis()->SetTickLength(0.025);
   Graph_Graph3008->GetZaxis()->SetTitleFont(42);
   grae->SetHistogram(Graph_Graph3008);
   
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
