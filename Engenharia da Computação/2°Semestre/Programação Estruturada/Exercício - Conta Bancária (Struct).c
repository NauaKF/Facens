#include <stdio.h>
#include <stdlib.h>
#include <locale.h>

struct cliente
{
	char nome[30];
	int conta;
	float saldo;
};

struct cliente cadastro();
struct cliente movimento(struct cliente x, int op);

int main()
{
	setlocale(LC_ALL, "portuguese");
	
struct cliente cli[10];  //struct cliente seria como o tipo básico e o "cli" seria o nome da variável.
int op, cont = 0, num_conta, i, achou;
	
	do
	{
		system("cls");
		printf("[1]Cadastro\n[2]Depósito\n[3]Retirada\n[4]Fim\n");
		scanf("%i", &op);
		fflush(stdin);
		
		switch(op)
		{
			case 1:
				if(cont < 10)
				{
					cli[cont] = cadastro();
					cont++;	
				}
				else
				{
					printf("\nCadastro Lotado!\n");
				}
			break;
			
			case 2:
			case 3:
				printf("\nDigite o número da conta: ");
				scanf("%i", &num_conta);
				fflush(stdin);
				
				achou = 0;
				
				for(i=0; i<cont; i++)
				{
					if(cli[i].conta == num_conta)
					{
						cli[i] = movimento(cli[i], op); //função movimento
						achou = 1;
					}
				}
				if(achou == 0)
				{
					printf("\nCliente não encontrado!\n\n");
					system("pause");
				}
		}
		
		
	}while(op != 4);
	
return 0;
}

struct cliente cadastro()
{
struct cliente aux;
static int n_conta = 1000;  
	
	printf("\nNome: ");
	gets(aux.nome);
	fflush(stdin);
	
	aux.conta = n_conta;
	aux.saldo = 0;
	n_conta++;
	
	printf("Número da Conta: %i\n", aux.conta);
	system("pause");

return aux;
}

struct cliente movimento(struct cliente x, int op)
{
float valor;

	printf("\nNome: %s\nSaldo: %.2f\n", x.nome, x.saldo);
	
	printf("Digite o valor a ser depositado/retirado: ");
	scanf("%f", &valor);
	fflush(stdin);
	
	if(op == 2)
	{
		x.saldo += valor;
	}
	else
	{
		if(valor <= x.saldo)
		{
			x.saldo -= valor;
		}
		else
		{
			printf("\nSaldo insuficiente!");
		}
	}
	
	printf("\nSaldo atualizado: %.2f\n", x.saldo);
	system("pause");
	
return x;
}
