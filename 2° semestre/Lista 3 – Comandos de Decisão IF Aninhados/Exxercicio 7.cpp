#include<stdio.h>
int main(){
	int l1, l2, l3;
	
	printf("\nDigite o primeiro valor: ");
	scanf("%d", &l1);
	printf("\nDigite o segundo valor: ");
	scanf("%d", &l2);
	printf("\nDigite o terceiro valor: ");
	scanf("%d", &l3);
	
	if((l1 == l2) && (l1 == l3)){
		printf("\nO triangulo eh equilatero.");
	}
	if(((l1 == l2) && (l1 == l3) && (l2 != l3)) || ((l2 == l3) && (l2 == l1) && (l1 != l3))){
		printf("\nO triangulo eh isosceles.");
	}
	if((l1 != l2) && (l1 != l3)){
		printf("\nO triangulo eh escaleno.");
	}
	return 0;
}
