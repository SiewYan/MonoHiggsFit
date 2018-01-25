#!/bin/bash


samples_2hdm=(hsZp_1000_50_200)
#samples_2hdm=(BarZp-500-1000)

echo "med hs dm twosigdown onesigdown exp onesigup twosigup" > limits_hsZp.txt


for k in "${samples_2hdm[@]}"; do
    mediatordm=${k#'hsZp-'} #500-1000
    branchingratio='1.0'
    #mediator=${mediatordm%-*} #500
    #dm=`echo ${mediatordm#${mediator}-}` #1500
    mediator=`(echo $mediatordm | awk -F '_' '{print$1}')`
    medhs=`(echo $mediatordm | awk -F '_' '{print$2}')`
    dm=`(echo $mediatordm | awk -F '_' '{print$3}')`


    cp combine_mass0.txt combined.txt
    sed -i 's/XX-SIGNAL-XX/'${k}'/g' combined.txt
    
    #Computing limits
    combine -M Asymptotic -t -1 combined.txt --rAbsAcc 0 --rMax 30  | tee limits_tmp.txt
    #Parsing results into textfile
    twosigdown=`cat limits_tmp.txt | grep 'Expected  2.5%: r <' | awk '{print $5}'`
    onesigdown=`cat limits_tmp.txt | grep 'Expected 16.0%: r <' | awk '{print $5}'`
    exp=`cat limits_tmp.txt | grep 'Expected 50.0%: r <' | awk '{print $5}'`
    onesigup=`cat limits_tmp.txt | grep 'Expected 84.0%: r <' | awk '{print $5}'`
    twosigup=`cat limits_tmp.txt | grep 'Expected 97.5%: r <' | awk '{print $5}'`

    rm limits_tmp.txt

    #Applying branching ratio
    onesigdown=`echo "scale=7 ; $onesigdown / $branchingratio" | bc`
    twosigdown=`echo "scale=7 ; $twosigdown / $branchingratio" | bc`
    exp=`echo "scale=7 ; $exp / $branchingratio" | bc`
    onesigup=`echo "scale=7 ; $onesigup / $branchingratio" | bc`
    twosigup=`echo "scale=7 ; $twosigup / $branchingratio" | bc`

    echo "${mediator} ${medhs} ${dm} ${twosigdown} ${onesigdown} ${exp} ${onesigup} ${twosigup}" >> limits_hsZp.txt

done
