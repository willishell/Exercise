# Exercise 1
1.1
touch Message.txt
mv Message.txt Documents
1.2
cp Documents/message.txt ~/message.txt
1.3
rm Documents/message.txt
rm ~/message.txt

# Exercise 2
2.1
mkdir workbench
2.2
touch workbench/Read.txt
2.3
echo -e "1\n2\n3\n">>workbench/Read.txt
2.4
cat workbench/Read.txt
2.5
ls workbench/list.txt
2.6
wc -m workbench/list.txt

# Exercise 3
3.1
man ls
3.2
man man
3.3
apropos cal
man cal

# Exercise 4
4.1
find -name  \*.png
4.2
rm *hiking.png
4.3
mkdir myfile
mv ./*.png myfile
mv ./*.data myfile
