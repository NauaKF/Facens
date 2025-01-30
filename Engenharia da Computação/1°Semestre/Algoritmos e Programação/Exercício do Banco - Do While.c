#include <stdio.h>
#include <stdlib.h>
#include <locale.h>

int main()
{
setlocale(LC_ALL, "portuguese");

int op;
float valor, saldo;

printf("Este é um programa que faz a função de um Banco Real!");
printf("\n\nDigite o saldo inicial (em reais) da sua conta: ");
scanf("%f", &saldo);
fflush(stdin);	
	
do
{
	system("cls");
	printf("MENU:\n\n[1] DEPOSITAR\n[2] RETIRAR\n[3] SAIR\n\nOPÇÃO: ");
	scanf("%i", &op);
	fflush(stdin);
	
	if (op == 1 || op == 2)
	{
		printf("Digite o valor que deseja (em reais): ");
		scanf ("%f", &valor);
		fflush(stdin);
	}
switch(op)
{
	case 1: saldo += valor;
			printf("O saldo atual = %.2f R$\n", saldo);
			break;
			
	case 2: saldo -= valor;
			printf("O saldo atual = %.2f R$\n", saldo);
			break;		
	
	case 3: printf("O banco agradece, volte sempre!\n");
			break;
			
	default: printf("Opção Inválida!\n");		
}
system("pause");

} while (op != 3);

if (saldo == 0)
	printf("Sua conta está zerada!\n");
	
else if (saldo < 0)
	printf("Sua conta está estourada!\n");
	
else 
	printf("Sua conta é preferencial!\n");
			
system("pause");
return 0;	
}
