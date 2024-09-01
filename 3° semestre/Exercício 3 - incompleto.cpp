#include<stdio.h>
#include<stdlib.h>

void leitura(int *p, int q);
void resultante(int *pa,int *pb,int *pc,int q);

main(){
	int a[10], b[10], c[10], qtde;
	printf("\nSoma de 2 vetores");
	do{
		printf("\nQtde de elementos - max 10: ");
		scanf("%d", &qtde);
	}while(qtde<1 || qtde>10);
	printf("\nLeitura do vetor A: \n");
	leitura(a,qtde);
	printf("\nLeitura do vetor B: \n");
	leitura(b,qtde);
	
	resultante(a,b,c,qtde);
	
	printf()
}

void leitura(int *p, int q){
	int i;
	for(i=0;i<q;i++,p++){
		printf("\nvet[%d]= ", i);
		scanf("%d", p);
		fflush(stdin);
	}//for
}//leitura

void resultante(int *pa,int *pb,int *pc,int q){
	int i;
	for(i=0;i<q;i++,pa++,pb++,pc++)
	*pc=*pa+*pb;
}

void imprime(int *p, int q){
	int i;
	for(i=0;i<q;i++,p++)
	printf("\nvet[%d]= %d", i, *p);
}