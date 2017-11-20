#!/usr/bin/env python3.4
def main():	
	for folder in range(1,11):
		with open( "./%s/log.txt" %folder,"r" ) as file_d:
			with open( "./%s/Energy.txt" %folder,"w" ) as file_best:
				column = []
				tempo_total = 0
				amostras = 0
				for line in file_d:
					line = line.strip()			
					if line.find( "[POWER] module power input:" )!= -1:
						amostras = amostras + 1
						time=float(line[27:35])
	#					time=line[17:]
	#					print(time)
						tempo_total= tempo_total + time 
						column.append(time)
						#column.sort()					
	#			print(column)
				media = tempo_total/amostras
				file_best.write(str(media))
				file_best.write("\n")	
				file_best.write(str(column))	
main()
