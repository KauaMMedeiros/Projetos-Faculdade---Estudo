#include<stdio.h>
#include<conio.h>
#include<stdlib.h>

int main(){
	int nota[2], *pnota, soma=0;
	pnota = nota;
	
		for(int i=0;i<2;i++){
			printf("\nDigite a nota %d do aluno: ", i+1);
			scanf("%d", pnota++);
		}
		pnota = nota;
		
		for(int i=0;i<2;i++){
			if(nota[i]<=10){
				soma += nota[i];
			}
			else{
				printf("\nNota errada.");
			}
			int med = soma/2;
			printf("\nSoma das notas: %d", med);
				
			if(med>=7){
				printf("\nAprovado!");
			}else if(4<=med<7){
				printf("\nExame!");
			}else{
				printf("\nReprovado!");
			}
		}
	
	return 0;
}