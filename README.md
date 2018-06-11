# Exercise
用于提交作业或者实验
实验一
1.1
touch   MasaG.txt
mkdir New_dir
mv MasaG.txt New_dir
1.2
cp  ./New_dir/MasaG.txt MasaG.txt
1.3
find . -name MasaG.txt -delete
实验二
2.1
mikdir home/workbench
2.2
touch workbench/readme.txt
esc + :wq
2.3
echo -e "1\n2\n3" > /home/workbench/readme.txt
2.4
cat -n readme.txt
touch workbench/list.txt
2.5
ls /home > /home/workbench/list.txt
2.6
wc -m /home/workbench/list.txt
实验三
3.1
man ls
3.2
man man
3.3
apropos calendar
man calendar
实验四
4.1
find  -name ".*\.png"
4.2
find -name "*hiking*.png" -delete
4.3
find - name "*.txt" -exec mv {} data
find - name "*.png" -exec mv {} photo
