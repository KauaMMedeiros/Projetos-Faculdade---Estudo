#include<stdio.h>
//protótipo da função
int soma(int a, int b);//agora a função retorna um inteiro
int main()
{  //chamada da função soma ja passando os valores diretamente
    int x, y, result;
    printf("\nDigite dois valores inteiros: ");
    scanf("%d %d", &x, &y);
    
    //chamada da função soma passando variáveis
    result = soma(x,y);
    printf("soma: %d", result);
    return 0;
}

int soma(int a, int b)
{
    return a + b;
}
