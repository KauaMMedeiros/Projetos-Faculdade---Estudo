#include<stdio.h>

float media(float n1, float n2){
	float med = n1 + n2;
	return med/2; 
}

int main(){
	float nota1, nota2;
	
	printf("\nDigite a nota 1: ");
	scanf("%f", &nota1);
	printf("\nDigite a nota 2: ");
	scanf("%f", &nota2);
	
	float medd = media(nota1, nota2);
	printf("\nMedia das notas: %.1f", medd);
	
	return 0;
}