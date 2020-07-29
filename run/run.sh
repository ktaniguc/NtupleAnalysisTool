#!/bin/sh

if [ "$1" = test ]; then
  DATE="test"
else
  DATE=$(date '+%Y%m%d%H%M')
fi
INPUTFILE="/gpfs/fs7001/ktaniguc/outputfile/OutputCalcEff/RpcCluster/JpsiCollimated_newL2SA_separateMDTs.root"  #new Algorithm
#INPUTFILE="/gpfs/fs7001/ktaniguc/outputfile/OutputCalcEff/RpcCluster/RpcClustering_JpsiCollimated-ptFromClusRoad_ClusAlgoOvRmCheck_mu4_fixed.root"  #imano Algorithm
OUTPUTFILE="newL2SA_separateMDTs"
mkdir -p ./outroot/${DATE}
mkdir -p ./plot/${DATE}
COMMAND="$setupDir/build/source/test/NtupleAnalysis.out $INPUTFILE $OUTPUTFILE $DATE"
eval ${COMMAND}
