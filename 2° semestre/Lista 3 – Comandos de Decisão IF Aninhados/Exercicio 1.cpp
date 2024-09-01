#include<stdio.h>
int main(){
	int num;
	
	printf("\nDigite um numero: ");
	scanf("%d", &num);
	
	if(num > 0)
	{
		printf("\nO numero eh positivo.");
	}
	else if(num == 0)
	{
		printf("\nO numero eh nulo.");
	}
	else
	{
		printf("\nO numero eh negativo.");
	}
	
	
	return 0;
}