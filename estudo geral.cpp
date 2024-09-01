#include<stdio.h>

main(){
	char op;
	do{
		int x;
	printf("\nQuantos numeros deseja digitar: ");
	scanf("%d", &x);
	
	int num[x], *pnum;
	
	pnum=num;
	printf("\nLendo numeros da matriz: ");
	for(int i=0;i<x;i++){
		printf("\nNum[%d]: ", i+1);
		scanf("%d", pnum++);
	}
	
	pnum=num;
	printf("\nNumeros salvos: ");
	for(int i=0;i<x;i++)
		printf("\nNum[%d]: %d", i+1, *(pnum++));
		
	printf("\nDeseja continuar?\n[s]-Sim\n[n]-Nao\nR: ");
	scanf("%s", &op);
	}while(op=='s');
}