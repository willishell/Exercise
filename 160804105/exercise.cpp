一、
1:  
$ vim message.txt
2:
  修改home不可修改权限
  1.sudo vim /etc/auto_master
  2.注释掉  #/home
  3.sudo automount
  4.sudo mkdir /home/test
  5. sudo cp message.txt /home/test/
3:
sudo find /home -name "message.txt" -delete  
二、
1：
sudo mkdir /home/workbench
2：
sudo vim /home/workbench/readme.txt
3：
打开vim插入三行分别是1，2，3
4：
 cat -n readme.txt
显示
     1	1
     2	2
     3	3
5：
  sudo su 进入sh-3.2#
  sh-3.2# ls /home >> /home/workbench/list.txt
6：
  sh-3.2# wc -m /home/workbench/list.txt
三、
1：
  man ls
 2：
  sh-3.2# apropos calenda
  CalendarAgent(8)         - calendar data process
  Date::Calc(3pm)          - Gregorian calendar date calculations
  Date::Calendar(3pm)      - Calendar objects for different holiday schemes
  Date::Calendar::Profiles(3pm) - Some sample profiles for Date::Calendar and Date::Calendar::Year
  Date::Calendar::Year(3pm) - Implements embedded "year" objects for Date::Calendar
  cal(1), ncal(1)          - displays a calendar and the date of Easter
  calendar(1)              - reminder service
  iwidgets_calendar(n), iwidgets::calendar(n) - Create and manipulate a monthly calendar
  widget_calendar(n)       - widget::calendar Megawidget
四、
1：
  创建/Users/jijiaming/Desktop/test 文件夹，里面有若干.png .txt .docx 文件
  sh-3.2# find /Users/jijiaming/Desktop/test -name "*.png"
2：
  sh-3.2# find /Users/jijiaming/Desktop/test -name "*hiking*" –delete
3:
  sh-3.2# mkdir science
  sh-3.2# tar czvf data.tar.gz *.txt
  sh-3.2# tar cf pic.tar.gz *.png
  sh-3.2# tar xzvf pict.tar.gz -C science/
  sh-3.2# tar xzvf data.tar.gz -C science/
