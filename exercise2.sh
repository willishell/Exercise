#!/bin/sh
cd ~
mkdir workbench
touch ./workbench/readme.txt
cd workbench
echo "1
 2
 3" >>readme.txt
cat readme.txt
ls /home>list.txt
wc -m list.txt
