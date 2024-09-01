#include<stdio.h>

//estrutura das funções
void mensagem(){
	printf("\nHello World!");
}

int soma(int num1, int num2){
	int res = num1 + num2;
	return res;
}

char imprime(char crc){
	printf("\n%c", crc+1);
}

//main - principal
int main(){
	//chama a função mensagem
	mensagem();
	
	//chama a função soma, da o valor de soma para variavel ret, e imprime
	int ret = soma(4, 10);
	printf("\n%d", ret);
	
	//chama a função imprime, da o valor de imprime para viavel reto, e imprime
	char reto = imprime('a');
	printf("\n%c", reto);
	
	return 0;
}