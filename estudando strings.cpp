#include<stdio.h>
#include<string.h>
#include<stdlib.h>

int main(){
    char letra='a';

    printf("\n%c", letra); //vai printar "a"
    printf("\n%d", letra); //vai printar "97"

    // char string[8] = "alabama" = {A,l,a,b,a,m,a,\0};

    //Lendo Strings
    //com scanf

    char nome[15];

    printf("\nDigite seu nome: ");
    scanf("%s", nome);  //se digitar o nome inteiro, quando se é usado scanf, quando houver espaço em branco ele termina a entrada
    printf("\nBom dia, %s!", nome);

    //com gets


	//printf("\nQual seu nome? ");
    //gets(nome); //Le tudo até achar o caractere \n, que é gerado quando aciona a tecla ENTER | Entrada: Kaua Moraes | Saida: Kaua Moraes
    //printf("\nBom dia, %s !", nome);

    //com fgets

    printf("\nQual seu nome? ");
    fgets(nome, 11, stdin);
    printf("\nOla, %s !", nome);

    //Imprimindo strings
    //printf, puts, fputs

    char cidade[10] = "Sao Paulo";
    
    printf("\nPrintf: %s", cidade);
    puts(cidade);//escreve tudo
    puts(&cidade[4]);//escreve a partir da quarta posição
    //fputs é complicado, n aprendi ainda

    char origi1[8] = "abacate", copia1[8]="abacaxi";
    
    //strcpy
    printf("\nAntes de copiar\nOriginal: %s \t Copia: %s", origi1, copia1);
    strcpy(copia1, origi1); //Copia o conteudo de origi
    printf("\nDepois de copiar\nOriginal: %s \t Copia: %s", origi1, copia1);
    
    //strcat
    printf("\nAntes de strcat\nOriginal: %s \t Copia: %s", origi1, copia1);
    strcat(copia1, origi1); //Coloca o conteudo de origi no final de copia
    printf("\nDepois de strcat\nOriginal: %s \t Copia: %s", origi1, copia1);
    
    //strcmp e strlen
    printf("\nComparando o valor de strings, se 0: igual, se positivo: string1 maior, se negativo: string2 maior");
    if(strcmp(origi1, copia1) == 0)
    	printf("\nComo origi e copia sao iguais, retorna 0!");
    char tamanho;
    tamanho = strlen(origi1);
    printf("\nTamanho de origi1: %d", tamanho);

    return 0;
}