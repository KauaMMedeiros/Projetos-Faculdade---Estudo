#include<stdio.h>

float meses(float id){
	float mes = id * 12;
	return mes;
}

float dias(float idd){
	float dia = idd * 365;
	return dia;
}

int main(){
	float idade;
	
	printf("\nDigite sua idade: ");
	scanf("%f", &idade);
	
	float result = meses(idade);
	float resultt = dias(result);
	
	printf("\n%.0f em \nmeses: %.1f\ndias: %.1f", idade, result, resultt);
	
	return 0;
}