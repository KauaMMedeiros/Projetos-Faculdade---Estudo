#include<stdio.h>
#include<string.h>

int verifica(char login[], char senha[])
{
	char login_cadastrado[] = "kaua";
	char senha_cadastrado[] = "123";
	
	if(strcmp(login,login_cadastrado) == 0 && strcmp(senha,senha_cadastrado) == 0)
	return 1;
	else
	return 0;
}

int main()
{
	char login[10], senha[5];
	float saldo;
	int x, deposito, saque, logado;
	
	printf("Login: ");
	scanf("%s", &login[10]);
	printf("Senha: ");
	scanf("%s", &senha[5]);
	
	do
	{
		logado = verifica(login, senha);
		
	printf("\n\nBem-vindo!");
	printf("\n\nSelecione uma funcao: ");
	printf("\n1 - Saldo");
	printf("\n2 - Depositar");
	printf("\n3 - Saque");
	printf("\n4 - Sair");
	printf("\n\nPara selecionar uma funcao, digite o numero respectivo: ");
	scanf("%d", &x);
	
	switch(x)
	{
		case 1:
			printf("\n\nSeu saldo atual: %.2f", saldo);
			break;
		case 2:
			printf("\n\nDigite o valor a se depositar: ");
			scanf("%d", &deposito);
			
			saldo = saldo + deposito;
			break;
		case 3:
			printf("\n\nDigite o valor desejado no saque: ");
			scanf("%d", &saque);
			
			if(saldo<saque)
			{
				printf("Saldo indisponivel");
			}
			if(saldo>saque)
			{
				printf("Operacao feita");
				saldo = saldo - saque;
			}
			break;
		case 4:
			printf("\n\nAdeus!");
			break;
	}
  }while(x<4);
	
	return 0;
}