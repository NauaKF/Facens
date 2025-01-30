#include <stdio.h>
#include <stdlib.h>
#include <locale.h>

void aloca(int **p, int tam);
void leitura(int *p, int tam);
void imprime_invertido(int *p, int tam);

int main()
{
	setlocale(LC_ALL, "portuguese");
	
int *ptr = NULL, qtde;

	printf("Recebe números e imprime na ordem inversa!");
	
	printf("\nQuantos números: ");
	scanf("%i", &qtde);
	fflush(stdin);
	
	printf("\n");
	
	aloca(&ptr, qtde);
	leitura(ptr, qtde);
	imprime_invertido(ptr, qtde);
	
return 0;
}

void aloca(int **p, int tam)
{
if((*p = (int*)realloc(*p, tam*sizeof(int))) == NULL)
{
	exit(1);
}
}

void leitura(int *p, int tam)
{
int i;

	for(i=0; i<tam; i++, p++)
	{
		printf("Endereço: %u - Número: ", p);
		scanf("%i", p);
		fflush(stdin);
	}
}

void imprime_invertido(int *p, int tam)
{
int i;

p = p+tam-1; //posicionei o ponteiro no último número

	for(i=0; i<tam; i++, p--)
		printf("\nEndereço: %u - Número: %i", p, *p);

	printf("\n\n");
	
system("pause");
}
