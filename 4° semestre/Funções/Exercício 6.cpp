#include<stdio.h>

float fatorial(float num);

main(){
	float fat, n;
	printf("\nNumero: ");
	scanf("%f", &n);
	
	fat=fatorial(n);
	printf("\nFatorial: %.0f", fat);
	return 0;
}
float fatorial(float num){
	if(num<=1)
		return 1;
	else
		return (fatorial(num-1)*num);
}