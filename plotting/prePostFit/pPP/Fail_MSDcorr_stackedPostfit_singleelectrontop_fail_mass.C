void Fail_MSDcorr_stackedPostfit_singleelectrontop_fail_mass()
{
//=========Macro generated from canvas: c/c
//=========  (Tue Feb 13 18:07:03 2018) by ROOT version6.06/09
   TCanvas *c = new TCanvas("c", "c",0,0,720,800);
   gStyle->SetOptFit(1);
   gStyle->SetOptStat(0);
   gStyle->SetOptTitle(0);
   c->SetHighLightColor(2);
   c->Range(-60.18518,-6.224593,649.6914,3.520618);
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
   Double_t xAxis114[5] = {25, 75, 100, 150, 600}; 
   
   TH1F *dummy__105 = new TH1F("dummy__105","h_all_prefit",4, xAxis114);
   dummy__105->SetBinContent(1,11.15636);
   dummy__105->SetBinContent(2,22.39579);
   dummy__105->SetBinContent(3,9.022124);
   dummy__105->SetBinContent(4,0.6916361);
   dummy__105->SetBinError(1,0.8872805);
   dummy__105->SetBinError(2,1.23642);
   dummy__105->SetBinError(3,0.431396);
   dummy__105->SetBinError(4,0.02912159);
   dummy__105->SetMinimum(0.0005);
   dummy__105->SetMaximum(1119.79);
   dummy__105->SetEntries(24);
   dummy__105->SetLineColor(0);
   dummy__105->SetLineStyle(0);
   dummy__105->SetLineWidth(0);
   dummy__105->SetMarkerColor(0);
   dummy__105->SetMarkerSize(0);
   dummy__105->GetXaxis()->SetNdivisions(405);
   dummy__105->GetXaxis()->SetLabelFont(42);
   dummy__105->GetXaxis()->SetLabelOffset(0.007);
   dummy__105->GetXaxis()->SetLabelSize(0);
   dummy__105->GetXaxis()->SetTitleSize(0);
   dummy__105->GetXaxis()->SetTickLength(0.025);
   dummy__105->GetXaxis()->SetTitleOffset(0.9);
   dummy__105->GetXaxis()->SetTitleFont(42);
   dummy__105->GetYaxis()->SetTitle("Events / GeV");
   dummy__105->GetYaxis()->SetNdivisions(405);
   dummy__105->GetYaxis()->SetLabelFont(42);
   dummy__105->GetYaxis()->SetLabelOffset(0.007);
   dummy__105->GetYaxis()->SetTitleSize(0.05);
   dummy__105->GetYaxis()->SetTickLength(0.025);
   dummy__105->GetYaxis()->SetTitleOffset(1.21);
   dummy__105->GetYaxis()->SetTitleFont(42);
   dummy__105->GetZaxis()->SetNdivisions(405);
   dummy__105->GetZaxis()->SetLabelFont(42);
   dummy__105->GetZaxis()->SetLabelOffset(0.007);
   dummy__105->GetZaxis()->SetTitleSize(0.05);
   dummy__105->GetZaxis()->SetTickLength(0.025);
   dummy__105->GetZaxis()->SetTitleFont(42);
   dummy__105->Draw("");
   
   THStack *h_stack_postfit = new THStack();
   h_stack_postfit->SetName("h_stack_postfit");
   h_stack_postfit->SetTitle("h_stack_postfit");
   Double_t xAxis115[5] = {25, 75, 100, 150, 600}; 
   
   TH1F *h_stack_postfit_stack_10 = new TH1F("h_stack_postfit_stack_10","h_stack_postfit",4, xAxis115);
   h_stack_postfit_stack_10->SetMinimum(1.473686e-09);
   h_stack_postfit_stack_10->SetMaximum(58.35569);
   h_stack_postfit_stack_10->SetDirectory(0);
   h_stack_postfit_stack_10->SetStats(0);
   h_stack_postfit_stack_10->SetLineStyle(0);
   h_stack_postfit_stack_10->GetXaxis()->SetNdivisions(405);
   h_stack_postfit_stack_10->GetXaxis()->SetLabelFont(42);
   h_stack_postfit_stack_10->GetXaxis()->SetLabelOffset(0.007);
   h_stack_postfit_stack_10->GetXaxis()->SetTitleSize(0.05);
   h_stack_postfit_stack_10->GetXaxis()->SetTickLength(0.025);
   h_stack_postfit_stack_10->GetXaxis()->SetTitleOffset(0.9);
   h_stack_postfit_stack_10->GetXaxis()->SetTitleFont(42);
   h_stack_postfit_stack_10->GetYaxis()->SetNdivisions(405);
   h_stack_postfit_stack_10->GetYaxis()->SetLabelFont(42);
   h_stack_postfit_stack_10->GetYaxis()->SetLabelOffset(0.007);
   h_stack_postfit_stack_10->GetYaxis()->SetTitleSize(0.05);
   h_stack_postfit_stack_10->GetYaxis()->SetTickLength(0.025);
   h_stack_postfit_stack_10->GetYaxis()->SetTitleOffset(1.05);
   h_stack_postfit_stack_10->GetYaxis()->SetTitleFont(42);
   h_stack_postfit_stack_10->GetZaxis()->SetNdivisions(405);
   h_stack_postfit_stack_10->GetZaxis()->SetLabelFont(42);
   h_stack_postfit_stack_10->GetZaxis()->SetLabelOffset(0.007);
   h_stack_postfit_stack_10->GetZaxis()->SetTitleSize(0.05);
   h_stack_postfit_stack_10->GetZaxis()->SetTickLength(0.025);
   h_stack_postfit_stack_10->GetZaxis()->SetTitleFont(42);
   h_stack_postfit->SetHistogram(h_stack_postfit_stack_10);
   
   Double_t xAxis116[5] = {25, 75, 100, 150, 600}; 
   
   TH1F *qcd__106 = new TH1F("qcd__106","qcd in mass0_ten_fail",4, xAxis116);
   qcd__106->SetBinContent(1,0.4511089);
   qcd__106->SetBinContent(2,2.258148e-08);
   qcd__106->SetBinContent(3,2.258148e-08);
   qcd__106->SetBinContent(4,5.786326e-05);
   qcd__106->SetBinError(1,0.2649294);
   qcd__106->SetBinError(2,1.326162e-08);
   qcd__106->SetBinError(3,1.326162e-08);
   qcd__106->SetBinError(4,3.369938e-05);
   qcd__106->SetEntries(4);

   Int_t ci;      // for color index setting
   TColor *color; // for color definition with alpha
   ci = TColor::GetColor("#ffccff");
   qcd__106->SetFillColor(ci);
   qcd__106->GetXaxis()->SetTitle("min(999.9999,fjmass)");
   qcd__106->GetXaxis()->SetLabelFont(42);
   qcd__106->GetXaxis()->SetLabelSize(0.035);
   qcd__106->GetXaxis()->SetTitleSize(0.035);
   qcd__106->GetXaxis()->SetTitleFont(42);
   qcd__106->GetYaxis()->SetTitle("Events / ( 143.75 )");
   qcd__106->GetYaxis()->SetLabelFont(42);
   qcd__106->GetYaxis()->SetLabelSize(0.035);
   qcd__106->GetYaxis()->SetTitleSize(0.035);
   qcd__106->GetYaxis()->SetTitleFont(42);
   qcd__106->GetZaxis()->SetLabelFont(42);
   qcd__106->GetZaxis()->SetLabelSize(0.035);
   qcd__106->GetZaxis()->SetTitleSize(0.035);
   qcd__106->GetZaxis()->SetTitleFont(42);
   h_stack_postfit->Add(qcd,"");
   Double_t xAxis117[5] = {25, 75, 100, 150, 600}; 
   
   TH1F *zll__107 = new TH1F("zll__107","zll in mass0_ten_fail",4, xAxis117);
   zll__107->SetBinContent(1,0.09175063);
   zll__107->SetBinContent(2,0.02523835);
   zll__107->SetBinContent(3,0.05309011);
   zll__107->SetBinContent(4,0.007156493);
   zll__107->SetBinError(1,0.006192021);
   zll__107->SetBinError(2,0.00146383);
   zll__107->SetBinError(3,0.004302346);
   zll__107->SetBinError(4,0.0005052172);
   zll__107->SetEntries(4);

   ci = TColor::GetColor("#99ffff");
   zll__107->SetFillColor(ci);
   zll__107->GetXaxis()->SetTitle("min(999.9999,fjmass)");
   zll__107->GetXaxis()->SetLabelFont(42);
   zll__107->GetXaxis()->SetLabelSize(0.035);
   zll__107->GetXaxis()->SetTitleSize(0.035);
   zll__107->GetXaxis()->SetTitleFont(42);
   zll__107->GetYaxis()->SetTitle("Events / ( 143.75 )");
   zll__107->GetYaxis()->SetLabelFont(42);
   zll__107->GetYaxis()->SetLabelSize(0.035);
   zll__107->GetYaxis()->SetTitleSize(0.035);
   zll__107->GetYaxis()->SetTitleFont(42);
   zll__107->GetZaxis()->SetLabelFont(42);
   zll__107->GetZaxis()->SetLabelSize(0.035);
   zll__107->GetZaxis()->SetTitleSize(0.035);
   zll__107->GetZaxis()->SetTitleFont(42);
   h_stack_postfit->Add(zll,"");
   Double_t xAxis118[5] = {25, 75, 100, 150, 600}; 
   
   TH1F *dibosons__108 = new TH1F("dibosons__108","dibosons in mass0_ten_fail",4, xAxis118);
   dibosons__108->SetBinContent(1,0.2487116);
   dibosons__108->SetBinContent(2,0.4271857);
   dibosons__108->SetBinContent(3,0.06842159);
   dibosons__108->SetBinContent(4,0.005847825);
   dibosons__108->SetBinError(1,0.02935326);
   dibosons__108->SetBinError(2,0.05564233);
   dibosons__108->SetBinError(3,0.008018609);
   dibosons__108->SetBinError(4,0.0006412198);
   dibosons__108->SetEntries(4);

   ci = TColor::GetColor("#ffff99");
   dibosons__108->SetFillColor(ci);
   dibosons__108->GetXaxis()->SetTitle("min(999.9999,fjmass)");
   dibosons__108->GetXaxis()->SetLabelFont(42);
   dibosons__108->GetXaxis()->SetLabelSize(0.035);
   dibosons__108->GetXaxis()->SetTitleSize(0.035);
   dibosons__108->GetXaxis()->SetTitleFont(42);
   dibosons__108->GetYaxis()->SetTitle("Events / ( 143.75 )");
   dibosons__108->GetYaxis()->SetLabelFont(42);
   dibosons__108->GetYaxis()->SetLabelSize(0.035);
   dibosons__108->GetYaxis()->SetTitleSize(0.035);
   dibosons__108->GetYaxis()->SetTitleFont(42);
   dibosons__108->GetZaxis()->SetLabelFont(42);
   dibosons__108->GetZaxis()->SetLabelSize(0.035);
   dibosons__108->GetZaxis()->SetTitleSize(0.035);
   dibosons__108->GetZaxis()->SetTitleFont(42);
   h_stack_postfit->Add(dibosons,"");
   Double_t xAxis119[5] = {25, 75, 100, 150, 600}; 
   
   TH1F *stop__109 = new TH1F("stop__109","stop in mass0_ten_fail",4, xAxis119);
   stop__109->SetBinContent(1,0.8561519);
   stop__109->SetBinContent(2,2.959207);
   stop__109->SetBinContent(3,0.4137662);
   stop__109->SetBinContent(4,0.03936646);
   stop__109->SetBinError(1,0.1009005);
   stop__109->SetBinError(2,0.3481509);
   stop__109->SetBinError(3,0.04865205);
   stop__109->SetBinError(4,0.004630414);
   stop__109->SetEntries(4);

   ci = TColor::GetColor("#ff9999");
   stop__109->SetFillColor(ci);
   stop__109->GetXaxis()->SetTitle("min(999.9999,fjmass)");
   stop__109->GetXaxis()->SetLabelFont(42);
   stop__109->GetXaxis()->SetLabelSize(0.035);
   stop__109->GetXaxis()->SetTitleSize(0.035);
   stop__109->GetXaxis()->SetTitleFont(42);
   stop__109->GetYaxis()->SetTitle("Events / ( 143.75 )");
   stop__109->GetYaxis()->SetLabelFont(42);
   stop__109->GetYaxis()->SetLabelSize(0.035);
   stop__109->GetYaxis()->SetTitleSize(0.035);
   stop__109->GetYaxis()->SetTitleFont(42);
   stop__109->GetZaxis()->SetLabelFont(42);
   stop__109->GetZaxis()->SetLabelSize(0.035);
   stop__109->GetZaxis()->SetTitleSize(0.035);
   stop__109->GetZaxis()->SetTitleFont(42);
   h_stack_postfit->Add(stop,"");
   Double_t xAxis120[5] = {25, 75, 100, 150, 600}; 
   
   TH1F *wjets__110 = new TH1F("wjets__110","wjets in mass0_ten_fail",4, xAxis120);
   wjets__110->SetBinContent(1,5.404774);
   wjets__110->SetBinContent(2,3.131464);
   wjets__110->SetBinContent(3,2.115599);
   wjets__110->SetBinContent(4,0.3455102);
   wjets__110->SetBinError(1,0.06119804);
   wjets__110->SetBinError(2,0.03545744);
   wjets__110->SetBinError(3,0.02395485);
   wjets__110->SetBinError(4,0.003912197);
   wjets__110->SetEntries(4);

   ci = TColor::GetColor("#ccffcc");
   wjets__110->SetFillColor(ci);
   wjets__110->GetXaxis()->SetTitle("min(999.9999,fjmass)");
   wjets__110->GetXaxis()->SetLabelFont(42);
   wjets__110->GetXaxis()->SetLabelSize(0.035);
   wjets__110->GetXaxis()->SetTitleSize(0.035);
   wjets__110->GetXaxis()->SetTitleFont(42);
   wjets__110->GetYaxis()->SetTitle("Events / ( 143.75 )");
   wjets__110->GetYaxis()->SetLabelFont(42);
   wjets__110->GetYaxis()->SetLabelSize(0.035);
   wjets__110->GetYaxis()->SetTitleSize(0.035);
   wjets__110->GetYaxis()->SetTitleFont(42);
   wjets__110->GetZaxis()->SetLabelFont(42);
   wjets__110->GetZaxis()->SetLabelSize(0.035);
   wjets__110->GetZaxis()->SetTitleSize(0.035);
   wjets__110->GetZaxis()->SetTitleFont(42);
   h_stack_postfit->Add(wjets,"");
   Double_t xAxis121[5] = {25, 75, 100, 150, 600}; 
   
   TH1F *ttbar__111 = new TH1F("ttbar__111","ttbar in mass0_ten_fail",4, xAxis121);
   ttbar__111->SetBinContent(1,2.596053);
   ttbar__111->SetBinContent(2,13.74249);
   ttbar__111->SetBinContent(3,6.249203);
   ttbar__111->SetBinContent(4,0.2815219);
   ttbar__111->SetBinError(1,0.3051234);
   ttbar__111->SetBinError(2,1.071668);
   ttbar__111->SetBinError(3,0.4189393);
   ttbar__111->SetBinError(4,0.04013018);
   ttbar__111->SetEntries(4);

   ci = TColor::GetColor("#ffcc66");
   ttbar__111->SetFillColor(ci);
   ttbar__111->GetXaxis()->SetTitle("min(999.9999,fjmass)");
   ttbar__111->GetXaxis()->SetLabelFont(42);
   ttbar__111->GetXaxis()->SetLabelSize(0.035);
   ttbar__111->GetXaxis()->SetTitleSize(0.035);
   ttbar__111->GetXaxis()->SetTitleFont(42);
   ttbar__111->GetYaxis()->SetTitle("Events / ( 143.75 )");
   ttbar__111->GetYaxis()->SetLabelFont(42);
   ttbar__111->GetYaxis()->SetLabelSize(0.035);
   ttbar__111->GetYaxis()->SetTitleSize(0.035);
   ttbar__111->GetYaxis()->SetTitleFont(42);
   ttbar__111->GetZaxis()->SetLabelFont(42);
   ttbar__111->GetZaxis()->SetLabelSize(0.035);
   ttbar__111->GetZaxis()->SetTitleSize(0.035);
   ttbar__111->GetZaxis()->SetTitleFont(42);
   h_stack_postfit->Add(ttbar,"");
   h_stack_postfit->Draw("hist same");
   Double_t xAxis122[5] = {25, 75, 100, 150, 600}; 
   
   TH1F *h_all_prefit__112 = new TH1F("h_all_prefit__112","h_all_prefit",4, xAxis122);
   h_all_prefit__112->SetBinContent(1,11.15636);
   h_all_prefit__112->SetBinContent(2,22.39579);
   h_all_prefit__112->SetBinContent(3,9.022124);
   h_all_prefit__112->SetBinContent(4,0.6916361);
   h_all_prefit__112->SetBinError(1,0.8872805);
   h_all_prefit__112->SetBinError(2,1.23642);
   h_all_prefit__112->SetBinError(3,0.431396);
   h_all_prefit__112->SetBinError(4,0.02912159);
   h_all_prefit__112->SetEntries(24);
   h_all_prefit__112->SetLineColor(2);
   h_all_prefit__112->SetLineStyle(7);
   h_all_prefit__112->SetLineWidth(2);
   h_all_prefit__112->GetXaxis()->SetNdivisions(405);
   h_all_prefit__112->GetXaxis()->SetLabelFont(42);
   h_all_prefit__112->GetXaxis()->SetLabelOffset(0.007);
   h_all_prefit__112->GetXaxis()->SetTitleSize(0.05);
   h_all_prefit__112->GetXaxis()->SetTickLength(0.025);
   h_all_prefit__112->GetXaxis()->SetTitleOffset(0.9);
   h_all_prefit__112->GetXaxis()->SetTitleFont(42);
   h_all_prefit__112->GetYaxis()->SetNdivisions(405);
   h_all_prefit__112->GetYaxis()->SetLabelFont(42);
   h_all_prefit__112->GetYaxis()->SetLabelOffset(0.007);
   h_all_prefit__112->GetYaxis()->SetTitleSize(0.05);
   h_all_prefit__112->GetYaxis()->SetTickLength(0.025);
   h_all_prefit__112->GetYaxis()->SetTitleOffset(1.05);
   h_all_prefit__112->GetYaxis()->SetTitleFont(42);
   h_all_prefit__112->GetZaxis()->SetNdivisions(405);
   h_all_prefit__112->GetZaxis()->SetLabelFont(42);
   h_all_prefit__112->GetZaxis()->SetLabelOffset(0.007);
   h_all_prefit__112->GetZaxis()->SetTitleSize(0.05);
   h_all_prefit__112->GetZaxis()->SetTickLength(0.025);
   h_all_prefit__112->GetZaxis()->SetTitleFont(42);
   h_all_prefit__112->Draw("histsame");
   Double_t xAxis123[5] = {25, 75, 100, 150, 600}; 
   
   TH1F *singleelectrontop_data__113 = new TH1F("singleelectrontop_data__113","base",4, xAxis123);
   singleelectrontop_data__113->SetBinContent(1,9.3);
   singleelectrontop_data__113->SetBinContent(2,20.28);
   singleelectrontop_data__113->SetBinContent(3,8.9);
   singleelectrontop_data__113->SetBinContent(4,0.68);
   singleelectrontop_data__113->SetBinError(1,0.4312772);
   singleelectrontop_data__113->SetBinError(2,0.9006664);
   singleelectrontop_data__113->SetBinError(3,0.4219005);
   singleelectrontop_data__113->SetBinError(4,0.03887301);
   singleelectrontop_data__113->SetEntries(1303.213);
   singleelectrontop_data__113->SetMarkerStyle(20);
   singleelectrontop_data__113->SetMarkerSize(1.2);
   singleelectrontop_data__113->GetXaxis()->SetTitle("min(999.9999,fjmass)");
   singleelectrontop_data__113->GetXaxis()->SetLabelFont(42);
   singleelectrontop_data__113->GetXaxis()->SetLabelSize(0.035);
   singleelectrontop_data__113->GetXaxis()->SetTitleSize(0.035);
   singleelectrontop_data__113->GetXaxis()->SetTitleFont(42);
   singleelectrontop_data__113->GetYaxis()->SetLabelFont(42);
   singleelectrontop_data__113->GetYaxis()->SetLabelSize(0.035);
   singleelectrontop_data__113->GetYaxis()->SetTitleSize(0.035);
   singleelectrontop_data__113->GetYaxis()->SetTitleFont(42);
   singleelectrontop_data__113->GetZaxis()->SetLabelFont(42);
   singleelectrontop_data__113->GetZaxis()->SetLabelSize(0.035);
   singleelectrontop_data__113->GetZaxis()->SetTitleSize(0.035);
   singleelectrontop_data__113->GetZaxis()->SetTitleFont(42);
   singleelectrontop_data__113->Draw("epsame e0");
   
   TLegend *leg = new TLegend(0.55,0.61,0.88,0.93,NULL,"brNDC");
   leg->SetBorderSize(0);
   leg->SetTextSize(0.035);
   leg->SetLineColor(0);
   leg->SetLineStyle(1);
   leg->SetLineWidth(1);
   leg->SetFillColor(0);
   leg->SetFillStyle(0);
   TLegendEntry *entry=leg->AddEntry("singleelectrontop_data","Data","elp");
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
   TLatex *   tex = new TLatex(0.16,0.825,"t#bar{t} CR (e) fail");
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
   Double_t xAxis124[5] = {25, 75, 100, 150, 600}; 
   
   TH1F *dummy_copy__114 = new TH1F("dummy_copy__114","h_all_prefit",4, xAxis124);
   dummy_copy__114->SetBinContent(1,11.15636);
   dummy_copy__114->SetBinContent(2,22.39579);
   dummy_copy__114->SetBinContent(3,9.022124);
   dummy_copy__114->SetBinContent(4,0.6916361);
   dummy_copy__114->SetBinError(1,0.8872805);
   dummy_copy__114->SetBinError(2,1.23642);
   dummy_copy__114->SetBinError(3,0.431396);
   dummy_copy__114->SetBinError(4,0.02912159);
   dummy_copy__114->SetMinimum(0.0005);
   dummy_copy__114->SetMaximum(1119.79);
   dummy_copy__114->SetEntries(24);
   dummy_copy__114->SetDirectory(0);
   dummy_copy__114->SetLineColor(0);
   dummy_copy__114->SetLineStyle(0);
   dummy_copy__114->SetLineWidth(0);
   dummy_copy__114->SetMarkerColor(0);
   dummy_copy__114->SetMarkerSize(0);
   dummy_copy__114->GetXaxis()->SetNdivisions(405);
   dummy_copy__114->GetXaxis()->SetLabelFont(42);
   dummy_copy__114->GetXaxis()->SetLabelOffset(0.007);
   dummy_copy__114->GetXaxis()->SetLabelSize(0);
   dummy_copy__114->GetXaxis()->SetTitleSize(0);
   dummy_copy__114->GetXaxis()->SetTickLength(0.025);
   dummy_copy__114->GetXaxis()->SetTitleOffset(0.9);
   dummy_copy__114->GetXaxis()->SetTitleFont(42);
   dummy_copy__114->GetYaxis()->SetTitle("Events / GeV");
   dummy_copy__114->GetYaxis()->SetNdivisions(405);
   dummy_copy__114->GetYaxis()->SetLabelFont(42);
   dummy_copy__114->GetYaxis()->SetLabelOffset(0.007);
   dummy_copy__114->GetYaxis()->SetTitleSize(0.05);
   dummy_copy__114->GetYaxis()->SetTickLength(0.025);
   dummy_copy__114->GetYaxis()->SetTitleOffset(1.21);
   dummy_copy__114->GetYaxis()->SetTitleFont(42);
   dummy_copy__114->GetZaxis()->SetNdivisions(405);
   dummy_copy__114->GetZaxis()->SetLabelFont(42);
   dummy_copy__114->GetZaxis()->SetLabelOffset(0.007);
   dummy_copy__114->GetZaxis()->SetTitleSize(0.05);
   dummy_copy__114->GetZaxis()->SetTickLength(0.025);
   dummy_copy__114->GetZaxis()->SetTitleFont(42);
   dummy_copy__114->Draw("sameaxis");
  
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
   Double_t xAxis125[5] = {25, 75, 100, 150, 600}; 
   
   TH1F *dummy2__115 = new TH1F("dummy2__115","dummy2",4, xAxis125);
   dummy2__115->SetBinContent(1,1);
   dummy2__115->SetBinContent(2,1);
   dummy2__115->SetBinContent(3,1);
   dummy2__115->SetMinimum(0.1);
   dummy2__115->SetMaximum(2.1);
   dummy2__115->SetEntries(3);
   dummy2__115->SetLineColor(0);
   dummy2__115->SetLineStyle(0);
   dummy2__115->SetLineWidth(0);
   dummy2__115->SetMarkerColor(0);
   dummy2__115->SetMarkerSize(0);
   dummy2__115->GetXaxis()->SetTitle("Fatjet m_{SD} (GeV)");
   dummy2__115->GetXaxis()->SetLabelFont(42);
   dummy2__115->GetXaxis()->SetLabelOffset(0.007);
   dummy2__115->GetXaxis()->SetTitleSize(0.05);
   dummy2__115->GetXaxis()->SetTickLength(0.025);
   dummy2__115->GetXaxis()->SetTitleOffset(0.9);
   dummy2__115->GetXaxis()->SetTitleFont(42);
   dummy2__115->GetYaxis()->SetTitle("Data / Pred.");
   dummy2__115->GetYaxis()->CenterTitle(true);
   dummy2__115->GetYaxis()->SetNdivisions(5);
   dummy2__115->GetYaxis()->SetLabelFont(42);
   dummy2__115->GetYaxis()->SetLabelOffset(0.007);
   dummy2__115->GetYaxis()->SetLabelSize(0.03);
   dummy2__115->GetYaxis()->SetTickLength(0.025);
   dummy2__115->GetYaxis()->SetTitleOffset(1.5);
   dummy2__115->GetYaxis()->SetTitleFont(42);
   dummy2__115->GetZaxis()->SetNdivisions(405);
   dummy2__115->GetZaxis()->SetLabelFont(42);
   dummy2__115->GetZaxis()->SetLabelOffset(0.007);
   dummy2__115->GetZaxis()->SetTitleSize(0.05);
   dummy2__115->GetZaxis()->SetTickLength(0.025);
   dummy2__115->GetZaxis()->SetTitleFont(42);
   dummy2__115->Draw("hist");
   Double_t xAxis126[5] = {25, 75, 100, 150, 600}; 
   
   TH1F *total_background__116 = new TH1F("total_background__116","Total background in mass0_ten_fail",4, xAxis126);
   total_background__116->SetBinContent(1,1);
   total_background__116->SetBinContent(2,1);
   total_background__116->SetBinContent(3,1);
   total_background__116->SetBinContent(4,1);
   total_background__116->SetBinContent(5,1);
   total_background__116->SetBinError(1,0.03476195);
   total_background__116->SetBinError(2,0.05327538);
   total_background__116->SetBinError(3,0.04794128);
   total_background__116->SetBinError(4,0.05859234);
   total_background__116->SetEntries(29);

   ci = TColor::GetColor("#f4eb99");
   total_background__116->SetFillColor(ci);

   ci = TColor::GetColor("#f4eb99");
   total_background__116->SetLineColor(ci);
   total_background__116->SetMarkerSize(0);
   total_background__116->GetXaxis()->SetTitle("min(999.9999,fjmass)");
   total_background__116->GetXaxis()->SetLabelFont(42);
   total_background__116->GetXaxis()->SetLabelSize(0.035);
   total_background__116->GetXaxis()->SetTitleSize(0.035);
   total_background__116->GetXaxis()->SetTitleFont(42);
   total_background__116->GetYaxis()->SetTitle("Events / ( 143.75 )");
   total_background__116->GetYaxis()->SetLabelFont(42);
   total_background__116->GetYaxis()->SetLabelSize(0.035);
   total_background__116->GetYaxis()->SetTitleSize(0.035);
   total_background__116->GetYaxis()->SetTitleFont(42);
   total_background__116->GetZaxis()->SetLabelFont(42);
   total_background__116->GetZaxis()->SetLabelSize(0.035);
   total_background__116->GetZaxis()->SetTitleSize(0.035);
   total_background__116->GetZaxis()->SetTitleFont(42);
   total_background__116->Draw("e2same");
   
   TF1 *f110 = new TF1("f1","1",-5000,5000);
   f110->SetFillColor(19);
   f110->SetFillStyle(0);
   f110->SetLineWidth(2);
   f110->SetLineStyle(2);
   f110->GetXaxis()->SetNdivisions(405);
   f110->GetXaxis()->SetLabelFont(42);
   f110->GetXaxis()->SetLabelOffset(0.007);
   f110->GetXaxis()->SetTitleSize(0.05);
   f110->GetXaxis()->SetTickLength(0.025);
   f110->GetXaxis()->SetTitleOffset(0.9);
   f110->GetXaxis()->SetTitleFont(42);
   f110->GetYaxis()->SetNdivisions(405);
   f110->GetYaxis()->SetLabelFont(42);
   f110->GetYaxis()->SetLabelOffset(0.007);
   f110->GetYaxis()->SetTitleSize(0.05);
   f110->GetYaxis()->SetTickLength(0.025);
   f110->GetYaxis()->SetTitleOffset(1.05);
   f110->GetYaxis()->SetTitleFont(42);
   f110->Draw("same");
   
   Double_t _fx3019[4] = {
   50,
   87.5,
   125,
   375};
   Double_t _fy3019[4] = {
   0.8336053,
   0.9055272,
   0.9864639,
   0.983176};
   Double_t _felx3019[4] = {
   25,
   12.5,
   25,
   225};
   Double_t _fely3019[4] = {
   0.03865752,
   0.04021587,
   0.04676287,
   0.05620443};
   Double_t _fehx3019[4] = {
   25,
   12.5,
   25,
   225};
   Double_t _fehy3019[4] = {
   0.03865752,
   0.04021587,
   0.04676287,
   0.05620443};
   TGraphAsymmErrors *grae = new TGraphAsymmErrors(4,_fx3019,_fy3019,_felx3019,_fehx3019,_fely3019,_fehy3019);
   grae->SetName("");
   grae->SetTitle("");
   grae->SetFillColor(1);
   grae->SetLineColor(2);
   grae->SetLineStyle(7);
   grae->SetMarkerColor(2);
   grae->SetMarkerStyle(24);
   
   TH1F *Graph_Graph3019 = new TH1F("Graph_Graph3019","",100,0,657.5);
   Graph_Graph3019->SetMinimum(0.7705046);
   Graph_Graph3019->SetMaximum(1.063824);
   Graph_Graph3019->SetDirectory(0);
   Graph_Graph3019->SetStats(0);
   Graph_Graph3019->SetLineStyle(0);
   Graph_Graph3019->GetXaxis()->SetNdivisions(405);
   Graph_Graph3019->GetXaxis()->SetLabelFont(42);
   Graph_Graph3019->GetXaxis()->SetLabelOffset(0.007);
   Graph_Graph3019->GetXaxis()->SetTitleSize(0.05);
   Graph_Graph3019->GetXaxis()->SetTickLength(0.025);
   Graph_Graph3019->GetXaxis()->SetTitleOffset(0.9);
   Graph_Graph3019->GetXaxis()->SetTitleFont(42);
   Graph_Graph3019->GetYaxis()->SetNdivisions(405);
   Graph_Graph3019->GetYaxis()->SetLabelFont(42);
   Graph_Graph3019->GetYaxis()->SetLabelOffset(0.007);
   Graph_Graph3019->GetYaxis()->SetTitleSize(0.05);
   Graph_Graph3019->GetYaxis()->SetTickLength(0.025);
   Graph_Graph3019->GetYaxis()->SetTitleOffset(1.05);
   Graph_Graph3019->GetYaxis()->SetTitleFont(42);
   Graph_Graph3019->GetZaxis()->SetNdivisions(405);
   Graph_Graph3019->GetZaxis()->SetLabelFont(42);
   Graph_Graph3019->GetZaxis()->SetLabelOffset(0.007);
   Graph_Graph3019->GetZaxis()->SetTitleSize(0.05);
   Graph_Graph3019->GetZaxis()->SetTickLength(0.025);
   Graph_Graph3019->GetZaxis()->SetTitleFont(42);
   grae->SetHistogram(Graph_Graph3019);
   
   grae->Draw("ep 0");
   
   Double_t _fx3020[4] = {
   50,
   87.5,
   125,
   375};
   Double_t _fy3020[4] = {
   0.9638754,
   0.9997246,
   0.9999909,
   1.000794};
   Double_t _felx3020[4] = {
   25,
   12.5,
   25,
   225};
   Double_t _fely3020[4] = {
   0.04469865,
   0.04439933,
   0.04740412,
   0.05721156};
   Double_t _fehx3020[4] = {
   25,
   12.5,
   25,
   225};
   Double_t _fehy3020[4] = {
   0.04469865,
   0.04439933,
   0.04740412,
   0.05721156};
   grae = new TGraphAsymmErrors(4,_fx3020,_fy3020,_felx3020,_fehx3020,_fely3020,_fehy3020);
   grae->SetName("");
   grae->SetTitle("");
   grae->SetFillColor(1);
   grae->SetMarkerStyle(20);
   
   TH1F *Graph_Graph3020 = new TH1F("Graph_Graph3020","",100,0,657.5);
   Graph_Graph3020->SetMinimum(0.9052939);
   Graph_Graph3020->SetMaximum(1.071888);
   Graph_Graph3020->SetDirectory(0);
   Graph_Graph3020->SetStats(0);
   Graph_Graph3020->SetLineStyle(0);
   Graph_Graph3020->GetXaxis()->SetNdivisions(405);
   Graph_Graph3020->GetXaxis()->SetLabelFont(42);
   Graph_Graph3020->GetXaxis()->SetLabelOffset(0.007);
   Graph_Graph3020->GetXaxis()->SetTitleSize(0.05);
   Graph_Graph3020->GetXaxis()->SetTickLength(0.025);
   Graph_Graph3020->GetXaxis()->SetTitleOffset(0.9);
   Graph_Graph3020->GetXaxis()->SetTitleFont(42);
   Graph_Graph3020->GetYaxis()->SetNdivisions(405);
   Graph_Graph3020->GetYaxis()->SetLabelFont(42);
   Graph_Graph3020->GetYaxis()->SetLabelOffset(0.007);
   Graph_Graph3020->GetYaxis()->SetTitleSize(0.05);
   Graph_Graph3020->GetYaxis()->SetTickLength(0.025);
   Graph_Graph3020->GetYaxis()->SetTitleOffset(1.05);
   Graph_Graph3020->GetYaxis()->SetTitleFont(42);
   Graph_Graph3020->GetZaxis()->SetNdivisions(405);
   Graph_Graph3020->GetZaxis()->SetLabelFont(42);
   Graph_Graph3020->GetZaxis()->SetLabelOffset(0.007);
   Graph_Graph3020->GetZaxis()->SetTitleSize(0.05);
   Graph_Graph3020->GetZaxis()->SetTickLength(0.025);
   Graph_Graph3020->GetZaxis()->SetTitleFont(42);
   grae->SetHistogram(Graph_Graph3020);
   
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
