#include <stdio.h>
#include <stdlib.h>
#include <locale.h>
#include <math.h>

int main()
{
setlocale(LC_ALL,"portuguese");

float num,raiz,potencia; 

printf("Digite o número desejado: ");
scanf("%f", &num);

potencia = pow(num, 8);
raiz = sqrt(num);

printf("\nA oitava potência de %.2f = %.2f", num, potencia);
printf("\nA raiz quadrada de %.2f = %.2f\n\n", num, raiz);

system("pause");
return 0;	
}
