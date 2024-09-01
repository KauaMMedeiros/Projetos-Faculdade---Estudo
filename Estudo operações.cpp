#include<stdio.h>
#include<math.h>

int main(){
	int num1, num2, soma, sub, mult, div, ele, mod;
	
	printf("\nDigite um NUMERO: ");
	scanf("%d", &num1);
	printf("\nDigite outro NUMERO: ");
	scanf("%d", &num2);
	
	//soma
	soma = num1 + num2;
	printf("\nSoma = %d", soma);
	
	//subtração
	sub = num1 - num2;
	printf("\nSubtracao = %d", sub);
	
	//multiplicação
	mult = num1 * num2;
	printf("\nMultiplicacao = %d", mult);
	
	//divisão
	div = num1 / num2;
	printf("\nDivisao = %d", div);
	
	//elevado
	ele = pow(num1, 2);
	printf("\nElevado a 2 = %d", ele);
	
	//módulo
	if(num1 % 2 ==0)
		printf("\n%d e par", num1);
	else
		printf("\n%d e impar", num1);
	
	return 0;
}