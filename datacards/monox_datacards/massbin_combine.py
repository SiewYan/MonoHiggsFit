#!/bin/python

import os
import argparse
parser = argparse.ArgumentParser()
parser.add_argument("massbin",type=str,help="Specify mass bin")
args = parser.parse_args()
#cwd = os.getcwd()

naming={
    #config files                            #CR/SR
    "monox_dielectron_control"             : ["zee"],
    "monox_dielectron_fail_control"        : ["zee_fail"],
    "monox_dimuon_control"                 : ["zmm"],
    "monox_dimuon_fail_control"            : ["zmm_fail"],
    "monox_signal"                         : ["sig"],
    "monox_signal_fail"                    : ["sig_fail"],
    "monox_singleelectrontop_control"      : ["ten"],
    "monox_singleelectrontop_fail_control" : ["ten_fail"],
    "monox_singleelectronw_control"        : ["wen"],
    "monox_singleelectronw_fail_control"   : ["wen_fail"],
    "monox_singlemuontop_control"          : ["tmn"],
    "monox_singlemuontop_fail_control"     : ["tmn_fail"],
    "monox_singlemuonw_control"            : ["wmn"],
    "monox_singlemuonw_fail_control"       : ["wmn_fail"],
}
command=["combineCards.py"]
for datacard in os.listdir("./"+args.massbin):
    if datacard.endswith(".txt"):
        if datacard == "monox_datacard.txt" or datacard == "combined_mass0.txt" or not datacard.startswith('monox'):
            continue
        #print datacard.split('.')[0]
        command.append(naming[datacard.split('.')[0]][0]+"=./"+args.massbin+"/"+datacard)
        
command.append("> combine_"+args.massbin+".txt")
print ' '.join(command)

