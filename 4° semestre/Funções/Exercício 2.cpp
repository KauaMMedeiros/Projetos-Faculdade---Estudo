#include<stdio.h>

float media(float num1, float num2);

main(){
	float a, b, res;
	
	printf("\nDigite dois numeros: ");
	scanf("%f %f", &a, &b);
	
	res=media(a,b);
	printf("\nMedia: %.2f", res);
	
	return 0;
}
float media(float num1, float num2){
	float res;
	
	res=(num1+num2)/2;
	return res;
}