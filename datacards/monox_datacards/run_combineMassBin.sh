#!/bin/bash

for massbin in mass0 mass1 mass2 mass3
do
comx=`(python massbin_combine.py $massbin)`
echo $comx
done
echo "Copy the output and execute in terminal, sorry, IO is not working"