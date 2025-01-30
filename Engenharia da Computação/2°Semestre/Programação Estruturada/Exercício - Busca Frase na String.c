#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include <locale.h>

void maiuscula(char *p, int tam);
void busca_string(char *pf, char *pstr, int *ppos, int *pq);
void mostra(char *pstr, int *ppos, int qtde);

int main()
{
	setlocale(LC_ALL, "portuguese");
	
char string[80], sub[80];
int pos[80], qtde = 0;
	
	printf("Digite uma frase: ");
	gets(string);
	maiuscula(string, strlen(string));
	fflush(stdin);
	
	
	printf("Digite uma string pra procurar na frase: ");
	gets(sub);
	maiuscula(sub, strlen(sub));
	fflush(stdin);
	
	busca_string(string, sub, pos, &qtde);
	
	if(qtde == 0)
	{
		printf("\nNão há ocorrência da string %s na frase.", sub);
	}
	else
	{
		mostra(sub, pos, qtde);
	}
	
	return 0;
}

void maiuscula(char *p, int tam)
{
int i;
	for(i=0; i<tam; i++)
	{
		if(*(p+i) >= 'a' && *(p+i) <= 'z')
		{
			*(p+i) -= 32;	
		}	
	}	
}
void busca_string(char *pf, char *pstr, int *ppos, int *pq)
{
int i, tamf, tams, j, cont, k;

	tamf = strlen(pf);
	tams = strlen(pstr);
	
	for(i=0; i<tamf; i++, pf++)
	{
		cont = 0;
			for(j=0; j<tams; j++)
			{
				if(*(pf+j) == *(pstr + j))
				{
					cont ++;
						if(cont == tams)
						{
							(*pq)++;  //qtde str
								for(k=0; k<tams; k++, ppos++)
								{
									*ppos = i+k;
								}
						}
				}	
				else
				{
					j = tams;	
				}
			}
	}
}

void mostra(char *pstr, int *ppos, int qtde)
{
int i, tam;

	tam = strlen(pstr);
	
	printf("\nA string %s aparece %i vez(es) na frase nas posições: ", pstr, qtde);
	
	for(i=0; i<tam; i++, ppos++)
	{
		printf("\n%i\t", *ppos);
	}
}
