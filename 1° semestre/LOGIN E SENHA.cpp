#include<stdio.h>
#include<string.h>

int verifica(char login[], char senha[], float saldo)
{
	char login_cadastrado[] = "kaua";
	char senha_cadastrado[] = "123";
	float saldo_cadastrado = 5000;
	if(strcmp(login, login_cadastrado) == 0 && strcmp(senha, senha_cadastrado) == 0 && saldo == saldo_cadastrado)
	return 1;
	else
	return 0;
}
int main()
{
	char login[10], senha[5];
	int logado, x, deposito;
	float saldo;
	
	printf("\nEntre no sistema: ");
	printf("\nLogin: ");
	gets(login);
	printf("\nSenha: ");
	gets(senha);
	
	
	logado = verifica(login,senha,5000);
	if(login = login_cadastrado)
	          {
	printf("\nBem-vindo!");
}
if(login)
	    {
	printf("\nLogin e/ou senha invalidos!");
}

printf("\nSelecione qual função você quer:");
printf("\nDepositar na conta - 1");
printf("\nVer Saldo - 2");
printf("\nSair - 3");
printf("\nPara selecionar a respectiva função, digite o numero apresentado na frente de cada opcao");
scanf("%d", &x);

if(x = 1)
{
	printf("\nSelecione o valor a ser depositado: ");
	scanf("%d", &deposito);
	saldo = deposito + saldo;
	printf("Seu novo saldo é: %d", saldo);
}
if(x = 2)
{
	printf("Seu saldo é: %d", saldo);
}
if(x = 3)
{
	printf("Até mais!");
}

	return 0;
}	