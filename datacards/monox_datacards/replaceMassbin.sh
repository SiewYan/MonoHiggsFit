#!/bin/bash

regexp="mass0"
replace="mass3"

eval cd ${regexp}
for i in `ls monox_*`
do
    echo "sed -e s/${regexp}/${replace}/g $i > ../${replace}/$i"
    sed -e "s/${regexp}/${replace}/g" $i > ../${replace}/$i
done