#include <stdio.h>
#include <stdlib.h>

int main()
{
int mat[100],tam,i,j,aux;

do
	{
	printf("Digite o tamanho do vetor (max.100): ");
 	scanf("%i",&tam);
 	fflush(stdin);
 	
} while (tam < 1 || tam > 100);

//leitura do vetor

for(i=0;i<tam;i++)
  	{
	printf("mat[%i]= ",i);
  	scanf("%i",&mat[i]);
  	fflush(stdin);
  	}
  	
//ordena o vetor

for(i=0;i<tam;i++)
  for(j=i+1;j<tam;j++)
    if(mat[i]>mat[j])
      {
      	aux=mat[i]; 
      	mat[i]=mat[j]; 
      	mat[j]=aux; 
      }
      
//mostrar 
	system("cls");
	system("color 2");
	printf("O Vetor Ordenado ficou assim:\n");
	
for(i=0;i<tam;i++)
  	printf("mat[%i]= %i\n",i,mat[i]);
  	
  	printf("\n");
system("pause");	
return 0;  
}
