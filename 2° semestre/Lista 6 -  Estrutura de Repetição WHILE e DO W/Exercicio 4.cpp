#include<stdio.h>
int main(){
	int n = 0, media, soma = 0, x, maior = 0;
	
	printf("\nDigite um numero: ");
	scanf("%d", &n);
	do{
		printf("\nDigite um numero: ");
		scanf("%d", &n);
		if(n>maior);
		maior = n;
		
		soma = soma + n;
		
		printf("\nDeseja continuar?\n\n1 - sim\n2 - nao\nR: ");
		scanf("%d", &x);
	}while(x==1);
	
	media = soma/x;
	
	printf("\nMaior numero: %d", maior);
		
	printf("\nMedia: %d", media);
	
	return 0;
}