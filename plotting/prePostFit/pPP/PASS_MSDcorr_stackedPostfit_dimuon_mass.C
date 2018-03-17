void PASS_MSDcorr_stackedPostfit_dimuon_mass()
{
//=========Macro generated from canvas: c/c
//=========  (Tue Feb 13 18:07:02 2018) by ROOT version6.06/09
   TCanvas *c = new TCanvas("c", "c",0,0,720,800);
   gStyle->SetOptFit(1);
   gStyle->SetOptStat(0);
   gStyle->SetOptTitle(0);
   c->SetHighLightColor(2);
   c->Range(-60.18518,-7.034045,649.6914,2.563099);
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
   Double_t xAxis53[5] = {25, 75, 100, 150, 600}; 
   
   TH1F *dummy__49 = new TH1F("dummy__49","h_all_prefit",4, xAxis53);
   dummy__49->SetBinContent(1,2.510795);
   dummy__49->SetBinContent(2,0.8966932);
   dummy__49->SetBinContent(3,0.5758978);
   dummy__49->SetBinContent(4,0.06621879);
   dummy__49->SetBinError(1,0.152504);
   dummy__49->SetBinError(2,0.06499555);
   dummy__49->SetBinError(3,0.04192333);
   dummy__49->SetBinError(4,0.005414395);
   dummy__49->SetMinimum(7e-05);
   dummy__49->SetMaximum(125.5397);
   dummy__49->SetEntries(16);
   dummy__49->SetLineColor(0);
   dummy__49->SetLineStyle(0);
   dummy__49->SetLineWidth(0);
   dummy__49->SetMarkerColor(0);
   dummy__49->SetMarkerSize(0);
   dummy__49->GetXaxis()->SetNdivisions(405);
   dummy__49->GetXaxis()->SetLabelFont(42);
   dummy__49->GetXaxis()->SetLabelOffset(0.007);
   dummy__49->GetXaxis()->SetLabelSize(0);
   dummy__49->GetXaxis()->SetTitleSize(0);
   dummy__49->GetXaxis()->SetTickLength(0.025);
   dummy__49->GetXaxis()->SetTitleOffset(0.9);
   dummy__49->GetXaxis()->SetTitleFont(42);
   dummy__49->GetYaxis()->SetTitle("Events / GeV");
   dummy__49->GetYaxis()->SetNdivisions(405);
   dummy__49->GetYaxis()->SetLabelFont(42);
   dummy__49->GetYaxis()->SetLabelOffset(0.007);
   dummy__49->GetYaxis()->SetTitleSize(0.05);
   dummy__49->GetYaxis()->SetTickLength(0.025);
   dummy__49->GetYaxis()->SetTitleOffset(1.21);
   dummy__49->GetYaxis()->SetTitleFont(42);
   dummy__49->GetZaxis()->SetNdivisions(405);
   dummy__49->GetZaxis()->SetLabelFont(42);
   dummy__49->GetZaxis()->SetLabelOffset(0.007);
   dummy__49->GetZaxis()->SetTitleSize(0.05);
   dummy__49->GetZaxis()->SetTickLength(0.025);
   dummy__49->GetZaxis()->SetTitleFont(42);
   dummy__49->Draw("");
   
   THStack *h_stack_postfit = new THStack();
   h_stack_postfit->SetName("h_stack_postfit");
   h_stack_postfit->SetTitle("h_stack_postfit");
   Double_t xAxis54[5] = {25, 75, 100, 150, 600}; 
   
   TH1F *h_stack_postfit_stack_5 = new TH1F("h_stack_postfit_stack_5","h_stack_postfit",4, xAxis54);
   h_stack_postfit_stack_5->SetMinimum(1.233955e-09);
   h_stack_postfit_stack_5->SetMaximum(6.231985);
   h_stack_postfit_stack_5->SetDirectory(0);
   h_stack_postfit_stack_5->SetStats(0);
   h_stack_postfit_stack_5->SetLineStyle(0);
   h_stack_postfit_stack_5->GetXaxis()->SetNdivisions(405);
   h_stack_postfit_stack_5->GetXaxis()->SetLabelFont(42);
   h_stack_postfit_stack_5->GetXaxis()->SetLabelOffset(0.007);
   h_stack_postfit_stack_5->GetXaxis()->SetTitleSize(0.05);
   h_stack_postfit_stack_5->GetXaxis()->SetTickLength(0.025);
   h_stack_postfit_stack_5->GetXaxis()->SetTitleOffset(0.9);
   h_stack_postfit_stack_5->GetXaxis()->SetTitleFont(42);
   h_stack_postfit_stack_5->GetYaxis()->SetNdivisions(405);
   h_stack_postfit_stack_5->GetYaxis()->SetLabelFont(42);
   h_stack_postfit_stack_5->GetYaxis()->SetLabelOffset(0.007);
   h_stack_postfit_stack_5->GetYaxis()->SetTitleSize(0.05);
   h_stack_postfit_stack_5->GetYaxis()->SetTickLength(0.025);
   h_stack_postfit_stack_5->GetYaxis()->SetTitleOffset(1.05);
   h_stack_postfit_stack_5->GetYaxis()->SetTitleFont(42);
   h_stack_postfit_stack_5->GetZaxis()->SetNdivisions(405);
   h_stack_postfit_stack_5->GetZaxis()->SetLabelFont(42);
   h_stack_postfit_stack_5->GetZaxis()->SetLabelOffset(0.007);
   h_stack_postfit_stack_5->GetZaxis()->SetTitleSize(0.05);
   h_stack_postfit_stack_5->GetZaxis()->SetTickLength(0.025);
   h_stack_postfit_stack_5->GetZaxis()->SetTitleFont(42);
   h_stack_postfit->SetHistogram(h_stack_postfit_stack_5);
   
   Double_t xAxis55[5] = {25, 75, 100, 150, 600}; 
   
   TH1F *dibosons__50 = new TH1F("dibosons__50","dibosons in mass0_zmm",4, xAxis55);
   dibosons__50->SetBinContent(1,0.0608893);
   dibosons__50->SetBinContent(2,0.1739866);
   dibosons__50->SetBinContent(3,8.037255e-09);
   dibosons__50->SetBinContent(4,0.001429166);
   dibosons__50->SetBinError(1,0.006104512);
   dibosons__50->SetBinError(2,0.01746137);
   dibosons__50->SetBinError(3,8.060977e-10);
   dibosons__50->SetBinError(4,0.0001433995);
   dibosons__50->SetEntries(4);

   Int_t ci;      // for color index setting
   TColor *color; // for color definition with alpha
   ci = TColor::GetColor("#ffff99");
   dibosons__50->SetFillColor(ci);
   dibosons__50->GetXaxis()->SetTitle("min(999.9999,fjmass)");
   dibosons__50->GetXaxis()->SetLabelFont(42);
   dibosons__50->GetXaxis()->SetLabelSize(0.035);
   dibosons__50->GetXaxis()->SetTitleSize(0.035);
   dibosons__50->GetXaxis()->SetTitleFont(42);
   dibosons__50->GetYaxis()->SetTitle("Events / ( 143.75 )");
   dibosons__50->GetYaxis()->SetLabelFont(42);
   dibosons__50->GetYaxis()->SetLabelSize(0.035);
   dibosons__50->GetYaxis()->SetTitleSize(0.035);
   dibosons__50->GetYaxis()->SetTitleFont(42);
   dibosons__50->GetZaxis()->SetLabelFont(42);
   dibosons__50->GetZaxis()->SetLabelSize(0.035);
   dibosons__50->GetZaxis()->SetTitleSize(0.035);
   dibosons__50->GetZaxis()->SetTitleFont(42);
   h_stack_postfit->Add(dibosons,"");
   Double_t xAxis56[5] = {25, 75, 100, 150, 600}; 
   
   TH1F *stop__51 = new TH1F("stop__51","stop in mass0_zmm",4, xAxis56);
   stop__51->SetBinContent(1,0.05288747);
   stop__51->SetBinContent(2,0.04424277);
   stop__51->SetBinContent(3,0.0367552);
   stop__51->SetBinContent(4,0.002764543);
   stop__51->SetBinError(1,0.006413687);
   stop__51->SetBinError(2,0.005346704);
   stop__51->SetBinError(3,0.004448781);
   stop__51->SetBinError(4,0.0003345186);
   stop__51->SetEntries(4);

   ci = TColor::GetColor("#ff9999");
   stop__51->SetFillColor(ci);
   stop__51->GetXaxis()->SetTitle("min(999.9999,fjmass)");
   stop__51->GetXaxis()->SetLabelFont(42);
   stop__51->GetXaxis()->SetLabelSize(0.035);
   stop__51->GetXaxis()->SetTitleSize(0.035);
   stop__51->GetXaxis()->SetTitleFont(42);
   stop__51->GetYaxis()->SetTitle("Events / ( 143.75 )");
   stop__51->GetYaxis()->SetLabelFont(42);
   stop__51->GetYaxis()->SetLabelSize(0.035);
   stop__51->GetYaxis()->SetTitleSize(0.035);
   stop__51->GetYaxis()->SetTitleFont(42);
   stop__51->GetZaxis()->SetLabelFont(42);
   stop__51->GetZaxis()->SetLabelSize(0.035);
   stop__51->GetZaxis()->SetTitleSize(0.035);
   stop__51->GetZaxis()->SetTitleFont(42);
   h_stack_postfit->Add(stop,"");
   Double_t xAxis57[5] = {25, 75, 100, 150, 600}; 
   
   TH1F *ttbar__52 = new TH1F("ttbar__52","ttbar in mass0_zmm",4, xAxis57);
   ttbar__52->SetBinContent(1,0.1501453);
   ttbar__52->SetBinContent(2,0.2633977);
   ttbar__52->SetBinContent(3,0.2149553);
   ttbar__52->SetBinContent(4,0.01001561);
   ttbar__52->SetBinError(1,0.004373504);
   ttbar__52->SetBinError(2,0.007632795);
   ttbar__52->SetBinError(3,0.006137935);
   ttbar__52->SetBinError(4,0.0002882169);
   ttbar__52->SetEntries(4);

   ci = TColor::GetColor("#ffcc66");
   ttbar__52->SetFillColor(ci);
   ttbar__52->GetXaxis()->SetTitle("min(999.9999,fjmass)");
   ttbar__52->GetXaxis()->SetLabelFont(42);
   ttbar__52->GetXaxis()->SetLabelSize(0.035);
   ttbar__52->GetXaxis()->SetTitleSize(0.035);
   ttbar__52->GetXaxis()->SetTitleFont(42);
   ttbar__52->GetYaxis()->SetTitle("Events / ( 143.75 )");
   ttbar__52->GetYaxis()->SetLabelFont(42);
   ttbar__52->GetYaxis()->SetLabelSize(0.035);
   ttbar__52->GetYaxis()->SetTitleSize(0.035);
   ttbar__52->GetYaxis()->SetTitleFont(42);
   ttbar__52->GetZaxis()->SetLabelFont(42);
   ttbar__52->GetZaxis()->SetLabelSize(0.035);
   ttbar__52->GetZaxis()->SetTitleSize(0.035);
   ttbar__52->GetZaxis()->SetTitleFont(42);
   h_stack_postfit->Add(ttbar,"");
   Double_t xAxis58[5] = {25, 75, 100, 150, 600}; 
   
   TH1F *zll__53 = new TH1F("zll__53","zll in mass0_zmm",4, xAxis58);
   zll__53->SetBinContent(1,2.035999);
   zll__53->SetBinContent(2,0.4272206);
   zll__53->SetBinContent(3,0.4304707);
   zll__53->SetBinContent(4,0.0556783);
   zll__53->SetBinError(1,0.1050052);
   zll__53->SetBinError(2,0.07370335);
   zll__53->SetBinError(3,0.05472156);
   zll__53->SetBinError(4,0.00543474);
   zll__53->SetEntries(4);

   ci = TColor::GetColor("#99ffff");
   zll__53->SetFillColor(ci);
   zll__53->GetXaxis()->SetTitle("min(999.9999,fjmass)");
   zll__53->GetXaxis()->SetLabelFont(42);
   zll__53->GetXaxis()->SetLabelSize(0.035);
   zll__53->GetXaxis()->SetTitleSize(0.035);
   zll__53->GetXaxis()->SetTitleFont(42);
   zll__53->GetYaxis()->SetTitle("Events / ( 143.75 )");
   zll__53->GetYaxis()->SetLabelFont(42);
   zll__53->GetYaxis()->SetLabelSize(0.035);
   zll__53->GetYaxis()->SetTitleSize(0.035);
   zll__53->GetYaxis()->SetTitleFont(42);
   zll__53->GetZaxis()->SetLabelFont(42);
   zll__53->GetZaxis()->SetLabelSize(0.035);
   zll__53->GetZaxis()->SetTitleSize(0.035);
   zll__53->GetZaxis()->SetTitleFont(42);
   h_stack_postfit->Add(zll,"");
   h_stack_postfit->Draw("hist same");
   Double_t xAxis59[5] = {25, 75, 100, 150, 600}; 
   
   TH1F *h_all_prefit__54 = new TH1F("h_all_prefit__54","h_all_prefit",4, xAxis59);
   h_all_prefit__54->SetBinContent(1,2.510795);
   h_all_prefit__54->SetBinContent(2,0.8966932);
   h_all_prefit__54->SetBinContent(3,0.5758978);
   h_all_prefit__54->SetBinContent(4,0.06621879);
   h_all_prefit__54->SetBinError(1,0.152504);
   h_all_prefit__54->SetBinError(2,0.06499555);
   h_all_prefit__54->SetBinError(3,0.04192333);
   h_all_prefit__54->SetBinError(4,0.005414395);
   h_all_prefit__54->SetEntries(16);
   h_all_prefit__54->SetLineColor(2);
   h_all_prefit__54->SetLineStyle(7);
   h_all_prefit__54->SetLineWidth(2);
   h_all_prefit__54->GetXaxis()->SetNdivisions(405);
   h_all_prefit__54->GetXaxis()->SetLabelFont(42);
   h_all_prefit__54->GetXaxis()->SetLabelOffset(0.007);
   h_all_prefit__54->GetXaxis()->SetTitleSize(0.05);
   h_all_prefit__54->GetXaxis()->SetTickLength(0.025);
   h_all_prefit__54->GetXaxis()->SetTitleOffset(0.9);
   h_all_prefit__54->GetXaxis()->SetTitleFont(42);
   h_all_prefit__54->GetYaxis()->SetNdivisions(405);
   h_all_prefit__54->GetYaxis()->SetLabelFont(42);
   h_all_prefit__54->GetYaxis()->SetLabelOffset(0.007);
   h_all_prefit__54->GetYaxis()->SetTitleSize(0.05);
   h_all_prefit__54->GetYaxis()->SetTickLength(0.025);
   h_all_prefit__54->GetYaxis()->SetTitleOffset(1.05);
   h_all_prefit__54->GetYaxis()->SetTitleFont(42);
   h_all_prefit__54->GetZaxis()->SetNdivisions(405);
   h_all_prefit__54->GetZaxis()->SetLabelFont(42);
   h_all_prefit__54->GetZaxis()->SetLabelOffset(0.007);
   h_all_prefit__54->GetZaxis()->SetTitleSize(0.05);
   h_all_prefit__54->GetZaxis()->SetTickLength(0.025);
   h_all_prefit__54->GetZaxis()->SetTitleFont(42);
   h_all_prefit__54->Draw("histsame");
   Double_t xAxis60[5] = {25, 75, 100, 150, 600}; 
   
   TH1F *dimuon_data__55 = new TH1F("dimuon_data__55","base",4, xAxis60);
   dimuon_data__55->SetBinContent(1,2.22);
   dimuon_data__55->SetBinContent(2,0.88);
   dimuon_data__55->SetBinContent(3,0.78);
   dimuon_data__55->SetBinContent(4,0.06);
   dimuon_data__55->SetBinError(1,0.2107131);
   dimuon_data__55->SetBinError(2,0.1876166);
   dimuon_data__55->SetBinError(3,0.1249);
   dimuon_data__55->SetBinError(4,0.01154701);
   dimuon_data__55->SetEntries(162.835);
   dimuon_data__55->SetMarkerStyle(20);
   dimuon_data__55->SetMarkerSize(1.2);
   dimuon_data__55->GetXaxis()->SetTitle("min(999.9999,fjmass)");
   dimuon_data__55->GetXaxis()->SetLabelFont(42);
   dimuon_data__55->GetXaxis()->SetLabelSize(0.035);
   dimuon_data__55->GetXaxis()->SetTitleSize(0.035);
   dimuon_data__55->GetXaxis()->SetTitleFont(42);
   dimuon_data__55->GetYaxis()->SetLabelFont(42);
   dimuon_data__55->GetYaxis()->SetLabelSize(0.035);
   dimuon_data__55->GetYaxis()->SetTitleSize(0.035);
   dimuon_data__55->GetYaxis()->SetTitleFont(42);
   dimuon_data__55->GetZaxis()->SetLabelFont(42);
   dimuon_data__55->GetZaxis()->SetLabelSize(0.035);
   dimuon_data__55->GetZaxis()->SetTitleSize(0.035);
   dimuon_data__55->GetZaxis()->SetTitleFont(42);
   dimuon_data__55->Draw("epsame e0");
   
   TLegend *leg = new TLegend(0.55,0.6966667,0.88,0.93,NULL,"brNDC");
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
   TLatex *   tex = new TLatex(0.16,0.825,"Dimuon CR");
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
   Double_t xAxis61[5] = {25, 75, 100, 150, 600}; 
   
   TH1F *dummy_copy__56 = new TH1F("dummy_copy__56","h_all_prefit",4, xAxis61);
   dummy_copy__56->SetBinContent(1,2.510795);
   dummy_copy__56->SetBinContent(2,0.8966932);
   dummy_copy__56->SetBinContent(3,0.5758978);
   dummy_copy__56->SetBinContent(4,0.06621879);
   dummy_copy__56->SetBinError(1,0.152504);
   dummy_copy__56->SetBinError(2,0.06499555);
   dummy_copy__56->SetBinError(3,0.04192333);
   dummy_copy__56->SetBinError(4,0.005414395);
   dummy_copy__56->SetMinimum(7e-05);
   dummy_copy__56->SetMaximum(125.5397);
   dummy_copy__56->SetEntries(16);
   dummy_copy__56->SetDirectory(0);
   dummy_copy__56->SetLineColor(0);
   dummy_copy__56->SetLineStyle(0);
   dummy_copy__56->SetLineWidth(0);
   dummy_copy__56->SetMarkerColor(0);
   dummy_copy__56->SetMarkerSize(0);
   dummy_copy__56->GetXaxis()->SetNdivisions(405);
   dummy_copy__56->GetXaxis()->SetLabelFont(42);
   dummy_copy__56->GetXaxis()->SetLabelOffset(0.007);
   dummy_copy__56->GetXaxis()->SetLabelSize(0);
   dummy_copy__56->GetXaxis()->SetTitleSize(0);
   dummy_copy__56->GetXaxis()->SetTickLength(0.025);
   dummy_copy__56->GetXaxis()->SetTitleOffset(0.9);
   dummy_copy__56->GetXaxis()->SetTitleFont(42);
   dummy_copy__56->GetYaxis()->SetTitle("Events / GeV");
   dummy_copy__56->GetYaxis()->SetNdivisions(405);
   dummy_copy__56->GetYaxis()->SetLabelFont(42);
   dummy_copy__56->GetYaxis()->SetLabelOffset(0.007);
   dummy_copy__56->GetYaxis()->SetTitleSize(0.05);
   dummy_copy__56->GetYaxis()->SetTickLength(0.025);
   dummy_copy__56->GetYaxis()->SetTitleOffset(1.21);
   dummy_copy__56->GetYaxis()->SetTitleFont(42);
   dummy_copy__56->GetZaxis()->SetNdivisions(405);
   dummy_copy__56->GetZaxis()->SetLabelFont(42);
   dummy_copy__56->GetZaxis()->SetLabelOffset(0.007);
   dummy_copy__56->GetZaxis()->SetTitleSize(0.05);
   dummy_copy__56->GetZaxis()->SetTickLength(0.025);
   dummy_copy__56->GetZaxis()->SetTitleFont(42);
   dummy_copy__56->Draw("sameaxis");
  
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
   Double_t xAxis62[5] = {25, 75, 100, 150, 600}; 
   
   TH1F *dummy2__57 = new TH1F("dummy2__57","dummy2",4, xAxis62);
   dummy2__57->SetBinContent(1,1);
   dummy2__57->SetBinContent(2,1);
   dummy2__57->SetBinContent(3,1);
   dummy2__57->SetMinimum(0.1);
   dummy2__57->SetMaximum(2.1);
   dummy2__57->SetEntries(3);
   dummy2__57->SetLineColor(0);
   dummy2__57->SetLineStyle(0);
   dummy2__57->SetLineWidth(0);
   dummy2__57->SetMarkerColor(0);
   dummy2__57->SetMarkerSize(0);
   dummy2__57->GetXaxis()->SetTitle("Fatjet m_{SD} (GeV)");
   dummy2__57->GetXaxis()->SetLabelFont(42);
   dummy2__57->GetXaxis()->SetLabelOffset(0.007);
   dummy2__57->GetXaxis()->SetTitleSize(0.05);
   dummy2__57->GetXaxis()->SetTickLength(0.025);
   dummy2__57->GetXaxis()->SetTitleOffset(0.9);
   dummy2__57->GetXaxis()->SetTitleFont(42);
   dummy2__57->GetYaxis()->SetTitle("Data / Pred.");
   dummy2__57->GetYaxis()->CenterTitle(true);
   dummy2__57->GetYaxis()->SetNdivisions(5);
   dummy2__57->GetYaxis()->SetLabelFont(42);
   dummy2__57->GetYaxis()->SetLabelOffset(0.007);
   dummy2__57->GetYaxis()->SetLabelSize(0.03);
   dummy2__57->GetYaxis()->SetTickLength(0.025);
   dummy2__57->GetYaxis()->SetTitleOffset(1.5);
   dummy2__57->GetYaxis()->SetTitleFont(42);
   dummy2__57->GetZaxis()->SetNdivisions(405);
   dummy2__57->GetZaxis()->SetLabelFont(42);
   dummy2__57->GetZaxis()->SetLabelOffset(0.007);
   dummy2__57->GetZaxis()->SetTitleSize(0.05);
   dummy2__57->GetZaxis()->SetTickLength(0.025);
   dummy2__57->GetZaxis()->SetTitleFont(42);
   dummy2__57->Draw("hist");
   Double_t xAxis63[5] = {25, 75, 100, 150, 600}; 
   
   TH1F *total_background__58 = new TH1F("total_background__58","Total background in mass0_zmm",4, xAxis63);
   total_background__58->SetBinContent(1,1);
   total_background__58->SetBinContent(2,1);
   total_background__58->SetBinContent(3,1);
   total_background__58->SetBinContent(4,1);
   total_background__58->SetBinContent(5,1);
   total_background__58->SetBinError(1,0.04581055);
   total_background__58->SetBinError(2,0.07840925);
   total_background__58->SetBinError(3,0.08101038);
   total_background__58->SetBinError(4,0.07822536);
   total_background__58->SetEntries(21);

   ci = TColor::GetColor("#f4eb99");
   total_background__58->SetFillColor(ci);

   ci = TColor::GetColor("#f4eb99");
   total_background__58->SetLineColor(ci);
   total_background__58->SetMarkerSize(0);
   total_background__58->GetXaxis()->SetTitle("min(999.9999,fjmass)");
   total_background__58->GetXaxis()->SetLabelFont(42);
   total_background__58->GetXaxis()->SetLabelSize(0.035);
   total_background__58->GetXaxis()->SetTitleSize(0.035);
   total_background__58->GetXaxis()->SetTitleFont(42);
   total_background__58->GetYaxis()->SetTitle("Events / ( 143.75 )");
   total_background__58->GetYaxis()->SetLabelFont(42);
   total_background__58->GetYaxis()->SetLabelSize(0.035);
   total_background__58->GetYaxis()->SetTitleSize(0.035);
   total_background__58->GetYaxis()->SetTitleFont(42);
   total_background__58->GetZaxis()->SetLabelFont(42);
   total_background__58->GetZaxis()->SetLabelSize(0.035);
   total_background__58->GetZaxis()->SetTitleSize(0.035);
   total_background__58->GetZaxis()->SetTitleFont(42);
   total_background__58->Draw("e2same");
   
   TF1 *f15 = new TF1("f1","1",-5000,5000);
   f15->SetFillColor(19);
   f15->SetFillStyle(0);
   f15->SetLineWidth(2);
   f15->SetLineStyle(2);
   f15->GetXaxis()->SetNdivisions(405);
   f15->GetXaxis()->SetLabelFont(42);
   f15->GetXaxis()->SetLabelOffset(0.007);
   f15->GetXaxis()->SetTitleSize(0.05);
   f15->GetXaxis()->SetTickLength(0.025);
   f15->GetXaxis()->SetTitleOffset(0.9);
   f15->GetXaxis()->SetTitleFont(42);
   f15->GetYaxis()->SetNdivisions(405);
   f15->GetYaxis()->SetLabelFont(42);
   f15->GetYaxis()->SetLabelOffset(0.007);
   f15->GetYaxis()->SetTitleSize(0.05);
   f15->GetYaxis()->SetTickLength(0.025);
   f15->GetYaxis()->SetTitleOffset(1.05);
   f15->GetYaxis()->SetTitleFont(42);
   f15->Draw("same");
   
   Double_t _fx3009[4] = {
   50,
   87.5,
   125,
   375};
   Double_t _fy3009[4] = {
   0.8841822,
   0.9813836,
   1.354407,
   0.9060872};
   Double_t _felx3009[4] = {
   25,
   12.5,
   25,
   225};
   Double_t _fely3009[4] = {
   0.08392286,
   0.2092317,
   0.2168787,
   0.1743766};
   Double_t _fehx3009[4] = {
   25,
   12.5,
   25,
   225};
   Double_t _fehy3009[4] = {
   0.08392286,
   0.2092317,
   0.2168787,
   0.1743766};
   TGraphAsymmErrors *grae = new TGraphAsymmErrors(4,_fx3009,_fy3009,_felx3009,_fehx3009,_fely3009,_fehy3009);
   grae->SetName("");
   grae->SetTitle("");
   grae->SetFillColor(1);
   grae->SetLineColor(2);
   grae->SetLineStyle(7);
   grae->SetMarkerColor(2);
   grae->SetMarkerStyle(24);
   
   TH1F *Graph_Graph3009 = new TH1F("Graph_Graph3009","",100,0,657.5);
   Graph_Graph3009->SetMinimum(0.6477531);
   Graph_Graph3009->SetMaximum(1.655243);
   Graph_Graph3009->SetDirectory(0);
   Graph_Graph3009->SetStats(0);
   Graph_Graph3009->SetLineStyle(0);
   Graph_Graph3009->GetXaxis()->SetNdivisions(405);
   Graph_Graph3009->GetXaxis()->SetLabelFont(42);
   Graph_Graph3009->GetXaxis()->SetLabelOffset(0.007);
   Graph_Graph3009->GetXaxis()->SetTitleSize(0.05);
   Graph_Graph3009->GetXaxis()->SetTickLength(0.025);
   Graph_Graph3009->GetXaxis()->SetTitleOffset(0.9);
   Graph_Graph3009->GetXaxis()->SetTitleFont(42);
   Graph_Graph3009->GetYaxis()->SetNdivisions(405);
   Graph_Graph3009->GetYaxis()->SetLabelFont(42);
   Graph_Graph3009->GetYaxis()->SetLabelOffset(0.007);
   Graph_Graph3009->GetYaxis()->SetTitleSize(0.05);
   Graph_Graph3009->GetYaxis()->SetTickLength(0.025);
   Graph_Graph3009->GetYaxis()->SetTitleOffset(1.05);
   Graph_Graph3009->GetYaxis()->SetTitleFont(42);
   Graph_Graph3009->GetZaxis()->SetNdivisions(405);
   Graph_Graph3009->GetZaxis()->SetLabelFont(42);
   Graph_Graph3009->GetZaxis()->SetLabelOffset(0.007);
   Graph_Graph3009->GetZaxis()->SetTitleSize(0.05);
   Graph_Graph3009->GetZaxis()->SetTickLength(0.025);
   Graph_Graph3009->GetZaxis()->SetTitleFont(42);
   grae->SetHistogram(Graph_Graph3009);
   
   grae->Draw("ep 0");
   
   Double_t _fx3010[4] = {
   50,
   87.5,
   125,
   375};
   Double_t _fy3010[4] = {
   0.9652507,
   0.968259,
   1.143391,
   0.8585211};
   Double_t _felx3010[4] = {
   25,
   12.5,
   25,
   225};
   Double_t _fely3010[4] = {
   0.09161754,
   0.2064335,
   0.1830891,
   0.1652225};
   Double_t _fehx3010[4] = {
   25,
   12.5,
   25,
   225};
   Double_t _fehy3010[4] = {
   0.09161754,
   0.2064335,
   0.1830891,
   0.1652225};
   grae = new TGraphAsymmErrors(4,_fx3010,_fy3010,_felx3010,_fehx3010,_fely3010,_fehy3010);
   grae->SetName("");
   grae->SetTitle("");
   grae->SetFillColor(1);
   grae->SetMarkerStyle(20);
   
   TH1F *Graph_Graph3010 = new TH1F("Graph_Graph3010","",100,0,657.5);
   Graph_Graph3010->SetMinimum(0.6299804);
   Graph_Graph3010->SetMaximum(1.389799);
   Graph_Graph3010->SetDirectory(0);
   Graph_Graph3010->SetStats(0);
   Graph_Graph3010->SetLineStyle(0);
   Graph_Graph3010->GetXaxis()->SetNdivisions(405);
   Graph_Graph3010->GetXaxis()->SetLabelFont(42);
   Graph_Graph3010->GetXaxis()->SetLabelOffset(0.007);
   Graph_Graph3010->GetXaxis()->SetTitleSize(0.05);
   Graph_Graph3010->GetXaxis()->SetTickLength(0.025);
   Graph_Graph3010->GetXaxis()->SetTitleOffset(0.9);
   Graph_Graph3010->GetXaxis()->SetTitleFont(42);
   Graph_Graph3010->GetYaxis()->SetNdivisions(405);
   Graph_Graph3010->GetYaxis()->SetLabelFont(42);
   Graph_Graph3010->GetYaxis()->SetLabelOffset(0.007);
   Graph_Graph3010->GetYaxis()->SetTitleSize(0.05);
   Graph_Graph3010->GetYaxis()->SetTickLength(0.025);
   Graph_Graph3010->GetYaxis()->SetTitleOffset(1.05);
   Graph_Graph3010->GetYaxis()->SetTitleFont(42);
   Graph_Graph3010->GetZaxis()->SetNdivisions(405);
   Graph_Graph3010->GetZaxis()->SetLabelFont(42);
   Graph_Graph3010->GetZaxis()->SetLabelOffset(0.007);
   Graph_Graph3010->GetZaxis()->SetTitleSize(0.05);
   Graph_Graph3010->GetZaxis()->SetTickLength(0.025);
   Graph_Graph3010->GetZaxis()->SetTitleFont(42);
   grae->SetHistogram(Graph_Graph3010);
   
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
