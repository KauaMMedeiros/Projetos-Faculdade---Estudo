#include<stdio.h>
#include<string.h>

int main(){
	char senha[7], snh[7];
	int i, cont = 0;
	
	printf("\nSenha de cadastro: ");
	gets(snh);
	printf("\nAgora digite uma senha para validacao: ");
	gets(senha);
	
	if(strcmp(senha, snh) == 0)//senha bate
		printf("\nAcesso liberado!");
	else{
		for(i=0;i<3;i++){
			if(snh[i] == senha[i])
			cont++;
		}
		if(cont == 3)
			printf("\nSenha proxima. ");
		else
			printf("\nSenha incorreta.");
	}
	
	
	
	return 0;
}