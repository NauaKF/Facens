#include <stdio.h>
#include <stdlib.h>
#include <locale.h>

float calculaPotencia(float b, float e); //Protótipo

int main()
{
setlocale(LC_ALL, "portuguese");

float base, expoente, potencia;

printf("Digite o valor da base: ");
scanf("%f", &base);
fflush(stdin);

printf("Digite o valor do expoente: ");
scanf("%f", &expoente);
fflush(stdin);

potencia = calculaPotencia(base, expoente);

printf("\nPotência calculada: %.2f", potencia);
	
return 0;
}
float calculaPotencia(float b, float e) //Definição
{
int i;
float resultado=1;
for(i=1; i<=e; i++)
{
	resultado*=b;	
}
	return resultado;	
}
