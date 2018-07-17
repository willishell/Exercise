exercise1:
1、cd home
   touch message.txt
   su
   密码
   ls -li /home/wjl/example/message.txt
   ls -li /home/whl/moveto/
   cd example
   mv message.txt /home/wjl/moveto/
2、cd ..
   cd moveto
   cp -i message.txt /home/
3、rm -i message.txt
   y
   cd ..
   cd ..
   rm -i message.txt
   y

exercise2:
1、mkdir workbench
2、touch workbench/readme.txt
3、vi readme.txt
   1
   2
   3Esc :wq
4、cat readme.txt
5、find /home -name *.txt > /home/workbench/list.txt
6、wc -m home/Workbenchst.txt

exercise3：
1、man ls
2、man man
3、apropos caldendar
   man cal
   man calendar
   man ncal

exercise4:
1、eog *.png
2、find . -name "*hiking*.png"
3、cd /home/wjl/moveto
   sudo mv index.png /home/wjl/moveto
