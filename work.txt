## Exercises 1
		1.	Create a file called message.txt in your home directory and move it into another directory.
		  `  $touch message.txt`
		2.	Copy the message.txt you just moved into your home directory.
		`$ mv message.txt aatext`
		`//aatext是在桌面的一个文件夹`
		`$cd aatext`
		`$cd message.txt ~/桌面`
		3.Delete both copies of message.txt. Try to do this without using rm.
		`$rm message.txt`
		`//其他方法没有成功`
## Exercises 2
                1.	Create a new directory called workbench in your home directory.
		`$mkdir workbench`
                2.	Without changing directories create a file called readme.txt inside of workbench.
		`$touch readme.txt workbench`
		`$touch workbench/readme.txt`
		`//不改变目录，就在touch后面加路径`
                3.Append the numbers 1, 2, and 3 to readme.txt so that each number appears on it’s own line.
	        `$cd workbench`
		`$ echo "1">readme.txt`
		`$ echo "2">>reademe.txt`
		`$ echo "3">>readme.txt`
		`//输入一次后将>改为>>（在已有内容上添加）。不然会覆盖。`
                4.	Print readme.txt to the command line.
		`$cat readme.txt`
                 5.Use output redirectionto create a new file in the workbench directory called list.txt which lists the files and folders in your home directory.
                `//list.txt里面列出me 目录下的所有文件和文件夹`
		`$cat >list.txt`
		`$echo ls~/桌面>list.txt`

                 6.Find out how many characters are in list.txt without opening the file or printing it to the command line.
		
               `$ wc -c list.txt`
		`$ wc -m list.txt`
		`$ wc -w list.txt`
		`//使用word count命令`

## Exercises3
             1.	Use man to look up the flag for human-readable output from ls.
             `$man ls`
             2.	Get help with man by typing man man into the console.
             `$man man`
             3.	Wouldn’t it be nice if there was a calendar command? Use apropos to look for such a command, then use man to read about how that command works.
            ` $qpropos calendar`
           ` //出现:cal(1),calendar(1),ncal(1),orage(1)`
## Exercises4
             1.	Before I organized the photos by year, what command would have listed all of the photos of type .png?
             `$find . -name "*.png"`
            ` //会显示出全部png文件所在目录`
             2.	Before I organized the photos by year, what command would have deleted all of my hiking photos?
             `$find . -name "hiking"`
             3.	What series of commands would you use in order to put my figures for a data science course and the pictures I took in the lab into their own folders?
            ` $mv aaa.png data`
            `//该文件会被替换成名为data的文件`
