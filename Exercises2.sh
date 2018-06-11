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

