#!/bin/bash

find . -name "*.png"
find . -name "*hiking*" -delete

mkdir txts
mkdir pngs
mv *.txt txts
mv *.png pngs
