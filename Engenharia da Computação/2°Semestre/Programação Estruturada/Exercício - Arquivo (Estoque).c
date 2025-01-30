#include <stdio.h>
#include <stdlib.h>
#include <locale.h>

typedef struct dados{
	int 	reg;
	int 	qtde;
	float 	preco;
	char 	produto [20];
} dados;

void aloca(dados **p, int tam);
int verifica();
void cadastro(dados *p, int qtde);
void grava(dados *p);
void mostra(dados *p, int qtde);

main()
{
	setlocale(LC_ALL, "portuguese");

char op;
int qtde;
	
	dados *pd = NULL;
	
	aloca(&pd, 1);
	qtde = verifica();
	
	do{
		cadastro(pd, qtde+1);
		qtde++;
		
		printf("\nDeseja continuar? <S/N>: ");
		scanf("%c", &op);
		fflush(stdin);
	}while(op != 'n' && op != 'N');

	mostra(pd, qtde);
}

void aloca(dados **p, int tam)
{
	if((*p = (dados*)realloc(*p, tam*sizeof(dados))) == NULL)
		exit(1);
}

int verifica()
{
FILE *fptr = NULL;
long int cont = 0;
	
	if((fptr = fopen("estoque.bin", "rb")) == NULL)
		return cont;
	else
	{
		fseek(fptr, 0, 2); //posiciona o fptr no fim do arquivo
		cont = ftell(fptr)/sizeof(dados); 
		fclose(fptr);     //dentro do else por conta do rb
		return cont; 
	}
}

void cadastro(dados *p, int qtde)
{
	p->reg = qtde;
	
	printf("\nRegistro: %i", p->reg);
	
	printf("\nProduto: ");
	gets(p->produto);
	fflush(stdin);
	
	printf("Quantidade: ");
	scanf("%i", &(p->qtde));
	fflush(stdin);
	
	printf("Preço: ");
	scanf("%f", &(p->preco));
	fflush(stdin);
	
	grava(p);
}

void grava(dados *p)
{
FILE *fptr = NULL;

if((fptr = fopen("estoque.bin", "ab")) == NULL)
	printf("\nErro ao abrir o arquivo!");
else
	fwrite(p, sizeof(dados), 1, fptr);
	
fclose(fptr); //fora do else por conta do ab
}

void mostra(dados *p, int qtde)
{
int i;
FILE *fptr = NULL;

system("cls");

if((fptr = fopen("estoque.bin", "rb")) == NULL)
	printf("\nErro ao abrir o arquivo!");
else
{
	for(i=0; i<qtde; i++)
	{
		fseek(fptr, i*sizeof(dados), 0);
		fread(p, sizeof(dados), 1, fptr);
		printf("\nRegistro: %i\nProduto: %s\nQuantidade: %i\nPreço: %.2f\n", p->reg, p->produto, p->qtde, p->preco);
	}
fclose(fptr);
}
printf("\n\n");
system("pause");
}
