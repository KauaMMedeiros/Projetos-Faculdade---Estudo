#include<stdio.h>
int main(){
	int i, num;
	
	for(i=0; i<=10; i++){
		printf("\nDigite um numero: ");
		scanf("%d", &num);
		
		if(num>0){
			printf("\nPositivo.");
		}
		else if(num<0){
			printf("\nNegativo.");
		}
		else{
			printf("\nNulo.");
		}
	}
	
	return 0;
}