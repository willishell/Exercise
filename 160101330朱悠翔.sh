#!/bin/bash
# Exercise 1
cd ~
mkdir 'workbench'
touch 'workbench/readme.txt'
cat << EOF >> 'workbench/readme.txt'
1
2
3
EOF
cat 'workbench/readme.txt'
ls >> 'workbench/list.txt'
wc -c 'workbench/list.txt'

#Exercise 2
cd ~
touch 'message.txt'
mv 'message.txt' 'workbench/message.txt'
cp 'workbench/message.txt' 'message.txt'
find 'workbench/message.txt' -delete
find 'message.txt' -delete

#Exercise 3
man [flag] ls
man man
man cal

#Exercise 4
ls -lt *.png
rm -f *hiking* 
mv *.fig dat
mv *.jpg pic
