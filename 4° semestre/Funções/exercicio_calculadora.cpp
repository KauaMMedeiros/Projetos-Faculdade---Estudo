#include<stdio.h>
#include<math.h>

void inicio();
float soma(float num1, float num2);
float multiplicacao(float num1, float num2);
float prod_notavel(float num1, float num2);
float media_aritimetica(float num1, float num2);
float media_ponderada(float num1, float num2);
float fatorial(float num1);

main(){
	int x;
	float a, b;
	float sm, mult, pn, ma, mp, fat;
	
	do{
		inicio();
		scanf("%d", &x);
		
		if(x=1){
			printf("\nNum 1: ");
			scanf("%f", &a);
			printf("\nNum 2: ");
			scanf("%f", &b);
			sm=soma(a,b);
			
			printf("\nResultado: %f", sm);
		}else if(x=2){
			printf("\nNum 1: ");
			scanf("%f", &a);
			printf("\nNum 2: ");
			scanf("%f", &b);
			
			mult=multiplicacao(a,b);
			printf("\nResultado: %f", mult);
		}else if(x=3){
			printf("\nNum 1: ");
			scanf("%f", &a);
			printf("\nNum 2: ");
			scanf("%f", &b);
			
			pn=prod_notavel(a,b);
			printf("\nResultado: %f", pn);
		}else if(x=4){
			printf("\nNum 1: ");
			scanf("%f", &a);
			printf("\nNum 2: ");
			scanf("%f", &b);
			
			ma=media_aritimetica(a,b);
			printf("\nResultado: %f", ma);
		}else if(x=5){
			printf("\nNum 1: ");
			scanf("%f", &a);
			printf("\nNum 2: ");
			scanf("%f", &b);
			
			mp=media_ponderada(a,b);
			printf("\nResultado: %f", mp);
		}else if(x=6){
			printf("\nNum 1: ");
			scanf("%f", &a);
			
			fat=fatorial(a);
			printf("\nResultado: %f", fat);
		}else{
			break;
		}
	}while(x<=7);
	return 0;
}

void inicio(){
	printf("\n1-Soma\n2-Multiplicacao\n3-Produto notavel\n4-media aritimetica\n5-media ponderada\n6-fatorial\n7-Sair\n\nR: ");
}
float soma(float num1, float num2){
	float result;
	result = num1+num2;
	return result;
}
float multiplicacao(float num1, float num2){
	float result;
	result = num1*num2;
	return result;
}
float prod_notavel(float num1, float num2){
	float result, prod;
	result=num1+num2;
	prod=pow(result,2);
	return prod;
}
float media_aritimetica(float num1, float num2){
	float result;
	result=(num1+num2)/2;
	return result;
}
float media_ponderada(float num1, float num2){
	float soma, prod, result;
	soma=num1+num2;
	prod=pow(soma,2);
	result=prod/soma;
	return result;
}
float fatorial(float num1){
	if(num1<=1)
		return 1;
	else
		return (fatorial(num1-1)*num1);
}