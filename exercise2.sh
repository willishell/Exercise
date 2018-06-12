#!/bin/bash
cd ~
mkdir workbench
touch workbench/readme.txt
echo 1 >> workbench/readme.txt
echo 2 >> workbench/readme.txt
echo 3 >> workbench/readme.txt
cat workbench/readme.txt
ls > /workbench/list.txt
wc -m /workbench/list.txt
