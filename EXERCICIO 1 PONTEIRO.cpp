#include<stdio.h>



int main(){
int inteiro=1;
float real=1.1;
char caractere='g';

	int* pont_int;
	float* pont_real;
	char* pont_char;
	
	printf("\nAntes de modificar");
	printf("\nValor inteiro %d", inteiro);
	printf("\nValor real %.1f", real);
	printf("\nValor char %c ou %d", caractere, caractere);
	
	pont_int = &inteiro;
	pont_real = &real;
	pont_char = &caractere;
	
	printf("\nValor inteiro %d", inteiro);
	printf("\nValor real %.1f", real);
	printf("\nValor char %c ou %d", caractere, caractere);
	
	
	return 0;
}