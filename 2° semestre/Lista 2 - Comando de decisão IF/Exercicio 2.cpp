#include<stdio.h>

int main(){
	int x;
	
	printf("\nDigite um numero: ");
	scanf("%d", &x);
	
	if(x >= 0 && x <= 9){
	printf("\nO numero esta dentro da faixa.");
	}
	else{
		printf("\nO numero nao esta dentro da faixa.");
	}
	
	return 0;
}