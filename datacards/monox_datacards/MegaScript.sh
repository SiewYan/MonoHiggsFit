#!/bin/bash

echo "Launching Megascript"
sleep 3
sh run_combineMassBin.sh

for mass in MASS
do
    #scp scan_hszp.sh ${mass}/scan_hszp.sh
    eval cd $mass

    if [ $mass == "MASS" ];then
	echo "sh scan_hszp.sh all"
    else
	echo "sh scan_hszp.sh $mass"
    fi
    #rm scan_hszp.sh

done
echo "DONE"
