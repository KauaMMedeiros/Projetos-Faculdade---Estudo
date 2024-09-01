#include<stdio.h>
#include<string.h>

int verifica(char login[], char senha[])
{
	char login_cadastrado[] = "kaua";
	char senha_cadastrado[] = "123";
	
	if(strcmp(login, login_cadastrado) == 0 && strcmp(senha, senha_cadastrado) == 0)
	return 1;
	else
	return 0;
}

int main()
{
	char login[10], senha[5];
	float saldo;
	int x, logado, deposito, saque;
	
	printf("\nEntre no sistema: ");
	printf("\nlogin: ");
	scanf("%s", &login[10]);
	printf("\nsenha: ");
	scanf("%s", &senha[5]);
	
	do
	{
		printf("\n\n\nSeja bem-vindo!");
		
		printf("\n\nSelecione qual a funcao desejada: ");
		printf("\n1 - Depositar");
		printf("\n2 - Ver saldo");
		printf("\n3 - Saque");
		printf("\n4 - Sair");
		printf("\n\nDigite o numero respectivo a funcao desejada: ");
		scanf("%d", &x);
		
		switch(x)
		{
			case 1:
				printf("\nDEPOSITAR");
				printf("\n\nDigite a quantia desejada: ");
				scanf("%d", &deposito);
				
				saldo = saldo + deposito;
				break;
			case 2:
				printf("\nSALDO");
				printf("\n\nSaldo atual: %.2f", saldo);
				break;
			case 3:
				printf("\nSAQUE");
				printf("\n\nDigite o valor desejado: ");
				scanf("%d", &saque);
				if(saque > saldo)
				{
					printf("\nValor indisponivel");
				}
				
				saldo = saldo - saque;
				break;
			case 4:
				printf("\nSAIR");
				printf("\n\nAdeus!");
				break;
		}
	}while(x<4);
	
	return 0;
}