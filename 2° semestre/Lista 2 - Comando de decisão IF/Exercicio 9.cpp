#include<stdio.h>
int main(){
	int ano;
	
	printf("\nQual ano? \nR: ");
	scanf("%d", &ano);
	
	if((ano % 4 == 0) && (ano % 100 != 0) || (ano % 400 == 0)){
		printf("\nO ano eh bissexto");
	}
	else{
		printf("\nO ano nao eh bissexto.");
	}
	
	return 0;
}