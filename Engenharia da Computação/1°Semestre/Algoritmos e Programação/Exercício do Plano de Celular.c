#include <stdlib.h>
#include <stdio.h>
#include <locale.h>

int main()
{
setlocale(LC_ALL, "portuguese");

float valor_final, minutos;

printf("Digite os minutos gastos no mês: ");
scanf("%f", &minutos);
fflush(stdin);

if (minutos <= 50)
	printf("O valor a ser pagado esse mês = R$50,00\n\n");
	
else
{
minutos = minutos - 50;
valor_final = minutos*1.50 + 50;

printf("O valor a ser pago esse mês = R$%.2f\n\n", valor_final);
}

system("pause");
return 0;	
}
