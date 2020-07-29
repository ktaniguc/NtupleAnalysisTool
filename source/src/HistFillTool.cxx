#include "../NtupleAnalysisTool/NtupleAnalysisTool.h"

void NtupleAnalysisTool::fill_dimuin1roi(HistData histData)
{
  // residual between mdtHits and Road
  const float ZERO_LIMIT = 1e-4;
  if(!SAisRPCFailure->at(0)){
    for(int i_hit = 0; i_hit < SAMDTHitAllR->at(0).size(); i_hit++){
      float R = SAMDTHitAllR->at(0).at(i_hit);
      float Z = SAMDTHitAllZ->at(0).at(i_hit);
      int chamber = 0;
      if(R < 6000) chamber = 0;
      else if(6500 < R && R < 8500) chamber = 1;
      else chamber = 2;
      
      float residual;
      if( fabs(SARoadAw->at(0).at(chamber)) < ZERO_LIMIT ){
        residual = R - SARoadBw->at(0).at(chamber);
      } else {
        float ia = 1/SARoadAw->at(0).at(chamber);
        float iaq = ia*ia;
        double dz = Z - (R-SARoadBw->at(0).at(chamber))*ia;
        residual = dz/sqrt(1.+iaq);
      }
      histData.m_res_mdtvsroad[chamber]->Fill(fabs(residual));
    }
  }
}
