#include<stdio.h>
#include<math.h>

float area(float r){
	float ar = 4 * 3.14 * (r * r);
	return ar;
}

int main(){
	float raio;
	
	printf("\nDIgite o raio da esfera: ");
	scanf("%f", &raio);
	
	float aarea = area(raio);
	printf("\nArea da esfera: %.2f", aarea);
	
	return 0;
}