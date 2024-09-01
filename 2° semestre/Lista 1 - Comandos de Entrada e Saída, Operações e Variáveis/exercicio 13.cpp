#include<stdio.h>

int main(){
	float dias, desc, salario, sal, final;
	
	
	printf("\nQuantos dias de trabalho? \nR: ");
	scanf("%f", &dias);
	salario = dias * 35;
	sal = salario * 0.08;
	final = salario - sal;
	printf("\nSeu salario com desconto de 8% é de: %.2f", final);
	
	return 0;
}