#include<stdio.h>
int main(){
	int x;
	float num1, num2;
	
	printf("\n1 - Soma \n2 - subtracao \n3 - divisao \n4 - multiplicacao \n");
	scanf("%d", &x);
	if(x == 1){
		printf("\nDigite o primeiro numero: ");
		scanf("%f", &num1);
		printf("\nDigite o segundo numero: ");
		scanf("%f", &num2);
		
		printf("\nA soma eh igual a: %.2f", num1 + num2);
	}
	if(x == 2){
		printf("\nDigite o primeiro numero: ");
		scanf("%f", &num1);
		printf("\nDigite o segundo numero: ");
		scanf("%f", &num2);
		
		printf("\nA subtracao eh igual a: %.2f", num1 - num2);
	}
	if(x == 3){
		printf("\nDigite o primeiro numero: ");
		scanf("%f", &num1);
		printf("\nDigite o segundo numero: ");
		scanf("%f", &num2);
		
		printf("\nA divisao eh igual a: %.2f", num1 / num2);
	}
	if(x == 4){
		printf("\nDigite o primeiro numero: ");
		scanf("%f", &num1);
		printf("\nDigite o segundo numero: ");
		scanf("%f", &num2);
		
		printf("\nA multiplicacao eh igual a: %.2f", num1 * num2);
	}
	if(x >= 5){
		printf("\nA acao desejada nao existe!");
	}
	
	return 0;
}