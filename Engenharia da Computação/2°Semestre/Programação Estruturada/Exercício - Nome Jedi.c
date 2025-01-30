#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include <locale.h>

void nome_jedi(char *pn, char *pm, char *pc, char *pj);
void arruma(char *p, int tam);
void composto_jedi(char *pj, char *pc);

int main()
{
	setlocale(LC_ALL, "portuguese");
	
char nome[80], mae[20], cidade[20], jedi[20], composto[20];

	printf("Digite o seu nome completo: ");
	gets(nome);
	fflush(stdin);
	
	printf("\nDigite o nome da sua mãe: ");
	gets(mae);
	fflush(stdin);
	
	printf("\nDigite a cidade onde você nasceu: ");
	gets(cidade);
	fflush(stdin);
	
	nome_jedi(nome, mae, cidade, jedi);
	arruma(jedi, strlen(jedi));
	composto_jedi(jedi, composto);
	arruma(composto, strlen(composto));
	
	printf("\nNome Jedi: %s", jedi);
	printf("\nNome Composto: %s", composto);
	
	return 0;
}

void nome_jedi(char *pn, char *pm, char *pc, char *pj)
{
int i, j, tamn;

	tamn = strlen(pn);
	
	//3 primeiras letras do nome
	for(i=0; i<3; i++, pj++)
	{
		*pj = *(pn+i);
	}
	
	//2 primeiras letras do sobrenome
	for(i=tamn; i>=0; i--)
	{
		if(*(pn+1) == ' ')
		{
			for(j=1; j<3; j++, pj++)
			{
				*pj = *(pn+i+j);
			}
			i = -1;
		}
	}
	*pj = ' ';
	pj++;
	
	//2 primeiras letras do nome da mãe
	for(i=0; i<2; i++, pj++)
	{
		*pj = *(pm+i);
	}
	
	//3 primeiras letras da cidade onde nasceu
	for(i=0; i<3; i++, pj++)
	{
		*pj = *(pc+i);
	}
	*pj = '\0';
}

void arruma(char *p, int tam)
{
int i;
	
	//transformar todos em minuscula
	for(i=0; i<tam; i++)
	{
		if(*(p+i) >= 'A' && *(p+i) <= 'Z')
		{
			*(p+i) += 32;
			
		}
	}
	*p-=32; //deixando a primeira letra maiuscula
	
	for(i=0; i<tam; i++, p++)
	{
		if(*p == ' ' || *p == '-')
		{
			*(p+1) -= 32;  //colocando a próxima letra em maiuscula
		}
	}
}

void composto_jedi(char *pj, char *pc)
{
int i, tamj;

	tamj = strlen(pj);
	
	//3 primeiras letras do nome Jedi
	for(i=0; i<3; i++, pc++)
	{
		*pc = *(pj+i);
	}
	*pc = '-';
	pc++;
	
	//3 últimas letras do sobrenome Jedi
	pj += tamj - 3;
	
	for(i=0; i<3; i++, pc++, pj++)
	{
		*pc = *pj;
	}
	*pc = '\0';
}
