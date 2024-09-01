#include<stdio.h>

float consumo_medio(float dist, float combustivel);

main(){
	float cm, km, l;
	
	printf("\nDistancia: ");
	scanf("%f", &km);
	printf("\nLitros: ");
	scanf("%f", &l);
	
	cm=consumo_medio(km,l);
	printf("\nConsumo medio: %.1f", cm);
	
	return 0;
}
float consumo_medio(float dist, float combustivel){
	float cons;
	cons=dist/combustivel;
	
	return cons;
}