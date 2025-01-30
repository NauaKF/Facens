#include <stdio.h>
#include <stdlib.h>
#include <locale.h>

struct cliente
{
	char nome[30];
	int conta;
	float saldo;
};

void cadastro(struct cliente *p);
int busca(struct cliente *p, int tam);
void movimento(struct cliente *p, int op);

int main()
{
	setlocale(LC_ALL, "portuguese");
	
struct cliente cli[10], *pcli;  //struct cliente seria como o tipo básico e o "cli" seria o nome da variável.
int op, cont = 0, pos;

	pcli = cli;
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
					cadastro(pcli+cont);
					cont++;	
				}
				else
				{
					printf("\nCadastro Lotado!\n");
				}
			break;
			
			case 2:
			case 3: pos = busca(pcli, cont);
				if(pos != -1) //achou
				movimento(pcli+pos, op);
				
				else
					printf("\nConta inválida!\n");
					system("pause");	
						break;
		}
	}while(op != 4);
return 0;
}

void cadastro(struct cliente *p)
{
static int n_conta = 1000;  
	
	printf("\nNome: ");
	gets(p->nome);
	fflush(stdin);
	
	p->conta = n_conta;
	p->saldo = 0;
	n_conta++;
	
	printf("Número da Conta: %i\n", p->conta);
	system("pause");
}

int busca(struct cliente *p, int tam)
{
int num_conta, i;

	printf("\nDigite o número da conta: ");
		scanf("%i", &num_conta);
		fflush(stdin);
			
		for(i=0; i<tam; i++)
			if ((p+i)->conta == num_conta)
				return i;
				
		return -1;  //não achou
}

void movimento(struct cliente *p, int op)
{
float valor;

	printf("\nNome: %s\nSaldo: %.2f\n", p->nome, p->saldo);
	
	printf("Digite o valor a ser depositado/retirado: ");
	scanf("%f", &valor);
	fflush(stdin);
	
	if(op == 2)
	{
		p->saldo += valor;
	}
	else
	{
		if(valor <= p->saldo)
		{
			p->saldo -= valor;
		}
		else
		{
			printf("\nSaldo insuficiente!");
		}
	}
	
	printf("\nSaldo atualizado: %.2f\n", p->saldo);
	system("pause");
}
