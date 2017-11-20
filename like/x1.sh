#!/bin/sh
mkdir results
for I in 1 2 3 4 5 6 7 8 9 10
do
	mkdir ./results/$I
#	./a &
	/home/carol/chai/CUDA-D/BS/bs &
	./energy.sh $I 2700 & #chama script que mede energia, esse script que vai gerar o log
	wait
done
