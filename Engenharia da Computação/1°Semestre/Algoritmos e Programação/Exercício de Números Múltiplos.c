#include <stdio.h>
#include <stdlib.h>
#include <locale.h>

int main()
{

int num1, num2;
num1=num2=0;

printf("\nDigite o primeiro numero: ");
scanf("%i", &num1);

printf("\nDigite o segundo numero: ");
scanf("%i", &num2);

if((num1%num2) == 0)
printf("\nEsses numeros sao multiplos!\n");

else
printf("\nEsses numeros nao sao multiplos!\n");

system("pause");
return 0;

} //chaves do int main

