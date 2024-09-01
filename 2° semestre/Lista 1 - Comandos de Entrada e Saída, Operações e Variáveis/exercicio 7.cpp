#include<stdio.h>
int main(){
	int F, C, f, por5;
	printf("\nConversor de Fahrenheit para Celcius!");
	printf("\nDigite o valor em Fahrenheit: ");
	scanf("%d", &F);
	f = F - 32;
	C = f / 1.8;
	printf("\nO valor em Celsius eh: %d", C);
	
	return 0;
}