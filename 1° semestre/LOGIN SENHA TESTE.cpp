#include <stdio.h>
#include <string.h>

struct Conta {
    char login[10];
    char senha[5];
    float saldo;
};

int verifica(struct Conta conta, float saldo_cadastrado) {
    if (strcmp(conta.login, "kaua") == 0 && strcmp(conta.senha, "123") == 0 && conta.saldo == saldo_cadastrado)
        return 1;
    else
        return 0;
}

int main() {
    struct Conta conta;
    conta.saldo = 5000;
    float saldo_cadastrado = conta.saldo;

    printf("Entre no sistema:\n");
    printf("Login: ");
    fgets(conta.login, sizeof(conta.login), stdin);
    conta.login[strcspn(conta.login, "\n")] = '\0';
    
    printf("Senha: ");
    fgets(conta.senha, sizeof(conta.senha), stdin);
    conta.senha[strcspn(conta.senha, "\n")] = '\0';

    int logado = verifica(conta, saldo_cadastrado);

    if (logado == 1) {
        printf("\nBem-vindo!\n");
    } else {
        printf("\nLogin e/ou senha invalidos!\n");
        return 0;
    }

    int x, deposito;
    
    printf("\nSelecione qual funcao voce deseja:\n");
    printf("Depositar na conta - 1\n");
    printf("Ver Saldo - 2\n");
    printf("Sair - 3\n");
    printf("Para selecionar a respectiva funcao, digite o numero apresentado na frente de cada opcao: ");
    scanf("%d", &x);

    if (x == 1) {
        printf("\nSelecione o valor a ser depositado: ");
        scanf("%d", &deposito);
        conta.saldo += deposito;
        printf("Seu novo saldo eh: %.2f\n", conta.saldo);
    } else if (x == 2) {
        printf("Seu saldo é: %.2f\n", conta.saldo);
    } else if (x == 3) {
        printf("Ate mais!\n");
    } else {
        printf("Opcao invalida!\n");
    }

    return 0;
}
