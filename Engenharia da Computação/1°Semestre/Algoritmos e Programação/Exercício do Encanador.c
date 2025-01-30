#include <stdio.h>
#include <stdlib.h>
#include <locale.h>
#include <math.h>

int main()
{
setlocale(LC_ALL,"portuguese");

float dias_trab, valor, s1, imposto;

printf("Digite o total de dias trabalhados: ");
scanf("%f", &dias_trab);
fflush(stdin);

s1 = dias_trab*35;
imposto = (s1/100)*8;
valor = s1-imposto;

printf("\nO valor líquido a ser pago = R$%.2f\n\n", valor);

system("pause");
return 0;

}

