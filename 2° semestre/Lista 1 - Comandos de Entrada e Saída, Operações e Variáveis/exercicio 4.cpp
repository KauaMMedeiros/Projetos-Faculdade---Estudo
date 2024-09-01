#include<stdio.h>
int main(){
	int ano_nasc, ano_atual, idade, dias;
	printf("\nCalculadora de dias de vida!");
	printf("\nDigite o ano atual: ");
	scanf("%d", &ano_atual);
	printf("\nDigite o ano de nascimento: ");
	scanf("%d", &ano_nasc);
	idade = ano_atual - ano_nasc;
	printf("Sua idade em anos eh %d, sua idade em dias eh %d", idade, dias = idade * 365);
	
	return 0;
}