#!bin/bash
echo hello
#ls
echo "what is your name"
read NAME
echo  "$NAME is awesome!!!"
 mkdir $NAME
cd $NAME
for i in 1 2 3 4 5
do
touch $NAME$i.cpp
done
