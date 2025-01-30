#include <stdio.h>
#include <stdlib.h>
#include <locale.h>
#include <math.h>
#define PI 3.14

int main()
{
setlocale(LC_ALL,"portuguese");

float c, raio;

printf("Digite o raio da circunferência desejada: ");
scanf("%f", &raio);
fflush(stdin);

c = 2*PI*raio;

printf("\nO valor da circunferência = %.2f\n", c);

system("pause");
return 0;	
}
