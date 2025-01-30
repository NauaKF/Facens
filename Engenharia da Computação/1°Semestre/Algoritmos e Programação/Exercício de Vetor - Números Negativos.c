#include <stdio.h>
#include <stdlib.h>
#include <locale.h>

int main()
{
setlocale(LC_ALL, "portuguese");

int numero[12],x, negativo=0;

for (x=0; x<12; x++)
	{
	printf("Digite o número da posição %i: ", x);
	scanf("%i", &numero[x]);
	fflush(stdin);	
	}	
	
for (x=0; x<12; x++)
	if(numero[x] < 0)	
	negativo++;

printf("\nA quantidade de números negativos = %i\n\n", negativo);
	
system("pause");	
return 0;
}
