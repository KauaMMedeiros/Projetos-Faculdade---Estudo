#include<stdio.h>
#include<stdlib.h>
#include<string.h>


int main(){
	char senha1[5], senha2[5];
	int erro=0;
	
	printf("\nCadastro\n\nDigite sua senha: ");
	scanf("%s", &senha1);
	fflush(stdin);
	printf("\nDigita a senha novamente: ");
	scanf("%s", &senha2);
	fflush(stdin);
	
	for(int i=0;i<5;i++){
		if(senha1[i] != senha2[i]){
			erro = 1;
	}
			}if(erro == 0){
			printf("\nSenha valida!");
		}else{
			printf("\nSenha invalida!");
		}
	
	return 0;
}