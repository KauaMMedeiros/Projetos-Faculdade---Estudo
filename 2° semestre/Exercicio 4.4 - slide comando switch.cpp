#include<stdio.h>
int main(){
	char x;
	
	printf("\nDigite uma letra: ");
	scanf("%c", &x);
	
	if(x == 'a' || x =='e' || x == 'i' || x == 'o' || x == 'u'){
		printf("\nEh uma vogal e minuscula.");
		printf("\nA vogal digitada foi a %c", x);
	}
	else if(x == 'A' || x == 'E' || x == 'I' || x == 'O' || x == 'U'){
		printf("\nEh uma vogal e maiuscula.");
		printf("\nA vogal digitada foi a %c", x);
	}
	else{
		printf("\nEh uma consoante.");
		printf("\nA consoante digitada foi a %c", x);
	}
	
	return 0;
}