#include<stdio.h>
int main(){
	int nmr1, nmr2, media;
	printf("\nDigite o primeiro numero: ");
	scanf("%d", &nmr1);
	printf("\nDigite o segundo numero: ");
	scanf("%d", &nmr2);
	media = nmr1 + nmr2;
	
	printf("A media dos numeros eh: %d", media/2);
	
	return 0;
}