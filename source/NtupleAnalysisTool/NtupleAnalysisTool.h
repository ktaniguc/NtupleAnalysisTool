//////////////////////////////////////////////////////////
// This class has been automatically generated on
// Fri Jul 10 12:48:54 2020 by ROOT version 6.12/04
// from TTree t_tap/TrigMuonTagAndProbe
// found on file: /gpfs/fs7001/ktaniguc/outputfile/OutputCalcEff/topoRoad_on_calcEffoutput.root
//////////////////////////////////////////////////////////

#ifndef NtupleAnalysisTool_h
#define NtupleAnalysisTool_h

#include "HistData.h"
#include "TH1F.h"
#include "TH2F.h"
#include "TH3F.h"
#include "TROOT.h"
#include "TFile.h"
#include "TStyle.h"
#include "TCanvas.h"
#include "TLatex.h"
#include "TTree.h"
#include "TChain.h"
#include "TMath.h"
#include "TString.h"
#include "TColor.h"
#include "TLegend.h"
#include "TPaveText.h"
#include "TProfile.h"
#include "TText.h"
#include "TLatex.h"
#include "TGraphErrors.h"
#include "TApplication.h"
#include "TEfficiency.h"
#include "TGraphAsymmErrors.h"
#include <vector>
#include <iostream>
#include <map>
// Header file for the classes stored in the TTree if any.
using namespace std;

class NtupleAnalysisTool {
  public :
    NtupleAnalysisTool(TTree *tree=0);
    virtual ~NtupleAnalysisTool();
    virtual Int_t    Cut(Long64_t entry);
    virtual Int_t    GetEntry(Long64_t entry);
    virtual Long64_t LoadTree(Long64_t entry);
    virtual void     Init(TTree *tree);
    virtual void     Loop(HistData histData);
    void fill_dimuin1roi(HistData histData);
    virtual Bool_t   Notify();
    virtual void     Show(Long64_t entry = -1);
    
    TTree          *fChain;   //!pointer to the analyzed TTree or TChain
    Int_t           fCurrent; //!current Tree number in a TChain

    // Fixed size dimensions of array or collections stored in the TTree if any.

    // Declaration of leaf types
    vector<double> SARPCFitInnR; 
    vector<double> SARPCFitInnEta;
    vector<double> SARPCFitMidR; 
    vector<double> SARPCFitMidEta;
    vector<double> SARPCFitOutR; 
    vector<double> SARPCFitOutEta;
    // declaration of leaf types
    //branch variable
    ULong64_t       EventNumber;
    Int_t           RunNumber;
    Int_t           LumiBlock;
    Float_t         AverageInteractionsPerCrossing;
    string          *mes_name;
    UInt_t          nMuon;
    vector<double>  *OfflinePt;
    vector<double>  *OfflineEta;
    vector<double>  *OfflineExtEta;
    vector<double>  *OfflineExtInnEta;
    vector<double>  *OfflinePhi;
    vector<double>  *OfflineExtPhi;
    vector<double>  *OfflineExtInnPhi;
    vector<double>  *OfflineD0;
    vector<double>  *OfflineZ0;
    vector<double>  *OfflineCharge;
    vector<int>     *OfflineNumSegment;
    vector<vector<double> > *OfflineSegmentX;
    vector<vector<double> > *OfflineSegmentY;
    vector<vector<double> > *OfflineSegmentZ;
    vector<vector<double> > *OfflineSegmentPx;
    vector<vector<double> > *OfflineSegmentPy;
    vector<vector<double> > *OfflineSegmentPz;
    vector<vector<double> > *OfflineSegmentChiSquared;
    vector<vector<double> > *OfflineSegmentNumberDoF;
    vector<vector<double> > *OfflineSegmentSector;
    vector<vector<double> > *OfflineSegmentChamberIndex;
    vector<vector<double> > *OfflineSegmentEtaIndex;
    vector<vector<double> > *OfflineSegmentNPrecisionHits;
    vector<vector<double> > *OfflineSegmentNPhiLayers;
    vector<vector<double> > *OfflineSegmentNTrigEtaLayers;
    vector<int>     *EFTAGPass;
    vector<double>  *EFTAGPt;
    vector<double>  *EFTAGEta;
    vector<double>  *EFTAGPhi;
    vector<int>     *L1nRoI;
    vector<bool>    *L1isMoreCandInRoI;
    vector<int>     *L1Pass;
    vector<bool>     *passedChain;
    vector<double>  *L1Pt;
    vector<double>  *L1Eta;
    vector<double>  *L1Phi;
    vector<int>     *L1RoINumber;
    vector<int>     *L1RoISector;
    vector<int>     *SAHypoPass;
    vector<bool>    *SAOvRmPass;
    vector<bool>    *SAOvRmPass_forClusAlg;
    vector<double>  *SAPt;
    vector<double>  *SAEta;
    vector<double>  *SAPhi;
    vector<double>  *SAEtaMS;
    vector<double>  *SAEtaBE;
    vector<double>  *SAPhiMS;
    vector<double>  *SAPhiBE;
    vector<double>  *SATGCPt;
    vector<double>  *SAPtBarrelRadius;
    vector<double>  *SAPtBarrelSagitta;
    vector<double>  *SAPtEndcapAlpha;
    vector<double>  *SAPtEndcapBeta;
    vector<double>  *SAPtEndcapRadius;
    vector<double>  *SACSCPt;
    vector<double>  *SAsAddress;
    vector<double>  *SASPR_BI;
    vector<double>  *SASPR_BM;
    vector<double>  *SASPR_BO;
    vector<double>  *SASPR_EI;
    vector<double>  *SASPR_EM;
    vector<double>  *SASPR_EO;
    vector<double>  *SASPR_EE;
    vector<double>  *SASPR_CSC;
    vector<double>  *SASPR_BEE;
    vector<double>  *SASPR_BME;
    vector<double>  *SASPZ_BI;
    vector<double>  *SASPZ_BM;
    vector<double>  *SASPZ_BO;
    vector<double>  *SASPZ_EI;
    vector<double>  *SASPZ_EM;
    vector<double>  *SASPZ_EO;
    vector<double>  *SASPZ_EE;
    vector<double>  *SASPZ_CSC;
    vector<double>  *SASPZ_BEE;
    vector<double>  *SASPZ_BME;
    vector<double>  *SASPSlope_BI;
    vector<double>  *SASPSlope_BM;
    vector<double>  *SASPSlope_BO;
    vector<double>  *SASPSlope_EI;
    vector<double>  *SASPSlope_EM;
    vector<double>  *SASPSlope_EO;
    vector<double>  *SASPSlope_EE;
    vector<double>  *SASPSlope_CSC;
    vector<double>  *SASPSlope_BEE;
    vector<double>  *SASPSlope_BME;
    vector<double>  *SASPIntercept_BI;
    vector<double>  *SASPIntercept_BM;
    vector<double>  *SASPIntercept_BO;
    vector<double>  *SASPIntercept_EI;
    vector<double>  *SASPIntercept_EM;
    vector<double>  *SASPIntercept_EO;
    vector<double>  *SASPIntercept_EE;
    vector<double>  *SASPIntercept_CSC;
    vector<double>  *SASPIntercept_BEE;
    vector<double>  *SASPIntercept_BME;
    vector<double>  *SASPChi2_BI;
    vector<double>  *SASPChi2_BM;
    vector<double>  *SASPChi2_BO;
    vector<double>  *SASPChi2_EI;
    vector<double>  *SASPChi2_EM;
    vector<double>  *SASPChi2_EO;
    vector<double>  *SASPChi2_EE;
    vector<double>  *SASPChi2_CSC;
    vector<double>  *SASPChi2_BEE;
    vector<double>  *SASPChi2_BME;
    vector<float>   *SARoIEta;
    vector<float>   *SARoIPhi;
    vector<double>  *SAisRPCFailure;
    vector<double>  *SAisTGCFailure;
    vector<double>  *SABarrelRadius;
    vector<double>  *SABarrelSagitta;
    vector<double>  *SAEtaMap;
    vector<double>  *SAPhiMap;
    vector<unsigned int> *SARoINumber;
    vector<unsigned int> *SARoISector;
    vector<vector<float> > *SARPCHitTime;
    vector<vector<float> > *SARPCHitX;
    vector<vector<float> > *SARPCHitY;
    vector<vector<float> > *SARPCHitZ;
    vector<vector<double> > *SARPCHitR;
    vector<vector<double> > *SARPCHitEta;
    vector<vector<double> > *SARPCHitPhi;
    vector<vector<unsigned int> > *SARPCHitMeasuresPhi;
    vector<vector<unsigned int> > *SARPCHitLayer;
    vector<vector<string> > *SARPCHitStationName;
    vector<vector<double> > *SARPCHitStationNumber;

