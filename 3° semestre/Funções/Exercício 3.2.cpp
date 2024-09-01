#include<stdio.h>

float dias(float idade){
	float dia = idade * 12 * 365;
	return dia;
}
float meses(float idade){
	float mes = idade * 12;
	return mes;
}

int main(){
	float id, d, ms;
	
	printf("\nDigite sua Idade: ");
	scanf("%f", &id);
	
	float ds = dias(id);
	float mss = meses(id);
	
	printf("\n%.0f anos em meses: %.0f", id, mss);
	printf("\n%.0f anos em dias: %.0f", id, ds);
	
	return 0;
}