#include<stdio.h>
int main(){
	int i, num1, num2;
	
	printf("\nDigite dois numeros: ");
	scanf("%d %d", &num1, &num2);
	
	for(i=num1+1; i<num2; i++){
		printf("%d, ", i);
	}
	
	return 0;
}