    //RPC Clustering
    vector<vector<vector<int>> > *SAspcSetID; //I'll make an effort not to use 3D vector when I use this value because I hate 3D vector
    vector<vector<double>>  *SAptclus;
    vector<vector<float>>  *SAetaMSclus;
    vector<vector<float>>  *SAchargeclus;
    vector<vector<float>>  *SASPCZ_BI;
    vector<vector<float>>  *SASPCZ_BM;
    vector<vector<float>>  *SASPCZ_BO;
    vector<vector<float>>  *SASPCR_BI;
    vector<vector<float>>  *SASPCR_BM;
    vector<vector<float>>  *SASPCR_BO;
    vector<vector<vector<float>> > *SARPCCluster_zMax;
    vector<vector<vector<float>> > *SARPCCluster_zMin;
    vector<vector<vector<float>> > *SARPCCluster_rMax;
    vector<vector<vector<float>> > *SARPCCluster_rMin;
    vector<vector<float> > *SARPCCluster_gX;
    vector<vector<float> > *SARPCCluster_gY;
    vector<vector<float> > *SARPCCluster_gZ;
    vector<vector<float> > *SARPCCluster_stripWidth;
    vector<vector<float> > *SARPCCluster_loX;
    vector<vector<float> > *SARPCCluster_loY;
    vector<vector<float> > *SARPCCluster_loZ;
    vector<vector<int> > *SARPCCluster_clusterSize;
    vector<vector<int> > *SARPCCluster_clusterLayer;
    vector<vector<int> > *SARPCCluster_clusterMeasPhi;

    vector<vector<float> > *SARPCCluster_fitInnPhi;
    vector<vector<float> > *SARPCCluster_fitMidPhi;
    vector<vector<float> > *SARPCCluster_fitOutPhi;
    vector<vector<float> > *SARPCCluster_fitInnSlope;
    vector<vector<float> > *SARPCCluster_fitMidSlope;
    vector<vector<float> > *SARPCCluster_fitOutSlope;
    vector<vector<float> > *SARPCCluster_fitInnOffset;
    vector<vector<float> > *SARPCCluster_fitMidOffset;
    vector<vector<float> > *SARPCCluster_fitOutOffset;
    vector<vector<bool> > *SARPCCluster_isSuccess;
    vector<vector<bool> > *SARPCCluster_isUsingMidCluster;
    vector<vector<bool> > *SARPCCluster_isPlausibleFitInnMid;
    vector<vector<bool> > *SARPCCluster_isPlausibleFitOut;
    vector<vector<bool> > *SARPCCluster_isPlausiblePhiInnMid;
    vector<vector<bool> > *SARPCCluster_isPlausiblePhiOut;
    vector<vector<vector<int>> > *SARPCCluster_n_foundClusters; //I'll make an effort not to use 3D vector when I use this value because I hate 3D vector
    vector<vector<vector<int>> > *SARPCCluster_id_clustersInSets; //I'll make an effort not to use 3D vector when I use this value because I hate 3D vector
    vector<vector<vector<int>> > *SARPCCluster_id_clustersInPhiSets; //I'll make an effort not to use 3D vector when I use this value because I hate 3D vector

    vector<float>   *SARPCFitInnPhi;
    vector<float>   *SARPCFitInnSlope;
    vector<float>   *SARPCFitInnOffset;
    vector<float>   *SARPCFitMidPhi;
    vector<float>   *SARPCFitMidSlope;
    vector<float>   *SARPCFitMidOffset;
    vector<float>   *SARPCFitOutPhi;
    vector<float>   *SARPCFitOutSlope;
    vector<float>   *SARPCFitOutOffset;
    vector<vector<float> > *SARoadAw;
    vector<vector<float> > *SARoadBw;
    vector<vector<float> > *SAzMin;
    vector<vector<float> > *SAzMax;
    vector<vector<float> > *SArMin;
    vector<vector<float> > *SArMax;
    vector<vector<float> > *SAEtaMin;
    vector<vector<float> > *SAEtaMax;
    vector<vector<int> > *SAMDTHitisOutlier;
    vector<vector<int> > *SAMDTHitChamber;
    vector<vector<float> > *SAMDTHitR;
    vector<vector<float> > *SAMDTHitZ;
    vector<vector<float> > *SAMDTHitPhi;
    vector<vector<float> > *SAMDTHitResidual;
    vector<vector<float> > *SAMDTHitSpace;
    vector<vector<float> > *SAMDTHitSigma;
    vector<vector<float> > *SAMDTHitAllR;
    vector<vector<float> > *SAMDTHitAllZ;
    vector<vector<int> > *SAMDTHitAllisOutlier;
    vector<vector<int> > *SAMDTHitAllclusRoadID;
    vector<int>     *CBHypoPass;
    vector<bool>    *CBOvRmPass;
    vector<double>  *CBPt;
    vector<double>  *CBEta;
    vector<double>  *CBPhi;
    vector<int>     *EFPass;
    vector<double>  *EFPt;
    vector<double>  *EFEta;
    vector<double>  *EFPhi;
    // List of branches
    TBranch *b_EventNumber;                    
    TBranch *b_RunNumber;                      
    TBranch *b_LumiBlock;                      
    TBranch *b_AverageInteractionsPerCrossing; 
    TBranch *b_mes_name;                       
    TBranch *b_nMuon;                          
    TBranch *b_OfflinePt;                      
    TBranch *b_OfflineEta;                     
    TBranch *b_OfflineExtEta;                  
    TBranch *b_OfflineExtInnEta;               
    TBranch *b_OfflinePhi;                     
    TBranch *b_OfflineExtPhi;                  
    TBranch *b_OfflineExtInnPhi;               
    TBranch *b_OfflineD0;                      
    TBranch *b_OfflineZ0;                      
    TBranch *b_OfflineCharge;                  
    TBranch *b_OfflineNumSegment;              
    TBranch *b_OfflineSegmentX;                
    TBranch *b_OfflineSegmentY;                
    TBranch *b_OfflineSegmentZ;                
    TBranch *b_OfflineSegmentPx;               
    TBranch *b_OfflineSegmentPy;               
    TBranch *b_OfflineSegmentPz;               
    TBranch *b_OfflineSegmentChiSquared;       
    TBranch *b_OfflineSegmentNumberDoF;        
    TBranch *b_OfflineSegmentSector;           
    TBranch *b_OfflineSegmentChamberIndex;     
    TBranch *b_OfflineSegmentEtaIndex;         
    TBranch *b_OfflineSegmentNPrecisionHits;   
    TBranch *b_OfflineSegmentNPhiLayers;       
    TBranch *b_OfflineSegmentNTrigEtaLayers;   
    TBranch *b_EFTAGPass;                      
    TBranch *b_EFTAGPt;                        
    TBranch *b_EFTAGEta;                       
    TBranch *b_EFTAGPhi;                       
    TBranch *b_L1nRoI;                         
    TBranch *b_L1isMoreCandInRoI;                         
    TBranch *b_L1Pass;                         
    TBranch *b_passedChain;                         
    TBranch *b_L1Pt;                           
    TBranch *b_L1Eta;                          
    TBranch *b_L1Phi;                          
    TBranch *b_L1RoINumber;                    
    TBranch *b_L1RoISector;                    
    TBranch *b_SAHypoPass;                     
    TBranch *b_SAOvRmPass;                     
    TBranch *b_SAOvRmPass_forClusAlg;                     
    TBranch *b_SAPt;                           
    TBranch *b_SAEta;                          
    TBranch *b_SAPhi;                          
    TBranch *b_SAEtaMS;                        
    TBranch *b_SAEtaBE;                        
    TBranch *b_SAPhiMS;                        
    TBranch *b_SAPhiBE;                        
    TBranch *b_SATGCPt;                        
    TBranch *b_SAPtBarrelRadius;               
    TBranch *b_SAPtBarrelSagitta;              
    TBranch *b_SAPtEndcapAlpha;                
    TBranch *b_SAPtEndcapBeta;                 
    TBranch *b_SAPtEndcapRadius;               
    TBranch *b_SACSCPt;                        
    TBranch *b_SAsAddress;                     
    TBranch *b_SASPR_BI;                       
    TBranch *b_SASPR_BM;                       
    TBranch *b_SASPR_BO;                       
    TBranch *b_SASPR_EI;                       
    TBranch *b_SASPR_EM;                       
    TBranch *b_SASPR_EO;                       
    TBranch *b_SASPR_EE;                       
    TBranch *b_SASPR_CSC;                      
    TBranch *b_SASPR_BEE;                      
    TBranch *b_SASPR_BME;                      
    TBranch *b_SASPZ_BI;                       
    TBranch *b_SASPZ_BM;                       
    TBranch *b_SASPZ_BO;                       
    TBranch *b_SASPZ_EI;                       
    TBranch *b_SASPZ_EM;                       
    TBranch *b_SASPZ_EO;                       
    TBranch *b_SASPZ_EE;                       
    TBranch *b_SASPZ_CSC;                      
    TBranch *b_SASPZ_BEE;                      
    TBranch *b_SASPZ_BME;                      
    TBranch *b_SASPSlope_BI;                   
    TBranch *b_SASPSlope_BM;                   
    TBranch *b_SASPSlope_BO;                   
    TBranch *b_SASPSlope_EI;                   
    TBranch *b_SASPSlope_EM;                   
    TBranch *b_SASPSlope_EO;                   
    TBranch *b_SASPSlope_EE;                   
    TBranch *b_SASPSlope_CSC;                  
    TBranch *b_SASPSlope_BEE;                  
    TBranch *b_SASPSlope_BME;                  
    TBranch *b_SASPIntercept_BI;               
    TBranch *b_SASPIntercept_BM;               
    TBranch *b_SASPIntercept_BO;               
    TBranch *b_SASPIntercept_EI;               
    TBranch *b_SASPIntercept_EM;               
    TBranch *b_SASPIntercept_EO;               
    TBranch *b_SASPIntercept_EE;               
    TBranch *b_SASPIntercept_CSC;              
    TBranch *b_SASPIntercept_BEE;              
    TBranch *b_SASPIntercept_BME;              
    TBranch *b_SASPChi2_BI;                    
    TBranch *b_SASPChi2_BM;                    
    TBranch *b_SASPChi2_BO;                    
    TBranch *b_SASPChi2_EI;                    
    TBranch *b_SASPChi2_EM;                    
    TBranch *b_SASPChi2_EO;                    
    TBranch *b_SASPChi2_EE;                    
    TBranch *b_SASPChi2_CSC;                   
    TBranch *b_SASPChi2_BEE;                   
    TBranch *b_SASPChi2_BME;                   
    TBranch *b_SARoIEta;                       
    TBranch *b_SARoIPhi;                       
    TBranch *b_SAisRPCFailure;                 
    TBranch *b_SAisTGCFailure;                 
    TBranch *b_SABarrelRadius;                 
    TBranch *b_SABarrelSagitta;                
    TBranch *b_SAEtaMap;                       
    TBranch *b_SAPhiMap;                       
    TBranch *b_SARoINumber;                    
    TBranch *b_SARoISector;                    
    TBranch *b_SARPCHitTime;                      
    TBranch *b_SARPCHitX;                      
    TBranch *b_SARPCHitY;                      
    TBranch *b_SARPCHitZ;                      
    TBranch *b_SARPCHitR;                      
    TBranch *b_SARPCHitEta;                    
    TBranch *b_SARPCHitPhi;                    
    TBranch *b_SARPCHitMeasuresPhi;            
    TBranch *b_SARPCHitLayer;            
    TBranch *b_SARPCHitStationName;            
    TBranch *b_SARPCHitStationNumber;          

