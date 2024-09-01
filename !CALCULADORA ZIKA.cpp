#include<stdio.h>
#include<math.h>
#define PI=3.14

void inicio();
void pergunta();

int main(){
	int op, opc;
	do{
		printf("\nCalculadora.");
		printf("\n\nDigite a opcao desejada:\n1 - Soma\n2 - Subtracao\n3 - Divisao\n4 - Multiplicacao\n5 - Modulo\n6 - Tangente\n7 - Cosseno\n8 - Seno\n9 - Exponencial\n10 - Potencia\n11 - Raiz quadrada\n12 - Logaritimo\n13 - Sair\n\nR: ");
		scanf("%d", &op);
		system("cls");
		
		switch(op){
			case 1:
				pergunta();
				scanf("%d", &opc);
				float num[opc], soma=0;
				
				for(int i=0;i<opc;i++){
					inicio();
					scanf("%f", num[i]);
					
					soma = soma + num[i];
				}
				printf("\nResultado: %.2f", soma);
				
				system("pause");
				break;
		}
	}while(op<13);
	
	return 0;
}

void inicio(){
	printf("\nDigite um numero: ");
}
void pergunta(){
	printf("\nQuantas numeros deseja digitar?\nR: ");
}
