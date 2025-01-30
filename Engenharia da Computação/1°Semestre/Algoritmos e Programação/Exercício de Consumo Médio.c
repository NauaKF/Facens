#include <stdio.h>
#include <stdlib.h>
#include <locale.h>

int main()
{
setlocale(LC_ALL,"portuguese");

float distancia, combustivel, consumo;

printf("\nDigite a distância percorrida com o veículo em km/h: ");
scanf("%f", &distancia);
fflush(stdin);
printf("\nDigite agora o total de combustível gasto com o veículo em litros (L): ");
scanf("%f", &combustivel);
fflush(stdin);

consumo = distancia/combustivel;

printf("\nO consumo médio feito pelo veículo = %.2f Km/L\n", consumo);

system("pause");
return 0;	
}
