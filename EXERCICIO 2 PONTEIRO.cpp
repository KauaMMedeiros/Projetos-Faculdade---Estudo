#include<stdio.h>

int main(){
	int n1, n2;
	
	printf("\nDigite um numero: ");
	scanf("%d", &n1);
	printf("\nDigite um numero: ");
	scanf("%d", &n2);
	
	printf("\nEndereco de %d: %p", n1, &n1);
	printf("\nEndereco de %d: %p", n2, &n2);
	
	if(&n1 > &n2)
		printf("\n%d tem maior endereco", n1);
	else
		printf("\n%d tem maior endereco", n2);
	
	return 0;
}