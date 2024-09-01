#include<stdio.h>
int main(){
	int i, num;
	
	for(i=0; i<10; i++){
		printf("\nDigite um numero: ");
	    scanf("%d", &num);
	    
		printf("\nO dobro de %d eh %d", num, num*2);
	}
	
	return 0;
}