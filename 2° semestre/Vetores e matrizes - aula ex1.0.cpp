#include<stdio.h>
int main(){
	float num[10];
	int i, dentro=0, cont=0;
	
	for(i=0;i<10;i++){
		printf("\nNumero %d: ", i+1);
		scanf("%f", &num[i]);
	}
	do{
		printf("\nDigite o numero que deseja procurar: ");
		scanf("%d", &dentro);
		for(i=0;i<10;i++){
		if(dentro==num[i])
			cont++;
		}
		if(cont==0)
			printf("\nNumero nao encontrado.");
	}while(cont==0);
	printf("\nO numero %d foi encontrado %d vezes.", dentro, cont);

	return 0;
}