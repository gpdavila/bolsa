#!/usr/bin/env python3.4
def main():	
	with open( "log.txt","r" ) as file_d:
		with open( "Mean_Energy.txt","w" ) as file_best:
			column = []
			tempo_total = 0
			amostras = 0
			for line in file_d:
				line = line.strip()			
				if line.find( "Kernel Time (ms):" )!= -1:#  Kernel Time
					amostras = amostras + 1
					time=float(line[17:])
#					time=line[17:]
#					print(time)
					tempo_total= tempo_total + time 
					column.append(time)
					column.sort()					
#			print(column)
			media = tempo_total/amostras
			file_best.write(str(media))	
#			file_best.write(str(column))	
main()
