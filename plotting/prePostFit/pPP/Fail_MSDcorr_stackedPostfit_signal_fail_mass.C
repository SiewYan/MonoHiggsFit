void Fail_MSDcorr_stackedPostfit_signal_fail_mass()
{
//=========Macro generated from canvas: c/c
//=========  (Tue Feb 13 18:07:04 2018) by ROOT version6.06/09
   TCanvas *c = new TCanvas("c", "c",0,0,720,800);
   gStyle->SetOptFit(1);
   gStyle->SetOptStat(0);
   gStyle->SetOptTitle(0);
   c->SetHighLightColor(2);
   c->Range(-60.18518,-6.767833,649.6914,4.788177);
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
   Double_t xAxis161[5] = {25, 75, 100, 150, 600}; 
   
   TH1F *dummy__148 = new TH1F("dummy__148","h_all_prefit",4, xAxis161);
   dummy__148->SetBinContent(1,338.9359);
   dummy__148->SetBinContent(2,226.0922);
   dummy__148->SetBinContent(3,136.5148);
   dummy__148->SetBinContent(4,19.68584);
   dummy__148->SetBinError(1,13.9504);
   dummy__148->SetBinError(2,9.966609);
   dummy__148->SetBinError(3,5.355052);
   dummy__148->SetBinError(4,0.8195158);
   dummy__148->SetMinimum(0.0005);
   dummy__148->SetMaximum(16946.8);
   dummy__148->SetEntries(20);
   dummy__148->SetLineColor(0);
   dummy__148->SetLineStyle(0);
   dummy__148->SetLineWidth(0);
   dummy__148->SetMarkerColor(0);
   dummy__148->SetMarkerSize(0);
   dummy__148->GetXaxis()->SetNdivisions(405);
   dummy__148->GetXaxis()->SetLabelFont(42);
   dummy__148->GetXaxis()->SetLabelOffset(0.007);
   dummy__148->GetXaxis()->SetLabelSize(0);
   dummy__148->GetXaxis()->SetTitleSize(0);
   dummy__148->GetXaxis()->SetTickLength(0.025);
   dummy__148->GetXaxis()->SetTitleOffset(0.9);
   dummy__148->GetXaxis()->SetTitleFont(42);
   dummy__148->GetYaxis()->SetTitle("Events / GeV");
   dummy__148->GetYaxis()->SetNdivisions(405);
   dummy__148->GetYaxis()->SetLabelFont(42);
   dummy__148->GetYaxis()->SetLabelOffset(0.007);
   dummy__148->GetYaxis()->SetTitleSize(0.05);
   dummy__148->GetYaxis()->SetTickLength(0.025);
   dummy__148->GetYaxis()->SetTitleOffset(1.21);
   dummy__148->GetYaxis()->SetTitleFont(42);
   dummy__148->GetZaxis()->SetNdivisions(405);
   dummy__148->GetZaxis()->SetLabelFont(42);
   dummy__148->GetZaxis()->SetLabelOffset(0.007);
   dummy__148->GetZaxis()->SetTitleSize(0.05);
   dummy__148->GetZaxis()->SetTickLength(0.025);
   dummy__148->GetZaxis()->SetTitleFont(42);
   dummy__148->Draw("");
   
   THStack *h_stack_postfit = new THStack();
   h_stack_postfit->SetName("h_stack_postfit");
   h_stack_postfit->SetTitle("h_stack_postfit");
   Double_t xAxis162[5] = {25, 75, 100, 150, 600}; 
   
   TH1F *h_stack_postfit_stack_14 = new TH1F("h_stack_postfit_stack_14","h_stack_postfit",4, xAxis162);
   h_stack_postfit_stack_14->SetMinimum(0.01461299);
   h_stack_postfit_stack_14->SetMaximum(670.1047);
   h_stack_postfit_stack_14->SetDirectory(0);
   h_stack_postfit_stack_14->SetStats(0);
   h_stack_postfit_stack_14->SetLineStyle(0);
   h_stack_postfit_stack_14->GetXaxis()->SetNdivisions(405);
   h_stack_postfit_stack_14->GetXaxis()->SetLabelFont(42);
   h_stack_postfit_stack_14->GetXaxis()->SetLabelOffset(0.007);
   h_stack_postfit_stack_14->GetXaxis()->SetTitleSize(0.05);
   h_stack_postfit_stack_14->GetXaxis()->SetTickLength(0.025);
   h_stack_postfit_stack_14->GetXaxis()->SetTitleOffset(0.9);
   h_stack_postfit_stack_14->GetXaxis()->SetTitleFont(42);
   h_stack_postfit_stack_14->GetYaxis()->SetNdivisions(405);
   h_stack_postfit_stack_14->GetYaxis()->SetLabelFont(42);
   h_stack_postfit_stack_14->GetYaxis()->SetLabelOffset(0.007);
   h_stack_postfit_stack_14->GetYaxis()->SetTitleSize(0.05);
   h_stack_postfit_stack_14->GetYaxis()->SetTickLength(0.025);
   h_stack_postfit_stack_14->GetYaxis()->SetTitleOffset(1.05);
   h_stack_postfit_stack_14->GetYaxis()->SetTitleFont(42);
   h_stack_postfit_stack_14->GetZaxis()->SetNdivisions(405);
   h_stack_postfit_stack_14->GetZaxis()->SetLabelFont(42);
   h_stack_postfit_stack_14->GetZaxis()->SetLabelOffset(0.007);
   h_stack_postfit_stack_14->GetZaxis()->SetTitleSize(0.05);
   h_stack_postfit_stack_14->GetZaxis()->SetTickLength(0.025);
   h_stack_postfit_stack_14->GetZaxis()->SetTitleFont(42);
   h_stack_postfit->SetHistogram(h_stack_postfit_stack_14);
   
   Double_t xAxis163[5] = {25, 75, 100, 150, 600}; 
   
   TH1F *dibosons__149 = new TH1F("dibosons__149","dibosons in mass0_sig_fail",4, xAxis163);
   dibosons__149->SetBinContent(1,6.30092);
   dibosons__149->SetBinContent(2,30.98874);
   dibosons__149->SetBinContent(3,3.158698);
   dibosons__149->SetBinContent(4,0.1976455);
   dibosons__149->SetBinError(1,0.6269082);
   dibosons__149->SetBinError(2,3.083609);
   dibosons__149->SetBinError(3,0.3143001);
   dibosons__149->SetBinError(4,0.01966899);
   dibosons__149->SetEntries(4);

   Int_t ci;      // for color index setting
   TColor *color; // for color definition with alpha
   ci = TColor::GetColor("#ffff99");
   dibosons__149->SetFillColor(ci);
   dibosons__149->GetXaxis()->SetTitle("min(999.9999,fjmass)");
   dibosons__149->GetXaxis()->SetLabelFont(42);
   dibosons__149->GetXaxis()->SetLabelSize(0.035);
   dibosons__149->GetXaxis()->SetTitleSize(0.035);
   dibosons__149->GetXaxis()->SetTitleFont(42);
   dibosons__149->GetYaxis()->SetTitle("Events / ( 143.75 )");
   dibosons__149->GetYaxis()->SetLabelFont(42);
   dibosons__149->GetYaxis()->SetLabelSize(0.035);
   dibosons__149->GetYaxis()->SetTitleSize(0.035);
   dibosons__149->GetYaxis()->SetTitleFont(42);
   dibosons__149->GetZaxis()->SetLabelFont(42);
   dibosons__149->GetZaxis()->SetLabelSize(0.035);
   dibosons__149->GetZaxis()->SetTitleSize(0.035);
   dibosons__149->GetZaxis()->SetTitleFont(42);
   h_stack_postfit->Add(dibosons,"");
   Double_t xAxis164[5] = {25, 75, 100, 150, 600}; 
   
   TH1F *stop__150 = new TH1F("stop__150","stop in mass0_sig_fail",4, xAxis164);
   stop__150->SetBinContent(1,1.148165);
   stop__150->SetBinContent(2,3.629409);
   stop__150->SetBinContent(3,0.834314);
   stop__150->SetBinContent(4,0.05480626);
   stop__150->SetBinError(1,0.1385473);
   stop__150->SetBinError(2,0.4377744);
   stop__150->SetBinError(3,0.1003473);
   stop__150->SetBinError(4,0.006610307);
   stop__150->SetEntries(4);

   ci = TColor::GetColor("#ff9999");
   stop__150->SetFillColor(ci);
   stop__150->GetXaxis()->SetTitle("min(999.9999,fjmass)");
   stop__150->GetXaxis()->SetLabelFont(42);
   stop__150->GetXaxis()->SetLabelSize(0.035);
   stop__150->GetXaxis()->SetTitleSize(0.035);
   stop__150->GetXaxis()->SetTitleFont(42);
   stop__150->GetYaxis()->SetTitle("Events / ( 143.75 )");
   stop__150->GetYaxis()->SetLabelFont(42);
   stop__150->GetYaxis()->SetLabelSize(0.035);
   stop__150->GetYaxis()->SetTitleSize(0.035);
   stop__150->GetYaxis()->SetTitleFont(42);
   stop__150->GetZaxis()->SetLabelFont(42);
   stop__150->GetZaxis()->SetLabelSize(0.035);
   stop__150->GetZaxis()->SetTitleSize(0.035);
   stop__150->GetZaxis()->SetTitleFont(42);
   h_stack_postfit->Add(stop,"");
   Double_t xAxis165[5] = {25, 75, 100, 150, 600}; 
   
   TH1F *wjets__151 = new TH1F("wjets__151","wjets in mass0_sig_fail",4, xAxis165);
   wjets__151->SetBinContent(1,126.4247);
   wjets__151->SetBinContent(2,55.61211);
   wjets__151->SetBinContent(3,46.13143);
   wjets__151->SetBinContent(4,6.977738);
   wjets__151->SetBinError(1,4.394659);
   wjets__151->SetBinError(2,2.50241);
   wjets__151->SetBinError(3,1.345004);
   wjets__151->SetBinError(4,0.1298033);
   wjets__151->SetEntries(4);

   ci = TColor::GetColor("#ccffcc");
   wjets__151->SetFillColor(ci);
   wjets__151->GetXaxis()->SetTitle("min(999.9999,fjmass)");
   wjets__151->GetXaxis()->SetLabelFont(42);
   wjets__151->GetXaxis()->SetLabelSize(0.035);
   wjets__151->GetXaxis()->SetTitleSize(0.035);
   wjets__151->GetXaxis()->SetTitleFont(42);
   wjets__151->GetYaxis()->SetTitle("Events / ( 143.75 )");
   wjets__151->GetYaxis()->SetLabelFont(42);
   wjets__151->GetYaxis()->SetLabelSize(0.035);
   wjets__151->GetYaxis()->SetTitleSize(0.035);
   wjets__151->GetYaxis()->SetTitleFont(42);
   wjets__151->GetZaxis()->SetLabelFont(42);
   wjets__151->GetZaxis()->SetLabelSize(0.035);
   wjets__151->GetZaxis()->SetTitleSize(0.035);
   wjets__151->GetZaxis()->SetTitleFont(42);
   h_stack_postfit->Add(wjets,"");
   Double_t xAxis166[5] = {25, 75, 100, 150, 600}; 
   
   TH1F *ttbar__152 = new TH1F("ttbar__152","ttbar in mass0_sig_fail",4, xAxis166);
   ttbar__152->SetBinContent(1,2.641517);
   ttbar__152->SetBinContent(2,13.7947);
   ttbar__152->SetBinContent(3,6.81893);
   ttbar__152->SetBinContent(4,0.3106758);
   ttbar__152->SetBinError(1,0.3111422);
   ttbar__152->SetBinError(2,1.215911);
   ttbar__152->SetBinError(3,0.5563939);
   ttbar__152->SetBinError(4,0.05825374);
   ttbar__152->SetEntries(4);

   ci = TColor::GetColor("#ffcc66");
   ttbar__152->SetFillColor(ci);
   ttbar__152->GetXaxis()->SetTitle("min(999.9999,fjmass)");
   ttbar__152->GetXaxis()->SetLabelFont(42);
   ttbar__152->GetXaxis()->SetLabelSize(0.035);
   ttbar__152->GetXaxis()->SetTitleSize(0.035);
   ttbar__152->GetXaxis()->SetTitleFont(42);
   ttbar__152->GetYaxis()->SetTitle("Events / ( 143.75 )");
   ttbar__152->GetYaxis()->SetLabelFont(42);
   ttbar__152->GetYaxis()->SetLabelSize(0.035);
   ttbar__152->GetYaxis()->SetTitleSize(0.035);
   ttbar__152->GetYaxis()->SetTitleFont(42);
   ttbar__152->GetZaxis()->SetLabelFont(42);
   ttbar__152->GetZaxis()->SetLabelSize(0.035);
   ttbar__152->GetZaxis()->SetTitleSize(0.035);
   ttbar__152->GetZaxis()->SetTitleFont(42);
   h_stack_postfit->Add(ttbar,"");
   Double_t xAxis167[5] = {25, 75, 100, 150, 600}; 
   
   TH1F *zvv__153 = new TH1F("zvv__153","zvv in mass0_sig_fail",4, xAxis167);
   zvv__153->SetBinContent(1,238.4027);
   zvv__153->SetBinContent(2,115.7066);
   zvv__153->SetBinContent(3,96.50518);
   zvv__153->SetBinContent(4,14.32814);
   zvv__153->SetBinError(1,4.527788);
   zvv__153->SetBinError(2,3.578057);
   zvv__153->SetBinError(3,1.997374);
   zvv__153->SetBinError(4,0.2110859);
   zvv__153->SetEntries(4);

   ci = TColor::GetColor("#33ffff");
   zvv__153->SetFillColor(ci);
   zvv__153->GetXaxis()->SetTitle("min(999.9999,fjmass)");
   zvv__153->GetXaxis()->SetLabelFont(42);
   zvv__153->GetXaxis()->SetLabelSize(0.035);
   zvv__153->GetXaxis()->SetTitleSize(0.035);
   zvv__153->GetXaxis()->SetTitleFont(42);
   zvv__153->GetYaxis()->SetTitle("Events / ( 143.75 )");
   zvv__153->GetYaxis()->SetLabelFont(42);
   zvv__153->GetYaxis()->SetLabelSize(0.035);
   zvv__153->GetYaxis()->SetTitleSize(0.035);
   zvv__153->GetYaxis()->SetTitleFont(42);
   zvv__153->GetZaxis()->SetLabelFont(42);
   zvv__153->GetZaxis()->SetLabelSize(0.035);
   zvv__153->GetZaxis()->SetTitleSize(0.035);
   zvv__153->GetZaxis()->SetTitleFont(42);
   h_stack_postfit->Add(zvv,"");
   h_stack_postfit->Draw("hist same");
   Double_t xAxis168[5] = {25, 75, 100, 150, 600}; 
   
   TH1F *h_all_prefit__154 = new TH1F("h_all_prefit__154","h_all_prefit",4, xAxis168);
   h_all_prefit__154->SetBinContent(1,338.9359);
   h_all_prefit__154->SetBinContent(2,226.0922);
   h_all_prefit__154->SetBinContent(3,136.5148);
   h_all_prefit__154->SetBinContent(4,19.68584);
   h_all_prefit__154->SetBinError(1,13.9504);
   h_all_prefit__154->SetBinError(2,9.966609);
   h_all_prefit__154->SetBinError(3,5.355052);
   h_all_prefit__154->SetBinError(4,0.8195158);
   h_all_prefit__154->SetEntries(20);
   h_all_prefit__154->SetLineColor(2);
   h_all_prefit__154->SetLineStyle(7);
   h_all_prefit__154->SetLineWidth(2);
   h_all_prefit__154->GetXaxis()->SetNdivisions(405);
   h_all_prefit__154->GetXaxis()->SetLabelFont(42);
   h_all_prefit__154->GetXaxis()->SetLabelOffset(0.007);
   h_all_prefit__154->GetXaxis()->SetTitleSize(0.05);
   h_all_prefit__154->GetXaxis()->SetTickLength(0.025);
   h_all_prefit__154->GetXaxis()->SetTitleOffset(0.9);
   h_all_prefit__154->GetXaxis()->SetTitleFont(42);
   h_all_prefit__154->GetYaxis()->SetNdivisions(405);
   h_all_prefit__154->GetYaxis()->SetLabelFont(42);
   h_all_prefit__154->GetYaxis()->SetLabelOffset(0.007);
   h_all_prefit__154->GetYaxis()->SetTitleSize(0.05);
   h_all_prefit__154->GetYaxis()->SetTickLength(0.025);
   h_all_prefit__154->GetYaxis()->SetTitleOffset(1.05);
   h_all_prefit__154->GetYaxis()->SetTitleFont(42);
   h_all_prefit__154->GetZaxis()->SetNdivisions(405);
   h_all_prefit__154->GetZaxis()->SetLabelFont(42);
   h_all_prefit__154->GetZaxis()->SetLabelOffset(0.007);
   h_all_prefit__154->GetZaxis()->SetTitleSize(0.05);
   h_all_prefit__154->GetZaxis()->SetTickLength(0.025);
   h_all_prefit__154->GetZaxis()->SetTitleFont(42);
   h_all_prefit__154->Draw("histsame");
   Double_t xAxis169[5] = {25, 75, 100, 150, 600}; 
   
   TH1F *signal_data__155 = new TH1F("signal_data__155","base",4, xAxis169);
   signal_data__155->SetBinContent(1,375.66);
   signal_data__155->SetBinContent(2,220);
   signal_data__155->SetBinContent(3,154.2);
   signal_data__155->SetBinContent(4,21.85333);
   signal_data__155->SetBinContent(5,0.01777778);
   signal_data__155->SetBinError(1,2.741022);
   signal_data__155->SetBinError(2,2.966479);
   signal_data__155->SetBinError(3,1.756132);
   signal_data__155->SetBinError(4,0.2203701);
   signal_data__155->SetBinError(5,0.006285394);
   signal_data__155->SetEntries(30625.77);
   signal_data__155->SetMarkerStyle(20);
   signal_data__155->SetMarkerSize(1.2);
   signal_data__155->GetXaxis()->SetTitle("min(999.9999,fjmass)");
   signal_data__155->GetXaxis()->SetLabelFont(42);
   signal_data__155->GetXaxis()->SetLabelSize(0.035);
   signal_data__155->GetXaxis()->SetTitleSize(0.035);
   signal_data__155->GetXaxis()->SetTitleFont(42);
   signal_data__155->GetYaxis()->SetLabelFont(42);
   signal_data__155->GetYaxis()->SetLabelSize(0.035);
   signal_data__155->GetYaxis()->SetTitleSize(0.035);
   signal_data__155->GetYaxis()->SetTitleFont(42);
   signal_data__155->GetZaxis()->SetLabelFont(42);
   signal_data__155->GetZaxis()->SetLabelSize(0.035);
   signal_data__155->GetZaxis()->SetTitleSize(0.035);
   signal_data__155->GetZaxis()->SetTitleFont(42);
   signal_data__155->Draw("epsame e0");
   
   TLegend *leg = new TLegend(0.55,0.6033333,0.88,0.93,NULL,"brNDC");
   leg->SetBorderSize(0);
   leg->SetTextSize(0.035);
   leg->SetLineColor(0);
   leg->SetLineStyle(1);
   leg->SetLineWidth(1);
   leg->SetFillColor(0);
   leg->SetFillStyle(0);
   TLegendEntry *entry=leg->AddEntry("signal_data","Data","elp");
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
   entry=leg->AddEntry("zvv","Z+jets","f");

   ci = TColor::GetColor("#33ffff");
   entry->SetFillColor(ci);
   entry->SetFillStyle(1001);
   entry->SetLineColor(1);
   entry->SetLineStyle(1);
   entry->SetLineWidth(1);
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
   leg->Draw();
   TLatex *   tex = new TLatex(0.16,0.825,"SR fail");
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
   Double_t xAxis170[5] = {25, 75, 100, 150, 600}; 
   
   TH1F *dummy_copy__156 = new TH1F("dummy_copy__156","h_all_prefit",4, xAxis170);
   dummy_copy__156->SetBinContent(1,338.9359);
   dummy_copy__156->SetBinContent(2,226.0922);
   dummy_copy__156->SetBinContent(3,136.5148);
   dummy_copy__156->SetBinContent(4,19.68584);
   dummy_copy__156->SetBinError(1,13.9504);
   dummy_copy__156->SetBinError(2,9.966609);
   dummy_copy__156->SetBinError(3,5.355052);
   dummy_copy__156->SetBinError(4,0.8195158);
   dummy_copy__156->SetMinimum(0.0005);
   dummy_copy__156->SetMaximum(16946.8);
   dummy_copy__156->SetEntries(20);
   dummy_copy__156->SetDirectory(0);
   dummy_copy__156->SetLineColor(0);
   dummy_copy__156->SetLineStyle(0);
   dummy_copy__156->SetLineWidth(0);
   dummy_copy__156->SetMarkerColor(0);
   dummy_copy__156->SetMarkerSize(0);
   dummy_copy__156->GetXaxis()->SetNdivisions(405);
   dummy_copy__156->GetXaxis()->SetLabelFont(42);
   dummy_copy__156->GetXaxis()->SetLabelOffset(0.007);
   dummy_copy__156->GetXaxis()->SetLabelSize(0);
   dummy_copy__156->GetXaxis()->SetTitleSize(0);
   dummy_copy__156->GetXaxis()->SetTickLength(0.025);
   dummy_copy__156->GetXaxis()->SetTitleOffset(0.9);
   dummy_copy__156->GetXaxis()->SetTitleFont(42);
   dummy_copy__156->GetYaxis()->SetTitle("Events / GeV");
   dummy_copy__156->GetYaxis()->SetNdivisions(405);
   dummy_copy__156->GetYaxis()->SetLabelFont(42);
   dummy_copy__156->GetYaxis()->SetLabelOffset(0.007);
   dummy_copy__156->GetYaxis()->SetTitleSize(0.05);
   dummy_copy__156->GetYaxis()->SetTickLength(0.025);
   dummy_copy__156->GetYaxis()->SetTitleOffset(1.21);
   dummy_copy__156->GetYaxis()->SetTitleFont(42);
   dummy_copy__156->GetZaxis()->SetNdivisions(405);
   dummy_copy__156->GetZaxis()->SetLabelFont(42);
   dummy_copy__156->GetZaxis()->SetLabelOffset(0.007);
   dummy_copy__156->GetZaxis()->SetTitleSize(0.05);
   dummy_copy__156->GetZaxis()->SetTickLength(0.025);
   dummy_copy__156->GetZaxis()->SetTitleFont(42);
   dummy_copy__156->Draw("sameaxis");
  
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
   Double_t xAxis171[5] = {25, 75, 100, 150, 600}; 
   
   TH1F *dummy2__157 = new TH1F("dummy2__157","dummy2",4, xAxis171);
   dummy2__157->SetBinContent(1,1);
   dummy2__157->SetBinContent(2,1);
   dummy2__157->SetBinContent(3,1);
   dummy2__157->SetMinimum(0.1);
   dummy2__157->SetMaximum(2.1);
   dummy2__157->SetEntries(3);
   dummy2__157->SetLineColor(0);
   dummy2__157->SetLineStyle(0);
   dummy2__157->SetLineWidth(0);
   dummy2__157->SetMarkerColor(0);
   dummy2__157->SetMarkerSize(0);
   dummy2__157->GetXaxis()->SetTitle("Fatjet m_{SD} (GeV)");
   dummy2__157->GetXaxis()->SetLabelFont(42);
   dummy2__157->GetXaxis()->SetLabelOffset(0.007);
   dummy2__157->GetXaxis()->SetTitleSize(0.05);
   dummy2__157->GetXaxis()->SetTickLength(0.025);
   dummy2__157->GetXaxis()->SetTitleOffset(0.9);
   dummy2__157->GetXaxis()->SetTitleFont(42);
   dummy2__157->GetYaxis()->SetTitle("Data / Pred.");
   dummy2__157->GetYaxis()->CenterTitle(true);
   dummy2__157->GetYaxis()->SetNdivisions(5);
   dummy2__157->GetYaxis()->SetLabelFont(42);
   dummy2__157->GetYaxis()->SetLabelOffset(0.007);
   dummy2__157->GetYaxis()->SetLabelSize(0.03);
   dummy2__157->GetYaxis()->SetTickLength(0.025);
   dummy2__157->GetYaxis()->SetTitleOffset(1.5);
   dummy2__157->GetYaxis()->SetTitleFont(42);
   dummy2__157->GetZaxis()->SetNdivisions(405);
   dummy2__157->GetZaxis()->SetLabelFont(42);
   dummy2__157->GetZaxis()->SetLabelOffset(0.007);
   dummy2__157->GetZaxis()->SetTitleSize(0.05);
   dummy2__157->GetZaxis()->SetTickLength(0.025);
   dummy2__157->GetZaxis()->SetTitleFont(42);
   dummy2__157->Draw("hist");
   Double_t xAxis172[5] = {25, 75, 100, 150, 600}; 
   
   TH1F *total_background__158 = new TH1F("total_background__158","Total background in mass0_sig_fail",4, xAxis172);
   total_background__158->SetBinContent(1,1);
   total_background__158->SetBinContent(2,1);
   total_background__158->SetBinContent(3,1);
   total_background__158->SetBinContent(4,1);
   total_background__158->SetBinContent(5,1);
   total_background__158->SetBinError(1,0.006866455);
   total_background__158->SetBinError(2,0.01224256);
   total_background__158->SetBinError(3,0.01068871);
   total_background__158->SetBinError(4,0.008274156);
   total_background__158->SetEntries(29);

   ci = TColor::GetColor("#f4eb99");
   total_background__158->SetFillColor(ci);

   ci = TColor::GetColor("#f4eb99");
   total_background__158->SetLineColor(ci);
   total_background__158->SetMarkerSize(0);
   total_background__158->GetXaxis()->SetTitle("min(999.9999,fjmass)");
   total_background__158->GetXaxis()->SetLabelFont(42);
   total_background__158->GetXaxis()->SetLabelSize(0.035);
   total_background__158->GetXaxis()->SetTitleSize(0.035);
   total_background__158->GetXaxis()->SetTitleFont(42);
   total_background__158->GetYaxis()->SetTitle("Events / ( 143.75 )");
   total_background__158->GetYaxis()->SetLabelFont(42);
   total_background__158->GetYaxis()->SetLabelSize(0.035);
   total_background__158->GetYaxis()->SetTitleSize(0.035);
   total_background__158->GetYaxis()->SetTitleFont(42);
   total_background__158->GetZaxis()->SetLabelFont(42);
   total_background__158->GetZaxis()->SetLabelSize(0.035);
   total_background__158->GetZaxis()->SetTitleSize(0.035);
   total_background__158->GetZaxis()->SetTitleFont(42);
   total_background__158->Draw("e2same");
   
   TF1 *f114 = new TF1("f1","1",-5000,5000);
   f114->SetFillColor(19);
   f114->SetFillStyle(0);
   f114->SetLineWidth(2);
   f114->SetLineStyle(2);
   f114->GetXaxis()->SetNdivisions(405);
   f114->GetXaxis()->SetLabelFont(42);
   f114->GetXaxis()->SetLabelOffset(0.007);
   f114->GetXaxis()->SetTitleSize(0.05);
   f114->GetXaxis()->SetTickLength(0.025);
   f114->GetXaxis()->SetTitleOffset(0.9);
   f114->GetXaxis()->SetTitleFont(42);
   f114->GetYaxis()->SetNdivisions(405);
   f114->GetYaxis()->SetLabelFont(42);
   f114->GetYaxis()->SetLabelOffset(0.007);
   f114->GetYaxis()->SetTitleSize(0.05);
   f114->GetYaxis()->SetTickLength(0.025);
   f114->GetYaxis()->SetTitleOffset(1.05);
   f114->GetYaxis()->SetTitleFont(42);
   f114->Draw("same");
   
   Double_t _fx3027[4] = {
   50,
   87.5,
   125,
   375};
   Double_t _fy3027[4] = {
   1.108351,
   0.9730544,
   1.129548,
   1.110104};
   Double_t _felx3027[4] = {
   25,
   12.5,
   25,
   225};
   Double_t _fely3027[4] = {
   0.008087139,
   0.01312066,
   0.01286404,
   0.01119434};
   Double_t _fehx3027[4] = {
   25,
   12.5,
   25,
   225};
   Double_t _fehy3027[4] = {
   0.008087139,
   0.01312066,
   0.01286404,
   0.01119434};
   TGraphAsymmErrors *grae = new TGraphAsymmErrors(4,_fx3027,_fy3027,_felx3027,_fehx3027,_fely3027,_fehy3027);
   grae->SetName("");
   grae->SetTitle("");
   grae->SetFillColor(1);
   grae->SetLineColor(2);
   grae->SetLineStyle(7);
   grae->SetMarkerColor(2);
   grae->SetMarkerStyle(24);
   
   TH1F *Graph_Graph3027 = new TH1F("Graph_Graph3027","",100,0,657.5);
   Graph_Graph3027->SetMinimum(0.9416859);
   Graph_Graph3027->SetMaximum(1.160659);
   Graph_Graph3027->SetDirectory(0);
   Graph_Graph3027->SetStats(0);
   Graph_Graph3027->SetLineStyle(0);
   Graph_Graph3027->GetXaxis()->SetNdivisions(405);
   Graph_Graph3027->GetXaxis()->SetLabelFont(42);
   Graph_Graph3027->GetXaxis()->SetLabelOffset(0.007);
   Graph_Graph3027->GetXaxis()->SetTitleSize(0.05);
   Graph_Graph3027->GetXaxis()->SetTickLength(0.025);
   Graph_Graph3027->GetXaxis()->SetTitleOffset(0.9);
   Graph_Graph3027->GetXaxis()->SetTitleFont(42);
   Graph_Graph3027->GetYaxis()->SetNdivisions(405);
   Graph_Graph3027->GetYaxis()->SetLabelFont(42);
   Graph_Graph3027->GetYaxis()->SetLabelOffset(0.007);
   Graph_Graph3027->GetYaxis()->SetTitleSize(0.05);
   Graph_Graph3027->GetYaxis()->SetTickLength(0.025);
   Graph_Graph3027->GetYaxis()->SetTitleOffset(1.05);
   Graph_Graph3027->GetYaxis()->SetTitleFont(42);
   Graph_Graph3027->GetZaxis()->SetNdivisions(405);
   Graph_Graph3027->GetZaxis()->SetLabelFont(42);
   Graph_Graph3027->GetZaxis()->SetLabelOffset(0.007);
   Graph_Graph3027->GetZaxis()->SetTitleSize(0.05);
   Graph_Graph3027->GetZaxis()->SetTickLength(0.025);
   Graph_Graph3027->GetZaxis()->SetTitleFont(42);
   grae->SetHistogram(Graph_Graph3027);
   
   grae->Draw("ep 0");
   
   Double_t _fx3028[4] = {
   50,
   87.5,
   125,
   375};
   Double_t _fy3028[4] = {
   1.001979,
   1.001221,
   1.004897,
   0.9992835};
   Double_t _felx3028[4] = {
   25,
   12.5,
   25,
   225};
   Double_t _fely3028[4] = {
   0.00731099,
   0.01350047,
   0.01144444,
   0.01007682};
   Double_t _fehx3028[4] = {
   25,
   12.5,
   25,
   225};
   Double_t _fehy3028[4] = {
   0.00731099,
   0.01350047,
   0.01144444,
   0.01007682};
   grae = new TGraphAsymmErrors(4,_fx3028,_fy3028,_felx3028,_fehx3028,_fely3028,_fehy3028);
   grae->SetName("");
   grae->SetTitle("");
   grae->SetFillColor(1);
   grae->SetMarkerStyle(20);
   
   TH1F *Graph_Graph3028 = new TH1F("Graph_Graph3028","",100,0,657.5);
   Graph_Graph3028->SetMinimum(0.984859);
   Graph_Graph3028->SetMaximum(1.019204);
   Graph_Graph3028->SetDirectory(0);
   Graph_Graph3028->SetStats(0);
   Graph_Graph3028->SetLineStyle(0);
   Graph_Graph3028->GetXaxis()->SetNdivisions(405);
   Graph_Graph3028->GetXaxis()->SetLabelFont(42);
   Graph_Graph3028->GetXaxis()->SetLabelOffset(0.007);
   Graph_Graph3028->GetXaxis()->SetTitleSize(0.05);
   Graph_Graph3028->GetXaxis()->SetTickLength(0.025);
   Graph_Graph3028->GetXaxis()->SetTitleOffset(0.9);
   Graph_Graph3028->GetXaxis()->SetTitleFont(42);
   Graph_Graph3028->GetYaxis()->SetNdivisions(405);
   Graph_Graph3028->GetYaxis()->SetLabelFont(42);
   Graph_Graph3028->GetYaxis()->SetLabelOffset(0.007);
   Graph_Graph3028->GetYaxis()->SetTitleSize(0.05);
   Graph_Graph3028->GetYaxis()->SetTickLength(0.025);
   Graph_Graph3028->GetYaxis()->SetTitleOffset(1.05);
   Graph_Graph3028->GetYaxis()->SetTitleFont(42);
   Graph_Graph3028->GetZaxis()->SetNdivisions(405);
   Graph_Graph3028->GetZaxis()->SetLabelFont(42);
   Graph_Graph3028->GetZaxis()->SetLabelOffset(0.007);
   Graph_Graph3028->GetZaxis()->SetTitleSize(0.05);
   Graph_Graph3028->GetZaxis()->SetTickLength(0.025);
   Graph_Graph3028->GetZaxis()->SetTitleFont(42);
   grae->SetHistogram(Graph_Graph3028);
   
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
