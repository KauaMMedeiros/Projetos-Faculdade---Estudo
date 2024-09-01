#include<stdio.h>
#include<ctype.h>
int main(){
	char x;
	
	printf("\nDigite uma letra: ");
	scanf("%c", &x);
	
	x = tolower(x);
	
	if(x == 'a' || x =='e' || x == 'i' || x == 'o' || x == 'u'){
		printf("\nEh uma vogal");
		printf("\nA vogal digitada foi a %c", x);
	}
	else{
		printf("\nEh uma consoante.");
		printf("\nA consoante digitada foi a %c", x);
	}
	
	return 0;
}