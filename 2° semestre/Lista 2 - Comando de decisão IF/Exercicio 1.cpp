#include<stdio.h>

int main(){
	float x;
	
	printf("\nDigite um numero: ");
	scanf("%f", &x);
	
	if(x > 0){
		printf("\n%.2f eh positivo.", x);
	}
	else{
		printf("\n%.2f eh negativo.", x);
	}
	
	return 0;
}