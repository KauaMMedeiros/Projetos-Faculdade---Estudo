#include<stdio.h>

int main(){
	int num;
	
	printf("\nQuantos numeros deseja digitar?\nR: ");
	scanf("%d", &num);
	
	int n[num], *pn;
	
	pn = n;
	for(int i=0;i<num;i++){
		printf("\nDigite um numero: ");
		scanf("%d", pn ++);
	}
	
	pn = n;
	for(int i=0;i<num;i++)
		printf("\nNUM[%d]: %d", i+1, *(pn ++));
	
	return 0;
}