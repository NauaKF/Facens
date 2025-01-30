#include <stdio.h>
#include <stdlib.h>
#include <locale.h>

void aloca(float **p, int tam);
void leitura(float *p);
void mostra(float *p, int tam);
void media(float *p, int tam, float **pm, int *qm, float **pM, int *qM);

int main()
{
	setlocale(LC_ALL, "portuguese");
	
float *ptr = NULL, *pmenor = NULL, *pmaior = NULL;
int cont = 0, qmenor = 0, qmaior = 0;
char op;

do
{
	aloca(&ptr, cont+1);
	leitura(ptr+cont);
	cont++;
	
	printf("Deseja continuar? <S/N> : ");
	scanf("%c", &op);
	fflush(stdin);
	
}while(op != 'n' && op != 'N');

	printf("\nNúmeros digitados: ");
	mostra(ptr, cont);
	
	media(ptr, cont, &pmenor, &qmenor, &pmaior, &qmaior);
	
	printf("\nMenores que a média: ");
	mostra(pmenor, qmenor);
	
	printf("\n\nMaiores que a média: ");
	mostra(pmaior, qmaior);
	
	return 0;
}

void aloca(float **p, int tam)
{
	if((*p=(float *)realloc(*p,tam*sizeof(float))) == NULL)
	{
		exit(1);
	}
}

void leitura(float *p)
{
	printf("\nNúmero: ");
	scanf("%f", p);
	fflush(stdin);
} 

void mostra(float *p, int tam)
{
int i;

	for(i=0; i<tam; i++, p++)
	{
		printf("\n%.2f", *p);
	}
}

void media(float *p, int tam, float **pm, int *qm, float **pM, int *qM)
{
int i;
float med = 0;

	for(i=0; i<tam; i++)
	{
		med += *(p+i);
	}
	
	med /= tam;
	printf("\n\nMédia = %.2f\n", med);
	
	for(i=0; i<tam; i++)
	{
		if(*(p+i) < med) //menores que a média
		{
			aloca(pm, *qm+1);
			*(*pm + *qm) = *(p+i);
			(*qm)++;	
		}
		else            //maiores que a média
		{
			aloca(pM, *qM+1);
			*(*pM + *qM) = *(p+i);
			(*qM)++;
		}
	}
}
