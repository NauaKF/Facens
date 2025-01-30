#include <stdio.h>
#include <stdlib.h> 
#include <locale.h>

int main()
{
setlocale(LC_ALL, "portuguese");

float valorReal, valorTaxaDolar, valorDolar;

printf("Qual o valor do produto que você deseja converter? ");
scanf("%f", &valorReal);

printf("\nQual o valor da taxa de conversão do dólar no dia de hoje? ");
scanf("%f", &valorTaxaDolar);

valorDolar = valorReal / valorTaxaDolar;

printf("----------------------------------------------------------------");
printf("\nO valor da mercadoria em reais é de R$ %.2f, já em em dólar é de US$ %.2f!\n\n", valorReal, valorDolar);

system("pause");
return 0;
}
