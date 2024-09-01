#include<stdio.h>
int main(){
	int i=-1;
	
	do{
		printf("%d, ", i+=2);
	}while(i<99);
	
	return 0;
}