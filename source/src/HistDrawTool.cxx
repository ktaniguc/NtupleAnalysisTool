#include "../NtupleAnalysisTool/NtupleAnalysisTool.h"
#include "/home/ktaniguc/RootUtils/RootUtils/TLegend_addfunc.h"
#include "/home/ktaniguc/RootUtils/RootUtils/TCanvas_opt.h"

void NtupleAnalysisTool::draw_dimuin1roi(HistData histData, TString pdf)
{
  TCanvas_opt *c1 = new TCanvas_opt();
  c1->Print( pdf + "[", "pdf");
  c1->SetLogy();
  TLegend_addfunc* leg_mdtres = new TLegend_addfunc(6);
  leg_mdtres->AddSelection("J/#psi->#mu#mu");
  leg_mdtres->AddSelection("2mu-in-1RoI");
  leg_mdtres->AddSelection("muon #eta_{MS} < 1.05");
  for(int i=0; i < 3; i++){
    histData.m_res_mdtvsroad[i]->SetLineColor(i+1);
    histData.m_res_mdtvsroad[i]->SetMarkerColor(i+1);
  }
  leg_mdtres->AddEntry(histData.m_res_mdtvsroad[0],"inner");
  leg_mdtres->AddEntry(histData.m_res_mdtvsroad[1],"middle");
  leg_mdtres->AddEntry(histData.m_res_mdtvsroad[2],"outer");
  for(int i=2; i >= 0; i--){
    if(i==2)histData.m_res_mdtvsroad[i]->Draw();
    if(i<2)histData.m_res_mdtvsroad[i]->Draw("same");
  }
  leg_mdtres->Draw("same");
  c1->Print(pdf, "pdf");
  c1->SetLogy(0);
  c1->Print(pdf + "]","pdf");
  //write to root files
  for(int i=0; i < 3; i++){
    histData.m_res_mdtvsroad[i]->Write();
  }
  delete c1;
}

