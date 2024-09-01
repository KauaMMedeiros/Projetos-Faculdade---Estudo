#include <stdio.h>
main ( )
{
int num[5], *p_num, d;

	p_num = num; // inicialização do ponteiro	
	for(d = 0; d<5; d++)
	{
		printf(" \n %i elemento:", d+1);
		scanf("%d", p_num ++);
	}
	
	p_num = num; // posiciona o ponteiro no endereço inicial
	printf ("\nImprime os elementos da matriz");
	
	for (d = 0; d<5; d++)
		printf ("\n num[%i] = %i", d, * (p_num ++));
	
	return 0;
}//main