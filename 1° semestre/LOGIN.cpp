#include<stdio.h>
#include<stdlib.h>
#include<string.h>

typedef struct{
	char login[30];
	char senha[30];
} pessoa; pessoa p[1];

int main(){
	char login[30];
	char senha[30];
	
	strcpy(p[0].login, "kaua");
	strcpy(p[0].senha, "123123");
	
	printf("\n\t\tLogin: ");
	scanf("%s", &login);
	printf("\n\t\tSenha: ");
	scanf("%s", &senha);
	
	if((strcmp(login,p[0].login)==0) || (strcmp(senha,p[0].senha)==0)){
		printf("Usuario logado");
	}else{
		printf("login e/ou senha incorretos");
	}
	return 0;
}