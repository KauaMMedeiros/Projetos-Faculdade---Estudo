#include<stdio.h>
int main(){
	char x;
	
	printf("\nDigite uma letra: ");
	scanf("%c", &x);
	
	if((x == 'a') || (x == 'e') || (x == 'i') || (x == 'o') || (x == 'u')){
		printf("\nEh uma vogal. ");
	}
	else{
		printf("\nEh uma consoante.");
	}
	
	return 0;
}