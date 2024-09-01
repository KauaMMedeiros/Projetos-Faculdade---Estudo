#include<stdio.h>
int main(){
	int h, area, calc, b;
	printf("\nDigite a base do triangulo: ");
	scanf("%d", &b);
	printf("\nDigite a altura do triangulo: ");
	scanf("%d", &h);
	area = b * h;
	printf("\nA area do triangulo eh: %d", area/2);
	
	return 0;
}