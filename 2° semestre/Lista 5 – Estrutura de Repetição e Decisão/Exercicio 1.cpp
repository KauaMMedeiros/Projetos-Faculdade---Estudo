#include<stdio.h>
int main(){
	int i, num, soma;
	float media, nums;
	
	printf("\nDigite o numero de vezes que quer: ");
	scanf("%d", &num);
	
	for(i=1; i<=num; i++){
		printf("\nNumero: ");
		scanf("%f", &nums);
		soma = soma + nums;
	}
	printf("\nSoma: %.1f", soma);
		
	media = soma / num;
	
	printf("\nMedia: %.1f", media);
	
	return 0;
}