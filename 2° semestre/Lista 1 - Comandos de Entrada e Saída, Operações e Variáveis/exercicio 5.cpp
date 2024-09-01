#include<stdio.h>
int main(){
	int nmr1, nmr2, div, soma, resto;
	printf("\nDigite o primeiro numero: ");
	scanf("%d", &nmr1);
	printf("\nDigite o segundo numero: ");
	scanf("%d", &nmr2);
	soma = nmr1 + nmr2;
	div = soma/2;
	printf("\nA divisao dos numeros por 2 eh: %d.2", div);
	resto = soma - div;
	printf("\nO resto da divisao eh: %d.2", resto);
	
	return 0;
}