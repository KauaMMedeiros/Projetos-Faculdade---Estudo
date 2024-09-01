#include<stdio.h>
int main(){
	float alt, peso, imc;
	
	printf("\nDigite a sua altura: ");
	scanf("%f", &alt);
	printf("\nDigite seu peso: ");
	scanf("%f", &peso);
	
	imc = peso / (alt * alt);
	
	if(imc < 18.5){
		printf("\nAbaixo do peso, IMC: %.2f", imc);
	}
	if((imc >= 18.5) && (imc < 25.0)){
		printf("\nSaudavel, IMC: %.2f", imc);
	}
	if((imc >= 25.0) && (imc < 30.0)){
		printf("\nAcima do peso, IMC: %.2f", imc);
	}
	if((imc >= 30.5) && (imc < 35.0)){
		printf("\nObesidade nivel I, IMC: %.2f", imc);
	}
	if((imc >= 35.0) && (imc < 40.0)){
		printf("\nObesidade nivel II, IMC: %.2f", imc);
	}
	if(imc >= 40.0){
		printf("\nObesidade nivel III, IMC: %.2f", imc);
	}
	
	return 0;
}