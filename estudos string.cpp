#include<stdio.h>
#include<string.h>

int main(){
	char palavra[50];
	int cont=0;
	
	printf("\nDigite uma palavra ou frase: ");
	gets(palavra);
	
	for(int i=5;i>0;i--){
		printf("%s", palavra[i]);
	}
	
	return 0;
}