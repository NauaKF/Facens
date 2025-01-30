#include <stdio.h>
#include <stdlib.h>
#include <locale.h>

int main()
{
setlocale(LC_ALL, "Portuguese");	
	
	float m[40][5];
	int i=0 ,j;
	char resp;
	
	do
	{
		printf("\nAluno %i", i+1);
		
		for(j=0; j<4; j++) //notas
		{
			printf("\nDigite a nota %i: ", j+1);
			scanf("%f", &m[i][j]);
		}
		
	printf("\nDeseja continuar?\n[S]im\n[N]ão\n");
	scanf(" %c", &resp); //espaço antes do %c para não receber o caractere errado.
	
	} while(toupper(resp) == 'S' && i<40);

system("pause");
return 0;
}
