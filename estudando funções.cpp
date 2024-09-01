#include<stdio.h>
#include<stdlib.h>

int main(){
	int x = 10;
	double y = 20.50;
	char z = 'a';
	
	int *pX = &x;
	double *pY = &y;
	char *pZ = &z;
	/*	int *pX;
	pX = &x;
	ou
	int *pX = &x; */
	
	double soma = *pX + *pY;
	printf("\nSoma: %f", soma);
	
	int *res;
	res = 6684148;
	printf("\nResultado: %d", &res);
	
	printf("\nEndereco x = %d / valor x = %d", pX, *pX);
	printf("\nEndereco x = %d / valor x = %f", pY, *pY);
	printf("\nEndereco x = %d / valor x = %c", pZ, *pZ);

	getchar();
	
	return 0;
}


/*	int x;//pegar um espaço para armazenar
	x = 10;//jogar o valor 10 no espaço de memória
	
	printf("\n%d", x);//mostrar o valor de x
	printf("\n%d", &x);//mostrar o endereço de memória de x
	
	int *ponteiro = &x;//ponteiro está apontando num inteiro
	//digo que ponteiro é igual ao espaço de memória de x
	
	printf("\n%d", *ponteiro);//valor de ponteiro
	printf("\n%d", ponteiro);//mostrar o endereço de memória
	*/