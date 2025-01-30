#include <stdio.h>
#include <stdlib.h>
#include <locale.h>

void leitura(float *p, int q);
void resultante(float *pa, float *pb, float *pc, int q);
void imprime(float *p, int q);

main()
{
	setlocale(LC_ALL, "portuguese");
	
int qtd;	
float A[10], B[10], C[10];

	printf("Soma 2 vetores");
	
do{
	 printf("\nDigite a quantidade de elementos - máx.10: ");
	 scanf("%i", &qtd);
	 fflush(stdin);
} while (qtd<1 || qtd>10);	
	
	printf("\nLeitura - Vetor A: ");
	printf("\n");	
	leitura(A, qtd);
	
	printf("\nLeitura - Vetor B: ");
	printf("\n");		
	leitura(B, qtd);
	
	resultante(A, B, C, qtd);
	
	system("cls");
	
	printf("Imprime - Vetor A: ");
	imprime(A, qtd);
	
	printf("\nImprime - Vetor B: ");
	imprime(B, qtd);
	
	printf("\nImprime - Vetor C: ");
	imprime(C, qtd);
	
return 0;
} //main

void leitura(float *p, int q)
{
int i;

for(i=0; i<q; i++, p++)
	{
		printf("vet[%i] = ", i);
		scanf("%f", p);
		fflush(stdin);
	}
}

void resultante(float *pa, float *pb, float *pc, int q)
{
int i;

for(i=0; i<q; i++, pa++, pb++, pc++)
	*pc = *pa + *pb;
}

void imprime(float *p, int q)
{
int i;

for(i=0; i<q; i++, p++)
	printf("\nvet[%i] = %.2f", i, *p);
	
	printf("\n\n");
	
	system("pause");
}
