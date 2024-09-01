#include<stdio.h>
int main(){
	int num1, num2;
	
	printf("\nDigite um numero: ");
	scanf("%d", &num1);
	printf("\nDigite outro numero: ");
	scanf("%d", &num2);
	
	if(num1 > num2){
		printf("\nA ordem crescente eh %d, %d", num2, num1);
	}
	if(num2 > num1){
		printf("\nA ordem crescente eh %d, %d", num1, num2);
	}
	
	return 0;
}