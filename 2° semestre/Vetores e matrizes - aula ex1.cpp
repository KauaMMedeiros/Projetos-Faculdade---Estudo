#include<stdio.h>
int main(){
	float num[4];
	int i, negativos=0;
	
	for(i=0;i<4;i++){
		printf("\nNumero %d: ", i+1);
		scanf("%f", &num[i]);
		
		if(num[i]<0)
			negativos++;
	}
	printf("\n%d numeros negativos encontrados.", negativos);
	
	return 0;
}