#include<stdio.h>

float media(float n1, float n2){
	float medi = (n1 + n2) / 2;
	return medi;
}

int main(){
	float nota1, nota2;
	
	printf("\nDigite a primeira nota: ");
	scanf("%f", &nota1);
	printf("\nDigite a segunda nota: ");
	scanf("%f", &nota2);
	
	float med = media(nota1, nota2);
		
	printf("\nA media das notas eh igual a %.1f", med);
	
	return 0;
}