    //RPC clustering
    TBranch *b_SAspcSetID;                      
    TBranch *b_SAptclus;                        
    TBranch *b_SAetaMSclus;                        
    TBranch *b_SAchargeclus;                        
    TBranch *b_SASPCZ_BI;                       
    TBranch *b_SASPCZ_BM;                       
    TBranch *b_SASPCZ_BO;                       
    TBranch *b_SASPCR_BI;                       
    TBranch *b_SASPCR_BM;                       
    TBranch *b_SASPCR_BO;                       
    TBranch *b_SARPCCluster_zMax;                      
    TBranch *b_SARPCCluster_zMin;                      
    TBranch *b_SARPCCluster_rMax;                      
    TBranch *b_SARPCCluster_rMin;                      
    TBranch *b_SARPCCluster_gX;                      
    TBranch *b_SARPCCluster_gY;                      
    TBranch *b_SARPCCluster_gZ;                      
    TBranch *b_SARPCCluster_stripWidth;                      
    TBranch *b_SARPCCluster_loX;                      
    TBranch *b_SARPCCluster_loY;                      
    TBranch *b_SARPCCluster_loZ;                      
    TBranch *b_SARPCCluster_clusterSize;                      
    TBranch *b_SARPCCluster_clusterLayer;                      
    TBranch *b_SARPCCluster_clusterMeasPhi;                      
    TBranch *b_SARPCCluster_fitInnPhi;                      
    TBranch *b_SARPCCluster_fitMidPhi;                      
    TBranch *b_SARPCCluster_fitOutPhi;                      
    TBranch *b_SARPCCluster_fitInnSlope;                      
    TBranch *b_SARPCCluster_fitMidSlope;                      
    TBranch *b_SARPCCluster_fitOutSlope;                      
    TBranch *b_SARPCCluster_fitInnOffset;                      
    TBranch *b_SARPCCluster_fitMidOffset;                      
    TBranch *b_SARPCCluster_fitOutOffset;                      
    TBranch *b_SARPCCluster_isSuccess;                      
    TBranch *b_SARPCCluster_isUsingMidCluster;                      
    TBranch *b_SARPCCluster_isPlausibleFitInnMid;                      
    TBranch *b_SARPCCluster_isPlausibleFitOut;                      
    TBranch *b_SARPCCluster_isPlausiblePhiInnMid;                      
    TBranch *b_SARPCCluster_isPlausiblePhiOut;                      
    TBranch *b_SARPCCluster_n_foundClusters;                      
    TBranch *b_SARPCCluster_id_clustersInSets;                      
    TBranch *b_SARPCCluster_id_clustersInPhiSets;                      

    TBranch *b_SARPCFitInnPhi;                 
    TBranch *b_SARPCFitInnSlope;               
    TBranch *b_SARPCFitInnOffset;              
    TBranch *b_SARPCFitMidPhi;                 
    TBranch *b_SARPCFitMidSlope;               
    TBranch *b_SARPCFitMidOffset;              
    TBranch *b_SARPCFitOutPhi;                 
    TBranch *b_SARPCFitOutSlope;               
    TBranch *b_SARPCFitOutOffset;              
    TBranch *b_SARoadAw;                       
    TBranch *b_SARoadBw;                       
    TBranch *b_SAzMin;                         
    TBranch *b_SAzMax;                         
    TBranch *b_SArMin;                         
    TBranch *b_SArMax;                         
    TBranch *b_SAEtaMin;                       
    TBranch *b_SAEtaMax;                       
    TBranch *b_SAMDTHitisOutlier;              
    TBranch *b_SAMDTHitChamber;                
    TBranch *b_SAMDTHitR;                      
    TBranch *b_SAMDTHitZ;                      
    TBranch *b_SAMDTHitPhi;                    
    TBranch *b_SAMDTHitResidual;               
    TBranch *b_SAMDTHitSpace;                  
    TBranch *b_SAMDTHitSigma;                  
    TBranch *b_SAMDTHitAllR;                      
    TBranch *b_SAMDTHitAllZ;                      
    TBranch *b_SAMDTHitAllclusRoadID;                      
    TBranch *b_SAMDTHitAllisOutlier;                      
    TBranch *b_CBHypoPass;                     
    TBranch *b_CBOvRmPass;                     
    TBranch *b_CBPt;                           
    TBranch *b_CBEta;                          
    TBranch *b_CBPhi;                          
    TBranch *b_EFPass;                         
    TBranch *b_EFPt;                           
    TBranch *b_EFEta;                          
    TBranch *b_EFPhi;                          

};

