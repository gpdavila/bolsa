#!/usr/bin/env python3.4
def main():	
	with open( "cpu_gpu.txt","r" ) as file_d:
		with open( "kernel_time_exp.txt","w" ) as file_best:
			column = []
			for line in file_d:
				line = line.strip()			
				if line.find( "Kernel Time (ms):" )!= -1:#  Kernel Time
					time=float(line[17:])
#					time=line[17:]
#					print(time)
					column.append(time)
					#column.sort()					
#			print(column)
			file_best.write(str(column))	
main()
