# Exercise
用于提交作业或者实验
# Exercise 1
1.1
touch WasaG.txt
mkdir new
mv  WasaG.txt new
1.2
cp ./new/WasaG.txt WasaG.txt
1.3
find . -name WasaG.txt -delete
# Exercise 2
2.1
mkdir Workbench
2.2
touch Workbench/Read.txt
2.3
echo -e "1 \n2 \n3" > Workbench/Read.text
2.4
cat -n Workbench/Read.txt
2.5
touch Workbench/List.txt
ls ~ >> Workbench/List.txt
2.6
wc -m Workbench/List.txt
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
find . -regex '.*\.png'
4.2
find . -name "*hiking*.png" -delete
4.3
mv *.txt data
mv *.png photo
