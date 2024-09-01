#include<stdio.h>

int main(){
	/*char nome[3][50];
	
	for(int i=0;i<3;i++){
		printf("\nNome: ");
		gets(nome[i]);
	}for(int i=0;i<3;i++)
		printf("\nOlá %s", nome[i]);*/
		
	//matrizes de numeros inteiros
	int numeros[2][2];
	
	for(int i=0;i<2;i++){
		for(int j=0;j<2;j++){
			printf("\nDigite um numero: ");
			scanf("%d", &numeros[i][j]);
		}
	}
	
	for(int i=0;i<2;i++){
		for(int j=0;j<2;j++){
		printf("\nNumero %d %d = %d", i+1, j+1, numeros[i][j]);
		}
	}

	//matrizes de numeros reais
	float num[5][5];	
	
	return 0;
}