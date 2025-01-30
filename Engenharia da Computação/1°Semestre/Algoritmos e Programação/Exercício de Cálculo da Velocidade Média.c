#include <stdio.h>
#include <stdlib.h>
#include <locale.h>

int main()
{
setlocale(LC_ALL,"portuguese");

float vm, distancia, minutos, tempo;

printf("Digite a distância percorrida em km: ");
scanf("%f", &distancia);
fflush(stdin);

printf("Digite agora o tempo percorrido em minutos: ");
scanf("%f", &minutos);
fflush(stdin);

tempo = minutos/60;
vm = distancia/tempo;

printf("\nA velocidade média do veículo = %.2f km/h\n\n", vm);

system("pause");
return 0;
}
