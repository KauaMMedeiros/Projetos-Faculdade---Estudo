#include<stdio.h>

int main(){
	float km, l, cm;
	
	printf("\nCalculadora de consumo médio de combustível do seu carro!");
	printf("\nDigite a distância percorrida(EM KM): ");
	scanf("%f", &km);
	printf("\nDigite quanto combustível foi gasto(EM LITROS): ");
	scanf("%f", &l);
	
	cm = km/l;
	printf("\nO consumo médio do carro foi de %.1f km/l", cm);
	
	return 0;
}