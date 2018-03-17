void plotsDist()
{
//=========Macro generated from canvas: asdf/asdf
//=========  (Thu Feb 15 18:51:10 2018) by ROOT version6.06/09
   TCanvas *asdf = new TCanvas("asdf", "asdf",0,0,800,800);
   gStyle->SetOptFit(1);
   asdf->SetHighLightColor(2);
   asdf->Range(-2.5,-16.77594,2.5,150.9834);
   asdf->SetFillColor(0);
   asdf->SetBorderMode(0);
   asdf->SetBorderSize(2);
   asdf->SetFrameBorderMode(0);
   asdf->SetFrameBorderMode(0);
   
   TH1F *pulls__1 = new TH1F("pulls__1","",60,-2,2);
   pulls__1->SetBinContent(12,1);
   pulls__1->SetBinContent(14,1);
   pulls__1->SetBinContent(16,1);
   pulls__1->SetBinContent(18,1);
   pulls__1->SetBinContent(20,2);
   pulls__1->SetBinContent(21,2);
   pulls__1->SetBinContent(22,2);
   pulls__1->SetBinContent(23,2);
   pulls__1->SetBinContent(24,3);
   pulls__1->SetBinContent(25,4);
   pulls__1->SetBinContent(26,2);
   pulls__1->SetBinContent(27,5);
   pulls__1->SetBinContent(28,9);
   pulls__1->SetBinContent(29,8);
   pulls__1->SetBinContent(30,15);
   pulls__1->SetBinContent(31,117);
   pulls__1->SetBinContent(32,12);
   pulls__1->SetBinContent(33,6);
   pulls__1->SetBinContent(34,9);
   pulls__1->SetBinContent(35,7);
   pulls__1->SetBinContent(36,4);
   pulls__1->SetBinContent(37,3);
   pulls__1->SetBinContent(39,2);
   pulls__1->SetBinContent(44,1);
   pulls__1->SetEntries(219);
   pulls__1->SetStats(0);
   
   TF1 *gaus1 = new TF1("gaus","gaus",-2,2);
   gaus1->SetFillColor(19);
   gaus1->SetFillStyle(0);
   gaus1->SetLineWidth(3);
   gaus1->SetChisquare(113.6096);
   gaus1->SetNDF(21);
   gaus1->SetParameter(0,12.31485);
   gaus1->SetParError(0,2.232731);
   gaus1->SetParLimits(0,0,0);
   gaus1->SetParameter(1,0.0385399);
   gaus1->SetParError(1,0.02431859);
   gaus1->SetParLimits(1,0,0);
   gaus1->SetParameter(2,0.2332513);
   gaus1->SetParError(2,0.03993978);
   gaus1->SetParLimits(2,0,2.461413);
   pulls__1->GetListOfFunctions()->Add(gaus1);
   pulls__1->SetMarkerStyle(20);
   pulls__1->SetMarkerSize(2);
   pulls__1->GetXaxis()->SetTitle("pull");
   pulls__1->GetYaxis()->SetTitle("Number of nuisances");
   pulls__1->Draw("pe");
   asdf->Modified();
   asdf->cd();
   asdf->SetSelected(asdf);
}
