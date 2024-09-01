#include<stdio.h>
int main(){
	int num1, num2, num3;
	
	printf("\nDigite um numero: ");
	scanf("%d", &num1);
	printf("\nDigite outro numero: ");
	scanf("%d", &num2);
	printf("\nDigite mais um numero: ");
	scanf("%d", &num3);
	
	if((num1 > num2) && (num1 > num3)){
		printf("\nO primeiro numero eh o maior.");
	}
	else if((num2 > num1) && (num2 > num3)){
		printf("\nO segundo numero eh o maior.");
	}
	else{
		printf("\nO terceiro numero eh o maior.");
	}
}