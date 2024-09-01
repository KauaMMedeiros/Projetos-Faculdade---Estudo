#include<stdio.h>

int main(){
	int num[5];
	
	for(int i=0;i<5;i++){
		printf("\nDigite um numero: ");
		scanf("%d", &num[i]);
	}
	
	for(int i=0;i<5;i++){
		printf("\nO dobro de %d eh %d", *(num + i), *(num + i)*2);
	}
	
	return 0;
}