#!/bin/bash

for i in monox_mass0 monox_mass1 monox_mass2 monox_mass3
do
    python buildModel.py $i
done 