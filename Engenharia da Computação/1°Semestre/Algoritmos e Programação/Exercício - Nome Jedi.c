#include <stdio.h>
#include <stdlib.h>
#include <string.h>    //strlen()
#include <ctype.h>    //toupper() - tolower()
#include <locale.h>

int main()
{
	setlocale(LC_ALL, "portuguese");
	
char nome[80], mae[80], cidade[20], njedi[6], sjedi[6], cjedi[8];
int i, z, j, tam;

	printf("Nome Completo: ");
	gets(nome);
	fflush(stdin);
	
	printf("\nNome da Mãe: ");
	gets(mae);
	fflush(stdin);
	
	printf("\nCidade de Nascimento: ");
	gets(cidade);
	fflush(stdin);
	
//nome Jedi
	tam=strlen(nome);
	
for(i=0;i<3;i++)
  {
  	if(i==0)
  	  njedi[i] = toupper(nome[i]);
		
	else
  	  njedi[i] = tolower(nome[i]); 
  }//for
  
for(z=tam;z>=0;z--)
  	if(nome[z]==' ')
    {
      for(j=0;j<2;j++,i++)
	    njedi[i]=tolower(nome[z+1+j]);
	  	z=-10;   //condição do for z se tornou falsa	
    }//if
    
	njedi[i]='\0';
	
	printf("\nNome Jedi: %s\n\n",njedi);
	
//sobrenome Jedi
for(i=0;i<2;i++)
  {
  	if(i==0)
  	  sjedi[i]=toupper(mae[i]);
  	  
  	else
  	  sjedi[i]=tolower(mae[i]);
  }//for
  
for(j=0;j<3;j++,i++)
  	sjedi[i]=tolower(cidade[j]);
	sjedi[i]='\0';
	printf("\nSobrenome Jedi: %s\n\n",sjedi);
	
//nome composto Jedi
	tam=strlen(sjedi);
	
for(i=0;i<3;i++)
  	cjedi[i]=njedi[i];
	cjedi[i]='-';
	i++;
	
for(j=tam-3;j<tam;j++,i++)
  {
  	if(j==tam-3)
  	  cjedi[i]=toupper(sjedi[j]);
  	  
  	else
  	  cjedi[i]=sjedi[j];
  }//for
  
	cjedi[i]='\0';
	printf("\nNome composto Jedi: %s\n\n",cjedi);
	
system("pause");
return 0;
}//main

