#!/bin/sh
mkdir results
for I in 1 2 3 4
do
	mkdir ./results/$I
	./a &
	./energy.sh $I 10& #chama script que mede energia, esse script que vai gerar o log
	wait
done
