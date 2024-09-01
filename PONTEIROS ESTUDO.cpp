#include<stdio.h>

int main(){
	int n;//variável que guarda seu valor na memória
	
	//declarar ponteiro
	int* p; //ponteiro é um valor que aponta para um endereço de memória
	
	printf("\nDigite um numero: ");
	scanf("%d", &n); 
	
	//inicializando o ponteiro
	p = &n;
	
	printf("\nNumero: %d", n);
	printf("\nEndereco de memoria: %d", &n); 
	
	//com %p apresenta o valor em hexadecimal
	printf("\nEndereco do ponteiro: %p", p);
	
	return 0;
}