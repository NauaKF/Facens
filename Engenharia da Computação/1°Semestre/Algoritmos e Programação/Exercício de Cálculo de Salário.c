#include <stdio.h>
#include <stdlib.h>
#include <locale.h>

int main()
{
setlocale(LC_ALL,"portuguese");

float horas_trab, extra, salario;

printf("Digite o total de horas trabalhadas no mês: ");
scanf("%f", &horas_trab);
fflush(stdin);

printf("Digite agora o total de horas extras trabalhadas no mês: ");
scanf("%f", &extra);
fflush(stdin);

salario = horas_trab*10 + extra*15;

printf("\nO seu salário desse mês = R$%.2f\n\n", salario);

system("pause");
return 0;
}
