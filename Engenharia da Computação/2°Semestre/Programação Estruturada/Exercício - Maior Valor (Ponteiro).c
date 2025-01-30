#include <stdio.h>
#include <stdlib.h>
#include <locale.h>

void leitura(float *p, int q);
int busca_maior(float *p, int q);
void imprime(float *p, int pos);

int main()
{
	setlocale(LC_ALL, "portuguese");

int qtde, pos;
float vet[10];

do{
	printf("Quantidade de elementos - máx.10: ");
	scanf("%i", &qtde);
	fflush(stdin);
  } while(qtde < 1 || qtde > 10);

	printf ("\n");
	
	leitura(vet, qtde);
	pos = busca_maior(vet, qtde);
	imprime(vet, pos);
} //main

void leitura(float *p, int q)
{
int i;
for(i=0; i<q; i++, p++)
	{
		printf("Vet[%i] = ", i);
		scanf("%f", p);
		fflush(stdin);
	}
} 

int busca_maior(float *p, int q)
{
int i, pos;
float maior = *p;  //conteúdo do primeiro elemento

	pos = 0;     //posição do primeiro elemento
	p++;        //ponteiro no segundo elemento
	
for(i=1; i<q; i++, p++)
	if(*p > maior)
	{
		maior = *p;
		pos = i;
	}
return pos;
}

void imprime(float *p, int pos)
{
	printf("\nMaior Valor = %.2f\nPosição = %i\n\n", *(p+pos), pos);
	
	system("pause");
}
