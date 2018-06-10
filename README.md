＃练习１
cd /root
touch massage.txt
mv Mmasage.txt /文档
cd /文档
cp massage.txt /root
find /root -name "massage.txt " |xargs rm {} 
#练习２
cd /root
mkdir /workbench
cd /workbench
touch readme.txt
echo '1'>>./readme.txt
echo '2'>>./readme.txt
echo '3'>>./readme.txt
cat readme.txt
touch list.txt
ls root/ >list.txt
wc -m list.txt
＃练习３
man ls
man man
apropos date
man date
#练习４
find . -name "*.png" 
find . -name "hiking.*" | xargs rm -rf
