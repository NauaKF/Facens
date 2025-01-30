#include <stdio.h>
#include <stdlib.h>

float converte(float temp); //Protótipo

main()
{
float f,c;

printf("Digite a temperatura em Fahrenheit: ");
scanf("%f", &f);
fflush(stdin);

c = converte(f); //Chamada

printf("\nA temperatura = %.2f\xF8 C\n\n", c);
	
system("pause");
} //main

float converte(float temp) //Definição
{
float celsius;	
celsius = (temp-32)/1.8;
return celsius;
} //converte
