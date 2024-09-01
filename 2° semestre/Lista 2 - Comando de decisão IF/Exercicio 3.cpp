#include<stdio.h>
int main(){
	float num, den;
	
	printf("\nDigite o numerador da divisao: ");
	scanf("%f", &num);
	printf("\nDigite o denominador da divisao: ");
	scanf("%f", &den);
	
	if(den != 0){
		printf("\nA divisao eh: %.1f", num / den);
	}
	else{
		printf("\nNao eh possivel dividir por 0.");
	}
	
	return 0;
}