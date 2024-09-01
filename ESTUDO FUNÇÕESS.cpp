#include<stdio.h>

float media(float nt1, float nt2){
	float med = (nt1 + nt2)/2;
	return med;
}

int main(){
	float nota1, nota2;
	
	printf("\nDigite sua nota 1: ");
	scanf("%f", &nota1);
	printf("\nDigite sua nota 2: ");
	scanf("%f", &nota2);
	
	float med = media(nota1, nota2);
	printf("\nMedia das notas: %.1f", med);
	
	return 0;
}