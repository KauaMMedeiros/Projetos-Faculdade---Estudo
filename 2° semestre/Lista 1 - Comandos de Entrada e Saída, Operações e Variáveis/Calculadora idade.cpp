#include<stdio.h>
int main(){
	int ano_nasc, ano_atual, idade;
	printf("\nAno atual: ");
	scanf("%d", &ano_atual);
	printf("\nAno de nascimento: ");
	scanf("%d", &ano_nasc);
	idade = ano_atual - ano_nasc;
	printf("Sua idade: %d", idade);
	
	return 0;
}