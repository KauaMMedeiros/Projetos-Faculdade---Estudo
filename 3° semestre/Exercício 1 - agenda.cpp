#include<stdio.h>
#include<stdlib.h>

typedef struct agenda{
	int reg;
	char nome[20];
	float nota;
}agenda;

agenda cadastro();

int main(){
	agenda ag[10];
	int i, cont=0;
	char op;
	
	do{
		if(cont<10){
			ag[cont] = cadastro();
		}else
			printf("\nCadastro lotado.");
		
		printf("\nDeseja continuar?\n\nS - Sim\nN - Não\nR: ");
		scanf("%c", &op);
		fflush(stdin);
	}	while(op=='s'||op=='S');
	
	for(i=0;i<cont;i++)
		printf("\nRegistro: %i \nNome: %c \n Nota: %.1f", ag[i].reg, ag[i].nome, ag[i].nota);
		
	system("pause");
}

agenda cadastro(){
	agenda aux;
	static int n=1;
	aux.reg=n;
	printf("\nRegistro: %i", aux.reg);
	
	printf("\nNome: ");
	gets(aux.nome);
	fflush(stdin);
	
	printf("\nNota: ");
	scanf("%f", &aux.nota);
	fflush(stdin);
	
	n++;
	
	return aux;
}//cadastro