#include<stdio.h>
int main(){
	int nmr, dbr;
	printf("\nDigite um número: ");
	scanf("%d", &nmr);
	printf("O dobro do número %d é: %d", nmr, dbr = nmr * 2);
	
	return 0;
}