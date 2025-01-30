#include <stdio.h>
#include <stdlib.h>
#include <locale.h>

int main()
{
setlocale(LC_ALL, "portuguese");

int i; //variável de controle do for
float num, soma=0; //soma = 0 --> variável contadora (tem que ser do mesmo tipo do num) e usa o 0 porque tem que ser inicializada.

for(i=1 ; i<=5 ; i++)
	{
	printf("\nDigite o %i número: ",i);
	scanf("%f", &num);
	fflush(stdin);
	soma = soma + num; //soma+=num 
	}	
	printf("\n   Soma = %.2f\n\n", soma);
	
system("pause");
return 0;
}
