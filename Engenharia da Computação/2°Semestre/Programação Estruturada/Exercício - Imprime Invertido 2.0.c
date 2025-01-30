#include <stdio.h>
#include <stdlib.h>
#include <locale.h>

void aloca(int **p, int tam);
void leitura(int *p);
void imprime_invertido(int *p, int tam);

int main()
{
	setlocale(LC_ALL, "portuguese");

char op;
int *ptr = NULL, cont=0;

printf("Recebe números e imprime na ordem inversa!");

do{
	aloca(&ptr, cont+1);
	leitura(ptr+cont);
	cont++;
	
	printf("\nDeseja continuar? <S/N>: ");
	scanf("%c", &op);
	fflush(stdin);
	
}while(op != 'n' && op != 'N');

	imprime_invertido(ptr+cont-1, cont);
}

void aloca(int **p, int tam)
{
if((*p=(int*)realloc(*p,tam*sizeof(int))) == NULL)
exit(1);
}

void leitura(int *p)
{
	printf("\nNúmero: ");
	scanf("%i", p);
	fflush(stdin);
}

void imprime_invertido(int *p, int tam)
{
int i;

	for(i=0; i<tam; i++, p--)	
	printf("\nNúmero: %i", *p);
	
	printf("\n\n");
	
system("pause");
}
