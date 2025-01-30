#include <stdio.h>
#include <stdlib.h>
#include <locale.h>

main()
{
setlocale(LC_ALL, "portuguese");

int num[5], i;	
	
	printf("Leitura de um vetor:");
	printf("\n\n");
	
for(i=0; i<5; i++)
	{
		printf("%i°Elemento: ", i+1);
		scanf("%i", &num[i]);
		fflush(stdin);
	}
	
	printf("\n\nImprimir o vetor:");

for(i=0; i<5; i++)
	printf("\nnum[%i] = %i", i, num[i]);
	printf("\n\n\n");
	
	system("pause");		
} //main
