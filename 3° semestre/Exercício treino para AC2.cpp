/*Fazer um programa para Controle de Hotel - este programa se destina a controlar o check-in
Qcadastro de hóspedes) de um hotel. 0 hotel possul 15 quartos, sendo 5 de categoria Solteiro e
10 de categoria Familiar . Utilizar alocação dinâmica e ponteiros para a estrutura.

[1] Check-in - alocar dinamicamente espaço, receber os valores digitados pelo usuário, se o
hóspede não tiver acompanhantes atribuir categoria Solteiro, caso contrário Familiar, buscar o
número do quarto disponível, de acordo com a categoria na estrutura quartos. Apenas um
hóspede é cadastrado por vez Não esquecer de atuallzar o quarto da estrutura quartos para
Ocupado.

[2] Check-out - encerra a estadia e apresenta o relatório, de acordo com o quarto. Apenas um
registro é acessado por vez, buscar e mostrar o número do quarto, o nome do hóspede,
quantidade de acompanhantes, a categoria (Solteiro ou Familiar), o tempo de permanência em
diase o valor a ser pago*/

#include<stdio.h>
#include<stdlib.h>

typedef struct hospede{
	int quarto; //numero do quarto
	char nome[20]; //nome do hospede
	int acompanhante; //quantia de acompanhantes
	char categoria; //[s]olteiro ou [f]amiliar
	int dias; //dias de permanencia
}hspd;

typedef struct quarto{
	int num; //numero do quarto
	char categoria; //solteiro ou familiar
	char status; //livre ou ocupado
}qrt;

void aloca_quarto(qrt **q, int qq);
void aloca_hospede(hspd **ph, int qh);
void cadastra_quarto(qrt *q, int qq);
void cadastra_hospede(hspd *ph, qrt *q, int qq);
int busca_quarto(qrt *q, int qq, char cat);
void check_out(hspd *ph,int qh,qrt *q);

int main(){
	int op, cont=0;
	
	qrt *q=NULL; //quarto com um ponteiro inicializado com NULL
	aloca_quarto(&q, 15);//endereço de pq, 15 quartos
	cadastra_quarto(q, 15);//passa o ponteiro pq, 15 quartos
	hspd *ph=NULL; //hospede com um ponteiro inicializado com NULL
	
	do{
		system("cls");
		
		printf("\n[1] - Check-in\n[2] - Check-out\n[3] - Fim\nOpcao: ");
		scanf("%d", &op);
		fflush(stdin);
		
		switch(op){
			case 1: 
				aloca_hospede(&ph, cont+1);
				cadastra_hospede(ph+cont,q,15);
				cont++;
				break;
			case 2: 
				check_out(ph,cont,q);
				break;		
		}
	}while(op!=3);
	
	return 0;
}//main

void aloca_quarto(quarto **q, int qq){
	if((*q=(qrt*)realloc(*q,qq*sizeof(qrt)))==NULL)
	exit(1);
}//aloca quarto

void cadastra_quarto(qrt *q, int qq){
	int i;
	for(i=0;i<qq;i++,q++){
		q->num=i+1;
		q->status='L';
		if(i<5){
			q->categoria='S';
		}else{
			q->categoria='F';
		}
	}//for
}//cadastro de quarto

void aloca_hospede(hspd **ph, int qh){
	int i;
	if((*ph=(hspd*)realloc(*ph,qh*sizeof(hspd)))==NULL){
		exit(1);
	}
}//aloca hospede

int busca_quarto(qrt *q, int qq, char cat){
	int i;
	for(i=0;i<qq;i++,q++){
		if(q->categoria==cat && q->status=='L'){
			q->status='O';
			return(q->num);
		}//if
	return -1; //nao tem quartos disponiveis
	}//for
}//buscar quarto livre

void cadastra_hospede(hspd *ph, qrt *q, int qq){
	do{
		printf("\nQuantia de acompanhantes - max 3: ");
		scanf("%d", &(ph->acompanhante));
		fflush(stdin);
	}while(ph->acompanhante<0 || ph->acompanhante>3);
	
	if(ph->acompanhante==0){
		ph->categoria='S';
	}else{
		ph->categoria='F';
	}
	
	ph->quarto=busca_quarto(q,qq,ph->categoria);
	if(ph->quarto==-1){
		printf("\nSem quartos disponiveis");
	}else{
		printf("\nNome: ");
		gets(ph->nome);
		fflush(stdin);
		printf("\nQuantia de dias: ");
		scanf("%d", &ph->dias);
		fflush(stdin);
		
		printf("\nCadastro realizado com sucesso\n\nSua quarto: %d", ph->quarto);
	}//else
	system("pause");
}//cadastro de hospede

void check_out(hspd *ph,int qh,qrt *q){
	int n_quarto, i, valor;
	
	do{
		printf("\nQuarto a ser encerrado: ");
		scanf("%d", &n_quarto);
		fflush(stdin);
	}while(n_quarto<1||n_quarto>15);
	
	(q+n_quarto-1)->status='L';
	
	for(i=0;i<qh;i++,ph++){
		if(ph->quarto==n_quarto){
			printf("\nNome: %s\nAcompanhantes: %d\nCategoria: %c\nDias: %d", ph->nome, ph->acompanhante, ph->categoria, ph->dias);
			if(ph->categoria=='S'){
				valor=ph->dias*85;
			}else{
				valor=(ph->acompanhante+1)*ph->dias*45;
			}
			printf("\nValor a ser pago: %d", valor);
		}
	}
	system("pause");
}//check out