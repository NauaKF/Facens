#include <stdlib.h>
#include <stdio.h>
#include <locale.h>

int main()
{
setlocale(LC_ALL, "portuguese");

int ano;

printf("Digite o ano desejado: ");
scanf("%i", &ano);
fflush(stdin);

if(ano%400 == 0 || ano%4 == 0 && ano%100 != 0)
	printf("Ano Bissexto\n\n");
	
else
	printf("Ano Não-Bissexto\n\n");
	
system("pause");
return 0;
}
