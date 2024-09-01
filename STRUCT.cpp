#include<stdio.h>

int main(){
	struct horario{
		int hora;
		int minuto;
		int segundo;
	};
	
	struct horario agora, *depois;
	depois = &agora;
	
	printf("\n%d:%d:%d", agora.hora, agora.minuto, agora.segundo);
	
	return 0;
}