#include<stdio.h>
int main(){
	int num1, num2, num3;
	printf("\nDigite um numero: ");
	scanf("%d", &num1);
	printf("\nDigite outro numero: ");
	scanf("%d", &num2);
	printf("\nDigite mais um numero: ");
	scanf("%d", &num3);
	
	if((num1 == num2) || (num1 == num3) || (num2 == num3)){
		printf("\nHa numeros repitidos");
		if(num1 == num2){
			printf("\nOs numeros repitidos sao o primeiro e segundo.");
		}
		else if(num1 == num3){
			printf("\nOs numeros repitidos sao o primeiro e terceiro.");
		}
		else{
			printf("\nOs numero repitidos sao o segundo e terceiro.");
		}
	}
	else{
		printf("\nNao ha numeros repitidos.");
		
	}
	
	return 0;
}