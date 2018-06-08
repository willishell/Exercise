# Exercise
用于提交作业或者实验
# Exercises 1
#!/bin/sh
cd ~
touch message.txt
mkdir test
mv message.txt ./test
cp ./test/message.txt .
mv message.txt ~/.local/share/Trash
mv ./test/message.txt ~/.local/share/Trash

# Exercises 2
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

# Exercises 3 
#!/bin/sh
man ls
man man
apropos calendar
man cal

# Exercises 4
#!/bin/sh
ls *.png
rm -i *.png
mv 
