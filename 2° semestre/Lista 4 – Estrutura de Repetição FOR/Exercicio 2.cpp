#include<stdio.h>
int main(){
	int i, num;
	
	printf("\nDigite um numero: ");
	scanf("%d", &num);
	
	printf("\nTabuada do %d", num);
	
	for(i=1; i<=10; i++){
		printf("\n%d x %d = %d", num, i, num*i);
	}
	
	return 0;
}