#endif

#ifdef NtupleAnalysisTool_cxx
NtupleAnalysisTool::NtupleAnalysisTool(TTree *tree) : fChain(0) 
{
  // if parameter tree is not specified (or zero), connect the file
  // used to generate this class and read the Tree.
  if (tree == 0) {
    TFile *f = (TFile*)gROOT->GetListOfFiles()->FindObject("/gpfs/fs7001/ktaniguc/outputfile/OutputCalcEff/topoRoad_on_calcEffoutput.root");
    if (!f || !f->IsOpen()) {
      f = new TFile("/gpfs/fs7001/ktaniguc/outputfile/OutputCalcEff/topoRoad_on_calcEffoutput.root");
    }
    f->GetObject("t_tap",tree);

  }
  Init(tree);
}

NtupleAnalysisTool::~NtupleAnalysisTool()
{
  if (!fChain) return;
  delete fChain->GetCurrentFile();
}

Int_t NtupleAnalysisTool::GetEntry(Long64_t entry)
{
  // Read contents of entry.
  if (!fChain) return 0;
  return fChain->GetEntry(entry);
}
Long64_t NtupleAnalysisTool::LoadTree(Long64_t entry)
{
  // Set the environment to read one entry
  if (!fChain) return -5;
  Long64_t centry = fChain->LoadTree(entry);
  if (centry < 0) return centry;
  if (fChain->GetTreeNumber() != fCurrent) {
    fCurrent = fChain->GetTreeNumber();
    Notify();
  }
  return centry;
}

