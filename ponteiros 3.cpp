#include<stdio.h>

int main(){
	int valores[5] = {1, 2, 3, 4, 5};
	
	for(int i=0;i<5;i++){
		printf("\nO valor %d tem %ld bytes", valores[i], sizeof(valores[i]));
		//sizeof mostra quantos bytes tal coisa tem
	}
	printf("\n%ld", sizeof(valores));//quantos bytes tem no array
	
	printf("\nValores[0] vale %d e endereco de memoria eh %p", valores[0], valores[0]);
	printf("\n*(valores) vale %d e endereco de meoria eh %p", *(valores), *(valores));
	
	printf("\n*(valores+1) vale %d e endereco de memoria eh %p", *(valores+1), *(valores+1));
	printf("\n*(valores+2) vale %d e endereco de memoria eh %p", *(valores+2), *(valores+2));
	
	return 0;
}