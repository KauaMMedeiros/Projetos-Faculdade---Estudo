#include<stdio.h>

int main(){
	char nome[30];
	printf("\nDigite seu nome: ");
	gets(nome);
	printf("\nBoa tarde, %s!", nome);
	
	return 0;
}