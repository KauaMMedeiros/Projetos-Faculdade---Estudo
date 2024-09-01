#include<stdio.h>
//protótipo da função
int soma(int a, int b);//agora a função retorna um inteiro
int main()
{  //chamada da função soma ja passando os valores diretamente
    int x, y, resultado;
    printf("\nDigite dois valores inteiros: ");
    scanf("%d %d", &x, &y);
    
    //chamada da função soma passando variáveis
    resultado = soma(x,y);
    printf("soma: %d", resultado);
    return 0;
}

int soma(int a, int b)
{
    int resultado;
    resultado = a + b;
    return resultado;
}
