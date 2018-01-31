#!/bin/bash

echo "Launching Megascript"
sleep 3
sh run_combineMassBin.sh

for mass in mass1
do
    scp scan_hszp.sh ${mass}/scan_hszp.sh
    eval cd $mass
    sh scan_hszp.sh $mass
    rm scan_hszp.sh
done
echo "DONE"
