#include<stdio.h>

int soma(int num1, int num2){
	return num1 + num2;
}

int main(){
	int n1, n2;
	
	printf("\nInforme um numero: ");
	scanf("%d", &n1);
	printf("\nDigite outro numero: ");
	scanf("%d", &n2);
	
	int res = soma(n1, n2);
	printf("\nResultado = %d", res);
	
	return 0;
}