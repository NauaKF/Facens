#include <stdio.h>
#include <stdlib.h>
#include <locale.h>

float media(float a, float b); //Protótipo

main()
{
setlocale(LC_ALL, "portuguese");

float n1,n2,m;

printf("Digite dois valores: ");
scanf("%f %f", &n1, &n2);
fflush(stdin);

m = media(n1,n2); //Chamada

printf("\nA média final = %.2f\n\n", m);

system("pause");
} //main

float media(float a, float b) //Definição
{
return((a+b)/2);
} //média

