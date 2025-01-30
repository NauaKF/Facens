#include <stdio.h>
#include <stdlib.h>
#include <locale.h>

main()
{
float f, c;

printf("Digite a temperatura em Fahrenheit: ");
scanf("%f", &f);
fflush(stdin);

c = (f-32)/1.8;

printf("\nA temperatura = %.2f\xF8 C\n\n", c); //   \xF8 = bolinha do graus celsius.

system("pause");
} //main
