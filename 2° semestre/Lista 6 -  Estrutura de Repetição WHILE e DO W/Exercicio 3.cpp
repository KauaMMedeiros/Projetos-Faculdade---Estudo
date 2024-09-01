#include<stdio.h>
int main(){
	int mod1, mod2, media;
	
	do{
		printf("\nNota 1: ");
		scanf("%d", &mod1);
		printf("\nNota 2: ");
		scanf("%d", &mod2);
		
		media = (mod1 + mod2) / 2;
		
		if(mod1 < 0 || mod1 > 10 || mod2 < 0 || mod2 > 10){
		printf("\nNota errada, digite novamente");
		}
		else{
		printf("\nMedia: %d ", media);
	}
	}while(mod1 < 0 || mod1 > 10 || mod2 < 0 || mod2 > 10);
	
	return 0;
}