#include <stdio.h>
#include <stdlib.h>
#include <locale.h>

int main()
{
setlocale(LC_ALL,"portuguese");

float p1,p2,t1,t2,nota_f,media_p,media_t;

printf("Digite a nota 1 da prova teórica: ");
scanf("%f", &t1);
fflush(stdin);
printf("Digite a nota 2 da prova teórica: ");
scanf("%f", &t2);
fflush(stdin);
printf("Digite a nota 1 da prova prática: ");
scanf("%f", &p1);
fflush(stdin);
printf("Digite a nota 2 da prova prática: ");
scanf("%f", &p2);
fflush(stdin);

media_t = (t1+t2)/2;
media_p = (p1+p2)/2;

nota_f = media_t*0.6 + media_p*0.4;

printf("\nA nota final da matéria de Algoritmos = %.2f\n\n", nota_f);

system("pause");
return 0;
}
