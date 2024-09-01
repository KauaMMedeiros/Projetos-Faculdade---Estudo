#include<stdlib.h>
#include<stdio.h>

typedef struct aluno{
	char nome[30];
	int idade;
	float nota;
}aluno;

aluno cadastro();

int main(){
	aluno alu[10];
	int cont=0;
	char op;
	
	do{
		printf("\nAluno %i", cont+1);
		
		if(cont<10){
			alu[cont] = cadastro();
			cont++;
		}
		
		else
			printf("\nCadastro lotado.");	
			
			printf("\nDeseja continuar?\nS - Sim\nN - Não\n:");
			scanf("%c", &op);
			fflush(stdin);
	}while(op!='n' && op!='N');
	
	system("cls");
	for(int i=0;i<cont;i++)
		printf("\nAluno %s \nIdade: %d \nNota: %.1f \n", i+1, alu[i], );
		
		system("pause");
}//main

aluno cadastro(){
	aluno aux;
	printf("\nNome: ");
	gets(aux.nome);
	fflush(stdin);
	
	printf("\nIdade: ");
	scanf("%d", &aux.idade);
	fflush(stdin);
	
	printf("\nNota: ");
	scanf("%f", &aux.nota);
	fflush(stdin);
	
	return aux;
	}//cadastro