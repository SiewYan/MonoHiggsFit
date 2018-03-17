void PASS_MSDcorr_stackedPostfit_singlemuonw_mass()
{
//=========Macro generated from canvas: c/c
//=========  (Tue Feb 13 18:07:02 2018) by ROOT version6.06/09
   TCanvas *c = new TCanvas("c", "c",0,0,720,800);
   gStyle->SetOptFit(1);
   gStyle->SetOptStat(0);
   gStyle->SetOptTitle(0);
   c->SetHighLightColor(2);
   c->Range(-60.18518,-5.552523,649.6914,3.542858);
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
   Double_t xAxis1[5] = {25, 75, 100, 150, 600}; 
   
   TH1F *dummy__1 = new TH1F("dummy__1","h_all_prefit",4, xAxis1);
   dummy__1->SetBinContent(1,25.34233);
   dummy__1->SetBinContent(2,14.27717);
   dummy__1->SetBinContent(3,9.008582);
   dummy__1->SetBinContent(4,0.5428314);
   dummy__1->SetBinError(1,1.774207);
   dummy__1->SetBinError(2,0.8544973);
   dummy__1->SetBinError(3,0.5030905);
   dummy__1->SetBinError(4,0.04230133);
   dummy__1->SetMinimum(0.0015);
   dummy__1->SetMaximum(1267.116);
   dummy__1->SetEntries(24);
   dummy__1->SetLineColor(0);
   dummy__1->SetLineStyle(0);
   dummy__1->SetLineWidth(0);
   dummy__1->SetMarkerColor(0);
   dummy__1->SetMarkerSize(0);
   dummy__1->GetXaxis()->SetLabelFont(42);
   dummy__1->GetXaxis()->SetLabelOffset(0.007);
   dummy__1->GetXaxis()->SetLabelSize(0);
   dummy__1->GetXaxis()->SetTitleSize(0);
   dummy__1->GetXaxis()->SetTickLength(0.025);
   dummy__1->GetXaxis()->SetTitleOffset(0.9);
   dummy__1->GetXaxis()->SetTitleFont(42);
   dummy__1->GetYaxis()->SetTitle("Events / GeV");
   dummy__1->GetYaxis()->SetLabelFont(42);
   dummy__1->GetYaxis()->SetLabelOffset(0.007);
   dummy__1->GetYaxis()->SetTitleSize(0.05);
   dummy__1->GetYaxis()->SetTickLength(0.025);
   dummy__1->GetYaxis()->SetTitleOffset(1.21);
   dummy__1->GetYaxis()->SetTitleFont(42);
   dummy__1->GetZaxis()->SetLabelFont(42);
   dummy__1->GetZaxis()->SetLabelOffset(0.007);
   dummy__1->GetZaxis()->SetTitleSize(0.05);
   dummy__1->GetZaxis()->SetTickLength(0.025);
   dummy__1->GetZaxis()->SetTitleFont(42);
   dummy__1->Draw("");
   
   THStack *h_stack_postfit = new THStack();
   h_stack_postfit->SetName("h_stack_postfit");
   h_stack_postfit->SetTitle("h_stack_postfit");
   Double_t xAxis2[5] = {25, 75, 100, 150, 600}; 
   
   TH1F *h_stack_postfit_stack_1 = new TH1F("h_stack_postfit_stack_1","h_stack_postfit",4, xAxis2);
   h_stack_postfit_stack_1->SetMinimum(0.0101068);
   h_stack_postfit_stack_1->SetMaximum(40.42719);
   h_stack_postfit_stack_1->SetDirectory(0);
   h_stack_postfit_stack_1->SetStats(0);
   h_stack_postfit_stack_1->SetLineStyle(0);
   h_stack_postfit_stack_1->GetXaxis()->SetNdivisions(405);
   h_stack_postfit_stack_1->GetXaxis()->SetLabelFont(42);
   h_stack_postfit_stack_1->GetXaxis()->SetLabelOffset(0.007);
   h_stack_postfit_stack_1->GetXaxis()->SetTitleSize(0.05);
   h_stack_postfit_stack_1->GetXaxis()->SetTickLength(0.025);
   h_stack_postfit_stack_1->GetXaxis()->SetTitleOffset(0.9);
   h_stack_postfit_stack_1->GetXaxis()->SetTitleFont(42);
   h_stack_postfit_stack_1->GetYaxis()->SetNdivisions(405);
   h_stack_postfit_stack_1->GetYaxis()->SetLabelFont(42);
   h_stack_postfit_stack_1->GetYaxis()->SetLabelOffset(0.007);
   h_stack_postfit_stack_1->GetYaxis()->SetTitleSize(0.05);
   h_stack_postfit_stack_1->GetYaxis()->SetTickLength(0.025);
   h_stack_postfit_stack_1->GetYaxis()->SetTitleOffset(1.05);
   h_stack_postfit_stack_1->GetYaxis()->SetTitleFont(42);
   h_stack_postfit_stack_1->GetZaxis()->SetNdivisions(405);
   h_stack_postfit_stack_1->GetZaxis()->SetLabelFont(42);
   h_stack_postfit_stack_1->GetZaxis()->SetLabelOffset(0.007);
   h_stack_postfit_stack_1->GetZaxis()->SetTitleSize(0.05);
   h_stack_postfit_stack_1->GetZaxis()->SetTickLength(0.025);
   h_stack_postfit_stack_1->GetZaxis()->SetTitleFont(42);
   h_stack_postfit->SetHistogram(h_stack_postfit_stack_1);
   
   Double_t xAxis3[5] = {25, 75, 100, 150, 600}; 
   
   TH1F *qcd__2 = new TH1F("qcd__2","qcd in mass0_wmn",4, xAxis3);
   qcd__2->SetBinContent(1,0.8453439);
   qcd__2->SetBinContent(2,0.1514765);
   qcd__2->SetBinContent(3,0.04847997);
   qcd__2->SetBinContent(4,0.0003402659);
   qcd__2->SetBinError(1,0.9659289);
   qcd__2->SetBinError(2,0.1729891);
   qcd__2->SetBinError(3,0.05536504);
   qcd__2->SetBinError(4,0.0003885902);
   qcd__2->SetEntries(4);

   Int_t ci;      // for color index setting
   TColor *color; // for color definition with alpha
   ci = TColor::GetColor("#ffccff");
   qcd__2->SetFillColor(ci);
   qcd__2->GetXaxis()->SetTitle("min(999.9999,fjmass)");
   qcd__2->GetXaxis()->SetLabelFont(42);
   qcd__2->GetXaxis()->SetLabelSize(0.035);
   qcd__2->GetXaxis()->SetTitleSize(0.035);
   qcd__2->GetXaxis()->SetTitleFont(42);
   qcd__2->GetYaxis()->SetTitle("Events / ( 143.75 )");
   qcd__2->GetYaxis()->SetLabelFont(42);
   qcd__2->GetYaxis()->SetLabelSize(0.035);
   qcd__2->GetYaxis()->SetTitleSize(0.035);
   qcd__2->GetYaxis()->SetTitleFont(42);
   qcd__2->GetZaxis()->SetLabelFont(42);
   qcd__2->GetZaxis()->SetLabelSize(0.035);
   qcd__2->GetZaxis()->SetTitleSize(0.035);
   qcd__2->GetZaxis()->SetTitleFont(42);
   h_stack_postfit->Add(qcd,"");
   Double_t xAxis4[5] = {25, 75, 100, 150, 600}; 
   
   TH1F *zll__3 = new TH1F("zll__3","zll in mass0_wmn",4, xAxis4);
   zll__3->SetBinContent(1,0.4772468);
   zll__3->SetBinContent(2,0.1303104);
   zll__3->SetBinContent(3,0.05155328);
   zll__3->SetBinContent(4,0.006059237);
   zll__3->SetBinError(1,0.01380517);
   zll__3->SetBinError(2,0.003820347);
   zll__3->SetBinError(3,0.0014928);
   zll__3->SetBinError(4,0.0001762816);
   zll__3->SetEntries(4);

   ci = TColor::GetColor("#99ffff");
   zll__3->SetFillColor(ci);
   zll__3->GetXaxis()->SetTitle("min(999.9999,fjmass)");
   zll__3->GetXaxis()->SetLabelFont(42);
   zll__3->GetXaxis()->SetLabelSize(0.035);
   zll__3->GetXaxis()->SetTitleSize(0.035);
   zll__3->GetXaxis()->SetTitleFont(42);
   zll__3->GetYaxis()->SetTitle("Events / ( 143.75 )");
   zll__3->GetYaxis()->SetLabelFont(42);
   zll__3->GetYaxis()->SetLabelSize(0.035);
   zll__3->GetYaxis()->SetTitleSize(0.035);
   zll__3->GetYaxis()->SetTitleFont(42);
   zll__3->GetZaxis()->SetLabelFont(42);
   zll__3->GetZaxis()->SetLabelSize(0.035);
   zll__3->GetZaxis()->SetTitleSize(0.035);
   zll__3->GetZaxis()->SetTitleFont(42);
   h_stack_postfit->Add(zll,"");
   Double_t xAxis5[5] = {25, 75, 100, 150, 600}; 
   
   TH1F *dibosons__4 = new TH1F("dibosons__4","dibosons in mass0_wmn",4, xAxis5);
   dibosons__4->SetBinContent(1,0.7107232);
   dibosons__4->SetBinContent(2,1.80145);
   dibosons__4->SetBinContent(3,0.104499);
   dibosons__4->SetBinContent(4,0.006050959);
   dibosons__4->SetBinError(1,0.0710873);
   dibosons__4->SetBinError(2,0.1801591);
   dibosons__4->SetBinError(3,0.01046214);
   dibosons__4->SetBinError(4,0.0006050907);
   dibosons__4->SetEntries(4);

   ci = TColor::GetColor("#ffff99");
   dibosons__4->SetFillColor(ci);
   dibosons__4->GetXaxis()->SetTitle("min(999.9999,fjmass)");
   dibosons__4->GetXaxis()->SetLabelFont(42);
   dibosons__4->GetXaxis()->SetLabelSize(0.035);
   dibosons__4->GetXaxis()->SetTitleSize(0.035);
   dibosons__4->GetXaxis()->SetTitleFont(42);
   dibosons__4->GetYaxis()->SetTitle("Events / ( 143.75 )");
   dibosons__4->GetYaxis()->SetLabelFont(42);
   dibosons__4->GetYaxis()->SetLabelSize(0.035);
   dibosons__4->GetYaxis()->SetTitleSize(0.035);
   dibosons__4->GetYaxis()->SetTitleFont(42);
   dibosons__4->GetZaxis()->SetLabelFont(42);
   dibosons__4->GetZaxis()->SetLabelSize(0.035);
   dibosons__4->GetZaxis()->SetTitleSize(0.035);
   dibosons__4->GetZaxis()->SetTitleFont(42);
   h_stack_postfit->Add(dibosons,"");
   Double_t xAxis6[5] = {25, 75, 100, 150, 600}; 
   
   TH1F *stop__5 = new TH1F("stop__5","stop in mass0_wmn",4, xAxis6);
   stop__5->SetBinContent(1,0.8004459);
   stop__5->SetBinContent(2,1.322642);
   stop__5->SetBinContent(3,1.063809);
   stop__5->SetBinContent(4,0.05763572);
   stop__5->SetBinError(1,0.09625279);
   stop__5->SetBinError(2,0.1589595);
   stop__5->SetBinError(3,0.1277372);
   stop__5->SetBinError(4,0.006937745);
   stop__5->SetEntries(4);

   ci = TColor::GetColor("#ff9999");
   stop__5->SetFillColor(ci);
   stop__5->GetXaxis()->SetTitle("min(999.9999,fjmass)");
   stop__5->GetXaxis()->SetLabelFont(42);
   stop__5->GetXaxis()->SetLabelSize(0.035);
   stop__5->GetXaxis()->SetTitleSize(0.035);
   stop__5->GetXaxis()->SetTitleFont(42);
   stop__5->GetYaxis()->SetTitle("Events / ( 143.75 )");
   stop__5->GetYaxis()->SetLabelFont(42);
   stop__5->GetYaxis()->SetLabelSize(0.035);
   stop__5->GetYaxis()->SetTitleSize(0.035);
   stop__5->GetYaxis()->SetTitleFont(42);
   stop__5->GetZaxis()->SetLabelFont(42);
   stop__5->GetZaxis()->SetLabelSize(0.035);
   stop__5->GetZaxis()->SetTitleSize(0.035);
   stop__5->GetZaxis()->SetTitleFont(42);
   h_stack_postfit->Add(stop,"");
   Double_t xAxis7[5] = {25, 75, 100, 150, 600}; 
   
   TH1F *wjets__6 = new TH1F("wjets__6","wjets in mass0_wmn",4, xAxis7);
   wjets__6->SetBinContent(1,19.14569);
   wjets__6->SetBinContent(2,2.916129);
   wjets__6->SetBinContent(3,2.441959);
   wjets__6->SetBinContent(4,0.3644592);
   wjets__6->SetBinError(1,0.8079428);
   wjets__6->SetBinError(2,0.6561895);
   wjets__6->SetBinError(3,0.3557431);
   wjets__6->SetBinError(4,0.03210879);
   wjets__6->SetEntries(4);

   ci = TColor::GetColor("#ccffcc");
   wjets__6->SetFillColor(ci);
   wjets__6->GetXaxis()->SetTitle("min(999.9999,fjmass)");
   wjets__6->GetXaxis()->SetLabelFont(42);
   wjets__6->GetXaxis()->SetLabelSize(0.035);
   wjets__6->GetXaxis()->SetTitleSize(0.035);
   wjets__6->GetXaxis()->SetTitleFont(42);
   wjets__6->GetYaxis()->SetTitle("Events / ( 143.75 )");
   wjets__6->GetYaxis()->SetLabelFont(42);
   wjets__6->GetYaxis()->SetLabelSize(0.035);
   wjets__6->GetYaxis()->SetTitleSize(0.035);
   wjets__6->GetYaxis()->SetTitleFont(42);
   wjets__6->GetZaxis()->SetLabelFont(42);
   wjets__6->GetZaxis()->SetLabelSize(0.035);
   wjets__6->GetZaxis()->SetTitleSize(0.035);
   wjets__6->GetZaxis()->SetTitleFont(42);
   h_stack_postfit->Add(wjets,"");
   Double_t xAxis8[5] = {25, 75, 100, 150, 600}; 
   
   TH1F *ttbar__7 = new TH1F("ttbar__7","ttbar in mass0_wmn",4, xAxis8);
   ttbar__7->SetBinContent(1,3.287544);
   ttbar__7->SetBinContent(2,5.750619);
   ttbar__7->SetBinContent(3,4.825269);
   ttbar__7->SetBinContent(4,0.148344);
   ttbar__7->SetBinError(1,0.04359129);
   ttbar__7->SetBinError(2,0.07625048);
   ttbar__7->SetBinError(3,0.06398072);
   ttbar__7->SetBinError(4,0.001966969);
   ttbar__7->SetEntries(4);

   ci = TColor::GetColor("#ffcc66");
   ttbar__7->SetFillColor(ci);
   ttbar__7->GetXaxis()->SetTitle("min(999.9999,fjmass)");
   ttbar__7->GetXaxis()->SetLabelFont(42);
   ttbar__7->GetXaxis()->SetLabelSize(0.035);
   ttbar__7->GetXaxis()->SetTitleSize(0.035);
   ttbar__7->GetXaxis()->SetTitleFont(42);
   ttbar__7->GetYaxis()->SetTitle("Events / ( 143.75 )");
   ttbar__7->GetYaxis()->SetLabelFont(42);
   ttbar__7->GetYaxis()->SetLabelSize(0.035);
   ttbar__7->GetYaxis()->SetTitleSize(0.035);
   ttbar__7->GetYaxis()->SetTitleFont(42);
   ttbar__7->GetZaxis()->SetLabelFont(42);
   ttbar__7->GetZaxis()->SetLabelSize(0.035);
   ttbar__7->GetZaxis()->SetTitleSize(0.035);
   ttbar__7->GetZaxis()->SetTitleFont(42);
   h_stack_postfit->Add(ttbar,"");
   h_stack_postfit->Draw("hist same");
   Double_t xAxis9[5] = {25, 75, 100, 150, 600}; 
   
   TH1F *h_all_prefit__8 = new TH1F("h_all_prefit__8","h_all_prefit",4, xAxis9);
   h_all_prefit__8->SetBinContent(1,25.34233);
   h_all_prefit__8->SetBinContent(2,14.27717);
   h_all_prefit__8->SetBinContent(3,9.008582);
   h_all_prefit__8->SetBinContent(4,0.5428314);
   h_all_prefit__8->SetBinError(1,1.774207);
   h_all_prefit__8->SetBinError(2,0.8544973);
   h_all_prefit__8->SetBinError(3,0.5030905);
   h_all_prefit__8->SetBinError(4,0.04230133);
   h_all_prefit__8->SetEntries(24);
   h_all_prefit__8->SetLineColor(2);
   h_all_prefit__8->SetLineStyle(7);
   h_all_prefit__8->SetLineWidth(2);
   h_all_prefit__8->GetXaxis()->SetLabelFont(42);
   h_all_prefit__8->GetXaxis()->SetLabelOffset(0.007);
   h_all_prefit__8->GetXaxis()->SetTitleSize(0.05);
   h_all_prefit__8->GetXaxis()->SetTickLength(0.025);
   h_all_prefit__8->GetXaxis()->SetTitleOffset(0.9);
   h_all_prefit__8->GetXaxis()->SetTitleFont(42);
   h_all_prefit__8->GetYaxis()->SetLabelFont(42);
   h_all_prefit__8->GetYaxis()->SetLabelOffset(0.007);
   h_all_prefit__8->GetYaxis()->SetTitleSize(0.05);
   h_all_prefit__8->GetYaxis()->SetTickLength(0.025);
   h_all_prefit__8->GetYaxis()->SetTitleOffset(1.05);
   h_all_prefit__8->GetYaxis()->SetTitleFont(42);
   h_all_prefit__8->GetZaxis()->SetLabelFont(42);
   h_all_prefit__8->GetZaxis()->SetLabelOffset(0.007);
   h_all_prefit__8->GetZaxis()->SetTitleSize(0.05);
   h_all_prefit__8->GetZaxis()->SetTickLength(0.025);
   h_all_prefit__8->GetZaxis()->SetTitleFont(42);
   h_all_prefit__8->Draw("histsame");
   Double_t xAxis10[5] = {25, 75, 100, 150, 600}; 
   
   TH1F *singlemuonw_data__9 = new TH1F("singlemuonw_data__9","base",4, xAxis10);
   singlemuonw_data__9->SetBinContent(1,24.48);
   singlemuonw_data__9->SetBinContent(2,12.36);
   singlemuonw_data__9->SetBinContent(3,8.84);
   singlemuonw_data__9->SetBinContent(4,0.5822222);
   singlemuonw_data__9->SetBinError(1,0.6997142);
   singlemuonw_data__9->SetBinError(2,0.7031358);
   singlemuonw_data__9->SetBinError(3,0.4204759);
   singlemuonw_data__9->SetBinError(4,0.03596981);
   singlemuonw_data__9->SetEntries(1841.67);
   singlemuonw_data__9->SetMarkerStyle(20);
   singlemuonw_data__9->SetMarkerSize(1.2);
   singlemuonw_data__9->GetXaxis()->SetTitle("min(999.9999,fjmass)");
   singlemuonw_data__9->GetXaxis()->SetLabelFont(42);
   singlemuonw_data__9->GetXaxis()->SetLabelSize(0.035);
   singlemuonw_data__9->GetXaxis()->SetTitleSize(0.035);
   singlemuonw_data__9->GetXaxis()->SetTitleFont(42);
   singlemuonw_data__9->GetYaxis()->SetLabelFont(42);
   singlemuonw_data__9->GetYaxis()->SetLabelSize(0.035);
   singlemuonw_data__9->GetYaxis()->SetTitleSize(0.035);
   singlemuonw_data__9->GetYaxis()->SetTitleFont(42);
   singlemuonw_data__9->GetZaxis()->SetLabelFont(42);
   singlemuonw_data__9->GetZaxis()->SetLabelSize(0.035);
   singlemuonw_data__9->GetZaxis()->SetTitleSize(0.035);
   singlemuonw_data__9->GetZaxis()->SetTitleFont(42);
   singlemuonw_data__9->Draw("epsame e0");
   
   TLegend *leg = new TLegend(0.55,0.62,0.88,0.93,NULL,"brNDC");
   leg->SetBorderSize(0);
   leg->SetTextSize(0.035);
   leg->SetLineColor(0);
   leg->SetLineStyle(1);
   leg->SetLineWidth(1);
   leg->SetFillColor(0);
   leg->SetFillStyle(0);
   TLegendEntry *entry=leg->AddEntry("singlemuonw_data","Data","elp");
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
   TLatex *   tex = new TLatex(0.16,0.825,"W CR (#mu)");
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
   Double_t xAxis11[5] = {25, 75, 100, 150, 600}; 
   
   TH1F *dummy_copy__10 = new TH1F("dummy_copy__10","h_all_prefit",4, xAxis11);
   dummy_copy__10->SetBinContent(1,25.34233);
   dummy_copy__10->SetBinContent(2,14.27717);
   dummy_copy__10->SetBinContent(3,9.008582);
   dummy_copy__10->SetBinContent(4,0.5428314);
   dummy_copy__10->SetBinError(1,1.774207);
   dummy_copy__10->SetBinError(2,0.8544973);
   dummy_copy__10->SetBinError(3,0.5030905);
   dummy_copy__10->SetBinError(4,0.04230133);
   dummy_copy__10->SetMinimum(0.0015);
   dummy_copy__10->SetMaximum(1267.116);
   dummy_copy__10->SetEntries(24);
   dummy_copy__10->SetDirectory(0);
   dummy_copy__10->SetLineColor(0);
   dummy_copy__10->SetLineStyle(0);
   dummy_copy__10->SetLineWidth(0);
   dummy_copy__10->SetMarkerColor(0);
   dummy_copy__10->SetMarkerSize(0);
   dummy_copy__10->GetXaxis()->SetLabelFont(42);
   dummy_copy__10->GetXaxis()->SetLabelOffset(0.007);
   dummy_copy__10->GetXaxis()->SetLabelSize(0);
   dummy_copy__10->GetXaxis()->SetTitleSize(0);
   dummy_copy__10->GetXaxis()->SetTickLength(0.025);
   dummy_copy__10->GetXaxis()->SetTitleOffset(0.9);
   dummy_copy__10->GetXaxis()->SetTitleFont(42);
   dummy_copy__10->GetYaxis()->SetTitle("Events / GeV");
   dummy_copy__10->GetYaxis()->SetLabelFont(42);
   dummy_copy__10->GetYaxis()->SetLabelOffset(0.007);
   dummy_copy__10->GetYaxis()->SetTitleSize(0.05);
   dummy_copy__10->GetYaxis()->SetTickLength(0.025);
   dummy_copy__10->GetYaxis()->SetTitleOffset(1.21);
   dummy_copy__10->GetYaxis()->SetTitleFont(42);
   dummy_copy__10->GetZaxis()->SetLabelFont(42);
   dummy_copy__10->GetZaxis()->SetLabelOffset(0.007);
   dummy_copy__10->GetZaxis()->SetTitleSize(0.05);
   dummy_copy__10->GetZaxis()->SetTickLength(0.025);
   dummy_copy__10->GetZaxis()->SetTitleFont(42);
   dummy_copy__10->Draw("sameaxis");
  
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
   Double_t xAxis12[5] = {25, 75, 100, 150, 600}; 
   
   TH1F *dummy2__11 = new TH1F("dummy2__11","dummy2",4, xAxis12);
   dummy2__11->SetBinContent(1,1);
   dummy2__11->SetBinContent(2,1);
   dummy2__11->SetBinContent(3,1);
   dummy2__11->SetMinimum(0.1);
   dummy2__11->SetMaximum(2.1);
   dummy2__11->SetEntries(3);
   dummy2__11->SetLineColor(0);
   dummy2__11->SetLineStyle(0);
   dummy2__11->SetLineWidth(0);
   dummy2__11->SetMarkerColor(0);
   dummy2__11->SetMarkerSize(0);
   dummy2__11->GetXaxis()->SetTitle("Fatjet m_{SD} (GeV)");
   dummy2__11->GetXaxis()->SetLabelFont(42);
   dummy2__11->GetXaxis()->SetLabelOffset(0.007);
   dummy2__11->GetXaxis()->SetTitleSize(0.05);
   dummy2__11->GetXaxis()->SetTickLength(0.025);
   dummy2__11->GetXaxis()->SetTitleOffset(0.9);
   dummy2__11->GetXaxis()->SetTitleFont(42);
   dummy2__11->GetYaxis()->SetTitle("Data / Pred.");
   dummy2__11->GetYaxis()->CenterTitle(true);
   dummy2__11->GetYaxis()->SetNdivisions(5);
   dummy2__11->GetYaxis()->SetLabelFont(42);
   dummy2__11->GetYaxis()->SetLabelOffset(0.007);
   dummy2__11->GetYaxis()->SetLabelSize(0.03);
   dummy2__11->GetYaxis()->SetTickLength(0.025);
   dummy2__11->GetYaxis()->SetTitleOffset(1.5);
   dummy2__11->GetYaxis()->SetTitleFont(42);
   dummy2__11->GetZaxis()->SetNdivisions(405);
   dummy2__11->GetZaxis()->SetLabelFont(42);
   dummy2__11->GetZaxis()->SetLabelOffset(0.007);
   dummy2__11->GetZaxis()->SetTitleSize(0.05);
   dummy2__11->GetZaxis()->SetTickLength(0.025);
   dummy2__11->GetZaxis()->SetTitleFont(42);
   dummy2__11->Draw("hist");
   Double_t xAxis13[5] = {25, 75, 100, 150, 600}; 
   
   TH1F *total_background__12 = new TH1F("total_background__12","Total background in mass0_wmn",4, xAxis13);
   total_background__12->SetBinContent(1,1);
   total_background__12->SetBinContent(2,1);
   total_background__12->SetBinContent(3,1);
   total_background__12->SetBinContent(4,1);
   total_background__12->SetBinContent(5,1);
   total_background__12->SetBinError(1,0.03322712);
   total_background__12->SetBinError(2,0.05240637);
   total_background__12->SetBinError(3,0.03941816);
   total_background__12->SetBinError(4,0.05332509);
   total_background__12->SetEntries(29);

   ci = TColor::GetColor("#f4eb99");
   total_background__12->SetFillColor(ci);

   ci = TColor::GetColor("#f4eb99");
   total_background__12->SetLineColor(ci);
   total_background__12->SetMarkerSize(0);
   total_background__12->GetXaxis()->SetTitle("min(999.9999,fjmass)");
   total_background__12->GetXaxis()->SetLabelFont(42);
   total_background__12->GetXaxis()->SetLabelSize(0.035);
   total_background__12->GetXaxis()->SetTitleSize(0.035);
   total_background__12->GetXaxis()->SetTitleFont(42);
   total_background__12->GetYaxis()->SetTitle("Events / ( 143.75 )");
   total_background__12->GetYaxis()->SetLabelFont(42);
   total_background__12->GetYaxis()->SetLabelSize(0.035);
   total_background__12->GetYaxis()->SetTitleSize(0.035);
   total_background__12->GetYaxis()->SetTitleFont(42);
   total_background__12->GetZaxis()->SetLabelFont(42);
   total_background__12->GetZaxis()->SetLabelSize(0.035);
   total_background__12->GetZaxis()->SetTitleSize(0.035);
   total_background__12->GetZaxis()->SetTitleFont(42);
   total_background__12->Draw("e2same");
   
   TF1 *f11 = new TF1("f1","1",-5000,5000);
   f11->SetFillColor(19);
   f11->SetFillStyle(0);
   f11->SetLineWidth(2);
   f11->SetLineStyle(2);
   f11->GetXaxis()->SetNdivisions(405);
   f11->GetXaxis()->SetLabelFont(42);
   f11->GetXaxis()->SetLabelOffset(0.007);
   f11->GetXaxis()->SetTitleSize(0.05);
   f11->GetXaxis()->SetTickLength(0.025);
   f11->GetXaxis()->SetTitleOffset(0.9);
   f11->GetXaxis()->SetTitleFont(42);
   f11->GetYaxis()->SetNdivisions(405);
   f11->GetYaxis()->SetLabelFont(42);
   f11->GetYaxis()->SetLabelOffset(0.007);
   f11->GetYaxis()->SetTitleSize(0.05);
   f11->GetYaxis()->SetTickLength(0.025);
   f11->GetYaxis()->SetTitleOffset(1.05);
   f11->GetYaxis()->SetTitleFont(42);
   f11->Draw("same");
   
   Double_t _fx3001[4] = {
   50,
   87.5,
   125,
   375};
   Double_t _fy3001[4] = {
   0.9659729,
   0.865718,
   0.9812865,
   1.072565};
   Double_t _felx3001[4] = {
   25,
   12.5,
   25,
   225};
   Double_t _fely3001[4] = {
   0.0276105,
   0.04924898,
   0.04667504,
   0.06626331};
   Double_t _fehx3001[4] = {
   25,
   12.5,
   25,
   225};
   Double_t _fehy3001[4] = {
   0.0276105,
   0.04924898,
   0.04667504,
   0.06626331};
   TGraphAsymmErrors *grae = new TGraphAsymmErrors(4,_fx3001,_fy3001,_felx3001,_fehx3001,_fely3001,_fehy3001);
   grae->SetName("");
   grae->SetTitle("");
   grae->SetFillColor(1);
   grae->SetLineColor(2);
   grae->SetLineStyle(7);
   grae->SetMarkerColor(2);
   grae->SetMarkerStyle(24);
   
   TH1F *Graph_Graph3001 = new TH1F("Graph_Graph3001","",100,0,657.5);
   Graph_Graph3001->SetMinimum(0.784233);
   Graph_Graph3001->SetMaximum(1.171065);
   Graph_Graph3001->SetDirectory(0);
   Graph_Graph3001->SetStats(0);
   Graph_Graph3001->SetLineStyle(0);
   Graph_Graph3001->GetXaxis()->SetNdivisions(405);
   Graph_Graph3001->GetXaxis()->SetLabelFont(42);
   Graph_Graph3001->GetXaxis()->SetLabelOffset(0.007);
   Graph_Graph3001->GetXaxis()->SetTitleSize(0.05);
   Graph_Graph3001->GetXaxis()->SetTickLength(0.025);
   Graph_Graph3001->GetXaxis()->SetTitleOffset(0.9);
   Graph_Graph3001->GetXaxis()->SetTitleFont(42);
   Graph_Graph3001->GetYaxis()->SetNdivisions(405);
   Graph_Graph3001->GetYaxis()->SetLabelFont(42);
   Graph_Graph3001->GetYaxis()->SetLabelOffset(0.007);
   Graph_Graph3001->GetYaxis()->SetTitleSize(0.05);
   Graph_Graph3001->GetYaxis()->SetTickLength(0.025);
   Graph_Graph3001->GetYaxis()->SetTitleOffset(1.05);
   Graph_Graph3001->GetYaxis()->SetTitleFont(42);
   Graph_Graph3001->GetZaxis()->SetNdivisions(405);
   Graph_Graph3001->GetZaxis()->SetLabelFont(42);
   Graph_Graph3001->GetZaxis()->SetLabelOffset(0.007);
   Graph_Graph3001->GetZaxis()->SetTitleSize(0.05);
   Graph_Graph3001->GetZaxis()->SetTickLength(0.025);
   Graph_Graph3001->GetZaxis()->SetTitleFont(42);
   grae->SetHistogram(Graph_Graph3001);
   
   grae->Draw("ep 0");
   
   Double_t _fx3002[4] = {
   50,
   87.5,
   125,
   375};
   Double_t _fy3002[4] = {
   0.9688529,
   1.023804,
   1.035666,
   0.9988555};
   Double_t _felx3002[4] = {
   25,
   12.5,
   25,
   225};
   Double_t _fely3002[4] = {
   0.02769282,
   0.05824216,
   0.04926161,
   0.0617095};
   Double_t _fehx3002[4] = {
   25,
   12.5,
   25,
   225};
   Double_t _fehy3002[4] = {
   0.02769282,
   0.05824216,
   0.04926161,
   0.0617095};
   grae = new TGraphAsymmErrors(4,_fx3002,_fy3002,_felx3002,_fehx3002,_fely3002,_fehy3002);
   grae->SetName("");
   grae->SetTitle("");
   grae->SetFillColor(1);
   grae->SetMarkerStyle(20);
   
   TH1F *Graph_Graph3002 = new TH1F("Graph_Graph3002","",100,0,657.5);
   Graph_Graph3002->SetMinimum(0.9223679);
   Graph_Graph3002->SetMaximum(1.099706);
   Graph_Graph3002->SetDirectory(0);
   Graph_Graph3002->SetStats(0);
   Graph_Graph3002->SetLineStyle(0);
   Graph_Graph3002->GetXaxis()->SetNdivisions(405);
   Graph_Graph3002->GetXaxis()->SetLabelFont(42);
   Graph_Graph3002->GetXaxis()->SetLabelOffset(0.007);
   Graph_Graph3002->GetXaxis()->SetTitleSize(0.05);
   Graph_Graph3002->GetXaxis()->SetTickLength(0.025);
   Graph_Graph3002->GetXaxis()->SetTitleOffset(0.9);
   Graph_Graph3002->GetXaxis()->SetTitleFont(42);
   Graph_Graph3002->GetYaxis()->SetNdivisions(405);
   Graph_Graph3002->GetYaxis()->SetLabelFont(42);
   Graph_Graph3002->GetYaxis()->SetLabelOffset(0.007);
   Graph_Graph3002->GetYaxis()->SetTitleSize(0.05);
   Graph_Graph3002->GetYaxis()->SetTickLength(0.025);
   Graph_Graph3002->GetYaxis()->SetTitleOffset(1.05);
   Graph_Graph3002->GetYaxis()->SetTitleFont(42);
   Graph_Graph3002->GetZaxis()->SetNdivisions(405);
   Graph_Graph3002->GetZaxis()->SetLabelFont(42);
   Graph_Graph3002->GetZaxis()->SetLabelOffset(0.007);
   Graph_Graph3002->GetZaxis()->SetTitleSize(0.05);
   Graph_Graph3002->GetZaxis()->SetTickLength(0.025);
   Graph_Graph3002->GetZaxis()->SetTitleFont(42);
   grae->SetHistogram(Graph_Graph3002);
   
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
