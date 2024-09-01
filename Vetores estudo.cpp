#include<stdio.h>

//array uni-dimensional
//ex: char nome[50];
int main(){
	//vetores e strings
	char nome[50];
	
	printf("\nNome: ");
	gets(nome);
	
	printf("\nOla %s", nome);
	
	//vetores e caracteres
	char letras[20];
	//'a' -> caractere
	
	/*int cont = 0;
	for(int i = 97; i <= 122; i++){
		letras[cont] = i;
		cont = cont + 1;
	}
	for(int i = 0; i <26; i++)
		printf("\n%c", letras[i]);
	*/
	 //Imprimir o alfabeto
	 
	//vetores de inteiros
	int num[10];
	
	for(int i = 0; i < 3; i++){
		printf("\nDigite um numero: ");
		scanf("%d", &num[i]);
	}
	for(int i=0;i<3;i++)
		printf("\n%d", num[i]);
	
	//vetores de numeros reais
	float numm[10];
	
	
	
	return 0;
}