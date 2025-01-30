#include <stdio.h>
#include <stdlib.h>
#include <string.h>

void inverte(char *p);
char maiuscula(char letra);
char minuscula(char letra);

main()
{
char frase[80];

printf("\nInverte a frase");
printf("\nDigite a frase: ");
gets(frase);
fflush(stdin);
inverte(frase);
printf("\nA frase invertida:\n%s",frase);
}//main

void inverte(char *p)
{
char aux;
int tam,i;
tam=strlen(p);    //qtde de letras na frase
//troca
for(i=0;i<(tam/2);i++)
  {
  	aux=*(p+i);
  	*(p+i)=*(p+tam-1-i);
  	*(p+tam-1-i)=aux;
  }//for
//maiuscula
for(i=0;i<tam;i++,p++)
   {
   	 *p=minuscula(*p);
   	 if(i==0)
   	   *p=maiuscula(*p);
   	 if(*p==' ')
   	   {
   	   	 i++;
   	   	 p++;
   	   	 *p=maiuscula(*p);
	   }//if
   }//for
}//inverte

char maiuscula(char letra)  
{                            
if(letra>='a' && letra<='z')
  return(letra-32);
return letra;	
}//maiuscula

char minuscula(char letra)  
{                            
if(letra>='A' && letra<='Z')
  return(letra+32);
return letra;	
}//minuscula
