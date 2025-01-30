#include <stdio.h>
#include <stdlib.h>
#include <locale.h>

main()
{
setlocale(LC_ALL, "portuguese");

int num[5], i, *p_num;

	p_num = num; //Inicialização do Ponteiro
	printf("Leitura de um vetor");
	
for(i=10; i<15; i++, p_num++)
	{
		printf("\nElemento: ");
		scanf("%i", p_num);
		fflush(stdin);
	}
	
	p_num = num; //Posiciona o ponteiro no endereço inicial
	printf("Impressão do vetor");
	printf("\n");

for(i=0; i<5; i++, p_num++)
	printf("\nnum[%i] = %i", i, *p_num);
	printf("\n\n\n");
	
	system("pause");
}
