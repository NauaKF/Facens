#include <stdio.h>
#include <stdlib.h>
#include <locale.h>
#include <string.h>  //
#include <ctype.h>  //Colocar a letra maiuscúla

int main()
{
setlocale(LC_ALL, "portuguese");

char frase[80], letra;
int i, tam, cont=0;   

printf("Digite a frase desejada: ");
gets(frase);
fflush(stdin);

tam = strlen(frase); //Contar a quantidade de letras

printf("Digite a letra desejada: ");
scanf("%c",&letra);
fflush(stdin);

for(i=0;i<tam;i++)
  if(toupper(frase[i]) == toupper(letra)) 
    cont++;  
	   
printf("\nA letra '%c' aparece %i vez(es) na frase!\n\n",letra,cont);

system("pause");
return 0;
}
