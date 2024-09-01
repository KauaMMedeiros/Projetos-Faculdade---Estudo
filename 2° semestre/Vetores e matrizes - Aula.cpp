#include<stdio.h>
int main(){
	float notas[10];
	int i;
	
	for(i=0;i<10;i++){
		printf("\nNota %d: ", i+1);
		scanf("%f",&notas[i]);
	}
	
	printf("\nRelatorio de notas:\nAluno:\tNota:");
	for(i=0;i<10;i++)
		printf("\n%d\t%.1f", i+1, notas[i]);
	
	return 0;
}