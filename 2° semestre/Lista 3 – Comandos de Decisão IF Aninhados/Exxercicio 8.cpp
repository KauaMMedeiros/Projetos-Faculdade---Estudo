#include<stdio.h>
int main(){
	int x;
	float alt, idealh, idealm;
	
	printf("\nQual sua altura? \nR: ");
	scanf("%f", &alt);
	
	printf("\nVoce eh homem ou mulher? ");
	printf("\nDigite 1 para homem \nDigite 2 para mulher \nR: ");
	scanf("%d", &x);
	
	if(x == 1){
		idealh = (72.7 * alt) - 62.0;
		printf("\no Peso ideal para o homem eh %.2f", idealh);
	}
	if(x == 2){
		idealm = (62.1 * alt) - 48.7;
		printf("\nO peso idual para a mulher eh de %.2f", idealm);
	}
	
	return 0;
}