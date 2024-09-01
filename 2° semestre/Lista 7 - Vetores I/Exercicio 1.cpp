#include<stdio.h>
int main(){
	float num[10];
	int i;
	
	for(i=0;i<10;i++){
		printf("\nNumero %d: ", i+1);
		scanf("%f", &num[i]);
	}
	printf("\nNumeros digitados:\nNumero\t\tValor");
	for(i=0;i<10;i++){
		printf("\n%d\t\t%.1f", i+1, num[i]);
	}
	
	return 0;
}