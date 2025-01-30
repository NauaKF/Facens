#include <stdio.h>
#include <stdlib.h>
#include <locale.h>

void leitura(float *p, int q);
void media_a(float *p1, float *p2, float *pm, int q);
void imprime(float *p, int q);

main()
{
	setlocale(LC_ALL, "portuguese");
	
int qtd;
float n1[10], n2[10], media[10];

printf("Média dos alunos");

do{
	printf("\nDigite a quantidade de elementos - máx.10: ");
	scanf("%i", &qtd);
	fflush(stdin);
} while(qtd<1 || qtd>10);

	printf("\nLeitura - Nota 1: ");
	printf("\n");
	leitura(n1, qtd);
	
	printf("\nLeitura - Nota 2: ");
	printf("\n");
	leitura(n2, qtd);
	
	media_a(n1, n2, media, qtd);

	system("cls");
	
	printf("Imprime - Nota 1: ");
	imprime(n1, qtd);
	
	printf("\nImprime - Nota 2: ");
	imprime(n2, qtd);
	
	printf("\nImprime - Média: ");
	imprime(media, qtd);
	
return 0;
} //main

void leitura(float *p, int q)
{
int i;

for (i=0; i<q; i++, p++)
	{
		do{
			printf("Nota[%i] = ", i);
			scanf("%f", p);
			fflush(stdin);
		}while (*p<0 || *p>10);
	}	
}

void imprime(float *p, int q)
{
int i;
for (i=0; i<q; i++, p++)
	printf("\nVet[%i] = %.2f", i, *p);
	printf("\n");
	
}
void media_a(float *p1, float *p2, float *pm, int q)
{
int i;

for(i=0; i<q; i++, p1++, p2++)
	*(pm+i) = (*p1 + *p2) / 2; //Simulando um ponteiro constante. Poderia colocar o "pm" dentro do for incrementando também
	
for(i=0; i<q; i++, pm++)
	{
		printf("\nA média do %i°aluno = %.2f", i+1, *pm);
		
if(*pm >= 7)
	printf("\nAPROVADO!");
			
else 
{
	if(*pm >= 4)
		printf("\nEXAME!");
			
	else
		printf("\nREPROVADO!");
}
}	
	printf("\n\n");
	
	system("pause");
}
