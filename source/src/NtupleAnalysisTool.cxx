#define NtupleAnalysisTool_cxx
#include "../NtupleAnalysisTool/NtupleAnalysisTool.h"
#include "../NtupleAnalysisTool/EventSelectionTool.h"
#include <TH2.h>
#include <TStyle.h>
#include <TCanvas.h>

void NtupleAnalysisTool::Loop(HistData histData)
{
  if (fChain == 0) return;
  Long64_t nentries = fChain->GetEntries();

  Long64_t nbytes = 0, nb = 0;
  for (Long64_t jentry=0; jentry<nentries;jentry++) {
    Long64_t ientry = LoadTree(jentry);
    if (ientry < 0) break;
    nb = fChain->GetEntry(jentry);   nbytes += nb;
    // if (Cut(ientry) < 0) continue;
    EventSelectionTool* evtSelect = new EventSelectionTool(nMuon, 
                                                           SAsAddress, 
                                                           OfflineExtEta, 
                                                           OfflineSegmentX, 
                                                           OfflineSegmentY, 
                                                           OfflineSegmentZ);
    if(evtSelect->is2muIn1RoI(L1nRoI, L1RoINumber, L1RoISector)){
      std::cout << "# 2muon in 1RoI event" << std::endl;
      fill_dimuin1roi(histData);
    } else {
      std::cout << "# 1muon in 1RoI event" << std::endl;
    }
    delete evtSelect;
  }
}
