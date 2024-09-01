#include<stdio.h>

void incrementa(int* valor){
	printf("\nAntes");
	printf("\nO contador vale %d", (*valor));
	printf("\nEndereco de memoria: %d", valor);
	
	printf("\nDepois");
	printf("\nO contador vale %d", ++(*valor));
	printf("\nEndereço de memoria: %d", valor);
}

int main(){
	int contador=10;
	
	printf("\nAntes de incrementar");
	printf("\nO contador vale %d", contador);
	printf("\nEndereço de memoria: %d", &contador);
	
	incrementa(&contador);
	
	printf("\nDepois de incrementar");
	printf("\nO contador vale %d", contador);
	printf("\nEndereço de memoria: %d", &contador);
	
	return 0;
}