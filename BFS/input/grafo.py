#!/usr/bin/env python3.4

class Linha():
	def __init__(self,origem,destino,peso):
		self.origem = origem
		self.destino = destino
		self.peso = peso

	def __repr__(self):
		return '{} {} {}'.format(self.origem, self.destino, self.peso)
def l_sort(linha):
	return linha.origem

def count(iterable):
    return sum(1 for _ in iterable)

def main():
	with open( "USA-road-d.USA.gr","r" ) as file_d:
		lista = []
		for line in file_d:
			t = line.split()
			o = int(t[1])
			d = int(t[2])
			p = int(t[3])
			l = Linha(o,d,p)
			lista.append(l)	 
			lista_ordenada = sorted(lista, key=l_sort)
# Aqui temos uma lista ordenada 
	# 23947347 nodos o original
	with open( "grafo_certo.txt","w" ) as file_d:
		pos_atual = 0
		for nodo in range(23947347):
			arcos = sum(li.origem == nodo for li in lista_ordenada)
			file_d.write("%s %s\n" % (pos_atual, arcos))
			pos_atual = pos_atual + arcos 
		file_d.write("\n")

		for nodo in range(23947347):
			for item in lista_ordenada:
				if item.origem == nodo:
					file_d.write("%s %s\n" % (item.destino, item.peso))
				 
		
	#print(lista_ordenada)
main()
