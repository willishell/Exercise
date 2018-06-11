# Exercise
用于提交作业或者实验
 Exercise 1
+# 1.1 
+root@DESKTOP-8HTTTIG:~# touch   MasaG.txt
+root@DESKTOP-8HTTTIG:~# mkdir New_dir
+root@DESKTOP-8HTTTIG:~# mv MasaG.txt New_dir
+# 1.2
+root@DESKTOP-8HTTTIG:~# cp  ./New_dir/MasaG.txt MasaG.txt
+# 1.3
+ find . -name MasaG.txt -delete
+# Exercise 2
+# 2.1
+root@DESKTOP-8HTTTIG:~# mikdir Workbench
+# 2.2
+root@DESKTOP-8HTTTIG:~# touch Workbench/Read.txt
+# 2.3
+root@ubuntu:/home# vim Workbench/Read.txt
+# 输入任意英文进行编辑 结束esc ：wq退出
+# 2.4
+root@ubuntu:/home# cat Workbench/Read.txt
+# 2.5
+root@DESKTOP-8HTTTIG:~# ls >>Workbench/List.txt
+# 2.6
+root@DESKTOP-8HTTTIG:~# wc -m Workbench/List.txt
+# Exercise 3
+# 3.1
+root@DESKTOP-8HTTTIG:~# man ls
+# 3.2
+root@DESKTOP-8HTTTIG:~# man man
+# 3.3
+root@DESKTOP-8HTTTIG:~# apropos calendar
+root@DESKTOP-8HTTTIG:~# man calendar
+# Exercise 4
+# 4.1
+root@DESKTOP-8HTTTIG:~# find . -regex '.*\.png'
+# 4.2
+root@DESKTOP-8HTTTIG:~# find . -name "*hiking*.png"
+# 4.3
+root@DESKTOP-8HTTTIG:~# find - name "*.txt" -exec mv {} New_dir
