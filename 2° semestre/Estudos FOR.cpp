#include<stdio.h>
int main(){
	int num, soma = 0;
	
	for(int i = 0; i < 5; i++){
		printf("\nDigite um numero: ");
	    scanf("%d", &num);
	    
	    soma = soma + num;
	}
	
	printf("\nA soma eh %d", soma);
	
	return 0;
}