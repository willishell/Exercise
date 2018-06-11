#!/bin/bash

mkdir workbench
touch workbench/readme.txt
echo -e "1\n2\n3">>workbench/readme.txt
cat workbench/readme.txt
touch workbench/list.txt
path=/Users/macbook/
find $path -name *.md>>workbench/list.txt
wc -m workbench/list.txt
