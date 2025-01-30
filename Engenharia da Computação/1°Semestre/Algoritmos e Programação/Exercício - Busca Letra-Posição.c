#include <stdio.h>
#include <stdlib.h>
#include <string.h>  //funçao strlen()
#include <ctype.h>   //função toupper()

int main()
{
char frase[80],letra;
int i,tam,cont=0,pos[80];   //contar qtde de letras iguais a procurada

	printf("Digite uma frase: ");
	gets(frase);
	fflush(stdin);
	
	tam=strlen(frase);
	
	printf("\nDigite uma letra: ");
	scanf("%c",&letra);
	fflush(stdin);
	
for(i=0;i<tam;i++)
  if(toupper(frase[i])==toupper(letra))
    {
    	pos[cont]=i+1;
		cont++;          //igual - achou a letra
    }//if
    
if(cont==0)
  printf("\nNao ha ocorrencia da letra %c na frase\n\n",letra);
  
else
  {
  	  printf("\nA letra %c ocorre %i vez(es) na frase nas posicoes:\n",letra,cont);
  	for(i=0;i<cont;i++)
  	  printf("%i\t",pos[i]);
  }//else
  
	printf("\n\n");

system("pause");
return 0;
}//main
