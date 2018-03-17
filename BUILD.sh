#!/bin/bash

set -e 

#for i in monox_mass0 monox_mass1 monox_mass2 monox_mass3
#for i in monox_mass0_subjet monox_mass1_subjet monox_mass2_subjet monox_mass3_subjet
#for i in monox_mass0_subjet_2017 monox_mass1_subjet_2017 monox_mass2_subjet_2017 monox_mass3_subjet_2017

#for i in monox_mass0f monox_mass0p monox_mass1f monox_mass1p monox_mass2f monox_mass2p monox_mass3f monox_mass3p
#do
#    python buildModel.py $i
#done

#rm mono-x.root

hadd mono-x.root mono-x0p.root mono-x1p.root mono-x2p.root mono-x3p.root mono-x0f.root mono-x1f.root mono-x2f.root mono-x3f.root

if [ -e mono-x.root ];then
    python runModel_monox.py
else
    exit 0
fi