#include<stdio.h>
#include<stdlib.h>
int main(){
	int i, a, b;
	char op;
	float area, peri;
	
    do{
		printf("\nDigite os lados: ");
		scanf("%d %d", &a, &b);
		area = a * b;
		peri = a + a + b + b;
		printf("\nArea: %.1f\nPerimetro: %.1f", area, peri);
		
		fflush(stdin);
		printf("\nDeseja continuar?\n\n[s]im\n[n]ao\n");
		scanf("%c", &op);
	}while(op == 's' || op == 'S');
	
	return 0;
}