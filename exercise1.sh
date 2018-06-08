[yeung@ZJU ~]$ cd /home
[yeung@ZJU home]$ sudo mkdir workbench
[sudo] yeung 的密码：
[yeung@ZJU home]$ sudo touch /home/workbench/readme.txt
[yeung@ZJU workbench]$ sudo echo "1
> 2
> 3">>readme.txt
[yeung@ZJU workbench]$ cat readme.txt
1
2
3
[yeung@ZJU ~]$ sudo ls /home>list.txt
[yeung@ZJU ~]$ sudo wc -m list.txt
27 list.txt
[yeung@ZJU ~]$ 

