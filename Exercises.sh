#! /bin/bash
#练习1:
touch message.txt
mkdir tmp
mv message* /tmp
cp -i message* /home
find / -name "message.txt" | xargs rm -rf

#练习2:
cd /home
mkdir workbench
touch workbench/readme.txt
echo -e "1\n2\n3" > workbench/readme.txt
cat workbench/readme.txt
touch workbench/list.txt
ls -al > workbench/list.txt
wc -m workbench/list.txt

#练习3:
man ls
man man
apropos calendar
cal

#练习4:
find / -name "*.png"
find / -name"*hiking*" -delete
mv *.txt data
mv *.png photo

