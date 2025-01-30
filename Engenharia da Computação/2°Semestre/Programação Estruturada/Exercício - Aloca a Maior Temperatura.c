#include <stdio.h>
#include <stdlib.h>
#include <locale.h>

void aloca(float **p, int tam);
void leitura(float *p, int tam);
void maior_temp(float *p, int tam, float *pm, int *pd);

int main()
{
	setlocale(LC_ALL, "portuguese");
	
float *ptr = NULL, maior;
int cont = 0, dia;
char op;
	
	printf("Recebe a temperatura e mostra a maior e o dia em que ocorreu!");
do{
	aloca(&ptr, cont+1);
	leitura(ptr, cont);
	maior_temp(ptr, cont, &maior, &dia);
	
	printf("\nA maior temperatura = %.2f - Dia = %i", maior, dia);
	
	cont++;
	
	printf("\nDeseja continuar? <S/N>: ");
	scanf("%c", &op);
	fflush(stdin);
} while(op != 'n' && op != 'N');

system("pause");
}

void aloca(float **p, int tam)
{
	if((*p = (float*)realloc(*p,tam*sizeof(float))) == NULL)
	exit(1);
}

void leitura(float *p, int tam)
{
	printf("\nTemperatura: ");
	scanf("%f", p+tam);
	fflush(stdin);
}

void maior_temp(float *p, int tam, float *pm, int *pd)
{
	
if(tam==0)  //primeira vez
{
	*pm = *p; //maior recebe a temperatura do 1°Dia
	*pd = tam+1; //dia = 1
}

else
	if(*(p+tam) > *pm)
	{
		*pm = *(p+tam);  //maior recebe a nova temperatura
		*pd = tam+1; //trocou o dia
	}
}
