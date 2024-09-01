#include<stdio.h>
#include<stdlib.h>;

float cm(float dist, float lit){
	float cons = dist / lit;
	return cons;
}

int main(){
	float km, litros;
	
	printf("\nEsse programa ira calcular o consumo medio de um carro.");
	
	printf("\nDigite quantos KM rodou: ");
	scanf("%f", &km);
	printf("\nDigite quantos litros foram gastos: ");
	scanf("%f", &litros);
	
	float conmed = cm(km, litros);
	
	system("cls");
	
	printf("\n\nO consumo medio foi de: %.1f km/l", conmed);
	
	return 0;
}