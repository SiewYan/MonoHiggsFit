void Fail_MSDcorr_stackedPostfit_dielectron_fail_mass()
{
//=========Macro generated from canvas: c/c
//=========  (Tue Feb 13 18:07:03 2018) by ROOT version6.06/09
   TCanvas *c = new TCanvas("c", "c",0,0,720,800);
   gStyle->SetOptFit(1);
   gStyle->SetOptStat(0);
   gStyle->SetOptTitle(0);
   c->SetHighLightColor(2);
   c->Range(-60.18518,-5.965967,649.6914,3.404249);
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
   Double_t xAxis138[5] = {25, 75, 100, 150, 600}; 
   
   TH1F *dummy__127 = new TH1F("dummy__127","h_all_prefit",4, xAxis138);
   dummy__127->SetBinContent(1,17.86243);
   dummy__127->SetBinContent(2,11.10745);
   dummy__127->SetBinContent(3,6.722343);
   dummy__127->SetBinContent(4,1.075452);
   dummy__127->SetBinError(1,1.274555);
   dummy__127->SetBinError(2,0.7648618);
   dummy__127->SetBinError(3,0.472548);
   dummy__127->SetBinError(4,0.07652831);
   dummy__127->SetMinimum(0.0007);
   dummy__127->SetMaximum(893.1213);
   dummy__127->SetEntries(16);
   dummy__127->SetLineColor(0);
   dummy__127->SetLineStyle(0);
   dummy__127->SetLineWidth(0);
   dummy__127->SetMarkerColor(0);
   dummy__127->SetMarkerSize(0);
   dummy__127->GetXaxis()->SetNdivisions(405);
   dummy__127->GetXaxis()->SetLabelFont(42);
   dummy__127->GetXaxis()->SetLabelOffset(0.007);
   dummy__127->GetXaxis()->SetLabelSize(0);
   dummy__127->GetXaxis()->SetTitleSize(0);
   dummy__127->GetXaxis()->SetTickLength(0.025);
   dummy__127->GetXaxis()->SetTitleOffset(0.9);
   dummy__127->GetXaxis()->SetTitleFont(42);
   dummy__127->GetYaxis()->SetTitle("Events / GeV");
   dummy__127->GetYaxis()->SetNdivisions(405);
   dummy__127->GetYaxis()->SetLabelFont(42);
   dummy__127->GetYaxis()->SetLabelOffset(0.007);
   dummy__127->GetYaxis()->SetTitleSize(0.05);
   dummy__127->GetYaxis()->SetTickLength(0.025);
   dummy__127->GetYaxis()->SetTitleOffset(1.21);
   dummy__127->GetYaxis()->SetTitleFont(42);
   dummy__127->GetZaxis()->SetNdivisions(405);
   dummy__127->GetZaxis()->SetLabelFont(42);
   dummy__127->GetZaxis()->SetLabelOffset(0.007);
   dummy__127->GetZaxis()->SetTitleSize(0.05);
   dummy__127->GetZaxis()->SetTickLength(0.025);
   dummy__127->GetZaxis()->SetTitleFont(42);
   dummy__127->Draw("");
   
   THStack *h_stack_postfit = new THStack();
   h_stack_postfit->SetName("h_stack_postfit");
   h_stack_postfit->SetTitle("h_stack_postfit");
   Double_t xAxis139[5] = {25, 75, 100, 150, 600}; 
   
   TH1F *h_stack_postfit_stack_12 = new TH1F("h_stack_postfit_stack_12","h_stack_postfit",4, xAxis139);
   h_stack_postfit_stack_12->SetMinimum(0.0009745987);
   h_stack_postfit_stack_12->SetMaximum(35.75294);
   h_stack_postfit_stack_12->SetDirectory(0);
   h_stack_postfit_stack_12->SetStats(0);
   h_stack_postfit_stack_12->SetLineStyle(0);
   h_stack_postfit_stack_12->GetXaxis()->SetNdivisions(405);
   h_stack_postfit_stack_12->GetXaxis()->SetLabelFont(42);
   h_stack_postfit_stack_12->GetXaxis()->SetLabelOffset(0.007);
   h_stack_postfit_stack_12->GetXaxis()->SetTitleSize(0.05);
   h_stack_postfit_stack_12->GetXaxis()->SetTickLength(0.025);
   h_stack_postfit_stack_12->GetXaxis()->SetTitleOffset(0.9);
   h_stack_postfit_stack_12->GetXaxis()->SetTitleFont(42);
   h_stack_postfit_stack_12->GetYaxis()->SetNdivisions(405);
   h_stack_postfit_stack_12->GetYaxis()->SetLabelFont(42);
   h_stack_postfit_stack_12->GetYaxis()->SetLabelOffset(0.007);
   h_stack_postfit_stack_12->GetYaxis()->SetTitleSize(0.05);
   h_stack_postfit_stack_12->GetYaxis()->SetTickLength(0.025);
   h_stack_postfit_stack_12->GetYaxis()->SetTitleOffset(1.05);
   h_stack_postfit_stack_12->GetYaxis()->SetTitleFont(42);
   h_stack_postfit_stack_12->GetZaxis()->SetNdivisions(405);
   h_stack_postfit_stack_12->GetZaxis()->SetLabelFont(42);
   h_stack_postfit_stack_12->GetZaxis()->SetLabelOffset(0.007);
   h_stack_postfit_stack_12->GetZaxis()->SetTitleSize(0.05);
   h_stack_postfit_stack_12->GetZaxis()->SetTickLength(0.025);
   h_stack_postfit_stack_12->GetZaxis()->SetTitleFont(42);
   h_stack_postfit->SetHistogram(h_stack_postfit_stack_12);
   
   Double_t xAxis140[5] = {25, 75, 100, 150, 600}; 
   
   TH1F *dibosons__128 = new TH1F("dibosons__128","dibosons in mass0_zee_fail",4, xAxis140);
   dibosons__128->SetBinContent(1,0.4185238);
   dibosons__128->SetBinContent(2,1.758533);
   dibosons__128->SetBinContent(3,0.1696849);
   dibosons__128->SetBinContent(4,0.01647301);
   dibosons__128->SetBinError(1,0.04162264);
   dibosons__128->SetBinError(2,0.1748758);
   dibosons__128->SetBinError(3,0.0168858);
   dibosons__128->SetBinError(4,0.001637941);
   dibosons__128->SetEntries(4);

   Int_t ci;      // for color index setting
   TColor *color; // for color definition with alpha
   ci = TColor::GetColor("#ffff99");
   dibosons__128->SetFillColor(ci);
   dibosons__128->GetXaxis()->SetTitle("min(999.9999,fjmass)");
   dibosons__128->GetXaxis()->SetLabelFont(42);
   dibosons__128->GetXaxis()->SetLabelSize(0.035);
   dibosons__128->GetXaxis()->SetTitleSize(0.035);
   dibosons__128->GetXaxis()->SetTitleFont(42);
   dibosons__128->GetYaxis()->SetTitle("Events / ( 143.75 )");
   dibosons__128->GetYaxis()->SetLabelFont(42);
   dibosons__128->GetYaxis()->SetLabelSize(0.035);
   dibosons__128->GetYaxis()->SetTitleSize(0.035);
   dibosons__128->GetYaxis()->SetTitleFont(42);
   dibosons__128->GetZaxis()->SetLabelFont(42);
   dibosons__128->GetZaxis()->SetLabelSize(0.035);
   dibosons__128->GetZaxis()->SetTitleSize(0.035);
   dibosons__128->GetZaxis()->SetTitleFont(42);
   h_stack_postfit->Add(dibosons,"");
   Double_t xAxis141[5] = {25, 75, 100, 150, 600}; 
   
   TH1F *stop__129 = new TH1F("stop__129","stop in mass0_zee_fail",4, xAxis141);
   stop__129->SetBinContent(1,0.01587963);
   stop__129->SetBinContent(2,0.02197445);
   stop__129->SetBinContent(3,0.0165481);
   stop__129->SetBinContent(4,0.003602736);
   stop__129->SetBinError(1,0.001892534);
   stop__129->SetBinError(2,0.00262784);
   stop__129->SetBinError(3,0.001972681);
   stop__129->SetBinError(4,0.0004351035);
   stop__129->SetEntries(4);

   ci = TColor::GetColor("#ff9999");
   stop__129->SetFillColor(ci);
   stop__129->GetXaxis()->SetTitle("min(999.9999,fjmass)");
   stop__129->GetXaxis()->SetLabelFont(42);
   stop__129->GetXaxis()->SetLabelSize(0.035);
   stop__129->GetXaxis()->SetTitleSize(0.035);
   stop__129->GetXaxis()->SetTitleFont(42);
   stop__129->GetYaxis()->SetTitle("Events / ( 143.75 )");
   stop__129->GetYaxis()->SetLabelFont(42);
   stop__129->GetYaxis()->SetLabelSize(0.035);
   stop__129->GetYaxis()->SetTitleSize(0.035);
   stop__129->GetYaxis()->SetTitleFont(42);
   stop__129->GetZaxis()->SetLabelFont(42);
   stop__129->GetZaxis()->SetLabelSize(0.035);
   stop__129->GetZaxis()->SetTitleSize(0.035);
   stop__129->GetZaxis()->SetTitleFont(42);
   h_stack_postfit->Add(stop,"");
   Double_t xAxis142[5] = {25, 75, 100, 150, 600}; 
   
   TH1F *ttbar__130 = new TH1F("ttbar__130","ttbar in mass0_zee_fail",4, xAxis142);
   ttbar__130->SetBinContent(1,0.05933635);
   ttbar__130->SetBinContent(2,0.168372);
   ttbar__130->SetBinContent(3,0.09705433);
   ttbar__130->SetBinContent(4,0.01135401);
   ttbar__130->SetBinError(1,0.00162511);
   ttbar__130->SetBinError(2,0.004637969);
   ttbar__130->SetBinError(3,0.002807084);
   ttbar__130->SetBinError(4,0.0003134547);
   ttbar__130->SetEntries(4);

   ci = TColor::GetColor("#ffcc66");
   ttbar__130->SetFillColor(ci);
   ttbar__130->GetXaxis()->SetTitle("min(999.9999,fjmass)");
   ttbar__130->GetXaxis()->SetLabelFont(42);
   ttbar__130->GetXaxis()->SetLabelSize(0.035);
   ttbar__130->GetXaxis()->SetTitleSize(0.035);
   ttbar__130->GetXaxis()->SetTitleFont(42);
   ttbar__130->GetYaxis()->SetTitle("Events / ( 143.75 )");
   ttbar__130->GetYaxis()->SetLabelFont(42);
   ttbar__130->GetYaxis()->SetLabelSize(0.035);
   ttbar__130->GetYaxis()->SetTitleSize(0.035);
   ttbar__130->GetYaxis()->SetTitleFont(42);
   ttbar__130->GetZaxis()->SetLabelFont(42);
   ttbar__130->GetZaxis()->SetLabelSize(0.035);
   ttbar__130->GetZaxis()->SetTitleSize(0.035);
   ttbar__130->GetZaxis()->SetTitleFont(42);
   h_stack_postfit->Add(ttbar,"");
   Double_t xAxis143[5] = {25, 75, 100, 150, 600}; 
   
   TH1F *zll__131 = new TH1F("zll__131","zll in mass0_zee_fail",4, xAxis143);
   zll__131->SetBinContent(1,19.64843);
   zll__131->SetBinContent(2,9.364084);
   zll__131->SetBinContent(3,7.477102);
   zll__131->SetBinContent(4,1.206605);
   zll__131->SetBinError(1,0.5501873);
   zll__131->SetBinError(2,0.5093102);
   zll__131->SetBinError(3,0.3074808);
   zll__131->SetBinError(4,0.03349634);
   zll__131->SetEntries(4);

   ci = TColor::GetColor("#99ffff");
   zll__131->SetFillColor(ci);
   zll__131->GetXaxis()->SetTitle("min(999.9999,fjmass)");
   zll__131->GetXaxis()->SetLabelFont(42);
   zll__131->GetXaxis()->SetLabelSize(0.035);
   zll__131->GetXaxis()->SetTitleSize(0.035);
   zll__131->GetXaxis()->SetTitleFont(42);
   zll__131->GetYaxis()->SetTitle("Events / ( 143.75 )");
   zll__131->GetYaxis()->SetLabelFont(42);
   zll__131->GetYaxis()->SetLabelSize(0.035);
   zll__131->GetYaxis()->SetTitleSize(0.035);
   zll__131->GetYaxis()->SetTitleFont(42);
   zll__131->GetZaxis()->SetLabelFont(42);
   zll__131->GetZaxis()->SetLabelSize(0.035);
   zll__131->GetZaxis()->SetTitleSize(0.035);
   zll__131->GetZaxis()->SetTitleFont(42);
   h_stack_postfit->Add(zll,"");
   h_stack_postfit->Draw("hist same");
   Double_t xAxis144[5] = {25, 75, 100, 150, 600}; 
   
   TH1F *h_all_prefit__132 = new TH1F("h_all_prefit__132","h_all_prefit",4, xAxis144);
   h_all_prefit__132->SetBinContent(1,17.86243);
   h_all_prefit__132->SetBinContent(2,11.10745);
   h_all_prefit__132->SetBinContent(3,6.722343);
   h_all_prefit__132->SetBinContent(4,1.075452);
   h_all_prefit__132->SetBinError(1,1.274555);
   h_all_prefit__132->SetBinError(2,0.7648618);
   h_all_prefit__132->SetBinError(3,0.472548);
   h_all_prefit__132->SetBinError(4,0.07652831);
   h_all_prefit__132->SetEntries(16);
   h_all_prefit__132->SetLineColor(2);
   h_all_prefit__132->SetLineStyle(7);
   h_all_prefit__132->SetLineWidth(2);
   h_all_prefit__132->GetXaxis()->SetNdivisions(405);
   h_all_prefit__132->GetXaxis()->SetLabelFont(42);
   h_all_prefit__132->GetXaxis()->SetLabelOffset(0.007);
   h_all_prefit__132->GetXaxis()->SetTitleSize(0.05);
   h_all_prefit__132->GetXaxis()->SetTickLength(0.025);
   h_all_prefit__132->GetXaxis()->SetTitleOffset(0.9);
   h_all_prefit__132->GetXaxis()->SetTitleFont(42);
   h_all_prefit__132->GetYaxis()->SetNdivisions(405);
   h_all_prefit__132->GetYaxis()->SetLabelFont(42);
   h_all_prefit__132->GetYaxis()->SetLabelOffset(0.007);
   h_all_prefit__132->GetYaxis()->SetTitleSize(0.05);
   h_all_prefit__132->GetYaxis()->SetTickLength(0.025);
   h_all_prefit__132->GetYaxis()->SetTitleOffset(1.05);
   h_all_prefit__132->GetYaxis()->SetTitleFont(42);
   h_all_prefit__132->GetZaxis()->SetNdivisions(405);
   h_all_prefit__132->GetZaxis()->SetLabelFont(42);
   h_all_prefit__132->GetZaxis()->SetLabelOffset(0.007);
   h_all_prefit__132->GetZaxis()->SetTitleSize(0.05);
   h_all_prefit__132->GetZaxis()->SetTickLength(0.025);
   h_all_prefit__132->GetZaxis()->SetTitleFont(42);
   h_all_prefit__132->Draw("histsame");
   Double_t xAxis145[5] = {25, 75, 100, 150, 600}; 
   
   TH1F *dielectron_data__133 = new TH1F("dielectron_data__133","base",4, xAxis145);
   dielectron_data__133->SetBinContent(1,20.14);
   dielectron_data__133->SetBinContent(2,11.32);
   dielectron_data__133->SetBinContent(3,7.76);
   dielectron_data__133->SetBinContent(4,1.248889);
   dielectron_data__133->SetBinContent(5,0.004444445);
   dielectron_data__133->SetBinError(1,0.6346653);
   dielectron_data__133->SetBinError(2,0.6729042);
   dielectron_data__133->SetBinError(3,0.3939543);
   dielectron_data__133->SetBinError(4,0.0526812);
   dielectron_data__133->SetBinError(5,0.003142697);
   dielectron_data__133->SetEntries(1615.796);
   dielectron_data__133->SetMarkerStyle(20);
   dielectron_data__133->SetMarkerSize(1.2);
   dielectron_data__133->GetXaxis()->SetTitle("min(999.9999,fjmass)");
   dielectron_data__133->GetXaxis()->SetLabelFont(42);
   dielectron_data__133->GetXaxis()->SetLabelSize(0.035);
   dielectron_data__133->GetXaxis()->SetTitleSize(0.035);
   dielectron_data__133->GetXaxis()->SetTitleFont(42);
   dielectron_data__133->GetYaxis()->SetLabelFont(42);
   dielectron_data__133->GetYaxis()->SetLabelSize(0.035);
   dielectron_data__133->GetYaxis()->SetTitleSize(0.035);
   dielectron_data__133->GetYaxis()->SetTitleFont(42);
   dielectron_data__133->GetZaxis()->SetLabelFont(42);
   dielectron_data__133->GetZaxis()->SetLabelSize(0.035);
   dielectron_data__133->GetZaxis()->SetTitleSize(0.035);
   dielectron_data__133->GetZaxis()->SetTitleFont(42);
   dielectron_data__133->Draw("epsame e0");
   
   TLegend *leg = new TLegend(0.55,0.73,0.88,0.93,NULL,"brNDC");
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
   TLatex *   tex = new TLatex(0.16,0.825,"Dielectron CR fail");
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
   Double_t xAxis146[5] = {25, 75, 100, 150, 600}; 
   
   TH1F *dummy_copy__134 = new TH1F("dummy_copy__134","h_all_prefit",4, xAxis146);
   dummy_copy__134->SetBinContent(1,17.86243);
   dummy_copy__134->SetBinContent(2,11.10745);
   dummy_copy__134->SetBinContent(3,6.722343);
   dummy_copy__134->SetBinContent(4,1.075452);
   dummy_copy__134->SetBinError(1,1.274555);
   dummy_copy__134->SetBinError(2,0.7648618);
   dummy_copy__134->SetBinError(3,0.472548);
   dummy_copy__134->SetBinError(4,0.07652831);
   dummy_copy__134->SetMinimum(0.0007);
   dummy_copy__134->SetMaximum(893.1213);
   dummy_copy__134->SetEntries(16);
   dummy_copy__134->SetDirectory(0);
   dummy_copy__134->SetLineColor(0);
   dummy_copy__134->SetLineStyle(0);
   dummy_copy__134->SetLineWidth(0);
   dummy_copy__134->SetMarkerColor(0);
   dummy_copy__134->SetMarkerSize(0);
   dummy_copy__134->GetXaxis()->SetNdivisions(405);
   dummy_copy__134->GetXaxis()->SetLabelFont(42);
   dummy_copy__134->GetXaxis()->SetLabelOffset(0.007);
   dummy_copy__134->GetXaxis()->SetLabelSize(0);
   dummy_copy__134->GetXaxis()->SetTitleSize(0);
   dummy_copy__134->GetXaxis()->SetTickLength(0.025);
   dummy_copy__134->GetXaxis()->SetTitleOffset(0.9);
   dummy_copy__134->GetXaxis()->SetTitleFont(42);
   dummy_copy__134->GetYaxis()->SetTitle("Events / GeV");
   dummy_copy__134->GetYaxis()->SetNdivisions(405);
   dummy_copy__134->GetYaxis()->SetLabelFont(42);
   dummy_copy__134->GetYaxis()->SetLabelOffset(0.007);
   dummy_copy__134->GetYaxis()->SetTitleSize(0.05);
   dummy_copy__134->GetYaxis()->SetTickLength(0.025);
   dummy_copy__134->GetYaxis()->SetTitleOffset(1.21);
   dummy_copy__134->GetYaxis()->SetTitleFont(42);
   dummy_copy__134->GetZaxis()->SetNdivisions(405);
   dummy_copy__134->GetZaxis()->SetLabelFont(42);
   dummy_copy__134->GetZaxis()->SetLabelOffset(0.007);
   dummy_copy__134->GetZaxis()->SetTitleSize(0.05);
   dummy_copy__134->GetZaxis()->SetTickLength(0.025);
   dummy_copy__134->GetZaxis()->SetTitleFont(42);
   dummy_copy__134->Draw("sameaxis");
  
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
   Double_t xAxis147[5] = {25, 75, 100, 150, 600}; 
   
   TH1F *dummy2__135 = new TH1F("dummy2__135","dummy2",4, xAxis147);
   dummy2__135->SetBinContent(1,1);
   dummy2__135->SetBinContent(2,1);
   dummy2__135->SetBinContent(3,1);
   dummy2__135->SetMinimum(0.1);
   dummy2__135->SetMaximum(2.1);
   dummy2__135->SetEntries(3);
   dummy2__135->SetLineColor(0);
   dummy2__135->SetLineStyle(0);
   dummy2__135->SetLineWidth(0);
   dummy2__135->SetMarkerColor(0);
   dummy2__135->SetMarkerSize(0);
   dummy2__135->GetXaxis()->SetTitle("Fatjet m_{SD} (GeV)");
   dummy2__135->GetXaxis()->SetLabelFont(42);
   dummy2__135->GetXaxis()->SetLabelOffset(0.007);
   dummy2__135->GetXaxis()->SetTitleSize(0.05);
   dummy2__135->GetXaxis()->SetTickLength(0.025);
   dummy2__135->GetXaxis()->SetTitleOffset(0.9);
   dummy2__135->GetXaxis()->SetTitleFont(42);
   dummy2__135->GetYaxis()->SetTitle("Data / Pred.");
   dummy2__135->GetYaxis()->CenterTitle(true);
   dummy2__135->GetYaxis()->SetNdivisions(5);
   dummy2__135->GetYaxis()->SetLabelFont(42);
   dummy2__135->GetYaxis()->SetLabelOffset(0.007);
   dummy2__135->GetYaxis()->SetLabelSize(0.03);
   dummy2__135->GetYaxis()->SetTickLength(0.025);
   dummy2__135->GetYaxis()->SetTitleOffset(1.5);
   dummy2__135->GetYaxis()->SetTitleFont(42);
   dummy2__135->GetZaxis()->SetNdivisions(405);
   dummy2__135->GetZaxis()->SetLabelFont(42);
   dummy2__135->GetZaxis()->SetLabelOffset(0.007);
   dummy2__135->GetZaxis()->SetTitleSize(0.05);
   dummy2__135->GetZaxis()->SetTickLength(0.025);
   dummy2__135->GetZaxis()->SetTitleFont(42);
   dummy2__135->Draw("hist");
   Double_t xAxis148[5] = {25, 75, 100, 150, 600}; 
   
   TH1F *total_background__136 = new TH1F("total_background__136","Total background in mass0_zee_fail",4, xAxis148);
   total_background__136->SetBinContent(1,1);
   total_background__136->SetBinContent(2,1);
   total_background__136->SetBinContent(3,1);
   total_background__136->SetBinContent(4,1);
   total_background__136->SetBinContent(5,1);
   total_background__136->SetBinError(1,0.02723249);
   total_background__136->SetBinError(2,0.04224802);
   total_background__136->SetBinError(3,0.03950746);
   total_background__136->SetBinError(4,0.02714112);
   total_background__136->SetEntries(21);

   ci = TColor::GetColor("#f4eb99");
   total_background__136->SetFillColor(ci);

   ci = TColor::GetColor("#f4eb99");
   total_background__136->SetLineColor(ci);
   total_background__136->SetMarkerSize(0);
   total_background__136->GetXaxis()->SetTitle("min(999.9999,fjmass)");
   total_background__136->GetXaxis()->SetLabelFont(42);
   total_background__136->GetXaxis()->SetLabelSize(0.035);
   total_background__136->GetXaxis()->SetTitleSize(0.035);
   total_background__136->GetXaxis()->SetTitleFont(42);
   total_background__136->GetYaxis()->SetTitle("Events / ( 143.75 )");
   total_background__136->GetYaxis()->SetLabelFont(42);
   total_background__136->GetYaxis()->SetLabelSize(0.035);
   total_background__136->GetYaxis()->SetTitleSize(0.035);
   total_background__136->GetYaxis()->SetTitleFont(42);
   total_background__136->GetZaxis()->SetLabelFont(42);
   total_background__136->GetZaxis()->SetLabelSize(0.035);
   total_background__136->GetZaxis()->SetTitleSize(0.035);
   total_background__136->GetZaxis()->SetTitleFont(42);
   total_background__136->Draw("e2same");
   
   TF1 *f112 = new TF1("f1","1",-5000,5000);
   f112->SetFillColor(19);
   f112->SetFillStyle(0);
   f112->SetLineWidth(2);
   f112->SetLineStyle(2);
   f112->GetXaxis()->SetNdivisions(405);
   f112->GetXaxis()->SetLabelFont(42);
   f112->GetXaxis()->SetLabelOffset(0.007);
   f112->GetXaxis()->SetTitleSize(0.05);
   f112->GetXaxis()->SetTickLength(0.025);
   f112->GetXaxis()->SetTitleOffset(0.9);
   f112->GetXaxis()->SetTitleFont(42);
   f112->GetYaxis()->SetNdivisions(405);
   f112->GetYaxis()->SetLabelFont(42);
   f112->GetYaxis()->SetLabelOffset(0.007);
   f112->GetYaxis()->SetTitleSize(0.05);
   f112->GetYaxis()->SetTickLength(0.025);
   f112->GetYaxis()->SetTitleOffset(1.05);
   f112->GetYaxis()->SetTitleFont(42);
   f112->Draw("same");
   
   Double_t _fx3023[4] = {
   50,
   87.5,
   125,
   375};
   Double_t _fy3023[4] = {
   1.127506,
   1.019136,
   1.154359,
   1.161269};
   Double_t _felx3023[4] = {
   25,
   12.5,
   25,
   225};
   Double_t _fely3023[4] = {
   0.03553074,
   0.06058136,
   0.05860372,
   0.04898517};
   Double_t _fehx3023[4] = {
   25,
   12.5,
   25,
   225};
   Double_t _fehy3023[4] = {
   0.03553074,
   0.06058136,
   0.05860372,
   0.04898517};
   TGraphAsymmErrors *grae = new TGraphAsymmErrors(4,_fx3023,_fy3023,_felx3023,_fehx3023,_fely3023,_fehy3023);
   grae->SetName("");
   grae->SetTitle("");
   grae->SetFillColor(1);
   grae->SetLineColor(2);
   grae->SetLineStyle(7);
   grae->SetMarkerColor(2);
   grae->SetMarkerStyle(24);
   
   TH1F *Graph_Graph3023 = new TH1F("Graph_Graph3023","",100,0,657.5);
   Graph_Graph3023->SetMinimum(0.933114);
   Graph_Graph3023->SetMaximum(1.238404);
   Graph_Graph3023->SetDirectory(0);
   Graph_Graph3023->SetStats(0);
   Graph_Graph3023->SetLineStyle(0);
   Graph_Graph3023->GetXaxis()->SetNdivisions(405);
   Graph_Graph3023->GetXaxis()->SetLabelFont(42);
   Graph_Graph3023->GetXaxis()->SetLabelOffset(0.007);
   Graph_Graph3023->GetXaxis()->SetTitleSize(0.05);
   Graph_Graph3023->GetXaxis()->SetTickLength(0.025);
   Graph_Graph3023->GetXaxis()->SetTitleOffset(0.9);
   Graph_Graph3023->GetXaxis()->SetTitleFont(42);
   Graph_Graph3023->GetYaxis()->SetNdivisions(405);
   Graph_Graph3023->GetYaxis()->SetLabelFont(42);
   Graph_Graph3023->GetYaxis()->SetLabelOffset(0.007);
   Graph_Graph3023->GetYaxis()->SetTitleSize(0.05);
   Graph_Graph3023->GetYaxis()->SetTickLength(0.025);
   Graph_Graph3023->GetYaxis()->SetTitleOffset(1.05);
   Graph_Graph3023->GetYaxis()->SetTitleFont(42);
   Graph_Graph3023->GetZaxis()->SetNdivisions(405);
   Graph_Graph3023->GetZaxis()->SetLabelFont(42);
   Graph_Graph3023->GetZaxis()->SetLabelOffset(0.007);
   Graph_Graph3023->GetZaxis()->SetTitleSize(0.05);
   Graph_Graph3023->GetZaxis()->SetTickLength(0.025);
   Graph_Graph3023->GetZaxis()->SetTitleFont(42);
   grae->SetHistogram(Graph_Graph3023);
   
   grae->Draw("ep 0");
   
   Double_t _fx3024[4] = {
   50,
   87.5,
   125,
   375};
   Double_t _fy3024[4] = {
   0.9998923,
   1.000622,
   0.9999499,
   1.008767};
   Double_t _felx3024[4] = {
   25,
   12.5,
   25,
   225};
   Double_t _fely3024[4] = {
   0.03150928,
   0.0594808,
   0.05076476,
   0.04255229};
   Double_t _fehx3024[4] = {
   25,
   12.5,
   25,
   225};
   Double_t _fehy3024[4] = {
   0.03150928,
   0.0594808,
   0.05076476,
   0.04255229};
   grae = new TGraphAsymmErrors(4,_fx3024,_fy3024,_felx3024,_fehx3024,_fely3024,_fehy3024);
   grae->SetName("");
   grae->SetTitle("");
   grae->SetFillColor(1);
   grae->SetMarkerStyle(20);
   
   TH1F *Graph_Graph3024 = new TH1F("Graph_Graph3024","",100,0,657.5);
   Graph_Graph3024->SetMinimum(0.9292449);
   Graph_Graph3024->SetMaximum(1.071999);
   Graph_Graph3024->SetDirectory(0);
   Graph_Graph3024->SetStats(0);
   Graph_Graph3024->SetLineStyle(0);
   Graph_Graph3024->GetXaxis()->SetNdivisions(405);
   Graph_Graph3024->GetXaxis()->SetLabelFont(42);
   Graph_Graph3024->GetXaxis()->SetLabelOffset(0.007);
   Graph_Graph3024->GetXaxis()->SetTitleSize(0.05);
   Graph_Graph3024->GetXaxis()->SetTickLength(0.025);
   Graph_Graph3024->GetXaxis()->SetTitleOffset(0.9);
   Graph_Graph3024->GetXaxis()->SetTitleFont(42);
   Graph_Graph3024->GetYaxis()->SetNdivisions(405);
   Graph_Graph3024->GetYaxis()->SetLabelFont(42);
   Graph_Graph3024->GetYaxis()->SetLabelOffset(0.007);
   Graph_Graph3024->GetYaxis()->SetTitleSize(0.05);
   Graph_Graph3024->GetYaxis()->SetTickLength(0.025);
   Graph_Graph3024->GetYaxis()->SetTitleOffset(1.05);
   Graph_Graph3024->GetYaxis()->SetTitleFont(42);
   Graph_Graph3024->GetZaxis()->SetNdivisions(405);
   Graph_Graph3024->GetZaxis()->SetLabelFont(42);
   Graph_Graph3024->GetZaxis()->SetLabelOffset(0.007);
   Graph_Graph3024->GetZaxis()->SetTitleSize(0.05);
   Graph_Graph3024->GetZaxis()->SetTickLength(0.025);
   Graph_Graph3024->GetZaxis()->SetTitleFont(42);
   grae->SetHistogram(Graph_Graph3024);
   
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
