#include<stdio.h>
int main(){
	int in1, in2, num;
	
	printf("\nDigite o primeiro numero do intervalo: ");
	scanf("%d", &in1);
	printf("\nDigite o segundo numero do intervalo: ");
	scanf("%d", &in2);
	printf("\nDigite um numero: ");
	scanf("%d", &num);
	
	if((num > in1) && (num < in2)){
		printf("\nO numero esta dentro do intervalo.");
	}
	else{
		printf("\nO numero esta fora do intevalo.");
	}
	
	return 0;
}