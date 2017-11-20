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

	TIME=100	#Amostra a cada 100ms
	AMOS=$((TOTAL_TIME/TIME))
	echo "Amostras: $AMOS"
	
i=1
while [ "$i" -le $AMOS ]
do
	#mkdir ./results/$ITER
#	./script_energia.sh >> ./results/$ITER/$I.txt
	./script_energia.sh >> ./results/$ITER/log.txt

	sleep 0.1	# Delay
	echo "Energy !"
	i=$(( i+1 ))
done
