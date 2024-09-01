#include<stdio.h>
#include<math.h>
int main(){
	float pot, raiz;
	int nmr;
	
	printf("\nDigite um número: ");
	scanf("%d", &nmr);
	
	pot = pow(nmr,8);
	raiz = sqrt(nmr);
	
	printf("\nA raiz quadrada eh %.2f", raiz);
	printf("\nO numero elevado a 8 eh %.2f", pot);
	
	
	return 0;
}