#!/bin/sh

if [ "$1" != "" ] && [ "$2" != "" ] ; then
	ITER=$1
	TOTAL_TIME=$2
	echo "Parameter: $ITER"	
	echo "Total Time: $TOTAL_TIME"
else
	echo "Error missing parameter"
	exit 1	 
fi

	TIME=$((TOTAL_TIME/10))
	echo "$TIME"
	
for I in 1 2 3 4 5 6 7 8 9 10 
do
	#mkdir ./results/$ITER
#	./script_energia.sh >> ./results/$ITER/$I.txt
	./script_energia.sh >> ./results/$ITER/log.txt

	sleep $TIME	# Delay
	echo "Energy !"
done
