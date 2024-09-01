#include<stdio.h>
int main(){
	int pi = 3.14, C, r;
	printf("\nCalcular o perimetro da circunferencia!");
	printf("\nDigite o raio: ");
	scanf("%d", &r);
	C = 2 * pi * r;
	printf("\nO perimetro eh: %d", C);
	
return 0;
}