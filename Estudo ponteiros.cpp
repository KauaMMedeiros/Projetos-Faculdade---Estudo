#include<stdio.h>

void incrementa(int valo){
	printf("\nAntes de incrementar");
	printf("\nVale %d", valo);
	
	printf("\nDepois de incrementar");
	printf("\nO contador vale %d", ++valo);
}

int main(){
	int num = 10;
	
	incrementa(num);
	
	return 0;
}