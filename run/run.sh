#!/bin/sh
if [[ "$1" = "" ]]; then
  TITLE=$(date '+%Y%m%d%H%M')
else
  TITLE="$1"
fi
INPUTFILE="/gpfs/fs7001/ktaniguc/outputfile/topoRoad_off_calcEffoutput.root"
OUTPUTFILE="efficiency_topoRoad_off"
BEGIN_ENTRY=0
LIMIT_ENTRY=-1

mkdir -p ./output/${TITLE}
mkdir -p ./plot/${TITLE}
$setupDir/build/source/test/NtupleAnalysis.out $TITLE $INPUTFILE $OUTPUTFILE $BEGIN_ENTRY $LIMIT_ENTRY
