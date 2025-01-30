#include <stdio.h>
#include <stdlib.h>
#include <locale.h>
#include <string.h>

typedef struct dados{
	int 	reg;
	int 	qtde;
	float 	preco;
	char 	produto [20];
} dados;

void aloca(dados **p, int tam);
int verifica();
void cadastro(dados *p);
void altera(dados *p);
int busca(dados *p, int num_reg);
void grava(dados *p, char *str, int pos);
void mostra(dados *p);

main()
{
	setlocale(LC_ALL, "portuguese");

int op;
int qtde;
	
	dados *pd = NULL;
	
	aloca(&pd, 1);
	
	do{
		system("cls");
		printf("[1]Cadastro\n[2]Altera\n[3]Mostra\n[4]Fim\n\nDigite a opção desejada: ");
		scanf("%i", &op);
		fflush(stdin);
		
		switch(op)
		{
			case 1: cadastro(pd);
					break;
			case 2: altera(pd);
					break;
			case 3: mostra(pd);
					break;
		}
	}while(op != 4);
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

void cadastro(dados *p)
{
int qtde;

	qtde = verifica();  //quantos registros tem no arquivo

	p->reg = qtde+1;
	
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
	
	grava(p, "ab", 1);
}

void altera(dados *p)
{
int num_reg, pos;

	mostra(p);	
	
	printf("\nDigite o registro a ser alterado: ");
	scanf("%i", &num_reg);
	fflush(stdin);
	
	pos = busca(p, num_reg);
	
if(pos == -1) //significa que não achou
	printf("\nRegistro inválido!\n\n");
else
{
	printf("\nRegistro: %i\nProduto: %s\nQuantidade: %i\nPreço: %.2f\n\n", p->reg, p->produto, p->qtde, p->preco);
	
	printf("\nDigite o novo preço: ");
	scanf("%f", &p->preco);
	fflush(stdin);
	
	grava(p, "rb+", pos);
	
	printf("\nPreço alterado com sucesso!\n\n");
}
}

int busca(dados *p, int num_reg)
{
FILE *fptr = NULL;
int i, achou = -1, qtde;
	
	qtde = verifica();
	
	system("cls");	
	
if((fptr = fopen("estoque.bin", "rb")) == NULL)
	printf("\nErro ao abrir o arquivo!");
	
else
{
	for(i=0; i<qtde; i++)
 	{
 		fseek(fptr, i*sizeof(dados), 0);  //caminhar com fptr dentro do arquivo
		fread(p, sizeof(dados), 1, fptr); //1 = tanto de elementos que vou ler
		if(p->reg == num_reg)
		{
			achou = i; //posição em que ele se encontra
			i = qtde; //para garantir a saída do for
		}
	}
	fclose(fptr); //dentro do else por conta do rb 
}
return achou;
}

void grava(dados *p, char *str, int pos)
{
FILE *fptr = NULL;

if((fptr = fopen("estoque.bin", str)) == NULL)
	printf("\nErro ao abrir o arquivo!");
else
{
	if(strcmp(str, "rb+") == 0)
		fseek(fptr, pos*sizeof(dados), 0);
		
	fwrite(p, sizeof(dados), 1, fptr);
}	
fclose(fptr); //fora do else por conta do ab e rb+
}

void mostra(dados *p)
{
int i, qtde;
FILE *fptr = NULL;

	qtde = verifica();

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
