#ifndef HISTDATA
#define HISTDATA

#include "TH1F.h"
#include "TH2F.h"
#include "TH3F.h"
#include "TString.h"
#include "TFile.h"

class HistData
{
  public :
    HistData(){
      HistInit();
    };
    ~HistData() {};
    void HistInit()
    {
      // ===== fill in 2muinBarrel =====
      for(int i=0; i<3; i++){
        m_res_mdtvsroad[i] = new TH1D(Form("m_res_mdtvsroad%d", i), "mdt vs road residual; residual; events", 500, 0, 1000);
      }
      // ===== fill in 2muin1RoI =====
    };
    void HistEnd()
    {
      for(int i=0; i<3; i++){
        delete m_res_mdtvsroad[i];
      }
    };

  public : 
    TH1D *m_res_mdtvsroad[3];
};

#endif //RPCL2MUONSA_HISTDATA
