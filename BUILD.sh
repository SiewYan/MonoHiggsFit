#!/bin/bash

set -e 

for i in monox_mass0 monox_mass1 monox_mass2 monox_mass3
do
    python buildModel.py $i
done

rm mono-x.root

hadd mono-x.root mono-x0.root mono-x1.root mono-x2.root mono-x3.root

if [ -e mono-x.root ];then
    python runModel_monox.py
else
    exit 0
fi