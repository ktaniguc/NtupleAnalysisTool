#include "../NtupleAnalysisTool/NtupleAnalysisTool.h"

int main(int argc, char *argv[])
{
  TChain *tree1 = new TChain("t_tap", "t_tap");
  NtupleAnalysisTool nat(tree1);
  HistData histData;
  TString dir = argv[1];
  tree1->Add(argv[2]);
  TString output = argv[3];
  int begin_entry = atoi(argv[4]);
  int limit_entry = atoi(argv[5]);
  TString outputroot = "output/"+dir+"/"+output+".root";
  TString outputpdf = "plot/"+dir+"/"+output+".pdf";
  TFile *fout = new TFile(outputroot, "recreate");
  nat.Loop(histData, begin_entry, limit_entry);
  nat.DrawHist(outputpdf);
  fout->Write();
  delete tree1;
  delete fout;

  return 0;
}
