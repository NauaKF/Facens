#include <stdio.h>
#include <stdlib.h>
#include <locale.h>

void aloca(float **p, int tam);
void recebe(float *p, int tam);
void imprime(float *p, int tam);
void altera(float *p, int tam);

int main()
{
	setlocale(LC_ALL, "portuguese");
	
float *ptr = NULL;

	aloca(&ptr, 10); //Chamada por referência - Endereço de ptr
	recebe(ptr, 10);
	imprime(ptr, 10);
	altera(ptr, 10);
	imprime(ptr, 10);

return 0;
}

void aloca(float **p, int tam)
{
	if((*p = (float*)realloc(*p, tam*sizeof(float))) == NULL)
	{
		printf("Erro na alocação");
		exit(1);
	}
	printf("Função Aloca - Endereço: %u", *p);
}

void recebe(float *p, int tam)
{
int i;
	
	printf("\nFunção Recebe - Digite os valores \n");
	printf("\n");
	
	for(i=0; i<tam;  i++)
	{
		printf("Emdereço: %u - Valor = ", p+i);
		scanf("%f", p+i);
		fflush(stdin);
	}
}

void imprime(float *p, int tam)
{
int i;

	printf("\nFunção Imprime - Mostra os valores \n");
	
	for(i=0; i<tam; i++)
	{
		printf("Endereço: %u - Valor = %.2f\n", p+i, *(p+i));
	}
}

void altera(float *p, int tam)
{
int i;

	for(i=0; i<tam; i++)
	{
		*(p+i) += 30;
	}
}
