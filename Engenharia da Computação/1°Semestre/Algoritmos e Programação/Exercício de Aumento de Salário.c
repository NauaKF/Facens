#include <stdio.h>
#include <stdlib.h>
#include <locale.h>

int main()
{
setlocale(LC_ALL,"portuguese");	
	
float salario, aumento;

printf("Digite o salário para o cálculo do aumento: ");
scanf("%f", &salario);
fflush(stdin);

if (salario <= 1000)
{
	aumento = salario*5/100;
	salario = salario + aumento;
	printf("O valor do salário com o aumento = R$%.2f\n\n", salario);
}
else
{
	aumento = salario*7/100;
	salario = salario + aumento;
	printf("O valor do salário com o aumento = R$%.2f\n\n", salario);
}

system("pause");
return 0;
}
