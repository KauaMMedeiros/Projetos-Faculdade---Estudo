#include<stdio.h>
int main(){
	int opcao;
	
	printf("\nMenu: \n1 - a \n2 - b\n");
	scanf("%d", &opcao);
	
	if(opcao == 1){
		printf("\nVoce escolheu A");
	}
	else if(opcao == 2){
		printf("\nVoce escolheu B");
	}
	else{
		printf("\nOpcao invalida.");
		
	}
	return 0;
}

//versão com if