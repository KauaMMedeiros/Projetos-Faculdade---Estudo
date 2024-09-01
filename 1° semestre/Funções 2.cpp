#include<stdio.h>
//protótipo da função
void soma(int a, int b);//declarar cada parâmetro
int main()
{  //chamada da função soma ja passando os valores diretamente
    int x,y;
    printf("\nDigite dois valores inteiros: ");
    scanf("%d %d", &x, &y);
    
    //chamada da função soma passando variáveis
    soma(x,y);
    return 0;
}

void soma(int a, int b)
{
     printf("\nA soma %d + %d eh %d", a, b, a+b);
}
