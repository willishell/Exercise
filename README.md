# 1
# 1.Create a file called message.txt in your home directory and move it into another directory.
touch /home/message.txt
mv /home/message.txt distination

# 2.Copy the message.txt you just moved into your home directory.
cp message.txt /home/message.txt

# 3.Delete both copies of message.txt. Try to do this without using rm.
unlink message.txt && unlink /home/message.txt
# 2
# Create a new directory called workbench in your home directory.
mkdir /home/workbench

# Without changing directories create a file called readme.txt inside of workbench.
vim /home/workbench/readme.txt
esc + :wq

# Append the numbers 1, 2, and 3 to readme.txt so that each number appears on it’s own line.
echo -e "1\n2\n3" > /home/workbench/readme.txt

# Print readme.txt to the command line.
cat -n readme.txt

# Use output redirection to create a new file in the workbench directory called list.txt which lists the files and folders in your home directory.
touch workbench/list.txt
ls /home > /home/workbench/list.txt

# Find out how many characters are in list.txt without opening the file or printing it to the command line.
wc -m /home/workbench/list.txt

# 3
# Use man to look up the flag for human-readable output from ls.
man ls

# Get help with man by typing man man into the console. 
man man

# Wouldn’t it be nice if there was a calendar command? Use apropos to look for such a command, then use man to read about how that command works.
apropos calenda

# 4
# Before I organized the photos by year, what command would have listed all of the photos of type .png?
find . -name "*.png"

# Before I organized the photos by year, what command would have deleted all of my hiking photos?
find . -name "*hiking*"

# What series of commands would you use in order to put my figures for a data science course and the pictures I took in the lab into their own folders

# Supposed that we have a file including all pngs and txts, we are going to move them seperately.
mv *.txt data
mv *.jpg photo

