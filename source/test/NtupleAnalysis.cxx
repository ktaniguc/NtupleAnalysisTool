#include "../NtupleAnalysisTool/NtupleAnalysisTool.h"
#include "/home/ktaniguc/RootUtils/src/rootlogon.C"
#include "../NtupleAnalysisTool/HistData.h"

int main(int argc, char *argv[])
{
  rootlogon();
  gStyle->SetLegendBorderSize(0);

  TChain *tree1 = new TChain("t_tap", "t_tap");
  tree1->Add(argv[1]);
  TString filename = argv[2];
  TString date = argv[3];
  NtupleAnalysisTool nat(tree1);
  TString outroot = "outroot/"+ date + "/" + filename + ".root";
  TString outpdf = "plot/"+ date + "/" + filename + ".pdf";
  HistData histData;
  TFile *fout = new TFile(outroot, "recreate");
  nat.Loop(histData);
  nat.draw_dimuin1roi(histData, outpdf);
  fout->Write();
  delete fout;

  histData.HistEnd();
  return 0;
}
