１
cd /root
touch massage.txt
mv Mmasage.txt /文档
cd /文档
cp massage.txt /root
find /root -name "massage.txt " |xargs rm {} 

djl
２
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


３
man ls
man man
apropos date
man date


４
find . -name "*.png" 
find . -name "hiking.*" | xargs rm -rf