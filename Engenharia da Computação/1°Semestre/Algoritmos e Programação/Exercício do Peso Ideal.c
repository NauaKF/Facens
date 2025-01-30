#include <stdio.h>
#include <stdlib.h>
#include <locale.h>

int main()
{
setlocale(LC_ALL, "portuguese");

char sexo;
float altura, peso;
int idade;

printf("Este é um programa, que calcula o peso ideal de uma pessoa!\n");
printf("--------------------------------------------\n");
printf("Primeiramente, digite sua idade: ");	
scanf("%i", &idade);
fflush(stdin);

if (idade < 12 || idade > 65)
	{
	printf("\nO índice não é preciso para pessoas dessa idade!\n\n");
	}

else 
{
	printf("\nMe informe sua altura: ");
	scanf("%f", &altura);
	fflush(stdin);
	
	printf("\nAgora, me informe seu peso: ");
	scanf("%f", &peso);
	fflush(stdin);
	
	printf("\nE por último, indique o seu sexo - [F]eminino ou [M]asculino: ");
	scanf("%c", &sexo);
	fflush(stdin);
	
	if (sexo == 'F' || sexo == 'f')
		{
		peso = 62.1 * altura - 48.7;
		printf("--------------------------------------------\n");
		printf("\nO peso ideal = %.2f KG\n\n", peso);
		}
	else if (sexo == 'M' || sexo == 'm')
		{
		peso = 72.7 * altura - 62;
		printf("--------------------------------------------\n");
		printf("O peso ideal = %.2f KG\n\n", peso);
		}	
	else 
		printf("A letra indicada não é valida!\n\n");
} 
system("pause");
return 0;
}
