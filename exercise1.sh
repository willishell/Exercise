#!/bin/bash
cd ~
touch message.txt
mkdir another
mv message.txt another/
cp another/message.txt .
mv message.txt /tmp
mv another/message.txt /tmp
rm -r another
