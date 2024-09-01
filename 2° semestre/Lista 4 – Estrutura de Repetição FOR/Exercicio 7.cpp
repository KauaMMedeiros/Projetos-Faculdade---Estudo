#include<stdio.h>
int main(){
	int i;
	float mt, ml, mf;

	for(i=1; i<=30; i++){
		printf("\nAluno %d", i);
		
		printf("\nMedia teoria: ");
		scanf("%f", &mt);
		printf("\nMedia laboratorio: ");
		scanf("%f", &ml);
		
		mf = (mt * 0.6) + (ml * 0.4);
		
		printf("\nMedia final: %.1f", mf);
		
		if(mf>=7){
			printf("\nFoi bem.");
		}
		else if(mf >= 5 && mf < 7
		){
			printf("\nRazoavel.");
		}
		else{
			printf("\nFoi mal.");
		}
	}
	return 0;
}