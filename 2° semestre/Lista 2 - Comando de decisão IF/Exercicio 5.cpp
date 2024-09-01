#include<stdio.h>
int main(){
	int x, y;
	
	printf("\nDigite um numero: ");
	scanf("%d", &x);
	printf("\nDigite outro numero: ");
	scanf("%d", &y);
	
	if(x > y){
		printf("\n %d eh maior que %d", x, y);
	}
	if(x < y){
		printf("\n%d eh maior que %d", y, x);
	}
	
	return 0;
}