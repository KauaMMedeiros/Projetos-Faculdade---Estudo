#include<stdio.h>

int main(){
	int num[10], cont;
	
	for(int i=0;i<10;i++){
		printf("\nDigite um numero: ");
		scanf("%d", &num[i]);
		
		if(num[i]%2==0)
		cont++;
	}
	
	printf("\n%d numeros pares", cont);
	
	return 0;
}