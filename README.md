# Exercise 1
用于提交作业或者实验
1.1
touch message.txt
mkdir hom
mv message.txt hom
1.2
cp ./hom/message.txt message.txt
1.3
find . -name message.txt -delete
# Exercise 2
2.1
mkdir workbench
2.2
touch workbench/readme.txt
2.3
echo -e "1 \n2 \n3" >workbench/readme.txt
2.4
cat -n workbench/readme.txt
2.5
touch workbench/list.txt
ls -al > workbench/list.txt
2.6
wc -m workbench/list.txt
# Exercise 3
3.1
man ls
3.2
man man
3.3
apropos calendar
man calendar
# Exercise 4
4.1
find . -regex "*.png"
4.2
find . -name "*hiking*.png" -delete
4.3
mv *.txt data
mv *.png photo
