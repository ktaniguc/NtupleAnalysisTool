//////////////////////////////////////////////////////////
// This class has been automatically generated on
// Fri Jul 10 12:48:54 2020 by ROOT version 6.12/04
// from TTree t_tap/TrigMuonTagAndProbe
// found on file: /gpfs/fs7001/ktaniguc/outputfile/OutputCalcEff/topoRoad_on_calcEffoutput.root
//////////////////////////////////////////////////////////

#ifndef NtupleAnalysisTool_h
#define NtupleAnalysisTool_h

#include <iostream>
#include <TROOT.h>
#include <TChain.h>
#include <TFile.h>
#include "TString.h"
#include "../NtupleAnalysisTool/HistData.h"
#include "/home/ktaniguc/RootUtils/RootUtils/TLegend_addfunc.h"
#include "/home/ktaniguc/RootUtils/RootUtils/TCanvas_opt.h"

// Header file for the classes stored in the TTree if any.
#include "vector"
using namespace std;

class NtupleAnalysisTool {
public :
   TTree          *fChain;   //!pointer to the analyzed TTree or TChain
   Int_t           fCurrent; //!current Tree number in a TChain

// Fixed size dimensions of array or collections stored in the TTree if any.

   // Declaration of leaf types
   Double_t        tpsumReqdRl1;
   Double_t        tpextdR;
   Double_t        invMass;
   vector<string>  *trigname;
   Int_t           n_trig;
   Double_t        probePt;
   Double_t        probeEta;
   Double_t        probePhi;
   Double_t        probeExtEta;
   Double_t        probeExtPhi;
   vector<bool>    *probe_L1_pass;
   vector<double>  *probe_L1_eta;
   vector<double>  *probe_L1_phi;
   vector<bool>    *probe_SA_pass;
   vector<double>  *probe_SA_pt;
   vector<double>  *probe_SA_eta;
   vector<double>  *probe_SA_phi;
   vector<bool>    *probe_CB_pass;
   vector<double>  *probe_CB_pt;
   vector<double>  *probe_CB_eta;
   vector<double>  *probe_CB_phi;
   vector<bool>    *probe_EF_pass;
   vector<double>  *probe_EF_pt;
   vector<double>  *probe_EF_eta;
   vector<double>  *probe_EF_phi;

   // List of branches
   TBranch        *b_tpsumReqdRl1;   //!
   TBranch        *b_tpextdR;   //!
   TBranch        *b_invMass;   //!
   TBranch        *b_trigname;   //!
   TBranch        *b_n_trig;   //!
   TBranch        *b_probePt;   //!
   TBranch        *b_probeEta;   //!
   TBranch        *b_probePhi;   //!
   TBranch        *b_probeExtEta;   //!
   TBranch        *b_probeExtPhi;   //!
   TBranch        *b_probe_L1_pass;   //!
   TBranch        *b_probe_L1_eta;   //!
   TBranch        *b_probe_L1_phi;   //!
   TBranch        *b_probe_SA_pass;   //!
   TBranch        *b_probe_SA_pt;   //!
   TBranch        *b_probe_SA_eta;   //!
   TBranch        *b_probe_SA_phi;   //!
   TBranch        *b_probe_CB_pass;   //!
   TBranch        *b_probe_CB_pt;   //!
   TBranch        *b_probe_CB_eta;   //!
   TBranch        *b_probe_CB_phi;   //!
   TBranch        *b_probe_EF_pass;   //!
   TBranch        *b_probe_EF_pt;   //!
   TBranch        *b_probe_EF_eta;   //!
   TBranch        *b_probe_EF_phi;   //!

   NtupleAnalysisTool(TTree *tree=0);
   virtual ~NtupleAnalysisTool();
   virtual Int_t    Cut(Long64_t entry);
   virtual Int_t    GetEntry(Long64_t entry);
   virtual Long64_t LoadTree(Long64_t entry);
   virtual void     Init(TTree *tree);
   virtual void     Loop(HistData histData, int begin_entry, int limit_entry);
   virtual void     DrawHist(TString outputpdf, HistData histData);
   virtual Bool_t   Notify();
   virtual void     Show(Long64_t entry = -1);
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
   trigname = 0;
   probe_L1_pass = 0;
   probe_L1_eta = 0;
   probe_L1_phi = 0;
   probe_SA_pass = 0;
   probe_SA_pt = 0;
   probe_SA_eta = 0;
   probe_SA_phi = 0;
   probe_CB_pass = 0;
   probe_CB_pt = 0;
   probe_CB_eta = 0;
   probe_CB_phi = 0;
   probe_EF_pass = 0;
   probe_EF_pt = 0;
   probe_EF_eta = 0;
   probe_EF_phi = 0;
   // Set branch addresses and branch pointers
   if (!tree) return;
   fChain = tree;
   fCurrent = -1;
   fChain->SetMakeClass(1);

   fChain->SetBranchAddress("tpsumReqdRl1", &tpsumReqdRl1, &b_tpsumReqdRl1);
   fChain->SetBranchAddress("tpextdR", &tpextdR, &b_tpextdR);
   fChain->SetBranchAddress("invMass", &invMass, &b_invMass);
   fChain->SetBranchAddress("trigname", &trigname, &b_trigname);
   fChain->SetBranchAddress("n_trig", &n_trig, &b_n_trig);
   fChain->SetBranchAddress("probePt", &probePt, &b_probePt);
   fChain->SetBranchAddress("probeEta", &probeEta, &b_probeEta);
   fChain->SetBranchAddress("probePhi", &probePhi, &b_probePhi);
   fChain->SetBranchAddress("probeExtEta", &probeExtEta, &b_probeExtEta);
   fChain->SetBranchAddress("probeExtPhi", &probeExtPhi, &b_probeExtPhi);
   fChain->SetBranchAddress("probe_L1_pass", &probe_L1_pass, &b_probe_L1_pass);
   fChain->SetBranchAddress("probe_L1_eta", &probe_L1_eta, &b_probe_L1_eta);
   fChain->SetBranchAddress("probe_L1_phi", &probe_L1_phi, &b_probe_L1_phi);
   fChain->SetBranchAddress("probe_SA_pass", &probe_SA_pass, &b_probe_SA_pass);
   fChain->SetBranchAddress("probe_SA_pt", &probe_SA_pt, &b_probe_SA_pt);
   fChain->SetBranchAddress("probe_SA_eta", &probe_SA_eta, &b_probe_SA_eta);
   fChain->SetBranchAddress("probe_SA_phi", &probe_SA_phi, &b_probe_SA_phi);
   fChain->SetBranchAddress("probe_CB_pass", &probe_CB_pass, &b_probe_CB_pass);
   fChain->SetBranchAddress("probe_CB_pt", &probe_CB_pt, &b_probe_CB_pt);
   fChain->SetBranchAddress("probe_CB_eta", &probe_CB_eta, &b_probe_CB_eta);
   fChain->SetBranchAddress("probe_CB_phi", &probe_CB_phi, &b_probe_CB_phi);
   fChain->SetBranchAddress("probe_EF_pass", &probe_EF_pass, &b_probe_EF_pass);
   fChain->SetBranchAddress("probe_EF_pt", &probe_EF_pt, &b_probe_EF_pt);
   fChain->SetBranchAddress("probe_EF_eta", &probe_EF_eta, &b_probe_EF_eta);
   fChain->SetBranchAddress("probe_EF_phi", &probe_EF_phi, &b_probe_EF_phi);
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
