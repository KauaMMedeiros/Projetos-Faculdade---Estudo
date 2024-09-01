#include<stdio.h>

int main(){
	float n1, n2, nt, n3, n4, np, nf, teo1, teo2, pra1, pra2;
	
	printf("\nDigite a nota da primeira e segunda prova teórica: \nR:");
	scanf("%f", &n1);
	printf("\nR:");
	scanf("%f", &n2);
	
	teo1 = n1 * 0.6;
	teo2 = n2 * 0.6;
	nt = (teo1 + teo2)/2;
	
	printf("\nDigite as notas das provas praticas: \nR:");
	scanf("%f", &n3);
	printf("\nR:");
	scanf("%f", &n4);
	
	pra1 = n3 * 0.4;
	pra2 = n4 * 0.4;
	np = (pra1 + pra2)/2;
	nf = np + nt;
	
	printf("\nSua nota será: %.1f", nf);
	
	return 0;
}