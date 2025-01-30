#include <stdio.h>
#include <stdlib.h>
#include <locale.h>

void mostraVetor(int vet[5]); //Protótipo
int calculaProduto(int vetA[5], int vetB[5]); //Protótipo

int main()
{
setlocale(LC_ALL, "portuguese");

int A[5], B[5], i;

for(i=0; i<5; i++)
{
	printf("Digite o valor de A[%i]: ", i);
	scanf("%i", &A[i]);
	fflush(stdin);
}

printf("\n");

for(i=0; i<5; i++)
{
	printf("Digite o valor de B[%i]: ", i);
	scanf("%i", &B[i]);
	fflush(stdin);
}
printf("\nProduto Escalar = %i", calculaProduto(A,B));
mostraVetor(A); //Chamada
return 0;	
}
int calculaProduto(int vetA[5], int vetB[5]) //Definição
{
	int resultado=0, i;
	for(i=0; i<5; i++)
	{
		resultado = resultado + vetA[i]*vetB[i];
	}
	return resultado;
}
void mostraVetor(int vet[5]) //Definição
{
	int i;
	for(i=0; i<5; i++)
	{
		printf("\n%i", vet[i]);
	}
}
