#include "../NtupleAnalysisTool/EventSelectionTool.h"

EventSelectionTool::EventSelectionTool(const int nMuon,
                                       const std::vector<double>* SAsAddress,
                                       const std::vector<double>* OfflineExtEta,
                                       const std::vector<std::vector<double>>* OfflineSegmentX,
                                       const std::vector<std::vector<double>>* OfflineSegmentY,
                                       const std::vector<std::vector<double>>* OfflineSegmentZ)
:m_nMuon(nMuon)
{
  this->Clear(nMuon);
  
  for(int iMuon = 0; iMuon < nMuon; iMuon++){
    int Noffsegmid=0;
    int Noffsegout=0;
    if(SAsAddress->at(iMuon) == -1 || SAsAddress->at(iMuon) > 4){
      this->m_barrelFlag = false;
    }
    if(OfflineExtEta->at(iMuon) >= 1.05) m_dimuonInBarrelFlag = false;
    int n_seg = OfflineSegmentX->at(iMuon).size();
    for(int i_seg = 0; i_seg < n_seg; i_seg++){
      TVector3 vecOffseg;
      vecOffseg.SetXYZ((OfflineSegmentX->at(iMuon)).at(i_seg), (OfflineSegmentY->at(iMuon)).at(i_seg), (OfflineSegmentZ->at(iMuon)).at(i_seg));
      if(6500. < vecOffseg.Perp() && vecOffseg.Perp() < 8500.){
        Noffsegmid++;
        m_offsegR_mid.at(iMuon).push_back(vecOffseg.Perp());
      }
      if(vecOffseg.Perp() >= 8500.) Noffsegout++;
    }//i_seg loop end
    if(Noffsegmid < 2) m_NoffsegmidFlag =false;
  }//iMuon loop end

}

bool EventSelectionTool::is2muIn1RoI(std::vector<int>* nRoI,
                                     std::vector<int>* roiNumber,
                                     std::vector<int>* roiSector)
{
  if(m_nMuon != 2) return false;
  if(!m_barrelFlag) return false;
  if(!m_NoffsegmidFlag) return false;
  for(int iMuon = 0; iMuon < m_nMuon; iMuon++){
    for(int jMuon = 0; jMuon < m_nMuon; jMuon++){
      if(iMuon == jMuon) continue;
      if(nRoI->at(iMuon) != 1 ||
         roiNumber->at(iMuon) != roiNumber->at(jMuon) ||
         roiSector->at(iMuon) != roiSector->at(jMuon) ) return false;
    }
  }
  return true;
}
