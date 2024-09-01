#include<stdio.h>

main()

{
	printf("\nTabuada");
	for(int i=0;i<10;i++)
	{
		printf("\nTabuada do %d", i+1);
		for(int j=0;j<10;j++){
			printf("\n%d * %d = %d", i, j+1, i*j);
		}
	}
}