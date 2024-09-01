#include<stdio.h>
int main(){
	int x, idade;
	float alt, peso, idealh, idealm;
	
	printf("\nQual sua altura? \nR: ");
	scanf("%f", &alt);
	printf("\nQuanto voce pesa? \nR: ");
	scanf("%f", &peso);
	printf("\nQual a sua idade? \nR: ");
	scanf("%d", &idade);
	
	if((idade >= 12) && (idade <= 65)){
		
		if((idade >= 12) && (idade <= 17)){
			printf("\nVoce eh adolescente.");
		}
		if((idade >= 18) && (idade <= 25)){
			printf("\nVoce eh jovem.");
		}
		if((idade >= 26) && (idade <= 65)){
			printf("\nVoce eh adulto.");
		}
	
	printf("\nVoce eh homem ou mulher? ");
	printf("\nDigite 1 para homem \nDigite 2 para mulher \nR: ");
	scanf("%d", &x);
	
	if(x == 1){
		idealh = (72.7 * alt) - 62.0;
		printf("\no Peso ideal para o homem eh %.2f", idealh);
		if(peso > idealh){
			printf("\nNao esta no peso ideal, esta acima.");
		}
		if(peso < idealh){
			printf("\nNao esta no peso ideal, esta abaixo.");
		}
		if(peso == idealh){
			printf("\nEsta no peso ideal.");
		}
	}
	if(x == 2){
		idealm = (62.1 * alt) - 48.7;
		printf("\nO peso idual para a mulher eh de %.2f", idealm);
		if(peso > idealm){
			printf("\nNao esta no peso ideal, esta acima.");
		}
		if(peso < idealm){
			printf("\nNao estao no peso ideal, esta abaixo.");
		}
		if(peso == idealm){
			printf("\nEsta no peso ideal.");
		}
	}
}
	
	return 0;
}