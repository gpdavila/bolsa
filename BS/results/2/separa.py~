#!/usr/bin/env python3.4
def main():
	with open( "1.txt","r" ) as file_d:
		with open( "cpu.txt","w" )as file_cpu:
			with open( "gpu.txt","w" )as file_gpu:
				with open( "cpu_gpu.txt","w" )as file_cpu_gpu:
					cpu = 0
					gpu	= 0
					cpu_gpu = 0
					for line in file_d:
						line = line.strip()
						if line.find( "-a 0.00" )!= -1:	#  GPU
							gpu = gpu + 1
							i=0
							file_gpu.write(line)
							file_gpu.write("\n")
							for i in range(7):
								copy_line = file_d.readline() 
								file_gpu.write(copy_line)
								i = i + 1
						if line.find( "-a 1.00" )!= -1: #  CPU
							cpu = cpu + 1
							i=0
							file_cpu.write(line)
							file_cpu.write("\n")
							for i in range(7):
								copy_line = file_d.readline() 
								file_cpu.write(copy_line)
								i = i + 1
						if line.find( "-a 0.10" )!= -1: #  CPU+GPU
							cpu_gpu = cpu_gpu + 1
							i=0
							file_cpu_gpu.write(line)
							file_cpu_gpu.write("\n")
							for i in range(7):
								copy_line = file_d.readline() 
								file_cpu_gpu.write(copy_line)
								i = i + 1
						if line.find( "-a 0.20" )!= -1: #  CPU+GPU
							cpu_gpu = cpu_gpu + 1
							i=0
							file_cpu_gpu.write(line)
							file_cpu_gpu.write("\n")
							for i in range(7):
								copy_line = file_d.readline() 
								file_cpu_gpu.write(copy_line)
								i = i + 1
						if line.find( "-a 0.30" )!= -1: #  CPU+GPU
							cpu_gpu = cpu_gpu + 1
							i=0
							file_cpu_gpu.write(line)
							file_cpu_gpu.write("\n")
							for i in range(7):
								copy_line = file_d.readline() 
								file_cpu_gpu.write(copy_line)
								i = i + 1
						if line.find( "-a 0.40" )!= -1: #  CPU+GPU
							cpu_gpu = cpu_gpu + 1
							i=0
							file_cpu_gpu.write(line)
							file_cpu_gpu.write("\n")
							for i in range(7):
								copy_line = file_d.readline() 
								file_cpu_gpu.write(copy_line)
								i = i + 1
						if line.find( "-a 0.50" )!= -1: #  CPU+GPU
							cpu_gpu = cpu_gpu + 1
							i=0
							file_cpu_gpu.write(line)
							file_cpu_gpu.write("\n")
							for i in range(7):
								copy_line = file_d.readline() 
								file_cpu_gpu.write(copy_line)
								i = i + 1
						if line.find( "-a 0.60" )!= -1: #  CPU+GPU
							cpu_gpu = cpu_gpu + 1
							i=0
							file_cpu_gpu.write(line)
							file_cpu_gpu.write("\n")
							for i in range(7):
								copy_line = file_d.readline() 
								file_cpu_gpu.write(copy_line)
								i = i + 1
						if line.find( "-a 0.70" )!= -1: #  CPU+GPU
							cpu_gpu = cpu_gpu + 1
							i=0
							file_cpu_gpu.write(line)
							file_cpu_gpu.write("\n")
							for i in range(7):
								copy_line = file_d.readline() 
								file_cpu_gpu.write(copy_line)
								i = i + 1
						if line.find( "-a 0.80" )!= -1: #  CPU+GPU
							cpu_gpu = cpu_gpu + 1
							i=0
							file_cpu_gpu.write(line)
							file_cpu_gpu.write("\n")
							for i in range(7):
								copy_line = file_d.readline() 
								file_cpu_gpu.write(copy_line)
								i = i + 1
						if line.find( "-a 0.90" )!= -1: #  CPU+GPU
							cpu_gpu = cpu_gpu + 1
							i=0
							file_cpu_gpu.write(line)
							file_cpu_gpu.write("\n")
							for i in range(7):
								copy_line = file_d.readline() 
								file_cpu_gpu.write(copy_line)
								i = i + 1
					
				print( "CPU: ", cpu )		
				print( "GPU: ", gpu )	
				print( "CPU + GPU ", cpu_gpu)	

main()