void NtupleAnalysisTool::Init(TTree *tree)
{
  // The Init() function is called when the selector needs to initialize
  // a new tree or chain. Typically here the branch addresses and branch
  // pointers of the tree will be set.
  // It is normally not necessary to make changes to the generated
  // code, but the routine can be extended by the user if needed.
  // Init() will be called many times when running on PROOF
  // (once per file to be processed).

  // Set object pointer
  // Set branch addresses and branch pointers
  EventNumber = 0;
  RunNumber = 0;
  LumiBlock = 0;
  AverageInteractionsPerCrossing = 0;
  mes_name = 0;
  nMuon = 0;
  OfflinePt = 0;                      
  OfflineEta = 0;                     
  OfflineExtEta = 0;                  
  OfflineExtInnEta = 0;               
  OfflinePhi = 0;                     
  OfflineExtPhi = 0;                  
  OfflineExtInnPhi = 0;               
  OfflineD0 = 0;                      
  OfflineZ0 = 0;                      
  OfflineCharge = 0;                  
  OfflinePhi = 0;                     
  OfflineExtPhi = 0;                  
  OfflineExtInnPhi = 0;               
  OfflineD0 = 0;                      
  OfflineZ0 = 0;                      
  OfflineCharge = 0;                  
  OfflineNumSegment = 0;              
  OfflineSegmentX = 0;                
  OfflineSegmentY = 0;                
  OfflineSegmentZ = 0;                
  OfflineSegmentPx = 0;               
  OfflineSegmentPy = 0;               
  OfflineSegmentPz = 0;               
  OfflineSegmentChiSquared = 0;       
  OfflineSegmentNumberDoF = 0;        
  OfflineSegmentSector = 0;           
  OfflineSegmentChamberIndex = 0;     
  OfflineSegmentEtaIndex = 0;         
  OfflineSegmentNPrecisionHits = 0;   
  OfflineSegmentNPhiLayers = 0;       
  OfflineSegmentNTrigEtaLayers = 0;   
  EFTAGPass = 0;                      
  EFTAGPt = 0;                        
  EFTAGEta = 0;                       
  EFTAGPhi = 0;                       
  L1nRoI = 0;                           
  L1isMoreCandInRoI = 0;                           
  L1Pass = 0;                           
  passedChain = 0;                           
  L1Pt = 0;                             
  L1Eta = 0;                            
  L1Phi = 0;                            
  L1RoINumber = 0;                      
  L1RoISector = 0;                      
  SAHypoPass = 0;                       
  SAOvRmPass = 0;                       
  SAOvRmPass_forClusAlg = 0;                       
  SAPt = 0;                             
  SAEta = 0;                            
  SAPhi = 0;                            
  SAEtaMS = 0;                          
  SAEtaBE = 0;                          
  SAPhiMS = 0;                          
  SAPhiBE = 0;                          
  SATGCPt = 0;                          
  SAPtBarrelRadius = 0;                 
  SAPtBarrelSagitta = 0;                
  SAPtEndcapAlpha = 0;                  
  SAPtEndcapBeta = 0;                   
  SAPtEndcapRadius = 0;                 
  SACSCPt = 0;                          
  SAsAddress = 0;                       
  SASPR_BI = 0;                         
  SASPR_BM = 0;                         
  SASPR_BO = 0;                         
  SASPR_EI = 0;                         
  SASPR_EM = 0;                         
  SASPR_EO = 0;                         
  SASPR_EE = 0;                         
  SASPR_CSC = 0;                        
  SASPR_BEE = 0;                        
  SASPR_BME = 0;                        
  SASPZ_BI = 0;                         
  SASPZ_BM = 0;                         
  SASPZ_BO = 0;                         
  SASPZ_EI = 0;                         
  SASPZ_EM = 0;                         
  SASPZ_EO = 0;                         
  SASPZ_EE = 0;                         
  SASPZ_CSC = 0;                        
  SASPZ_BEE = 0;                        
  SASPZ_BME = 0;                        
  SASPSlope_BI = 0;                     
  SASPSlope_BM = 0;                     
  SASPSlope_BO = 0;                     
  SASPSlope_EI = 0;                     
  SASPSlope_EM = 0;                     
  SASPSlope_EO = 0;                     
  SASPSlope_EE = 0;                     
  SASPSlope_CSC = 0;                    
  SASPSlope_BEE = 0;                    
  SASPSlope_BME = 0;                    
  SASPIntercept_BI = 0;                 
  SASPIntercept_BM = 0;                 
  SASPIntercept_BO = 0;                 
  SASPIntercept_EI = 0;                 
  SASPIntercept_EM = 0;                 
  SASPIntercept_EO = 0;                 
  SASPIntercept_EE = 0;                 
  SASPIntercept_CSC = 0;                
  SASPIntercept_BEE = 0;                
  SASPIntercept_BME = 0;                
  SASPChi2_BI = 0;                      
  SASPChi2_BM = 0;                      
  SASPChi2_BO = 0;                      
  SASPChi2_EI = 0;                      
  SASPChi2_EM = 0;                      
  SASPChi2_EO = 0;                     
  SASPChi2_EE = 0;                     
  SASPChi2_CSC = 0;                    
  SASPChi2_BEE = 0;                    
  SASPChi2_BME = 0;                    
  SARoIEta = 0;                        
  SARoIPhi = 0;                        
  SAisRPCFailure = 0;                 
  SAisTGCFailure = 0;                 
  SABarrelRadius = 0;                 
  SABarrelSagitta = 0;                
  SAEtaMap = 0;                       
  SAPhiMap = 0;                       
  SARoINumber = 0;                    
  SARoISector = 0;                    
  SARPCHitTime = 0;                      
  SARPCHitX = 0;                      
  SARPCHitY = 0;                      
  SARPCHitZ = 0;                      
  SARPCHitR = 0;                      
  SARPCHitEta = 0;                    
  SARPCHitPhi = 0;                    
  SARPCHitMeasuresPhi = 0;            
  SARPCHitLayer = 0;            
  SARPCHitStationName = 0;            
  SARPCHitStationNumber = 0;          
  //RPC clustering
  SAspcSetID = 0;                      
  SAptclus = 0;                          
  SAetaMSclus = 0;                          
  SAchargeclus = 0;                          
  SASPCZ_BI = 0;                         
  SASPCZ_BM = 0;                         
  SASPCZ_BO = 0;                         
  SASPCR_BI = 0;                         
  SASPCR_BM = 0;                         
  SASPCR_BO = 0;                         
  SARPCCluster_zMax = 0;                      
  SARPCCluster_zMin = 0;                      
  SARPCCluster_rMax = 0;                      
  SARPCCluster_rMin = 0;                      
  SARPCCluster_gX = 0;                      
  SARPCCluster_gY = 0;                      
  SARPCCluster_gZ = 0;                      
  SARPCCluster_stripWidth = 0;                      
  SARPCCluster_loX = 0;                      
  SARPCCluster_loY = 0;                      
  SARPCCluster_loZ = 0;                      
  SARPCCluster_clusterSize = 0;                      
  SARPCCluster_clusterLayer = 0;                      
  SARPCCluster_clusterMeasPhi = 0;                      
  SARPCCluster_fitInnPhi = 0;                      
  SARPCCluster_fitMidPhi = 0;                      
  SARPCCluster_fitOutPhi = 0;                      
  SARPCCluster_fitInnSlope = 0;                      
  SARPCCluster_fitMidSlope = 0;                      
  SARPCCluster_fitOutSlope = 0;                      
  SARPCCluster_fitInnOffset = 0;                      
  SARPCCluster_fitMidOffset = 0;                      
  SARPCCluster_fitOutOffset = 0;                      
  SARPCCluster_isSuccess = 0;                      
  SARPCCluster_isUsingMidCluster = 0;                      
  SARPCCluster_isPlausibleFitInnMid = 0;                      
  SARPCCluster_isPlausibleFitOut = 0;                      
  SARPCCluster_isPlausiblePhiInnMid = 0;                      
  SARPCCluster_isPlausiblePhiOut = 0;                      
  SARPCCluster_n_foundClusters = 0;                      
  SARPCCluster_id_clustersInSets = 0;                      
  SARPCCluster_id_clustersInPhiSets = 0;                      

  SARPCFitInnPhi = 0;                 
  SARPCFitInnSlope = 0;               
  SARPCFitInnOffset = 0;              
  SARPCFitMidPhi = 0;                 
  SARPCFitMidSlope = 0;               
  SARPCFitMidOffset = 0;              
  SARPCFitOutPhi = 0;                 
  SARPCFitOutSlope = 0;               
  SARPCFitOutOffset = 0;              
  SARoadAw = 0;                       
  SARoadBw = 0;                       
  SAzMin = 0;                         
  SAzMax = 0;                         
  SArMin = 0;                         
  SArMax = 0;                         
  SAEtaMin = 0;                       
  SAEtaMax = 0;                       
  SAMDTHitisOutlier = 0;              
  SAMDTHitChamber = 0;                
  SAMDTHitR = 0;                      
  SAMDTHitZ = 0;                      
  SAMDTHitPhi = 0;                    
  SAMDTHitResidual = 0;               
  SAMDTHitSpace = 0;                  
  SAMDTHitSigma = 0;                  
  SAMDTHitAllR = 0;                      
  SAMDTHitAllZ = 0;                      
  SAMDTHitAllisOutlier = 0;                      
  SAMDTHitAllclusRoadID = 0;                      
  CBHypoPass = 0;                     
  CBOvRmPass = 0;                     
  CBPt = 0;                           
  CBEta = 0;                          
  CBPhi = 0;                          
  EFPass = 0;                         
  EFPt = 0;                           
  EFEta = 0;                          
  EFPhi = 0;                          
  if (!tree) return;
  fChain = tree;
  fCurrent = -1;
  fChain->SetMakeClass(1);
  fChain->SetBranchAddress("EventNumber",                       &EventNumber,                       &b_EventNumber                       );
  fChain->SetBranchAddress("RunNumber",                         &RunNumber,                         &b_RunNumber                         );
  fChain->SetBranchAddress("LumiBlock",                         &LumiBlock,                         &b_LumiBlock                         );
  fChain->SetBranchAddress("AverageInteractionsPerCrossing",    &AverageInteractionsPerCrossing,    &b_AverageInteractionsPerCrossing    );
  fChain->SetBranchAddress("mes_name",                          &mes_name,                          &b_mes_name                          );
  fChain->SetBranchAddress("nMuon",                            &nMuon,                            &b_nMuon                            );
  fChain->SetBranchAddress("OfflinePt",                      &OfflinePt,                      &b_OfflinePt                      );
  fChain->SetBranchAddress("OfflineEta",                     &OfflineEta,                     &b_OfflineEta                     );
  fChain->SetBranchAddress("OfflineExtEta",                  &OfflineExtEta,                  &b_OfflineExtEta                  );
  fChain->SetBranchAddress("OfflineExtInnEta",               &OfflineExtInnEta,               &b_OfflineExtInnEta               );
  fChain->SetBranchAddress("OfflinePhi",                     &OfflinePhi,                     &b_OfflinePhi                     );
  fChain->SetBranchAddress("OfflineExtPhi",                  &OfflineExtPhi,                  &b_OfflineExtPhi                  );
  fChain->SetBranchAddress("OfflineExtInnPhi",               &OfflineExtInnPhi,               &b_OfflineExtInnPhi               );
  fChain->SetBranchAddress("OfflineD0",                      &OfflineD0,                      &b_OfflineD0                      );
  fChain->SetBranchAddress("OfflineZ0",                      &OfflineZ0,                      &b_OfflineZ0                      );
  fChain->SetBranchAddress("OfflineCharge",                  &OfflineCharge,                  &b_OfflineCharge                  );
  fChain->SetBranchAddress("OfflineNumSegment",              &OfflineNumSegment,              &b_OfflineNumSegment              );
  fChain->SetBranchAddress("OfflineSegmentX",                &OfflineSegmentX,                &b_OfflineSegmentX                );
  fChain->SetBranchAddress("OfflineSegmentY",                &OfflineSegmentY,                &b_OfflineSegmentY                );
  fChain->SetBranchAddress("OfflineSegmentZ",                &OfflineSegmentZ,                &b_OfflineSegmentZ                );
  fChain->SetBranchAddress("OfflineSegmentPx",               &OfflineSegmentPx,               &b_OfflineSegmentPx               );
  fChain->SetBranchAddress("OfflineSegmentPy",               &OfflineSegmentPy,               &b_OfflineSegmentPy               );
  fChain->SetBranchAddress("OfflineSegmentPz",               &OfflineSegmentPz,               &b_OfflineSegmentPz               );
  fChain->SetBranchAddress("OfflineSegmentChiSquared",       &OfflineSegmentChiSquared,       &b_OfflineSegmentChiSquared       );
  fChain->SetBranchAddress("OfflineSegmentNumberDoF",        &OfflineSegmentNumberDoF,        &b_OfflineSegmentNumberDoF        );
  fChain->SetBranchAddress("OfflineSegmentSector",           &OfflineSegmentSector,           &b_OfflineSegmentSector           );
  fChain->SetBranchAddress("OfflineSegmentChamberIndex",     &OfflineSegmentChamberIndex,     &b_OfflineSegmentChamberIndex     );
  fChain->SetBranchAddress("OfflineSegmentEtaIndex",         &OfflineSegmentEtaIndex,         &b_OfflineSegmentEtaIndex         );
  fChain->SetBranchAddress("OfflineSegmentNPrecisionHits",   &OfflineSegmentNPrecisionHits,   &b_OfflineSegmentNPrecisionHits   );
  fChain->SetBranchAddress("OfflineSegmentNPhiLayers",       &OfflineSegmentNPhiLayers,       &b_OfflineSegmentNPhiLayers       );
  fChain->SetBranchAddress("OfflineSegmentNTrigEtaLayers",   &OfflineSegmentNTrigEtaLayers,   &b_OfflineSegmentNTrigEtaLayers   );
  fChain->SetBranchAddress("EFTAGPass",                      &EFTAGPass,                      &b_EFTAGPass                      );
  fChain->SetBranchAddress("EFTAGPt",                        &EFTAGPt,                        &b_EFTAGPt                        );
  fChain->SetBranchAddress("EFTAGEta",                       &EFTAGEta,                       &b_EFTAGEta                       );
  fChain->SetBranchAddress("EFTAGPhi",                       &EFTAGPhi,                       &b_EFTAGPhi                       );
  fChain->SetBranchAddress("L1nRoI",                         &L1nRoI,                         &b_L1nRoI                         );
  fChain->SetBranchAddress("L1isMoreCandInRoI",                         &L1isMoreCandInRoI,                         &b_L1isMoreCandInRoI                         );
  fChain->SetBranchAddress("L1Pass",                         &L1Pass,                         &b_L1Pass                         );
  fChain->SetBranchAddress("passedChain",                         &passedChain,                         &b_passedChain                         );
  fChain->SetBranchAddress("L1Pt",                           &L1Pt,                           &b_L1Pt                           );
  fChain->SetBranchAddress("L1Eta",                          &L1Eta,                          &b_L1Eta                          );
  fChain->SetBranchAddress("L1Phi",                          &L1Phi,                          &b_L1Phi                          );
  fChain->SetBranchAddress("L1RoINumber",                    &L1RoINumber,                    &b_L1RoINumber                    );
  fChain->SetBranchAddress("L1RoISector",                    &L1RoISector,                    &b_L1RoISector                    );
  fChain->SetBranchAddress("SAHypoPass",                     &SAHypoPass,                     &b_SAHypoPass                     );
  fChain->SetBranchAddress("SAOvRmPass",                     &SAOvRmPass,                     &b_SAOvRmPass                     );
  fChain->SetBranchAddress("SAOvRmPass_forClusAlg",                     &SAOvRmPass_forClusAlg,                     &b_SAOvRmPass_forClusAlg                     );
  fChain->SetBranchAddress("SAPt",                           &SAPt,                           &b_SAPt                           );
  fChain->SetBranchAddress("SAEta",                          &SAEta,                          &b_SAEta                          );
  fChain->SetBranchAddress("SAPhi",                          &SAPhi,                          &b_SAPhi                          );
  fChain->SetBranchAddress("SAEtaMS",                        &SAEtaMS,                        &b_SAEtaMS                        );
  fChain->SetBranchAddress("SAEtaBE",                        &SAEtaBE,                        &b_SAEtaBE                        );
  fChain->SetBranchAddress("SAPhiMS",                        &SAPhiMS,                        &b_SAPhiMS                        );
  fChain->SetBranchAddress("SAPhiBE",                        &SAPhiBE,                        &b_SAPhiBE                        );
  fChain->SetBranchAddress("SATGCPt",                        &SATGCPt,                        &b_SATGCPt                        );
  fChain->SetBranchAddress("SAPtBarrelRadius",               &SAPtBarrelRadius,               &b_SAPtBarrelRadius               );
  fChain->SetBranchAddress("SAPtBarrelSagitta",              &SAPtBarrelSagitta,              &b_SAPtBarrelSagitta              );
  fChain->SetBranchAddress("SAPtEndcapAlpha",                &SAPtEndcapAlpha,                &b_SAPtEndcapAlpha                );
  fChain->SetBranchAddress("SAPtEndcapBeta",                 &SAPtEndcapBeta,                 &b_SAPtEndcapBeta                 );
  fChain->SetBranchAddress("SAPtEndcapRadius",               &SAPtEndcapRadius,               &b_SAPtEndcapRadius               );
  fChain->SetBranchAddress("SACSCPt",                        &SACSCPt,                        &b_SACSCPt                        );
  fChain->SetBranchAddress("SAsAddress",                     &SAsAddress,                     &b_SAsAddress                     );
  fChain->SetBranchAddress("SASPR_BI",                       &SASPR_BI,                       &b_SASPR_BI                       );
  fChain->SetBranchAddress("SASPR_BM",                       &SASPR_BM,                       &b_SASPR_BM                       );
  fChain->SetBranchAddress("SASPR_BO",                       &SASPR_BO,                       &b_SASPR_BO                       );
  fChain->SetBranchAddress("SASPR_EI",                       &SASPR_EI,                       &b_SASPR_EI                       );
  fChain->SetBranchAddress("SASPR_EM",                       &SASPR_EM,                       &b_SASPR_EM                       );
  fChain->SetBranchAddress("SASPR_EO",                       &SASPR_EO,                       &b_SASPR_EO                       );
  fChain->SetBranchAddress("SASPR_EE",                       &SASPR_EE,                       &b_SASPR_EE                       );
  fChain->SetBranchAddress("SASPR_CSC",                      &SASPR_CSC,                      &b_SASPR_CSC                      );
  fChain->SetBranchAddress("SASPR_BEE",                      &SASPR_BEE,                      &b_SASPR_BEE                      );
  fChain->SetBranchAddress("SASPR_BME",                      &SASPR_BME,                      &b_SASPR_BME                      );
  fChain->SetBranchAddress("SASPZ_BI",                       &SASPZ_BI,                       &b_SASPZ_BI                       );
  fChain->SetBranchAddress("SASPZ_BM",                       &SASPZ_BM,                       &b_SASPZ_BM                       );
  fChain->SetBranchAddress("SASPZ_BO",                       &SASPZ_BO,                       &b_SASPZ_BO                       );
  fChain->SetBranchAddress("SASPZ_EI",                       &SASPZ_EI,                       &b_SASPZ_EI                       );
  fChain->SetBranchAddress("SASPZ_EM",                       &SASPZ_EM,                       &b_SASPZ_EM                       );
  fChain->SetBranchAddress("SASPZ_EO",                       &SASPZ_EO,                       &b_SASPZ_EO                       );
  fChain->SetBranchAddress("SASPZ_EE",                       &SASPZ_EE,                       &b_SASPZ_EE                       );
  fChain->SetBranchAddress("SASPZ_CSC",                      &SASPZ_CSC,                      &b_SASPZ_CSC                      );
  fChain->SetBranchAddress("SASPZ_BEE",                      &SASPZ_BEE,                      &b_SASPZ_BEE                      );
  fChain->SetBranchAddress("SASPZ_BME",                      &SASPZ_BME,                      &b_SASPZ_BME                      );
  fChain->SetBranchAddress("SASPSlope_BI",                   &SASPSlope_BI,                   &b_SASPSlope_BI                   );
  fChain->SetBranchAddress("SASPSlope_BM",                   &SASPSlope_BM,                   &b_SASPSlope_BM                   );
  fChain->SetBranchAddress("SASPSlope_BO",                   &SASPSlope_BO,                   &b_SASPSlope_BO                   );
  fChain->SetBranchAddress("SASPSlope_EI",                   &SASPSlope_EI,                   &b_SASPSlope_EI                   );
  fChain->SetBranchAddress("SASPSlope_EM",                   &SASPSlope_EM,                   &b_SASPSlope_EM                   );
  fChain->SetBranchAddress("SASPSlope_EO",                   &SASPSlope_EO,                   &b_SASPSlope_EO                   );
  fChain->SetBranchAddress("SASPSlope_EE",                   &SASPSlope_EE,                   &b_SASPSlope_EE                   );
  fChain->SetBranchAddress("SASPSlope_CSC",                  &SASPSlope_CSC,                  &b_SASPSlope_CSC                  );
  fChain->SetBranchAddress("SASPSlope_BEE",                  &SASPSlope_BEE,                  &b_SASPSlope_BEE                  );
  fChain->SetBranchAddress("SASPSlope_BME",                  &SASPSlope_BME,                  &b_SASPSlope_BME                  );
  fChain->SetBranchAddress("SASPIntercept_BI",               &SASPIntercept_BI,               &b_SASPIntercept_BI               );
  fChain->SetBranchAddress("SASPIntercept_BM",               &SASPIntercept_BM,               &b_SASPIntercept_BM               );
  fChain->SetBranchAddress("SASPIntercept_BO",               &SASPIntercept_BO,               &b_SASPIntercept_BO               );
  fChain->SetBranchAddress("SASPIntercept_EI",               &SASPIntercept_EI,               &b_SASPIntercept_EI               );
  fChain->SetBranchAddress("SASPIntercept_EM",               &SASPIntercept_EM,               &b_SASPIntercept_EM               );
  fChain->SetBranchAddress("SASPIntercept_EO",               &SASPIntercept_EO,               &b_SASPIntercept_EO               );
  fChain->SetBranchAddress("SASPIntercept_EE",               &SASPIntercept_EE,               &b_SASPIntercept_EE               );
  fChain->SetBranchAddress("SASPIntercept_CSC",              &SASPIntercept_CSC,              &b_SASPIntercept_CSC              );
  fChain->SetBranchAddress("SASPIntercept_BEE",              &SASPIntercept_BEE,              &b_SASPIntercept_BEE              );
  fChain->SetBranchAddress("SASPIntercept_BME",              &SASPIntercept_BME,              &b_SASPIntercept_BME              );
  fChain->SetBranchAddress("SASPChi2_BI",                    &SASPChi2_BI,                    &b_SASPChi2_BI                    );
  fChain->SetBranchAddress("SASPChi2_BM",                    &SASPChi2_BM,                    &b_SASPChi2_BM                    );
  fChain->SetBranchAddress("SASPChi2_BO",                    &SASPChi2_BO,                    &b_SASPChi2_BO                    );
  fChain->SetBranchAddress("SASPChi2_EI",                    &SASPChi2_EI,                    &b_SASPChi2_EI                    );
  fChain->SetBranchAddress("SASPChi2_EM",                    &SASPChi2_EM,                    &b_SASPChi2_EM                    );
  fChain->SetBranchAddress("SASPChi2_EO",                    &SASPChi2_EO,                    &b_SASPChi2_EO                    );
  fChain->SetBranchAddress("SASPChi2_EE",                    &SASPChi2_EE,                    &b_SASPChi2_EE                    );
  fChain->SetBranchAddress("SASPChi2_CSC",                   &SASPChi2_CSC,                   &b_SASPChi2_CSC                   );
  fChain->SetBranchAddress("SASPChi2_BEE",                   &SASPChi2_BEE,                   &b_SASPChi2_BEE                   );
  fChain->SetBranchAddress("SASPChi2_BME",                   &SASPChi2_BME,                   &b_SASPChi2_BME                   );
  fChain->SetBranchAddress("SARoIEta",                       &SARoIEta,                       &b_SARoIEta                       );
  fChain->SetBranchAddress("SARoIPhi",                       &SARoIPhi,                       &b_SARoIPhi                       );
  fChain->SetBranchAddress("SAisRPCFailure",                 &SAisRPCFailure,                 &b_SAisRPCFailure                 );
  fChain->SetBranchAddress("SAisTGCFailure",                 &SAisTGCFailure,                 &b_SAisTGCFailure                 );
  fChain->SetBranchAddress("SABarrelRadius",                 &SABarrelRadius,                 &b_SABarrelRadius                 );
  fChain->SetBranchAddress("SABarrelSagitta",                &SABarrelSagitta,                &b_SABarrelSagitta                );
  fChain->SetBranchAddress("SAEtaMap",                       &SAEtaMap,                       &b_SAEtaMap                       );
  fChain->SetBranchAddress("SAPhiMap",                       &SAPhiMap,                       &b_SAPhiMap                       );
  fChain->SetBranchAddress("SARoINumber",                    &SARoINumber,                    &b_SARoINumber                    );
  fChain->SetBranchAddress("SARoISector",                    &SARoISector,                    &b_SARoISector                    );
  fChain->SetBranchAddress("SARPCHitTime",                   &SARPCHitTime,                   &b_SARPCHitTime                   );
  fChain->SetBranchAddress("SARPCHitX",                      &SARPCHitX,                      &b_SARPCHitX                      );
  fChain->SetBranchAddress("SARPCHitY",                      &SARPCHitY,                      &b_SARPCHitY                      );
  fChain->SetBranchAddress("SARPCHitZ",                      &SARPCHitZ,                      &b_SARPCHitZ                      );
  fChain->SetBranchAddress("SARPCHitR",                      &SARPCHitR,                      &b_SARPCHitR                      );
  fChain->SetBranchAddress("SARPCHitEta",                    &SARPCHitEta,                    &b_SARPCHitEta                    );
  fChain->SetBranchAddress("SARPCHitPhi",                    &SARPCHitPhi,                    &b_SARPCHitPhi                    );
  fChain->SetBranchAddress("SARPCHitMeasuresPhi",            &SARPCHitMeasuresPhi,            &b_SARPCHitMeasuresPhi            );
  fChain->SetBranchAddress("SARPCHitLayer",                  &SARPCHitLayer,                  &b_SARPCHitLayer                  );
  fChain->SetBranchAddress("SARPCHitStationName",            &SARPCHitStationName,            &b_SARPCHitStationName            );
  fChain->SetBranchAddress("SARPCHitStationNumber",          &SARPCHitStationNumber,          &b_SARPCHitStationNumber          );
  //RPC clustering
  fChain->SetBranchAddress("SAspcSetID",                &SAspcSetID,                &b_SAspcSetID                );
  fChain->SetBranchAddress("SAptclus",                        &SAptclus,                        &b_SAptclus                        );
  fChain->SetBranchAddress("SAetaMSclus",                        &SAetaMSclus,                        &b_SAetaMSclus                        );
  fChain->SetBranchAddress("SAchargeclus",                        &SAchargeclus,                        &b_SAchargeclus                        );
  fChain->SetBranchAddress("SASPCZ_BI",                       &SASPCZ_BI,                       &b_SASPCZ_BI                       );
  fChain->SetBranchAddress("SASPCZ_BM",                       &SASPCZ_BM,                       &b_SASPCZ_BM                       );
  fChain->SetBranchAddress("SASPCZ_BO",                       &SASPCZ_BO,                       &b_SASPCZ_BO                       );
  fChain->SetBranchAddress("SASPCR_BI",                       &SASPCR_BI,                       &b_SASPCR_BI                       );
  fChain->SetBranchAddress("SASPCR_BM",                       &SASPCR_BM,                       &b_SASPCR_BM                       );
  fChain->SetBranchAddress("SASPCR_BO",                       &SASPCR_BO,                       &b_SASPCR_BO                       );
  fChain->SetBranchAddress("SARPCCluster_zMax",                &SARPCCluster_zMax,                &b_SARPCCluster_zMax                );
  fChain->SetBranchAddress("SARPCCluster_zMin",                &SARPCCluster_zMin,                &b_SARPCCluster_zMin                );
  fChain->SetBranchAddress("SARPCCluster_rMax",                &SARPCCluster_rMax,                &b_SARPCCluster_rMax                );
  fChain->SetBranchAddress("SARPCCluster_rMin",                &SARPCCluster_rMin,                &b_SARPCCluster_rMin                );
  fChain->SetBranchAddress("SARPCCluster_gX",                &SARPCCluster_gX,                &b_SARPCCluster_gX                );
  fChain->SetBranchAddress("SARPCCluster_gY",                &SARPCCluster_gY,                &b_SARPCCluster_gY                );
  fChain->SetBranchAddress("SARPCCluster_gZ",                &SARPCCluster_gZ,                &b_SARPCCluster_gZ                );
  fChain->SetBranchAddress("SARPCCluster_stripWidth",        &SARPCCluster_stripWidth,        &b_SARPCCluster_stripWidth        );
  fChain->SetBranchAddress("SARPCCluster_loX",               &SARPCCluster_loX,               &b_SARPCCluster_loX               );
  fChain->SetBranchAddress("SARPCCluster_loY",               &SARPCCluster_loY,               &b_SARPCCluster_loY               );
  fChain->SetBranchAddress("SARPCCluster_loZ",               &SARPCCluster_loZ,               &b_SARPCCluster_loZ               );
  fChain->SetBranchAddress("SARPCCluster_clusterSize",       &SARPCCluster_clusterSize,       &b_SARPCCluster_clusterSize       );
  fChain->SetBranchAddress("SARPCCluster_clusterLayer",      &SARPCCluster_clusterLayer,      &b_SARPCCluster_clusterLayer      );
  fChain->SetBranchAddress("SARPCCluster_clusterMeasPhi",    &SARPCCluster_clusterMeasPhi,    &b_SARPCCluster_clusterMeasPhi    );
  fChain->SetBranchAddress("SARPCCluster_fitInnPhi",                &SARPCCluster_fitInnPhi,                &b_SARPCCluster_fitInnPhi                );
  fChain->SetBranchAddress("SARPCCluster_fitMidPhi",                &SARPCCluster_fitMidPhi,                &b_SARPCCluster_fitMidPhi                );
  fChain->SetBranchAddress("SARPCCluster_fitOutPhi",                &SARPCCluster_fitOutPhi,                &b_SARPCCluster_fitOutPhi                );
  fChain->SetBranchAddress("SARPCCluster_fitInnSlope",                &SARPCCluster_fitInnSlope,                &b_SARPCCluster_fitInnSlope                );
  fChain->SetBranchAddress("SARPCCluster_fitMidSlope",                &SARPCCluster_fitMidSlope,                &b_SARPCCluster_fitMidSlope                );
  fChain->SetBranchAddress("SARPCCluster_fitOutSlope",                &SARPCCluster_fitOutSlope,                &b_SARPCCluster_fitOutSlope                );
  fChain->SetBranchAddress("SARPCCluster_fitInnOffset",                &SARPCCluster_fitInnOffset,                &b_SARPCCluster_fitInnOffset                );
  fChain->SetBranchAddress("SARPCCluster_fitMidOffset",                &SARPCCluster_fitMidOffset,                &b_SARPCCluster_fitMidOffset                );
  fChain->SetBranchAddress("SARPCCluster_fitOutOffset",                &SARPCCluster_fitOutOffset,                &b_SARPCCluster_fitOutOffset                );
  fChain->SetBranchAddress("SARPCCluster_isSuccess",                &SARPCCluster_isSuccess,                &b_SARPCCluster_isSuccess                );
  fChain->SetBranchAddress("SARPCCluster_isUsingMidCluster",                &SARPCCluster_isUsingMidCluster,                &b_SARPCCluster_isUsingMidCluster                );
  fChain->SetBranchAddress("SARPCCluster_isPlausibleFitInnMid",                &SARPCCluster_isPlausibleFitInnMid,                &b_SARPCCluster_isPlausibleFitInnMid                );
  fChain->SetBranchAddress("SARPCCluster_isPlausibleFitOut",                &SARPCCluster_isPlausibleFitOut,                &b_SARPCCluster_isPlausibleFitOut                );
  fChain->SetBranchAddress("SARPCCluster_isPlausiblePhiInnMid",                &SARPCCluster_isPlausiblePhiInnMid,                &b_SARPCCluster_isPlausiblePhiInnMid                );
  fChain->SetBranchAddress("SARPCCluster_isPlausiblePhiOut",                &SARPCCluster_isPlausiblePhiOut,                &b_SARPCCluster_isPlausiblePhiOut                );
  fChain->SetBranchAddress("SARPCCluster_n_foundClusters",                &SARPCCluster_n_foundClusters,                &b_SARPCCluster_n_foundClusters                );
  fChain->SetBranchAddress("SARPCCluster_id_clustersInSets",                &SARPCCluster_id_clustersInSets,                &b_SARPCCluster_id_clustersInSets                );
  fChain->SetBranchAddress("SARPCCluster_id_clustersInPhiSets",                &SARPCCluster_id_clustersInPhiSets,                &b_SARPCCluster_id_clustersInPhiSets                );

  fChain->SetBranchAddress("SARPCFitInnPhi",                 &SARPCFitInnPhi,                 &b_SARPCFitInnPhi                 );
  fChain->SetBranchAddress("SARPCFitInnSlope",               &SARPCFitInnSlope,               &b_SARPCFitInnSlope               );
  fChain->SetBranchAddress("SARPCFitInnOffset",              &SARPCFitInnOffset,              &b_SARPCFitInnOffset              );
  fChain->SetBranchAddress("SARPCFitMidPhi",                 &SARPCFitMidPhi,                 &b_SARPCFitMidPhi                 );
  fChain->SetBranchAddress("SARPCFitMidSlope",               &SARPCFitMidSlope,               &b_SARPCFitMidSlope               );
  fChain->SetBranchAddress("SARPCFitMidOffset",              &SARPCFitMidOffset,              &b_SARPCFitMidOffset              );
  fChain->SetBranchAddress("SARPCFitOutPhi",                 &SARPCFitOutPhi,                 &b_SARPCFitOutPhi                 );
  fChain->SetBranchAddress("SARPCFitOutSlope",               &SARPCFitOutSlope,               &b_SARPCFitOutSlope               );
  fChain->SetBranchAddress("SARPCFitOutOffset",              &SARPCFitOutOffset,              &b_SARPCFitOutOffset              );
  fChain->SetBranchAddress("SARoadAw",                       &SARoadAw,                       &b_SARoadAw                       );
  fChain->SetBranchAddress("SARoadBw",                       &SARoadBw,                       &b_SARoadBw                       );
  fChain->SetBranchAddress("SAzMin",                         &SAzMin,                         &b_SAzMin                         );
  fChain->SetBranchAddress("SAzMax",                         &SAzMax,                         &b_SAzMax                         );
  fChain->SetBranchAddress("SArMin",                         &SArMin,                         &b_SArMin                         );
  fChain->SetBranchAddress("SArMax",                         &SArMax,                         &b_SArMax                         );
  fChain->SetBranchAddress("SAEtaMin",                       &SAEtaMin,                       &b_SAEtaMin                       );
  fChain->SetBranchAddress("SAEtaMax",                       &SAEtaMax,                       &b_SAEtaMax                       );
  fChain->SetBranchAddress("SAMDTHitisOutlier",              &SAMDTHitisOutlier,              &b_SAMDTHitisOutlier              );
  fChain->SetBranchAddress("SAMDTHitChamber",                &SAMDTHitChamber,                &b_SAMDTHitChamber                );
  fChain->SetBranchAddress("SAMDTHitR",                      &SAMDTHitR,                      &b_SAMDTHitR                      );
  fChain->SetBranchAddress("SAMDTHitZ",                      &SAMDTHitZ,                      &b_SAMDTHitZ                      );
  fChain->SetBranchAddress("SAMDTHitPhi",                    &SAMDTHitPhi,                    &b_SAMDTHitPhi                    );
  fChain->SetBranchAddress("SAMDTHitResidual",               &SAMDTHitResidual,               &b_SAMDTHitResidual               );
  fChain->SetBranchAddress("SAMDTHitSpace",                  &SAMDTHitSpace,                  &b_SAMDTHitSpace                  );
  fChain->SetBranchAddress("SAMDTHitSigma",                  &SAMDTHitSigma,                  &b_SAMDTHitSigma                  );
  fChain->SetBranchAddress("SAMDTHitAllR",                      &SAMDTHitAllR,                      &b_SAMDTHitAllR                      );
  fChain->SetBranchAddress("SAMDTHitAllZ",                      &SAMDTHitAllZ,                      &b_SAMDTHitAllZ                      );
  fChain->SetBranchAddress("SAMDTHitAllclusRoadID",                      &SAMDTHitAllclusRoadID,                      &b_SAMDTHitAllclusRoadID                      );
  fChain->SetBranchAddress("SAMDTHitAllisOutlier",                      &SAMDTHitAllisOutlier,                      &b_SAMDTHitAllisOutlier                      );
  fChain->SetBranchAddress("CBHypoPass",                     &CBHypoPass,                     &b_CBHypoPass                     );
  fChain->SetBranchAddress("CBOvRmPass",                     &CBOvRmPass,                     &b_CBOvRmPass                     );
  fChain->SetBranchAddress("CBPt",                           &CBPt,                           &b_CBPt                           );
  fChain->SetBranchAddress("CBEta",                          &CBEta,                          &b_CBEta                          );
  fChain->SetBranchAddress("EFPass",                     &EFPass,                     &b_EFPass                     );

  Notify();
}

Bool_t NtupleAnalysisTool::Notify()
{
  // The Notify() function is called when a new file is opened. This
  // can be either for a new TTree in a TChain or when when a new TTree
  // is started when using PROOF. It is normally not necessary to make changes
  // to the generated code, but the routine can be extended by the
  // user if needed. The return value is currently not used.

  return kTRUE;
}

void NtupleAnalysisTool::Show(Long64_t entry)
{
  // Print contents of entry.
  // If entry is not specified, print current entry
  if (!fChain) return;
  fChain->Show(entry);
}
Int_t NtupleAnalysisTool::Cut(Long64_t entry)
{
  // This function may be called from Loop.
  // returns  1 if entry is accepted.
  // returns -1 otherwise.
  return 1;
}
#endif // #ifdef NtupleAnalysisTool_cxx
