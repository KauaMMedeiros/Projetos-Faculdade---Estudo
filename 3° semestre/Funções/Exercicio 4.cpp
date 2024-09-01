#include<stdio.h>

float consumo(float dist, float vol){
	float consmed = dist / vol;
	return consmed;
}

int main(){
	float km, lit;
	
	printf("\nDigite a distancia: ");
	scanf("%f", &km);
	printf("\nDigite o litros: ");
	scanf("%f", &lit);
	
	float cm = consumo(km, lit);
	printf("\nConsumo medio: %.2f", cm);
	
	return 0;
}