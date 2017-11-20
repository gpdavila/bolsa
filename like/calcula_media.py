#!/usr/bin/env python3.4
def main():	
	for folder in range(1,11):
		with open( "./%s/log.txt" %folder,"r" ) as file_d:
			with open( "./Energy.txt","a" ) as file_best:
				columnTotal = []
				columnCPU = []
				columnGPU = []

				tempo_total = 0
				tempo_cpu = 0
				tempo_gpu = 0
				amostras = 0
				for line in file_d:
					line = line.strip()			
					if line.find( "[POWER] module power input:" )!= -1: # Total
						amostras = amostras + 1
						time=float(line[27:35])
						tempo_total= tempo_total + time 
						columnTotal.append(time)
					if line.find( "[POWER] CPU power rail:" )!= -1:	# CPU
						cpu = float(line[23:30])
						#print(cpu)
						tempo_cpu= tempo_cpu + cpu
					if line.find( "[POWER] GPU power rail:" )!= -1: # GPU
						gpu = float(line[23:30])
						tempo_gpu= tempo_gpu + gpu
						#print(gpu)
				media_total = tempo_total/amostras
				media_cpu = tempo_cpu/amostras
				media_gpu = tempo_gpu/amostras

				file_best.write(str(media_total))
				file_best.write(";")
				file_best.write(str(media_cpu))
				file_best.write(";")
				file_best.write(str(media_gpu))
				file_best.write("\n")
				
				#file_best.write(str(columnTotal))	
main()
