#!/bin/sh
cd $setupDir/build/source/test
INPUTFILE="/gpfs/fs7001/ktaniguc/outputfile/OutputCalcEff/topoRoad_on_calcEffoutput.root"
./NtupleAnalysis.out $INPUTFILE
cd -
