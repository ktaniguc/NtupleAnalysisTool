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
      // for example
      for(int i=0; i<3; i++){
        m_res_mdtvsroad[i] = new TH1D(Form("m_res_mdtvsroad%d", i), "mdt vs road residual; residual; events", 250, 0, 500);
        m_res_mdtvshitroad[i] = new TH1D(Form("m_res_mdtvshitroad%d", i), "mdt vs rpc hit road residual; residual; events", 250, 0, 500);
      }
    };
    void HistEnd()
    {
      // for example
      for(int i=0; i<3; i++){
        delete m_res_mdtvsroad[i];
      }
      for(int i=0; i<3; i++){
        delete m_res_mdtvshitroad[i];
      }
    };

  public : 
    // for example
    TH1D *m_res_mdtvsroad[3];
    TH1D *m_res_mdtvshitroad[3];
};

#endif //RPCL2MUONSA_HISTDATA
