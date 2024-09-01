#include<stdio.h>

int main(){
	//array
	//| 0 | 1 | 2 | 3 | 4 |
	int valores[5];
	
	for(int i =0;i<5;i++){
		printf("\nInforme o %d valor: ", i+1);
		scanf("%d", &valores[i]);
	}
	
	printf("\nValores informados: ");
	for(int i=0;i<5;i++)
		printf("\n%d", valores[i]);
		
	//endereço comercial da primeira posição
	printf("\n%p %d", &valores[0], valores[0]);
	printf("\n%p %d", valores, valores[0]);
	
	
	return 0;
}