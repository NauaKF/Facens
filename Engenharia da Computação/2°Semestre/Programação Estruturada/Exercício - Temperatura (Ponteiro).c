#include <stdio.h>
#include <stdlib.h>
#include <locale.h>

void leitura(float *p, int tam);
int maior_temp(float *p, int tam);
float media_temp(float *p, int tam);
int inferior_media(float *p, int tam, int *inf, float m);
void mostra(float *p, int *inf, int qtd);

int main()
{
	setlocale(LC_ALL, "portuguese");
	
float temp[31], media;
int dias, pos_maior, inf[31], qtd;

do
{
	printf("Digite o número de dias: ");
	scanf("%i", &dias);
	fflush(stdin);
} while(dias < 1 || dias > 31);

	printf("\n");
	
	leitura(temp, dias);
	
	pos_maior = maior_temp(temp, dias);
	printf("\nMaior temperatura = %.2f - %i°dia", *(temp+pos_maior), pos_maior+1);
	printf("\n");
	
	media = media_temp(temp, dias);
	printf("\nTemperatura média = %.2f", media);
	printf("\n");
	
	qtd = inferior_media(temp, dias, inf, media);
	
	mostra(temp, inf, qtd);
	
	getch();
	
return 0;
}

void leitura(float *p, int tam)
{
int i;

for(i=0; i<tam; i++, p++)
{
	printf("Temperatura do %i°dia: ", i+1);
	scanf("%f", p);
	fflush(stdin);
}
}

int maior_temp(float *p, int tam)
{
int i, pos = 0;
float aux; //auxilia na mudança para a maior temperatura

	aux = *p;
	p++;
	
for(i=1; i<tam; i++, p++)
{
	if(*p > aux)
	{
		aux = *p;
		pos = i;	
	}	
}
return pos;
}

float media_temp(float *p, int tam)
{
float soma = 0;
int i;

for(i=0; i<tam; i++, p++)
{
	soma += *p;	
}

return (soma/tam);
}

int inferior_media(float *p, int tam, int *inf, float m)
{
int i, qtd = 0;

for(i=0; i<tam; i++, p++)
{
	if(*p < m)
	{
		qtd++; //contagem
		*inf = i;
		inf++;
	}
}
return qtd;
}

void mostra(float *p, int *inf, int qtd)
{
int i;

for(i=0; i<qtd; i++, inf++)
{
	printf("\nTemperatura = %.2f - %i°dia", *(p+*inf), *inf+1);
}
}
