void PASS_MSDcorr_stackedPostfit_singleelectronw_mass()
{
//=========Macro generated from canvas: c/c
//=========  (Tue Feb 13 18:07:02 2018) by ROOT version6.06/09
   TCanvas *c = new TCanvas("c", "c",0,0,720,800);
   gStyle->SetOptFit(1);
   gStyle->SetOptStat(0);
   gStyle->SetOptTitle(0);
   c->SetHighLightColor(2);
   c->Range(-60.18518,-5.420296,649.6914,3.234328);
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
   Double_t xAxis75[5] = {25, 75, 100, 150, 600}; 
   
   TH1F *dummy__69 = new TH1F("dummy__69","h_all_prefit",4, xAxis75);
   dummy__69->SetBinContent(1,13.08099);
   dummy__69->SetBinContent(2,8.209565);
   dummy__69->SetBinContent(3,5.421628);
   dummy__69->SetBinContent(4,0.313695);
   dummy__69->SetBinError(1,0.7664062);
   dummy__69->SetBinError(2,0.5154946);
   dummy__69->SetBinError(3,0.3256555);
   dummy__69->SetBinError(4,0.02219214);
   dummy__69->SetMinimum(0.0015);
   dummy__69->SetMaximum(654.0493);
   dummy__69->SetEntries(24);
   dummy__69->SetLineColor(0);
   dummy__69->SetLineStyle(0);
   dummy__69->SetLineWidth(0);
   dummy__69->SetMarkerColor(0);
   dummy__69->SetMarkerSize(0);
   dummy__69->GetXaxis()->SetNdivisions(405);
   dummy__69->GetXaxis()->SetLabelFont(42);
   dummy__69->GetXaxis()->SetLabelOffset(0.007);
   dummy__69->GetXaxis()->SetLabelSize(0);
   dummy__69->GetXaxis()->SetTitleSize(0);
   dummy__69->GetXaxis()->SetTickLength(0.025);
   dummy__69->GetXaxis()->SetTitleOffset(0.9);
   dummy__69->GetXaxis()->SetTitleFont(42);
   dummy__69->GetYaxis()->SetTitle("Events / GeV");
   dummy__69->GetYaxis()->SetNdivisions(405);
   dummy__69->GetYaxis()->SetLabelFont(42);
   dummy__69->GetYaxis()->SetLabelOffset(0.007);
   dummy__69->GetYaxis()->SetTitleSize(0.05);
   dummy__69->GetYaxis()->SetTickLength(0.025);
   dummy__69->GetYaxis()->SetTitleOffset(1.21);
   dummy__69->GetYaxis()->SetTitleFont(42);
   dummy__69->GetZaxis()->SetNdivisions(405);
   dummy__69->GetZaxis()->SetLabelFont(42);
   dummy__69->GetZaxis()->SetLabelOffset(0.007);
   dummy__69->GetZaxis()->SetTitleSize(0.05);
   dummy__69->GetZaxis()->SetTickLength(0.025);
   dummy__69->GetZaxis()->SetTitleFont(42);
   dummy__69->Draw("");
   
   THStack *h_stack_postfit = new THStack();
   h_stack_postfit->SetName("h_stack_postfit");
   h_stack_postfit->SetTitle("h_stack_postfit");
   Double_t xAxis76[5] = {25, 75, 100, 150, 600}; 
   
   TH1F *h_stack_postfit_stack_7 = new TH1F("h_stack_postfit_stack_7","h_stack_postfit",4, xAxis76);
   h_stack_postfit_stack_7->SetMinimum(1.851368e-11);
   h_stack_postfit_stack_7->SetMaximum(45.3722);
   h_stack_postfit_stack_7->SetDirectory(0);
   h_stack_postfit_stack_7->SetStats(0);
   h_stack_postfit_stack_7->SetLineStyle(0);
   h_stack_postfit_stack_7->GetXaxis()->SetNdivisions(405);
   h_stack_postfit_stack_7->GetXaxis()->SetLabelFont(42);
   h_stack_postfit_stack_7->GetXaxis()->SetLabelOffset(0.007);
   h_stack_postfit_stack_7->GetXaxis()->SetTitleSize(0.05);
   h_stack_postfit_stack_7->GetXaxis()->SetTickLength(0.025);
   h_stack_postfit_stack_7->GetXaxis()->SetTitleOffset(0.9);
   h_stack_postfit_stack_7->GetXaxis()->SetTitleFont(42);
   h_stack_postfit_stack_7->GetYaxis()->SetNdivisions(405);
   h_stack_postfit_stack_7->GetYaxis()->SetLabelFont(42);
   h_stack_postfit_stack_7->GetYaxis()->SetLabelOffset(0.007);
   h_stack_postfit_stack_7->GetYaxis()->SetTitleSize(0.05);
   h_stack_postfit_stack_7->GetYaxis()->SetTickLength(0.025);
   h_stack_postfit_stack_7->GetYaxis()->SetTitleOffset(1.05);
   h_stack_postfit_stack_7->GetYaxis()->SetTitleFont(42);
   h_stack_postfit_stack_7->GetZaxis()->SetNdivisions(405);
   h_stack_postfit_stack_7->GetZaxis()->SetLabelFont(42);
   h_stack_postfit_stack_7->GetZaxis()->SetLabelOffset(0.007);
   h_stack_postfit_stack_7->GetZaxis()->SetTitleSize(0.05);
   h_stack_postfit_stack_7->GetZaxis()->SetTickLength(0.025);
   h_stack_postfit_stack_7->GetZaxis()->SetTitleFont(42);
   h_stack_postfit->SetHistogram(h_stack_postfit_stack_7);
   
   Double_t xAxis77[5] = {25, 75, 100, 150, 600}; 
   
   TH1F *qcd__70 = new TH1F("qcd__70","qcd in mass0_wen",4, xAxis77);
   qcd__70->SetBinContent(1,3.350063e-10);
   qcd__70->SetBinContent(2,3.350063e-10);
   qcd__70->SetBinContent(3,0.006700126);
   qcd__70->SetBinContent(4,3.350063e-10);
   qcd__70->SetBinError(1,2.006055e-10);
   qcd__70->SetBinError(2,2.006055e-10);
   qcd__70->SetBinError(3,0.00401211);
   qcd__70->SetBinError(4,2.006055e-10);
   qcd__70->SetEntries(4);

   Int_t ci;      // for color index setting
   TColor *color; // for color definition with alpha
   ci = TColor::GetColor("#ffccff");
   qcd__70->SetFillColor(ci);
   qcd__70->GetXaxis()->SetTitle("min(999.9999,fjmass)");
   qcd__70->GetXaxis()->SetLabelFont(42);
   qcd__70->GetXaxis()->SetLabelSize(0.035);
   qcd__70->GetXaxis()->SetTitleSize(0.035);
   qcd__70->GetXaxis()->SetTitleFont(42);
   qcd__70->GetYaxis()->SetTitle("Events / ( 143.75 )");
   qcd__70->GetYaxis()->SetLabelFont(42);
   qcd__70->GetYaxis()->SetLabelSize(0.035);
   qcd__70->GetYaxis()->SetTitleSize(0.035);
   qcd__70->GetYaxis()->SetTitleFont(42);
   qcd__70->GetZaxis()->SetLabelFont(42);
   qcd__70->GetZaxis()->SetLabelSize(0.035);
   qcd__70->GetZaxis()->SetTitleSize(0.035);
   qcd__70->GetZaxis()->SetTitleFont(42);
   h_stack_postfit->Add(qcd,"");
   Double_t xAxis78[5] = {25, 75, 100, 150, 600}; 
   
   TH1F *zll__71 = new TH1F("zll__71","zll in mass0_wen",4, xAxis78);
   zll__71->SetBinContent(1,0.1444153);
   zll__71->SetBinContent(2,0.03405942);
   zll__71->SetBinContent(3,0.009863295);
   zll__71->SetBinContent(4,0.002298438);
   zll__71->SetBinError(1,0.003559819);
   zll__71->SetBinError(2,0.0008356948);
   zll__71->SetBinError(3,0.0002447662);
   zll__71->SetBinError(4,5.680171e-05);
   zll__71->SetEntries(4);

   ci = TColor::GetColor("#99ffff");
   zll__71->SetFillColor(ci);
   zll__71->GetXaxis()->SetTitle("min(999.9999,fjmass)");
   zll__71->GetXaxis()->SetLabelFont(42);
   zll__71->GetXaxis()->SetLabelSize(0.035);
   zll__71->GetXaxis()->SetTitleSize(0.035);
   zll__71->GetXaxis()->SetTitleFont(42);
   zll__71->GetYaxis()->SetTitle("Events / ( 143.75 )");
   zll__71->GetYaxis()->SetLabelFont(42);
   zll__71->GetYaxis()->SetLabelSize(0.035);
   zll__71->GetYaxis()->SetTitleSize(0.035);
   zll__71->GetYaxis()->SetTitleFont(42);
   zll__71->GetZaxis()->SetLabelFont(42);
   zll__71->GetZaxis()->SetLabelSize(0.035);
   zll__71->GetZaxis()->SetTitleSize(0.035);
   zll__71->GetZaxis()->SetTitleFont(42);
   h_stack_postfit->Add(zll,"");
   Double_t xAxis79[5] = {25, 75, 100, 150, 600}; 
   
   TH1F *dibosons__72 = new TH1F("dibosons__72","dibosons in mass0_wen",4, xAxis79);
   dibosons__72->SetBinContent(1,0.3856521);
   dibosons__72->SetBinContent(2,1.396362);
   dibosons__72->SetBinContent(3,0.05362966);
   dibosons__72->SetBinContent(4,0.002755662);
   dibosons__72->SetBinError(1,0.0381671);
   dibosons__72->SetBinError(2,0.1381727);
   dibosons__72->SetBinError(3,0.005307444);
   dibosons__72->SetBinError(4,0.0002726665);
   dibosons__72->SetEntries(4);

   ci = TColor::GetColor("#ffff99");
   dibosons__72->SetFillColor(ci);
   dibosons__72->GetXaxis()->SetTitle("min(999.9999,fjmass)");
   dibosons__72->GetXaxis()->SetLabelFont(42);
   dibosons__72->GetXaxis()->SetLabelSize(0.035);
   dibosons__72->GetXaxis()->SetTitleSize(0.035);
   dibosons__72->GetXaxis()->SetTitleFont(42);
   dibosons__72->GetYaxis()->SetTitle("Events / ( 143.75 )");
   dibosons__72->GetYaxis()->SetLabelFont(42);
   dibosons__72->GetYaxis()->SetLabelSize(0.035);
   dibosons__72->GetYaxis()->SetTitleSize(0.035);
   dibosons__72->GetYaxis()->SetTitleFont(42);
   dibosons__72->GetZaxis()->SetLabelFont(42);
   dibosons__72->GetZaxis()->SetLabelSize(0.035);
   dibosons__72->GetZaxis()->SetTitleSize(0.035);
   dibosons__72->GetZaxis()->SetTitleFont(42);
   h_stack_postfit->Add(dibosons,"");
   Double_t xAxis80[5] = {25, 75, 100, 150, 600}; 
   
   TH1F *stop__73 = new TH1F("stop__73","stop in mass0_wen",4, xAxis80);
   stop__73->SetBinContent(1,0.4866104);
   stop__73->SetBinContent(2,0.9482023);
   stop__73->SetBinContent(3,0.7509233);
   stop__73->SetBinContent(4,0.03431268);
   stop__73->SetBinError(1,0.05818443);
   stop__73->SetBinError(2,0.1134431);
   stop__73->SetBinError(3,0.08969936);
   stop__73->SetBinError(4,0.004108416);
   stop__73->SetEntries(4);

   ci = TColor::GetColor("#ff9999");
   stop__73->SetFillColor(ci);
   stop__73->GetXaxis()->SetTitle("min(999.9999,fjmass)");
   stop__73->GetXaxis()->SetLabelFont(42);
   stop__73->GetXaxis()->SetLabelSize(0.035);
   stop__73->GetXaxis()->SetTitleSize(0.035);
   stop__73->GetXaxis()->SetTitleFont(42);
   stop__73->GetYaxis()->SetTitle("Events / ( 143.75 )");
   stop__73->GetYaxis()->SetLabelFont(42);
   stop__73->GetYaxis()->SetLabelSize(0.035);
   stop__73->GetYaxis()->SetTitleSize(0.035);
   stop__73->GetYaxis()->SetTitleFont(42);
   stop__73->GetZaxis()->SetLabelFont(42);
   stop__73->GetZaxis()->SetLabelSize(0.035);
   stop__73->GetZaxis()->SetTitleSize(0.035);
   stop__73->GetZaxis()->SetTitleFont(42);
   h_stack_postfit->Add(stop,"");
   Double_t xAxis81[5] = {25, 75, 100, 150, 600}; 
   
   TH1F *wjets__74 = new TH1F("wjets__74","wjets in mass0_wen",4, xAxis81);
   wjets__74->SetBinContent(1,11.05274);
   wjets__74->SetBinContent(2,1.258006);
   wjets__74->SetBinContent(3,1.235427);
   wjets__74->SetBinContent(4,0.1936691);
   wjets__74->SetBinError(1,0.4463785);
   wjets__74->SetBinError(2,0.2942146);
   wjets__74->SetBinError(3,0.223293);
   wjets__74->SetBinError(4,0.01938237);
   wjets__74->SetEntries(4);

   ci = TColor::GetColor("#ccffcc");
   wjets__74->SetFillColor(ci);
   wjets__74->GetXaxis()->SetTitle("min(999.9999,fjmass)");
   wjets__74->GetXaxis()->SetLabelFont(42);
   wjets__74->GetXaxis()->SetLabelSize(0.035);
   wjets__74->GetXaxis()->SetTitleSize(0.035);
   wjets__74->GetXaxis()->SetTitleFont(42);
   wjets__74->GetYaxis()->SetTitle("Events / ( 143.75 )");
   wjets__74->GetYaxis()->SetLabelFont(42);
   wjets__74->GetYaxis()->SetLabelSize(0.035);
   wjets__74->GetYaxis()->SetTitleSize(0.035);
   wjets__74->GetYaxis()->SetTitleFont(42);
   wjets__74->GetZaxis()->SetLabelFont(42);
   wjets__74->GetZaxis()->SetLabelSize(0.035);
   wjets__74->GetZaxis()->SetTitleSize(0.035);
   wjets__74->GetZaxis()->SetTitleFont(42);
   h_stack_postfit->Add(wjets,"");
   Double_t xAxis82[5] = {25, 75, 100, 150, 600}; 
   
   TH1F *ttbar__75 = new TH1F("ttbar__75","ttbar in mass0_wen",4, xAxis82);
   ttbar__75->SetBinContent(1,2.050111);
   ttbar__75->SetBinContent(2,3.341012);
   ttbar__75->SetBinContent(3,2.935355);
   ttbar__75->SetBinContent(4,0.0945079);
   ttbar__75->SetBinError(1,0.02420575);
   ttbar__75->SetBinError(2,0.03944747);
   ttbar__75->SetBinError(3,0.03465785);
   ttbar__75->SetBinError(4,0.001115858);
   ttbar__75->SetEntries(4);

   ci = TColor::GetColor("#ffcc66");
   ttbar__75->SetFillColor(ci);
   ttbar__75->GetXaxis()->SetTitle("min(999.9999,fjmass)");
   ttbar__75->GetXaxis()->SetLabelFont(42);
   ttbar__75->GetXaxis()->SetLabelSize(0.035);
   ttbar__75->GetXaxis()->SetTitleSize(0.035);
   ttbar__75->GetXaxis()->SetTitleFont(42);
   ttbar__75->GetYaxis()->SetTitle("Events / ( 143.75 )");
   ttbar__75->GetYaxis()->SetLabelFont(42);
   ttbar__75->GetYaxis()->SetLabelSize(0.035);
   ttbar__75->GetYaxis()->SetTitleSize(0.035);
   ttbar__75->GetYaxis()->SetTitleFont(42);
   ttbar__75->GetZaxis()->SetLabelFont(42);
   ttbar__75->GetZaxis()->SetLabelSize(0.035);
   ttbar__75->GetZaxis()->SetTitleSize(0.035);
   ttbar__75->GetZaxis()->SetTitleFont(42);
   h_stack_postfit->Add(ttbar,"");
   h_stack_postfit->Draw("hist same");
   Double_t xAxis83[5] = {25, 75, 100, 150, 600}; 
   
   TH1F *h_all_prefit__76 = new TH1F("h_all_prefit__76","h_all_prefit",4, xAxis83);
   h_all_prefit__76->SetBinContent(1,13.08099);
   h_all_prefit__76->SetBinContent(2,8.209565);
   h_all_prefit__76->SetBinContent(3,5.421628);
   h_all_prefit__76->SetBinContent(4,0.313695);
   h_all_prefit__76->SetBinError(1,0.7664062);
   h_all_prefit__76->SetBinError(2,0.5154946);
   h_all_prefit__76->SetBinError(3,0.3256555);
   h_all_prefit__76->SetBinError(4,0.02219214);
   h_all_prefit__76->SetEntries(24);
   h_all_prefit__76->SetLineColor(2);
   h_all_prefit__76->SetLineStyle(7);
   h_all_prefit__76->SetLineWidth(2);
   h_all_prefit__76->GetXaxis()->SetNdivisions(405);
   h_all_prefit__76->GetXaxis()->SetLabelFont(42);
   h_all_prefit__76->GetXaxis()->SetLabelOffset(0.007);
   h_all_prefit__76->GetXaxis()->SetTitleSize(0.05);
   h_all_prefit__76->GetXaxis()->SetTickLength(0.025);
   h_all_prefit__76->GetXaxis()->SetTitleOffset(0.9);
   h_all_prefit__76->GetXaxis()->SetTitleFont(42);
   h_all_prefit__76->GetYaxis()->SetNdivisions(405);
   h_all_prefit__76->GetYaxis()->SetLabelFont(42);
   h_all_prefit__76->GetYaxis()->SetLabelOffset(0.007);
   h_all_prefit__76->GetYaxis()->SetTitleSize(0.05);
   h_all_prefit__76->GetYaxis()->SetTickLength(0.025);
   h_all_prefit__76->GetYaxis()->SetTitleOffset(1.05);
   h_all_prefit__76->GetYaxis()->SetTitleFont(42);
   h_all_prefit__76->GetZaxis()->SetNdivisions(405);
   h_all_prefit__76->GetZaxis()->SetLabelFont(42);
   h_all_prefit__76->GetZaxis()->SetLabelOffset(0.007);
   h_all_prefit__76->GetZaxis()->SetTitleSize(0.05);
   h_all_prefit__76->GetZaxis()->SetTickLength(0.025);
   h_all_prefit__76->GetZaxis()->SetTitleFont(42);
   h_all_prefit__76->Draw("histsame");
   Double_t xAxis84[5] = {25, 75, 100, 150, 600}; 
   
   TH1F *singleelectronw_data__77 = new TH1F("singleelectronw_data__77","base",4, xAxis84);
   singleelectronw_data__77->SetBinContent(1,14.84);
   singleelectronw_data__77->SetBinContent(2,6.44);
   singleelectronw_data__77->SetBinContent(3,4.82);
   singleelectronw_data__77->SetBinContent(4,0.3177778);
   singleelectronw_data__77->SetBinError(1,0.5447935);
   singleelectronw_data__77->SetBinError(2,0.5075431);
   singleelectronw_data__77->SetBinError(3,0.3104835);
   singleelectronw_data__77->SetBinError(4,0.02657391);
   singleelectronw_data__77->SetEntries(1071.209);
   singleelectronw_data__77->SetMarkerStyle(20);
   singleelectronw_data__77->SetMarkerSize(1.2);
   singleelectronw_data__77->GetXaxis()->SetTitle("min(999.9999,fjmass)");
   singleelectronw_data__77->GetXaxis()->SetLabelFont(42);
   singleelectronw_data__77->GetXaxis()->SetLabelSize(0.035);
   singleelectronw_data__77->GetXaxis()->SetTitleSize(0.035);
   singleelectronw_data__77->GetXaxis()->SetTitleFont(42);
   singleelectronw_data__77->GetYaxis()->SetLabelFont(42);
   singleelectronw_data__77->GetYaxis()->SetLabelSize(0.035);
   singleelectronw_data__77->GetYaxis()->SetTitleSize(0.035);
   singleelectronw_data__77->GetYaxis()->SetTitleFont(42);
   singleelectronw_data__77->GetZaxis()->SetLabelFont(42);
   singleelectronw_data__77->GetZaxis()->SetLabelSize(0.035);
   singleelectronw_data__77->GetZaxis()->SetTitleSize(0.035);
   singleelectronw_data__77->GetZaxis()->SetTitleFont(42);
   singleelectronw_data__77->Draw("epsame e0");
   
   TLegend *leg = new TLegend(0.55,0.62,0.88,0.93,NULL,"brNDC");
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
   TLatex *   tex = new TLatex(0.16,0.825,"W CR (e)");
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
   Double_t xAxis85[5] = {25, 75, 100, 150, 600}; 
   
   TH1F *dummy_copy__78 = new TH1F("dummy_copy__78","h_all_prefit",4, xAxis85);
   dummy_copy__78->SetBinContent(1,13.08099);
   dummy_copy__78->SetBinContent(2,8.209565);
   dummy_copy__78->SetBinContent(3,5.421628);
   dummy_copy__78->SetBinContent(4,0.313695);
   dummy_copy__78->SetBinError(1,0.7664062);
   dummy_copy__78->SetBinError(2,0.5154946);
   dummy_copy__78->SetBinError(3,0.3256555);
   dummy_copy__78->SetBinError(4,0.02219214);
   dummy_copy__78->SetMinimum(0.0015);
   dummy_copy__78->SetMaximum(654.0493);
   dummy_copy__78->SetEntries(24);
   dummy_copy__78->SetDirectory(0);
   dummy_copy__78->SetLineColor(0);
   dummy_copy__78->SetLineStyle(0);
   dummy_copy__78->SetLineWidth(0);
   dummy_copy__78->SetMarkerColor(0);
   dummy_copy__78->SetMarkerSize(0);
   dummy_copy__78->GetXaxis()->SetNdivisions(405);
   dummy_copy__78->GetXaxis()->SetLabelFont(42);
   dummy_copy__78->GetXaxis()->SetLabelOffset(0.007);
   dummy_copy__78->GetXaxis()->SetLabelSize(0);
   dummy_copy__78->GetXaxis()->SetTitleSize(0);
   dummy_copy__78->GetXaxis()->SetTickLength(0.025);
   dummy_copy__78->GetXaxis()->SetTitleOffset(0.9);
   dummy_copy__78->GetXaxis()->SetTitleFont(42);
   dummy_copy__78->GetYaxis()->SetTitle("Events / GeV");
   dummy_copy__78->GetYaxis()->SetNdivisions(405);
   dummy_copy__78->GetYaxis()->SetLabelFont(42);
   dummy_copy__78->GetYaxis()->SetLabelOffset(0.007);
   dummy_copy__78->GetYaxis()->SetTitleSize(0.05);
   dummy_copy__78->GetYaxis()->SetTickLength(0.025);
   dummy_copy__78->GetYaxis()->SetTitleOffset(1.21);
   dummy_copy__78->GetYaxis()->SetTitleFont(42);
   dummy_copy__78->GetZaxis()->SetNdivisions(405);
   dummy_copy__78->GetZaxis()->SetLabelFont(42);
   dummy_copy__78->GetZaxis()->SetLabelOffset(0.007);
   dummy_copy__78->GetZaxis()->SetTitleSize(0.05);
   dummy_copy__78->GetZaxis()->SetTickLength(0.025);
   dummy_copy__78->GetZaxis()->SetTitleFont(42);
   dummy_copy__78->Draw("sameaxis");
  
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
   Double_t xAxis86[5] = {25, 75, 100, 150, 600}; 
   
   TH1F *dummy2__79 = new TH1F("dummy2__79","dummy2",4, xAxis86);
   dummy2__79->SetBinContent(1,1);
   dummy2__79->SetBinContent(2,1);
   dummy2__79->SetBinContent(3,1);
   dummy2__79->SetMinimum(0.1);
   dummy2__79->SetMaximum(2.1);
   dummy2__79->SetEntries(3);
   dummy2__79->SetLineColor(0);
   dummy2__79->SetLineStyle(0);
   dummy2__79->SetLineWidth(0);
   dummy2__79->SetMarkerColor(0);
   dummy2__79->SetMarkerSize(0);
   dummy2__79->GetXaxis()->SetTitle("Fatjet m_{SD} (GeV)");
   dummy2__79->GetXaxis()->SetLabelFont(42);
   dummy2__79->GetXaxis()->SetLabelOffset(0.007);
   dummy2__79->GetXaxis()->SetTitleSize(0.05);
   dummy2__79->GetXaxis()->SetTickLength(0.025);
   dummy2__79->GetXaxis()->SetTitleOffset(0.9);
   dummy2__79->GetXaxis()->SetTitleFont(42);
   dummy2__79->GetYaxis()->SetTitle("Data / Pred.");
   dummy2__79->GetYaxis()->CenterTitle(true);
   dummy2__79->GetYaxis()->SetNdivisions(5);
   dummy2__79->GetYaxis()->SetLabelFont(42);
   dummy2__79->GetYaxis()->SetLabelOffset(0.007);
   dummy2__79->GetYaxis()->SetLabelSize(0.03);
   dummy2__79->GetYaxis()->SetTickLength(0.025);
   dummy2__79->GetYaxis()->SetTitleOffset(1.5);
   dummy2__79->GetYaxis()->SetTitleFont(42);
   dummy2__79->GetZaxis()->SetNdivisions(405);
   dummy2__79->GetZaxis()->SetLabelFont(42);
   dummy2__79->GetZaxis()->SetLabelOffset(0.007);
   dummy2__79->GetZaxis()->SetTitleSize(0.05);
   dummy2__79->GetZaxis()->SetTickLength(0.025);
   dummy2__79->GetZaxis()->SetTitleFont(42);
   dummy2__79->Draw("hist");
   Double_t xAxis87[5] = {25, 75, 100, 150, 600}; 
   
   TH1F *total_background__80 = new TH1F("total_background__80","Total background in mass0_wen",4, xAxis87);
   total_background__80->SetBinContent(1,1);
   total_background__80->SetBinContent(2,1);
   total_background__80->SetBinContent(3,1);
   total_background__80->SetBinContent(4,1);
   total_background__80->SetBinContent(5,1);
   total_background__80->SetBinError(1,0.03071803);
   total_background__80->SetBinError(2,0.04084083);
   total_background__80->SetBinError(3,0.042205);
   total_background__80->SetBinError(4,0.05958955);
   total_background__80->SetEntries(29);

   ci = TColor::GetColor("#f4eb99");
   total_background__80->SetFillColor(ci);

   ci = TColor::GetColor("#f4eb99");
   total_background__80->SetLineColor(ci);
   total_background__80->SetMarkerSize(0);
   total_background__80->GetXaxis()->SetTitle("min(999.9999,fjmass)");
   total_background__80->GetXaxis()->SetLabelFont(42);
   total_background__80->GetXaxis()->SetLabelSize(0.035);
   total_background__80->GetXaxis()->SetTitleSize(0.035);
   total_background__80->GetXaxis()->SetTitleFont(42);
   total_background__80->GetYaxis()->SetTitle("Events / ( 143.75 )");
   total_background__80->GetYaxis()->SetLabelFont(42);
   total_background__80->GetYaxis()->SetLabelSize(0.035);
   total_background__80->GetYaxis()->SetTitleSize(0.035);
   total_background__80->GetYaxis()->SetTitleFont(42);
   total_background__80->GetZaxis()->SetLabelFont(42);
   total_background__80->GetZaxis()->SetLabelSize(0.035);
   total_background__80->GetZaxis()->SetTitleSize(0.035);
   total_background__80->GetZaxis()->SetTitleFont(42);
   total_background__80->Draw("e2same");
   
   TF1 *f17 = new TF1("f1","1",-5000,5000);
   f17->SetFillColor(19);
   f17->SetFillStyle(0);
   f17->SetLineWidth(2);
   f17->SetLineStyle(2);
   f17->GetXaxis()->SetNdivisions(405);
   f17->GetXaxis()->SetLabelFont(42);
   f17->GetXaxis()->SetLabelOffset(0.007);
   f17->GetXaxis()->SetTitleSize(0.05);
   f17->GetXaxis()->SetTickLength(0.025);
   f17->GetXaxis()->SetTitleOffset(0.9);
   f17->GetXaxis()->SetTitleFont(42);
   f17->GetYaxis()->SetNdivisions(405);
   f17->GetYaxis()->SetLabelFont(42);
   f17->GetYaxis()->SetLabelOffset(0.007);
   f17->GetYaxis()->SetTitleSize(0.05);
   f17->GetYaxis()->SetTickLength(0.025);
   f17->GetYaxis()->SetTitleOffset(1.05);
   f17->GetYaxis()->SetTitleFont(42);
   f17->Draw("same");
   
   Double_t _fx3013[4] = {
   50,
   87.5,
   125,
   375};
   Double_t _fy3013[4] = {
   1.134471,
   0.7844508,
   0.8890318,
   1.013015};
   Double_t _felx3013[4] = {
   25,
   12.5,
   25,
   225};
   Double_t _fely3013[4] = {
   0.04164774,
   0.06182338,
   0.05726757,
   0.08471258};
   Double_t _fehx3013[4] = {
   25,
   12.5,
   25,
   225};
   Double_t _fehy3013[4] = {
   0.04164774,
   0.06182338,
   0.05726757,
   0.08471258};
   TGraphAsymmErrors *grae = new TGraphAsymmErrors(4,_fx3013,_fy3013,_felx3013,_fehx3013,_fely3013,_fehy3013);
   grae->SetName("");
   grae->SetTitle("");
   grae->SetFillColor(1);
   grae->SetLineColor(2);
   grae->SetLineStyle(7);
   grae->SetMarkerColor(2);
   grae->SetMarkerStyle(24);
   
   TH1F *Graph_Graph3013 = new TH1F("Graph_Graph3013","",100,0,657.5);
   Graph_Graph3013->SetMinimum(0.6772783);
   Graph_Graph3013->SetMaximum(1.221468);
   Graph_Graph3013->SetDirectory(0);
   Graph_Graph3013->SetStats(0);
   Graph_Graph3013->SetLineStyle(0);
   Graph_Graph3013->GetXaxis()->SetNdivisions(405);
   Graph_Graph3013->GetXaxis()->SetLabelFont(42);
   Graph_Graph3013->GetXaxis()->SetLabelOffset(0.007);
   Graph_Graph3013->GetXaxis()->SetTitleSize(0.05);
   Graph_Graph3013->GetXaxis()->SetTickLength(0.025);
   Graph_Graph3013->GetXaxis()->SetTitleOffset(0.9);
   Graph_Graph3013->GetXaxis()->SetTitleFont(42);
   Graph_Graph3013->GetYaxis()->SetNdivisions(405);
   Graph_Graph3013->GetYaxis()->SetLabelFont(42);
   Graph_Graph3013->GetYaxis()->SetLabelOffset(0.007);
   Graph_Graph3013->GetYaxis()->SetTitleSize(0.05);
   Graph_Graph3013->GetYaxis()->SetTickLength(0.025);
   Graph_Graph3013->GetYaxis()->SetTitleOffset(1.05);
   Graph_Graph3013->GetYaxis()->SetTitleFont(42);
   Graph_Graph3013->GetZaxis()->SetNdivisions(405);
   Graph_Graph3013->GetZaxis()->SetLabelFont(42);
   Graph_Graph3013->GetZaxis()->SetLabelOffset(0.007);
   Graph_Graph3013->GetZaxis()->SetTitleSize(0.05);
   Graph_Graph3013->GetZaxis()->SetTickLength(0.025);
   Graph_Graph3013->GetZaxis()->SetTitleFont(42);
   grae->SetHistogram(Graph_Graph3013);
   
   grae->Draw("ep 0");
   
   Double_t _fx3014[4] = {
   50,
   87.5,
   125,
   375};
   Double_t _fy3014[4] = {
   1.051026,
   0.9229479,
   0.9655645,
   0.9701841};
   Double_t _felx3014[4] = {
   25,
   12.5,
   25,
   225};
   Double_t _fely3014[4] = {
   0.03858439,
   0.07273848,
   0.06219748,
   0.08113087};
   Double_t _fehx3014[4] = {
   25,
   12.5,
   25,
   225};
   Double_t _fehy3014[4] = {
   0.03858439,
   0.07273848,
   0.06219748,
   0.08113087};
   grae = new TGraphAsymmErrors(4,_fx3014,_fy3014,_felx3014,_fehx3014,_fely3014,_fehy3014);
   grae->SetName("");
   grae->SetTitle("");
   grae->SetFillColor(1);
   grae->SetMarkerStyle(20);
   
   TH1F *Graph_Graph3014 = new TH1F("Graph_Graph3014","",100,0,657.5);
   Graph_Graph3014->SetMinimum(0.8262693);
   Graph_Graph3014->SetMaximum(1.113551);
   Graph_Graph3014->SetDirectory(0);
   Graph_Graph3014->SetStats(0);
   Graph_Graph3014->SetLineStyle(0);
   Graph_Graph3014->GetXaxis()->SetNdivisions(405);
   Graph_Graph3014->GetXaxis()->SetLabelFont(42);
   Graph_Graph3014->GetXaxis()->SetLabelOffset(0.007);
   Graph_Graph3014->GetXaxis()->SetTitleSize(0.05);
   Graph_Graph3014->GetXaxis()->SetTickLength(0.025);
   Graph_Graph3014->GetXaxis()->SetTitleOffset(0.9);
   Graph_Graph3014->GetXaxis()->SetTitleFont(42);
   Graph_Graph3014->GetYaxis()->SetNdivisions(405);
   Graph_Graph3014->GetYaxis()->SetLabelFont(42);
   Graph_Graph3014->GetYaxis()->SetLabelOffset(0.007);
   Graph_Graph3014->GetYaxis()->SetTitleSize(0.05);
   Graph_Graph3014->GetYaxis()->SetTickLength(0.025);
   Graph_Graph3014->GetYaxis()->SetTitleOffset(1.05);
   Graph_Graph3014->GetYaxis()->SetTitleFont(42);
   Graph_Graph3014->GetZaxis()->SetNdivisions(405);
   Graph_Graph3014->GetZaxis()->SetLabelFont(42);
   Graph_Graph3014->GetZaxis()->SetLabelOffset(0.007);
   Graph_Graph3014->GetZaxis()->SetTitleSize(0.05);
   Graph_Graph3014->GetZaxis()->SetTickLength(0.025);
   Graph_Graph3014->GetZaxis()->SetTitleFont(42);
   grae->SetHistogram(Graph_Graph3014);
   
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
