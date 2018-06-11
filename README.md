# 1
# 1.Create a file called message.txt in your home directory and move it into another directory.
touch /home/message.txt
mv /home/message.txt work

# 2.Copy the message.txt you just moved into your home directory.
cp work /home/message.txt

# 3.Delete both copies of message.txt. Try to do this without using rm.
unlink work && unlink /home/message.txt

# 2
# 1.Create a new directory called workbench in your home directory.
mkdir /home/workbench

# 2.Without changing directories create a file called readme.txt inside of workbench.
vim /home/workbench/readme.txt
esc + :wq

# 3.Append the numbers 1, 2, and 3 to readme.txt so that each number appears on it’s own line.
echo -e "1\n2\n3" > /home/workbench/readme.txt

# 4.Print readme.txt to the command line.
cat -n readme.txt

# 5.Use output redirection to create a new file in the workbench directory called list.txt which lists the files and folders in your home directory.
touch workbench/list.txt
ls /home > /home/workbench/list.txt

# 6.Find out how many characters are in list.txt without opening the file or printing it to the command line.
wc -m /home/workbench/list.txt

# 3
# 1.Use man to look up the flag for human-readable output from ls.
man ls

# 2.Get help with man by typing man man into the console. 
man man

# 3.Wouldn’t it be nice if there was a calendar command? Use apropos to look for such a command, then use man to read about how that command works.
apropos calendar
man calendar

# 4
# Before I organized the photos by year, what command would have listed all of the photos of type .png?
find -name "*.png"

# Before I organized the photos by year, what command would have deleted all of my hiking photos?
find -name "*hiking*" -delete

# What series of commands would you use in order to put my figures for a data science course and the pictures I took in the lab into their own folders
# 假设数据存为txt文件 照片存为png文件 我们分开移动他们
mv *.txt data
mv *.jpg photo


