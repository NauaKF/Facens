#include <stdio.h>
#include <stdlib.h>
#include <locale.h>

void leitura(float *p, int q);
void ordena(float *p, int q);
void imprime(float *p, int q);

int main()
{
	setlocale(LC_ALL, "portuguese");
	
int qtde;
float vet[10];

do{
	printf("Quantidade de elementos - máx.10: ");
	scanf("%i", &qtde);
	fflush(stdin);
  } while(qtde < 1 || qtde > 10);
  
  printf("\n");
  
  leitura(vet, qtde);
  ordena(vet, qtde);
  printf("\nVetor Ordenado:");
  imprime (vet, qtde);
}

void leitura (float *p, int q)
{
int i;
for(i=0; i<q; i++, p++)
	{
		printf("Vet[%i] = ", i);
		scanf("%f", p);
		fflush(stdin);
	}
} 

void ordena(float *p, int q)
{
int i, j;
float aux;

for(i=0; i<q; i++)
	for(j=i+1; j<q; j++)
		if(*(p+i) > *(p+j))
		{
			aux = *(p+i);
			*(p+i) = *(p+j);
			*(p+j) = aux;
		}
}

void imprime(float *p, int q)
{
int i;

for(i=0; i<q; i++, p++)
	printf("\nVet[%i] = %.2f", i, *p);
	printf("\n\n");
	
	system("pause");
}
