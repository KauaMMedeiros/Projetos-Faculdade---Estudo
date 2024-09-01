#include<stdio.h>

float soma(float n1, float n2){
	return n1 + n2;
}

int main(){
	float num1, num2;
	
	printf("O programa irá realizar a soma de dois números.\n");
	printf("\nDigite um número: ");
	scanf("%f", &num1);
	printf("\nDigite outro número: ");
	scanf("%f", &num2);
	
	float somaa = soma(num1, num2);
	
	printf("\n\nA soma dos dois numeros: %.1f", somaa);
	
	return 0;
}