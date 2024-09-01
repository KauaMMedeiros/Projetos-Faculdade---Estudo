#include<stdio.h>

long int fat(long int num){
	if(num==0)
		return 1;
	return(num*fat(num-1));
}

int main(){
	long int inteiro;
	
	printf("\nDigite um numero: ");
	scanf("%d", &inteiro);
	
	long int fatt = fat(inteiro);
	printf("\nFatoria de %d: %d", inteiro, fatt);
	
	return 0;
}