#include<stdio.h>

float divisao(float x, float y);
void mostra_txt();

main(){
	float a, b, res;
	
	printf("\nDigite dois num: ");
	scanf("%f", &a);
	scanf("%f", &b);
	
	res=divisao(a, b);
	printf("\nResultado: %.1f", res);
	
	mostra_txt();
	
	return 0;
}
float divisao(float x, float y){
	float d;
	d=x/y;
	return d;
}
void mostra_txt(){
	printf("\nbroxada sinistra");
}