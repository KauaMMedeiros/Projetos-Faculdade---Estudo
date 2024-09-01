#include<stdio.h>
int main(){
	int metro, cm;
	printf("\nConversor de metros para centimetros!");
	printf("\nDigite a medida em METROS: ");
	scanf("%d", &metro);
	cm = metro * 100;
	printf("\nA medida em cm eh: %d", cm);
	
	return 0;
}