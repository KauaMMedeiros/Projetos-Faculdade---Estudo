#include <stdio.h>
#include <string.h>

int verifica(char login[], char senha[])
{
    char login_cadastrado[] = "kaua";
    char senha_cadastrado[] = "123";

    if (strcmp(login, login_cadastrado) == 0 && strcmp(senha, senha_cadastrado) == 0)
        return 1;
    else
        return 0;
}

int main()
{
    char login[10], senha[5];
    float saldo;
    int logado, x, deposito, saque;

    printf("\nEntre no sistema:\n");
    printf("Login: ");
    scanf("%s", &login[10]);
    printf("Senha: ");
    scanf("%s", &senha[5]);
    
    do{
    logado = verifica(login, senha);
    
            printf("\nBem-vindo!\n");

        printf("Selecione qual função voce quer:\n");
        printf("Depositar na conta - 1\n");
        printf("Ver Saldo - 2\n");
        printf("Sacar dinheiro - 3\n");
        printf("Sair - 4\n");
        printf("Para selecionar a respectiva funcao, digite o numero apresentado na frente de cada: ");
        scanf("%d", &x);
    
    switch(x)
    {
    	case 1:
    		printf("Digite o valor a ser depositado: ");
    		scanf("%d", &deposito);
    		saldo = saldo + deposito;
    		printf("Seu novo saldo: %.2f", saldo);
    		break;
    	case 2:
    		printf("Saldo atual: %.2f", saldo);
    		break;
    	case 3:
    		printf("Digite o valor desejado: ");
    		scanf("%d", &saque);
    		saldo = saldo - saque;
    		break;
    	case 4:
    		printf("Ate mais!");
    		break;
	}
}while(x<4);

    return 0;
}
