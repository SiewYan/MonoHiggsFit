void Fail_MSDcorr_stackedPostfit_singleelectronw_fail_mass()
{
//=========Macro generated from canvas: c/c
//=========  (Tue Feb 13 18:07:03 2018) by ROOT version6.06/09
   TCanvas *c = new TCanvas("c", "c",0,0,720,800);
   gStyle->SetOptFit(1);
   gStyle->SetOptStat(0);
   gStyle->SetOptTitle(0);
   c->SetHighLightColor(2);
   c->Range(-60.18518,-4.490691,649.6914,4.298705);
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
   Double_t xAxis88[5] = {25, 75, 100, 150, 600}; 
   
   TH1F *dummy__81 = new TH1F("dummy__81","h_all_prefit",4, xAxis88);
   dummy__81->SetBinContent(1,149.4503);
   dummy__81->SetBinContent(2,132.611);
   dummy__81->SetBinContent(3,70.52606);
   dummy__81->SetBinContent(4,9.056863);
   dummy__81->SetBinError(1,9.338512);
   dummy__81->SetBinError(2,7.110014);
   dummy__81->SetBinError(3,3.735958);
   dummy__81->SetBinError(4,0.5651434);
   dummy__81->SetMinimum(0.014);
   dummy__81->SetMaximum(7472.515);
   dummy__81->SetEntries(24);
   dummy__81->SetLineColor(0);
   dummy__81->SetLineStyle(0);
   dummy__81->SetLineWidth(0);
   dummy__81->SetMarkerColor(0);
   dummy__81->SetMarkerSize(0);
   dummy__81->GetXaxis()->SetNdivisions(405);
   dummy__81->GetXaxis()->SetLabelFont(42);
   dummy__81->GetXaxis()->SetLabelOffset(0.007);
   dummy__81->GetXaxis()->SetLabelSize(0);
   dummy__81->GetXaxis()->SetTitleSize(0);
   dummy__81->GetXaxis()->SetTickLength(0.025);
   dummy__81->GetXaxis()->SetTitleOffset(0.9);
   dummy__81->GetXaxis()->SetTitleFont(42);
   dummy__81->GetYaxis()->SetTitle("Events / GeV");
   dummy__81->GetYaxis()->SetNdivisions(405);
   dummy__81->GetYaxis()->SetLabelFont(42);
   dummy__81->GetYaxis()->SetLabelOffset(0.007);
   dummy__81->GetYaxis()->SetTitleSize(0.05);
   dummy__81->GetYaxis()->SetTickLength(0.025);
   dummy__81->GetYaxis()->SetTitleOffset(1.21);
   dummy__81->GetYaxis()->SetTitleFont(42);
   dummy__81->GetZaxis()->SetNdivisions(405);
   dummy__81->GetZaxis()->SetLabelFont(42);
   dummy__81->GetZaxis()->SetLabelOffset(0.007);
   dummy__81->GetZaxis()->SetTitleSize(0.05);
   dummy__81->GetZaxis()->SetTickLength(0.025);
   dummy__81->GetZaxis()->SetTitleFont(42);
   dummy__81->Draw("");
   
   THStack *h_stack_postfit = new THStack();
   h_stack_postfit->SetName("h_stack_postfit");
   h_stack_postfit->SetTitle("h_stack_postfit");
   Double_t xAxis89[5] = {25, 75, 100, 150, 600}; 
   
   TH1F *h_stack_postfit_stack_8 = new TH1F("h_stack_postfit_stack_8","h_stack_postfit",4, xAxis89);
   h_stack_postfit_stack_8->SetMinimum(0.005234171);
   h_stack_postfit_stack_8->SetMaximum(304.3882);
   h_stack_postfit_stack_8->SetDirectory(0);
   h_stack_postfit_stack_8->SetStats(0);
   h_stack_postfit_stack_8->SetLineStyle(0);
   h_stack_postfit_stack_8->GetXaxis()->SetNdivisions(405);
   h_stack_postfit_stack_8->GetXaxis()->SetLabelFont(42);
   h_stack_postfit_stack_8->GetXaxis()->SetLabelOffset(0.007);
   h_stack_postfit_stack_8->GetXaxis()->SetTitleSize(0.05);
   h_stack_postfit_stack_8->GetXaxis()->SetTickLength(0.025);
   h_stack_postfit_stack_8->GetXaxis()->SetTitleOffset(0.9);
   h_stack_postfit_stack_8->GetXaxis()->SetTitleFont(42);
   h_stack_postfit_stack_8->GetYaxis()->SetNdivisions(405);
   h_stack_postfit_stack_8->GetYaxis()->SetLabelFont(42);
   h_stack_postfit_stack_8->GetYaxis()->SetLabelOffset(0.007);
   h_stack_postfit_stack_8->GetYaxis()->SetTitleSize(0.05);
   h_stack_postfit_stack_8->GetYaxis()->SetTickLength(0.025);
   h_stack_postfit_stack_8->GetYaxis()->SetTitleOffset(1.05);
   h_stack_postfit_stack_8->GetYaxis()->SetTitleFont(42);
   h_stack_postfit_stack_8->GetZaxis()->SetNdivisions(405);
   h_stack_postfit_stack_8->GetZaxis()->SetLabelFont(42);
   h_stack_postfit_stack_8->GetZaxis()->SetLabelOffset(0.007);
   h_stack_postfit_stack_8->GetZaxis()->SetTitleSize(0.05);
   h_stack_postfit_stack_8->GetZaxis()->SetTickLength(0.025);
   h_stack_postfit_stack_8->GetZaxis()->SetTitleFont(42);
   h_stack_postfit->SetHistogram(h_stack_postfit_stack_8);
   
   Double_t xAxis90[5] = {25, 75, 100, 150, 600}; 
   
   TH1F *qcd__82 = new TH1F("qcd__82","qcd in mass0_wen_fail",4, xAxis90);
   qcd__82->SetBinContent(1,0.7217109);
   qcd__82->SetBinContent(2,1.414097);
   qcd__82->SetBinContent(3,0.2980729);
   qcd__82->SetBinContent(4,0.0438263);
   qcd__82->SetBinError(1,0.4329112);
   qcd__82->SetBinError(2,0.8484845);
   qcd__82->SetBinError(3,0.1787584);
   qcd__82->SetBinError(4,0.02629552);
   qcd__82->SetEntries(4);

   Int_t ci;      // for color index setting
   TColor *color; // for color definition with alpha
   ci = TColor::GetColor("#ffccff");
   qcd__82->SetFillColor(ci);
   qcd__82->GetXaxis()->SetTitle("min(999.9999,fjmass)");
   qcd__82->GetXaxis()->SetLabelFont(42);
   qcd__82->GetXaxis()->SetLabelSize(0.035);
   qcd__82->GetXaxis()->SetTitleSize(0.035);
   qcd__82->GetXaxis()->SetTitleFont(42);
   qcd__82->GetYaxis()->SetTitle("Events / ( 143.75 )");
   qcd__82->GetYaxis()->SetLabelFont(42);
   qcd__82->GetYaxis()->SetLabelSize(0.035);
   qcd__82->GetYaxis()->SetTitleSize(0.035);
   qcd__82->GetYaxis()->SetTitleFont(42);
   qcd__82->GetZaxis()->SetLabelFont(42);
   qcd__82->GetZaxis()->SetLabelSize(0.035);
   qcd__82->GetZaxis()->SetTitleSize(0.035);
   qcd__82->GetZaxis()->SetTitleFont(42);
   h_stack_postfit->Add(qcd,"");
   Double_t xAxis91[5] = {25, 75, 100, 150, 600}; 
   
   TH1F *zll__83 = new TH1F("zll__83","zll in mass0_wen_fail",4, xAxis91);
   zll__83->SetBinContent(1,1.788161);
   zll__83->SetBinContent(2,0.9507247);
   zll__83->SetBinContent(3,0.6459672);
   zll__83->SetBinContent(4,0.1028762);
   zll__83->SetBinError(1,0.04426333);
   zll__83->SetBinError(2,0.02342782);
   zll__83->SetBinError(3,0.01605945);
   zll__83->SetBinError(4,0.002544828);
   zll__83->SetEntries(4);

   ci = TColor::GetColor("#99ffff");
   zll__83->SetFillColor(ci);
   zll__83->GetXaxis()->SetTitle("min(999.9999,fjmass)");
   zll__83->GetXaxis()->SetLabelFont(42);
   zll__83->GetXaxis()->SetLabelSize(0.035);
   zll__83->GetXaxis()->SetTitleSize(0.035);
   zll__83->GetXaxis()->SetTitleFont(42);
   zll__83->GetYaxis()->SetTitle("Events / ( 143.75 )");
   zll__83->GetYaxis()->SetLabelFont(42);
   zll__83->GetYaxis()->SetLabelSize(0.035);
   zll__83->GetYaxis()->SetTitleSize(0.035);
   zll__83->GetYaxis()->SetTitleFont(42);
   zll__83->GetZaxis()->SetLabelFont(42);
   zll__83->GetZaxis()->SetLabelSize(0.035);
   zll__83->GetZaxis()->SetTitleSize(0.035);
   zll__83->GetZaxis()->SetTitleFont(42);
   h_stack_postfit->Add(zll,"");
   Double_t xAxis92[5] = {25, 75, 100, 150, 600}; 
   
   TH1F *dibosons__84 = new TH1F("dibosons__84","dibosons in mass0_wen_fail",4, xAxis92);
   dibosons__84->SetBinContent(1,3.90609);
   dibosons__84->SetBinContent(2,16.63801);
   dibosons__84->SetBinContent(3,1.247418);
   dibosons__84->SetBinContent(4,0.1172159);
   dibosons__84->SetBinError(1,0.386519);
   dibosons__84->SetBinError(2,1.646344);
   dibosons__84->SetBinError(3,0.1234332);
   dibosons__84->SetBinError(4,0.01159756);
   dibosons__84->SetEntries(4);

   ci = TColor::GetColor("#ffff99");
   dibosons__84->SetFillColor(ci);
   dibosons__84->GetXaxis()->SetTitle("min(999.9999,fjmass)");
   dibosons__84->GetXaxis()->SetLabelFont(42);
   dibosons__84->GetXaxis()->SetLabelSize(0.035);
   dibosons__84->GetXaxis()->SetTitleSize(0.035);
   dibosons__84->GetXaxis()->SetTitleFont(42);
   dibosons__84->GetYaxis()->SetTitle("Events / ( 143.75 )");
   dibosons__84->GetYaxis()->SetLabelFont(42);
   dibosons__84->GetYaxis()->SetLabelSize(0.035);
   dibosons__84->GetYaxis()->SetTitleSize(0.035);
   dibosons__84->GetYaxis()->SetTitleFont(42);
   dibosons__84->GetZaxis()->SetLabelFont(42);
   dibosons__84->GetZaxis()->SetLabelSize(0.035);
   dibosons__84->GetZaxis()->SetTitleSize(0.035);
   dibosons__84->GetZaxis()->SetTitleFont(42);
   h_stack_postfit->Add(dibosons,"");
   Double_t xAxis93[5] = {25, 75, 100, 150, 600}; 
   
   TH1F *stop__85 = new TH1F("stop__85","stop in mass0_wen_fail",4, xAxis93);
   stop__85->SetBinContent(1,2.219459);
   stop__85->SetBinContent(2,8.6117);
   stop__85->SetBinContent(3,2.926918);
   stop__85->SetBinContent(4,0.1416213);
   stop__85->SetBinError(1,0.2657394);
   stop__85->SetBinError(2,1.030473);
   stop__85->SetBinError(3,0.3495491);
   stop__85->SetBinError(4,0.01693054);
   stop__85->SetEntries(4);

   ci = TColor::GetColor("#ff9999");
   stop__85->SetFillColor(ci);
   stop__85->GetXaxis()->SetTitle("min(999.9999,fjmass)");
   stop__85->GetXaxis()->SetLabelFont(42);
   stop__85->GetXaxis()->SetLabelSize(0.035);
   stop__85->GetXaxis()->SetTitleSize(0.035);
   stop__85->GetXaxis()->SetTitleFont(42);
   stop__85->GetYaxis()->SetTitle("Events / ( 143.75 )");
   stop__85->GetYaxis()->SetLabelFont(42);
   stop__85->GetYaxis()->SetLabelSize(0.035);
   stop__85->GetYaxis()->SetTitleSize(0.035);
   stop__85->GetYaxis()->SetTitleFont(42);
   stop__85->GetZaxis()->SetLabelFont(42);
   stop__85->GetZaxis()->SetLabelSize(0.035);
   stop__85->GetZaxis()->SetTitleSize(0.035);
   stop__85->GetZaxis()->SetTitleFont(42);
   h_stack_postfit->Add(stop,"");
   Double_t xAxis94[5] = {25, 75, 100, 150, 600}; 
   
   TH1F *wjets__86 = new TH1F("wjets__86","wjets in mass0_wen_fail",4, xAxis94);
   wjets__86->SetBinContent(1,152.5417);
   wjets__86->SetBinContent(2,62.42094);
   wjets__86->SetBinContent(3,57.00853);
   wjets__86->SetBinContent(4,9.387468);
   wjets__86->SetBinError(1,3.941652);
   wjets__86->SetBinError(2,2.591889);
   wjets__86->SetBinError(3,1.434985);
   wjets__86->SetBinError(4,0.1508338);
   wjets__86->SetEntries(4);

   ci = TColor::GetColor("#ccffcc");
   wjets__86->SetFillColor(ci);
   wjets__86->GetXaxis()->SetTitle("min(999.9999,fjmass)");
   wjets__86->GetXaxis()->SetLabelFont(42);
   wjets__86->GetXaxis()->SetLabelSize(0.035);
   wjets__86->GetXaxis()->SetTitleSize(0.035);
   wjets__86->GetXaxis()->SetTitleFont(42);
   wjets__86->GetYaxis()->SetTitle("Events / ( 143.75 )");
   wjets__86->GetYaxis()->SetLabelFont(42);
   wjets__86->GetYaxis()->SetLabelSize(0.035);
   wjets__86->GetYaxis()->SetTitleSize(0.035);
   wjets__86->GetYaxis()->SetTitleFont(42);
   wjets__86->GetZaxis()->SetLabelFont(42);
   wjets__86->GetZaxis()->SetLabelSize(0.035);
   wjets__86->GetZaxis()->SetTitleSize(0.035);
   wjets__86->GetZaxis()->SetTitleFont(42);
   h_stack_postfit->Add(wjets,"");
   Double_t xAxis95[5] = {25, 75, 100, 150, 600}; 
   
   TH1F *ttbar__87 = new TH1F("ttbar__87","ttbar in mass0_wen_fail",4, xAxis95);
   ttbar__87->SetBinContent(1,7.389373);
   ttbar__87->SetBinContent(2,33.52266);
   ttbar__87->SetBinContent(3,14.63431);
   ttbar__87->SetBinContent(4,0.5681298);
   ttbar__87->SetBinError(1,0.1174284);
   ttbar__87->SetBinError(2,0.530101);
   ttbar__87->SetBinError(3,0.2295486);
   ttbar__87->SetBinError(4,0.00903087);
   ttbar__87->SetEntries(4);

   ci = TColor::GetColor("#ffcc66");
   ttbar__87->SetFillColor(ci);
   ttbar__87->GetXaxis()->SetTitle("min(999.9999,fjmass)");
   ttbar__87->GetXaxis()->SetLabelFont(42);
   ttbar__87->GetXaxis()->SetLabelSize(0.035);
   ttbar__87->GetXaxis()->SetTitleSize(0.035);
   ttbar__87->GetXaxis()->SetTitleFont(42);
   ttbar__87->GetYaxis()->SetTitle("Events / ( 143.75 )");
   ttbar__87->GetYaxis()->SetLabelFont(42);
   ttbar__87->GetYaxis()->SetLabelSize(0.035);
   ttbar__87->GetYaxis()->SetTitleSize(0.035);
   ttbar__87->GetYaxis()->SetTitleFont(42);
   ttbar__87->GetZaxis()->SetLabelFont(42);
   ttbar__87->GetZaxis()->SetLabelSize(0.035);
   ttbar__87->GetZaxis()->SetTitleSize(0.035);
   ttbar__87->GetZaxis()->SetTitleFont(42);
   h_stack_postfit->Add(ttbar,"");
   h_stack_postfit->Draw("hist same");
   Double_t xAxis96[5] = {25, 75, 100, 150, 600}; 
   
   TH1F *h_all_prefit__88 = new TH1F("h_all_prefit__88","h_all_prefit",4, xAxis96);
   h_all_prefit__88->SetBinContent(1,149.4503);
   h_all_prefit__88->SetBinContent(2,132.611);
   h_all_prefit__88->SetBinContent(3,70.52606);
   h_all_prefit__88->SetBinContent(4,9.056863);
   h_all_prefit__88->SetBinError(1,9.338512);
   h_all_prefit__88->SetBinError(2,7.110014);
   h_all_prefit__88->SetBinError(3,3.735958);
   h_all_prefit__88->SetBinError(4,0.5651434);
   h_all_prefit__88->SetEntries(24);
   h_all_prefit__88->SetLineColor(2);
   h_all_prefit__88->SetLineStyle(7);
   h_all_prefit__88->SetLineWidth(2);
   h_all_prefit__88->GetXaxis()->SetNdivisions(405);
   h_all_prefit__88->GetXaxis()->SetLabelFont(42);
   h_all_prefit__88->GetXaxis()->SetLabelOffset(0.007);
   h_all_prefit__88->GetXaxis()->SetTitleSize(0.05);
   h_all_prefit__88->GetXaxis()->SetTickLength(0.025);
   h_all_prefit__88->GetXaxis()->SetTitleOffset(0.9);
   h_all_prefit__88->GetXaxis()->SetTitleFont(42);
   h_all_prefit__88->GetYaxis()->SetNdivisions(405);
   h_all_prefit__88->GetYaxis()->SetLabelFont(42);
   h_all_prefit__88->GetYaxis()->SetLabelOffset(0.007);
   h_all_prefit__88->GetYaxis()->SetTitleSize(0.05);
   h_all_prefit__88->GetYaxis()->SetTickLength(0.025);
   h_all_prefit__88->GetYaxis()->SetTitleOffset(1.05);
   h_all_prefit__88->GetYaxis()->SetTitleFont(42);
   h_all_prefit__88->GetZaxis()->SetNdivisions(405);
   h_all_prefit__88->GetZaxis()->SetLabelFont(42);
   h_all_prefit__88->GetZaxis()->SetLabelOffset(0.007);
   h_all_prefit__88->GetZaxis()->SetTitleSize(0.05);
   h_all_prefit__88->GetZaxis()->SetTickLength(0.025);
   h_all_prefit__88->GetZaxis()->SetTitleFont(42);
   h_all_prefit__88->Draw("histsame");
   Double_t xAxis97[5] = {25, 75, 100, 150, 600}; 
   
   TH1F *singleelectronw_data__89 = new TH1F("singleelectronw_data__89","base",4, xAxis97);
   singleelectronw_data__89->SetBinContent(1,168.56);
   singleelectronw_data__89->SetBinContent(2,123.56);
   singleelectronw_data__89->SetBinContent(3,76.76);
   singleelectronw_data__89->SetBinContent(4,10.36889);
   singleelectronw_data__89->SetBinContent(5,0.01777778);
   singleelectronw_data__89->SetBinError(1,1.836083);
   singleelectronw_data__89->SetBinError(2,2.223151);
   singleelectronw_data__89->SetBinError(3,1.239032);
   singleelectronw_data__89->SetBinError(4,0.1517958);
   singleelectronw_data__89->SetBinError(5,0.006285394);
   singleelectronw_data__89->SetEntries(14569.69);
   singleelectronw_data__89->SetMarkerStyle(20);
   singleelectronw_data__89->SetMarkerSize(1.2);
   singleelectronw_data__89->GetXaxis()->SetTitle("min(999.9999,fjmass)");
   singleelectronw_data__89->GetXaxis()->SetLabelFont(42);
   singleelectronw_data__89->GetXaxis()->SetLabelSize(0.035);
   singleelectronw_data__89->GetXaxis()->SetTitleSize(0.035);
   singleelectronw_data__89->GetXaxis()->SetTitleFont(42);
   singleelectronw_data__89->GetYaxis()->SetLabelFont(42);
   singleelectronw_data__89->GetYaxis()->SetLabelSize(0.035);
   singleelectronw_data__89->GetYaxis()->SetTitleSize(0.035);
   singleelectronw_data__89->GetYaxis()->SetTitleFont(42);
   singleelectronw_data__89->GetZaxis()->SetLabelFont(42);
   singleelectronw_data__89->GetZaxis()->SetLabelSize(0.035);
   singleelectronw_data__89->GetZaxis()->SetTitleSize(0.035);
   singleelectronw_data__89->GetZaxis()->SetTitleFont(42);
   singleelectronw_data__89->Draw("epsame e0");
   
   TLegend *leg = new TLegend(0.55,0.65,0.88,0.93,NULL,"brNDC");
   leg->SetBorderSize(0);
   leg->SetTextSize(0.035);
   leg->SetLineColor(0);
   leg->SetLineStyle(1);
   leg->SetLineWidth(1);
   leg->SetFillColor(0);
   leg->SetFillStyle(0);
   TLegendEntry *entry=leg->AddEntry("singleelectronw_data","Data","elp");
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
   TLatex *   tex = new TLatex(0.16,0.825,"W CR (e) fail");
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
   Double_t xAxis98[5] = {25, 75, 100, 150, 600}; 
   
   TH1F *dummy_copy__90 = new TH1F("dummy_copy__90","h_all_prefit",4, xAxis98);
   dummy_copy__90->SetBinContent(1,149.4503);
   dummy_copy__90->SetBinContent(2,132.611);
   dummy_copy__90->SetBinContent(3,70.52606);
   dummy_copy__90->SetBinContent(4,9.056863);
   dummy_copy__90->SetBinError(1,9.338512);
   dummy_copy__90->SetBinError(2,7.110014);
   dummy_copy__90->SetBinError(3,3.735958);
   dummy_copy__90->SetBinError(4,0.5651434);
   dummy_copy__90->SetMinimum(0.014);
   dummy_copy__90->SetMaximum(7472.515);
   dummy_copy__90->SetEntries(24);
   dummy_copy__90->SetDirectory(0);
   dummy_copy__90->SetLineColor(0);
   dummy_copy__90->SetLineStyle(0);
   dummy_copy__90->SetLineWidth(0);
   dummy_copy__90->SetMarkerColor(0);
   dummy_copy__90->SetMarkerSize(0);
   dummy_copy__90->GetXaxis()->SetNdivisions(405);
   dummy_copy__90->GetXaxis()->SetLabelFont(42);
   dummy_copy__90->GetXaxis()->SetLabelOffset(0.007);
   dummy_copy__90->GetXaxis()->SetLabelSize(0);
   dummy_copy__90->GetXaxis()->SetTitleSize(0);
   dummy_copy__90->GetXaxis()->SetTickLength(0.025);
   dummy_copy__90->GetXaxis()->SetTitleOffset(0.9);
   dummy_copy__90->GetXaxis()->SetTitleFont(42);
   dummy_copy__90->GetYaxis()->SetTitle("Events / GeV");
   dummy_copy__90->GetYaxis()->SetNdivisions(405);
   dummy_copy__90->GetYaxis()->SetLabelFont(42);
   dummy_copy__90->GetYaxis()->SetLabelOffset(0.007);
   dummy_copy__90->GetYaxis()->SetTitleSize(0.05);
   dummy_copy__90->GetYaxis()->SetTickLength(0.025);
   dummy_copy__90->GetYaxis()->SetTitleOffset(1.21);
   dummy_copy__90->GetYaxis()->SetTitleFont(42);
   dummy_copy__90->GetZaxis()->SetNdivisions(405);
   dummy_copy__90->GetZaxis()->SetLabelFont(42);
   dummy_copy__90->GetZaxis()->SetLabelOffset(0.007);
   dummy_copy__90->GetZaxis()->SetTitleSize(0.05);
   dummy_copy__90->GetZaxis()->SetTickLength(0.025);
   dummy_copy__90->GetZaxis()->SetTitleFont(42);
   dummy_copy__90->Draw("sameaxis");
  
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
   Double_t xAxis99[5] = {25, 75, 100, 150, 600}; 
   
   TH1F *dummy2__91 = new TH1F("dummy2__91","dummy2",4, xAxis99);
   dummy2__91->SetBinContent(1,1);
   dummy2__91->SetBinContent(2,1);
   dummy2__91->SetBinContent(3,1);
   dummy2__91->SetMinimum(0.1);
   dummy2__91->SetMaximum(2.1);
   dummy2__91->SetEntries(3);
   dummy2__91->SetLineColor(0);
   dummy2__91->SetLineStyle(0);
   dummy2__91->SetLineWidth(0);
   dummy2__91->SetMarkerColor(0);
   dummy2__91->SetMarkerSize(0);
   dummy2__91->GetXaxis()->SetTitle("Fatjet m_{SD} (GeV)");
   dummy2__91->GetXaxis()->SetLabelFont(42);
   dummy2__91->GetXaxis()->SetLabelOffset(0.007);
   dummy2__91->GetXaxis()->SetTitleSize(0.05);
   dummy2__91->GetXaxis()->SetTickLength(0.025);
   dummy2__91->GetXaxis()->SetTitleOffset(0.9);
   dummy2__91->GetXaxis()->SetTitleFont(42);
   dummy2__91->GetYaxis()->SetTitle("Data / Pred.");
   dummy2__91->GetYaxis()->CenterTitle(true);
   dummy2__91->GetYaxis()->SetNdivisions(5);
   dummy2__91->GetYaxis()->SetLabelFont(42);
   dummy2__91->GetYaxis()->SetLabelOffset(0.007);
   dummy2__91->GetYaxis()->SetLabelSize(0.03);
   dummy2__91->GetYaxis()->SetTickLength(0.025);
   dummy2__91->GetYaxis()->SetTitleOffset(1.5);
   dummy2__91->GetYaxis()->SetTitleFont(42);
   dummy2__91->GetZaxis()->SetNdivisions(405);
   dummy2__91->GetZaxis()->SetLabelFont(42);
   dummy2__91->GetZaxis()->SetLabelOffset(0.007);
   dummy2__91->GetZaxis()->SetTitleSize(0.05);
   dummy2__91->GetZaxis()->SetTickLength(0.025);
   dummy2__91->GetZaxis()->SetTitleFont(42);
   dummy2__91->Draw("hist");
   Double_t xAxis100[5] = {25, 75, 100, 150, 600}; 
   
   TH1F *total_background__92 = new TH1F("total_background__92","Total background in mass0_wen_fail",4, xAxis100);
   total_background__92->SetBinContent(1,1);
   total_background__92->SetBinContent(2,1);
   total_background__92->SetBinContent(3,1);
   total_background__92->SetBinContent(4,1);
   total_background__92->SetBinContent(5,1);
   total_background__92->SetBinError(1,0.02396595);
   total_background__92->SetBinError(2,0.01597591);
   total_background__92->SetBinError(3,0.01809536);
   total_background__92->SetBinError(4,0.01431302);
   total_background__92->SetEntries(29);

   ci = TColor::GetColor("#f4eb99");
   total_background__92->SetFillColor(ci);

   ci = TColor::GetColor("#f4eb99");
   total_background__92->SetLineColor(ci);
   total_background__92->SetMarkerSize(0);
   total_background__92->GetXaxis()->SetTitle("min(999.9999,fjmass)");
   total_background__92->GetXaxis()->SetLabelFont(42);
   total_background__92->GetXaxis()->SetLabelSize(0.035);
   total_background__92->GetXaxis()->SetTitleSize(0.035);
   total_background__92->GetXaxis()->SetTitleFont(42);
   total_background__92->GetYaxis()->SetTitle("Events / ( 143.75 )");
   total_background__92->GetYaxis()->SetLabelFont(42);
   total_background__92->GetYaxis()->SetLabelSize(0.035);
   total_background__92->GetYaxis()->SetTitleSize(0.035);
   total_background__92->GetYaxis()->SetTitleFont(42);
   total_background__92->GetZaxis()->SetLabelFont(42);
   total_background__92->GetZaxis()->SetLabelSize(0.035);
   total_background__92->GetZaxis()->SetTitleSize(0.035);
   total_background__92->GetZaxis()->SetTitleFont(42);
   total_background__92->Draw("e2same");
   
   TF1 *f18 = new TF1("f1","1",-5000,5000);
   f18->SetFillColor(19);
   f18->SetFillStyle(0);
   f18->SetLineWidth(2);
   f18->SetLineStyle(2);
   f18->GetXaxis()->SetNdivisions(405);
   f18->GetXaxis()->SetLabelFont(42);
   f18->GetXaxis()->SetLabelOffset(0.007);
   f18->GetXaxis()->SetTitleSize(0.05);
   f18->GetXaxis()->SetTickLength(0.025);
   f18->GetXaxis()->SetTitleOffset(0.9);
   f18->GetXaxis()->SetTitleFont(42);
   f18->GetYaxis()->SetNdivisions(405);
   f18->GetYaxis()->SetLabelFont(42);
   f18->GetYaxis()->SetLabelOffset(0.007);
   f18->GetYaxis()->SetTitleSize(0.05);
   f18->GetYaxis()->SetTickLength(0.025);
   f18->GetYaxis()->SetTitleOffset(1.05);
   f18->GetYaxis()->SetTitleFont(42);
   f18->Draw("same");
   
   Double_t _fx3015[4] = {
   50,
   87.5,
   125,
   375};
   Double_t _fy3015[4] = {
   1.127867,
   0.9317477,
   1.088392,
   1.144865};
   Double_t _felx3015[4] = {
   25,
   12.5,
   25,
   225};
   Double_t _fely3015[4] = {
   0.01228557,
   0.01676445,
   0.01756843,
   0.01676031};
   Double_t _fehx3015[4] = {
   25,
   12.5,
   25,
   225};
   Double_t _fehy3015[4] = {
   0.01228557,
   0.01676445,
   0.01756843,
   0.01676031};
   TGraphAsymmErrors *grae = new TGraphAsymmErrors(4,_fx3015,_fy3015,_felx3015,_fehx3015,_fely3015,_fehy3015);
   grae->SetName("");
   grae->SetTitle("");
   grae->SetFillColor(1);
   grae->SetLineColor(2);
   grae->SetLineStyle(7);
   grae->SetMarkerColor(2);
   grae->SetMarkerStyle(24);
   
   TH1F *Graph_Graph3015 = new TH1F("Graph_Graph3015","",100,0,657.5);
   Graph_Graph3015->SetMinimum(0.890319);
   Graph_Graph3015->SetMaximum(1.18629);
   Graph_Graph3015->SetDirectory(0);
   Graph_Graph3015->SetStats(0);
   Graph_Graph3015->SetLineStyle(0);
   Graph_Graph3015->GetXaxis()->SetNdivisions(405);
   Graph_Graph3015->GetXaxis()->SetLabelFont(42);
   Graph_Graph3015->GetXaxis()->SetLabelOffset(0.007);
   Graph_Graph3015->GetXaxis()->SetTitleSize(0.05);
   Graph_Graph3015->GetXaxis()->SetTickLength(0.025);
   Graph_Graph3015->GetXaxis()->SetTitleOffset(0.9);
   Graph_Graph3015->GetXaxis()->SetTitleFont(42);
   Graph_Graph3015->GetYaxis()->SetNdivisions(405);
   Graph_Graph3015->GetYaxis()->SetLabelFont(42);
   Graph_Graph3015->GetYaxis()->SetLabelOffset(0.007);
   Graph_Graph3015->GetYaxis()->SetTitleSize(0.05);
   Graph_Graph3015->GetYaxis()->SetTickLength(0.025);
   Graph_Graph3015->GetYaxis()->SetTitleOffset(1.05);
   Graph_Graph3015->GetYaxis()->SetTitleFont(42);
   Graph_Graph3015->GetZaxis()->SetNdivisions(405);
   Graph_Graph3015->GetZaxis()->SetLabelFont(42);
   Graph_Graph3015->GetZaxis()->SetLabelOffset(0.007);
   Graph_Graph3015->GetZaxis()->SetTitleSize(0.05);
   Graph_Graph3015->GetZaxis()->SetTickLength(0.025);
   Graph_Graph3015->GetZaxis()->SetTitleFont(42);
   grae->SetHistogram(Graph_Graph3015);
   
   grae->Draw("ep 0");
   
   Double_t _fx3016[4] = {
   50,
   87.5,
   125,
   375};
   Double_t _fy3016[4] = {
   0.9999613,
   1.000015,
   0.9999842,
   1.000748};
   Double_t _felx3016[4] = {
   25,
   12.5,
   25,
   225};
   Double_t _fely3016[4] = {
   0.01089233,
   0.01799275,
   0.01614138,
   0.0146505};
   Double_t _fehx3016[4] = {
   25,
   12.5,
   25,
   225};
   Double_t _fehy3016[4] = {
   0.01089233,
   0.01799275,
   0.01614138,
   0.0146505};
   grae = new TGraphAsymmErrors(4,_fx3016,_fy3016,_felx3016,_fehx3016,_fely3016,_fehy3016);
   grae->SetName("");
   grae->SetTitle("");
   grae->SetFillColor(1);
   grae->SetMarkerStyle(20);
   
   TH1F *Graph_Graph3016 = new TH1F("Graph_Graph3016","",100,0,657.5);
   Graph_Graph3016->SetMinimum(0.9784238);
   Graph_Graph3016->SetMaximum(1.021606);
   Graph_Graph3016->SetDirectory(0);
   Graph_Graph3016->SetStats(0);
   Graph_Graph3016->SetLineStyle(0);
   Graph_Graph3016->GetXaxis()->SetNdivisions(405);
   Graph_Graph3016->GetXaxis()->SetLabelFont(42);
   Graph_Graph3016->GetXaxis()->SetLabelOffset(0.007);
   Graph_Graph3016->GetXaxis()->SetTitleSize(0.05);
   Graph_Graph3016->GetXaxis()->SetTickLength(0.025);
   Graph_Graph3016->GetXaxis()->SetTitleOffset(0.9);
   Graph_Graph3016->GetXaxis()->SetTitleFont(42);
   Graph_Graph3016->GetYaxis()->SetNdivisions(405);
   Graph_Graph3016->GetYaxis()->SetLabelFont(42);
   Graph_Graph3016->GetYaxis()->SetLabelOffset(0.007);
   Graph_Graph3016->GetYaxis()->SetTitleSize(0.05);
   Graph_Graph3016->GetYaxis()->SetTickLength(0.025);
   Graph_Graph3016->GetYaxis()->SetTitleOffset(1.05);
   Graph_Graph3016->GetYaxis()->SetTitleFont(42);
   Graph_Graph3016->GetZaxis()->SetNdivisions(405);
   Graph_Graph3016->GetZaxis()->SetLabelFont(42);
   Graph_Graph3016->GetZaxis()->SetLabelOffset(0.007);
   Graph_Graph3016->GetZaxis()->SetTitleSize(0.05);
   Graph_Graph3016->GetZaxis()->SetTickLength(0.025);
   Graph_Graph3016->GetZaxis()->SetTitleFont(42);
   grae->SetHistogram(Graph_Graph3016);
   
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
