void PASS_MSDcorr_stackedPostfit_singlemuontop_mass()
{
//=========Macro generated from canvas: c/c
//=========  (Tue Feb 13 18:07:02 2018) by ROOT version6.06/09
   TCanvas *c = new TCanvas("c", "c",0,0,720,800);
   gStyle->SetOptFit(1);
   gStyle->SetOptStat(0);
   gStyle->SetOptTitle(0);
   c->SetHighLightColor(2);
   c->Range(-60.18518,-7.448559,649.6914,2.72017);
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
   Double_t xAxis27[5] = {25, 75, 100, 150, 600}; 
   
   TH1F *dummy__25 = new TH1F("dummy__25","h_all_prefit",4, xAxis27);
   dummy__25->SetBinContent(1,2.720376);
   dummy__25->SetBinContent(2,3.38243);
   dummy__25->SetBinContent(3,2.599004);
   dummy__25->SetBinContent(4,0.1038495);
   dummy__25->SetBinError(1,0.2158552);
   dummy__25->SetBinError(2,0.3197089);
   dummy__25->SetBinError(3,0.2058652);
   dummy__25->SetBinError(4,0.01083439);
   dummy__25->SetMinimum(4e-05);
   dummy__25->SetMaximum(169.1215);
   dummy__25->SetEntries(24);
   dummy__25->SetLineColor(0);
   dummy__25->SetLineStyle(0);
   dummy__25->SetLineWidth(0);
   dummy__25->SetMarkerColor(0);
   dummy__25->SetMarkerSize(0);
   dummy__25->GetXaxis()->SetNdivisions(405);
   dummy__25->GetXaxis()->SetLabelFont(42);
   dummy__25->GetXaxis()->SetLabelOffset(0.007);
   dummy__25->GetXaxis()->SetLabelSize(0);
   dummy__25->GetXaxis()->SetTitleSize(0);
   dummy__25->GetXaxis()->SetTickLength(0.025);
   dummy__25->GetXaxis()->SetTitleOffset(0.9);
   dummy__25->GetXaxis()->SetTitleFont(42);
   dummy__25->GetYaxis()->SetTitle("Events / GeV");
   dummy__25->GetYaxis()->SetNdivisions(405);
   dummy__25->GetYaxis()->SetLabelFont(42);
   dummy__25->GetYaxis()->SetLabelOffset(0.007);
   dummy__25->GetYaxis()->SetTitleSize(0.05);
   dummy__25->GetYaxis()->SetTickLength(0.025);
   dummy__25->GetYaxis()->SetTitleOffset(1.21);
   dummy__25->GetYaxis()->SetTitleFont(42);
   dummy__25->GetZaxis()->SetNdivisions(405);
   dummy__25->GetZaxis()->SetLabelFont(42);
   dummy__25->GetZaxis()->SetLabelOffset(0.007);
   dummy__25->GetZaxis()->SetTitleSize(0.05);
   dummy__25->GetZaxis()->SetTickLength(0.025);
   dummy__25->GetZaxis()->SetTitleFont(42);
   dummy__25->Draw("");
   
   THStack *h_stack_postfit = new THStack();
   h_stack_postfit->SetName("h_stack_postfit");
   h_stack_postfit->SetTitle("h_stack_postfit");
   Double_t xAxis28[5] = {25, 75, 100, 150, 600}; 
   
   TH1F *h_stack_postfit_stack_3 = new TH1F("h_stack_postfit_stack_3","h_stack_postfit",4, xAxis28);
   h_stack_postfit_stack_3->SetMinimum(0.001160708);
   h_stack_postfit_stack_3->SetMaximum(4.642834);
   h_stack_postfit_stack_3->SetDirectory(0);
   h_stack_postfit_stack_3->SetStats(0);
   h_stack_postfit_stack_3->SetLineStyle(0);
   h_stack_postfit_stack_3->GetXaxis()->SetNdivisions(405);
   h_stack_postfit_stack_3->GetXaxis()->SetLabelFont(42);
   h_stack_postfit_stack_3->GetXaxis()->SetLabelOffset(0.007);
   h_stack_postfit_stack_3->GetXaxis()->SetTitleSize(0.05);
   h_stack_postfit_stack_3->GetXaxis()->SetTickLength(0.025);
   h_stack_postfit_stack_3->GetXaxis()->SetTitleOffset(0.9);
   h_stack_postfit_stack_3->GetXaxis()->SetTitleFont(42);
   h_stack_postfit_stack_3->GetYaxis()->SetNdivisions(405);
   h_stack_postfit_stack_3->GetYaxis()->SetLabelFont(42);
   h_stack_postfit_stack_3->GetYaxis()->SetLabelOffset(0.007);
   h_stack_postfit_stack_3->GetYaxis()->SetTitleSize(0.05);
   h_stack_postfit_stack_3->GetYaxis()->SetTickLength(0.025);
   h_stack_postfit_stack_3->GetYaxis()->SetTitleOffset(1.05);
   h_stack_postfit_stack_3->GetYaxis()->SetTitleFont(42);
   h_stack_postfit_stack_3->GetZaxis()->SetNdivisions(405);
   h_stack_postfit_stack_3->GetZaxis()->SetLabelFont(42);
   h_stack_postfit_stack_3->GetZaxis()->SetLabelOffset(0.007);
   h_stack_postfit_stack_3->GetZaxis()->SetTitleSize(0.05);
   h_stack_postfit_stack_3->GetZaxis()->SetTickLength(0.025);
   h_stack_postfit_stack_3->GetZaxis()->SetTitleFont(42);
   h_stack_postfit->SetHistogram(h_stack_postfit_stack_3);
   
   Double_t xAxis29[5] = {25, 75, 100, 150, 600}; 
   
   TH1F *qcd__26 = new TH1F("qcd__26","qcd in mass0_tmn",4, xAxis29);
   qcd__26->SetBinContent(1,0.05390829);
   qcd__26->SetBinContent(2,3.542066e-09);
   qcd__26->SetBinContent(3,0.01693303);
   qcd__26->SetBinContent(4,3.542066e-09);
   qcd__26->SetBinError(1,0.06123159);
   qcd__26->SetBinError(2,4.015051e-09);
   qcd__26->SetBinError(3,0.01920447);
   qcd__26->SetBinError(4,4.015051e-09);
   qcd__26->SetEntries(4);

   Int_t ci;      // for color index setting
   TColor *color; // for color definition with alpha
   ci = TColor::GetColor("#ffccff");
   qcd__26->SetFillColor(ci);
   qcd__26->GetXaxis()->SetTitle("min(999.9999,fjmass)");
   qcd__26->GetXaxis()->SetLabelFont(42);
   qcd__26->GetXaxis()->SetLabelSize(0.035);
   qcd__26->GetXaxis()->SetTitleSize(0.035);
   qcd__26->GetXaxis()->SetTitleFont(42);
   qcd__26->GetYaxis()->SetTitle("Events / ( 143.75 )");
   qcd__26->GetYaxis()->SetLabelFont(42);
   qcd__26->GetYaxis()->SetLabelSize(0.035);
   qcd__26->GetYaxis()->SetTitleSize(0.035);
   qcd__26->GetYaxis()->SetTitleFont(42);
   qcd__26->GetZaxis()->SetLabelFont(42);
   qcd__26->GetZaxis()->SetLabelSize(0.035);
   qcd__26->GetZaxis()->SetTitleSize(0.035);
   qcd__26->GetZaxis()->SetTitleFont(42);
   h_stack_postfit->Add(qcd,"");
   Double_t xAxis30[5] = {25, 75, 100, 150, 600}; 
   
   TH1F *zll__27 = new TH1F("zll__27","zll in mass0_tmn",4, xAxis30);
   zll__27->SetBinContent(1,0.01777425);
   zll__27->SetBinContent(2,0.004422426);
   zll__27->SetBinContent(3,0.001322928);
   zll__27->SetBinContent(4,0.0002054148);
   zll__27->SetBinError(1,0.001204006);
   zll__27->SetBinError(2,0.0001605019);
   zll__27->SetBinError(3,0.0001202098);
   zll__27->SetBinError(4,1.236321e-05);
   zll__27->SetEntries(4);

   ci = TColor::GetColor("#99ffff");
   zll__27->SetFillColor(ci);
   zll__27->GetXaxis()->SetTitle("min(999.9999,fjmass)");
   zll__27->GetXaxis()->SetLabelFont(42);
   zll__27->GetXaxis()->SetLabelSize(0.035);
   zll__27->GetXaxis()->SetTitleSize(0.035);
   zll__27->GetXaxis()->SetTitleFont(42);
   zll__27->GetYaxis()->SetTitle("Events / ( 143.75 )");
   zll__27->GetYaxis()->SetLabelFont(42);
   zll__27->GetYaxis()->SetLabelSize(0.035);
   zll__27->GetYaxis()->SetTitleSize(0.035);
   zll__27->GetYaxis()->SetTitleFont(42);
   zll__27->GetZaxis()->SetLabelFont(42);
   zll__27->GetZaxis()->SetLabelSize(0.035);
   zll__27->GetZaxis()->SetTitleSize(0.035);
   zll__27->GetZaxis()->SetTitleFont(42);
   h_stack_postfit->Add(zll,"");
   Double_t xAxis31[5] = {25, 75, 100, 150, 600}; 
   
   TH1F *dibosons__28 = new TH1F("dibosons__28","dibosons in mass0_tmn",4, xAxis31);
   dibosons__28->SetBinContent(1,0.04241017);
   dibosons__28->SetBinContent(2,0.05510319);
   dibosons__28->SetBinContent(3,0.01208518);
   dibosons__28->SetBinContent(4,0.002652895);
   dibosons__28->SetBinError(1,0.004475005);
   dibosons__28->SetBinError(2,0.006302886);
   dibosons__28->SetBinError(3,0.001638355);
   dibosons__28->SetBinError(4,0.0002749747);
   dibosons__28->SetEntries(4);

   ci = TColor::GetColor("#ffff99");
   dibosons__28->SetFillColor(ci);
   dibosons__28->GetXaxis()->SetTitle("min(999.9999,fjmass)");
   dibosons__28->GetXaxis()->SetLabelFont(42);
   dibosons__28->GetXaxis()->SetLabelSize(0.035);
   dibosons__28->GetXaxis()->SetTitleSize(0.035);
   dibosons__28->GetXaxis()->SetTitleFont(42);
   dibosons__28->GetYaxis()->SetTitle("Events / ( 143.75 )");
   dibosons__28->GetYaxis()->SetLabelFont(42);
   dibosons__28->GetYaxis()->SetLabelSize(0.035);
   dibosons__28->GetYaxis()->SetTitleSize(0.035);
   dibosons__28->GetYaxis()->SetTitleFont(42);
   dibosons__28->GetZaxis()->SetLabelFont(42);
   dibosons__28->GetZaxis()->SetLabelSize(0.035);
   dibosons__28->GetZaxis()->SetTitleSize(0.035);
   dibosons__28->GetZaxis()->SetTitleFont(42);
   h_stack_postfit->Add(dibosons,"");
   Double_t xAxis32[5] = {25, 75, 100, 150, 600}; 
   
   TH1F *stop__29 = new TH1F("stop__29","stop in mass0_tmn",4, xAxis32);
   stop__29->SetBinContent(1,0.1840642);
   stop__29->SetBinContent(2,0.3815036);
   stop__29->SetBinContent(3,0.1558274);
   stop__29->SetBinContent(4,0.008376783);
   stop__29->SetBinError(1,0.02178356);
   stop__29->SetBinError(2,0.04522838);
   stop__29->SetBinError(3,0.01843065);
   stop__29->SetBinError(4,0.0009911108);
   stop__29->SetEntries(4);

   ci = TColor::GetColor("#ff9999");
   stop__29->SetFillColor(ci);
   stop__29->GetXaxis()->SetTitle("min(999.9999,fjmass)");
   stop__29->GetXaxis()->SetLabelFont(42);
   stop__29->GetXaxis()->SetLabelSize(0.035);
   stop__29->GetXaxis()->SetTitleSize(0.035);
   stop__29->GetXaxis()->SetTitleFont(42);
   stop__29->GetYaxis()->SetTitle("Events / ( 143.75 )");
   stop__29->GetYaxis()->SetLabelFont(42);
   stop__29->GetYaxis()->SetLabelSize(0.035);
   stop__29->GetYaxis()->SetTitleSize(0.035);
   stop__29->GetYaxis()->SetTitleFont(42);
   stop__29->GetZaxis()->SetLabelFont(42);
   stop__29->GetZaxis()->SetLabelSize(0.035);
   stop__29->GetZaxis()->SetTitleSize(0.035);
   stop__29->GetZaxis()->SetTitleFont(42);
   h_stack_postfit->Add(stop,"");
   Double_t xAxis33[5] = {25, 75, 100, 150, 600}; 
   
   TH1F *wjets__30 = new TH1F("wjets__30","wjets in mass0_tmn",4, xAxis33);
   wjets__30->SetBinContent(1,0.646346);
   wjets__30->SetBinContent(2,0.1811306);
   wjets__30->SetBinContent(3,0.1099061);
   wjets__30->SetBinContent(4,0.01415248);
   wjets__30->SetBinError(1,0.04607649);
   wjets__30->SetBinError(2,0.01253768);
   wjets__30->SetBinError(3,0.007373503);
   wjets__30->SetBinError(4,0.001065276);
   wjets__30->SetEntries(4);

   ci = TColor::GetColor("#ccffcc");
   wjets__30->SetFillColor(ci);
   wjets__30->GetXaxis()->SetTitle("min(999.9999,fjmass)");
   wjets__30->GetXaxis()->SetLabelFont(42);
   wjets__30->GetXaxis()->SetLabelSize(0.035);
   wjets__30->GetXaxis()->SetTitleSize(0.035);
   wjets__30->GetXaxis()->SetTitleFont(42);
   wjets__30->GetYaxis()->SetTitle("Events / ( 143.75 )");
   wjets__30->GetYaxis()->SetLabelFont(42);
   wjets__30->GetYaxis()->SetLabelSize(0.035);
   wjets__30->GetYaxis()->SetTitleSize(0.035);
   wjets__30->GetYaxis()->SetTitleFont(42);
   wjets__30->GetZaxis()->SetLabelFont(42);
   wjets__30->GetZaxis()->SetLabelSize(0.035);
   wjets__30->GetZaxis()->SetTitleSize(0.035);
   wjets__30->GetZaxis()->SetTitleFont(42);
   h_stack_postfit->Add(wjets,"");
   Double_t xAxis34[5] = {25, 75, 100, 150, 600}; 
   
   TH1F *ttbar__31 = new TH1F("ttbar__31","ttbar in mass0_tmn",4, xAxis34);
   ttbar__31->SetBinContent(1,1.494305);
   ttbar__31->SetBinContent(2,2.279611);
   ttbar__31->SetBinContent(3,1.648305);
   ttbar__31->SetBinContent(4,0.08492685);
   ttbar__31->SetBinError(1,0.1908999);
   ttbar__31->SetBinError(2,0.2702908);
   ttbar__31->SetBinError(3,0.1640003);
   ttbar__31->SetBinError(4,0.01349357);
   ttbar__31->SetEntries(4);

   ci = TColor::GetColor("#ffcc66");
   ttbar__31->SetFillColor(ci);
   ttbar__31->GetXaxis()->SetTitle("min(999.9999,fjmass)");
   ttbar__31->GetXaxis()->SetLabelFont(42);
   ttbar__31->GetXaxis()->SetLabelSize(0.035);
   ttbar__31->GetXaxis()->SetTitleSize(0.035);
   ttbar__31->GetXaxis()->SetTitleFont(42);
   ttbar__31->GetYaxis()->SetTitle("Events / ( 143.75 )");
   ttbar__31->GetYaxis()->SetLabelFont(42);
   ttbar__31->GetYaxis()->SetLabelSize(0.035);
   ttbar__31->GetYaxis()->SetTitleSize(0.035);
   ttbar__31->GetYaxis()->SetTitleFont(42);
   ttbar__31->GetZaxis()->SetLabelFont(42);
   ttbar__31->GetZaxis()->SetLabelSize(0.035);
   ttbar__31->GetZaxis()->SetTitleSize(0.035);
   ttbar__31->GetZaxis()->SetTitleFont(42);
   h_stack_postfit->Add(ttbar,"");
   h_stack_postfit->Draw("hist same");
   Double_t xAxis35[5] = {25, 75, 100, 150, 600}; 
   
   TH1F *h_all_prefit__32 = new TH1F("h_all_prefit__32","h_all_prefit",4, xAxis35);
   h_all_prefit__32->SetBinContent(1,2.720376);
   h_all_prefit__32->SetBinContent(2,3.38243);
   h_all_prefit__32->SetBinContent(3,2.599004);
   h_all_prefit__32->SetBinContent(4,0.1038495);
   h_all_prefit__32->SetBinError(1,0.2158552);
   h_all_prefit__32->SetBinError(2,0.3197089);
   h_all_prefit__32->SetBinError(3,0.2058652);
   h_all_prefit__32->SetBinError(4,0.01083439);
   h_all_prefit__32->SetEntries(24);
   h_all_prefit__32->SetLineColor(2);
   h_all_prefit__32->SetLineStyle(7);
   h_all_prefit__32->SetLineWidth(2);
   h_all_prefit__32->GetXaxis()->SetNdivisions(405);
   h_all_prefit__32->GetXaxis()->SetLabelFont(42);
   h_all_prefit__32->GetXaxis()->SetLabelOffset(0.007);
   h_all_prefit__32->GetXaxis()->SetTitleSize(0.05);
   h_all_prefit__32->GetXaxis()->SetTickLength(0.025);
   h_all_prefit__32->GetXaxis()->SetTitleOffset(0.9);
   h_all_prefit__32->GetXaxis()->SetTitleFont(42);
   h_all_prefit__32->GetYaxis()->SetNdivisions(405);
   h_all_prefit__32->GetYaxis()->SetLabelFont(42);
   h_all_prefit__32->GetYaxis()->SetLabelOffset(0.007);
   h_all_prefit__32->GetYaxis()->SetTitleSize(0.05);
   h_all_prefit__32->GetYaxis()->SetTickLength(0.025);
   h_all_prefit__32->GetYaxis()->SetTitleOffset(1.05);
   h_all_prefit__32->GetYaxis()->SetTitleFont(42);
   h_all_prefit__32->GetZaxis()->SetNdivisions(405);
   h_all_prefit__32->GetZaxis()->SetLabelFont(42);
   h_all_prefit__32->GetZaxis()->SetLabelOffset(0.007);
   h_all_prefit__32->GetZaxis()->SetTitleSize(0.05);
   h_all_prefit__32->GetZaxis()->SetTickLength(0.025);
   h_all_prefit__32->GetZaxis()->SetTitleFont(42);
   h_all_prefit__32->Draw("histsame");
   Double_t xAxis36[5] = {25, 75, 100, 150, 600}; 
   
   TH1F *singlemuontop_data__33 = new TH1F("singlemuontop_data__33","base",4, xAxis36);
   singlemuontop_data__33->SetBinContent(1,2.58);
   singlemuontop_data__33->SetBinContent(2,2.92);
   singlemuontop_data__33->SetBinContent(3,2.04);
   singlemuontop_data__33->SetBinContent(4,0.1088889);
   singlemuontop_data__33->SetBinError(1,0.2271563);
   singlemuontop_data__33->SetBinError(2,0.3417601);
   singlemuontop_data__33->SetBinError(3,0.2019901);
   singlemuontop_data__33->SetBinError(4,0.01555556);
   singlemuontop_data__33->SetEntries(279.3399);
   singlemuontop_data__33->SetMarkerStyle(20);
   singlemuontop_data__33->SetMarkerSize(1.2);
   singlemuontop_data__33->GetXaxis()->SetTitle("min(999.9999,fjmass)");
   singlemuontop_data__33->GetXaxis()->SetLabelFont(42);
   singlemuontop_data__33->GetXaxis()->SetLabelSize(0.035);
   singlemuontop_data__33->GetXaxis()->SetTitleSize(0.035);
   singlemuontop_data__33->GetXaxis()->SetTitleFont(42);
   singlemuontop_data__33->GetYaxis()->SetLabelFont(42);
   singlemuontop_data__33->GetYaxis()->SetLabelSize(0.035);
   singlemuontop_data__33->GetYaxis()->SetTitleSize(0.035);
   singlemuontop_data__33->GetYaxis()->SetTitleFont(42);
   singlemuontop_data__33->GetZaxis()->SetLabelFont(42);
   singlemuontop_data__33->GetZaxis()->SetLabelSize(0.035);
   singlemuontop_data__33->GetZaxis()->SetTitleSize(0.035);
   singlemuontop_data__33->GetZaxis()->SetTitleFont(42);
   singlemuontop_data__33->Draw("epsame e0");
   
   TLegend *leg = new TLegend(0.55,0.6033333,0.88,0.93,NULL,"brNDC");
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
   TLatex *   tex = new TLatex(0.16,0.825,"t#bar{t} CR (#mu)");
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
   Double_t xAxis37[5] = {25, 75, 100, 150, 600}; 
   
   TH1F *dummy_copy__34 = new TH1F("dummy_copy__34","h_all_prefit",4, xAxis37);
   dummy_copy__34->SetBinContent(1,2.720376);
   dummy_copy__34->SetBinContent(2,3.38243);
   dummy_copy__34->SetBinContent(3,2.599004);
   dummy_copy__34->SetBinContent(4,0.1038495);
   dummy_copy__34->SetBinError(1,0.2158552);
   dummy_copy__34->SetBinError(2,0.3197089);
   dummy_copy__34->SetBinError(3,0.2058652);
   dummy_copy__34->SetBinError(4,0.01083439);
   dummy_copy__34->SetMinimum(4e-05);
   dummy_copy__34->SetMaximum(169.1215);
   dummy_copy__34->SetEntries(24);
   dummy_copy__34->SetDirectory(0);
   dummy_copy__34->SetLineColor(0);
   dummy_copy__34->SetLineStyle(0);
   dummy_copy__34->SetLineWidth(0);
   dummy_copy__34->SetMarkerColor(0);
   dummy_copy__34->SetMarkerSize(0);
   dummy_copy__34->GetXaxis()->SetNdivisions(405);
   dummy_copy__34->GetXaxis()->SetLabelFont(42);
   dummy_copy__34->GetXaxis()->SetLabelOffset(0.007);
   dummy_copy__34->GetXaxis()->SetLabelSize(0);
   dummy_copy__34->GetXaxis()->SetTitleSize(0);
   dummy_copy__34->GetXaxis()->SetTickLength(0.025);
   dummy_copy__34->GetXaxis()->SetTitleOffset(0.9);
   dummy_copy__34->GetXaxis()->SetTitleFont(42);
   dummy_copy__34->GetYaxis()->SetTitle("Events / GeV");
   dummy_copy__34->GetYaxis()->SetNdivisions(405);
   dummy_copy__34->GetYaxis()->SetLabelFont(42);
   dummy_copy__34->GetYaxis()->SetLabelOffset(0.007);
   dummy_copy__34->GetYaxis()->SetTitleSize(0.05);
   dummy_copy__34->GetYaxis()->SetTickLength(0.025);
   dummy_copy__34->GetYaxis()->SetTitleOffset(1.21);
   dummy_copy__34->GetYaxis()->SetTitleFont(42);
   dummy_copy__34->GetZaxis()->SetNdivisions(405);
   dummy_copy__34->GetZaxis()->SetLabelFont(42);
   dummy_copy__34->GetZaxis()->SetLabelOffset(0.007);
   dummy_copy__34->GetZaxis()->SetTitleSize(0.05);
   dummy_copy__34->GetZaxis()->SetTickLength(0.025);
   dummy_copy__34->GetZaxis()->SetTitleFont(42);
   dummy_copy__34->Draw("sameaxis");
  
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
   Double_t xAxis38[5] = {25, 75, 100, 150, 600}; 
   
   TH1F *dummy2__35 = new TH1F("dummy2__35","dummy2",4, xAxis38);
   dummy2__35->SetBinContent(1,1);
   dummy2__35->SetBinContent(2,1);
   dummy2__35->SetBinContent(3,1);
   dummy2__35->SetMinimum(0.1);
   dummy2__35->SetMaximum(2.1);
   dummy2__35->SetEntries(3);
   dummy2__35->SetLineColor(0);
   dummy2__35->SetLineStyle(0);
   dummy2__35->SetLineWidth(0);
   dummy2__35->SetMarkerColor(0);
   dummy2__35->SetMarkerSize(0);
   dummy2__35->GetXaxis()->SetTitle("Fatjet m_{SD} (GeV)");
   dummy2__35->GetXaxis()->SetLabelFont(42);
   dummy2__35->GetXaxis()->SetLabelOffset(0.007);
   dummy2__35->GetXaxis()->SetTitleSize(0.05);
   dummy2__35->GetXaxis()->SetTickLength(0.025);
   dummy2__35->GetXaxis()->SetTitleOffset(0.9);
   dummy2__35->GetXaxis()->SetTitleFont(42);
   dummy2__35->GetYaxis()->SetTitle("Data / Pred.");
   dummy2__35->GetYaxis()->CenterTitle(true);
   dummy2__35->GetYaxis()->SetNdivisions(5);
   dummy2__35->GetYaxis()->SetLabelFont(42);
   dummy2__35->GetYaxis()->SetLabelOffset(0.007);
   dummy2__35->GetYaxis()->SetLabelSize(0.03);
   dummy2__35->GetYaxis()->SetTickLength(0.025);
   dummy2__35->GetYaxis()->SetTitleOffset(1.5);
   dummy2__35->GetYaxis()->SetTitleFont(42);
   dummy2__35->GetZaxis()->SetNdivisions(405);
   dummy2__35->GetZaxis()->SetLabelFont(42);
   dummy2__35->GetZaxis()->SetLabelOffset(0.007);
   dummy2__35->GetZaxis()->SetTitleSize(0.05);
   dummy2__35->GetZaxis()->SetTickLength(0.025);
   dummy2__35->GetZaxis()->SetTitleFont(42);
   dummy2__35->Draw("hist");
   Double_t xAxis39[5] = {25, 75, 100, 150, 600}; 
   
   TH1F *total_background__36 = new TH1F("total_background__36","Total background in mass0_tmn",4, xAxis39);
   total_background__36->SetBinContent(1,1);
   total_background__36->SetBinContent(2,1);
   total_background__36->SetBinContent(3,1);
   total_background__36->SetBinContent(4,1);
   total_background__36->SetBinContent(5,1);
   total_background__36->SetBinError(1,0.0773942);
   total_background__36->SetBinError(2,0.09261502);
   total_background__36->SetBinError(3,0.08359612);
   total_background__36->SetBinError(4,0.1204055);
   total_background__36->SetEntries(29);

   ci = TColor::GetColor("#f4eb99");
   total_background__36->SetFillColor(ci);

   ci = TColor::GetColor("#f4eb99");
   total_background__36->SetLineColor(ci);
   total_background__36->SetMarkerSize(0);
   total_background__36->GetXaxis()->SetTitle("min(999.9999,fjmass)");
   total_background__36->GetXaxis()->SetLabelFont(42);
   total_background__36->GetXaxis()->SetLabelSize(0.035);
   total_background__36->GetXaxis()->SetTitleSize(0.035);
   total_background__36->GetXaxis()->SetTitleFont(42);
   total_background__36->GetYaxis()->SetTitle("Events / ( 143.75 )");
   total_background__36->GetYaxis()->SetLabelFont(42);
   total_background__36->GetYaxis()->SetLabelSize(0.035);
   total_background__36->GetYaxis()->SetTitleSize(0.035);
   total_background__36->GetYaxis()->SetTitleFont(42);
   total_background__36->GetZaxis()->SetLabelFont(42);
   total_background__36->GetZaxis()->SetLabelSize(0.035);
   total_background__36->GetZaxis()->SetTitleSize(0.035);
   total_background__36->GetZaxis()->SetTitleFont(42);
   total_background__36->Draw("e2same");
   
   TF1 *f13 = new TF1("f1","1",-5000,5000);
   f13->SetFillColor(19);
   f13->SetFillStyle(0);
   f13->SetLineWidth(2);
   f13->SetLineStyle(2);
   f13->GetXaxis()->SetNdivisions(405);
   f13->GetXaxis()->SetLabelFont(42);
   f13->GetXaxis()->SetLabelOffset(0.007);
   f13->GetXaxis()->SetTitleSize(0.05);
   f13->GetXaxis()->SetTickLength(0.025);
   f13->GetXaxis()->SetTitleOffset(0.9);
   f13->GetXaxis()->SetTitleFont(42);
   f13->GetYaxis()->SetNdivisions(405);
   f13->GetYaxis()->SetLabelFont(42);
   f13->GetYaxis()->SetLabelOffset(0.007);
   f13->GetYaxis()->SetTitleSize(0.05);
   f13->GetYaxis()->SetTickLength(0.025);
   f13->GetYaxis()->SetTitleOffset(1.05);
   f13->GetYaxis()->SetTitleFont(42);
   f13->Draw("same");
   
   Double_t _fx3005[4] = {
   50,
   87.5,
   125,
   375};
   Double_t _fy3005[4] = {
   0.9483984,
   0.8632848,
   0.7849162,
   1.048526};
   Double_t _felx3005[4] = {
   25,
   12.5,
   25,
   225};
   Double_t _fely3005[4] = {
   0.08350183,
   0.1010398,
   0.07771828,
   0.1497894};
   Double_t _fehx3005[4] = {
   25,
   12.5,
   25,
   225};
   Double_t _fehy3005[4] = {
   0.08350183,
   0.1010398,
   0.07771828,
   0.1497894};
   TGraphAsymmErrors *grae = new TGraphAsymmErrors(4,_fx3005,_fy3005,_felx3005,_fehx3005,_fely3005,_fehy3005);
   grae->SetName("");
   grae->SetTitle("");
   grae->SetFillColor(1);
   grae->SetLineColor(2);
   grae->SetLineStyle(7);
   grae->SetMarkerColor(2);
   grae->SetMarkerStyle(24);
   
   TH1F *Graph_Graph3005 = new TH1F("Graph_Graph3005","",100,0,657.5);
   Graph_Graph3005->SetMinimum(0.6580862);
   Graph_Graph3005->SetMaximum(1.247427);
   Graph_Graph3005->SetDirectory(0);
   Graph_Graph3005->SetStats(0);
   Graph_Graph3005->SetLineStyle(0);
   Graph_Graph3005->GetXaxis()->SetNdivisions(405);
   Graph_Graph3005->GetXaxis()->SetLabelFont(42);
   Graph_Graph3005->GetXaxis()->SetLabelOffset(0.007);
   Graph_Graph3005->GetXaxis()->SetTitleSize(0.05);
   Graph_Graph3005->GetXaxis()->SetTickLength(0.025);
   Graph_Graph3005->GetXaxis()->SetTitleOffset(0.9);
   Graph_Graph3005->GetXaxis()->SetTitleFont(42);
   Graph_Graph3005->GetYaxis()->SetNdivisions(405);
   Graph_Graph3005->GetYaxis()->SetLabelFont(42);
   Graph_Graph3005->GetYaxis()->SetLabelOffset(0.007);
   Graph_Graph3005->GetYaxis()->SetTitleSize(0.05);
   Graph_Graph3005->GetYaxis()->SetTickLength(0.025);
   Graph_Graph3005->GetYaxis()->SetTitleOffset(1.05);
   Graph_Graph3005->GetYaxis()->SetTitleFont(42);
   Graph_Graph3005->GetZaxis()->SetNdivisions(405);
   Graph_Graph3005->GetZaxis()->SetLabelFont(42);
   Graph_Graph3005->GetZaxis()->SetLabelOffset(0.007);
   Graph_Graph3005->GetZaxis()->SetTitleSize(0.05);
   Graph_Graph3005->GetZaxis()->SetTickLength(0.025);
   Graph_Graph3005->GetZaxis()->SetTitleFont(42);
   grae->SetHistogram(Graph_Graph3005);
   
   grae->Draw("ep 0");
   
   Double_t _fx3006[4] = {
   50,
   87.5,
   125,
   375};
   Double_t _fy3006[4] = {
   1.057894,
   1.006282,
   1.049178,
   0.9870775};
   Double_t _felx3006[4] = {
   25,
   12.5,
   25,
   225};
   Double_t _fely3006[4] = {
   0.09314235,
   0.1177764,
   0.1038841,
   0.1410111};
   Double_t _fehx3006[4] = {
   25,
   12.5,
   25,
   225};
   Double_t _fehy3006[4] = {
   0.09314235,
   0.1177764,
   0.1038841,
   0.1410111};
   grae = new TGraphAsymmErrors(4,_fx3006,_fy3006,_felx3006,_fehx3006,_fely3006,_fehy3006);
   grae->SetName("");
   grae->SetTitle("");
   grae->SetFillColor(1);
   grae->SetMarkerStyle(20);
   
   TH1F *Graph_Graph3006 = new TH1F("Graph_Graph3006","",100,0,657.5);
   Graph_Graph3006->SetMinimum(0.8153668);
   Graph_Graph3006->SetMaximum(1.183762);
   Graph_Graph3006->SetDirectory(0);
   Graph_Graph3006->SetStats(0);
   Graph_Graph3006->SetLineStyle(0);
   Graph_Graph3006->GetXaxis()->SetNdivisions(405);
   Graph_Graph3006->GetXaxis()->SetLabelFont(42);
   Graph_Graph3006->GetXaxis()->SetLabelOffset(0.007);
   Graph_Graph3006->GetXaxis()->SetTitleSize(0.05);
   Graph_Graph3006->GetXaxis()->SetTickLength(0.025);
   Graph_Graph3006->GetXaxis()->SetTitleOffset(0.9);
   Graph_Graph3006->GetXaxis()->SetTitleFont(42);
   Graph_Graph3006->GetYaxis()->SetNdivisions(405);
   Graph_Graph3006->GetYaxis()->SetLabelFont(42);
   Graph_Graph3006->GetYaxis()->SetLabelOffset(0.007);
   Graph_Graph3006->GetYaxis()->SetTitleSize(0.05);
   Graph_Graph3006->GetYaxis()->SetTickLength(0.025);
   Graph_Graph3006->GetYaxis()->SetTitleOffset(1.05);
   Graph_Graph3006->GetYaxis()->SetTitleFont(42);
   Graph_Graph3006->GetZaxis()->SetNdivisions(405);
   Graph_Graph3006->GetZaxis()->SetLabelFont(42);
   Graph_Graph3006->GetZaxis()->SetLabelOffset(0.007);
   Graph_Graph3006->GetZaxis()->SetTitleSize(0.05);
   Graph_Graph3006->GetZaxis()->SetTickLength(0.025);
   Graph_Graph3006->GetZaxis()->SetTitleFont(42);
   grae->SetHistogram(Graph_Graph3006);
   
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
