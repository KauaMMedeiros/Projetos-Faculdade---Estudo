#include<stdio.h>

int main(){
	int x;
	
	printf("\nDigite um numero: ");
	scanf("%d", &x);
	
	if(x>0){
		if(x%2==0){
			printf("\nO numero é par.");
		}
		else{
			printf("\nO numero é impar.");
		}	
    }
    return 0;
}