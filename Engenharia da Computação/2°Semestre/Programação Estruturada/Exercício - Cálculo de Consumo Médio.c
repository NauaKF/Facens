#include <stdio.h>
#include <stdlib.h>
#include <locale.h>

float calculaConsumo(float km, float l); //Protótipo

int main()
{
setlocale(LC_ALL, "portuguese");

float distancia, volume, consumo;

printf("Digite a distância em (km) e o volume do combustível em (litros): ");
scanf("%f %f", &distancia, &volume);
fflush(stdin);

consumo = calculaConsumo(distancia, volume); //Chamada

printf("\nConsumo médio = %.2f", consumo);
	
return 0;
}
float calculaConsumo(float km, float l) //Definição
{
	return (km/l);
} 
