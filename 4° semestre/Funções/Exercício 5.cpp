#include<stdio.h>

float area(float raio);

main(){
	float ar, r;
	
	printf("\nRaio: ");
	scanf("%f", &r);
	
	ar=area(r);
	printf("\nArea: %.2f", ar);
	return 0;
}
float area(float raio){
	float are;
	are=(raio*raio)*4*3.14;
	
	return are;
}