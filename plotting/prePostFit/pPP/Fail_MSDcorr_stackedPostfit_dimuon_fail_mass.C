void Fail_MSDcorr_stackedPostfit_dimuon_fail_mass()
{
//=========Macro generated from canvas: c/c
//=========  (Tue Feb 13 18:07:02 2018) by ROOT version6.06/09
   TCanvas *c = new TCanvas("c", "c",0,0,720,800);
   gStyle->SetOptFit(1);
   gStyle->SetOptStat(0);
   gStyle->SetOptTitle(0);
   c->SetHighLightColor(2);
   c->Range(-60.18518,-6.054304,649.6914,3.61037);
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
   Double_t xAxis64[5] = {25, 75, 100, 150, 600}; 
   
   TH1F *dummy__59 = new TH1F("dummy__59","h_all_prefit",4, xAxis64);
   dummy__59->SetBinContent(1,27.78532);
   dummy__59->SetBinContent(2,20.00681);
   dummy__59->SetBinContent(3,11.56072);
   dummy__59->SetBinContent(4,1.733237);
   dummy__59->SetBinError(1,1.826171);
   dummy__59->SetBinError(2,1.160132);
   dummy__59->SetBinError(3,0.7092845);
   dummy__59->SetBinError(4,0.1130583);
   dummy__59->SetMinimum(0.0007);
   dummy__59->SetMaximum(1389.266);
   dummy__59->SetEntries(16);
   dummy__59->SetLineColor(0);
   dummy__59->SetLineStyle(0);
   dummy__59->SetLineWidth(0);
   dummy__59->SetMarkerColor(0);
   dummy__59->SetMarkerSize(0);
   dummy__59->GetXaxis()->SetNdivisions(405);
   dummy__59->GetXaxis()->SetLabelFont(42);
   dummy__59->GetXaxis()->SetLabelOffset(0.007);
   dummy__59->GetXaxis()->SetLabelSize(0);
   dummy__59->GetXaxis()->SetTitleSize(0);
   dummy__59->GetXaxis()->SetTickLength(0.025);
   dummy__59->GetXaxis()->SetTitleOffset(0.9);
   dummy__59->GetXaxis()->SetTitleFont(42);
   dummy__59->GetYaxis()->SetTitle("Events / GeV");
   dummy__59->GetYaxis()->SetNdivisions(405);
   dummy__59->GetYaxis()->SetLabelFont(42);
   dummy__59->GetYaxis()->SetLabelOffset(0.007);
   dummy__59->GetYaxis()->SetTitleSize(0.05);
   dummy__59->GetYaxis()->SetTickLength(0.025);
   dummy__59->GetYaxis()->SetTitleOffset(1.21);
   dummy__59->GetYaxis()->SetTitleFont(42);
   dummy__59->GetZaxis()->SetNdivisions(405);
   dummy__59->GetZaxis()->SetLabelFont(42);
   dummy__59->GetZaxis()->SetLabelOffset(0.007);
   dummy__59->GetZaxis()->SetTitleSize(0.05);
   dummy__59->GetZaxis()->SetTickLength(0.025);
   dummy__59->GetZaxis()->SetTitleFont(42);
   dummy__59->Draw("");
   
   THStack *h_stack_postfit = new THStack();
   h_stack_postfit->SetName("h_stack_postfit");
   h_stack_postfit->SetTitle("h_stack_postfit");
   Double_t xAxis65[5] = {25, 75, 100, 150, 600}; 
   
   TH1F *h_stack_postfit_stack_6 = new TH1F("h_stack_postfit_stack_6","h_stack_postfit",4, xAxis65);
   h_stack_postfit_stack_6->SetMinimum(0.003296076);
   h_stack_postfit_stack_6->SetMaximum(52.07881);
   h_stack_postfit_stack_6->SetDirectory(0);
   h_stack_postfit_stack_6->SetStats(0);
   h_stack_postfit_stack_6->SetLineStyle(0);
   h_stack_postfit_stack_6->GetXaxis()->SetNdivisions(405);
   h_stack_postfit_stack_6->GetXaxis()->SetLabelFont(42);
   h_stack_postfit_stack_6->GetXaxis()->SetLabelOffset(0.007);
   h_stack_postfit_stack_6->GetXaxis()->SetTitleSize(0.05);
   h_stack_postfit_stack_6->GetXaxis()->SetTickLength(0.025);
   h_stack_postfit_stack_6->GetXaxis()->SetTitleOffset(0.9);
   h_stack_postfit_stack_6->GetXaxis()->SetTitleFont(42);
   h_stack_postfit_stack_6->GetYaxis()->SetNdivisions(405);
   h_stack_postfit_stack_6->GetYaxis()->SetLabelFont(42);
   h_stack_postfit_stack_6->GetYaxis()->SetLabelOffset(0.007);
   h_stack_postfit_stack_6->GetYaxis()->SetTitleSize(0.05);
   h_stack_postfit_stack_6->GetYaxis()->SetTickLength(0.025);
   h_stack_postfit_stack_6->GetYaxis()->SetTitleOffset(1.05);
   h_stack_postfit_stack_6->GetYaxis()->SetTitleFont(42);
   h_stack_postfit_stack_6->GetZaxis()->SetNdivisions(405);
   h_stack_postfit_stack_6->GetZaxis()->SetLabelFont(42);
   h_stack_postfit_stack_6->GetZaxis()->SetLabelOffset(0.007);
   h_stack_postfit_stack_6->GetZaxis()->SetTitleSize(0.05);
   h_stack_postfit_stack_6->GetZaxis()->SetTickLength(0.025);
   h_stack_postfit_stack_6->GetZaxis()->SetTitleFont(42);
   h_stack_postfit->SetHistogram(h_stack_postfit_stack_6);
   
   Double_t xAxis66[5] = {25, 75, 100, 150, 600}; 
   
   TH1F *dibosons__60 = new TH1F("dibosons__60","dibosons in mass0_zmm_fail",4, xAxis66);
   dibosons__60->SetBinContent(1,0.5291393);
   dibosons__60->SetBinContent(2,2.434012);
   dibosons__60->SetBinContent(3,0.2920966);
   dibosons__60->SetBinContent(4,0.0183034);
   dibosons__60->SetBinError(1,0.05358424);
   dibosons__60->SetBinError(2,0.2463922);
   dibosons__60->SetBinError(3,0.02957317);
   dibosons__60->SetBinError(4,0.001853035);
   dibosons__60->SetEntries(4);

   Int_t ci;      // for color index setting
   TColor *color; // for color definition with alpha
   ci = TColor::GetColor("#ffff99");
   dibosons__60->SetFillColor(ci);
   dibosons__60->GetXaxis()->SetTitle("min(999.9999,fjmass)");
   dibosons__60->GetXaxis()->SetLabelFont(42);
   dibosons__60->GetXaxis()->SetLabelSize(0.035);
   dibosons__60->GetXaxis()->SetTitleSize(0.035);
   dibosons__60->GetXaxis()->SetTitleFont(42);
   dibosons__60->GetYaxis()->SetTitle("Events / ( 143.75 )");
   dibosons__60->GetYaxis()->SetLabelFont(42);
   dibosons__60->GetYaxis()->SetLabelSize(0.035);
   dibosons__60->GetYaxis()->SetTitleSize(0.035);
   dibosons__60->GetYaxis()->SetTitleFont(42);
   dibosons__60->GetZaxis()->SetLabelFont(42);
   dibosons__60->GetZaxis()->SetLabelSize(0.035);
   dibosons__60->GetZaxis()->SetTitleSize(0.035);
   dibosons__60->GetZaxis()->SetTitleFont(42);
   h_stack_postfit->Add(dibosons,"");
   Double_t xAxis67[5] = {25, 75, 100, 150, 600}; 
   
   TH1F *stop__61 = new TH1F("stop__61","stop in mass0_zmm_fail",4, xAxis67);
   stop__61->SetBinContent(1,0.1596032);
   stop__61->SetBinContent(2,0.3579176);
   stop__61->SetBinContent(3,0.0928833);
   stop__61->SetBinContent(4,0.0115113);
   stop__61->SetBinError(1,0.01924886);
   stop__61->SetBinError(2,0.04314264);
   stop__61->SetBinError(3,0.01124031);
   stop__61->SetBinError(4,0.001393142);
   stop__61->SetEntries(4);

   ci = TColor::GetColor("#ff9999");
   stop__61->SetFillColor(ci);
   stop__61->GetXaxis()->SetTitle("min(999.9999,fjmass)");
   stop__61->GetXaxis()->SetLabelFont(42);
   stop__61->GetXaxis()->SetLabelSize(0.035);
   stop__61->GetXaxis()->SetTitleSize(0.035);
   stop__61->GetXaxis()->SetTitleFont(42);
   stop__61->GetYaxis()->SetTitle("Events / ( 143.75 )");
   stop__61->GetYaxis()->SetLabelFont(42);
   stop__61->GetYaxis()->SetLabelSize(0.035);
   stop__61->GetYaxis()->SetTitleSize(0.035);
   stop__61->GetYaxis()->SetTitleFont(42);
   stop__61->GetZaxis()->SetLabelFont(42);
   stop__61->GetZaxis()->SetLabelSize(0.035);
   stop__61->GetZaxis()->SetTitleSize(0.035);
   stop__61->GetZaxis()->SetTitleFont(42);
   h_stack_postfit->Add(stop,"");
   Double_t xAxis68[5] = {25, 75, 100, 150, 600}; 
   
   TH1F *ttbar__62 = new TH1F("ttbar__62","ttbar in mass0_zmm_fail",4, xAxis68);
   ttbar__62->SetBinContent(1,0.6095904);
   ttbar__62->SetBinContent(2,2.238301);
   ttbar__62->SetBinContent(3,0.9366065);
   ttbar__62->SetBinContent(4,0.0627749);
   ttbar__62->SetBinError(1,0.02126092);
   ttbar__62->SetBinError(2,0.0774637);
   ttbar__62->SetBinError(3,0.03237928);
   ttbar__62->SetBinError(4,0.002180593);
   ttbar__62->SetEntries(4);

   ci = TColor::GetColor("#ffcc66");
   ttbar__62->SetFillColor(ci);
   ttbar__62->GetXaxis()->SetTitle("min(999.9999,fjmass)");
   ttbar__62->GetXaxis()->SetLabelFont(42);
   ttbar__62->GetXaxis()->SetLabelSize(0.035);
   ttbar__62->GetXaxis()->SetTitleSize(0.035);
   ttbar__62->GetXaxis()->SetTitleFont(42);
   ttbar__62->GetYaxis()->SetTitle("Events / ( 143.75 )");
   ttbar__62->GetYaxis()->SetLabelFont(42);
   ttbar__62->GetYaxis()->SetLabelSize(0.035);
   ttbar__62->GetYaxis()->SetTitleSize(0.035);
   ttbar__62->GetYaxis()->SetTitleFont(42);
   ttbar__62->GetZaxis()->SetLabelFont(42);
   ttbar__62->GetZaxis()->SetLabelSize(0.035);
   ttbar__62->GetZaxis()->SetTitleSize(0.035);
   ttbar__62->GetZaxis()->SetTitleFont(42);
   h_stack_postfit->Add(ttbar,"");
   Double_t xAxis69[5] = {25, 75, 100, 150, 600}; 
   
   TH1F *zll__63 = new TH1F("zll__63","zll in mass0_zmm_fail",4, xAxis69);
   zll__63->SetBinContent(1,29.2444);
   zll__63->SetBinContent(2,14.84291);
   zll__63->SetBinContent(3,12.37696);
   zll__63->SetBinContent(4,1.80494);
   zll__63->SetBinError(1,0.6256024);
   zll__63->SetBinError(2,0.6889864);
   zll__63->SetBinError(3,0.4401241);
   zll__63->SetBinError(4,0.04745641);
   zll__63->SetEntries(4);

   ci = TColor::GetColor("#99ffff");
   zll__63->SetFillColor(ci);
   zll__63->GetXaxis()->SetTitle("min(999.9999,fjmass)");
   zll__63->GetXaxis()->SetLabelFont(42);
   zll__63->GetXaxis()->SetLabelSize(0.035);
   zll__63->GetXaxis()->SetTitleSize(0.035);
   zll__63->GetXaxis()->SetTitleFont(42);
   zll__63->GetYaxis()->SetTitle("Events / ( 143.75 )");
   zll__63->GetYaxis()->SetLabelFont(42);
   zll__63->GetYaxis()->SetLabelSize(0.035);
   zll__63->GetYaxis()->SetTitleSize(0.035);
   zll__63->GetYaxis()->SetTitleFont(42);
   zll__63->GetZaxis()->SetLabelFont(42);
   zll__63->GetZaxis()->SetLabelSize(0.035);
   zll__63->GetZaxis()->SetTitleSize(0.035);
   zll__63->GetZaxis()->SetTitleFont(42);
   h_stack_postfit->Add(zll,"");
   h_stack_postfit->Draw("hist same");
   Double_t xAxis70[5] = {25, 75, 100, 150, 600}; 
   
   TH1F *h_all_prefit__64 = new TH1F("h_all_prefit__64","h_all_prefit",4, xAxis70);
   h_all_prefit__64->SetBinContent(1,27.78532);
   h_all_prefit__64->SetBinContent(2,20.00681);
   h_all_prefit__64->SetBinContent(3,11.56072);
   h_all_prefit__64->SetBinContent(4,1.733237);
   h_all_prefit__64->SetBinError(1,1.826171);
   h_all_prefit__64->SetBinError(2,1.160132);
   h_all_prefit__64->SetBinError(3,0.7092845);
   h_all_prefit__64->SetBinError(4,0.1130583);
   h_all_prefit__64->SetEntries(16);
   h_all_prefit__64->SetLineColor(2);
   h_all_prefit__64->SetLineStyle(7);
   h_all_prefit__64->SetLineWidth(2);
   h_all_prefit__64->GetXaxis()->SetNdivisions(405);
   h_all_prefit__64->GetXaxis()->SetLabelFont(42);
   h_all_prefit__64->GetXaxis()->SetLabelOffset(0.007);
   h_all_prefit__64->GetXaxis()->SetTitleSize(0.05);
   h_all_prefit__64->GetXaxis()->SetTickLength(0.025);
   h_all_prefit__64->GetXaxis()->SetTitleOffset(0.9);
   h_all_prefit__64->GetXaxis()->SetTitleFont(42);
   h_all_prefit__64->GetYaxis()->SetNdivisions(405);
   h_all_prefit__64->GetYaxis()->SetLabelFont(42);
   h_all_prefit__64->GetYaxis()->SetLabelOffset(0.007);
   h_all_prefit__64->GetYaxis()->SetTitleSize(0.05);
   h_all_prefit__64->GetYaxis()->SetTickLength(0.025);
   h_all_prefit__64->GetYaxis()->SetTitleOffset(1.05);
   h_all_prefit__64->GetYaxis()->SetTitleFont(42);
   h_all_prefit__64->GetZaxis()->SetNdivisions(405);
   h_all_prefit__64->GetZaxis()->SetLabelFont(42);
   h_all_prefit__64->GetZaxis()->SetLabelOffset(0.007);
   h_all_prefit__64->GetZaxis()->SetTitleSize(0.05);
   h_all_prefit__64->GetZaxis()->SetTickLength(0.025);
   h_all_prefit__64->GetZaxis()->SetTitleFont(42);
   h_all_prefit__64->Draw("histsame");
   Double_t xAxis71[5] = {25, 75, 100, 150, 600}; 
   
   TH1F *dimuon_data__65 = new TH1F("dimuon_data__65","base",4, xAxis71);
   dimuon_data__65->SetBinContent(1,30.54);
   dimuon_data__65->SetBinContent(2,19.88);
   dimuon_data__65->SetBinContent(3,13.7);
   dimuon_data__65->SetBinContent(4,1.897778);
   dimuon_data__65->SetBinContent(5,0.002222222);
   dimuon_data__65->SetBinError(1,0.7815369);
   dimuon_data__65->SetBinError(2,0.8917399);
   dimuon_data__65->SetBinError(3,0.5234501);
   dimuon_data__65->SetBinError(4,0.06494062);
   dimuon_data__65->SetBinError(5,0.002222222);
   dimuon_data__65->SetEntries(2587.758);
   dimuon_data__65->SetMarkerStyle(20);
   dimuon_data__65->SetMarkerSize(1.2);
   dimuon_data__65->GetXaxis()->SetTitle("min(999.9999,fjmass)");
   dimuon_data__65->GetXaxis()->SetLabelFont(42);
   dimuon_data__65->GetXaxis()->SetLabelSize(0.035);
   dimuon_data__65->GetXaxis()->SetTitleSize(0.035);
   dimuon_data__65->GetXaxis()->SetTitleFont(42);
   dimuon_data__65->GetYaxis()->SetLabelFont(42);
   dimuon_data__65->GetYaxis()->SetLabelSize(0.035);
   dimuon_data__65->GetYaxis()->SetTitleSize(0.035);
   dimuon_data__65->GetYaxis()->SetTitleFont(42);
   dimuon_data__65->GetZaxis()->SetLabelFont(42);
   dimuon_data__65->GetZaxis()->SetLabelSize(0.035);
   dimuon_data__65->GetZaxis()->SetTitleSize(0.035);
   dimuon_data__65->GetZaxis()->SetTitleFont(42);
   dimuon_data__65->Draw("epsame e0");
   
   TLegend *leg = new TLegend(0.55,0.73,0.88,0.93,NULL,"brNDC");
   leg->SetBorderSize(0);
   leg->SetTextSize(0.035);
   leg->SetLineColor(0);
   leg->SetLineStyle(1);
   leg->SetLineWidth(1);
   leg->SetFillColor(0);
   leg->SetFillStyle(0);
   TLegendEntry *entry=leg->AddEntry("dimuon_data","Data","elp");
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
   TLatex *   tex = new TLatex(0.16,0.825,"Dimuon CR fail");
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
   Double_t xAxis72[5] = {25, 75, 100, 150, 600}; 
   
   TH1F *dummy_copy__66 = new TH1F("dummy_copy__66","h_all_prefit",4, xAxis72);
   dummy_copy__66->SetBinContent(1,27.78532);
   dummy_copy__66->SetBinContent(2,20.00681);
   dummy_copy__66->SetBinContent(3,11.56072);
   dummy_copy__66->SetBinContent(4,1.733237);
   dummy_copy__66->SetBinError(1,1.826171);
   dummy_copy__66->SetBinError(2,1.160132);
   dummy_copy__66->SetBinError(3,0.7092845);
   dummy_copy__66->SetBinError(4,0.1130583);
   dummy_copy__66->SetMinimum(0.0007);
   dummy_copy__66->SetMaximum(1389.266);
   dummy_copy__66->SetEntries(16);
   dummy_copy__66->SetDirectory(0);
   dummy_copy__66->SetLineColor(0);
   dummy_copy__66->SetLineStyle(0);
   dummy_copy__66->SetLineWidth(0);
   dummy_copy__66->SetMarkerColor(0);
   dummy_copy__66->SetMarkerSize(0);
   dummy_copy__66->GetXaxis()->SetNdivisions(405);
   dummy_copy__66->GetXaxis()->SetLabelFont(42);
   dummy_copy__66->GetXaxis()->SetLabelOffset(0.007);
   dummy_copy__66->GetXaxis()->SetLabelSize(0);
   dummy_copy__66->GetXaxis()->SetTitleSize(0);
   dummy_copy__66->GetXaxis()->SetTickLength(0.025);
   dummy_copy__66->GetXaxis()->SetTitleOffset(0.9);
   dummy_copy__66->GetXaxis()->SetTitleFont(42);
   dummy_copy__66->GetYaxis()->SetTitle("Events / GeV");
   dummy_copy__66->GetYaxis()->SetNdivisions(405);
   dummy_copy__66->GetYaxis()->SetLabelFont(42);
   dummy_copy__66->GetYaxis()->SetLabelOffset(0.007);
   dummy_copy__66->GetYaxis()->SetTitleSize(0.05);
   dummy_copy__66->GetYaxis()->SetTickLength(0.025);
   dummy_copy__66->GetYaxis()->SetTitleOffset(1.21);
   dummy_copy__66->GetYaxis()->SetTitleFont(42);
   dummy_copy__66->GetZaxis()->SetNdivisions(405);
   dummy_copy__66->GetZaxis()->SetLabelFont(42);
   dummy_copy__66->GetZaxis()->SetLabelOffset(0.007);
   dummy_copy__66->GetZaxis()->SetTitleSize(0.05);
   dummy_copy__66->GetZaxis()->SetTickLength(0.025);
   dummy_copy__66->GetZaxis()->SetTitleFont(42);
   dummy_copy__66->Draw("sameaxis");
  
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
   Double_t xAxis73[5] = {25, 75, 100, 150, 600}; 
   
   TH1F *dummy2__67 = new TH1F("dummy2__67","dummy2",4, xAxis73);
   dummy2__67->SetBinContent(1,1);
   dummy2__67->SetBinContent(2,1);
   dummy2__67->SetBinContent(3,1);
   dummy2__67->SetMinimum(0.1);
   dummy2__67->SetMaximum(2.1);
   dummy2__67->SetEntries(3);
   dummy2__67->SetLineColor(0);
   dummy2__67->SetLineStyle(0);
   dummy2__67->SetLineWidth(0);
   dummy2__67->SetMarkerColor(0);
   dummy2__67->SetMarkerSize(0);
   dummy2__67->GetXaxis()->SetTitle("Fatjet m_{SD} (GeV)");
   dummy2__67->GetXaxis()->SetLabelFont(42);
   dummy2__67->GetXaxis()->SetLabelOffset(0.007);
   dummy2__67->GetXaxis()->SetTitleSize(0.05);
   dummy2__67->GetXaxis()->SetTickLength(0.025);
   dummy2__67->GetXaxis()->SetTitleOffset(0.9);
   dummy2__67->GetXaxis()->SetTitleFont(42);
   dummy2__67->GetYaxis()->SetTitle("Data / Pred.");
   dummy2__67->GetYaxis()->CenterTitle(true);
   dummy2__67->GetYaxis()->SetNdivisions(5);
   dummy2__67->GetYaxis()->SetLabelFont(42);
   dummy2__67->GetYaxis()->SetLabelOffset(0.007);
   dummy2__67->GetYaxis()->SetLabelSize(0.03);
   dummy2__67->GetYaxis()->SetTickLength(0.025);
   dummy2__67->GetYaxis()->SetTitleOffset(1.5);
   dummy2__67->GetYaxis()->SetTitleFont(42);
   dummy2__67->GetZaxis()->SetNdivisions(405);
   dummy2__67->GetZaxis()->SetLabelFont(42);
   dummy2__67->GetZaxis()->SetLabelOffset(0.007);
   dummy2__67->GetZaxis()->SetTitleSize(0.05);
   dummy2__67->GetZaxis()->SetTickLength(0.025);
   dummy2__67->GetZaxis()->SetTitleFont(42);
   dummy2__67->Draw("hist");
   Double_t xAxis74[5] = {25, 75, 100, 150, 600}; 
   
   TH1F *total_background__68 = new TH1F("total_background__68","Total background in mass0_zmm_fail",4, xAxis74);
   total_background__68->SetBinContent(1,1);
   total_background__68->SetBinContent(2,1);
   total_background__68->SetBinContent(3,1);
   total_background__68->SetBinContent(4,1);
   total_background__68->SetBinContent(5,1);
   total_background__68->SetBinError(1,0.02030339);
   total_background__68->SetBinError(2,0.03450383);
   total_background__68->SetBinError(3,0.03260027);
   total_background__68->SetBinError(4,0.02531163);
   total_background__68->SetEntries(21);

   ci = TColor::GetColor("#f4eb99");
   total_background__68->SetFillColor(ci);

   ci = TColor::GetColor("#f4eb99");
   total_background__68->SetLineColor(ci);
   total_background__68->SetMarkerSize(0);
   total_background__68->GetXaxis()->SetTitle("min(999.9999,fjmass)");
   total_background__68->GetXaxis()->SetLabelFont(42);
   total_background__68->GetXaxis()->SetLabelSize(0.035);
   total_background__68->GetXaxis()->SetTitleSize(0.035);
   total_background__68->GetXaxis()->SetTitleFont(42);
   total_background__68->GetYaxis()->SetTitle("Events / ( 143.75 )");
   total_background__68->GetYaxis()->SetLabelFont(42);
   total_background__68->GetYaxis()->SetLabelSize(0.035);
   total_background__68->GetYaxis()->SetTitleSize(0.035);
   total_background__68->GetYaxis()->SetTitleFont(42);
   total_background__68->GetZaxis()->SetLabelFont(42);
   total_background__68->GetZaxis()->SetLabelSize(0.035);
   total_background__68->GetZaxis()->SetTitleSize(0.035);
   total_background__68->GetZaxis()->SetTitleFont(42);
   total_background__68->Draw("e2same");
   
   TF1 *f16 = new TF1("f1","1",-5000,5000);
   f16->SetFillColor(19);
   f16->SetFillStyle(0);
   f16->SetLineWidth(2);
   f16->SetLineStyle(2);
   f16->GetXaxis()->SetNdivisions(405);
   f16->GetXaxis()->SetLabelFont(42);
   f16->GetXaxis()->SetLabelOffset(0.007);
   f16->GetXaxis()->SetTitleSize(0.05);
   f16->GetXaxis()->SetTickLength(0.025);
   f16->GetXaxis()->SetTitleOffset(0.9);
   f16->GetXaxis()->SetTitleFont(42);
   f16->GetYaxis()->SetNdivisions(405);
   f16->GetYaxis()->SetLabelFont(42);
   f16->GetYaxis()->SetLabelOffset(0.007);
   f16->GetYaxis()->SetTitleSize(0.05);
   f16->GetYaxis()->SetTickLength(0.025);
   f16->GetYaxis()->SetTitleOffset(1.05);
   f16->GetYaxis()->SetTitleFont(42);
   f16->Draw("same");
   
   Double_t _fx3011[4] = {
   50,
   87.5,
   125,
   375};
   Double_t _fy3011[4] = {
   1.099142,
   0.9936614,
   1.185047,
   1.094933};
   Double_t _felx3011[4] = {
   25,
   12.5,
   25,
   225};
   Double_t _fely3011[4] = {
   0.0281277,
   0.04457181,
   0.04527832,
   0.03746782};
   Double_t _fehx3011[4] = {
   25,
   12.5,
   25,
   225};
   Double_t _fehy3011[4] = {
   0.0281277,
   0.04457181,
   0.04527832,
   0.03746782};
   TGraphAsymmErrors *grae = new TGraphAsymmErrors(4,_fx3011,_fy3011,_felx3011,_fehx3011,_fely3011,_fehy3011);
   grae->SetName("");
   grae->SetTitle("");
   grae->SetFillColor(1);
   grae->SetLineColor(2);
   grae->SetLineStyle(7);
   grae->SetMarkerColor(2);
   grae->SetMarkerStyle(24);
   
   TH1F *Graph_Graph3011 = new TH1F("Graph_Graph3011","",100,0,657.5);
   Graph_Graph3011->SetMinimum(0.920966);
   Graph_Graph3011->SetMaximum(1.258449);
   Graph_Graph3011->SetDirectory(0);
   Graph_Graph3011->SetStats(0);
   Graph_Graph3011->SetLineStyle(0);
   Graph_Graph3011->GetXaxis()->SetNdivisions(405);
   Graph_Graph3011->GetXaxis()->SetLabelFont(42);
   Graph_Graph3011->GetXaxis()->SetLabelOffset(0.007);
   Graph_Graph3011->GetXaxis()->SetTitleSize(0.05);
   Graph_Graph3011->GetXaxis()->SetTickLength(0.025);
   Graph_Graph3011->GetXaxis()->SetTitleOffset(0.9);
   Graph_Graph3011->GetXaxis()->SetTitleFont(42);
   Graph_Graph3011->GetYaxis()->SetNdivisions(405);
   Graph_Graph3011->GetYaxis()->SetLabelFont(42);
   Graph_Graph3011->GetYaxis()->SetLabelOffset(0.007);
   Graph_Graph3011->GetYaxis()->SetTitleSize(0.05);
   Graph_Graph3011->GetYaxis()->SetTickLength(0.025);
   Graph_Graph3011->GetYaxis()->SetTitleOffset(1.05);
   Graph_Graph3011->GetYaxis()->SetTitleFont(42);
   Graph_Graph3011->GetZaxis()->SetNdivisions(405);
   Graph_Graph3011->GetZaxis()->SetLabelFont(42);
   Graph_Graph3011->GetZaxis()->SetLabelOffset(0.007);
   Graph_Graph3011->GetZaxis()->SetTitleSize(0.05);
   Graph_Graph3011->GetZaxis()->SetTickLength(0.025);
   Graph_Graph3011->GetZaxis()->SetTitleFont(42);
   grae->SetHistogram(Graph_Graph3011);
   
   grae->Draw("ep 0");
   
   Double_t _fx3012[4] = {
   50,
   87.5,
   125,
   375};
   Double_t _fy3012[4] = {
   0.9999104,
   1.000345,
   1.000106,
   1.000131};
   Double_t _felx3012[4] = {
   25,
   12.5,
   25,
   225};
   Double_t _fely3012[4] = {
   0.02558831,
   0.04487161,
   0.03821209,
   0.03422378};
   Double_t _fehx3012[4] = {
   25,
   12.5,
   25,
   225};
   Double_t _fehy3012[4] = {
   0.02558831,
   0.04487161,
   0.03821209,
   0.03422378};
   grae = new TGraphAsymmErrors(4,_fx3012,_fy3012,_felx3012,_fehx3012,_fely3012,_fehy3012);
   grae->SetName("");
   grae->SetTitle("");
   grae->SetFillColor(1);
   grae->SetMarkerStyle(20);
   
   TH1F *Graph_Graph3012 = new TH1F("Graph_Graph3012","",100,0,657.5);
   Graph_Graph3012->SetMinimum(0.9464991);
   Graph_Graph3012->SetMaximum(1.054191);
   Graph_Graph3012->SetDirectory(0);
   Graph_Graph3012->SetStats(0);
   Graph_Graph3012->SetLineStyle(0);
   Graph_Graph3012->GetXaxis()->SetNdivisions(405);
   Graph_Graph3012->GetXaxis()->SetLabelFont(42);
   Graph_Graph3012->GetXaxis()->SetLabelOffset(0.007);
   Graph_Graph3012->GetXaxis()->SetTitleSize(0.05);
   Graph_Graph3012->GetXaxis()->SetTickLength(0.025);
   Graph_Graph3012->GetXaxis()->SetTitleOffset(0.9);
   Graph_Graph3012->GetXaxis()->SetTitleFont(42);
   Graph_Graph3012->GetYaxis()->SetNdivisions(405);
   Graph_Graph3012->GetYaxis()->SetLabelFont(42);
   Graph_Graph3012->GetYaxis()->SetLabelOffset(0.007);
   Graph_Graph3012->GetYaxis()->SetTitleSize(0.05);
   Graph_Graph3012->GetYaxis()->SetTickLength(0.025);
   Graph_Graph3012->GetYaxis()->SetTitleOffset(1.05);
   Graph_Graph3012->GetYaxis()->SetTitleFont(42);
   Graph_Graph3012->GetZaxis()->SetNdivisions(405);
   Graph_Graph3012->GetZaxis()->SetLabelFont(42);
   Graph_Graph3012->GetZaxis()->SetLabelOffset(0.007);
   Graph_Graph3012->GetZaxis()->SetTitleSize(0.05);
   Graph_Graph3012->GetZaxis()->SetTickLength(0.025);
   Graph_Graph3012->GetZaxis()->SetTitleFont(42);
   grae->SetHistogram(Graph_Graph3012);
   
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
