#include<stdio.h>
int main(){
	int n1, n2, result = 0, soma, div, sub, mult, x;
	
	while(x!=5){
	printf("\nCalculadora: \n\n1 - soma\n2 - subtracao\n3 - multiplicacao\n4 - divisao\n5 - sair\nR: ");
	scanf("%d", &x);
	
	
	switch(x){
		case 1:
			printf("\nNumero 1: ");
			scanf("%d", &n1);
			printf("\nNumero 2: ");
			scanf("%d", &n2);
			soma = n1 + n2;
			result = result + soma;
			printf("\nSOMA: %d", soma);
			break;
		case 2:
			printf("\nNumero 1: ");
			scanf("%d", &n1);
			printf("\nNumero 2: ");
			scanf("%d", &n2);
			sub = n1 - n2;
			result = result + sub;
			printf("\nSUBTRACAO: %d", sub);
			break;
		case 3:
			printf("\nNumero 1: ");
			scanf("%d", &n1);
			printf("\nNumero 2: ");
			scanf("%d", &n2);
			mult = n1 * n2;
			result = result + mult;
			printf("\nMULTIPLICACAO: %d", mult);
			break;
		case 4:
			printf("\nNumero 1: ");
		scanf("%d", &n1);
		printf("\nNumero 2: ");
		scanf("%d", &n2);
			div = n1 / n2;
			result = result + div;
			printf("\nDIVISAO: %d", div);
			break;
	}
			
	}
	
	return 0;
}