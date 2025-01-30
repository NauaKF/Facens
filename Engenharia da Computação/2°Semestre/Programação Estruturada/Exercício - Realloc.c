#include <stdio.h>
#include <stdlib.h>
#include <locale.h>

void leitura(int *p);
void aloca(int **p, int tam);
void mostra(int *p, int tam);

int main()
{
	setlocale(LC_ALL, "portuguese");	
	
char op;
int *ptr=NULL, cont=0;

do{
	aloca(&ptr, cont+1);
	leitura(ptr+cont);
	cont++; //contador
	printf("Deseja continuar? <S/N>: ");
	scanf("%c", &op);
	fflush(stdin);
	
} while(op !='n' && op !='N');

	mostra(ptr, cont);
	
return 0;
}

void aloca(int **p, int tam)
{
	if((*p = (int*)realloc(*p, tam*sizeof(int))) == NULL)
	{
		printf("Erro na alocação.");
		exit(1);
	}
}

void leitura(int *p)
{
	printf("\nEndereço: %u - Número: ", p);
	scanf("%i", p);
	fflush(stdin);
}

void mostra(int *p, int tam)
{
int i;

	printf("\n");
	
	for(i=0; i<tam; i++, p++)
	{
		printf("Endereço: %u - Número %i\n", p, *p);
	}
}
