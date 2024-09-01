#include<stdio.h>
int main(){
	int min, val = 50;
	float minmais, valmais;
	
	printf("\nQuantos minutos foram gastos? \nR:");
	scanf("%d", &min);
	
	if(min > 50){
		minmais = min - 50;
		valmais = minmais * 1.5;
		printf("\nO valor será de %.2f reais", valmais + 50);
	}
	if(min == 50){
		printf("\nO valor sera de %d reais", val);
	}
	
	return 0;
}