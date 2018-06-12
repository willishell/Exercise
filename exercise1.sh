#!/bin/bash
cd ~
touch message.txt
mkdir workbench
mv message.txt workbench/message.txt
cd workbench
cp message.txt ../message.txt
mv message.txt /tmp
cd ..
mv message.txt /tmp
