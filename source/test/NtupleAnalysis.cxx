#include "../NtupleAnalysisTool/NtupleAnalysisTool.h"

int main(int argc, char *argv[])
{
  TString dir = argv[1];
  TString output = argv[3];
  int begin_entry = atoi(argv[4]);
  int limit_entry = atoi(argv[5]);
  TString outputroot = "output/"+dir+"/"+output+".root";
  TString outputpdf = "plot/"+dir+"/"+output+".pdf";
  TFile *fout = new TFile(outputroot, "recreate");
  TChain *tree1 = new TChain("t_tap", "t_tap");
  HistData histData;
  tree1->Add(argv[2]);
  NtupleAnalysisTool nat(tree1);
  nat.Loop(histData, begin_entry, limit_entry);
  nat.DrawHist(outputpdf, histData);
  fout->Write();
  delete tree1;
  delete fout;

  return 0;
}
