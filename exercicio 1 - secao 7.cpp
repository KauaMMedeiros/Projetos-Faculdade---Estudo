#include<stdio.h>

int main(){
	int num[6], soma;
	
	num[0] = 1;
	num[1] = 0;
	num[2] = 5;
	num[3] = -2;
	num[4] = -5;
	num[5] = 7;
	
	soma = num[0] + num[1] + num[5];
	printf("\nA soma dos numeros 1, 2 e 5 é igual a %d", soma);
	
	for(int i=0;i<6;i++){
		printf("\n%d", num[i]);
	}
	
	return 0;
}