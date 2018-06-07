#!/bin/bash
touch message.txt   #Creat file
mv message.txt Documents   #move it into Documents
ls -l Documents   #view the Documents
cd Documents   #
sudo cp message.txt /home   #copy to the /home
unlink message.txt   #delete message.txt
cd /home
sudo unlink message.txt   #delete message.txt from /home
#--------------
#sudo chmod -R 777 /home   --CHENGE AUTHORTY
#--------------
#sudo mkdir workbench   #2.1
cd workbench
touch readme.txt    #2.2
sh -c 'echo "1\n2\n3\n" > readme.txt'  #2.3
cat readme.txt   #2.4
touch list.txt
ls -Fl ~ > list.txt   #2.5
wc -m list.txt   #2.6
