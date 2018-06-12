#!bin/bash
cd ~
mkdir workbench
cd workbench
touch readme.txt
echo "1" < readme.txt
echo "2" < readme.txt
echo "3" < readme.txt
cat readme.txt
cd ..
ls > workbench/list.txt
cd workbench
wc -c list.txt

