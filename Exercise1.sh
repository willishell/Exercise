#!/bin/bash

# 1.Create a file called message.txt in your home directory and move it into another directory.

touch message.txt

mkdir ~/test

mv message.txt ~/test/


# 2.Copy the message.txt you just moved into your home directory.

cp message.txt ~/message.txt


# 3.Delete both copies of message.txt. Try to do this without using rm.
unlink ~/message.txt

unlink ~/test/message.txt
