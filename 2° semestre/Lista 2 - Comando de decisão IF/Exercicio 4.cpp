#include<stdio.h>
int main(){
	float m, n1, n2;
	
	printf("\nDigite a primeira nota;");
	scanf("%f", &n1);
	printf("\nDigite a segunda nota: ");
	scanf("%f", &n2);
	
	m = (n1 + n2) / 2;
	if(m == 5){
		printf("\nAprovado!");
	}
	else{
		printf("\nNao aprovado.");
	}
}