#include<stdio.h>
int main(){
	float sal;
	
	printf("\nDigite seu salario: ");
	scanf("%f", &sal);
	
	if(sal <= 1000){
		printf("\nO salario será reajustado em 5%%");
		printf("\nNovo salario: %.2f", sal + (sal * 0.05));
	}
	if(sal > 1000){
		printf("\nO salario sera reajustado em 7%%");
		printf("\nNovo salario: %.2f", sal + (sal * 0.07));
	}
	
	
	return 0;
}