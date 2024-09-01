#include<stdio.h>
#include<math.h>

float soma(float soma1, float soma2);
float sub(float sub1, float sub2);
float mult(float mult1, float mult2);
float div(float div1, float div2);
float pot(float numpot, float elevado);
float raiz(float numraiz);
void inicio();

main(){
	float num1, num2;
	int x;
	
do{
	float sm=soma(num1,num2);
	float sb=sub(num1,num2);
	float mlt=mult(num1,num2);
	float dv=div(num1,num2);
	float pt=pot(num1, num2);
	float rz=raiz(num1);
	
	inicio();
	scanf("%d", &x);
	
	switch(x){
		case 1:
			printf("\nNum1: ");
			scanf("%f", &num1);
			printf("\nNum2: ");
			scanf("%f", &num2);
			printf("\nResultado: %f", sm);
			break;
		case 2:
			printf("\nNum1: ");
			scanf("%f", &num1);
			printf("\nNum2: ");
			scanf("%f", &num2);
			printf("\nResultado: %f", sb);
			break;
		case 3:
			printf("\nNum1: ");
			scanf("%f", &num1);
			printf("\nNum2: ");
			scanf("%f", &num2);
			printf("\nResultado: %f", mlt);
			break;
		case 4:
			printf("\nNum1: ");
			scanf("%f", &num1);
			printf("\nNum2: ");
			scanf("%f", &num2);
			printf("\nResultado: %f", dv);
			break;
		case 5:
			printf("\nNum1: ");
			scanf("%f", &num1);
			printf("\nNum2: ");
			scanf("%f", &num2);
			printf("\nResultado: %f", pt);
			break;
		case 6:
			printf("\nNum1: ");
			scanf("%f", &num1);
			printf("\nResultado: %f", rz);
			break;
		case 7:
			break;
	}
	
}while(x<7);
	return 0;
}

float soma(float soma1, float soma2){
	return (soma1+soma2);
}
float sub(float sub1, float sub2){
	return (sub1-sub2);
}
float mult(float mult1, float mult2){
	return (mult1*mult2);
}
float div(float div1, float div2){
	return (div1/div2);
}
float pot(float numpot, float elevado){
	return (pow(numpot, elevado));
}
float raiz(float numraiz){
	return (sqrt(numraiz));
}
void inicio(){
	printf("\nBem-vindo!\n");
	printf("\nQual operacao deseja realizar?\nR: ");
	printf("\n\n1 - Soma\n2 - Subtracao\n3 - Multiplicacao\n4 - Divisao\n5 - Potencia\n6 - Raiz quadrada\n7 - Sair\n\nR: ");
}