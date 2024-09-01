#include<stdio.h>

float dias(float idade);
float meses(float idade);
main(){
	float idade, dia, mes;
	
	printf("\nIdade: ");
	scanf("%f", &idade);
	
	dia=dias(idade);
	mes=meses(idade);
	
	printf("\n%.0f dias de vida e %.0f meses de vida.", dia, mes);
	
	return 0;
}
float dias(float idade){
	float res;
	res=idade*365;
	
	return res;
}
float meses(float idade){
	float res;
	res=idade*12;
	
	return res;
}