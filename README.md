# Exercise
用于提交作业或者实验
# 1.1 Create a file called message.txt in your home directory and move it into another directory.
touch   message.txt
mkdir New_dir
mv message.txt New_dir
# 1.2 Copy the message.txt you just moved into your home directory.
cp  ./New_dir/message.txt MasaG.txt
# 1.3Delete both copies of message.txt. Try to do this without using rm.
find . -name message.txt -delete
# Exercise 2
# 2.1Create a new directory called workbench in your home directory.
mikdir home/workbench
# 2.2Without changing directories create a file called readme.txt inside of workbench.
touch workbench/readme.txt
esc + :wq
# 2.3Append the numbers 1, 2, and 3 to readme.txt so that each number appears on it’s own line.
echo -e "1\n2\n3" > home/workbench/readme.txt
# 2.4 Print readme.txt to the command line.
cat home/workbench/readme.txt
# 2.5Use output redirection to create a new file in the workbench directory called list.txt which lists the files and folders in your home directory.
ls >/home/workbench/list.txt
# 2.6 Find out how many characters are in list.txt without opening the file or printing it to the command line.
wc -m home/Workbench/list.txt
# Exercise 3
# 3.1 Use man to look up the flag for human-readable output from ls.
man ls
# 3.2Get help with man by typing man man into the console. 
man man
# 3.3Wouldn’t it be nice if there was a calendar command? Use apropos to look for such a command, then use man to read about how that command works.
apropos calendar
# Exercise 4
# 4.1Before I organized the photos by year, what command would have listed all of the photos of type .png?
 find . -regex '.*\.png'
# 4.2What series of commands would you use in order to put my figures for a data science course and the pictures I took in the lab into their own folders
find . -name "*hiking*.png"
# 4.3Supposed that we have a file including all pngs and txts, we are going to move them seperately.
