#include<stdio.h>

int main(){
	int album[10]={1,2,3,4,5,6,7,8,9,10}, num, cont=0;
	
	printf("\nQuantas figurinhas comprou?\nR: ");
	scanf("%d", &num);
	
	int resto;
	resto = 10 - num;
	
	int fig[10]={0,0,0,0,0,0,0,0,0,0};
	
	for(int i=0;i<num;i++){
		printf("\nDigite o numero da figirinha: ");
		scanf("%d", &fig[i]);
	}
	
	for(int i=0;i<10;i++){
		if(album[fig[i] - 1] != 0)
			album[fig[i] - 1]=0;
	}
	
	for(int i=0;i<10;i++){
		if(album[fig[i]] != 0){
		printf("\nFigurinhas que faltam: %d", album[i]);
		}
	}
	
	for(int i=0;i<10;i++){
		if(album[fig[i] - 1] != 0)
			cont++;
	}
	
	printf("\nEspacos disponiveis: %d", resto);
	
	
	return 0;
}