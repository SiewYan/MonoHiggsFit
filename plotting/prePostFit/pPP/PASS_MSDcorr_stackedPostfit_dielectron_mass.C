void PASS_MSDcorr_stackedPostfit_dielectron_mass()
{
//=========Macro generated from canvas: c/c
//=========  (Tue Feb 13 18:07:03 2018) by ROOT version6.06/09
   TCanvas *c = new TCanvas("c", "c",0,0,720,800);
   gStyle->SetOptFit(1);
   gStyle->SetOptStat(0);
   gStyle->SetOptTitle(0);
   c->SetHighLightColor(2);
   c->Range(-60.18518,-6.927393,649.6914,2.314244);
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
   Double_t xAxis127[5] = {25, 75, 100, 150, 600}; 
   
   TH1F *dummy__117 = new TH1F("dummy__117","h_all_prefit",4, xAxis127);
   dummy__117->SetBinContent(1,1.472842);
   dummy__117->SetBinContent(2,0.4576227);
   dummy__117->SetBinContent(3,0.2093843);
   dummy__117->SetBinContent(4,0.028594);
   dummy__117->SetBinError(1,0.1281447);
   dummy__117->SetBinError(2,0.05491613);
   dummy__117->SetBinError(3,0.02983517);
   dummy__117->SetBinError(4,0.003043244);
   dummy__117->SetMinimum(7e-05);
   dummy__117->SetMaximum(73.64209);
   dummy__117->SetEntries(16);
   dummy__117->SetLineColor(0);
   dummy__117->SetLineStyle(0);
   dummy__117->SetLineWidth(0);
   dummy__117->SetMarkerColor(0);
   dummy__117->SetMarkerSize(0);
   dummy__117->GetXaxis()->SetNdivisions(405);
   dummy__117->GetXaxis()->SetLabelFont(42);
   dummy__117->GetXaxis()->SetLabelOffset(0.007);
   dummy__117->GetXaxis()->SetLabelSize(0);
   dummy__117->GetXaxis()->SetTitleSize(0);
   dummy__117->GetXaxis()->SetTickLength(0.025);
   dummy__117->GetXaxis()->SetTitleOffset(0.9);
   dummy__117->GetXaxis()->SetTitleFont(42);
   dummy__117->GetYaxis()->SetTitle("Events / GeV");
   dummy__117->GetYaxis()->SetNdivisions(405);
   dummy__117->GetYaxis()->SetLabelFont(42);
   dummy__117->GetYaxis()->SetLabelOffset(0.007);
   dummy__117->GetYaxis()->SetTitleSize(0.05);
   dummy__117->GetYaxis()->SetTickLength(0.025);
   dummy__117->GetYaxis()->SetTitleOffset(1.21);
   dummy__117->GetYaxis()->SetTitleFont(42);
   dummy__117->GetZaxis()->SetNdivisions(405);
   dummy__117->GetZaxis()->SetLabelFont(42);
   dummy__117->GetZaxis()->SetLabelOffset(0.007);
   dummy__117->GetZaxis()->SetTitleSize(0.05);
   dummy__117->GetZaxis()->SetTickLength(0.025);
   dummy__117->GetZaxis()->SetTitleFont(42);
   dummy__117->Draw("");
   
   THStack *h_stack_postfit = new THStack();
   h_stack_postfit->SetName("h_stack_postfit");
   h_stack_postfit->SetTitle("h_stack_postfit");
   Double_t xAxis128[5] = {25, 75, 100, 150, 600}; 
   
   TH1F *h_stack_postfit_stack_11 = new TH1F("h_stack_postfit_stack_11","h_stack_postfit",4, xAxis128);
   h_stack_postfit_stack_11->SetMinimum(5.923045e-10);
   h_stack_postfit_stack_11->SetMaximum(3.764);
   h_stack_postfit_stack_11->SetDirectory(0);
   h_stack_postfit_stack_11->SetStats(0);
   h_stack_postfit_stack_11->SetLineStyle(0);
   h_stack_postfit_stack_11->GetXaxis()->SetNdivisions(405);
   h_stack_postfit_stack_11->GetXaxis()->SetLabelFont(42);
   h_stack_postfit_stack_11->GetXaxis()->SetLabelOffset(0.007);
   h_stack_postfit_stack_11->GetXaxis()->SetTitleSize(0.05);
   h_stack_postfit_stack_11->GetXaxis()->SetTickLength(0.025);
   h_stack_postfit_stack_11->GetXaxis()->SetTitleOffset(0.9);
   h_stack_postfit_stack_11->GetXaxis()->SetTitleFont(42);
   h_stack_postfit_stack_11->GetYaxis()->SetNdivisions(405);
   h_stack_postfit_stack_11->GetYaxis()->SetLabelFont(42);
   h_stack_postfit_stack_11->GetYaxis()->SetLabelOffset(0.007);
   h_stack_postfit_stack_11->GetYaxis()->SetTitleSize(0.05);
   h_stack_postfit_stack_11->GetYaxis()->SetTickLength(0.025);
   h_stack_postfit_stack_11->GetYaxis()->SetTitleOffset(1.05);
   h_stack_postfit_stack_11->GetYaxis()->SetTitleFont(42);
   h_stack_postfit_stack_11->GetZaxis()->SetNdivisions(405);
   h_stack_postfit_stack_11->GetZaxis()->SetLabelFont(42);
   h_stack_postfit_stack_11->GetZaxis()->SetLabelOffset(0.007);
   h_stack_postfit_stack_11->GetZaxis()->SetTitleSize(0.05);
   h_stack_postfit_stack_11->GetZaxis()->SetTickLength(0.025);
   h_stack_postfit_stack_11->GetZaxis()->SetTitleFont(42);
   h_stack_postfit->SetHistogram(h_stack_postfit_stack_11);
   
   Double_t xAxis129[5] = {25, 75, 100, 150, 600}; 
   
   TH1F *dibosons__118 = new TH1F("dibosons__118","dibosons in mass0_zee",4, xAxis129);
   dibosons__118->SetBinContent(1,0.03254957);
   dibosons__118->SetBinContent(2,0.09043523);
   dibosons__118->SetBinContent(3,3.888359e-09);
   dibosons__118->SetBinContent(4,3.888359e-09);
   dibosons__118->SetBinError(1,0.003236556);
   dibosons__118->SetBinError(2,0.008999097);
   dibosons__118->SetBinError(3,3.867674e-10);
   dibosons__118->SetBinError(4,3.867674e-10);
   dibosons__118->SetEntries(4);

   Int_t ci;      // for color index setting
   TColor *color; // for color definition with alpha
   ci = TColor::GetColor("#ffff99");
   dibosons__118->SetFillColor(ci);
   dibosons__118->GetXaxis()->SetTitle("min(999.9999,fjmass)");
   dibosons__118->GetXaxis()->SetLabelFont(42);
   dibosons__118->GetXaxis()->SetLabelSize(0.035);
   dibosons__118->GetXaxis()->SetTitleSize(0.035);
   dibosons__118->GetXaxis()->SetTitleFont(42);
   dibosons__118->GetYaxis()->SetTitle("Events / ( 143.75 )");
   dibosons__118->GetYaxis()->SetLabelFont(42);
   dibosons__118->GetYaxis()->SetLabelSize(0.035);
   dibosons__118->GetYaxis()->SetTitleSize(0.035);
   dibosons__118->GetYaxis()->SetTitleFont(42);
   dibosons__118->GetZaxis()->SetLabelFont(42);
   dibosons__118->GetZaxis()->SetLabelSize(0.035);
   dibosons__118->GetZaxis()->SetTitleSize(0.035);
   dibosons__118->GetZaxis()->SetTitleFont(42);
   h_stack_postfit->Add(dibosons,"");
   Double_t xAxis130[5] = {25, 75, 100, 150, 600}; 
   
   TH1F *stop__119 = new TH1F("stop__119","stop in mass0_zee",4, xAxis130);
   stop__119->SetBinContent(1,0.000329879);
   stop__119->SetBinContent(2,0.01170457);
   stop__119->SetBinContent(3,0.01368737);
   stop__119->SetBinContent(4,0.0003707273);
   stop__119->SetBinError(1,3.972756e-05);
   stop__119->SetBinError(2,0.001394769);
   stop__119->SetBinError(3,0.001634177);
   stop__119->SetBinError(4,4.416384e-05);
   stop__119->SetEntries(4);

   ci = TColor::GetColor("#ff9999");
   stop__119->SetFillColor(ci);
   stop__119->GetXaxis()->SetTitle("min(999.9999,fjmass)");
   stop__119->GetXaxis()->SetLabelFont(42);
   stop__119->GetXaxis()->SetLabelSize(0.035);
   stop__119->GetXaxis()->SetTitleSize(0.035);
   stop__119->GetXaxis()->SetTitleFont(42);
   stop__119->GetYaxis()->SetTitle("Events / ( 143.75 )");
   stop__119->GetYaxis()->SetLabelFont(42);
   stop__119->GetYaxis()->SetLabelSize(0.035);
   stop__119->GetYaxis()->SetTitleSize(0.035);
   stop__119->GetYaxis()->SetTitleFont(42);
   stop__119->GetZaxis()->SetLabelFont(42);
   stop__119->GetZaxis()->SetLabelSize(0.035);
   stop__119->GetZaxis()->SetTitleSize(0.035);
   stop__119->GetZaxis()->SetTitleFont(42);
   h_stack_postfit->Add(stop,"");
   Double_t xAxis131[5] = {25, 75, 100, 150, 600}; 
   
   TH1F *ttbar__120 = new TH1F("ttbar__120","ttbar in mass0_zee",4, xAxis131);
   ttbar__120->SetBinContent(1,0.01405607);
   ttbar__120->SetBinContent(2,0.03208727);
   ttbar__120->SetBinContent(3,0.01548511);
   ttbar__120->SetBinContent(4,0.000982115);
   ttbar__120->SetBinError(1,0.0003312283);
   ttbar__120->SetBinError(2,0.0007561297);
   ttbar__120->SetBinError(3,0.0003649033);
   ttbar__120->SetBinError(4,2.314333e-05);
   ttbar__120->SetEntries(4);

   ci = TColor::GetColor("#ffcc66");
   ttbar__120->SetFillColor(ci);
   ttbar__120->GetXaxis()->SetTitle("min(999.9999,fjmass)");
   ttbar__120->GetXaxis()->SetLabelFont(42);
   ttbar__120->GetXaxis()->SetLabelSize(0.035);
   ttbar__120->GetXaxis()->SetTitleSize(0.035);
   ttbar__120->GetXaxis()->SetTitleFont(42);
   ttbar__120->GetYaxis()->SetTitle("Events / ( 143.75 )");
   ttbar__120->GetYaxis()->SetLabelFont(42);
   ttbar__120->GetYaxis()->SetLabelSize(0.035);
   ttbar__120->GetYaxis()->SetTitleSize(0.035);
   ttbar__120->GetYaxis()->SetTitleFont(42);
   ttbar__120->GetZaxis()->SetLabelFont(42);
   ttbar__120->GetZaxis()->SetLabelSize(0.035);
   ttbar__120->GetZaxis()->SetTitleSize(0.035);
   ttbar__120->GetZaxis()->SetTitleFont(42);
   h_stack_postfit->Add(ttbar,"");
   Double_t xAxis132[5] = {25, 75, 100, 150, 600}; 
   
   TH1F *zll__121 = new TH1F("zll__121","zll in mass0_zee",4, xAxis132);
   zll__121->SetBinContent(1,1.305713);
   zll__121->SetBinContent(2,0.3309936);
   zll__121->SetBinContent(3,0.2558417);
   zll__121->SetBinContent(4,0.02905111);
   zll__121->SetBinError(1,0.07392495);
   zll__121->SetBinError(2,0.05700857);
   zll__121->SetBinError(3,0.04500121);
   zll__121->SetBinError(4,0.00313864);
   zll__121->SetEntries(4);

   ci = TColor::GetColor("#99ffff");
   zll__121->SetFillColor(ci);
   zll__121->GetXaxis()->SetTitle("min(999.9999,fjmass)");
   zll__121->GetXaxis()->SetLabelFont(42);
   zll__121->GetXaxis()->SetLabelSize(0.035);
   zll__121->GetXaxis()->SetTitleSize(0.035);
   zll__121->GetXaxis()->SetTitleFont(42);
   zll__121->GetYaxis()->SetTitle("Events / ( 143.75 )");
   zll__121->GetYaxis()->SetLabelFont(42);
   zll__121->GetYaxis()->SetLabelSize(0.035);
   zll__121->GetYaxis()->SetTitleSize(0.035);
   zll__121->GetYaxis()->SetTitleFont(42);
   zll__121->GetZaxis()->SetLabelFont(42);
   zll__121->GetZaxis()->SetLabelSize(0.035);
   zll__121->GetZaxis()->SetTitleSize(0.035);
   zll__121->GetZaxis()->SetTitleFont(42);
   h_stack_postfit->Add(zll,"");
   h_stack_postfit->Draw("hist same");
   Double_t xAxis133[5] = {25, 75, 100, 150, 600}; 
   
   TH1F *h_all_prefit__122 = new TH1F("h_all_prefit__122","h_all_prefit",4, xAxis133);
   h_all_prefit__122->SetBinContent(1,1.472842);
   h_all_prefit__122->SetBinContent(2,0.4576227);
   h_all_prefit__122->SetBinContent(3,0.2093843);
   h_all_prefit__122->SetBinContent(4,0.028594);
   h_all_prefit__122->SetBinError(1,0.1281447);
   h_all_prefit__122->SetBinError(2,0.05491613);
   h_all_prefit__122->SetBinError(3,0.02983517);
   h_all_prefit__122->SetBinError(4,0.003043244);
   h_all_prefit__122->SetEntries(16);
   h_all_prefit__122->SetLineColor(2);
   h_all_prefit__122->SetLineStyle(7);
   h_all_prefit__122->SetLineWidth(2);
   h_all_prefit__122->GetXaxis()->SetNdivisions(405);
   h_all_prefit__122->GetXaxis()->SetLabelFont(42);
   h_all_prefit__122->GetXaxis()->SetLabelOffset(0.007);
   h_all_prefit__122->GetXaxis()->SetTitleSize(0.05);
   h_all_prefit__122->GetXaxis()->SetTickLength(0.025);
   h_all_prefit__122->GetXaxis()->SetTitleOffset(0.9);
   h_all_prefit__122->GetXaxis()->SetTitleFont(42);
   h_all_prefit__122->GetYaxis()->SetNdivisions(405);
   h_all_prefit__122->GetYaxis()->SetLabelFont(42);
   h_all_prefit__122->GetYaxis()->SetLabelOffset(0.007);
   h_all_prefit__122->GetYaxis()->SetTitleSize(0.05);
   h_all_prefit__122->GetYaxis()->SetTickLength(0.025);
   h_all_prefit__122->GetYaxis()->SetTitleOffset(1.05);
   h_all_prefit__122->GetYaxis()->SetTitleFont(42);
   h_all_prefit__122->GetZaxis()->SetNdivisions(405);
   h_all_prefit__122->GetZaxis()->SetLabelFont(42);
   h_all_prefit__122->GetZaxis()->SetLabelOffset(0.007);
   h_all_prefit__122->GetZaxis()->SetTitleSize(0.05);
   h_all_prefit__122->GetZaxis()->SetTickLength(0.025);
   h_all_prefit__122->GetZaxis()->SetTitleFont(42);
   h_all_prefit__122->Draw("histsame");
   Double_t xAxis134[5] = {25, 75, 100, 150, 600}; 
   
   TH1F *dielectron_data__123 = new TH1F("dielectron_data__123","base",4, xAxis134);
   dielectron_data__123->SetBinContent(1,1.36);
   dielectron_data__123->SetBinContent(2,0.36);
   dielectron_data__123->SetBinContent(3,0.38);
   dielectron_data__123->SetBinContent(4,0.02222222);
   dielectron_data__123->SetBinError(1,0.1649242);
   dielectron_data__123->SetBinError(2,0.12);
   dielectron_data__123->SetBinError(3,0.08717798);
   dielectron_data__123->SetBinError(4,0.007027284);
   dielectron_data__123->SetEntries(91.44942);
   dielectron_data__123->SetMarkerStyle(20);
   dielectron_data__123->SetMarkerSize(1.2);
   dielectron_data__123->GetXaxis()->SetTitle("min(999.9999,fjmass)");
   dielectron_data__123->GetXaxis()->SetLabelFont(42);
   dielectron_data__123->GetXaxis()->SetLabelSize(0.035);
   dielectron_data__123->GetXaxis()->SetTitleSize(0.035);
   dielectron_data__123->GetXaxis()->SetTitleFont(42);
   dielectron_data__123->GetYaxis()->SetLabelFont(42);
   dielectron_data__123->GetYaxis()->SetLabelSize(0.035);
   dielectron_data__123->GetYaxis()->SetTitleSize(0.035);
   dielectron_data__123->GetYaxis()->SetTitleFont(42);
   dielectron_data__123->GetZaxis()->SetLabelFont(42);
   dielectron_data__123->GetZaxis()->SetLabelSize(0.035);
   dielectron_data__123->GetZaxis()->SetTitleSize(0.035);
   dielectron_data__123->GetZaxis()->SetTitleFont(42);
   dielectron_data__123->Draw("epsame e0");
   
   TLegend *leg = new TLegend(0.55,0.6966667,0.88,0.93,NULL,"brNDC");
   leg->SetBorderSize(0);
   leg->SetTextSize(0.035);
   leg->SetLineColor(0);
   leg->SetLineStyle(1);
   leg->SetLineWidth(1);
   leg->SetFillColor(0);
   leg->SetFillStyle(0);
   TLegendEntry *entry=leg->AddEntry("dielectron_data","Data","elp");
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
   TLatex *   tex = new TLatex(0.16,0.825,"Dielectron CR");
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
   Double_t xAxis135[5] = {25, 75, 100, 150, 600}; 
   
   TH1F *dummy_copy__124 = new TH1F("dummy_copy__124","h_all_prefit",4, xAxis135);
   dummy_copy__124->SetBinContent(1,1.472842);
   dummy_copy__124->SetBinContent(2,0.4576227);
   dummy_copy__124->SetBinContent(3,0.2093843);
   dummy_copy__124->SetBinContent(4,0.028594);
   dummy_copy__124->SetBinError(1,0.1281447);
   dummy_copy__124->SetBinError(2,0.05491613);
   dummy_copy__124->SetBinError(3,0.02983517);
   dummy_copy__124->SetBinError(4,0.003043244);
   dummy_copy__124->SetMinimum(7e-05);
   dummy_copy__124->SetMaximum(73.64209);
   dummy_copy__124->SetEntries(16);
   dummy_copy__124->SetDirectory(0);
   dummy_copy__124->SetLineColor(0);
   dummy_copy__124->SetLineStyle(0);
   dummy_copy__124->SetLineWidth(0);
   dummy_copy__124->SetMarkerColor(0);
   dummy_copy__124->SetMarkerSize(0);
   dummy_copy__124->GetXaxis()->SetNdivisions(405);
   dummy_copy__124->GetXaxis()->SetLabelFont(42);
   dummy_copy__124->GetXaxis()->SetLabelOffset(0.007);
   dummy_copy__124->GetXaxis()->SetLabelSize(0);
   dummy_copy__124->GetXaxis()->SetTitleSize(0);
   dummy_copy__124->GetXaxis()->SetTickLength(0.025);
   dummy_copy__124->GetXaxis()->SetTitleOffset(0.9);
   dummy_copy__124->GetXaxis()->SetTitleFont(42);
   dummy_copy__124->GetYaxis()->SetTitle("Events / GeV");
   dummy_copy__124->GetYaxis()->SetNdivisions(405);
   dummy_copy__124->GetYaxis()->SetLabelFont(42);
   dummy_copy__124->GetYaxis()->SetLabelOffset(0.007);
   dummy_copy__124->GetYaxis()->SetTitleSize(0.05);
   dummy_copy__124->GetYaxis()->SetTickLength(0.025);
   dummy_copy__124->GetYaxis()->SetTitleOffset(1.21);
   dummy_copy__124->GetYaxis()->SetTitleFont(42);
   dummy_copy__124->GetZaxis()->SetNdivisions(405);
   dummy_copy__124->GetZaxis()->SetLabelFont(42);
   dummy_copy__124->GetZaxis()->SetLabelOffset(0.007);
   dummy_copy__124->GetZaxis()->SetTitleSize(0.05);
   dummy_copy__124->GetZaxis()->SetTickLength(0.025);
   dummy_copy__124->GetZaxis()->SetTitleFont(42);
   dummy_copy__124->Draw("sameaxis");
  
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
   Double_t xAxis136[5] = {25, 75, 100, 150, 600}; 
   
   TH1F *dummy2__125 = new TH1F("dummy2__125","dummy2",4, xAxis136);
   dummy2__125->SetBinContent(1,1);
   dummy2__125->SetBinContent(2,1);
   dummy2__125->SetBinContent(3,1);
   dummy2__125->SetMinimum(0.1);
   dummy2__125->SetMaximum(2.1);
   dummy2__125->SetEntries(3);
   dummy2__125->SetLineColor(0);
   dummy2__125->SetLineStyle(0);
   dummy2__125->SetLineWidth(0);
   dummy2__125->SetMarkerColor(0);
   dummy2__125->SetMarkerSize(0);
   dummy2__125->GetXaxis()->SetTitle("Fatjet m_{SD} (GeV)");
   dummy2__125->GetXaxis()->SetLabelFont(42);
   dummy2__125->GetXaxis()->SetLabelOffset(0.007);
   dummy2__125->GetXaxis()->SetTitleSize(0.05);
   dummy2__125->GetXaxis()->SetTickLength(0.025);
   dummy2__125->GetXaxis()->SetTitleOffset(0.9);
   dummy2__125->GetXaxis()->SetTitleFont(42);
   dummy2__125->GetYaxis()->SetTitle("Data / Pred.");
   dummy2__125->GetYaxis()->CenterTitle(true);
   dummy2__125->GetYaxis()->SetNdivisions(5);
   dummy2__125->GetYaxis()->SetLabelFont(42);
   dummy2__125->GetYaxis()->SetLabelOffset(0.007);
   dummy2__125->GetYaxis()->SetLabelSize(0.03);
   dummy2__125->GetYaxis()->SetTickLength(0.025);
   dummy2__125->GetYaxis()->SetTitleOffset(1.5);
   dummy2__125->GetYaxis()->SetTitleFont(42);
   dummy2__125->GetZaxis()->SetNdivisions(405);
   dummy2__125->GetZaxis()->SetLabelFont(42);
   dummy2__125->GetZaxis()->SetLabelOffset(0.007);
   dummy2__125->GetZaxis()->SetTitleSize(0.05);
   dummy2__125->GetZaxis()->SetTickLength(0.025);
   dummy2__125->GetZaxis()->SetTitleFont(42);
   dummy2__125->Draw("hist");
   Double_t xAxis137[5] = {25, 75, 100, 150, 600}; 
   
   TH1F *total_background__126 = new TH1F("total_background__126","Total background in mass0_zee",4, xAxis137);
   total_background__126->SetBinContent(1,1);
   total_background__126->SetBinContent(2,1);
   total_background__126->SetBinContent(3,1);
   total_background__126->SetBinContent(4,1);
   total_background__126->SetBinContent(5,1);
   total_background__126->SetBinError(1,0.05457768);
   total_background__126->SetBinError(2,0.1191709);
   total_background__126->SetBinError(3,0.1587032);
   total_background__126->SetBinError(4,0.1032868);
   total_background__126->SetEntries(21);

   ci = TColor::GetColor("#f4eb99");
   total_background__126->SetFillColor(ci);

   ci = TColor::GetColor("#f4eb99");
   total_background__126->SetLineColor(ci);
   total_background__126->SetMarkerSize(0);
   total_background__126->GetXaxis()->SetTitle("min(999.9999,fjmass)");
   total_background__126->GetXaxis()->SetLabelFont(42);
   total_background__126->GetXaxis()->SetLabelSize(0.035);
   total_background__126->GetXaxis()->SetTitleSize(0.035);
   total_background__126->GetXaxis()->SetTitleFont(42);
   total_background__126->GetYaxis()->SetTitle("Events / ( 143.75 )");
   total_background__126->GetYaxis()->SetLabelFont(42);
   total_background__126->GetYaxis()->SetLabelSize(0.035);
   total_background__126->GetYaxis()->SetTitleSize(0.035);
   total_background__126->GetYaxis()->SetTitleFont(42);
   total_background__126->GetZaxis()->SetLabelFont(42);
   total_background__126->GetZaxis()->SetLabelSize(0.035);
   total_background__126->GetZaxis()->SetTitleSize(0.035);
   total_background__126->GetZaxis()->SetTitleFont(42);
   total_background__126->Draw("e2same");
   
   TF1 *f111 = new TF1("f1","1",-5000,5000);
   f111->SetFillColor(19);
   f111->SetFillStyle(0);
   f111->SetLineWidth(2);
   f111->SetLineStyle(2);
   f111->GetXaxis()->SetNdivisions(405);
   f111->GetXaxis()->SetLabelFont(42);
   f111->GetXaxis()->SetLabelOffset(0.007);
   f111->GetXaxis()->SetTitleSize(0.05);
   f111->GetXaxis()->SetTickLength(0.025);
   f111->GetXaxis()->SetTitleOffset(0.9);
   f111->GetXaxis()->SetTitleFont(42);
   f111->GetYaxis()->SetNdivisions(405);
   f111->GetYaxis()->SetLabelFont(42);
   f111->GetYaxis()->SetLabelOffset(0.007);
   f111->GetYaxis()->SetTitleSize(0.05);
   f111->GetYaxis()->SetTickLength(0.025);
   f111->GetYaxis()->SetTitleOffset(1.05);
   f111->GetYaxis()->SetTitleFont(42);
   f111->Draw("same");
   
   Double_t _fx3021[4] = {
   50,
   87.5,
   125,
   375};
   Double_t _fy3021[4] = {
   0.923385,
   0.7866743,
   1.814845,
   0.7771638};
   Double_t _felx3021[4] = {
   25,
   12.5,
   25,
   225};
   Double_t _fely3021[4] = {
   0.1119769,
   0.2622248,
   0.416354,
   0.2457608};
   Double_t _fehx3021[4] = {
   25,
   12.5,
   25,
   225};
   Double_t _fehy3021[4] = {
   0.1119769,
   0.2622248,
   0.416354,
   0.2457608};
   TGraphAsymmErrors *grae = new TGraphAsymmErrors(4,_fx3021,_fy3021,_felx3021,_fehx3021,_fely3021,_fehy3021);
   grae->SetName("");
   grae->SetTitle("");
   grae->SetFillColor(1);
   grae->SetLineColor(2);
   grae->SetLineStyle(7);
   grae->SetMarkerColor(2);
   grae->SetMarkerStyle(24);
   
   TH1F *Graph_Graph3021 = new TH1F("Graph_Graph3021","",100,0,657.5);
   Graph_Graph3021->SetMinimum(0.3537746);
   Graph_Graph3021->SetMaximum(2.401874);
   Graph_Graph3021->SetDirectory(0);
   Graph_Graph3021->SetStats(0);
   Graph_Graph3021->SetLineStyle(0);
   Graph_Graph3021->GetXaxis()->SetNdivisions(405);
   Graph_Graph3021->GetXaxis()->SetLabelFont(42);
   Graph_Graph3021->GetXaxis()->SetLabelOffset(0.007);
   Graph_Graph3021->GetXaxis()->SetTitleSize(0.05);
   Graph_Graph3021->GetXaxis()->SetTickLength(0.025);
   Graph_Graph3021->GetXaxis()->SetTitleOffset(0.9);
   Graph_Graph3021->GetXaxis()->SetTitleFont(42);
   Graph_Graph3021->GetYaxis()->SetNdivisions(405);
   Graph_Graph3021->GetYaxis()->SetLabelFont(42);
   Graph_Graph3021->GetYaxis()->SetLabelOffset(0.007);
   Graph_Graph3021->GetYaxis()->SetTitleSize(0.05);
   Graph_Graph3021->GetYaxis()->SetTickLength(0.025);
   Graph_Graph3021->GetYaxis()->SetTitleOffset(1.05);
   Graph_Graph3021->GetYaxis()->SetTitleFont(42);
   Graph_Graph3021->GetZaxis()->SetNdivisions(405);
   Graph_Graph3021->GetZaxis()->SetLabelFont(42);
   Graph_Graph3021->GetZaxis()->SetLabelOffset(0.007);
   Graph_Graph3021->GetZaxis()->SetTitleSize(0.05);
   Graph_Graph3021->GetZaxis()->SetTickLength(0.025);
   Graph_Graph3021->GetZaxis()->SetTitleFont(42);
   grae->SetHistogram(Graph_Graph3021);
   
   grae->Draw("ep 0");
   
   Double_t _fx3022[4] = {
   50,
   87.5,
   125,
   375};
   Double_t _fy3022[4] = {
   1.005435,
   0.7738263,
   1.333267,
   0.7308991};
   Double_t _felx3022[4] = {
   25,
   12.5,
   25,
   225};
   Double_t _fely3022[4] = {
   0.1219269,
   0.2579421,
   0.3058724,
   0.2311306};
   Double_t _fehx3022[4] = {
   25,
   12.5,
   25,
   225};
   Double_t _fehy3022[4] = {
   0.1219269,
   0.2579421,
   0.3058724,
   0.2311306};
   grae = new TGraphAsymmErrors(4,_fx3022,_fy3022,_felx3022,_fehx3022,_fely3022,_fehy3022);
   grae->SetName("");
   grae->SetTitle("");
   grae->SetFillColor(1);
   grae->SetMarkerStyle(20);
   
   TH1F *Graph_Graph3022 = new TH1F("Graph_Graph3022","",100,0,657.5);
   Graph_Graph3022->SetMinimum(0.3858315);
   Graph_Graph3022->SetMaximum(1.753076);
   Graph_Graph3022->SetDirectory(0);
   Graph_Graph3022->SetStats(0);
   Graph_Graph3022->SetLineStyle(0);
   Graph_Graph3022->GetXaxis()->SetNdivisions(405);
   Graph_Graph3022->GetXaxis()->SetLabelFont(42);
   Graph_Graph3022->GetXaxis()->SetLabelOffset(0.007);
   Graph_Graph3022->GetXaxis()->SetTitleSize(0.05);
   Graph_Graph3022->GetXaxis()->SetTickLength(0.025);
   Graph_Graph3022->GetXaxis()->SetTitleOffset(0.9);
   Graph_Graph3022->GetXaxis()->SetTitleFont(42);
   Graph_Graph3022->GetYaxis()->SetNdivisions(405);
   Graph_Graph3022->GetYaxis()->SetLabelFont(42);
   Graph_Graph3022->GetYaxis()->SetLabelOffset(0.007);
   Graph_Graph3022->GetYaxis()->SetTitleSize(0.05);
   Graph_Graph3022->GetYaxis()->SetTickLength(0.025);
   Graph_Graph3022->GetYaxis()->SetTitleOffset(1.05);
   Graph_Graph3022->GetYaxis()->SetTitleFont(42);
   Graph_Graph3022->GetZaxis()->SetNdivisions(405);
   Graph_Graph3022->GetZaxis()->SetLabelFont(42);
   Graph_Graph3022->GetZaxis()->SetLabelOffset(0.007);
   Graph_Graph3022->GetZaxis()->SetTitleSize(0.05);
   Graph_Graph3022->GetZaxis()->SetTickLength(0.025);
   Graph_Graph3022->GetZaxis()->SetTitleFont(42);
   grae->SetHistogram(Graph_Graph3022);
   
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
