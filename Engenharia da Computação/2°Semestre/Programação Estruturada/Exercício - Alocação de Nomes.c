#include <stdio.h>
#include <stdlib.h>
#include <locale.h>
#include <string.h>

void aloca(char **p, int tam);
void maiuscula(char *p, int tam);
int busca_nome(char *p, char letra, char **pl);

main()
{
	setlocale(LC_ALL, "portuguese");
	
char *ptr = NULL, aux[20], op, letra, *pletra = NULL;
int cont=0, tam=0, cnome;

	do{
		printf("\nNome: ");
		gets(aux);
		fflush(stdin);
		
		tam += strlen(aux)+1; //+1 por conta do /0 (null)
		
		aloca(&ptr, tam);
		
	if(cont == 0)
		strcpy(ptr, aux); //pegar o conteúdo de aux e jogar em ptr
	else
	{
		strcat(ptr, "\n");
		strcat(ptr, aux);
	}	
		cont++;
		
		printf("\nDeseja continuar? <S/N> ");
		scanf("%c", &op);
		fflush(stdin);
		
	  }while(op!='n' && op!= 'N');

	maiuscula(ptr, tam);

	printf("\nTivemos %i nomes alocados:\n%s", cont, ptr);

	printf("\nLetra a ser buscada: ");
	scanf("%c", &letra);
	fflush(stdin);
	
	maiuscula(&letra, 1);
	
	cnome=busca_nome(ptr,letra,&pletra);
	
	if(cnome != 0)
		printf("\nTivemos %i nomes alocados com a letra %c: \n%s",cnome,letra,pletra);
		
	else
		printf("Não tivemos nomes com a letra %c", letra);
	
	printf("\n\n\n");
	system("pause");
}

void aloca(char **p, int tam)
{
	if((*p=(char*)realloc(*p, tam*sizeof(char))) == NULL)
	exit(1);
}

void maiuscula(char *p, int tam)
{
int i;
	
	for(i=0; i<tam; i++)
		if(*(p+i) >= 'a' && *(p+i) <= 'z')
			*(p+i) -= 32;		
}

int busca_nome(char *p, char letra, char **pl)
{
int i, cnome = 0, tam, cont = 0;

tam = strlen(p);

	for(i=0; i<tam; i++)
	{
		if(i == 0 && *(p+i) == letra || *(p+i) == '\n' && *(p+i+1) == letra)
		{	
			cnome++;
			
			do{
				aloca(pl, cont+1);
				*(*pl+cont) = *(p+i);
				cont++;
				i++;
				
			  } while(*(p+i) != '\n' && *(p+i) != '\0');
			  
			  i--; //para retornar ao /n
		}
	}
	return cnome;
}
