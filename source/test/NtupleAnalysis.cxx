#include "../NtupleAnalysisTool/NtupleAnalysisTool.h"

int main(int argc, char *argv[])
{

  TChain *tree1 = new TChain("t_tap", "t_tap");
  tree1->Add(argv[1]);
  NtupleAnalysisTool nat(tree1);
  nat.Loop();

  return 0;
}
