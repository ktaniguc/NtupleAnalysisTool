#ifndef EVENTSELECTIONTOOL_h
#define EVENTSELECTIONTOOL_h

#include <stdint.h>
#include <vector>
#include "TVector3.h"

class NtupleAnalysisTool;
class EventSelectionTool {
  public:
    EventSelectionTool(const int nMuon,
                       const std::vector<double>* SAsAddress,
                       const std::vector<double>* OfflineExtEta,
                       const std::vector<std::vector<double>>* OfflineSegmentX,
                       const std::vector<std::vector<double>>* OfflineSegmentY,
                       const std::vector<std::vector<double>>* OfflineSegmentZ);
    ~EventSelectionTool(){ };
    bool is2muIn1RoI(std::vector<int>* nRoI,
                     std::vector<int>* roiNumber,
                     std::vector<int>* roiSector);
    void Clear(int nMuon)
    {
      std::vector<double> forclear; forclear.clear();
      m_offsegX.assign( nMuon, forclear );
      m_offsegY.assign( nMuon, forclear );
      m_offsegZ.assign( nMuon, forclear );
      m_offsegR_mid.assign( nMuon, forclear );
      m_offsegEta_mid.assign( nMuon, forclear );
      m_offsegR_out.assign( nMuon, forclear );
      m_offsegEta_out.assign( nMuon, forclear );
    };

  public:
    int m_nMuon;
    bool m_barrelFlag{true};
    bool m_dimuonInBarrelFlag{true};
    bool m_NoffsegmidFlag{true};
    bool m_offsegQuality_mid{false}; //!
    std::vector<std::vector<double>> m_offsegX;
    std::vector<std::vector<double>> m_offsegY;
    std::vector<std::vector<double>> m_offsegZ;
    std::vector<std::vector<double>> m_offsegR_mid;
    std::vector<std::vector<double>> m_offsegEta_mid;
    std::vector<std::vector<double>> m_offsegR_out;
    std::vector<std::vector<double>> m_offsegEta_out;

};
#endif //EVENTSELECTIONTOOL_h
