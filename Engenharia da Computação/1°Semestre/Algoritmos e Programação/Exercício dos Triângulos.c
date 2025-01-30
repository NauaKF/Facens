#include <stdio.h>
#include <stdlib.h>
#include <locale.h>
#include <math.h>

int main()
{
setlocale(LC_ALL, "portuguese");

int lado1, lado2, lado3;

printf("Este é um programa que recebe os valores e indica o tipo de triângulo!\n");

printf("Digite o lado 1 do triângulo: \n");
scanf("%i", &lado1);

printf("Digite o lado 2 do triângulo: \n");
scanf("%i", &lado2);

printf("E por último, digite o lado 3 do triângulo: \n");
scanf("%i", &lado3);

if (lado1 == lado2 && lado2 == lado3)
	printf("Este é um triângulo equilátero!\n");
	
else if (lado1 == lado2 || lado2 == lado3)	
	printf("Este é um triângulo isósceles!\n");
	
else 
	printf("Este é um triângulo escaleno!\n");
	
system("pause");
return 0;
	
}
