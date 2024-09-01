#include<stdio.h>
int main(){
	int x;

	printf("\nMenu: \n\n1 - A\n2 - B\n\n");
	scanf("%d", &x);
	
	switch(x){
		case 1:
			printf("\nVoce escolheu A.");
			break;
		case 2:
			printf("\nVoce escolheu B.");
			break;
		default:
			printf("\nOpcao inválida.");
	}
		
	return 0;
}