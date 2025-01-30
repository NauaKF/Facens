#include <stdio.h>
#include <stdlib.h>
#include <locale.h>

int main()
{
	setlocale(LC_ALL, "portuguese");

int matriz[10][10];
int linhas, colunas, l, c;
int soma[10], maior, pos;

do
	{
	printf("Digite o número de linhas: ");
 	scanf("%i",&linhas);
 	fflush(stdin);
 	
} while(linhas < 1 || linhas > 10);

do
	{
 	printf("Digite o número de colunas: ");
 	scanf("%i",&colunas);
 	fflush(stdin);
} while(colunas < 1 || colunas > 10);

printf("\n");

//leitura da matriz
for(l=0;l<linhas;l++)
  for(c=0;c<colunas;c++)
    {
    	printf("Matriz[%i][%i]= ",l,c);
    	scanf("%i",&matriz[l][c]);
    	fflush(stdin);
    }
    
//soma das colunas
for(c=0;c<colunas;c++)
  {
  	soma[c]=0;
	for(l=0;l<linhas;l++)
  		soma[c]+=matriz[l][c];
  }

printf("\n");

//mostrar a matriz
for(l=0;l<linhas;l++)
 	{
	for(c=0;c<colunas;c++)
    	printf("%i\t",matriz[l][c]);
    	printf("\n");   	
	}
  	
//verificação da maior coluna
for(c=0;c<colunas;c++)
  {
  	if(c==0)
	{
  		maior=soma[0];
  		pos=0;
  	}
  	printf("\n=========================================\n");
  	printf("Coluna %i ---> Soma = %i",c,soma[c]);

if(maior<soma[c])
  	{
  	  	maior=soma[c];
  	  	pos=c;
  	}
  }
	printf("\n\nMaior Coluna = %i\nSoma = %i\n\n",pos,maior);

system("pause");
return 0;
}
