#include <stdio.h>
#include <stdlib.h>
#include <locale.h>

typedef struct agenda
{
	int     reg;
	char    nome [80];
	float   nota;
} agenda;

void aloca(agenda **p, int tam);
void cadastro(agenda *p);
void mostra(agenda *p, int tam);

int main()
{
	setlocale(LC_ALL, "portuguese");
	
char op;
int cont = 0;	

	agenda *pag = NULL;

do{
	system("cls");
	
	aloca(&pag, cont+1);
	cadastro(pag+cont);
	cont++;
	
	printf("\nDeseja continuar? <S/N>: ");
	scanf("%c", &op);
	fflush(stdin);
  } while(op != 'n' && op != 'N');
  
  	mostra(pag, cont);
  
}
 

void aloca(agenda **p, int tam)
{
	if((*p = (agenda*)realloc(*p,tam*sizeof(agenda))) == NULL)
		exit(1);
}


void cadastro(agenda *p)
{
static int n = 1;

	p->reg = n++;
	
	printf("Registro: %i", p->reg);
	
	printf("\nDigite seu nome: ");
	gets(p->nome);
	fflush(stdin);

do{
	printf("Digite a nota (0~10): ");
	scanf("%f", &p->nota);
	fflush(stdin);
  } while(p->nota < 0 || p->nota > 10);
}

void mostra(agenda *p, int tam)
{
int i;

	for(i=0; i<tam; i++, p++)
		printf("\nRegistro: %i\nNome: %s\nNota: %.2f\n", p->reg, p->nome, p->nota);

	printf("\n\n");
	system("pause");
}
