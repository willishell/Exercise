#!/bin/bash

home_path=/Users/macbook/
shell_path=/Users/macbook/desktop/shell_script/workbench/
touch message.txt
mv message.txt $shell_path
cp /Users/macbook/desktop/shell_script/workbench/message.txt $home_path
find $home_path -name "message.txt" -delete
