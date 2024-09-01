#include<stdio.h>

int main(){
	float C, K;
	
	printf("\nDigite a temperatura em Kelvin: ");
	scanf("%f", &K);
	
	C = K - 273;
	
	printf("\n%.2f C", C);
		
	return 0;
}