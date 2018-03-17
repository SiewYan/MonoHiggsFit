void PASS_MSDcorr_stackedPostfit_signal_mass()
{
//=========Macro generated from canvas: c/c
//=========  (Tue Feb 13 18:07:03 2018) by ROOT version6.06/09
   TCanvas *c = new TCanvas("c", "c",0,0,720,800);
   gStyle->SetOptFit(1);
   gStyle->SetOptStat(0);
   gStyle->SetOptTitle(0);
   c->SetHighLightColor(2);
   c->Range(-60.18518,-6.320427,649.6914,3.744229);
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
   Double_t xAxis149[5] = {25, 75, 100, 150, 600}; 
   
   TH1F *dummy__137 = new TH1F("dummy__137","h_all_prefit",4, xAxis149);
   dummy__137->SetBinContent(1,25.83416);
   dummy__137->SetBinContent(2,10.09776);
   dummy__137->SetBinContent(3,5.462285);
   dummy__137->SetBinContent(4,0.4804663);
   dummy__137->SetBinError(1,1.036847);
   dummy__137->SetBinError(2,0.5673978);
   dummy__137->SetBinError(3,0.1868705);
   dummy__137->SetBinError(4,0.01859186);
   dummy__137->SetMinimum(0.0005);
   dummy__137->SetMaximum(1808.391);
   dummy__137->SetEntries(20);
   dummy__137->SetLineColor(0);
   dummy__137->SetLineStyle(0);
   dummy__137->SetLineWidth(0);
   dummy__137->SetMarkerColor(0);
   dummy__137->SetMarkerSize(0);
   dummy__137->GetXaxis()->SetNdivisions(405);
   dummy__137->GetXaxis()->SetLabelFont(42);
   dummy__137->GetXaxis()->SetLabelOffset(0.007);
   dummy__137->GetXaxis()->SetLabelSize(0);
   dummy__137->GetXaxis()->SetTitleSize(0);
   dummy__137->GetXaxis()->SetTickLength(0.025);
   dummy__137->GetXaxis()->SetTitleOffset(0.9);
   dummy__137->GetXaxis()->SetTitleFont(42);
   dummy__137->GetYaxis()->SetTitle("Events / GeV");
   dummy__137->GetYaxis()->SetNdivisions(405);
   dummy__137->GetYaxis()->SetLabelFont(42);
   dummy__137->GetYaxis()->SetLabelOffset(0.007);
   dummy__137->GetYaxis()->SetTitleSize(0.05);
   dummy__137->GetYaxis()->SetTickLength(0.025);
   dummy__137->GetYaxis()->SetTitleOffset(1.21);
   dummy__137->GetYaxis()->SetTitleFont(42);
   dummy__137->GetZaxis()->SetNdivisions(405);
   dummy__137->GetZaxis()->SetLabelFont(42);
   dummy__137->GetZaxis()->SetLabelOffset(0.007);
   dummy__137->GetZaxis()->SetTitleSize(0.05);
   dummy__137->GetZaxis()->SetTickLength(0.025);
   dummy__137->GetZaxis()->SetTitleFont(42);
   dummy__137->Draw("");
   
   THStack *h_stack_postfit = new THStack();
   h_stack_postfit->SetName("h_stack_postfit");
   h_stack_postfit->SetTitle("h_stack_postfit");
   Double_t xAxis150[5] = {25, 75, 100, 150, 600}; 
   
   TH1F *h_stack_postfit_stack_13 = new TH1F("h_stack_postfit_stack_13","h_stack_postfit",4, xAxis150);
   h_stack_postfit_stack_13->SetMinimum(0.002326357);
   h_stack_postfit_stack_13->SetMaximum(43.12568);
   h_stack_postfit_stack_13->SetDirectory(0);
   h_stack_postfit_stack_13->SetStats(0);
   h_stack_postfit_stack_13->SetLineStyle(0);
   h_stack_postfit_stack_13->GetXaxis()->SetNdivisions(405);
   h_stack_postfit_stack_13->GetXaxis()->SetLabelFont(42);
   h_stack_postfit_stack_13->GetXaxis()->SetLabelOffset(0.007);
   h_stack_postfit_stack_13->GetXaxis()->SetTitleSize(0.05);
   h_stack_postfit_stack_13->GetXaxis()->SetTickLength(0.025);
   h_stack_postfit_stack_13->GetXaxis()->SetTitleOffset(0.9);
   h_stack_postfit_stack_13->GetXaxis()->SetTitleFont(42);
   h_stack_postfit_stack_13->GetYaxis()->SetNdivisions(405);
   h_stack_postfit_stack_13->GetYaxis()->SetLabelFont(42);
   h_stack_postfit_stack_13->GetYaxis()->SetLabelOffset(0.007);
   h_stack_postfit_stack_13->GetYaxis()->SetTitleSize(0.05);
   h_stack_postfit_stack_13->GetYaxis()->SetTickLength(0.025);
   h_stack_postfit_stack_13->GetYaxis()->SetTitleOffset(1.05);
   h_stack_postfit_stack_13->GetYaxis()->SetTitleFont(42);
   h_stack_postfit_stack_13->GetZaxis()->SetNdivisions(405);
   h_stack_postfit_stack_13->GetZaxis()->SetLabelFont(42);
   h_stack_postfit_stack_13->GetZaxis()->SetLabelOffset(0.007);
   h_stack_postfit_stack_13->GetZaxis()->SetTitleSize(0.05);
   h_stack_postfit_stack_13->GetZaxis()->SetTickLength(0.025);
   h_stack_postfit_stack_13->GetZaxis()->SetTitleFont(42);
   h_stack_postfit->SetHistogram(h_stack_postfit_stack_13);
   
   Double_t xAxis151[5] = {25, 75, 100, 150, 600}; 
   
   TH1F *dibosons__138 = new TH1F("dibosons__138","dibosons in mass0_sig",4, xAxis151);
   dibosons__138->SetBinContent(1,0.6584756);
   dibosons__138->SetBinContent(2,2.343662);
   dibosons__138->SetBinContent(3,0.2268884);
   dibosons__138->SetBinContent(4,0.008019893);
   dibosons__138->SetBinError(1,0.06550349);
   dibosons__138->SetBinError(2,0.2332321);
   dibosons__138->SetBinError(3,0.02258486);
   dibosons__138->SetBinError(4,0.0007990933);
   dibosons__138->SetEntries(4);

   Int_t ci;      // for color index setting
   TColor *color; // for color definition with alpha
   ci = TColor::GetColor("#ffff99");
   dibosons__138->SetFillColor(ci);
   dibosons__138->GetXaxis()->SetTitle("min(999.9999,fjmass)");
   dibosons__138->GetXaxis()->SetLabelFont(42);
   dibosons__138->GetXaxis()->SetLabelSize(0.035);
   dibosons__138->GetXaxis()->SetTitleSize(0.035);
   dibosons__138->GetXaxis()->SetTitleFont(42);
   dibosons__138->GetYaxis()->SetTitle("Events / ( 143.75 )");
   dibosons__138->GetYaxis()->SetLabelFont(42);
   dibosons__138->GetYaxis()->SetLabelSize(0.035);
   dibosons__138->GetYaxis()->SetTitleSize(0.035);
   dibosons__138->GetYaxis()->SetTitleFont(42);
   dibosons__138->GetZaxis()->SetLabelFont(42);
   dibosons__138->GetZaxis()->SetLabelSize(0.035);
   dibosons__138->GetZaxis()->SetTitleSize(0.035);
   dibosons__138->GetZaxis()->SetTitleFont(42);
   h_stack_postfit->Add(dibosons,"");
   Double_t xAxis152[5] = {25, 75, 100, 150, 600}; 
   
   TH1F *stop__139 = new TH1F("stop__139","stop in mass0_sig",4, xAxis152);
   stop__139->SetBinContent(1,0.1739302);
   stop__139->SetBinContent(2,0.319593);
   stop__139->SetBinContent(3,0.1746871);
   stop__139->SetBinContent(4,0.008783223);
   stop__139->SetBinError(1,0.02099256);
   stop__139->SetBinError(2,0.03841341);
   stop__139->SetBinError(3,0.02100603);
   stop__139->SetBinError(4,0.001057422);
   stop__139->SetEntries(4);

   ci = TColor::GetColor("#ff9999");
   stop__139->SetFillColor(ci);
   stop__139->GetXaxis()->SetTitle("min(999.9999,fjmass)");
   stop__139->GetXaxis()->SetLabelFont(42);
   stop__139->GetXaxis()->SetLabelSize(0.035);
   stop__139->GetXaxis()->SetTitleSize(0.035);
   stop__139->GetXaxis()->SetTitleFont(42);
   stop__139->GetYaxis()->SetTitle("Events / ( 143.75 )");
   stop__139->GetYaxis()->SetLabelFont(42);
   stop__139->GetYaxis()->SetLabelSize(0.035);
   stop__139->GetYaxis()->SetTitleSize(0.035);
   stop__139->GetYaxis()->SetTitleFont(42);
   stop__139->GetZaxis()->SetLabelFont(42);
   stop__139->GetZaxis()->SetLabelSize(0.035);
   stop__139->GetZaxis()->SetTitleSize(0.035);
   stop__139->GetZaxis()->SetTitleFont(42);
   h_stack_postfit->Add(stop,"");
   Double_t xAxis153[5] = {25, 75, 100, 150, 600}; 
   
   TH1F *wjets__140 = new TH1F("wjets__140","wjets in mass0_sig",4, xAxis153);
   wjets__140->SetBinContent(1,8.308311);
   wjets__140->SetBinContent(2,1.257931);
   wjets__140->SetBinContent(3,0.9735802);
   wjets__140->SetBinContent(4,0.1362914);
   wjets__140->SetBinError(1,0.3521984);
   wjets__140->SetBinError(2,0.2775213);
   wjets__140->SetBinError(3,0.1545438);
   wjets__140->SetBinError(4,0.0124385);
   wjets__140->SetEntries(4);

   ci = TColor::GetColor("#ccffcc");
   wjets__140->SetFillColor(ci);
   wjets__140->GetXaxis()->SetTitle("min(999.9999,fjmass)");
   wjets__140->GetXaxis()->SetLabelFont(42);
   wjets__140->GetXaxis()->SetLabelSize(0.035);
   wjets__140->GetXaxis()->SetTitleSize(0.035);
   wjets__140->GetXaxis()->SetTitleFont(42);
   wjets__140->GetYaxis()->SetTitle("Events / ( 143.75 )");
   wjets__140->GetYaxis()->SetLabelFont(42);
   wjets__140->GetYaxis()->SetLabelSize(0.035);
   wjets__140->GetYaxis()->SetTitleSize(0.035);
   wjets__140->GetYaxis()->SetTitleFont(42);
   wjets__140->GetZaxis()->SetLabelFont(42);
   wjets__140->GetZaxis()->SetLabelSize(0.035);
   wjets__140->GetZaxis()->SetTitleSize(0.035);
   wjets__140->GetZaxis()->SetTitleFont(42);
   h_stack_postfit->Add(wjets,"");
   Double_t xAxis154[5] = {25, 75, 100, 150, 600}; 
   
   TH1F *ttbar__141 = new TH1F("ttbar__141","ttbar in mass0_sig",4, xAxis154);
   ttbar__141->SetBinContent(1,0.944353);
   ttbar__141->SetBinContent(2,1.562237);
   ttbar__141->SetBinContent(3,1.169007);
   ttbar__141->SetBinContent(4,0.05956912);
   ttbar__141->SetBinError(1,0.1232621);
   ttbar__141->SetBinError(2,0.1842369);
   ttbar__141->SetBinError(3,0.1158674);
   ttbar__141->SetBinError(4,0.009484097);
   ttbar__141->SetEntries(4);

   ci = TColor::GetColor("#ffcc66");
   ttbar__141->SetFillColor(ci);
   ttbar__141->GetXaxis()->SetTitle("min(999.9999,fjmass)");
   ttbar__141->GetXaxis()->SetLabelFont(42);
   ttbar__141->GetXaxis()->SetLabelSize(0.035);
   ttbar__141->GetXaxis()->SetTitleSize(0.035);
   ttbar__141->GetXaxis()->SetTitleFont(42);
   ttbar__141->GetYaxis()->SetTitle("Events / ( 143.75 )");
   ttbar__141->GetYaxis()->SetLabelFont(42);
   ttbar__141->GetYaxis()->SetLabelSize(0.035);
   ttbar__141->GetYaxis()->SetTitleSize(0.035);
   ttbar__141->GetYaxis()->SetTitleFont(42);
   ttbar__141->GetZaxis()->SetLabelFont(42);
   ttbar__141->GetZaxis()->SetLabelSize(0.035);
   ttbar__141->GetZaxis()->SetTitleSize(0.035);
   ttbar__141->GetZaxis()->SetTitleFont(42);
   h_stack_postfit->Add(ttbar,"");
   Double_t xAxis155[5] = {25, 75, 100, 150, 600}; 
   
   TH1F *zvv__142 = new TH1F("zvv__142","zvv in mass0_sig",4, xAxis155);
   zvv__142->SetBinContent(1,15.02586);
   zvv__142->SetBinContent(2,3.864909);
   zvv__142->SetBinContent(3,3.201104);
   zvv__142->SetBinContent(4,0.3325358);
   zvv__142->SetBinError(1,0.6727706);
   zvv__142->SetBinError(2,0.5560695);
   zvv__142->SetBinError(3,0.3181022);
   zvv__142->SetBinError(4,0.03033314);
   zvv__142->SetEntries(4);

   ci = TColor::GetColor("#33ffff");
   zvv__142->SetFillColor(ci);
   zvv__142->GetXaxis()->SetTitle("min(999.9999,fjmass)");
   zvv__142->GetXaxis()->SetLabelFont(42);
   zvv__142->GetXaxis()->SetLabelSize(0.035);
   zvv__142->GetXaxis()->SetTitleSize(0.035);
   zvv__142->GetXaxis()->SetTitleFont(42);
   zvv__142->GetYaxis()->SetTitle("Events / ( 143.75 )");
   zvv__142->GetYaxis()->SetLabelFont(42);
   zvv__142->GetYaxis()->SetLabelSize(0.035);
   zvv__142->GetYaxis()->SetTitleSize(0.035);
   zvv__142->GetYaxis()->SetTitleFont(42);
   zvv__142->GetZaxis()->SetLabelFont(42);
   zvv__142->GetZaxis()->SetLabelSize(0.035);
   zvv__142->GetZaxis()->SetTitleSize(0.035);
   zvv__142->GetZaxis()->SetTitleFont(42);
   h_stack_postfit->Add(zvv,"");
   h_stack_postfit->Draw("hist same");
   Double_t xAxis156[5] = {25, 75, 100, 150, 600}; 
   
   TH1F *h_all_prefit__143 = new TH1F("h_all_prefit__143","h_all_prefit",4, xAxis156);
   h_all_prefit__143->SetBinContent(1,25.83416);
   h_all_prefit__143->SetBinContent(2,10.09776);
   h_all_prefit__143->SetBinContent(3,5.462285);
   h_all_prefit__143->SetBinContent(4,0.4804663);
   h_all_prefit__143->SetBinError(1,1.036847);
   h_all_prefit__143->SetBinError(2,0.5673978);
   h_all_prefit__143->SetBinError(3,0.1868705);
   h_all_prefit__143->SetBinError(4,0.01859186);
   h_all_prefit__143->SetEntries(20);
   h_all_prefit__143->SetLineColor(2);
   h_all_prefit__143->SetLineStyle(7);
   h_all_prefit__143->SetLineWidth(2);
   h_all_prefit__143->GetXaxis()->SetNdivisions(405);
   h_all_prefit__143->GetXaxis()->SetLabelFont(42);
   h_all_prefit__143->GetXaxis()->SetLabelOffset(0.007);
   h_all_prefit__143->GetXaxis()->SetTitleSize(0.05);
   h_all_prefit__143->GetXaxis()->SetTickLength(0.025);
   h_all_prefit__143->GetXaxis()->SetTitleOffset(0.9);
   h_all_prefit__143->GetXaxis()->SetTitleFont(42);
   h_all_prefit__143->GetYaxis()->SetNdivisions(405);
   h_all_prefit__143->GetYaxis()->SetLabelFont(42);
   h_all_prefit__143->GetYaxis()->SetLabelOffset(0.007);
   h_all_prefit__143->GetYaxis()->SetTitleSize(0.05);
   h_all_prefit__143->GetYaxis()->SetTickLength(0.025);
   h_all_prefit__143->GetYaxis()->SetTitleOffset(1.05);
   h_all_prefit__143->GetYaxis()->SetTitleFont(42);
   h_all_prefit__143->GetZaxis()->SetNdivisions(405);
   h_all_prefit__143->GetZaxis()->SetLabelFont(42);
   h_all_prefit__143->GetZaxis()->SetLabelOffset(0.007);
   h_all_prefit__143->GetZaxis()->SetTitleSize(0.05);
   h_all_prefit__143->GetZaxis()->SetTickLength(0.025);
   h_all_prefit__143->GetZaxis()->SetTitleFont(42);
   h_all_prefit__143->Draw("histsame");
   Double_t xAxis157[5] = {25, 75, 100, 150, 600}; 
   
   TH1F *signal_data__144 = new TH1F("signal_data__144","base",4, xAxis157);
   signal_data__144->SetBinContent(1,25.22);
   signal_data__144->SetBinContent(2,9.56);
   signal_data__144->SetBinContent(3,5.48);
   signal_data__144->SetBinContent(4,0.5711111);
   signal_data__144->SetBinContent(5,0.002222222);
   signal_data__144->SetBinError(1,0.7102112);
   signal_data__144->SetBinError(2,0.618385);
   signal_data__144->SetBinError(3,0.3310589);
   signal_data__144->SetBinError(4,0.03562493);
   signal_data__144->SetBinError(5,0.002222222);
   signal_data__144->SetEntries(1671.075);
   signal_data__144->SetMarkerStyle(20);
   signal_data__144->SetMarkerSize(1.2);
   signal_data__144->GetXaxis()->SetTitle("min(999.9999,fjmass)");
   signal_data__144->GetXaxis()->SetLabelFont(42);
   signal_data__144->GetXaxis()->SetLabelSize(0.035);
   signal_data__144->GetXaxis()->SetTitleSize(0.035);
   signal_data__144->GetXaxis()->SetTitleFont(42);
   signal_data__144->GetYaxis()->SetLabelFont(42);
   signal_data__144->GetYaxis()->SetLabelSize(0.035);
   signal_data__144->GetYaxis()->SetTitleSize(0.035);
   signal_data__144->GetYaxis()->SetTitleFont(42);
   signal_data__144->GetZaxis()->SetLabelFont(42);
   signal_data__144->GetZaxis()->SetLabelSize(0.035);
   signal_data__144->GetZaxis()->SetTitleSize(0.035);
   signal_data__144->GetZaxis()->SetTitleFont(42);
   signal_data__144->Draw("epsame e0");
   
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
   TLatex *   tex = new TLatex(0.16,0.825,"SR");
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
   Double_t xAxis158[5] = {25, 75, 100, 150, 600}; 
   
   TH1F *dummy_copy__145 = new TH1F("dummy_copy__145","h_all_prefit",4, xAxis158);
   dummy_copy__145->SetBinContent(1,25.83416);
   dummy_copy__145->SetBinContent(2,10.09776);
   dummy_copy__145->SetBinContent(3,5.462285);
   dummy_copy__145->SetBinContent(4,0.4804663);
   dummy_copy__145->SetBinError(1,1.036847);
   dummy_copy__145->SetBinError(2,0.5673978);
   dummy_copy__145->SetBinError(3,0.1868705);
   dummy_copy__145->SetBinError(4,0.01859186);
   dummy_copy__145->SetMinimum(0.0005);
   dummy_copy__145->SetMaximum(1808.391);
   dummy_copy__145->SetEntries(20);
   dummy_copy__145->SetDirectory(0);
   dummy_copy__145->SetLineColor(0);
   dummy_copy__145->SetLineStyle(0);
   dummy_copy__145->SetLineWidth(0);
   dummy_copy__145->SetMarkerColor(0);
   dummy_copy__145->SetMarkerSize(0);
   dummy_copy__145->GetXaxis()->SetNdivisions(405);
   dummy_copy__145->GetXaxis()->SetLabelFont(42);
   dummy_copy__145->GetXaxis()->SetLabelOffset(0.007);
   dummy_copy__145->GetXaxis()->SetLabelSize(0);
   dummy_copy__145->GetXaxis()->SetTitleSize(0);
   dummy_copy__145->GetXaxis()->SetTickLength(0.025);
   dummy_copy__145->GetXaxis()->SetTitleOffset(0.9);
   dummy_copy__145->GetXaxis()->SetTitleFont(42);
   dummy_copy__145->GetYaxis()->SetTitle("Events / GeV");
   dummy_copy__145->GetYaxis()->SetNdivisions(405);
   dummy_copy__145->GetYaxis()->SetLabelFont(42);
   dummy_copy__145->GetYaxis()->SetLabelOffset(0.007);
   dummy_copy__145->GetYaxis()->SetTitleSize(0.05);
   dummy_copy__145->GetYaxis()->SetTickLength(0.025);
   dummy_copy__145->GetYaxis()->SetTitleOffset(1.21);
   dummy_copy__145->GetYaxis()->SetTitleFont(42);
   dummy_copy__145->GetZaxis()->SetNdivisions(405);
   dummy_copy__145->GetZaxis()->SetLabelFont(42);
   dummy_copy__145->GetZaxis()->SetLabelOffset(0.007);
   dummy_copy__145->GetZaxis()->SetTitleSize(0.05);
   dummy_copy__145->GetZaxis()->SetTickLength(0.025);
   dummy_copy__145->GetZaxis()->SetTitleFont(42);
   dummy_copy__145->Draw("sameaxis");
  
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
   Double_t xAxis159[5] = {25, 75, 100, 150, 600}; 
   
   TH1F *dummy2__146 = new TH1F("dummy2__146","dummy2",4, xAxis159);
   dummy2__146->SetBinContent(1,1);
   dummy2__146->SetBinContent(2,1);
   dummy2__146->SetBinContent(3,1);
   dummy2__146->SetMinimum(0.1);
   dummy2__146->SetMaximum(2.1);
   dummy2__146->SetEntries(3);
   dummy2__146->SetLineColor(0);
   dummy2__146->SetLineStyle(0);
   dummy2__146->SetLineWidth(0);
   dummy2__146->SetMarkerColor(0);
   dummy2__146->SetMarkerSize(0);
   dummy2__146->GetXaxis()->SetTitle("Fatjet m_{SD} (GeV)");
   dummy2__146->GetXaxis()->SetLabelFont(42);
   dummy2__146->GetXaxis()->SetLabelOffset(0.007);
   dummy2__146->GetXaxis()->SetTitleSize(0.05);
   dummy2__146->GetXaxis()->SetTickLength(0.025);
   dummy2__146->GetXaxis()->SetTitleOffset(0.9);
   dummy2__146->GetXaxis()->SetTitleFont(42);
   dummy2__146->GetYaxis()->SetTitle("Data / Pred.");
   dummy2__146->GetYaxis()->CenterTitle(true);
   dummy2__146->GetYaxis()->SetNdivisions(5);
   dummy2__146->GetYaxis()->SetLabelFont(42);
   dummy2__146->GetYaxis()->SetLabelOffset(0.007);
   dummy2__146->GetYaxis()->SetLabelSize(0.03);
   dummy2__146->GetYaxis()->SetTickLength(0.025);
   dummy2__146->GetYaxis()->SetTitleOffset(1.5);
   dummy2__146->GetYaxis()->SetTitleFont(42);
   dummy2__146->GetZaxis()->SetNdivisions(405);
   dummy2__146->GetZaxis()->SetLabelFont(42);
   dummy2__146->GetZaxis()->SetLabelOffset(0.007);
   dummy2__146->GetZaxis()->SetTitleSize(0.05);
   dummy2__146->GetZaxis()->SetTickLength(0.025);
   dummy2__146->GetZaxis()->SetTitleFont(42);
   dummy2__146->Draw("hist");
   Double_t xAxis160[5] = {25, 75, 100, 150, 600}; 
   
   TH1F *total_background__147 = new TH1F("total_background__147","Total background in mass0_sig",4, xAxis160);
   total_background__147->SetBinContent(1,1);
   total_background__147->SetBinContent(2,1);
   total_background__147->SetBinContent(3,1);
   total_background__147->SetBinContent(4,1);
   total_background__147->SetBinContent(5,1);
   total_background__147->SetBinError(1,0.02196937);
   total_background__147->SetBinError(2,0.0538838);
   total_background__147->SetBinError(3,0.05214263);
   total_background__147->SetBinError(4,0.05033268);
   total_background__147->SetEntries(29);

   ci = TColor::GetColor("#f4eb99");
   total_background__147->SetFillColor(ci);

   ci = TColor::GetColor("#f4eb99");
   total_background__147->SetLineColor(ci);
   total_background__147->SetMarkerSize(0);
   total_background__147->GetXaxis()->SetTitle("min(999.9999,fjmass)");
   total_background__147->GetXaxis()->SetLabelFont(42);
   total_background__147->GetXaxis()->SetLabelSize(0.035);
   total_background__147->GetXaxis()->SetTitleSize(0.035);
   total_background__147->GetXaxis()->SetTitleFont(42);
   total_background__147->GetYaxis()->SetTitle("Events / ( 143.75 )");
   total_background__147->GetYaxis()->SetLabelFont(42);
   total_background__147->GetYaxis()->SetLabelSize(0.035);
   total_background__147->GetYaxis()->SetTitleSize(0.035);
   total_background__147->GetYaxis()->SetTitleFont(42);
   total_background__147->GetZaxis()->SetLabelFont(42);
   total_background__147->GetZaxis()->SetLabelSize(0.035);
   total_background__147->GetZaxis()->SetTitleSize(0.035);
   total_background__147->GetZaxis()->SetTitleFont(42);
   total_background__147->Draw("e2same");
   
   TF1 *f113 = new TF1("f1","1",-5000,5000);
   f113->SetFillColor(19);
   f113->SetFillStyle(0);
   f113->SetLineWidth(2);
   f113->SetLineStyle(2);
   f113->GetXaxis()->SetNdivisions(405);
   f113->GetXaxis()->SetLabelFont(42);
   f113->GetXaxis()->SetLabelOffset(0.007);
   f113->GetXaxis()->SetTitleSize(0.05);
   f113->GetXaxis()->SetTickLength(0.025);
   f113->GetXaxis()->SetTitleOffset(0.9);
   f113->GetXaxis()->SetTitleFont(42);
   f113->GetYaxis()->SetNdivisions(405);
   f113->GetYaxis()->SetLabelFont(42);
   f113->GetYaxis()->SetLabelOffset(0.007);
   f113->GetYaxis()->SetTitleSize(0.05);
   f113->GetYaxis()->SetTickLength(0.025);
   f113->GetYaxis()->SetTitleOffset(1.05);
   f113->GetYaxis()->SetTitleFont(42);
   f113->Draw("same");
   
   Double_t _fx3025[4] = {
   50,
   87.5,
   125,
   375};
   Double_t _fy3025[4] = {
   0.9762269,
   0.9467447,
   1.003243,
   1.18866};
   Double_t _felx3025[4] = {
   25,
   12.5,
   25,
   225};
   Double_t _fely3025[4] = {
   0.02749117,
   0.06123982,
   0.06060814,
   0.07414658};
   Double_t _fehx3025[4] = {
   25,
   12.5,
   25,
   225};
   Double_t _fehy3025[4] = {
   0.02749117,
   0.06123982,
   0.06060814,
   0.07414658};
   TGraphAsymmErrors *grae = new TGraphAsymmErrors(4,_fx3025,_fy3025,_felx3025,_fehx3025,_fely3025,_fehy3025);
   grae->SetName("");
   grae->SetTitle("");
   grae->SetFillColor(1);
   grae->SetLineColor(2);
   grae->SetLineStyle(7);
   grae->SetMarkerColor(2);
   grae->SetMarkerStyle(24);
   
   TH1F *Graph_Graph3025 = new TH1F("Graph_Graph3025","",100,0,657.5);
   Graph_Graph3025->SetMinimum(0.8477747);
   Graph_Graph3025->SetMaximum(1.300537);
   Graph_Graph3025->SetDirectory(0);
   Graph_Graph3025->SetStats(0);
   Graph_Graph3025->SetLineStyle(0);
   Graph_Graph3025->GetXaxis()->SetNdivisions(405);
   Graph_Graph3025->GetXaxis()->SetLabelFont(42);
   Graph_Graph3025->GetXaxis()->SetLabelOffset(0.007);
   Graph_Graph3025->GetXaxis()->SetTitleSize(0.05);
   Graph_Graph3025->GetXaxis()->SetTickLength(0.025);
   Graph_Graph3025->GetXaxis()->SetTitleOffset(0.9);
   Graph_Graph3025->GetXaxis()->SetTitleFont(42);
   Graph_Graph3025->GetYaxis()->SetNdivisions(405);
   Graph_Graph3025->GetYaxis()->SetLabelFont(42);
   Graph_Graph3025->GetYaxis()->SetLabelOffset(0.007);
   Graph_Graph3025->GetYaxis()->SetTitleSize(0.05);
   Graph_Graph3025->GetYaxis()->SetTickLength(0.025);
   Graph_Graph3025->GetYaxis()->SetTitleOffset(1.05);
   Graph_Graph3025->GetYaxis()->SetTitleFont(42);
   Graph_Graph3025->GetZaxis()->SetNdivisions(405);
   Graph_Graph3025->GetZaxis()->SetLabelFont(42);
   Graph_Graph3025->GetZaxis()->SetLabelOffset(0.007);
   Graph_Graph3025->GetZaxis()->SetTitleSize(0.05);
   Graph_Graph3025->GetZaxis()->SetTickLength(0.025);
   Graph_Graph3025->GetZaxis()->SetTitleFont(42);
   grae->SetHistogram(Graph_Graph3025);
   
   grae->Draw("ep 0");
   
   Double_t _fx3026[4] = {
   50,
   87.5,
   125,
   375};
   Double_t _fy3026[4] = {
   1.004344,
   1.022642,
   0.9538286,
   1.047527};
   Double_t _felx3026[4] = {
   25,
   12.5,
   25,
   225};
   Double_t _fely3026[4] = {
   0.02828296,
   0.06614924,
   0.05762289,
   0.06534294};
   Double_t _fehx3026[4] = {
   25,
   12.5,
   25,
   225};
   Double_t _fehy3026[4] = {
   0.02828296,
   0.06614924,
   0.05762289,
   0.06534294};
   grae = new TGraphAsymmErrors(4,_fx3026,_fy3026,_felx3026,_fehx3026,_fely3026,_fehy3026);
   grae->SetName("");
   grae->SetTitle("");
   grae->SetFillColor(1);
   grae->SetMarkerStyle(20);
   
   TH1F *Graph_Graph3026 = new TH1F("Graph_Graph3026","",100,0,657.5);
   Graph_Graph3026->SetMinimum(0.8745393);
   Graph_Graph3026->SetMaximum(1.134536);
   Graph_Graph3026->SetDirectory(0);
   Graph_Graph3026->SetStats(0);
   Graph_Graph3026->SetLineStyle(0);
   Graph_Graph3026->GetXaxis()->SetNdivisions(405);
   Graph_Graph3026->GetXaxis()->SetLabelFont(42);
   Graph_Graph3026->GetXaxis()->SetLabelOffset(0.007);
   Graph_Graph3026->GetXaxis()->SetTitleSize(0.05);
   Graph_Graph3026->GetXaxis()->SetTickLength(0.025);
   Graph_Graph3026->GetXaxis()->SetTitleOffset(0.9);
   Graph_Graph3026->GetXaxis()->SetTitleFont(42);
   Graph_Graph3026->GetYaxis()->SetNdivisions(405);
   Graph_Graph3026->GetYaxis()->SetLabelFont(42);
   Graph_Graph3026->GetYaxis()->SetLabelOffset(0.007);
   Graph_Graph3026->GetYaxis()->SetTitleSize(0.05);
   Graph_Graph3026->GetYaxis()->SetTickLength(0.025);
   Graph_Graph3026->GetYaxis()->SetTitleOffset(1.05);
   Graph_Graph3026->GetYaxis()->SetTitleFont(42);
   Graph_Graph3026->GetZaxis()->SetNdivisions(405);
   Graph_Graph3026->GetZaxis()->SetLabelFont(42);
   Graph_Graph3026->GetZaxis()->SetLabelOffset(0.007);
   Graph_Graph3026->GetZaxis()->SetTitleSize(0.05);
   Graph_Graph3026->GetZaxis()->SetTickLength(0.025);
   Graph_Graph3026->GetZaxis()->SetTitleFont(42);
   grae->SetHistogram(Graph_Graph3026);
   
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
