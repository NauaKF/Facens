#include <stdio.h>
#include <stdlib.h>
#include <locale.h>

int par(int n); //Protótipo

main()
{
setlocale(LC_ALL, "portuguese");

int num, verifica;

printf("Digite um numero: ");	
scanf("%i", &num);
fflush(stdin);

verifica = par(num);

if(verifica == 1)
printf("\nO número %i é par!\n\n", num);

else
printf("\nO número %i NÃO é par!\n\n", num);

system("pause");
} //main
int par(int n)
{
if(n%2 == 0)
	return 1;

else
	return 0;
}
