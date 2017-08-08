#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#define NUMERO_LINHAS 58333344
#define NUMERO_NODOS 23947347

typedef struct Linha {
	 int origem;		
	 int destino;		
	 int peso;	
}Linha;
 
int main()
{
	printf("Aqui\n");
   FILE *fp;
   Linha linha[NUMERO_LINHAS]; // Deve ter o tamanho do número de linhas do arquivo
   fp = fopen("USA-road-d.USA.gr","r"); // read mode
   char buf[256];
   char *token;
   int contador = 0;
   if( fp == NULL )
   {
      perror("Error while opening the file.\n");
      exit(EXIT_FAILURE);
   }	

	while (fgets(buf,sizeof(buf), fp)!=NULL){

		token = strtok(buf," ");	// Letra "a" == Lixo

		token = strtok(NULL," ");	// Colocar na ED 
		linha[contador].origem = atoi(token);

		token = strtok(NULL," ");	// Colocar na ED 
		linha[contador].destino = atoi(token);

		token = strtok(NULL," ");	// Colocar na ED 
		linha[contador].peso = atoi(token);
				
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
	int arcos = 0;
	int i;
	int pos_atual = 0;
	for(contador = 1; contador <= NUMERO_NODOS; contador++){
		for(i = 0; i < NUMERO_LINHAS; i++){
			if(linha[i].origem == contador){
				arcos = arcos + 1;		
			}
		}
	fprintf(fpo,"%d %d\n",pos_atual,arcos);
	pos_atual = pos_atual + arcos;	
	arcos = 0;
	}
	fprintf(fpo,"\n");
	printf("Já contei\n");
	for(contador = 1; contador <= NUMERO_NODOS; contador++){
		for(i = 0; i < NUMERO_LINHAS; i++){
			if(linha[i].origem == contador){
				fprintf(fpo,"%d %d\n",linha[i].destino,linha[i].peso);
			}
		}
		
	}

	return 0;
}
