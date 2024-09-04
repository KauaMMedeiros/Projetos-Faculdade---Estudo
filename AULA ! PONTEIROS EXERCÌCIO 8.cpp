#include<stdio.h>
#include<string.h>

void leitura(float *t, int tam);
void maior_temp(float *t, int tam);
float media_temp(float *t, int tam);

main(){
    float temp[31], media;
    int dias, pos_inf[31], qtde;//pos_inf vai guardar a posição das temperaturas inferiores que a media, qtde para saber quantas temperaturar inferiores

    printf("\nTemperaturas diarias\n ");
    printf("\nQuantia de dias: ");
    scanf("%d", &dias);
    fflush(stdin);

    leitura(temp, dias);//incialização do ponteiro t ta sendo feito dentro de leitura(em temp)
    maior_temp(temp, dias);
    media_temp(temp, dias);

    return 0;
}

void leitura(float *t, int tam){
	int i;
	
	for(i=0;i<tam;i++){
		printf("\nTemperatura - %i dia: ", i+1);
		scanf("%f", t++);
	}
}

void maior_temp(float *t, int tam){
	int i, dia;
	float maior;
	maior=*t;
	dia=1;
	
	for(i=0;i<tam;i++){
		if(maior<*t){
			maior=*t;
			dia=i+1;
		}	
	}
	
	printf("\nA maior temperatura = %.1f - dia %i", maior, dia);
}

float media_temp(float *t, int tam){
	float media;
	media=0;
	
	for(int i=0;i<tam;i++){
		media=media+(*t++);
	}
	printf("\nMedia: %.2f", media/tam);
}