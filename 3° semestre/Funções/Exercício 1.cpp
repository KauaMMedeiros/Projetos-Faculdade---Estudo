#include<stdio.h>

int produto(int num1,int num2){
	int prod = num1 * num2;
	return prod;
}

int main(){
	int resp = produto(2,9);
	
	printf("\nProduto = %d", resp);
}
