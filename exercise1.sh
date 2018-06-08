#!/bin/sh
cd ~
touch message.txt
mkdir test
mv message.txt ./test
cp ./test/message.txt .
mv message.txt ~/.local/share/Trash
mv ./test/message.txt ~/.local/share/Trash

