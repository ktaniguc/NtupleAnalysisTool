#!/bin/sh

INPUTFILE="/gpfs/fs7001/ktaniguc/outputfile/topoRoad_off_calcEffoutput.root"
OUTPUTFILE="efficiency_topoRoad_off"
$setupDir/build/source/test/NtupleAnalysis.out $INPUTFILE $OUTPUTFILE
