#include<stdio.h>

int main(){
	float hn, he, sal, salhn, salhe;
	
	printf("\nA empresa paga para os funcionários RS10,00 por hora normal trabalhada e RS15,00 para hora extra trabalhada! ");
	printf("\nVamos calcular quanto irá receber esse mês; ");
	
	printf("\nQuantas horas normais trabalhadas? \nR: ");
	scanf("%f", &hn);
	printf("\nQuantas horas extras trabalhadas? \nR: ");
	scanf("%f", &he);
	
	salhn = hn * 10;
	salhe = he * 15;
	sal = salhn + salhe;
	printf("\nValor por horas normais: RS%.2f", salhn);
	printf("\nValor por horas extras: RS%.2f", salhe);
	printf("\nSalário total a ser/recebido: RS%.2f", sal);
	
	return 0;
}