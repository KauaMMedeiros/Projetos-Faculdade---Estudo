#include<stdio.h>

int main(){
	char x;
	int cont=0, num[cont], *pnum;
	
	pnum = num;
	do{
		printf("\nDigite um numero: ");
		scanf("%d", pnum++);
		cont++;
		
		printf("\nDeseja continuar?\nS - Sim\nN - Nao\n\nR: ");
		scanf("%c", &x);
	}while(x != 'n' || x != 'N');
	
	return 0;
}