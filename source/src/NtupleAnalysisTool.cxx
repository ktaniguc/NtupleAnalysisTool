#define NtupleAnalysisTool_cxx
#include "../NtupleAnalysisTool/NtupleAnalysisTool.h"
#include <TH2.h>
#include <TStyle.h>
#include <TCanvas.h>

void NtupleAnalysisTool::Loop()
{
  if (fChain == 0) return;
  Long64_t nentries = fChain->GetEntries();

  Long64_t nbytes = 0, nb = 0;
  for (Long64_t jentry=0; jentry<nentries;jentry++) {
    Long64_t ientry = LoadTree(jentry);
    if (ientry < 0) break;
    nb = fChain->GetEntry(jentry);   nbytes += nb;
    std::cout << probePt << std::endl;
    // if (Cut(ientry) < 0) continue;
  }
}