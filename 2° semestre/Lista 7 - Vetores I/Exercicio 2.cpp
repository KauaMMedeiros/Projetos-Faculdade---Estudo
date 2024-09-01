#include<stdio.h>
int main(){
	int i;
	float num[10];
	
	for(i=0;i<10;i++){
		printf("\nNumero %d: ", i+1);
		scanf("%f", &num[i]);
	}
	printf("\nNumeros digitados:\nNumero\tValor");
	for(i=10;i>0;i--){
		printf("\nNumero %d\t%.1f", i, num[i+1]);
	}
	
	return 0;
}