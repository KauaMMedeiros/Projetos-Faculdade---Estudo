#include<stdio.h>
int main(){
	int nmr, dbr;
	printf("\nDigite um numero: ");
	scanf("%d", &nmr);
	printf("O dobro do número %d eh: %d", nmr, dbr = nmr * 2);
	
	return 0;
}