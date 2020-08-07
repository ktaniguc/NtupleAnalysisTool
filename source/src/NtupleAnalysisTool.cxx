#define NtupleAnalysisTool_cxx
#include "../NtupleAnalysisTool/NtupleAnalysisTool.h"
#include <TH2.h>
#include <TStyle.h>

void NtupleAnalysisTool::Loop(HistData histData, int begin_entry, int limit_entry)
{
  if (fChain == 0) return;
  Long64_t nentries;
  if(limit_entry == -1){
    nentries = fChain->GetEntries();
    begin_entry = 0;
  } else {
    nentries = limit_entry;
  }
  Long64_t nbytes = 0, nb = 0;
  for (Long64_t jentry=begin_entry; jentry<nentries;jentry++) {
    Long64_t ientry = LoadTree(jentry);
    if (ientry < 0) break;
    nb = fChain->GetEntry(jentry);   nbytes += nb;
    // if (Cut(ientry) < 0) continue;
  }
}

void NtupleAnalysisTool::DrawHist(TString pdf, HistData histData)
{
  TCanvas_opt *c1 = new TCanvas_opt();
  c1->Print( pdf + "[", "pdf");
  //histData.your_histogram->Draw();
  //c1->Print(pdf, "pdf");
  c1->Print( pdf + "]", "pdf");
  delete c1;
}
