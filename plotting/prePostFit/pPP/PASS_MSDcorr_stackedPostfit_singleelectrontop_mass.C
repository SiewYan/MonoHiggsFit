void PASS_MSDcorr_stackedPostfit_singleelectrontop_mass()
{
//=========Macro generated from canvas: c/c
//=========  (Tue Feb 13 18:07:03 2018) by ROOT version6.06/09
   TCanvas *c = new TCanvas("c", "c",0,0,720,800);
   gStyle->SetOptFit(1);
   gStyle->SetOptStat(0);
   gStyle->SetOptTitle(0);
   c->SetHighLightColor(2);
   c->Range(-60.18518,-7.349292,649.6914,2.488547);
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
   Double_t xAxis101[5] = {25, 75, 100, 150, 600}; 
   
   TH1F *dummy__93 = new TH1F("dummy__93","h_all_prefit",4, xAxis101);
   dummy__93->SetBinContent(1,1.91038);
   dummy__93->SetBinContent(2,2.058802);
   dummy__93->SetBinContent(3,1.613857);
   dummy__93->SetBinContent(4,0.05821455);
   dummy__93->SetBinError(1,0.1901913);
   dummy__93->SetBinError(2,0.2127148);
   dummy__93->SetBinError(3,0.1463593);
   dummy__93->SetBinError(4,0.007415283);
   dummy__93->SetMinimum(4e-05);
   dummy__93->SetMaximum(102.9401);
   dummy__93->SetEntries(24);
   dummy__93->SetLineColor(0);
   dummy__93->SetLineStyle(0);
   dummy__93->SetLineWidth(0);
   dummy__93->SetMarkerColor(0);
   dummy__93->SetMarkerSize(0);
   dummy__93->GetXaxis()->SetNdivisions(405);
   dummy__93->GetXaxis()->SetLabelFont(42);
   dummy__93->GetXaxis()->SetLabelOffset(0.007);
   dummy__93->GetXaxis()->SetLabelSize(0);
   dummy__93->GetXaxis()->SetTitleSize(0);
   dummy__93->GetXaxis()->SetTickLength(0.025);
   dummy__93->GetXaxis()->SetTitleOffset(0.9);
   dummy__93->GetXaxis()->SetTitleFont(42);
   dummy__93->GetYaxis()->SetTitle("Events / GeV");
   dummy__93->GetYaxis()->SetNdivisions(405);
   dummy__93->GetYaxis()->SetLabelFont(42);
   dummy__93->GetYaxis()->SetLabelOffset(0.007);
   dummy__93->GetYaxis()->SetTitleSize(0.05);
   dummy__93->GetYaxis()->SetTickLength(0.025);
   dummy__93->GetYaxis()->SetTitleOffset(1.21);
   dummy__93->GetYaxis()->SetTitleFont(42);
   dummy__93->GetZaxis()->SetNdivisions(405);
   dummy__93->GetZaxis()->SetLabelFont(42);
   dummy__93->GetZaxis()->SetLabelOffset(0.007);
   dummy__93->GetZaxis()->SetTitleSize(0.05);
   dummy__93->GetZaxis()->SetTickLength(0.025);
   dummy__93->GetZaxis()->SetTitleFont(42);
   dummy__93->Draw("");
   
   THStack *h_stack_postfit = new THStack();
   h_stack_postfit->SetName("h_stack_postfit");
   h_stack_postfit->SetTitle("h_stack_postfit");
   Double_t xAxis102[5] = {25, 75, 100, 150, 600}; 
   
   TH1F *h_stack_postfit_stack_9 = new TH1F("h_stack_postfit_stack_9","h_stack_postfit",4, xAxis102);
   h_stack_postfit_stack_9->SetMinimum(2.704839e-10);
   h_stack_postfit_stack_9->SetMaximum(4.89694);
   h_stack_postfit_stack_9->SetDirectory(0);
   h_stack_postfit_stack_9->SetStats(0);
   h_stack_postfit_stack_9->SetLineStyle(0);
   h_stack_postfit_stack_9->GetXaxis()->SetNdivisions(405);
   h_stack_postfit_stack_9->GetXaxis()->SetLabelFont(42);
   h_stack_postfit_stack_9->GetXaxis()->SetLabelOffset(0.007);
   h_stack_postfit_stack_9->GetXaxis()->SetTitleSize(0.05);
   h_stack_postfit_stack_9->GetXaxis()->SetTickLength(0.025);
   h_stack_postfit_stack_9->GetXaxis()->SetTitleOffset(0.9);
   h_stack_postfit_stack_9->GetXaxis()->SetTitleFont(42);
   h_stack_postfit_stack_9->GetYaxis()->SetNdivisions(405);
   h_stack_postfit_stack_9->GetYaxis()->SetLabelFont(42);
   h_stack_postfit_stack_9->GetYaxis()->SetLabelOffset(0.007);
   h_stack_postfit_stack_9->GetYaxis()->SetTitleSize(0.05);
   h_stack_postfit_stack_9->GetYaxis()->SetTickLength(0.025);
   h_stack_postfit_stack_9->GetYaxis()->SetTitleOffset(1.05);
   h_stack_postfit_stack_9->GetYaxis()->SetTitleFont(42);
   h_stack_postfit_stack_9->GetZaxis()->SetNdivisions(405);
   h_stack_postfit_stack_9->GetZaxis()->SetLabelFont(42);
   h_stack_postfit_stack_9->GetZaxis()->SetLabelOffset(0.007);
   h_stack_postfit_stack_9->GetZaxis()->SetTitleSize(0.05);
   h_stack_postfit_stack_9->GetZaxis()->SetTickLength(0.025);
   h_stack_postfit_stack_9->GetZaxis()->SetTitleFont(42);
   h_stack_postfit->SetHistogram(h_stack_postfit_stack_9);
   
   Double_t xAxis103[5] = {25, 75, 100, 150, 600}; 
   
   TH1F *qcd__94 = new TH1F("qcd__94","qcd in mass0_ten",4, xAxis103);
   qcd__94->SetBinContent(1,0.07895967);
   qcd__94->SetBinContent(2,3.947983e-09);
   qcd__94->SetBinContent(3,3.947983e-09);
   qcd__94->SetBinContent(4,3.947983e-09);
   qcd__94->SetBinError(1,0.04570324);
   qcd__94->SetBinError(2,2.285161e-09);
   qcd__94->SetBinError(3,2.285161e-09);
   qcd__94->SetBinError(4,2.285161e-09);
   qcd__94->SetEntries(4);

   Int_t ci;      // for color index setting
   TColor *color; // for color definition with alpha
   ci = TColor::GetColor("#ffccff");
   qcd__94->SetFillColor(ci);
   qcd__94->GetXaxis()->SetTitle("min(999.9999,fjmass)");
   qcd__94->GetXaxis()->SetLabelFont(42);
   qcd__94->GetXaxis()->SetLabelSize(0.035);
   qcd__94->GetXaxis()->SetTitleSize(0.035);
   qcd__94->GetXaxis()->SetTitleFont(42);
   qcd__94->GetYaxis()->SetTitle("Events / ( 143.75 )");
   qcd__94->GetYaxis()->SetLabelFont(42);
   qcd__94->GetYaxis()->SetLabelSize(0.035);
   qcd__94->GetYaxis()->SetTitleSize(0.035);
   qcd__94->GetYaxis()->SetTitleFont(42);
   qcd__94->GetZaxis()->SetLabelFont(42);
   qcd__94->GetZaxis()->SetLabelSize(0.035);
   qcd__94->GetZaxis()->SetTitleSize(0.035);
   qcd__94->GetZaxis()->SetTitleFont(42);
   h_stack_postfit->Add(qcd,"");
   Double_t xAxis104[5] = {25, 75, 100, 150, 600}; 
   
   TH1F *zll__95 = new TH1F("zll__95","zll in mass0_ten",4, xAxis104);
   zll__95->SetBinContent(1,0.007326313);
   zll__95->SetBinContent(2,0.01076087);
   zll__95->SetBinContent(3,0.006201319);
   zll__95->SetBinContent(4,7.730754e-05);
   zll__95->SetBinError(1,0.0005127167);
   zll__95->SetBinError(2,0.0002845431);
   zll__95->SetBinError(3,0.0005435748);
   zll__95->SetBinError(4,6.928915e-06);
   zll__95->SetEntries(4);

   ci = TColor::GetColor("#99ffff");
   zll__95->SetFillColor(ci);
   zll__95->GetXaxis()->SetTitle("min(999.9999,fjmass)");
   zll__95->GetXaxis()->SetLabelFont(42);
   zll__95->GetXaxis()->SetLabelSize(0.035);
   zll__95->GetXaxis()->SetTitleSize(0.035);
   zll__95->GetXaxis()->SetTitleFont(42);
   zll__95->GetYaxis()->SetTitle("Events / ( 143.75 )");
   zll__95->GetYaxis()->SetLabelFont(42);
   zll__95->GetYaxis()->SetLabelSize(0.035);
   zll__95->GetYaxis()->SetTitleSize(0.035);
   zll__95->GetYaxis()->SetTitleFont(42);
   zll__95->GetZaxis()->SetLabelFont(42);
   zll__95->GetZaxis()->SetLabelSize(0.035);
   zll__95->GetZaxis()->SetTitleSize(0.035);
   zll__95->GetZaxis()->SetTitleFont(42);
   h_stack_postfit->Add(zll,"");
   Double_t xAxis105[5] = {25, 75, 100, 150, 600}; 
   
   TH1F *dibosons__96 = new TH1F("dibosons__96","dibosons in mass0_ten",4, xAxis105);
   dibosons__96->SetBinContent(1,2.292254e-09);
   dibosons__96->SetBinContent(2,0.07700482);
   dibosons__96->SetBinContent(3,0.007342678);
   dibosons__96->SetBinContent(4,2.292254e-09);
   dibosons__96->SetBinError(1,2.492816e-10);
   dibosons__96->SetBinError(2,0.008606222);
   dibosons__96->SetBinError(3,0.0007527748);
   dibosons__96->SetBinError(4,2.492816e-10);
   dibosons__96->SetEntries(4);

   ci = TColor::GetColor("#ffff99");
   dibosons__96->SetFillColor(ci);
   dibosons__96->GetXaxis()->SetTitle("min(999.9999,fjmass)");
   dibosons__96->GetXaxis()->SetLabelFont(42);
   dibosons__96->GetXaxis()->SetLabelSize(0.035);
   dibosons__96->GetXaxis()->SetTitleSize(0.035);
   dibosons__96->GetXaxis()->SetTitleFont(42);
   dibosons__96->GetYaxis()->SetTitle("Events / ( 143.75 )");
   dibosons__96->GetYaxis()->SetLabelFont(42);
   dibosons__96->GetYaxis()->SetLabelSize(0.035);
   dibosons__96->GetYaxis()->SetTitleSize(0.035);
   dibosons__96->GetYaxis()->SetTitleFont(42);
   dibosons__96->GetZaxis()->SetLabelFont(42);
   dibosons__96->GetZaxis()->SetLabelSize(0.035);
   dibosons__96->GetZaxis()->SetTitleSize(0.035);
   dibosons__96->GetZaxis()->SetTitleFont(42);
   h_stack_postfit->Add(dibosons,"");
   Double_t xAxis106[5] = {25, 75, 100, 150, 600}; 
   
   TH1F *stop__97 = new TH1F("stop__97","stop in mass0_ten",4, xAxis106);
   stop__97->SetBinContent(1,0.1453035);
   stop__97->SetBinContent(2,0.175405);
   stop__97->SetBinContent(3,0.07850058);
   stop__97->SetBinContent(4,0.003329294);
   stop__97->SetBinError(1,0.01716861);
   stop__97->SetBinError(2,0.02073594);
   stop__97->SetBinError(3,0.009360814);
   stop__97->SetBinError(4,0.0003989899);
   stop__97->SetEntries(4);

   ci = TColor::GetColor("#ff9999");
   stop__97->SetFillColor(ci);
   stop__97->GetXaxis()->SetTitle("min(999.9999,fjmass)");
   stop__97->GetXaxis()->SetLabelFont(42);
   stop__97->GetXaxis()->SetLabelSize(0.035);
   stop__97->GetXaxis()->SetTitleSize(0.035);
   stop__97->GetXaxis()->SetTitleFont(42);
   stop__97->GetYaxis()->SetTitle("Events / ( 143.75 )");
   stop__97->GetYaxis()->SetLabelFont(42);
   stop__97->GetYaxis()->SetLabelSize(0.035);
   stop__97->GetYaxis()->SetTitleSize(0.035);
   stop__97->GetYaxis()->SetTitleFont(42);
   stop__97->GetZaxis()->SetLabelFont(42);
   stop__97->GetZaxis()->SetLabelSize(0.035);
   stop__97->GetZaxis()->SetTitleSize(0.035);
   stop__97->GetZaxis()->SetTitleFont(42);
   h_stack_postfit->Add(stop,"");
   Double_t xAxis107[5] = {25, 75, 100, 150, 600}; 
   
   TH1F *wjets__98 = new TH1F("wjets__98","wjets in mass0_ten",4, xAxis107);
   wjets__98->SetBinContent(1,0.4598295);
   wjets__98->SetBinContent(2,0.06895259);
   wjets__98->SetBinContent(3,0.03692069);
   wjets__98->SetBinContent(4,0.007125748);
   wjets__98->SetBinError(1,0.03438676);
   wjets__98->SetBinError(2,0.004631056);
   wjets__98->SetBinError(3,0.00251397);
   wjets__98->SetBinError(4,0.0004973605);
   wjets__98->SetEntries(4);

   ci = TColor::GetColor("#ccffcc");
   wjets__98->SetFillColor(ci);
   wjets__98->GetXaxis()->SetTitle("min(999.9999,fjmass)");
   wjets__98->GetXaxis()->SetLabelFont(42);
   wjets__98->GetXaxis()->SetLabelSize(0.035);
   wjets__98->GetXaxis()->SetTitleSize(0.035);
   wjets__98->GetXaxis()->SetTitleFont(42);
   wjets__98->GetYaxis()->SetTitle("Events / ( 143.75 )");
   wjets__98->GetYaxis()->SetLabelFont(42);
   wjets__98->GetYaxis()->SetLabelSize(0.035);
   wjets__98->GetYaxis()->SetTitleSize(0.035);
   wjets__98->GetYaxis()->SetTitleFont(42);
   wjets__98->GetZaxis()->SetLabelFont(42);
   wjets__98->GetZaxis()->SetLabelSize(0.035);
   wjets__98->GetZaxis()->SetTitleSize(0.035);
   wjets__98->GetZaxis()->SetTitleFont(42);
   h_stack_postfit->Add(wjets,"");
   Double_t xAxis108[5] = {25, 75, 100, 150, 600}; 
   
   TH1F *ttbar__99 = new TH1F("ttbar__99","ttbar in mass0_ten",4, xAxis108);
   ttbar__99->SetBinContent(1,0.9089512);
   ttbar__99->SetBinContent(2,1.408621);
   ttbar__99->SetBinContent(3,1.041036);
   ttbar__99->SetBinContent(4,0.05158548);
   ttbar__99->SetBinError(1,0.1293087);
   ttbar__99->SetBinError(2,0.1882794);
   ttbar__99->SetBinError(3,0.1070453);
   ttbar__99->SetBinError(4,0.008897436);
   ttbar__99->SetEntries(4);

   ci = TColor::GetColor("#ffcc66");
   ttbar__99->SetFillColor(ci);
   ttbar__99->GetXaxis()->SetTitle("min(999.9999,fjmass)");
   ttbar__99->GetXaxis()->SetLabelFont(42);
   ttbar__99->GetXaxis()->SetLabelSize(0.035);
   ttbar__99->GetXaxis()->SetTitleSize(0.035);
   ttbar__99->GetXaxis()->SetTitleFont(42);
   ttbar__99->GetYaxis()->SetTitle("Events / ( 143.75 )");
   ttbar__99->GetYaxis()->SetLabelFont(42);
   ttbar__99->GetYaxis()->SetLabelSize(0.035);
   ttbar__99->GetYaxis()->SetTitleSize(0.035);
   ttbar__99->GetYaxis()->SetTitleFont(42);
   ttbar__99->GetZaxis()->SetLabelFont(42);
   ttbar__99->GetZaxis()->SetLabelSize(0.035);
   ttbar__99->GetZaxis()->SetTitleSize(0.035);
   ttbar__99->GetZaxis()->SetTitleFont(42);
   h_stack_postfit->Add(ttbar,"");
   h_stack_postfit->Draw("hist same");
   Double_t xAxis109[5] = {25, 75, 100, 150, 600}; 
   
   TH1F *h_all_prefit__100 = new TH1F("h_all_prefit__100","h_all_prefit",4, xAxis109);
   h_all_prefit__100->SetBinContent(1,1.91038);
   h_all_prefit__100->SetBinContent(2,2.058802);
   h_all_prefit__100->SetBinContent(3,1.613857);
   h_all_prefit__100->SetBinContent(4,0.05821455);
   h_all_prefit__100->SetBinError(1,0.1901913);
   h_all_prefit__100->SetBinError(2,0.2127148);
   h_all_prefit__100->SetBinError(3,0.1463593);
   h_all_prefit__100->SetBinError(4,0.007415283);
   h_all_prefit__100->SetEntries(24);
   h_all_prefit__100->SetLineColor(2);
   h_all_prefit__100->SetLineStyle(7);
   h_all_prefit__100->SetLineWidth(2);
   h_all_prefit__100->GetXaxis()->SetNdivisions(405);
   h_all_prefit__100->GetXaxis()->SetLabelFont(42);
   h_all_prefit__100->GetXaxis()->SetLabelOffset(0.007);
   h_all_prefit__100->GetXaxis()->SetTitleSize(0.05);
   h_all_prefit__100->GetXaxis()->SetTickLength(0.025);
   h_all_prefit__100->GetXaxis()->SetTitleOffset(0.9);
   h_all_prefit__100->GetXaxis()->SetTitleFont(42);
   h_all_prefit__100->GetYaxis()->SetNdivisions(405);
   h_all_prefit__100->GetYaxis()->SetLabelFont(42);
   h_all_prefit__100->GetYaxis()->SetLabelOffset(0.007);
   h_all_prefit__100->GetYaxis()->SetTitleSize(0.05);
   h_all_prefit__100->GetYaxis()->SetTickLength(0.025);
   h_all_prefit__100->GetYaxis()->SetTitleOffset(1.05);
   h_all_prefit__100->GetYaxis()->SetTitleFont(42);
   h_all_prefit__100->GetZaxis()->SetNdivisions(405);
   h_all_prefit__100->GetZaxis()->SetLabelFont(42);
   h_all_prefit__100->GetZaxis()->SetLabelOffset(0.007);
   h_all_prefit__100->GetZaxis()->SetTitleSize(0.05);
   h_all_prefit__100->GetZaxis()->SetTickLength(0.025);
   h_all_prefit__100->GetZaxis()->SetTitleFont(42);
   h_all_prefit__100->Draw("histsame");
   Double_t xAxis110[5] = {25, 75, 100, 150, 600}; 
   
   TH1F *singleelectrontop_data__101 = new TH1F("singleelectrontop_data__101","base",4, xAxis110);
   singleelectrontop_data__101->SetBinContent(1,1.44);
   singleelectrontop_data__101->SetBinContent(2,1.68);
   singleelectrontop_data__101->SetBinContent(3,1.14);
   singleelectrontop_data__101->SetBinContent(4,0.06);
   singleelectrontop_data__101->SetBinError(1,0.1697056);
   singleelectrontop_data__101->SetBinError(2,0.2592296);
   singleelectrontop_data__101->SetBinError(3,0.1509967);
   singleelectrontop_data__101->SetBinError(4,0.01154701);
   singleelectrontop_data__101->SetEntries(156.9148);
   singleelectrontop_data__101->SetMarkerStyle(20);
   singleelectrontop_data__101->SetMarkerSize(1.2);
   singleelectrontop_data__101->GetXaxis()->SetTitle("min(999.9999,fjmass)");
   singleelectrontop_data__101->GetXaxis()->SetLabelFont(42);
   singleelectrontop_data__101->GetXaxis()->SetLabelSize(0.035);
   singleelectrontop_data__101->GetXaxis()->SetTitleSize(0.035);
   singleelectrontop_data__101->GetXaxis()->SetTitleFont(42);
   singleelectrontop_data__101->GetYaxis()->SetLabelFont(42);
   singleelectrontop_data__101->GetYaxis()->SetLabelSize(0.035);
   singleelectrontop_data__101->GetYaxis()->SetTitleSize(0.035);
   singleelectrontop_data__101->GetYaxis()->SetTitleFont(42);
   singleelectrontop_data__101->GetZaxis()->SetLabelFont(42);
   singleelectrontop_data__101->GetZaxis()->SetLabelSize(0.035);
   singleelectrontop_data__101->GetZaxis()->SetTitleSize(0.035);
   singleelectrontop_data__101->GetZaxis()->SetTitleFont(42);
   singleelectrontop_data__101->Draw("epsame e0");
   
   TLegend *leg = new TLegend(0.55,0.6033333,0.88,0.93,NULL,"brNDC");
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
   TLatex *   tex = new TLatex(0.16,0.825,"t#bar{t} CR (e)");
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
   Double_t xAxis111[5] = {25, 75, 100, 150, 600}; 
   
   TH1F *dummy_copy__102 = new TH1F("dummy_copy__102","h_all_prefit",4, xAxis111);
   dummy_copy__102->SetBinContent(1,1.91038);
   dummy_copy__102->SetBinContent(2,2.058802);
   dummy_copy__102->SetBinContent(3,1.613857);
   dummy_copy__102->SetBinContent(4,0.05821455);
   dummy_copy__102->SetBinError(1,0.1901913);
   dummy_copy__102->SetBinError(2,0.2127148);
   dummy_copy__102->SetBinError(3,0.1463593);
   dummy_copy__102->SetBinError(4,0.007415283);
   dummy_copy__102->SetMinimum(4e-05);
   dummy_copy__102->SetMaximum(102.9401);
   dummy_copy__102->SetEntries(24);
   dummy_copy__102->SetDirectory(0);
   dummy_copy__102->SetLineColor(0);
   dummy_copy__102->SetLineStyle(0);
   dummy_copy__102->SetLineWidth(0);
   dummy_copy__102->SetMarkerColor(0);
   dummy_copy__102->SetMarkerSize(0);
   dummy_copy__102->GetXaxis()->SetNdivisions(405);
   dummy_copy__102->GetXaxis()->SetLabelFont(42);
   dummy_copy__102->GetXaxis()->SetLabelOffset(0.007);
   dummy_copy__102->GetXaxis()->SetLabelSize(0);
   dummy_copy__102->GetXaxis()->SetTitleSize(0);
   dummy_copy__102->GetXaxis()->SetTickLength(0.025);
   dummy_copy__102->GetXaxis()->SetTitleOffset(0.9);
   dummy_copy__102->GetXaxis()->SetTitleFont(42);
   dummy_copy__102->GetYaxis()->SetTitle("Events / GeV");
   dummy_copy__102->GetYaxis()->SetNdivisions(405);
   dummy_copy__102->GetYaxis()->SetLabelFont(42);
   dummy_copy__102->GetYaxis()->SetLabelOffset(0.007);
   dummy_copy__102->GetYaxis()->SetTitleSize(0.05);
   dummy_copy__102->GetYaxis()->SetTickLength(0.025);
   dummy_copy__102->GetYaxis()->SetTitleOffset(1.21);
   dummy_copy__102->GetYaxis()->SetTitleFont(42);
   dummy_copy__102->GetZaxis()->SetNdivisions(405);
   dummy_copy__102->GetZaxis()->SetLabelFont(42);
   dummy_copy__102->GetZaxis()->SetLabelOffset(0.007);
   dummy_copy__102->GetZaxis()->SetTitleSize(0.05);
   dummy_copy__102->GetZaxis()->SetTickLength(0.025);
   dummy_copy__102->GetZaxis()->SetTitleFont(42);
   dummy_copy__102->Draw("sameaxis");
  
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
   Double_t xAxis112[5] = {25, 75, 100, 150, 600}; 
   
   TH1F *dummy2__103 = new TH1F("dummy2__103","dummy2",4, xAxis112);
   dummy2__103->SetBinContent(1,1);
   dummy2__103->SetBinContent(2,1);
   dummy2__103->SetBinContent(3,1);
   dummy2__103->SetMinimum(0.1);
   dummy2__103->SetMaximum(2.1);
   dummy2__103->SetEntries(3);
   dummy2__103->SetLineColor(0);
   dummy2__103->SetLineStyle(0);
   dummy2__103->SetLineWidth(0);
   dummy2__103->SetMarkerColor(0);
   dummy2__103->SetMarkerSize(0);
   dummy2__103->GetXaxis()->SetTitle("Fatjet m_{SD} (GeV)");
   dummy2__103->GetXaxis()->SetLabelFont(42);
   dummy2__103->GetXaxis()->SetLabelOffset(0.007);
   dummy2__103->GetXaxis()->SetTitleSize(0.05);
   dummy2__103->GetXaxis()->SetTickLength(0.025);
   dummy2__103->GetXaxis()->SetTitleOffset(0.9);
   dummy2__103->GetXaxis()->SetTitleFont(42);
   dummy2__103->GetYaxis()->SetTitle("Data / Pred.");
   dummy2__103->GetYaxis()->CenterTitle(true);
   dummy2__103->GetYaxis()->SetNdivisions(5);
   dummy2__103->GetYaxis()->SetLabelFont(42);
   dummy2__103->GetYaxis()->SetLabelOffset(0.007);
   dummy2__103->GetYaxis()->SetLabelSize(0.03);
   dummy2__103->GetYaxis()->SetTickLength(0.025);
   dummy2__103->GetYaxis()->SetTitleOffset(1.5);
   dummy2__103->GetYaxis()->SetTitleFont(42);
   dummy2__103->GetZaxis()->SetNdivisions(405);
   dummy2__103->GetZaxis()->SetLabelFont(42);
   dummy2__103->GetZaxis()->SetLabelOffset(0.007);
   dummy2__103->GetZaxis()->SetTitleSize(0.05);
   dummy2__103->GetZaxis()->SetTickLength(0.025);
   dummy2__103->GetZaxis()->SetTitleFont(42);
   dummy2__103->Draw("hist");
   Double_t xAxis113[5] = {25, 75, 100, 150, 600}; 
   
   TH1F *total_background__104 = new TH1F("total_background__104","Total background in mass0_ten",4, xAxis113);
   total_background__104->SetBinContent(1,1);
   total_background__104->SetBinContent(2,1);
   total_background__104->SetBinContent(3,1);
   total_background__104->SetBinContent(4,1);
   total_background__104->SetBinContent(5,1);
   total_background__104->SetBinError(1,0.08118859);
   total_background__104->SetBinError(2,0.1088625);
   total_background__104->SetBinError(3,0.09159353);
   total_background__104->SetBinError(4,0.1415523);
   total_background__104->SetEntries(29);

   ci = TColor::GetColor("#f4eb99");
   total_background__104->SetFillColor(ci);

   ci = TColor::GetColor("#f4eb99");
   total_background__104->SetLineColor(ci);
   total_background__104->SetMarkerSize(0);
   total_background__104->GetXaxis()->SetTitle("min(999.9999,fjmass)");
   total_background__104->GetXaxis()->SetLabelFont(42);
   total_background__104->GetXaxis()->SetLabelSize(0.035);
   total_background__104->GetXaxis()->SetTitleSize(0.035);
   total_background__104->GetXaxis()->SetTitleFont(42);
   total_background__104->GetYaxis()->SetTitle("Events / ( 143.75 )");
   total_background__104->GetYaxis()->SetLabelFont(42);
   total_background__104->GetYaxis()->SetLabelSize(0.035);
   total_background__104->GetYaxis()->SetTitleSize(0.035);
   total_background__104->GetYaxis()->SetTitleFont(42);
   total_background__104->GetZaxis()->SetLabelFont(42);
   total_background__104->GetZaxis()->SetLabelSize(0.035);
   total_background__104->GetZaxis()->SetTitleSize(0.035);
   total_background__104->GetZaxis()->SetTitleFont(42);
   total_background__104->Draw("e2same");
   
   TF1 *f19 = new TF1("f1","1",-5000,5000);
   f19->SetFillColor(19);
   f19->SetFillStyle(0);
   f19->SetLineWidth(2);
   f19->SetLineStyle(2);
   f19->GetXaxis()->SetNdivisions(405);
   f19->GetXaxis()->SetLabelFont(42);
   f19->GetXaxis()->SetLabelOffset(0.007);
   f19->GetXaxis()->SetTitleSize(0.05);
   f19->GetXaxis()->SetTickLength(0.025);
   f19->GetXaxis()->SetTitleOffset(0.9);
   f19->GetXaxis()->SetTitleFont(42);
   f19->GetYaxis()->SetNdivisions(405);
   f19->GetYaxis()->SetLabelFont(42);
   f19->GetYaxis()->SetLabelOffset(0.007);
   f19->GetYaxis()->SetTitleSize(0.05);
   f19->GetYaxis()->SetTickLength(0.025);
   f19->GetYaxis()->SetTitleOffset(1.05);
   f19->GetYaxis()->SetTitleFont(42);
   f19->Draw("same");
   
   Double_t _fx3017[4] = {
   50,
   87.5,
   125,
   375};
   Double_t _fy3017[4] = {
   0.7537769,
   0.8160085,
   0.7063825,
   1.03067};
   Double_t _felx3017[4] = {
   25,
   12.5,
   25,
   225};
   Double_t _fely3017[4] = {
   0.08883346,
   0.1259128,
   0.09356265,
   0.1983526};
   Double_t _fehx3017[4] = {
   25,
   12.5,
   25,
   225};
   Double_t _fehy3017[4] = {
   0.08883346,
   0.1259128,
   0.09356265,
   0.1983526};
   TGraphAsymmErrors *grae = new TGraphAsymmErrors(4,_fx3017,_fy3017,_felx3017,_fehx3017,_fely3017,_fehy3017);
   grae->SetName("");
   grae->SetTitle("");
   grae->SetFillColor(1);
   grae->SetLineColor(2);
   grae->SetLineStyle(7);
   grae->SetMarkerColor(2);
   grae->SetMarkerStyle(24);
   
   TH1F *Graph_Graph3017 = new TH1F("Graph_Graph3017","",100,0,657.5);
   Graph_Graph3017->SetMinimum(0.5511995);
   Graph_Graph3017->SetMaximum(1.290643);
   Graph_Graph3017->SetDirectory(0);
   Graph_Graph3017->SetStats(0);
   Graph_Graph3017->SetLineStyle(0);
   Graph_Graph3017->GetXaxis()->SetNdivisions(405);
   Graph_Graph3017->GetXaxis()->SetLabelFont(42);
   Graph_Graph3017->GetXaxis()->SetLabelOffset(0.007);
   Graph_Graph3017->GetXaxis()->SetTitleSize(0.05);
   Graph_Graph3017->GetXaxis()->SetTickLength(0.025);
   Graph_Graph3017->GetXaxis()->SetTitleOffset(0.9);
   Graph_Graph3017->GetXaxis()->SetTitleFont(42);
   Graph_Graph3017->GetYaxis()->SetNdivisions(405);
   Graph_Graph3017->GetYaxis()->SetLabelFont(42);
   Graph_Graph3017->GetYaxis()->SetLabelOffset(0.007);
   Graph_Graph3017->GetYaxis()->SetTitleSize(0.05);
   Graph_Graph3017->GetYaxis()->SetTickLength(0.025);
   Graph_Graph3017->GetYaxis()->SetTitleOffset(1.05);
   Graph_Graph3017->GetYaxis()->SetTitleFont(42);
   Graph_Graph3017->GetZaxis()->SetNdivisions(405);
   Graph_Graph3017->GetZaxis()->SetLabelFont(42);
   Graph_Graph3017->GetZaxis()->SetLabelOffset(0.007);
   Graph_Graph3017->GetZaxis()->SetTitleSize(0.05);
   Graph_Graph3017->GetZaxis()->SetTickLength(0.025);
   Graph_Graph3017->GetZaxis()->SetTitleFont(42);
   grae->SetHistogram(Graph_Graph3017);
   
   grae->Draw("ep 0");
   
   Double_t _fx3018[4] = {
   50,
   87.5,
   125,
   375};
   Double_t _fy3018[4] = {
   0.8997919,
   0.9651042,
   0.974358,
   0.9659061};
   Double_t _felx3018[4] = {
   25,
   12.5,
   25,
   225};
   Double_t _fely3018[4] = {
   0.1060415,
   0.1489188,
   0.1290569,
   0.1858887};
   Double_t _fehx3018[4] = {
   25,
   12.5,
   25,
   225};
   Double_t _fehy3018[4] = {
   0.1060415,
   0.1489188,
   0.1290569,
   0.1858887};
   grae = new TGraphAsymmErrors(4,_fx3018,_fy3018,_felx3018,_fehx3018,_fely3018,_fehy3018);
   grae->SetName("");
   grae->SetTitle("");
   grae->SetFillColor(1);
   grae->SetMarkerStyle(20);
   
   TH1F *Graph_Graph3018 = new TH1F("Graph_Graph3018","",100,0,657.5);
   Graph_Graph3018->SetMinimum(0.7428396);
   Graph_Graph3018->SetMaximum(1.188973);
   Graph_Graph3018->SetDirectory(0);
   Graph_Graph3018->SetStats(0);
   Graph_Graph3018->SetLineStyle(0);
   Graph_Graph3018->GetXaxis()->SetNdivisions(405);
   Graph_Graph3018->GetXaxis()->SetLabelFont(42);
   Graph_Graph3018->GetXaxis()->SetLabelOffset(0.007);
   Graph_Graph3018->GetXaxis()->SetTitleSize(0.05);
   Graph_Graph3018->GetXaxis()->SetTickLength(0.025);
   Graph_Graph3018->GetXaxis()->SetTitleOffset(0.9);
   Graph_Graph3018->GetXaxis()->SetTitleFont(42);
   Graph_Graph3018->GetYaxis()->SetNdivisions(405);
   Graph_Graph3018->GetYaxis()->SetLabelFont(42);
   Graph_Graph3018->GetYaxis()->SetLabelOffset(0.007);
   Graph_Graph3018->GetYaxis()->SetTitleSize(0.05);
   Graph_Graph3018->GetYaxis()->SetTickLength(0.025);
   Graph_Graph3018->GetYaxis()->SetTitleOffset(1.05);
   Graph_Graph3018->GetYaxis()->SetTitleFont(42);
   Graph_Graph3018->GetZaxis()->SetNdivisions(405);
   Graph_Graph3018->GetZaxis()->SetLabelFont(42);
   Graph_Graph3018->GetZaxis()->SetLabelOffset(0.007);
   Graph_Graph3018->GetZaxis()->SetTitleSize(0.05);
   Graph_Graph3018->GetZaxis()->SetTickLength(0.025);
   Graph_Graph3018->GetZaxis()->SetTitleFont(42);
   grae->SetHistogram(Graph_Graph3018);
   
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
