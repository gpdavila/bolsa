#include <stdio.h>
#include <stdlib.h>
#include <string.h>


//#define NUMERO_LINHAS 58333344
//#define NUMERO_NODOS 23947347

typedef struct Linha {
	 long origem;		
	 long destino;		
	 long peso;	
}Linha;
 
int main()
{
	printf("Aqui\n");
   FILE *fp;
   Linha linha[58333344]; // Deve ter o tamanho do número de linhas do arquivo
   fp = fopen("USA-road-d.USA.gr","r"); // read mode
   char buf[256];
   char *token;
   long contador = 0;
   if( fp == NULL )
   {
      perror("Error while opening the file.\n");
      exit(EXIT_FAILURE);
   }	

	while (fgets(buf,sizeof(buf), fp)!=NULL){

		token = strtok(buf," ");	// Letra "a" == Lixo

		token = strtok(NULL," ");	// Colocar na ED 
		linha[contador].origem = atol(token);

		token = strtok(NULL," ");	// Colocar na ED 
		linha[contador].destino = atol(token);

		token = strtok(NULL," ");	// Colocar na ED 
		linha[contador].peso = atol(token);
				
	contador = contador + 1;
	}
	// ED com o arquivo em memoria
	fclose(fp);  

	printf("Já coloquei na ED\n");
   FILE *fpo = fopen("saida_grafo", "w");
    if(!fpo) {
        printf("Error Creating output file\n");
        exit(EXIT_FAILURE);
    }

	contador = 0;
	long arcos = 0;
	long i;
	long pos_atual = 0;
	for(contador = 1; contador <= 23947347; contador++){
		for(i = 0; i < 58333344; i++){
			if(linha[i].origem == contador){
				arcos = arcos + 1;		
			}
		}
	fprintf(fpo,"%ld %ld\n",pos_atual,arcos);
	pos_atual = pos_atual + arcos;	
	arcos = 0;
	}
	fprintf(fpo,"\n");
	printf("Já contei\n");
	for(contador = 1; contador <= 23947347; contador++){
		for(i = 0; i < 58333344; i++){
			if(linha[i].origem == contador){
				fprintf(fpo,"%ld %ld\n",linha[i].destino,linha[i].peso);
			}
		}
		
	}

	return 0;
}
