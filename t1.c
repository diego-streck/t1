#include<stdio.h>
#include<stdlib.h>

int main(int argc, char *argv[]) {
	
	char nome[40];
	int fim;
	
	FILE* fp;
	fp=fopen("nomes.html","w+");
	
		if(fp==NULL){
		
		printf("ERROR, n foi possivel criar arquivo/n/n");
		
		}
	
			do{
				printf("Nome: ");
				gets(nome);
				fprintf(fp,"<nome> %s </nome>/n",nome);
				printf("Encerrar  cadastro? caso sim, digite 1 ");
				scanf("%d",&fim);
				fflush(stdin);
				
			}while(fim!=1);
			
			fclose(fp);
				return 0;
}

